#include "KonnektingDevice.h"
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "fauxmoESP.h"

// include device related configuration code, created by "KONNEKTING CodeGenerator"
#include "kdevice_Alexa_on_KNX.h"


#define DEVICES 10
#define FIRST_PARAM 5
#define PARAM_AMOUNT 5
#define FIRST_COMBJ 0
#define COMBJ_AMOUNT 2

#define KNX_SERIAL Serial // ESP8266 use Serial


// ################################################
// ### IO Configuration
// ################################################
#define PROG_LED_PIN 5
#define PROG_BUTTON_PIN 12

int initDelay = 0;
String ssid = "";
String pass = "";
byte   type[DEVICES];
String room[DEVICES];
String name[DEVICES];
byte  value[DEVICES];
byte  scene[DEVICES];

fauxmoESP fauxmo;

void wifiSetup() {
    // Set WIFI module to STA mode
        WiFi.mode(WIFI_STA);

        // Connect
        Serial1.printf("[WIFI] Connecting to %s ", ssid.c_str());

        WiFi.begin(ssid.c_str(), pass.c_str());
    // Wait
    while (WiFi.status() != WL_CONNECTED) {
        Serial1.print(".");
        delay(200);
    }
    Serial1.println();

    // Connected!
    Serial1.printf("[WIFI] STATION Mode, SSID: %s, IP address: %s\n", WiFi.SSID().c_str(), WiFi.localIP().toString().c_str());

}

void setup() {
    
    Serial1.begin(9600);
    
    Serial1.println("Alexa on KNX");
    wifiSetup();
    
    Konnekting.init(KNX_SERIAL,PROG_BUTTON_PIN,PROG_LED_PIN,MANUFACTURER_ID,DEVICE_ID,REVISION);
    Serial1.println("KNX init is ready");

    if (!Konnekting.isFactorySetting()) {
        initDelay = (int) Konnekting.getUINT16Param(PARAM_initialDelay); //blink every xxxx ms
        ssid = Konnekting.getSTRING11Param(PARAM_param1) + Konnekting.getSTRING11Param(PARAM_param2);
        pass = Konnekting.getSTRING11Param(PARAM_param3) + Konnekting.getSTRING11Param(PARAM_param4);
        
        for(byte d = 0;d < DEVICES;d++){
            type[d]  = Konnekting.getUINT8Param((int)(d*PARAM_AMOUNT+FIRST_PARAM));
            room[d]  = Konnekting.getSTRING11Param((int)(d*PARAM_AMOUNT+FIRST_PARAM + 1));
            name[d]  = Konnekting.getSTRING11Param((int)(d*PARAM_AMOUNT+FIRST_PARAM + 2));
            value[d] = (byte)Konnekting.getUINT8Param((int)(d*PARAM_AMOUNT+FIRST_PARAM + 3));
            scene[d] = (byte)Konnekting.getUINT8Param((int)(d*PARAM_AMOUNT+FIRST_PARAM + 4));
            if(type[d] != 0){
                String tempstring = "";
                char tempchar[24];
                if(room[d].length() == 0){
                    tempstring = name[d];
                }else if(name[d].length() == 0){
                    tempstring = room[d];
                }else{
                    tempstring = room[d] + "" + name[d];
                }
                tempstring.toCharArray(tempchar,tempstring.length()+1);
                fauxmo.addDevice(tempchar);
                Serial1.print("Device ");
                Serial1.print(tempchar);
                Serial1.println(" added");
            }
        }
    
    }else{
        Konnekting.toggleProgState();
        Serial1.println("Factory settings -> prog mode on");
    }

    fauxmo.onMessage([](unsigned char device_id, const char * device_name, bool state) {
        int d = (int)device_id;
        Serial1.printf("[MAIN] Device #%d (%s) state: %s", d, device_name, state ? "ON" : "OFF");
        Serial1.println("");
 				if(type[d] == 1){
            if(value[d] == 1){
            		Knx.write(d*COMBJ_AMOUNT,!state);
            		Serial1.printf("comObj: %d, state: %d",d*COMBJ_AMOUNT,!state);
            }else{
              	Knx.write(d*COMBJ_AMOUNT,state);
              	Serial1.printf("comObj: %d, state: %d",d*COMBJ_AMOUNT,state);
            }
 				}else if(type[d] == 2){
				    Knx.write(d*COMBJ_AMOUNT+1,(int)scene[d]);
            Serial1.printf("comObj: %d, scene: %d",d*COMBJ_AMOUNT+1,scene[d]);
 				}

    });
    Serial1.println("Setup is ready");
}

// ################################################
// ### LOOP
// ################################################

void loop() {

    // Do KNX related stuff (like sending/receiving KNX telegrams)
    // This is required in every KONNEKTING aplication sketch

    if (Konnekting.isReadyForApplication()) {
        fauxmo.handle();
    }  
}

// ################################################
// ### KNX EVENT CALLBACK
// ################################################

void knxEvents(byte index) {
    // nothing to do in this sketch

};


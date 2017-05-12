Alexa on KNX
===========================================
This project is proof of concept! 
With this project you can turn on and off up to 10 KNX devices with Alexa.

### Software ###
You need not additional libraries. All needed stuff is allready included and customized.
[KONNEKTING Suite beta4](https://github.com/KONNEKTING/KonnektingSuite/releases/tag/1.0.0-BETA4) is necessary for device setup
#### Included libraries ####
[Konnekting Device Library Beta4](https://github.com/KONNEKTING/KonnektingDeviceLibrary)
[FAUXMO ESP 2.0.0](https://bitbucket.org/xoseperez/fauxmoesp)
[ESPAsyncTCP](https://github.com/me-no-dev/ESPAsyncTCP)
[ESPAsyncWebServer](https://github.com/me-no-dev/ESPAsyncWebServer)


### Hardware ###
- KNX bus coupler (e.g. Siemens 5WG1117-2AB129)
- ADUM1201
- ESP8266 powered devices (e.g. WeMos R1 mini or NodeMCU)

### Connection ###

| bus coupler | ADUM1201 | WeMos R1 mini (ESP12) |
|-------------|----------|-----------------------|
| VCC         | 1 + + 8  | 3.3V (VCC)            |
| RX          | 2 < < 7  | D8 (GPIO15)           |
| TX          | 3 > > 6  | D7 (GPIO13)           |
| GND         | 4 - - 5  | GND (GND)             |

For debuging connect a USB-to-UART adapter: RX <> D4 (GPIO2) and GND <> GND.
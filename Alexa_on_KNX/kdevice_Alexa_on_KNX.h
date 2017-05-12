#define MANUFACTURER_ID 7070
#define DEVICE_ID 201
#define REVISION 0

#define COMOBJ_device1bool 0
#define COMOBJ_device1scene 1
#define COMOBJ_device2bool 2
#define COMOBJ_device2scene 3
#define COMOBJ_device3bool 4
#define COMOBJ_device3scene 5
#define COMOBJ_device4bool 6
#define COMOBJ_device4scene 7
#define COMOBJ_device5bool 8
#define COMOBJ_device5scene 9
#define COMOBJ_device6bool 10
#define COMOBJ_device6scene 11
#define COMOBJ_device7bool 12
#define COMOBJ_device7scene 13
#define COMOBJ_device8bool 14
#define COMOBJ_device8scene 15
#define COMOBJ_device9bool 16
#define COMOBJ_device9scene 17
#define COMOBJ_device10bool 18
#define COMOBJ_device10scene 19
#define PARAM_initialDelay 0
#define PARAM_param1 1
#define PARAM_param2 2
#define PARAM_param3 3
#define PARAM_param4 4
#define PARAM_device1Active 5
#define PARAM_device1Room 6
#define PARAM_device1Name 7
#define PARAM_device1OnOff 8
#define PARAM_device1Scene 9
#define PARAM_device2Active 10
#define PARAM_device2Room 11
#define PARAM_device2Name 12
#define PARAM_device2OnOff 13
#define PARAM_device2Scene 14
#define PARAM_device3Active 15
#define PARAM_device3Room 16
#define PARAM_device3Name 17
#define PARAM_device3OnOff 18
#define PARAM_device3Scene 19
#define PARAM_device4Active 20
#define PARAM_device4Room 21
#define PARAM_device4Name 22
#define PARAM_device4OnOff 23
#define PARAM_device4Scene 24
#define PARAM_device5Active 25
#define PARAM_device5Room 26
#define PARAM_device5Name 27
#define PARAM_device5OnOff 28
#define PARAM_device5Scene 29
#define PARAM_device6Active 30
#define PARAM_device6Room 31
#define PARAM_device6Name 32
#define PARAM_device6OnOff 33
#define PARAM_device6Scene 34
#define PARAM_device7Active 35
#define PARAM_device7Room 36
#define PARAM_device7Name 37
#define PARAM_device7OnOff 38
#define PARAM_device7Scene 39
#define PARAM_device8Active 40
#define PARAM_device8Room 41
#define PARAM_device8Name 42
#define PARAM_device8OnOff 43
#define PARAM_device8Scene 44
#define PARAM_device9Active 45
#define PARAM_device9Room 46
#define PARAM_device9Name 47
#define PARAM_device9OnOff 48
#define PARAM_device9Scene 49
#define PARAM_device10Active 50
#define PARAM_device10Room 51
#define PARAM_device10Name 52
#define PARAM_device10OnOff 53
#define PARAM_device10Scene 54
        
KnxComObject KnxDevice::_comObjectsList[] = {
    /* Index 0 - device1bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 1 - device1scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 2 - device2bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 3 - device2scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 4 - device3bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 5 - device3scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 6 - device4bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 7 - device4scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 8 - device5bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 9 - device5scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 10 - device6bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 11 - device6scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 12 - device7bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 13 - device7scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 14 - device8bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 15 - device8scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 16 - device9bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 17 - device9scene */ KnxComObject(KNX_DPT_17_001, 0x34),
    /* Index 18 - device10bool */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 19 - device10scene */ KnxComObject(KNX_DPT_17_001, 0x34)
};
const byte KnxDevice::_numberOfComObjects = sizeof (_comObjectsList) / sizeof (KnxComObject); // do not change this code
       
byte KonnektingDevice::_paramSizeList[] = {
    /* Index 0 - initialDelay */ PARAM_UINT16,
    /* Index 1 - param1 */ PARAM_STRING11,
    /* Index 2 - param2 */ PARAM_STRING11,
    /* Index 3 - param3 */ PARAM_STRING11,
    /* Index 4 - param4 */ PARAM_STRING11,
    /* Index 5 - device1Active */ PARAM_UINT8,
    /* Index 6 - device1Room */ PARAM_STRING11,
    /* Index 7 - device1Name */ PARAM_STRING11,
    /* Index 8 - device1OnOff */ PARAM_UINT8,
    /* Index 9 - device1Scene */ PARAM_UINT8,
    /* Index 10 - device2Active */ PARAM_UINT8,
    /* Index 11 - device2Room */ PARAM_STRING11,
    /* Index 12 - device2Name */ PARAM_STRING11,
    /* Index 13 - device2OnOff */ PARAM_UINT8,
    /* Index 14 - device2Scene */ PARAM_UINT8,
    /* Index 15 - device3Active */ PARAM_UINT8,
    /* Index 16 - device3Room */ PARAM_STRING11,
    /* Index 17 - device3Name */ PARAM_STRING11,
    /* Index 18 - device3OnOff */ PARAM_UINT8,
    /* Index 19 - device3Scene */ PARAM_UINT8,
    /* Index 20 - device4Active */ PARAM_UINT8,
    /* Index 21 - device4Room */ PARAM_STRING11,
    /* Index 22 - device4Name */ PARAM_STRING11,
    /* Index 23 - device4OnOff */ PARAM_UINT8,
    /* Index 24 - device4Scene */ PARAM_UINT8,
    /* Index 25 - device5Active */ PARAM_UINT8,
    /* Index 26 - device5Room */ PARAM_STRING11,
    /* Index 27 - device5Name */ PARAM_STRING11,
    /* Index 28 - device5OnOff */ PARAM_UINT8,
    /* Index 29 - device5Scene */ PARAM_UINT8,
    /* Index 30 - device6Active */ PARAM_UINT8,
    /* Index 31 - device6Room */ PARAM_STRING11,
    /* Index 32 - device6Name */ PARAM_STRING11,
    /* Index 33 - device6OnOff */ PARAM_UINT8,
    /* Index 34 - device6Scene */ PARAM_UINT8,
    /* Index 35 - device7Active */ PARAM_UINT8,
    /* Index 36 - device7Room */ PARAM_STRING11,
    /* Index 37 - device7Name */ PARAM_STRING11,
    /* Index 38 - device7OnOff */ PARAM_UINT8,
    /* Index 39 - device7Scene */ PARAM_UINT8,
    /* Index 40 - device8Active */ PARAM_UINT8,
    /* Index 41 - device8Room */ PARAM_STRING11,
    /* Index 42 - device8Name */ PARAM_STRING11,
    /* Index 43 - device8OnOff */ PARAM_UINT8,
    /* Index 44 - device8Scene */ PARAM_UINT8,
    /* Index 45 - device9Active */ PARAM_UINT8,
    /* Index 46 - device9Room */ PARAM_STRING11,
    /* Index 47 - device9Name */ PARAM_STRING11,
    /* Index 48 - device9OnOff */ PARAM_UINT8,
    /* Index 49 - device9Scene */ PARAM_UINT8,
    /* Index 50 - device10Active */ PARAM_UINT8,
    /* Index 51 - device10Room */ PARAM_STRING11,
    /* Index 52 - device10Name */ PARAM_STRING11,
    /* Index 53 - device10OnOff */ PARAM_UINT8,
    /* Index 54 - device10Scene */ PARAM_UINT8
};
const byte KonnektingDevice::_numberOfParams = sizeof (_paramSizeList); // do not change this code
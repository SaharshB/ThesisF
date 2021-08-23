/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SendToUnity
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\SendToUnity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SendToUnity.h"
//#[ ignore
#define IMRPkg_SendToUnity_SendToUnity_SERIALIZE OM_NO_OP

#define IMRPkg_SendToUnity_callMain_SERIALIZE OM_NO_OP
//#]

//## package IMRPkg

//## class SendToUnity
//#[ ignore
SendToUnity::fire_SP_C::fire_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::fire_SP_C::~fire_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::fire_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::fire_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::fire_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::fire_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::fire_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::Extinguisher_SP_C::Extinguisher_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::Extinguisher_SP_C::~Extinguisher_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::Extinguisher_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::Extinguisher_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::Extinguisher_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::Extinguisher_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::Extinguisher_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::fanSpeed_SP_C::fanSpeed_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::fanSpeed_SP_C::~fanSpeed_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::fanSpeed_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::fanSpeed_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::fanSpeed_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::fanSpeed_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::fanSpeed_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::StateHVAC_SP_C::StateHVAC_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::StateHVAC_SP_C::~StateHVAC_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::StateHVAC_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::StateHVAC_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::StateHVAC_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::StateHVAC_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::StateHVAC_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::temperature_SP_C::temperature_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::temperature_SP_C::~temperature_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::temperature_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::temperature_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::temperature_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::temperature_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::temperature_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::interiorLightIntensity_SP_C::interiorLightIntensity_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::interiorLightIntensity_SP_C::~interiorLightIntensity_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::interiorLightIntensity_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::interiorLightIntensity_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::interiorLightIntensity_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::interiorLightIntensity_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::interiorLightIntensity_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::Door_SP_C::Door_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::Door_SP_C::~Door_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::Door_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* SendToUnity::Door_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* SendToUnity::Door_SP_C::getOutBound(void) {
    return this;
}

void SendToUnity::Door_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::Door_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::userCode_SP_C::userCode_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::userCode_SP_C::~userCode_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::userCode_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::userCode_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::userCode_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::userCode_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::userCode_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::Call_SP_C::Call_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::Call_SP_C::~Call_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::Call_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::Call_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::Call_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::Call_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::Call_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::alarm_SP_C::alarm_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::alarm_SP_C::~alarm_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::alarm_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::alarm_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::alarm_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::alarm_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::alarm_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::hologram_SP_C::hologram_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::hologram_SP_C::~hologram_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::hologram_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::hologram_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::hologram_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::hologram_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::hologram_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

bool SendToUnity::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void SendToUnity::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_11_subState = OMNonState;
    state_11_active = OMNonState;
    state_11_timeout = NULL;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    state_10_timeout = NULL;
}

int SendToUnity::callMain(void) {
    NOTIFY_OPERATION(callMain, callMain(), 0, IMRPkg_SendToUnity_callMain_SERIALIZE);
    //#[ operation callMain()
    #ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN 
    #define _WINSOCK_DEPRECATED_NO_WARNINGS
    #endif      
    
    #include <stdlib.h> 
    
    WSAStartup(0x0101, &ws);
    
    
    /*
    fire - int
    Extinguisher - int
    Call - int
    alarm - bool
    //AccessCode
    //AccessCode2
    //AccessCode3
    //CurrentUser
    interiorLightIntensity - int
    userCode - int
    Door - int
    fanSpeed - int
    StateHVAC - int
    temperature -int
    //AmbientLightIntensity
    hologram - int
    */
    
    char out_string_for_test[1024];
    char out_string_for_test1[1024];
    char out_string_for_test2[1024];
    char out_string_for_intensity[1024];
    char out_string_for_temperature[1024];
    char out_string_for_hvac[1024];
    
    ////////
    char out_string_for_fire[1024];
    char out_string_for_Extinguisher[1024];
    char out_string_for_Call[1024];
    char out_string_for_alarm[1024];
    //char out_string_for_AccessCode[1024];
    //char out_string_for_AccessCode2[1024];
    //char out_string_for_AccessCode3[1024];
    //char out_string_for_CurrentUser[1024];
    char out_string_for_interiorLightIntensity[1024];
    char out_string_for_userCode[1024];
    char out_string_for_Door[1024];
    //char out_string_for_fanSpeed[1024];
    char out_string_for_StateHVAC[1024];
    //char out_string_for_Temp[1024];
    //char out_string_for_AmbientLightIntensity[1024];
    char out_string_for_hologram[1024];
    
    
    //TEST
    ZeroMemory(&address_test, sizeof(address_test));
    address_test.sin_family = AF_INET;
    address_test.sin_port = htons(portTest);
    address_test.sin_addr.s_addr = inet_addr(serverName);
    
    //TEST1
    ZeroMemory(&address_test1, sizeof(address_test1));
    address_test1.sin_family = AF_INET;
    address_test1.sin_port = htons(portTest1);
    address_test1.sin_addr.s_addr = inet_addr(serverName);
    
    //TEST2
    ZeroMemory(&address_test2, sizeof(address_test2));
    address_test2.sin_family = AF_INET;
    address_test2.sin_port = htons(portTest2);
    address_test2.sin_addr.s_addr = inet_addr(serverName);
    
    //LIGHT INTENSITY
    ZeroMemory(&address_intensity, sizeof(address_intensity));
    address_intensity.sin_family = AF_INET;
    address_intensity.sin_port = htons(portIntensity);
    address_intensity.sin_addr.s_addr = inet_addr(serverName);
    
    //TEMPERATURE
    ZeroMemory(&address_temperature, sizeof(address_temperature));
    address_temperature.sin_family = AF_INET;
    address_temperature.sin_port = htons(portTemperature);
    address_temperature.sin_addr.s_addr = inet_addr(serverName);
    
    //HVAC
    ZeroMemory(&address_hvac, sizeof(address_hvac));
    address_hvac.sin_family = AF_INET;
    address_hvac.sin_port = htons(portHVAC);
    address_hvac.sin_addr.s_addr = inet_addr(serverName);
    
    /////////
    
    //fire_float
    ZeroMemory(&address_fire, sizeof(address_fire));
    address_fire.sin_family = AF_INET;
    address_fire.sin_port = htons(portfire);
    address_fire.sin_addr.s_addr = inet_addr(serverName);
    
    //Extinguisher
    ZeroMemory(&address_Extinguisher, sizeof(address_Extinguisher));
    address_Extinguisher.sin_family = AF_INET;
    address_Extinguisher.sin_port = htons(portExtinguisher);
    address_Extinguisher.sin_addr.s_addr = inet_addr(serverName);
    
    //Call
    ZeroMemory(&address_Call, sizeof(address_Call));
    address_Call.sin_family = AF_INET;
    address_Call.sin_port = htons(portCall);
    address_Call.sin_addr.s_addr = inet_addr(serverName);
    
    //alarm
    ZeroMemory(&address_alarm, sizeof(address_alarm));
    address_alarm.sin_family = AF_INET;
    address_alarm.sin_port = htons(portalarm);
    address_alarm.sin_addr.s_addr = inet_addr(serverName);
    /*
    //AccessCode
    ZeroMemory(&address_AccessCode, sizeof(address_AccessCode));
    address_AccessCode.sin_family = AF_INET;
    address_AccessCode.sin_port = htons(portAccessCode);
    address_AccessCode.sin_addr.s_addr = inet_addr(serverName);
    
    //AccessCode2
    ZeroMemory(&address_AccessCode2, sizeof(address_AccessCode2));
    address_AccessCode2.sin_family = AF_INET;
    address_AccessCode2.sin_port = htons(portAccessCode2);
    address_AccessCode2.sin_addr.s_addr = inet_addr(serverName);
    
    //AccessCode3
    ZeroMemory(&address_AccessCode3, sizeof(address_AccessCode3));
    address_AccessCode3.sin_family = AF_INET;
    address_AccessCode3.sin_port = htons(portAccessCode3);
    address_AccessCode3.sin_addr.s_addr = inet_addr(serverName);
    
    //CurrentUser
    ZeroMemory(&address_CurrentUser, sizeof(address_CurrentUser));
    address_CurrentUser.sin_family = AF_INET;
    address_CurrentUser.sin_port = htons(portCurrentUser);
    address_CurrentUser.sin_addr.s_addr = inet_addr(serverName);
    */
    //interiorLightIntensity
    ZeroMemory(&address_interiorLightIntensity, sizeof(address_interiorLightIntensity));
    address_interiorLightIntensity.sin_family = AF_INET;
    address_interiorLightIntensity.sin_port = htons(portinteriorLightIntensity);
    address_interiorLightIntensity.sin_addr.s_addr = inet_addr(serverName);
    
    //userCode
    ZeroMemory(&address_userCode, sizeof(address_userCode));
    address_userCode.sin_family = AF_INET;
    address_userCode.sin_port = htons(portuserCode);
    address_userCode.sin_addr.s_addr = inet_addr(serverName);
    
    //Door
    ZeroMemory(&address_Door, sizeof(address_Door));
    address_Door.sin_family = AF_INET;
    address_Door.sin_port = htons(portDoor);
    address_Door.sin_addr.s_addr = inet_addr(serverName);
    
    //fanSpeed
    //ZeroMemory(&address_fanSpeed, sizeof(address_fanSpeed));
    //address_fanSpeed.sin_family = AF_INET;
    //address_fanSpeed.sin_port = htons(portfanSpeed);
    //address_fanSpeed.sin_addr.s_addr = inet_addr(serverName);
    
    //StateHVAC
    ZeroMemory(&address_StateHVAC, sizeof(address_StateHVAC));
    address_StateHVAC.sin_family = AF_INET;
    address_StateHVAC.sin_port = htons(portStateHVAC);
    address_StateHVAC.sin_addr.s_addr = inet_addr(serverName);
    /*
    //Temp
    ZeroMemory(&address_Temp, sizeof(address_Temp));
    address_Temp.sin_family = AF_INET;
    address_Temp.sin_port = htons(portTemp);
    address_Temp.sin_addr.s_addr = inet_addr(serverName);
    
    //AmbientLightIntensity
    ZeroMemory(&address_AmbientLightIntensity, sizeof(address_AmbientLightIntensity));
    address_AmbientLightIntensity.sin_family = AF_INET;
    address_AmbientLightIntensity.sin_port = htons(portAmbientLightIntensity);
    address_AmbientLightIntensity.sin_addr.s_addr = inet_addr(serverName);
    */
    //hologram
    ZeroMemory(&address_hologram, sizeof(address_hologram));
    address_hologram.sin_family = AF_INET;
    address_hologram.sin_port = htons(porthologram);
    address_hologram.sin_addr.s_addr = inet_addr(serverName);
    
    //INITIALIZE ALL SOCKETS
    listenSocketForTest = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForTest1 = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForTest2 = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForIntensity = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForTemperature = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForHVAC = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    /////
    listenSocketForfire = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForExtinguisher = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForCall = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForalarm = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //listenSocketForAccessCode = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //listenSocketForAccessCode2 = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //listenSocketForAccessCode3 = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //listenSocketForCurrentUser = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForinteriorLightIntensity = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForuserCode = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForDoor = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //listenSocketForfanSpeed = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForStateHVAC = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //listenSocketForTemp = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //listenSocketForAmbientLightIntensity = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForhologram = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    
    
    //CONNECT ALL THE SOCKETS
    iResultTest = connect(listenSocketForTest, (SOCKADDR*)&address_test, sizeof(address_test));
    iResultTest1 = connect(listenSocketForTest1, (SOCKADDR*)&address_test1, sizeof(address_test1));
    iResultTest2 = connect(listenSocketForTest2, (SOCKADDR*)&address_test2, sizeof(address_test2));
    iResultIntensity = connect(listenSocketForIntensity, (SOCKADDR*)&address_intensity, sizeof(address_intensity));
    iResultTemperature = connect(listenSocketForTemperature, (SOCKADDR*)&address_temperature, sizeof(address_temperature));
    iResultHVAC = connect(listenSocketForHVAC, (SOCKADDR*)&address_hvac, sizeof(address_hvac));
    /////
    iResultfire = connect(listenSocketForfire, (SOCKADDR*)&address_fire, sizeof(address_fire));
    iResultExtinguisher = connect(listenSocketForExtinguisher, (SOCKADDR*)&address_Extinguisher, sizeof(address_Extinguisher));
    iResultCall = connect(listenSocketForCall, (SOCKADDR*)&address_Call, sizeof(address_Call));
    iResultalarm = connect(listenSocketForalarm, (SOCKADDR*)&address_alarm, sizeof(address_alarm));
    //iResultAccessCode = connect(listenSocketForAccessCode, (SOCKADDR*)&address_AccessCode, sizeof(address_AccessCode));
    //iResultAccessCode2 = connect(listenSocketForAccessCode2, (SOCKADDR*)&address_AccessCode2, sizeof(address_AccessCode2));
    //iResultAccessCode3 = connect(listenSocketForAccessCode3, (SOCKADDR*)&address_AccessCode3, sizeof(address_AccessCode3));
    //iResultCurrentUser = connect(listenSocketForCurrentUser, (SOCKADDR*)&address_CurrentUser, sizeof(address_CurrentUser));
    iResultinteriorLightIntensity = connect(listenSocketForinteriorLightIntensity, (SOCKADDR*)&address_interiorLightIntensity, sizeof(address_interiorLightIntensity));
    iResultuserCode = connect(listenSocketForuserCode, (SOCKADDR*)&address_userCode, sizeof(address_userCode));
    iResultDoor = connect(listenSocketForDoor, (SOCKADDR*)&address_Door, sizeof(address_Door));
    //iResultfanSpeed = connect(listenSocketForfanSpeed, (SOCKADDR*)&address_fanSpeed, sizeof(address_fanSpeed));
    iResultStateHVAC = connect(listenSocketForStateHVAC, (SOCKADDR*)&address_StateHVAC, sizeof(address_StateHVAC));
    //iResultTemp = connect(listenSocketForTemp, (SOCKADDR*)&address_Temp, sizeof(address_Temp));
    //iResultAmbientLightIntensity = connect(listenSocketForAmbientLightIntensity, (SOCKADDR*)&address_AmbientLightIntensity, sizeof(address_AmbientLightIntensity));
    iResulthologram = connect(listenSocketForhologram, (SOCKADDR*)&address_hologram, sizeof(address_hologram));
    
    
    //ASSIGN VALUES TO SEND 
    sprintf(out_string_for_test, "%f", test);
    sprintf(out_string_for_test1, "%f", test1);
    sprintf(out_string_for_test2, "%f", test2);
    sprintf(out_string_for_intensity, "%f", intensity);
    sprintf(out_string_for_temperature, "%d", temperature);
    if (hvac_bool == true) {
    	hvac = 1;
    }
    else {
    	hvac = 0;
    }
    sprintf(out_string_for_hvac, "%f", hvac);
    //////
    
    sprintf(out_string_for_fire, "%d", fire);
    sprintf(out_string_for_Extinguisher, "%d", Extinguisher);
    sprintf(out_string_for_Call, "%d", Call);
    sprintf(out_string_for_alarm, "%d", alarm);
    //sprintf(out_string_for_AccessCode, "%f", AccessCode);
    //sprintf(out_string_for_AccessCode2, "%f", AccessCode2);
    //sprintf(out_string_for_AccessCode3, "%f", AccessCode3);
    //sprintf(out_string_for_CurrentUser, "%f", CurrentUser);
    sprintf(out_string_for_interiorLightIntensity, "%d", interiorLightIntensity);
    sprintf(out_string_for_userCode, "%d", userCode);
    sprintf(out_string_for_Door, "%d", Door);
    //sprintf(out_string_for_fanSpeed, "%d", fanSpeed);
    sprintf(out_string_for_StateHVAC, "%d", StateHVAC);
    //sprintf(out_string_for_Temp, "%f", Temp);
    //sprintf(out_string_for_AmbientLightIntensity, "%f", AmbientLightIntensity);
    sprintf(out_string_for_hologram, "%d", hologram);
    
    
    
    
    
    
    //SEND VALUE
    iSendResultTest = sendto(listenSocketForTest, (char *)&out_string_for_test, sizeof(uint32_t), 0, (SOCKADDR *)& address_test, sizeof(address_test));
    iSendResultTest1 = sendto(listenSocketForTest1, (char *)&out_string_for_test1, sizeof(uint32_t), 0, (SOCKADDR *)& address_test1, sizeof(address_test1));
    iSendResultTest2 = sendto(listenSocketForTest2, (char *)&out_string_for_test2, sizeof(uint32_t), 0, (SOCKADDR *)& address_test2, sizeof(address_test2));
    iSendResultIntensity = sendto(listenSocketForIntensity, (char *)&out_string_for_intensity, sizeof(uint32_t), 0, (SOCKADDR *)& address_intensity, sizeof(address_intensity));
    iSendResultTemperature = sendto(listenSocketForTemperature, (char *)&out_string_for_temperature, sizeof(uint32_t), 0, (SOCKADDR *)& address_temperature, sizeof(address_temperature));
    iSendResultHVAC = sendto(listenSocketForHVAC, (char *)&out_string_for_hvac, sizeof(uint32_t), 0, (SOCKADDR *)& address_hvac, sizeof(address_hvac));
    //////
    iSendResultfire = sendto(listenSocketForfire, (char *)&out_string_for_fire, sizeof(uint32_t), 0, (SOCKADDR *)& address_fire, sizeof(address_fire));
    iSendResultExtinguisher = sendto(listenSocketForExtinguisher, (char *)&out_string_for_Extinguisher, sizeof(uint32_t), 0, (SOCKADDR *)& address_Extinguisher, sizeof(address_Extinguisher));
    iSendResultCall = sendto(listenSocketForCall, (char *)&out_string_for_Call, sizeof(uint32_t), 0, (SOCKADDR *)& address_Call, sizeof(address_Call));
    iSendResultalarm = sendto(listenSocketForalarm, (char *)&out_string_for_alarm, sizeof(uint32_t), 0, (SOCKADDR *)& address_alarm, sizeof(address_alarm));
    //iSendResultAccessCode = sendto(listenSocketForAccessCode, (char *)&out_string_for_AccessCode, sizeof(uint32_t), 0, (SOCKADDR *)& address_AccessCode, sizeof(address_AccessCode));
    //iSendResultAccessCode2 = sendto(listenSocketForAccessCode2, (char *)&out_string_for_AccessCode2, sizeof(uint32_t), 0, (SOCKADDR *)& address_AccessCode2, sizeof(address_AccessCode2));
    //iSendResultAccessCode3 = sendto(listenSocketForAccessCode3, (char *)&out_string_for_AccessCode3, sizeof(uint32_t), 0, (SOCKADDR *)& address_AccessCode3, sizeof(address_AccessCode3));
    //iSendResultCurrentUser = sendto(listenSocketForCurrentUser, (char *)&out_string_for_CurrentUser, sizeof(uint32_t), 0, (SOCKADDR *)& address_CurrentUser, sizeof(address_CurrentUser));
    iSendResultinteriorLightIntensity = sendto(listenSocketForinteriorLightIntensity, (char *)&out_string_for_interiorLightIntensity, sizeof(uint32_t), 0, (SOCKADDR *)& address_interiorLightIntensity, sizeof(address_interiorLightIntensity));
    iSendResultuserCode = sendto(listenSocketForuserCode, (char *)&out_string_for_userCode, sizeof(uint32_t), 0, (SOCKADDR *)& address_userCode, sizeof(address_userCode));
    iSendResultDoor = sendto(listenSocketForDoor, (char *)&out_string_for_Door, sizeof(uint32_t), 0, (SOCKADDR *)& address_Door, sizeof(address_Door));
    //iSendResultfanSpeed = sendto(listenSocketForfanSpeed, (char *)&out_string_for_fanSpeed, sizeof(uint32_t), 0, (SOCKADDR *)& address_fanSpeed, sizeof(address_fanSpeed));
    iSendResultStateHVAC = sendto(listenSocketForStateHVAC, (char *)&out_string_for_StateHVAC, sizeof(uint32_t), 0, (SOCKADDR *)& address_StateHVAC, sizeof(address_StateHVAC));
    //iSendResultTemp = sendto(listenSocketFor, (char *)&out_string_for_Temp, sizeof(uint32_t), 0, (SOCKADDR *)& address_Temp, sizeof(address_Temp));
    //iSendResultAmbientLightIntensity = sendto(listenSocketForAmbientLightIntensity, (char *)&out_string_for_AmbientLightIntensity, sizeof(uint32_t), 0, (SOCKADDR *)& address_AmbientLightIntensity, sizeof(address_AmbientLightIntensity));
    iSendResulthologram = sendto(listenSocketForhologram, (char *)&out_string_for_hologram, sizeof(uint32_t), 0, (SOCKADDR *)& address_hologram, sizeof(address_hologram));
    
    //SHOW SENT VALUES IN CONSOLE
    printf("Test value sent: %s \n", out_string_for_test);
    printf("Test1 value sent: %s \n", out_string_for_test1);
    printf("Test2 value sent: %s \n", out_string_for_test2);
    printf("Intensity value sent: %s \n", out_string_for_intensity);
    printf("Temperature value sent: %s \n", out_string_for_temperature);
    printf("HVAC Status value sent: %s \n", out_string_for_hvac);
    ///////
    printf("fire value sent: %s \n", out_string_for_fire);
    printf("Extinguisher value sent: %s \n", out_string_for_Extinguisher);
    printf("Call value sent: %s \n", out_string_for_Call);
    printf("alarm value sent: %s \n", out_string_for_alarm);
    //printf("AccessCode value sent: %s \n", out_string_for_AccessCode);
    //printf("AccessCode2 value sent: %s \n", out_string_for_AccessCode2);
    //printf("AccessCode3 value sent: %s \n", out_string_for_AccessCode3);
    //printf("CurrentUser value sent: %s \n", out_string_for_CurrentUser);
    printf("interiorLightIntensity value sent: %s \n", out_string_for_interiorLightIntensity);
    printf("userCode value sent: %s \n", out_string_for_userCode);
    printf("Door value sent: %s \n", out_string_for_Door);
    //printf("fanSpeed value sent: %s \n", out_string_for_fanSpeed);
    printf("StateHVAC value sent: %s \n", out_string_for_StateHVAC);
    //printf("Temp value sent: %s \n", out_string_for_);
    //printf(" value sent: %s \n", out_string_for_AmbientLightIntensity);
    printf("hologram value sent: %s \n", out_string_for_hologram);
    
    
    
    //RECIEVED VALUE OF TEST
    iResultTest = recv(listenSocketForTest, recvbuf, recvbuflen, 0);
    printf("Test value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF TEST1
    iResultTest1 = recv(listenSocketForTest1, recvbuf, recvbuflen, 0);
    printf("Test1 value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF TEST2
    iResultTest2 = recv(listenSocketForTest2, recvbuf, recvbuflen, 0);
    test2check = atof(recvbuf);
    printf("Test2 value recieved: %f\n", test2check);
    //RECIEVED VALUE OF INTENSITY
    iResultIntensity = recv(listenSocketForIntensity, recvbuf, recvbuflen, 0);
    printf("Intensity value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF TEMPERATURE
    iResultTemperature = recv(listenSocketForTemperature, recvbuf, recvbuflen, 0);
    printf("Intensity value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF HVAC
    iResultHVAC = recv(listenSocketForHVAC, recvbuf, recvbuflen, 0);
    printf("Intensity value recieved: %f\n", atof(recvbuf));
    int hvactocheck = atof(recvbuf);
    if (hvactocheck == 1) {
    	hvac_text = "HVAC is ON";
    }
    else {
    	hvac_text = "HVAC is OFF";
    }
    /////////
    //RECIEVED VALUE OF fire_float
    iResultfire = recv(listenSocketForfire, recvbuf, recvbuflen, 0);
    printf("fire value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF Extinguisher
    iResultExtinguisher = recv(listenSocketForExtinguisher, recvbuf, recvbuflen, 0);
    printf("Extinguisher value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF Call
    iResultCall = recv(listenSocketForCall, recvbuf, recvbuflen, 0);
    printf("Call value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF alarm
    iResultalarm = recv(listenSocketForalarm, recvbuf, recvbuflen, 0);
    printf("alarm value recieved: %d\n", atof(recvbuf));
    
    /*
    //RECIEVED VALUE OF AccessCode
    iResult = recv(listenSocketFor, recvbuf, recvbuflen, 0);
    printf("AccessCode value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF AccessCode2
    iResultAccessCode2 = recv(listenSocketForAccessCode2, recvbuf, recvbuflen, 0);
    printf("AccessCode2 value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF AccessCode3
    iResultAccessCode3 = recv(listenSocketForAccessCode3, recvbuf, recvbuflen, 0);
    printf("AccessCode3 value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF CurrentUser
    iResultCurrentUser = recv(listenSocketForCurrentUser, recvbuf, recvbuflen, 0);
    printf("CurrentUser value recieved: %f\n", atof(recvbuf));
    */
    //RECIEVED VALUE OF interiorLightIntensity
    iResultinteriorLightIntensity = recv(listenSocketForinteriorLightIntensity, recvbuf, recvbuflen, 0);
    printf("interiorLightIntensity value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF userCode
    iResultuserCode = recv(listenSocketForuserCode, recvbuf, recvbuflen, 0);
    printf("userCode value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF Door
    iResultDoor = recv(listenSocketForDoor, recvbuf, recvbuflen, 0);
    printf("Door value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF fanSpeed
    //iResultfanSpeed = recv(listenSocketForfanSpeed, recvbuf, recvbuflen, 0);
    //printf("fanSpeed value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF StateHVAC
    iResultStateHVAC = recv(listenSocketForStateHVAC, recvbuf, recvbuflen, 0);
    printf("StateHVAC value recieved: %d\n", atof(recvbuf));
    //RECIEVED VALUE OF Temp
    //iResultTemp = recv(listenSocketForTemp, recvbuf, recvbuflen, 0);
    //printf("Temp value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF AmbientLightIntensity
    //iResultAmbientLightIntensity = recv(listenSocketForAmbientLightIntensity, recvbuf, recvbuflen, 0);
    //printf("AmbientLightIntensity value recieved: %f\n", atof(recvbuf));
    //RECIEVED VALUE OF hologram
    iResulthologram = recv(listenSocketForhologram, recvbuf, recvbuflen, 0);
    printf("hologram value recieved: %d\n", atof(recvbuf));
    
    
    
    
    //CLOSE ALL THE SOCKETS
    closesocket(listenSocketForTest);
    closesocket(listenSocketForTest1);
    closesocket(listenSocketForTest2);
    closesocket(listenSocketForIntensity);
    closesocket(listenSocketForTemperature);
    closesocket(listenSocketForHVAC);
    /////
    closesocket(listenSocketForfire);
    closesocket(listenSocketForExtinguisher);
    closesocket(listenSocketForCall);
    closesocket(listenSocketForalarm);
    //closesocket(listenSocketForAccessCode);
    //closesocket(listenSocketForAccessCode2);
    //closesocket(listenSocketForAccessCode3);
    //closesocket(listenSocketForCurrentUser);
    closesocket(listenSocketForinteriorLightIntensity);
    closesocket(listenSocketForuserCode);
    closesocket(listenSocketForDoor);
    //closesocket(listenSocketForfanSpeed);
    closesocket(listenSocketForStateHVAC);
    //closesocket(listenSocketForTemp);
    //closesocket(listenSocketForAmbientLightIntensity);
    closesocket(listenSocketForhologram);
    
    
    
    return 0;
    //#]
}

const OMString SendToUnity::getDisplayValue(void) const {
    return displayValue;
}

const int SendToUnity::getRecvbuflen(void) const {
    return recvbuflen;
}

const int SendToUnity::getSendbuflen(void) const {
    return sendbuflen;
}

const char* SendToUnity::getServerName(void) const {
    return serverName;
}

const int SendToUnity::getSockfd(void) const {
    return sockfd;
}

const char SendToUnity::getTemp(void) const {
    return temp;
}

const WSADATA SendToUnity::getWs(void) const {
    return ws;
}

bool SendToUnity::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_11_timeout == arg)
        {
            state_11_timeout = NULL;
            res = true;
        }
    if(state_10_timeout == arg)
        {
            state_10_timeout = NULL;
            res = true;
        }
    return res;
}

void SendToUnity::cancelTimeouts(void) {
    cancel(state_11_timeout);
    cancel(state_10_timeout);
}

SendToUnity::SendToUnity(void) : OMThread(), OMReactive(), intFlowInterface(), connectSocketForTest1(INVALID_SOCKET), displayValue(""), listenSocketForTest1(INVALID_SOCKET), portTest1(52052), recvbuflen(DEFAULT_BUFLEN), sendbuflen(DEFAULT_BUFLEN), serverName("127.0.0.1"), temp('c'), Int32(0), connectSocketForHVAC(INVALID_SOCKET), connectSocketForIntensity(INVALID_SOCKET), connectSocketForTemperature(INVALID_SOCKET), connectSocketForTest(INVALID_SOCKET), connectSocketForTest2(INVALID_SOCKET), filename(""), hvac(0), hvac_bool(0), hvac_text(""), intensity(0), listenSocketForHVAC(INVALID_SOCKET), listenSocketForIntensity(INVALID_SOCKET), listenSocketForTemperature(INVALID_SOCKET), listenSocketForTest(INVALID_SOCKET), listenSocketForTest2(INVALID_SOCKET), portHVAC(52057), portIntensity(52055), portTemperature(52056), portTest(52051), portTest2(52053), temperature(10), test(0), test1(10), test2(0), Call(0), Door(0), Extinguisher(0), StateHVAC(0), alarm(0), fanSpeed(0), fire(0), hologram(0), interiorLightIntensity(2), listenSocketForCall(INVALID_SOCKET), listenSocketForDoor(INVALID_SOCKET), listenSocketForExtinguisher(INVALID_SOCKET), listenSocketForStateHVAC(INVALID_SOCKET), listenSocketForalarm(INVALID_SOCKET), listenSocketForfanSpeed(INVALID_SOCKET), listenSocketForfire(INVALID_SOCKET), listenSocketForhologram(INVALID_SOCKET), listenSocketForinteriorLightIntensity(INVALID_SOCKET), listenSocketForuserCode(INVALID_SOCKET), portCall(52059), portDoor(52060), portExtinguisher(52061), portStateHVAC(52065), portalarm(52058), portfanSpeed(52062), portfire(52063), porthologram(52066), portinteriorLightIntensity(52064), portuserCode(52072), userCode(2468) {
    NOTIFY_ACTIVE_CONSTRUCTOR(SendToUnity, SendToUnity(), 0, IMRPkg_SendToUnity_SendToUnity_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

SendToUnity::~SendToUnity(void) {
    NOTIFY_DESTRUCTOR(~SendToUnity, true);
    cancelTimeouts();
}

const int SendToUnity::getInt32(void) const {
    return Int32;
}

const SOCKADDR_IN SendToUnity::getAddress_hvac(void) const {
    return address_hvac;
}

const SOCKADDR_IN SendToUnity::getAddress_intensity(void) const {
    return address_intensity;
}

const SOCKADDR_IN SendToUnity::getAddress_temperature(void) const {
    return address_temperature;
}

const SOCKADDR_IN SendToUnity::getAddress_test(void) const {
    return address_test;
}

const SOCKADDR_IN SendToUnity::getAddress_test1(void) const {
    return address_test1;
}

const SOCKADDR_IN SendToUnity::getAddress_test2(void) const {
    return address_test2;
}

const SOCKET SendToUnity::getConnectSocketForHVAC(void) const {
    return connectSocketForHVAC;
}

const SOCKET SendToUnity::getConnectSocketForIntensity(void) const {
    return connectSocketForIntensity;
}

const SOCKET SendToUnity::getConnectSocketForTemperature(void) const {
    return connectSocketForTemperature;
}

const SOCKET SendToUnity::getConnectSocketForTest(void) const {
    return connectSocketForTest;
}

const SOCKET SendToUnity::getConnectSocketForTest1(void) const {
    return connectSocketForTest1;
}

const SOCKET SendToUnity::getConnectSocketForTest2(void) const {
    return connectSocketForTest2;
}

const OMString SendToUnity::getFilename(void) const {
    return filename;
}

const double SendToUnity::getFval(void) const {
    return fval;
}

const float SendToUnity::getHvac(void) const {
    return hvac;
}

const bool SendToUnity::getHvac_bool(void) const {
    return hvac_bool;
}

const OMString SendToUnity::getHvac_text(void) const {
    return hvac_text;
}

const int SendToUnity::getIResultHVAC(void) const {
    return iResultHVAC;
}

const int SendToUnity::getIResultIntensity(void) const {
    return iResultIntensity;
}

const int SendToUnity::getIResultTemperature(void) const {
    return iResultTemperature;
}

const int SendToUnity::getIResultTest(void) const {
    return iResultTest;
}

const int SendToUnity::getIResultTest1(void) const {
    return iResultTest1;
}

const int SendToUnity::getIResultTest2(void) const {
    return iResultTest2;
}

const int SendToUnity::getISendResultHVAC(void) const {
    return iSendResultHVAC;
}

const int SendToUnity::getISendResultIntensity(void) const {
    return iSendResultIntensity;
}

const int SendToUnity::getISendResultTemperature(void) const {
    return iSendResultTemperature;
}

const int SendToUnity::getISendResultTest(void) const {
    return iSendResultTest;
}

const int SendToUnity::getISendResultTest1(void) const {
    return iSendResultTest1;
}

const int SendToUnity::getISendResultTest2(void) const {
    return iSendResultTest2;
}

const float SendToUnity::getIntensity(void) const {
    return intensity;
}

const SOCKET SendToUnity::getListenSocketForHVAC(void) const {
    return listenSocketForHVAC;
}

const SOCKET SendToUnity::getListenSocketForIntensity(void) const {
    return listenSocketForIntensity;
}

const SOCKET SendToUnity::getListenSocketForTemperature(void) const {
    return listenSocketForTemperature;
}

const SOCKET SendToUnity::getListenSocketForTest(void) const {
    return listenSocketForTest;
}

const SOCKET SendToUnity::getListenSocketForTest1(void) const {
    return listenSocketForTest1;
}

const SOCKET SendToUnity::getListenSocketForTest2(void) const {
    return listenSocketForTest2;
}

const int SendToUnity::getPortHVAC(void) const {
    return portHVAC;
}

const int SendToUnity::getPortIntensity(void) const {
    return portIntensity;
}

const int SendToUnity::getPortTemperature(void) const {
    return portTemperature;
}

const int SendToUnity::getPortTest(void) const {
    return portTest;
}

const int SendToUnity::getPortTest1(void) const {
    return portTest1;
}

const int SendToUnity::getPortTest2(void) const {
    return portTest2;
}

const int SendToUnity::getTemperature(void) const {
    return temperature;
}

const float SendToUnity::getTest(void) const {
    return test;
}

const float SendToUnity::getTest1(void) const {
    return test1;
}

const float SendToUnity::getTest2(void) const {
    return test2;
}

const float SendToUnity::getTest2check(void) const {
    return test2check;
}

const double SendToUnity::getUtof(void) const {
    return utof;
}

void SendToUnity::setDisplayValue(const OMString p_displayValue) {
    displayValue = p_displayValue;
}

const char SendToUnity::getRecvbuf(const Rhp_int32_t iterI1) const {
    return recvbuf[iterI1];
}

void SendToUnity::setRecvbuf(const Rhp_int32_t iterI1, const char p_recvbuf) {
    recvbuf[iterI1] = p_recvbuf;
}

void SendToUnity::setRecvbuflen(const int p_recvbuflen) {
    recvbuflen = p_recvbuflen;
}

void SendToUnity::setSendbuflen(const int p_sendbuflen) {
    sendbuflen = p_sendbuflen;
}

void SendToUnity::setServerName(char* const p_serverName) {
    serverName = p_serverName;
}

const char SendToUnity::getSndmsgbuf(const Rhp_int32_t iterI1) const {
    return sndmsgbuf[iterI1];
}

void SendToUnity::setSndmsgbuf(const Rhp_int32_t iterI1, const char p_sndmsgbuf) {
    sndmsgbuf[iterI1] = p_sndmsgbuf;
}

void SendToUnity::setSockfd(const int p_sockfd) {
    sockfd = p_sockfd;
}

void SendToUnity::setTemp(const char p_temp) {
    temp = p_temp;
}

void SendToUnity::setWs(const WSADATA p_ws) {
    ws = p_ws;
}

SendToUnity::fire_SP_C* SendToUnity::getFire_SP(void) const {
    return (SendToUnity::fire_SP_C*) &fire_SP;
}

SendToUnity::fire_SP_C* SendToUnity::get_fire_SP(void) const {
    return (SendToUnity::fire_SP_C*) &fire_SP;
}

SendToUnity::Extinguisher_SP_C* SendToUnity::getExtinguisher_SP(void) const {
    return (SendToUnity::Extinguisher_SP_C*) &Extinguisher_SP;
}

SendToUnity::Extinguisher_SP_C* SendToUnity::get_Extinguisher_SP(void) const {
    return (SendToUnity::Extinguisher_SP_C*) &Extinguisher_SP;
}

SendToUnity::fanSpeed_SP_C* SendToUnity::getFanSpeed_SP(void) const {
    return (SendToUnity::fanSpeed_SP_C*) &fanSpeed_SP;
}

SendToUnity::fanSpeed_SP_C* SendToUnity::get_fanSpeed_SP(void) const {
    return (SendToUnity::fanSpeed_SP_C*) &fanSpeed_SP;
}

SendToUnity::StateHVAC_SP_C* SendToUnity::getStateHVAC_SP(void) const {
    return (SendToUnity::StateHVAC_SP_C*) &StateHVAC_SP;
}

SendToUnity::StateHVAC_SP_C* SendToUnity::get_StateHVAC_SP(void) const {
    return (SendToUnity::StateHVAC_SP_C*) &StateHVAC_SP;
}

SendToUnity::temperature_SP_C* SendToUnity::getTemperature_SP(void) const {
    return (SendToUnity::temperature_SP_C*) &temperature_SP;
}

SendToUnity::temperature_SP_C* SendToUnity::get_temperature_SP(void) const {
    return (SendToUnity::temperature_SP_C*) &temperature_SP;
}

SendToUnity::interiorLightIntensity_SP_C* SendToUnity::getInteriorLightIntensity_SP(void) const {
    return (SendToUnity::interiorLightIntensity_SP_C*) &interiorLightIntensity_SP;
}

SendToUnity::interiorLightIntensity_SP_C* SendToUnity::get_interiorLightIntensity_SP(void) const {
    return (SendToUnity::interiorLightIntensity_SP_C*) &interiorLightIntensity_SP;
}

SendToUnity::Door_SP_C* SendToUnity::getDoor_SP(void) const {
    return (SendToUnity::Door_SP_C*) &Door_SP;
}

SendToUnity::Door_SP_C* SendToUnity::get_Door_SP(void) const {
    return (SendToUnity::Door_SP_C*) &Door_SP;
}

SendToUnity::userCode_SP_C* SendToUnity::getUserCode_SP(void) const {
    return (SendToUnity::userCode_SP_C*) &userCode_SP;
}

SendToUnity::userCode_SP_C* SendToUnity::get_userCode_SP(void) const {
    return (SendToUnity::userCode_SP_C*) &userCode_SP;
}

SendToUnity::Call_SP_C* SendToUnity::getCall_SP(void) const {
    return (SendToUnity::Call_SP_C*) &Call_SP;
}

SendToUnity::Call_SP_C* SendToUnity::get_Call_SP(void) const {
    return (SendToUnity::Call_SP_C*) &Call_SP;
}

SendToUnity::alarm_SP_C* SendToUnity::getAlarm_SP(void) const {
    return (SendToUnity::alarm_SP_C*) &alarm_SP;
}

SendToUnity::alarm_SP_C* SendToUnity::get_alarm_SP(void) const {
    return (SendToUnity::alarm_SP_C*) &alarm_SP;
}

SendToUnity::hologram_SP_C* SendToUnity::getHologram_SP(void) const {
    return (SendToUnity::hologram_SP_C*) &hologram_SP;
}

SendToUnity::hologram_SP_C* SendToUnity::get_hologram_SP(void) const {
    return (SendToUnity::hologram_SP_C*) &hologram_SP;
}

const int SendToUnity::getCall(void) const {
    return Call;
}

const int SendToUnity::getDoor(void) const {
    return Door;
}

const int SendToUnity::getExtinguisher(void) const {
    return Extinguisher;
}

const int SendToUnity::getStateHVAC(void) const {
    return StateHVAC;
}

const SOCKADDR_IN SendToUnity::getAddress_Door(void) const {
    return address_Door;
}

void SendToUnity::setAddress_Door(const SOCKADDR_IN p_address_Door) {
    address_Door = p_address_Door;
}

const SOCKADDR_IN SendToUnity::getAddress_StateHVAC(void) const {
    return address_StateHVAC;
}

void SendToUnity::setAddress_StateHVAC(const SOCKADDR_IN p_address_StateHVAC) {
    address_StateHVAC = p_address_StateHVAC;
}

const SOCKADDR_IN SendToUnity::getAddress_fanSpeed(void) const {
    return address_fanSpeed;
}

void SendToUnity::setAddress_fanSpeed(const SOCKADDR_IN p_address_fanSpeed) {
    address_fanSpeed = p_address_fanSpeed;
}

const SOCKADDR_IN SendToUnity::getAddress_hologram(void) const {
    return address_hologram;
}

void SendToUnity::setAddress_hologram(const SOCKADDR_IN p_address_hologram) {
    address_hologram = p_address_hologram;
}

const SOCKADDR_IN SendToUnity::getAddress_interiorLightIntensity(void) const {
    return address_interiorLightIntensity;
}

void SendToUnity::setAddress_interiorLightIntensity(const SOCKADDR_IN p_address_interiorLightIntensity) {
    address_interiorLightIntensity = p_address_interiorLightIntensity;
}

const SOCKADDR_IN SendToUnity::getAddress_userCode(void) const {
    return address_userCode;
}

void SendToUnity::setAddress_userCode(const SOCKADDR_IN p_address_userCode) {
    address_userCode = p_address_userCode;
}

const int SendToUnity::getAlarm(void) const {
    return alarm;
}

const int SendToUnity::getFanSpeed(void) const {
    return fanSpeed;
}

const int SendToUnity::getFire(void) const {
    return fire;
}

const int SendToUnity::getHologram(void) const {
    return hologram;
}

const int SendToUnity::getIResultDoor(void) const {
    return iResultDoor;
}

void SendToUnity::setIResultDoor(const int p_iResultDoor) {
    iResultDoor = p_iResultDoor;
}

const int SendToUnity::getIResultStateHVAC(void) const {
    return iResultStateHVAC;
}

void SendToUnity::setIResultStateHVAC(const int p_iResultStateHVAC) {
    iResultStateHVAC = p_iResultStateHVAC;
}

const int SendToUnity::getIResultfanSpeed(void) const {
    return iResultfanSpeed;
}

void SendToUnity::setIResultfanSpeed(const int p_iResultfanSpeed) {
    iResultfanSpeed = p_iResultfanSpeed;
}

const int SendToUnity::getIResulthologram(void) const {
    return iResulthologram;
}

void SendToUnity::setIResulthologram(const int p_iResulthologram) {
    iResulthologram = p_iResulthologram;
}

const int SendToUnity::getIResultinteriorLightIntensity(void) const {
    return iResultinteriorLightIntensity;
}

void SendToUnity::setIResultinteriorLightIntensity(const int p_iResultinteriorLightIntensity) {
    iResultinteriorLightIntensity = p_iResultinteriorLightIntensity;
}

const int SendToUnity::getIResultuserCode(void) const {
    return iResultuserCode;
}

void SendToUnity::setIResultuserCode(const int p_iResultuserCode) {
    iResultuserCode = p_iResultuserCode;
}

const int SendToUnity::getISendResultDoor(void) const {
    return iSendResultDoor;
}

void SendToUnity::setISendResultDoor(const int p_iSendResultDoor) {
    iSendResultDoor = p_iSendResultDoor;
}

const int SendToUnity::getISendResultStateHVAC(void) const {
    return iSendResultStateHVAC;
}

void SendToUnity::setISendResultStateHVAC(const int p_iSendResultStateHVAC) {
    iSendResultStateHVAC = p_iSendResultStateHVAC;
}

const int SendToUnity::getISendResultfanSpeed(void) const {
    return iSendResultfanSpeed;
}

void SendToUnity::setISendResultfanSpeed(const int p_iSendResultfanSpeed) {
    iSendResultfanSpeed = p_iSendResultfanSpeed;
}

const int SendToUnity::getISendResulthologram(void) const {
    return iSendResulthologram;
}

void SendToUnity::setISendResulthologram(const int p_iSendResulthologram) {
    iSendResulthologram = p_iSendResulthologram;
}

const int SendToUnity::getISendResultinteriorLightIntensity(void) const {
    return iSendResultinteriorLightIntensity;
}

void SendToUnity::setISendResultinteriorLightIntensity(const int p_iSendResultinteriorLightIntensity) {
    iSendResultinteriorLightIntensity = p_iSendResultinteriorLightIntensity;
}

const int SendToUnity::getISendResultuserCode(void) const {
    return iSendResultuserCode;
}

void SendToUnity::setISendResultuserCode(const int p_iSendResultuserCode) {
    iSendResultuserCode = p_iSendResultuserCode;
}

const int SendToUnity::getInteriorLightIntensity(void) const {
    return interiorLightIntensity;
}

const SOCKET SendToUnity::getListenSocketForDoor(void) const {
    return listenSocketForDoor;
}

void SendToUnity::setListenSocketForDoor(const SOCKET p_listenSocketForDoor) {
    listenSocketForDoor = p_listenSocketForDoor;
}

const SOCKET SendToUnity::getListenSocketForStateHVAC(void) const {
    return listenSocketForStateHVAC;
}

void SendToUnity::setListenSocketForStateHVAC(const SOCKET p_listenSocketForStateHVAC) {
    listenSocketForStateHVAC = p_listenSocketForStateHVAC;
}

const SOCKET SendToUnity::getListenSocketForfanSpeed(void) const {
    return listenSocketForfanSpeed;
}

void SendToUnity::setListenSocketForfanSpeed(const SOCKET p_listenSocketForfanSpeed) {
    listenSocketForfanSpeed = p_listenSocketForfanSpeed;
}

const SOCKET SendToUnity::getListenSocketForhologram(void) const {
    return listenSocketForhologram;
}

void SendToUnity::setListenSocketForhologram(const SOCKET p_listenSocketForhologram) {
    listenSocketForhologram = p_listenSocketForhologram;
}

const SOCKET SendToUnity::getListenSocketForinteriorLightIntensity(void) const {
    return listenSocketForinteriorLightIntensity;
}

void SendToUnity::setListenSocketForinteriorLightIntensity(const SOCKET p_listenSocketForinteriorLightIntensity) {
    listenSocketForinteriorLightIntensity = p_listenSocketForinteriorLightIntensity;
}

const SOCKET SendToUnity::getListenSocketForuserCode(void) const {
    return listenSocketForuserCode;
}

void SendToUnity::setListenSocketForuserCode(const SOCKET p_listenSocketForuserCode) {
    listenSocketForuserCode = p_listenSocketForuserCode;
}

const int SendToUnity::getPortDoor(void) const {
    return portDoor;
}

void SendToUnity::setPortDoor(const int p_portDoor) {
    portDoor = p_portDoor;
}

const int SendToUnity::getPortStateHVAC(void) const {
    return portStateHVAC;
}

void SendToUnity::setPortStateHVAC(const int p_portStateHVAC) {
    portStateHVAC = p_portStateHVAC;
}

const int SendToUnity::getPortfanSpeed(void) const {
    return portfanSpeed;
}

void SendToUnity::setPortfanSpeed(const int p_portfanSpeed) {
    portfanSpeed = p_portfanSpeed;
}

const int SendToUnity::getPorthologram(void) const {
    return porthologram;
}

void SendToUnity::setPorthologram(const int p_porthologram) {
    porthologram = p_porthologram;
}

const int SendToUnity::getPortinteriorLightIntensity(void) const {
    return portinteriorLightIntensity;
}

void SendToUnity::setPortinteriorLightIntensity(const int p_portinteriorLightIntensity) {
    portinteriorLightIntensity = p_portinteriorLightIntensity;
}

const int SendToUnity::getPortuserCode(void) const {
    return portuserCode;
}

void SendToUnity::setPortuserCode(const int p_portuserCode) {
    portuserCode = p_portuserCode;
}

const int SendToUnity::getUserCode(void) const {
    return userCode;
}

void SendToUnity::initRelations(void) {
    if (get_fire_SP() != NULL) {
        get_fire_SP()->connectSendToUnity(this);
    }
    if (get_Extinguisher_SP() != NULL) {
        get_Extinguisher_SP()->connectSendToUnity(this);
    }
    if (get_fanSpeed_SP() != NULL) {
        get_fanSpeed_SP()->connectSendToUnity(this);
    }
    if (get_StateHVAC_SP() != NULL) {
        get_StateHVAC_SP()->connectSendToUnity(this);
    }
    if (get_temperature_SP() != NULL) {
        get_temperature_SP()->connectSendToUnity(this);
    }
    if (get_interiorLightIntensity_SP() != NULL) {
        get_interiorLightIntensity_SP()->connectSendToUnity(this);
    }
    if (get_userCode_SP() != NULL) {
        get_userCode_SP()->connectSendToUnity(this);
    }
    if (get_Call_SP() != NULL) {
        get_Call_SP()->connectSendToUnity(this);
    }
    if (get_alarm_SP() != NULL) {
        get_alarm_SP()->connectSendToUnity(this);
    }
    if (get_hologram_SP() != NULL) {
        get_hologram_SP()->connectSendToUnity(this);
    }
}

//#[ ignore
void SendToUnity::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_fire_SP()) {
        setFire(data);
    }
    
    if (pCaller == (void *)get_Extinguisher_SP()) {
        setExtinguisher(data);
    }
    
    if (pCaller == (void *)get_fanSpeed_SP()) {
        setFanSpeed(data);
    }
    
    if (pCaller == (void *)get_StateHVAC_SP()) {
        setStateHVAC(data);
    }
    
    if (pCaller == (void *)get_temperature_SP()) {
        setTemperature(data);
    }
    
    if (pCaller == (void *)get_interiorLightIntensity_SP()) {
        setInteriorLightIntensity(data);
    }
    
    if (pCaller == (void *)get_userCode_SP()) {
        setUserCode(data);
    }
    
    if (pCaller == (void *)get_Call_SP()) {
        setCall(data);
    }
    
    if (pCaller == (void *)get_alarm_SP()) {
        setAlarm(data);
    }
    
    if (pCaller == (void *)get_hologram_SP()) {
        setHologram(data);
    }
}

void SendToUnity::setAlarm(int p_alarm) {
    if (alarm != p_alarm) {
        alarm = p_alarm;
        FLOW_DATA_RECEIVE("alarm", alarm, x2String);
    }
    
}

void SendToUnity::setCall(int p_Call) {
    if (Call != p_Call) {
        Call = p_Call;
        FLOW_DATA_RECEIVE("Call", Call, x2String);
    }
    
    NOTIFY_SET_OPERATION;
}

void SendToUnity::setDoor(int p_Door) {
    if (Door != p_Door)  {
        Door = p_Door;
        FLOW_DATA_SEND(Door, Door_SP, SetValue, x2String);
    }
}

void SendToUnity::setExtinguisher(int p_Extinguisher) {
    if (Extinguisher != p_Extinguisher) {
        Extinguisher = p_Extinguisher;
        FLOW_DATA_RECEIVE("Extinguisher", Extinguisher, x2String);
    }
    
}

void SendToUnity::setFanSpeed(int p_fanSpeed) {
    if (fanSpeed != p_fanSpeed) {
        fanSpeed = p_fanSpeed;
        FLOW_DATA_RECEIVE("fanSpeed", fanSpeed, x2String);
    }
    
}

void SendToUnity::setFire(int p_fire) {
    if (fire != p_fire) {
        fire = p_fire;
        FLOW_DATA_RECEIVE("fire", fire, x2String);
    }
    
    NOTIFY_SET_OPERATION;
}

void SendToUnity::setHologram(int p_hologram) {
    if (hologram != p_hologram) {
        hologram = p_hologram;
        FLOW_DATA_RECEIVE("hologram", hologram, x2String);
    }
    
}

void SendToUnity::setInteriorLightIntensity(int p_interiorLightIntensity) {
    if (interiorLightIntensity != p_interiorLightIntensity) {
        interiorLightIntensity = p_interiorLightIntensity;
        FLOW_DATA_RECEIVE("interiorLightIntensity", interiorLightIntensity, x2String);
    }
    
    NOTIFY_SET_OPERATION;
}

void SendToUnity::setStateHVAC(int p_StateHVAC) {
    if (StateHVAC != p_StateHVAC) {
        StateHVAC = p_StateHVAC;
        FLOW_DATA_RECEIVE("StateHVAC", StateHVAC, x2String);
    }
    
}

void SendToUnity::setTemperature(int p_temperature) {
    if (temperature != p_temperature) {
        temperature = p_temperature;
        FLOW_DATA_RECEIVE("temperature", temperature, x2String);
    }
    
    NOTIFY_SET_OPERATION;
}

void SendToUnity::setUserCode(int p_userCode) {
    if (userCode != p_userCode) {
        userCode = p_userCode;
        FLOW_DATA_RECEIVE("userCode", userCode, x2String);
    }
    
}
//#]

void SendToUnity::setInt32(const int p_Int32) {
    Int32 = p_Int32;
}

const SOCKADDR_IN SendToUnity::getAddress_Call(void) const {
    return address_Call;
}

void SendToUnity::setAddress_Call(const SOCKADDR_IN p_address_Call) {
    address_Call = p_address_Call;
}

const SOCKADDR_IN SendToUnity::getAddress_Extinguisher(void) const {
    return address_Extinguisher;
}

void SendToUnity::setAddress_Extinguisher(const SOCKADDR_IN p_address_Extinguisher) {
    address_Extinguisher = p_address_Extinguisher;
}

const SOCKADDR_IN SendToUnity::getAddress_alarm(void) const {
    return address_alarm;
}

void SendToUnity::setAddress_alarm(const SOCKADDR_IN p_address_alarm) {
    address_alarm = p_address_alarm;
}

const SOCKADDR_IN SendToUnity::getAddress_fire(void) const {
    return address_fire;
}

void SendToUnity::setAddress_fire(const SOCKADDR_IN p_address_fire) {
    address_fire = p_address_fire;
}

void SendToUnity::setAddress_hvac(const SOCKADDR_IN p_address_hvac) {
    address_hvac = p_address_hvac;
}

void SendToUnity::setAddress_intensity(const SOCKADDR_IN p_address_intensity) {
    address_intensity = p_address_intensity;
}

void SendToUnity::setAddress_temperature(const SOCKADDR_IN p_address_temperature) {
    address_temperature = p_address_temperature;
}

void SendToUnity::setAddress_test(const SOCKADDR_IN p_address_test) {
    address_test = p_address_test;
}

void SendToUnity::setAddress_test1(const SOCKADDR_IN p_address_test1) {
    address_test1 = p_address_test1;
}

void SendToUnity::setAddress_test2(const SOCKADDR_IN p_address_test2) {
    address_test2 = p_address_test2;
}

void SendToUnity::setConnectSocketForHVAC(const SOCKET p_connectSocketForHVAC) {
    connectSocketForHVAC = p_connectSocketForHVAC;
}

void SendToUnity::setConnectSocketForIntensity(const SOCKET p_connectSocketForIntensity) {
    connectSocketForIntensity = p_connectSocketForIntensity;
}

void SendToUnity::setConnectSocketForTemperature(const SOCKET p_connectSocketForTemperature) {
    connectSocketForTemperature = p_connectSocketForTemperature;
}

void SendToUnity::setConnectSocketForTest(const SOCKET p_connectSocketForTest) {
    connectSocketForTest = p_connectSocketForTest;
}

void SendToUnity::setConnectSocketForTest1(const SOCKET p_connectSocketForTest1) {
    connectSocketForTest1 = p_connectSocketForTest1;
}

void SendToUnity::setConnectSocketForTest2(const SOCKET p_connectSocketForTest2) {
    connectSocketForTest2 = p_connectSocketForTest2;
}

void SendToUnity::setFilename(const OMString p_filename) {
    filename = p_filename;
}

void SendToUnity::setFval(const double p_fval) {
    fval = p_fval;
}

void SendToUnity::setHvac(const float p_hvac) {
    hvac = p_hvac;
}

void SendToUnity::setHvac_bool(const bool p_hvac_bool) {
    hvac_bool = p_hvac_bool;
}

void SendToUnity::setHvac_text(const OMString p_hvac_text) {
    hvac_text = p_hvac_text;
}

const int SendToUnity::getIResultCall(void) const {
    return iResultCall;
}

void SendToUnity::setIResultCall(const int p_iResultCall) {
    iResultCall = p_iResultCall;
}

const int SendToUnity::getIResultExtinguisher(void) const {
    return iResultExtinguisher;
}

void SendToUnity::setIResultExtinguisher(const int p_iResultExtinguisher) {
    iResultExtinguisher = p_iResultExtinguisher;
}

void SendToUnity::setIResultHVAC(const int p_iResultHVAC) {
    iResultHVAC = p_iResultHVAC;
}

void SendToUnity::setIResultIntensity(const int p_iResultIntensity) {
    iResultIntensity = p_iResultIntensity;
}

void SendToUnity::setIResultTemperature(const int p_iResultTemperature) {
    iResultTemperature = p_iResultTemperature;
}

void SendToUnity::setIResultTest(const int p_iResultTest) {
    iResultTest = p_iResultTest;
}

void SendToUnity::setIResultTest1(const int p_iResultTest1) {
    iResultTest1 = p_iResultTest1;
}

void SendToUnity::setIResultTest2(const int p_iResultTest2) {
    iResultTest2 = p_iResultTest2;
}

const int SendToUnity::getIResultalarm(void) const {
    return iResultalarm;
}

void SendToUnity::setIResultalarm(const int p_iResultalarm) {
    iResultalarm = p_iResultalarm;
}

const int SendToUnity::getIResultfire(void) const {
    return iResultfire;
}

void SendToUnity::setIResultfire(const int p_iResultfire) {
    iResultfire = p_iResultfire;
}

const int SendToUnity::getISendResultCall(void) const {
    return iSendResultCall;
}

void SendToUnity::setISendResultCall(const int p_iSendResultCall) {
    iSendResultCall = p_iSendResultCall;
}

const int SendToUnity::getISendResultExtinguisher(void) const {
    return iSendResultExtinguisher;
}

void SendToUnity::setISendResultExtinguisher(const int p_iSendResultExtinguisher) {
    iSendResultExtinguisher = p_iSendResultExtinguisher;
}

void SendToUnity::setISendResultHVAC(const int p_iSendResultHVAC) {
    iSendResultHVAC = p_iSendResultHVAC;
}

void SendToUnity::setISendResultIntensity(const int p_iSendResultIntensity) {
    iSendResultIntensity = p_iSendResultIntensity;
}

void SendToUnity::setISendResultTemperature(const int p_iSendResultTemperature) {
    iSendResultTemperature = p_iSendResultTemperature;
}

void SendToUnity::setISendResultTest(const int p_iSendResultTest) {
    iSendResultTest = p_iSendResultTest;
}

void SendToUnity::setISendResultTest1(const int p_iSendResultTest1) {
    iSendResultTest1 = p_iSendResultTest1;
}

void SendToUnity::setISendResultTest2(const int p_iSendResultTest2) {
    iSendResultTest2 = p_iSendResultTest2;
}

const int SendToUnity::getISendResultalarm(void) const {
    return iSendResultalarm;
}

void SendToUnity::setISendResultalarm(const int p_iSendResultalarm) {
    iSendResultalarm = p_iSendResultalarm;
}

const int SendToUnity::getISendResultfire(void) const {
    return iSendResultfire;
}

void SendToUnity::setISendResultfire(const int p_iSendResultfire) {
    iSendResultfire = p_iSendResultfire;
}

void SendToUnity::setIntensity(const float p_intensity) {
    intensity = p_intensity;
}

const SOCKET SendToUnity::getListenSocketForCall(void) const {
    return listenSocketForCall;
}

void SendToUnity::setListenSocketForCall(const SOCKET p_listenSocketForCall) {
    listenSocketForCall = p_listenSocketForCall;
}

const SOCKET SendToUnity::getListenSocketForExtinguisher(void) const {
    return listenSocketForExtinguisher;
}

void SendToUnity::setListenSocketForExtinguisher(const SOCKET p_listenSocketForExtinguisher) {
    listenSocketForExtinguisher = p_listenSocketForExtinguisher;
}

void SendToUnity::setListenSocketForHVAC(const SOCKET p_listenSocketForHVAC) {
    listenSocketForHVAC = p_listenSocketForHVAC;
}

void SendToUnity::setListenSocketForIntensity(const SOCKET p_listenSocketForIntensity) {
    listenSocketForIntensity = p_listenSocketForIntensity;
}

void SendToUnity::setListenSocketForTemperature(const SOCKET p_listenSocketForTemperature) {
    listenSocketForTemperature = p_listenSocketForTemperature;
}

void SendToUnity::setListenSocketForTest(const SOCKET p_listenSocketForTest) {
    listenSocketForTest = p_listenSocketForTest;
}

void SendToUnity::setListenSocketForTest1(const SOCKET p_listenSocketForTest1) {
    listenSocketForTest1 = p_listenSocketForTest1;
}

void SendToUnity::setListenSocketForTest2(const SOCKET p_listenSocketForTest2) {
    listenSocketForTest2 = p_listenSocketForTest2;
}

const SOCKET SendToUnity::getListenSocketForalarm(void) const {
    return listenSocketForalarm;
}

void SendToUnity::setListenSocketForalarm(const SOCKET p_listenSocketForalarm) {
    listenSocketForalarm = p_listenSocketForalarm;
}

const SOCKET SendToUnity::getListenSocketForfire(void) const {
    return listenSocketForfire;
}

void SendToUnity::setListenSocketForfire(const SOCKET p_listenSocketForfire) {
    listenSocketForfire = p_listenSocketForfire;
}

const int SendToUnity::getPortCall(void) const {
    return portCall;
}

void SendToUnity::setPortCall(const int p_portCall) {
    portCall = p_portCall;
}

const int SendToUnity::getPortExtinguisher(void) const {
    return portExtinguisher;
}

void SendToUnity::setPortExtinguisher(const int p_portExtinguisher) {
    portExtinguisher = p_portExtinguisher;
}

void SendToUnity::setPortHVAC(const int p_portHVAC) {
    portHVAC = p_portHVAC;
}

void SendToUnity::setPortIntensity(const int p_portIntensity) {
    portIntensity = p_portIntensity;
}

void SendToUnity::setPortTemperature(const int p_portTemperature) {
    portTemperature = p_portTemperature;
}

void SendToUnity::setPortTest(const int p_portTest) {
    portTest = p_portTest;
}

void SendToUnity::setPortTest1(const int p_portTest1) {
    portTest1 = p_portTest1;
}

void SendToUnity::setPortTest2(const int p_portTest2) {
    portTest2 = p_portTest2;
}

const int SendToUnity::getPortalarm(void) const {
    return portalarm;
}

void SendToUnity::setPortalarm(const int p_portalarm) {
    portalarm = p_portalarm;
}

const int SendToUnity::getPortfire(void) const {
    return portfire;
}

void SendToUnity::setPortfire(const int p_portfire) {
    portfire = p_portfire;
}

void SendToUnity::setTest(const float p_test) {
    test = p_test;
}

void SendToUnity::setTest1(const float p_test1) {
    test1 = p_test1;
}

void SendToUnity::setTest2(const float p_test2) {
    test2 = p_test2;
}

void SendToUnity::setTest2check(const float p_test2check) {
    test2check = p_test2check;
}

void SendToUnity::setUtof(const double p_utof) {
    utof = p_utof;
}

void SendToUnity::DispenseFuel_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DispenseFuel");
    rootState_subState = DispenseFuel;
    rootState_active = DispenseFuel;
    state_10_entDef();
    state_11_entDef();
}

void SendToUnity::DispenseFuel_exit(void) {
    switch (state_10_subState) {
        // State UpdateVariable
        case UpdateVariable:
        {
            cancel(state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
        }
        break;
        case accepttimeevent_25:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
        }
        break;
        default:
            break;
    }
    state_10_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10");
    state_11_exit();
    
    NOTIFY_STATE_EXITED("ROOT.DispenseFuel");
}

IOxfReactive::TakeEventStatus SendToUnity::DispenseFuel_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_10
        omComponentStatus = state_10_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(DispenseFuel) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_11
            omComponentStatus = state_11_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    
    return res;
}

void SendToUnity::state_11_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11");
    NOTIFY_TRANSITION_STARTED("ROOT.DispenseFuel.0");
    NOTIFY_STATE_ENTERED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    state_11_subState = SendAndRecieve;
    state_11_active = SendAndRecieve;
    //#[ state DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
    callMain();
                
     
    //#]
    state_11_timeout = scheduleTimeout(500, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    NOTIFY_TRANSITION_TERMINATED("ROOT.DispenseFuel.0");
}

void SendToUnity::state_11_exit(void) {
    // State SendAndRecieve
    if(state_11_subState == SendAndRecieve)
        {
            cancel(state_11_timeout);
            NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
        }
    state_11_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11");
}

IOxfReactive::TakeEventStatus SendToUnity::state_11_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State SendAndRecieve
    if(state_11_active == SendAndRecieve)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_11_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.DispenseFuel.4");
                            cancel(state_11_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_STATE_ENTERED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            state_11_subState = SendAndRecieve;
                            state_11_active = SendAndRecieve;
                            //#[ state DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
                            callMain();
                                        
                             
                            //#]
                            state_11_timeout = scheduleTimeout(500, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.DispenseFuel.4");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void SendToUnity::state_10_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10");
    NOTIFY_TRANSITION_STARTED("ROOT.DispenseFuel.1");
    NOTIFY_STATE_ENTERED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    state_10_subState = UpdateVariable;
    state_10_active = UpdateVariable;
    //#[ state DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
    test++;     
    
    //#]
    state_10_timeout = scheduleTimeout(500, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    NOTIFY_TRANSITION_TERMINATED("ROOT.DispenseFuel.1");
}

IOxfReactive::TakeEventStatus SendToUnity::state_10_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State UpdateVariable
        case UpdateVariable:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.DispenseFuel.2");
                            cancel(state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                            NOTIFY_STATE_ENTERED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                            pushNullTransition();
                            state_10_subState = accepttimeevent_25;
                            state_10_active = accepttimeevent_25;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.DispenseFuel.2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_25:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.DispenseFuel.3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                    NOTIFY_STATE_ENTERED("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    state_10_subState = UpdateVariable;
                    state_10_active = UpdateVariable;
                    //#[ state DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
                    test++;     
                    
                    //#]
                    state_10_timeout = scheduleTimeout(500, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    NOTIFY_TRANSITION_TERMINATED("ROOT.DispenseFuel.3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SendToUnity::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        DispenseFuel_entDef();
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SendToUnity::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State DispenseFuel
    if(rootState_active == DispenseFuel)
        {
            res = DispenseFuel_processEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSendToUnity::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("sockfd", x2String(myReal->sockfd));
    aomsAttributes->addAttribute("iResultTest1", x2String(myReal->iResultTest1));
    aomsAttributes->addAttribute("portTest1", x2String(myReal->portTest1));
    aomsAttributes->addAttribute("ws", UNKNOWN2STRING(myReal->ws));
    aomsAttributes->addAttribute("serverName", x2String(myReal->serverName));
    aomsAttributes->addAttribute("listenSocketForTest1", UNKNOWN2STRING(myReal->listenSocketForTest1));
    aomsAttributes->addAttribute("connectSocketForTest1", UNKNOWN2STRING(myReal->connectSocketForTest1));
    aomsAttributes->addAttribute("recvbuf", array2String(DEFAULT_BUFLEN, myReal->recvbuf, sizeof(char), &x2String));
    aomsAttributes->addAttribute("recvbuflen", x2String(myReal->recvbuflen));
    aomsAttributes->addAttribute("sendbuflen", x2String(myReal->sendbuflen));
    aomsAttributes->addAttribute("iSendResultTest1", x2String(myReal->iSendResultTest1));
    aomsAttributes->addAttribute("displayValue", x2String(myReal->displayValue));
    aomsAttributes->addAttribute("sndmsgbuf", array2String(DEFAULT_BUFLEN+3, myReal->sndmsgbuf, sizeof(char), &x2String));
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
    aomsAttributes->addAttribute("Int32", x2String(myReal->Int32));
    aomsAttributes->addAttribute("test1", x2String(myReal->test1));
    aomsAttributes->addAttribute("address_test1", UNKNOWN2STRING(myReal->address_test1));
    aomsAttributes->addAttribute("utof", x2String(myReal->utof));
    aomsAttributes->addAttribute("fval", x2String(myReal->fval));
    aomsAttributes->addAttribute("filename", x2String(myReal->filename));
    aomsAttributes->addAttribute("test", x2String(myReal->test));
    aomsAttributes->addAttribute("portTest", x2String(myReal->portTest));
    aomsAttributes->addAttribute("listenSocketForTest", UNKNOWN2STRING(myReal->listenSocketForTest));
    aomsAttributes->addAttribute("iSendResultTest", x2String(myReal->iSendResultTest));
    aomsAttributes->addAttribute("iResultTest", x2String(myReal->iResultTest));
    aomsAttributes->addAttribute("address_test", UNKNOWN2STRING(myReal->address_test));
    aomsAttributes->addAttribute("connectSocketForTest", UNKNOWN2STRING(myReal->connectSocketForTest));
    aomsAttributes->addAttribute("address_test2", UNKNOWN2STRING(myReal->address_test2));
    aomsAttributes->addAttribute("connectSocketForTest2", UNKNOWN2STRING(myReal->connectSocketForTest2));
    aomsAttributes->addAttribute("iResultTest2", x2String(myReal->iResultTest2));
    aomsAttributes->addAttribute("iSendResultTest2", x2String(myReal->iSendResultTest2));
    aomsAttributes->addAttribute("listenSocketForTest2", UNKNOWN2STRING(myReal->listenSocketForTest2));
    aomsAttributes->addAttribute("portTest2", x2String(myReal->portTest2));
    aomsAttributes->addAttribute("test2", x2String(myReal->test2));
    aomsAttributes->addAttribute("test2check", x2String(myReal->test2check));
    aomsAttributes->addAttribute("address_intensity", UNKNOWN2STRING(myReal->address_intensity));
    aomsAttributes->addAttribute("connectSocketForIntensity", UNKNOWN2STRING(myReal->connectSocketForIntensity));
    aomsAttributes->addAttribute("iResultIntensity", x2String(myReal->iResultIntensity));
    aomsAttributes->addAttribute("iSendResultIntensity", x2String(myReal->iSendResultIntensity));
    aomsAttributes->addAttribute("listenSocketForIntensity", UNKNOWN2STRING(myReal->listenSocketForIntensity));
    aomsAttributes->addAttribute("portIntensity", x2String(myReal->portIntensity));
    aomsAttributes->addAttribute("intensity", x2String(myReal->intensity));
    aomsAttributes->addAttribute("address_hvac", UNKNOWN2STRING(myReal->address_hvac));
    aomsAttributes->addAttribute("address_temperature", UNKNOWN2STRING(myReal->address_temperature));
    aomsAttributes->addAttribute("connectSocketForHVAC", UNKNOWN2STRING(myReal->connectSocketForHVAC));
    aomsAttributes->addAttribute("connectSocketForTemperature", UNKNOWN2STRING(myReal->connectSocketForTemperature));
    aomsAttributes->addAttribute("iResultHVAC", x2String(myReal->iResultHVAC));
    aomsAttributes->addAttribute("iResultTemperature", x2String(myReal->iResultTemperature));
    aomsAttributes->addAttribute("iSendResultHVAC", x2String(myReal->iSendResultHVAC));
    aomsAttributes->addAttribute("iSendResultTemperature", x2String(myReal->iSendResultTemperature));
    aomsAttributes->addAttribute("listenSocketForHVAC", UNKNOWN2STRING(myReal->listenSocketForHVAC));
    aomsAttributes->addAttribute("listenSocketForTemperature", UNKNOWN2STRING(myReal->listenSocketForTemperature));
    aomsAttributes->addAttribute("portTemperature", x2String(myReal->portTemperature));
    aomsAttributes->addAttribute("portHVAC", x2String(myReal->portHVAC));
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
    aomsAttributes->addAttribute("hvac", x2String(myReal->hvac));
    aomsAttributes->addAttribute("hvac_text", x2String(myReal->hvac_text));
    aomsAttributes->addAttribute("hvac_bool", x2String(myReal->hvac_bool));
    aomsAttributes->addAttribute("address_fire", UNKNOWN2STRING(myReal->address_fire));
    aomsAttributes->addAttribute("address_Extinguisher", UNKNOWN2STRING(myReal->address_Extinguisher));
    aomsAttributes->addAttribute("address_Call", UNKNOWN2STRING(myReal->address_Call));
    aomsAttributes->addAttribute("address_alarm", UNKNOWN2STRING(myReal->address_alarm));
    aomsAttributes->addAttribute("address_interiorLightIntensity", UNKNOWN2STRING(myReal->address_interiorLightIntensity));
    aomsAttributes->addAttribute("address_userCode", UNKNOWN2STRING(myReal->address_userCode));
    aomsAttributes->addAttribute("address_Door", UNKNOWN2STRING(myReal->address_Door));
    aomsAttributes->addAttribute("address_fanSpeed", UNKNOWN2STRING(myReal->address_fanSpeed));
    aomsAttributes->addAttribute("address_StateHVAC", UNKNOWN2STRING(myReal->address_StateHVAC));
    aomsAttributes->addAttribute("portfire", x2String(myReal->portfire));
    aomsAttributes->addAttribute("portExtinguisher", x2String(myReal->portExtinguisher));
    aomsAttributes->addAttribute("portCall", x2String(myReal->portCall));
    aomsAttributes->addAttribute("portalarm", x2String(myReal->portalarm));
    aomsAttributes->addAttribute("portinteriorLightIntensity", x2String(myReal->portinteriorLightIntensity));
    aomsAttributes->addAttribute("portuserCode", x2String(myReal->portuserCode));
    aomsAttributes->addAttribute("portDoor", x2String(myReal->portDoor));
    aomsAttributes->addAttribute("portfanSpeed", x2String(myReal->portfanSpeed));
    aomsAttributes->addAttribute("portStateHVAC", x2String(myReal->portStateHVAC));
    aomsAttributes->addAttribute("listenSocketForfire", UNKNOWN2STRING(myReal->listenSocketForfire));
    aomsAttributes->addAttribute("listenSocketForExtinguisher", UNKNOWN2STRING(myReal->listenSocketForExtinguisher));
    aomsAttributes->addAttribute("listenSocketForCall", UNKNOWN2STRING(myReal->listenSocketForCall));
    aomsAttributes->addAttribute("listenSocketForalarm", UNKNOWN2STRING(myReal->listenSocketForalarm));
    aomsAttributes->addAttribute("listenSocketForinteriorLightIntensity", UNKNOWN2STRING(myReal->listenSocketForinteriorLightIntensity));
    aomsAttributes->addAttribute("listenSocketForuserCode", UNKNOWN2STRING(myReal->listenSocketForuserCode));
    aomsAttributes->addAttribute("listenSocketForDoor", UNKNOWN2STRING(myReal->listenSocketForDoor));
    aomsAttributes->addAttribute("listenSocketForfanSpeed", UNKNOWN2STRING(myReal->listenSocketForfanSpeed));
    aomsAttributes->addAttribute("listenSocketForStateHVAC", UNKNOWN2STRING(myReal->listenSocketForStateHVAC));
    aomsAttributes->addAttribute("iResultfire", x2String(myReal->iResultfire));
    aomsAttributes->addAttribute("iResultExtinguisher", x2String(myReal->iResultExtinguisher));
    aomsAttributes->addAttribute("iResultCall", x2String(myReal->iResultCall));
    aomsAttributes->addAttribute("iResultalarm", x2String(myReal->iResultalarm));
    aomsAttributes->addAttribute("iResultinteriorLightIntensity", x2String(myReal->iResultinteriorLightIntensity));
    aomsAttributes->addAttribute("iResultuserCode", x2String(myReal->iResultuserCode));
    aomsAttributes->addAttribute("iResultDoor", x2String(myReal->iResultDoor));
    aomsAttributes->addAttribute("iResultfanSpeed", x2String(myReal->iResultfanSpeed));
    aomsAttributes->addAttribute("iResultStateHVAC", x2String(myReal->iResultStateHVAC));
    aomsAttributes->addAttribute("fire", x2String(myReal->fire));
    aomsAttributes->addAttribute("Extinguisher", x2String(myReal->Extinguisher));
    aomsAttributes->addAttribute("Call", x2String(myReal->Call));
    aomsAttributes->addAttribute("alarm", x2String(myReal->alarm));
    aomsAttributes->addAttribute("interiorLightIntensity", x2String(myReal->interiorLightIntensity));
    aomsAttributes->addAttribute("userCode", x2String(myReal->userCode));
    aomsAttributes->addAttribute("Door", x2String(myReal->Door));
    aomsAttributes->addAttribute("fanSpeed", x2String(myReal->fanSpeed));
    aomsAttributes->addAttribute("StateHVAC", x2String(myReal->StateHVAC));
    aomsAttributes->addAttribute("iSendResultfire", x2String(myReal->iSendResultfire));
    aomsAttributes->addAttribute("iSendResultExtinguisher", x2String(myReal->iSendResultExtinguisher));
    aomsAttributes->addAttribute("iSendResultCall", x2String(myReal->iSendResultCall));
    aomsAttributes->addAttribute("iSendResultalarm", x2String(myReal->iSendResultalarm));
    aomsAttributes->addAttribute("iSendResultinteriorLightIntensity", x2String(myReal->iSendResultinteriorLightIntensity));
    aomsAttributes->addAttribute("iSendResultuserCode", x2String(myReal->iSendResultuserCode));
    aomsAttributes->addAttribute("iSendResultDoor", x2String(myReal->iSendResultDoor));
    aomsAttributes->addAttribute("iSendResultfanSpeed", x2String(myReal->iSendResultfanSpeed));
    aomsAttributes->addAttribute("iSendResultStateHVAC", x2String(myReal->iSendResultStateHVAC));
    aomsAttributes->addAttribute("address_hologram", UNKNOWN2STRING(myReal->address_hologram));
    aomsAttributes->addAttribute("porthologram", x2String(myReal->porthologram));
    aomsAttributes->addAttribute("listenSocketForhologram", UNKNOWN2STRING(myReal->listenSocketForhologram));
    aomsAttributes->addAttribute("iResulthologram", x2String(myReal->iResulthologram));
    aomsAttributes->addAttribute("iSendResulthologram", x2String(myReal->iSendResulthologram));
    aomsAttributes->addAttribute("hologram", x2String(myReal->hologram));
}

void OMAnimatedSendToUnity::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedSendToUnity::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == SendToUnity::DispenseFuel)
        {
            DispenseFuel_serializeStates(aomsState);
        }
}

void OMAnimatedSendToUnity::DispenseFuel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DispenseFuel");
    state_10_serializeStates(aomsState);
    state_11_serializeStates(aomsState);
}

void OMAnimatedSendToUnity::state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11");
    if(myReal->state_11_subState == SendToUnity::SendAndRecieve)
        {
            SendAndRecieve_serializeStates(aomsState);
        }
}

void OMAnimatedSendToUnity::SendAndRecieve_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
}

void OMAnimatedSendToUnity::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10");
    switch (myReal->state_10_subState) {
        case SendToUnity::UpdateVariable:
        {
            UpdateVariable_serializeStates(aomsState);
        }
        break;
        case SendToUnity::accepttimeevent_25:
        {
            accepttimeevent_25_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSendToUnity::UpdateVariable_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
}

void OMAnimatedSendToUnity::accepttimeevent_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
}
//#]

IMPLEMENT_REACTIVE_META_P(SendToUnity, IMRPkg, IMRPkg, false, OMAnimatedSendToUnity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SendToUnity.cpp
*********************************************************************/

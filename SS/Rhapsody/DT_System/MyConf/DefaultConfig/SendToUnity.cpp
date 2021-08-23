/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: SendToUnity
//!	Generated Date	: Wed, 11, Aug 2021  
	File Path	: MyConf\DefaultConfig\SendToUnity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SendToUnity.h"
//#[ ignore
#define ContrPkg_SendToUnity_SendToUnity_SERIALIZE OM_NO_OP

#define ContrPkg_SendToUnity_callMain_SERIALIZE OM_NO_OP
//#]

//## package ContrPkg

//## class SendToUnity
//#[ ignore
SendToUnity::Speed_SP_C::Speed_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::Speed_SP_C::~Speed_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::Speed_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::Speed_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::Speed_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::Speed_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::Speed_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::MovDir_SP_C::MovDir_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::MovDir_SP_C::~MovDir_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::MovDir_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::MovDir_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::MovDir_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::MovDir_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::MovDir_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::Destination_SP_C::Destination_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::Destination_SP_C::~Destination_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::Destination_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::Destination_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::Destination_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::Destination_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::Destination_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::PathAlgo_SP_C::PathAlgo_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::PathAlgo_SP_C::~PathAlgo_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::PathAlgo_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::PathAlgo_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::PathAlgo_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::PathAlgo_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::PathAlgo_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::GetMagVal_SP_C::GetMagVal_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::GetMagVal_SP_C::~GetMagVal_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::GetMagVal_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::GetMagVal_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::GetMagVal_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::GetMagVal_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::GetMagVal_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::MagCalcMethod_SP_C::MagCalcMethod_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::MagCalcMethod_SP_C::~MagCalcMethod_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::MagCalcMethod_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::MagCalcMethod_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::MagCalcMethod_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::MagCalcMethod_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::MagCalcMethod_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::StateBot_SP_C::StateBot_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::StateBot_SP_C::~StateBot_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::StateBot_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::StateBot_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::StateBot_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::StateBot_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::StateBot_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::ShowMap_SP_C::ShowMap_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::ShowMap_SP_C::~ShowMap_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::ShowMap_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::ShowMap_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::ShowMap_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::ShowMap_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::ShowMap_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

SendToUnity::Go_SP_C::Go_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

SendToUnity::Go_SP_C::~Go_SP_C(void) {
    cleanUpRelations();
}

void SendToUnity::Go_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void SendToUnity::Go_SP_C::connectSendToUnity(SendToUnity* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* SendToUnity::Go_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void SendToUnity::Go_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void SendToUnity::Go_SP_C::cleanUpRelations(void) {
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
    NOTIFY_OPERATION(callMain, callMain(), 0, ContrPkg_SendToUnity_callMain_SERIALIZE);
    //#[ operation callMain()
    #ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN 
    #define _WINSOCK_DEPRECATED_NO_WARNINGS
    #endif      
    
    #include <stdlib.h> 
    
    WSAStartup(0x0101, &ws);
    
    
    /*
    Speed - int
    MovDir - int
    Destination - int
    PathAlgo - int
    GetMagVal - int
    MagCalcMethod - int
    StateBot - int
    ShowMap - int
    */
    
    char out_string_for_ShowMap[1024];
    char out_string_for_GoToDest[1024];
    char out_string_for_StateBot[1024];
    char out_string_for_MagCalcMethod[1024];
    char out_string_for_GetMagVal[1024];
    char out_string_for_PathAlgo[1024];
    char out_string_for_Destination[1024];
    char out_string_for_MovDir[1024];
    char out_string_for_Speed[1024];
    
    
    //GoToDest
    ZeroMemory(&address_GoToDest, sizeof(address_GoToDest));
    address_GoToDest.sin_family = AF_INET;
    address_GoToDest.sin_port = htons(portGoToDest);
    address_GoToDest.sin_addr.s_addr = inet_addr(serverName);  
    
    //GetMagVal
    ZeroMemory(&address_GetMagVal, sizeof(address_GetMagVal));
    address_GetMagVal.sin_family = AF_INET;
    address_GetMagVal.sin_port = htons(portGetMagVal);
    address_GetMagVal.sin_addr.s_addr = inet_addr(serverName);
    
    //MagCalcMethod
    ZeroMemory(&address_MagCalcMethod, sizeof(address_MagCalcMethod));
    address_MagCalcMethod.sin_family = AF_INET;
    address_MagCalcMethod.sin_port = htons(portMagCalcMethod);
    address_MagCalcMethod.sin_addr.s_addr = inet_addr(serverName);
    
    ZeroMemory(&address_r_MCM, sizeof(address_r_MCM));
    address_r_MCM.sin_family = AF_INET;
    address_r_MCM.sin_port = htons(portMCM);
    address_r_MCM.sin_addr.s_addr = inet_addr(serverName);
    
    //PathAlgo
    ZeroMemory(&address_PathAlgo, sizeof(address_PathAlgo));
    address_PathAlgo.sin_family = AF_INET;
    address_PathAlgo.sin_port = htons(portPathAlgo);
    address_PathAlgo.sin_addr.s_addr = inet_addr(serverName);
    
    ZeroMemory(&address_r_PA, sizeof(address_r_PA));
    address_r_PA.sin_family = AF_INET;
    address_r_PA.sin_port = htons(portPA);
    address_r_PA.sin_addr.s_addr = inet_addr(serverName);
    
    //MovDir
    ZeroMemory(&address_MovDir, sizeof(address_MovDir));
    address_MovDir.sin_family = AF_INET;
    address_MovDir.sin_port = htons(portMovDir);
    address_MovDir.sin_addr.s_addr = inet_addr(serverName);
    
    ZeroMemory(&address_r_MD, sizeof(address_r_MD));
    address_r_MD.sin_family = AF_INET;
    address_r_MD.sin_port = htons(portMD);
    address_r_MD.sin_addr.s_addr = inet_addr(serverName);
    
    //Speed
    ZeroMemory(&address_Speed, sizeof(address_Speed));
    address_Speed.sin_family = AF_INET;
    address_Speed.sin_port = htons(portSpeed);
    address_Speed.sin_addr.s_addr = inet_addr(serverName);
    
    ZeroMemory(&address_r_S, sizeof(address_r_S));
    address_r_S.sin_family = AF_INET;
    address_r_S.sin_port = htons(portS);
    address_r_S.sin_addr.s_addr = inet_addr(serverName);
    
    //ShowMap
    ZeroMemory(&address_ShowMap, sizeof(address_ShowMap));
    address_ShowMap.sin_family = AF_INET;
    address_ShowMap.sin_port = htons(portShowMap);
    address_ShowMap.sin_addr.s_addr = inet_addr(serverName);
    
    ZeroMemory(&address_r_SM, sizeof(address_r_SM));
    address_r_SM.sin_family = AF_INET;
    address_r_SM.sin_port = htons(portSM);
    address_r_SM.sin_addr.s_addr = inet_addr(serverName);
    
    //Destination
    ZeroMemory(&address_Destination, sizeof(address_Destination));
    address_Destination.sin_family = AF_INET;
    address_Destination.sin_port = htons(portDestination);
    address_Destination.sin_addr.s_addr = inet_addr(serverName);
    
    ZeroMemory(&address_r_D, sizeof(address_r_D));
    address_r_D.sin_family = AF_INET;
    address_r_D.sin_port = htons(portD);
    address_r_D.sin_addr.s_addr = inet_addr(serverName);
    
    //StateBot
    ZeroMemory(&address_StateBot, sizeof(address_StateBot));
    address_StateBot.sin_family = AF_INET;
    address_StateBot.sin_port = htons(portStateBot);
    address_StateBot.sin_addr.s_addr = inet_addr(serverName);
    
    ZeroMemory(&address_r_SB, sizeof(address_r_SB));
    address_r_SB.sin_family = AF_INET;
    address_r_SB.sin_port = htons(portSB);
    address_r_SB.sin_addr.s_addr = inet_addr(serverName);
    
    
    //INITIALIZE ALL SOCKETS
    listenSocketForGoToDest= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForMagCalcMethod = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForPathAlgo = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForMovDir = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForSpeed = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForShowMap = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForDestination= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForGetMagVal = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForStateBot = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    listenSocketForRecMagCalcMethod = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForRecPathAlgo = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForRecMovDir = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForRecSpeed = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForRecShowMap = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForRecDestination= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForRecGetMagVal = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    listenSocketForRecStateBot = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    
    
    //CONNECT ALL THE SOCKETS
    iResultGoToDest= connect(listenSocketForGoToDest, (SOCKADDR*)&address_GoToDest, sizeof(address_GoToDest));
    iResultMagCalcMethod = connect(listenSocketForMagCalcMethod, (SOCKADDR*)&address_MagCalcMethod, sizeof(address_MagCalcMethod));
    iResultPathAlgo = connect(listenSocketForPathAlgo, (SOCKADDR*)&address_PathAlgo, sizeof(address_PathAlgo));
    iResultMovDir = connect(listenSocketForMovDir, (SOCKADDR*)&address_MovDir, sizeof(address_MovDir));
    iResultSpeed = connect(listenSocketForSpeed, (SOCKADDR*)&address_Speed, sizeof(address_Speed));
    iResultShowMap = connect(listenSocketForShowMap, (SOCKADDR*)&address_ShowMap, sizeof(address_ShowMap));
    iResultDestination = connect(listenSocketForDestination, (SOCKADDR*)&address_Destination, sizeof(address_Destination));
    iResultGetMagVal = connect(listenSocketForGetMagVal, (SOCKADDR*)&address_GetMagVal, sizeof(address_GetMagVal));
    iResultStateBot = connect(listenSocketForStateBot, (SOCKADDR*)&address_StateBot, sizeof(address_StateBot));
    
    iResultRecMagCalcMethod = connect(listenSocketForRecMagCalcMethod, (SOCKADDR*)&address_r_MCM, sizeof(address_r_MCM));
    iResultRecPathAlgo = connect(listenSocketForRecPathAlgo, (SOCKADDR*)&address_r_PA, sizeof(address_r_PA));
    iResultRecMovDir = connect(listenSocketForRecMovDir, (SOCKADDR*)&address_r_MD, sizeof(address_r_MD));
    iResultRecSpeed = connect(listenSocketForRecSpeed, (SOCKADDR*)&address_r_S, sizeof(address_r_S));
    iResultRecShowMap = connect(listenSocketForRecShowMap, (SOCKADDR*)&address_r_SM, sizeof(address_r_SM));
    iResultRecDestination = connect(listenSocketForRecDestination, (SOCKADDR*)&address_r_D, sizeof(address_r_D));
    iResultRecGetMagVal = connect(listenSocketForRecGetMagVal, (SOCKADDR*)&address_r_GMV, sizeof(address_r_GMV));
    iResultRecStateBot = connect(listenSocketForRecStateBot, (SOCKADDR*)&address_r_SB, sizeof(address_r_SB));
    
    
    //ASSIGN VALUES TO SEND 
    sprintf(out_string_for_GoToDest, "%d", Go);
    sprintf(out_string_for_MagCalcMethod, "%d", MagCalcMethod);
    sprintf(out_string_for_PathAlgo, "%d", PathAlgo);
    sprintf(out_string_for_MovDir, "%d", MovDir);
    sprintf(out_string_for_Speed, "%d", Speed);
    sprintf(out_string_for_ShowMap, "%d", ShowMap);
    sprintf(out_string_for_Destination, "%d", Destination);
    sprintf(out_string_for_GetMagVal, "%d", GetMagVal);
    sprintf(out_string_for_StateBot, "%d", StateBot);
    
    //SEND VALUE
    iSendResultGoToDest= sendto(listenSocketForGoToDest, (char *)&out_string_for_GoToDest, sizeof(uint32_t), 0, (SOCKADDR *)& address_GoToDest, sizeof(address_GoToDest));
    iSendResultMagCalcMethod = sendto(listenSocketForMagCalcMethod, (char *)&out_string_for_MagCalcMethod, sizeof(uint32_t), 0, (SOCKADDR *)& address_MagCalcMethod, sizeof(address_MagCalcMethod));
    iSendResultPathAlgo = sendto(listenSocketForPathAlgo, (char *)&out_string_for_PathAlgo, sizeof(uint32_t), 0, (SOCKADDR *)& address_PathAlgo, sizeof(address_PathAlgo));
    iSendResultMovDir = sendto(listenSocketForMovDir, (char *)&out_string_for_MovDir, sizeof(uint32_t), 0, (SOCKADDR *)& address_MovDir, sizeof(address_MovDir));
    iSendResultSpeed = sendto(listenSocketForSpeed, (char *)&out_string_for_Speed, sizeof(uint32_t), 0, (SOCKADDR *)& address_Speed, sizeof(address_Speed));
    iSendResultShowMap = sendto(listenSocketForShowMap, (char *)&out_string_for_ShowMap, sizeof(uint32_t), 0, (SOCKADDR *)& address_ShowMap, sizeof(address_ShowMap));
    iSendResultDestination = sendto(listenSocketForDestination, (char *)&out_string_for_Destination, sizeof(uint32_t), 0, (SOCKADDR *)& address_Destination, sizeof(address_Destination));
    iSendResultGetMagVal = sendto(listenSocketForGetMagVal, (char *)&out_string_for_GetMagVal, sizeof(uint32_t), 0, (SOCKADDR *)& address_GetMagVal, sizeof(address_GetMagVal));
    iSendResultStateBot = sendto(listenSocketForStateBot, (char *)&out_string_for_StateBot, sizeof(uint32_t), 0, (SOCKADDR *)& address_StateBot, sizeof(address_StateBot));
    
    //SHOW SENT VALUES IN CONSOLE
    printf("GoToDest value sent: %d \n", Go);
    printf("MagCalcMethod value sent: %s \n", out_string_for_MagCalcMethod);
    printf("PathAlgo value sent: %s \n", out_string_for_PathAlgo);
    printf("MovDir value sent: %s \n", out_string_for_MovDir);
    printf("Speed value sent: %s \n", out_string_for_Speed);
    printf("ShowMap value sent: %s \n", out_string_for_ShowMap);
    printf("Destination value sent: %s \n", out_string_for_Destination);
    printf("GetMagVal value sent: %s \n", out_string_for_GetMagVal);
    printf("StateBot value sent: %s \n", out_string_for_StateBot); 
    printf("\n");
    
    
    //CLOSE ALL THE SOCKETS
    closesocket(listenSocketForGoToDest);
    closesocket(listenSocketForMagCalcMethod);
    closesocket(listenSocketForPathAlgo);
    closesocket(listenSocketForMovDir);
    closesocket(listenSocketForSpeed);
    closesocket(listenSocketForShowMap);
    closesocket(listenSocketForDestination);
    closesocket(listenSocketForGetMagVal);
    closesocket(listenSocketForStateBot);
    
    closesocket(listenSocketForRecMagCalcMethod);
    closesocket(listenSocketForRecPathAlgo);
    closesocket(listenSocketForRecMovDir);
    closesocket(listenSocketForRecSpeed);
    closesocket(listenSocketForRecShowMap);
    closesocket(listenSocketForRecDestination);
    closesocket(listenSocketForRecGetMagVal);
    closesocket(listenSocketForRecStateBot);
    
    
    
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

SendToUnity::SendToUnity(void) : OMThread(), OMReactive(), intFlowInterface(), displayValue(""), recvbuflen(DEFAULT_BUFLEN), sendbuflen(DEFAULT_BUFLEN), serverName("127.0.0.1"), Int32(0), filename(""), est(0), MovDir(0), Destination(0), PathAlgo(0), Speed(0), GetMagVal(0), MagCalcMethod(0), StateBot(0), ShowMap(0), listenSocketForMovDir(INVALID_SOCKET), listenSocketForDestination(INVALID_SOCKET), listenSocketForPathAlgo(INVALID_SOCKET), listenSocketForSpeed(INVALID_SOCKET), listenSocketForGetMagVal(INVALID_SOCKET), listenSocketForMagCalcMethod(INVALID_SOCKET), listenSocketForStateBot(INVALID_SOCKET), listenSocketForShowMap(INVALID_SOCKET), portMovDir(52059), portDestination(52060), portPathAlgo(52056), portSpeed(52058), portGetMagVal(52062), portMagCalcMethod(52064), portStateBot(52066), portShowMap(52063), Go(0), listenSocketForRecDestination(INVALID_SOCKET), listenSocketForRecGetMagVal(INVALID_SOCKET), listenSocketForRecMagCalcMethod(INVALID_SOCKET), listenSocketForRecMovDir(INVALID_SOCKET), listenSocketForRecPathAlgo(INVALID_SOCKET), listenSocketForRecShowMap(INVALID_SOCKET), listenSocketForRecSpeed(INVALID_SOCKET), listenSocketForRecStateBot(INVALID_SOCKET), portD(52080), portGoToDest(52068), portMCM(52070), portMD(52074), portPA(52072), portS(52076), portSB(52082), portSM(52078) {
    NOTIFY_ACTIVE_CONSTRUCTOR(SendToUnity, SendToUnity(), 0, ContrPkg_SendToUnity_SendToUnity_SERIALIZE);
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

const OMString SendToUnity::getFilename(void) const {
    return filename;
}

const double SendToUnity::getFval(void) const {
    return fval;
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

void SendToUnity::setWs(const WSADATA p_ws) {
    ws = p_ws;
}

void SendToUnity::initRelations(void) {
    if (get_Speed_SP() != NULL) {
        get_Speed_SP()->connectSendToUnity(this);
    }
    if (get_MovDir_SP() != NULL) {
        get_MovDir_SP()->connectSendToUnity(this);
    }
    if (get_Destination_SP() != NULL) {
        get_Destination_SP()->connectSendToUnity(this);
    }
    if (get_PathAlgo_SP() != NULL) {
        get_PathAlgo_SP()->connectSendToUnity(this);
    }
    if (get_GetMagVal_SP() != NULL) {
        get_GetMagVal_SP()->connectSendToUnity(this);
    }
    if (get_MagCalcMethod_SP() != NULL) {
        get_MagCalcMethod_SP()->connectSendToUnity(this);
    }
    if (get_StateBot_SP() != NULL) {
        get_StateBot_SP()->connectSendToUnity(this);
    }
    if (get_ShowMap_SP() != NULL) {
        get_ShowMap_SP()->connectSendToUnity(this);
    }
    if (get_Go_SP() != NULL) {
        get_Go_SP()->connectSendToUnity(this);
    }
}

//#[ ignore
void SendToUnity::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_Speed_SP()) {
        setSpeed(data);
    }
    
    if (pCaller == (void *)get_MovDir_SP()) {
        setMovDir(data);
    }
    
    if (pCaller == (void *)get_Destination_SP()) {
        setDestination(data);
    }
    
    if (pCaller == (void *)get_PathAlgo_SP()) {
        setPathAlgo(data);
    }
    
    if (pCaller == (void *)get_GetMagVal_SP()) {
        setGetMagVal(data);
    }
    
    if (pCaller == (void *)get_MagCalcMethod_SP()) {
        setMagCalcMethod(data);
    }
    
    if (pCaller == (void *)get_StateBot_SP()) {
        setStateBot(data);
    }
    
    if (pCaller == (void *)get_ShowMap_SP()) {
        setShowMap(data);
    }
    
    if (pCaller == (void *)get_Go_SP()) {
        setGo(data);
    }
}

void SendToUnity::setDestination(int p_Destination) {
    if (Destination != p_Destination) {
        Destination = p_Destination;
        FLOW_DATA_RECEIVE("Destination", Destination, x2String);
    }
    
}

void SendToUnity::setGetMagVal(int p_GetMagVal) {
    if (GetMagVal != p_GetMagVal) {
        GetMagVal = p_GetMagVal;
        FLOW_DATA_RECEIVE("GetMagVal", GetMagVal, x2String);
    }
    
}

void SendToUnity::setGo(int p_Go) {
    if (Go != p_Go) {
        Go = p_Go;
        FLOW_DATA_RECEIVE("Go", Go, x2String);
    }
    
}

void SendToUnity::setMagCalcMethod(int p_MagCalcMethod) {
    if (MagCalcMethod != p_MagCalcMethod) {
        MagCalcMethod = p_MagCalcMethod;
        FLOW_DATA_RECEIVE("MagCalcMethod", MagCalcMethod, x2String);
    }
    
}

void SendToUnity::setMovDir(int p_MovDir) {
    if (MovDir != p_MovDir) {
        MovDir = p_MovDir;
        FLOW_DATA_RECEIVE("MovDir", MovDir, x2String);
    }
    
}

void SendToUnity::setPathAlgo(int p_PathAlgo) {
    if (PathAlgo != p_PathAlgo) {
        PathAlgo = p_PathAlgo;
        FLOW_DATA_RECEIVE("PathAlgo", PathAlgo, x2String);
    }
    
}

void SendToUnity::setShowMap(int p_ShowMap) {
    if (ShowMap != p_ShowMap) {
        ShowMap = p_ShowMap;
        FLOW_DATA_RECEIVE("ShowMap", ShowMap, x2String);
    }
    
}

void SendToUnity::setSpeed(int p_Speed) {
    if (Speed != p_Speed) {
        Speed = p_Speed;
        FLOW_DATA_RECEIVE("Speed", Speed, x2String);
    }
    
}

void SendToUnity::setStateBot(int p_StateBot) {
    if (StateBot != p_StateBot) {
        StateBot = p_StateBot;
        FLOW_DATA_RECEIVE("StateBot", StateBot, x2String);
    }
    
}
//#]

SendToUnity::Speed_SP_C* SendToUnity::getSpeed_SP(void) const {
    return (SendToUnity::Speed_SP_C*) &Speed_SP;
}

SendToUnity::Speed_SP_C* SendToUnity::get_Speed_SP(void) const {
    return (SendToUnity::Speed_SP_C*) &Speed_SP;
}

SendToUnity::MovDir_SP_C* SendToUnity::getMovDir_SP(void) const {
    return (SendToUnity::MovDir_SP_C*) &MovDir_SP;
}

SendToUnity::MovDir_SP_C* SendToUnity::get_MovDir_SP(void) const {
    return (SendToUnity::MovDir_SP_C*) &MovDir_SP;
}

SendToUnity::Destination_SP_C* SendToUnity::getDestination_SP(void) const {
    return (SendToUnity::Destination_SP_C*) &Destination_SP;
}

SendToUnity::Destination_SP_C* SendToUnity::get_Destination_SP(void) const {
    return (SendToUnity::Destination_SP_C*) &Destination_SP;
}

SendToUnity::PathAlgo_SP_C* SendToUnity::getPathAlgo_SP(void) const {
    return (SendToUnity::PathAlgo_SP_C*) &PathAlgo_SP;
}

SendToUnity::PathAlgo_SP_C* SendToUnity::get_PathAlgo_SP(void) const {
    return (SendToUnity::PathAlgo_SP_C*) &PathAlgo_SP;
}

SendToUnity::GetMagVal_SP_C* SendToUnity::getGetMagVal_SP(void) const {
    return (SendToUnity::GetMagVal_SP_C*) &GetMagVal_SP;
}

SendToUnity::GetMagVal_SP_C* SendToUnity::get_GetMagVal_SP(void) const {
    return (SendToUnity::GetMagVal_SP_C*) &GetMagVal_SP;
}

SendToUnity::MagCalcMethod_SP_C* SendToUnity::getMagCalcMethod_SP(void) const {
    return (SendToUnity::MagCalcMethod_SP_C*) &MagCalcMethod_SP;
}

SendToUnity::MagCalcMethod_SP_C* SendToUnity::get_MagCalcMethod_SP(void) const {
    return (SendToUnity::MagCalcMethod_SP_C*) &MagCalcMethod_SP;
}

SendToUnity::StateBot_SP_C* SendToUnity::getStateBot_SP(void) const {
    return (SendToUnity::StateBot_SP_C*) &StateBot_SP;
}

SendToUnity::StateBot_SP_C* SendToUnity::get_StateBot_SP(void) const {
    return (SendToUnity::StateBot_SP_C*) &StateBot_SP;
}

SendToUnity::ShowMap_SP_C* SendToUnity::getShowMap_SP(void) const {
    return (SendToUnity::ShowMap_SP_C*) &ShowMap_SP;
}

SendToUnity::ShowMap_SP_C* SendToUnity::get_ShowMap_SP(void) const {
    return (SendToUnity::ShowMap_SP_C*) &ShowMap_SP;
}

SendToUnity::Go_SP_C* SendToUnity::getGo_SP(void) const {
    return (SendToUnity::Go_SP_C*) &Go_SP;
}

SendToUnity::Go_SP_C* SendToUnity::get_Go_SP(void) const {
    return (SendToUnity::Go_SP_C*) &Go_SP;
}

const int SendToUnity::getDestination(void) const {
    return Destination;
}

const int SendToUnity::getGetMagVal(void) const {
    return GetMagVal;
}

const int SendToUnity::getGo(void) const {
    return Go;
}

void SendToUnity::setInt32(const int p_Int32) {
    Int32 = p_Int32;
}

const int SendToUnity::getMagCalcMethod(void) const {
    return MagCalcMethod;
}

const int SendToUnity::getMovDir(void) const {
    return MovDir;
}

const int SendToUnity::getPathAlgo(void) const {
    return PathAlgo;
}

const int SendToUnity::getShowMap(void) const {
    return ShowMap;
}

const int SendToUnity::getSpeed(void) const {
    return Speed;
}

const int SendToUnity::getStateBot(void) const {
    return StateBot;
}

const SOCKADDR_IN SendToUnity::getAddress_Destination(void) const {
    return address_Destination;
}

void SendToUnity::setAddress_Destination(const SOCKADDR_IN p_address_Destination) {
    address_Destination = p_address_Destination;
}

const SOCKADDR_IN SendToUnity::getAddress_GetMagVal(void) const {
    return address_GetMagVal;
}

void SendToUnity::setAddress_GetMagVal(const SOCKADDR_IN p_address_GetMagVal) {
    address_GetMagVal = p_address_GetMagVal;
}

const SOCKADDR_IN SendToUnity::getAddress_GoToDest(void) const {
    return address_GoToDest;
}

void SendToUnity::setAddress_GoToDest(const SOCKADDR_IN p_address_GoToDest) {
    address_GoToDest = p_address_GoToDest;
}

const SOCKADDR_IN SendToUnity::getAddress_MagCalcMethod(void) const {
    return address_MagCalcMethod;
}

void SendToUnity::setAddress_MagCalcMethod(const SOCKADDR_IN p_address_MagCalcMethod) {
    address_MagCalcMethod = p_address_MagCalcMethod;
}

const SOCKADDR_IN SendToUnity::getAddress_MovDir(void) const {
    return address_MovDir;
}

void SendToUnity::setAddress_MovDir(const SOCKADDR_IN p_address_MovDir) {
    address_MovDir = p_address_MovDir;
}

const SOCKADDR_IN SendToUnity::getAddress_PathAlgo(void) const {
    return address_PathAlgo;
}

void SendToUnity::setAddress_PathAlgo(const SOCKADDR_IN p_address_PathAlgo) {
    address_PathAlgo = p_address_PathAlgo;
}

const SOCKADDR_IN SendToUnity::getAddress_ShowMap(void) const {
    return address_ShowMap;
}

void SendToUnity::setAddress_ShowMap(const SOCKADDR_IN p_address_ShowMap) {
    address_ShowMap = p_address_ShowMap;
}

const SOCKADDR_IN SendToUnity::getAddress_Speed(void) const {
    return address_Speed;
}

void SendToUnity::setAddress_Speed(const SOCKADDR_IN p_address_Speed) {
    address_Speed = p_address_Speed;
}

const SOCKADDR_IN SendToUnity::getAddress_StateBot(void) const {
    return address_StateBot;
}

void SendToUnity::setAddress_StateBot(const SOCKADDR_IN p_address_StateBot) {
    address_StateBot = p_address_StateBot;
}

const SOCKADDR_IN SendToUnity::getAddress_r_D(void) const {
    return address_r_D;
}

void SendToUnity::setAddress_r_D(const SOCKADDR_IN p_address_r_D) {
    address_r_D = p_address_r_D;
}

const SOCKADDR_IN SendToUnity::getAddress_r_GMV(void) const {
    return address_r_GMV;
}

void SendToUnity::setAddress_r_GMV(const SOCKADDR_IN p_address_r_GMV) {
    address_r_GMV = p_address_r_GMV;
}

const SOCKADDR_IN SendToUnity::getAddress_r_MCM(void) const {
    return address_r_MCM;
}

void SendToUnity::setAddress_r_MCM(const SOCKADDR_IN p_address_r_MCM) {
    address_r_MCM = p_address_r_MCM;
}

const SOCKADDR_IN SendToUnity::getAddress_r_MD(void) const {
    return address_r_MD;
}

void SendToUnity::setAddress_r_MD(const SOCKADDR_IN p_address_r_MD) {
    address_r_MD = p_address_r_MD;
}

const SOCKADDR_IN SendToUnity::getAddress_r_PA(void) const {
    return address_r_PA;
}

void SendToUnity::setAddress_r_PA(const SOCKADDR_IN p_address_r_PA) {
    address_r_PA = p_address_r_PA;
}

const SOCKADDR_IN SendToUnity::getAddress_r_S(void) const {
    return address_r_S;
}

void SendToUnity::setAddress_r_S(const SOCKADDR_IN p_address_r_S) {
    address_r_S = p_address_r_S;
}

const SOCKADDR_IN SendToUnity::getAddress_r_SB(void) const {
    return address_r_SB;
}

void SendToUnity::setAddress_r_SB(const SOCKADDR_IN p_address_r_SB) {
    address_r_SB = p_address_r_SB;
}

const SOCKADDR_IN SendToUnity::getAddress_r_SM(void) const {
    return address_r_SM;
}

void SendToUnity::setAddress_r_SM(const SOCKADDR_IN p_address_r_SM) {
    address_r_SM = p_address_r_SM;
}

const float SendToUnity::getEst(void) const {
    return est;
}

void SendToUnity::setEst(const float p_est) {
    est = p_est;
}

void SendToUnity::setFilename(const OMString p_filename) {
    filename = p_filename;
}

void SendToUnity::setFval(const double p_fval) {
    fval = p_fval;
}

const int SendToUnity::getIResultDestination(void) const {
    return iResultDestination;
}

void SendToUnity::setIResultDestination(const int p_iResultDestination) {
    iResultDestination = p_iResultDestination;
}

const int SendToUnity::getIResultGetMagVal(void) const {
    return iResultGetMagVal;
}

void SendToUnity::setIResultGetMagVal(const int p_iResultGetMagVal) {
    iResultGetMagVal = p_iResultGetMagVal;
}

const int SendToUnity::getIResultGoToDest(void) const {
    return iResultGoToDest;
}

void SendToUnity::setIResultGoToDest(const int p_iResultGoToDest) {
    iResultGoToDest = p_iResultGoToDest;
}

const int SendToUnity::getIResultMagCalcMethod(void) const {
    return iResultMagCalcMethod;
}

void SendToUnity::setIResultMagCalcMethod(const int p_iResultMagCalcMethod) {
    iResultMagCalcMethod = p_iResultMagCalcMethod;
}

const int SendToUnity::getIResultMovDir(void) const {
    return iResultMovDir;
}

void SendToUnity::setIResultMovDir(const int p_iResultMovDir) {
    iResultMovDir = p_iResultMovDir;
}

const int SendToUnity::getIResultPathAlgo(void) const {
    return iResultPathAlgo;
}

void SendToUnity::setIResultPathAlgo(const int p_iResultPathAlgo) {
    iResultPathAlgo = p_iResultPathAlgo;
}

const int SendToUnity::getIResultRecDestination(void) const {
    return iResultRecDestination;
}

void SendToUnity::setIResultRecDestination(const int p_iResultRecDestination) {
    iResultRecDestination = p_iResultRecDestination;
}

const int SendToUnity::getIResultRecGetMagVal(void) const {
    return iResultRecGetMagVal;
}

void SendToUnity::setIResultRecGetMagVal(const int p_iResultRecGetMagVal) {
    iResultRecGetMagVal = p_iResultRecGetMagVal;
}

const int SendToUnity::getIResultRecMagCalcMethod(void) const {
    return iResultRecMagCalcMethod;
}

void SendToUnity::setIResultRecMagCalcMethod(const int p_iResultRecMagCalcMethod) {
    iResultRecMagCalcMethod = p_iResultRecMagCalcMethod;
}

const int SendToUnity::getIResultRecMovDir(void) const {
    return iResultRecMovDir;
}

void SendToUnity::setIResultRecMovDir(const int p_iResultRecMovDir) {
    iResultRecMovDir = p_iResultRecMovDir;
}

const int SendToUnity::getIResultRecPathAlgo(void) const {
    return iResultRecPathAlgo;
}

void SendToUnity::setIResultRecPathAlgo(const int p_iResultRecPathAlgo) {
    iResultRecPathAlgo = p_iResultRecPathAlgo;
}

const int SendToUnity::getIResultRecShowMap(void) const {
    return iResultRecShowMap;
}

void SendToUnity::setIResultRecShowMap(const int p_iResultRecShowMap) {
    iResultRecShowMap = p_iResultRecShowMap;
}

const int SendToUnity::getIResultRecSpeed(void) const {
    return iResultRecSpeed;
}

void SendToUnity::setIResultRecSpeed(const int p_iResultRecSpeed) {
    iResultRecSpeed = p_iResultRecSpeed;
}

const int SendToUnity::getIResultRecStateBot(void) const {
    return iResultRecStateBot;
}

void SendToUnity::setIResultRecStateBot(const int p_iResultRecStateBot) {
    iResultRecStateBot = p_iResultRecStateBot;
}

const int SendToUnity::getIResultShowMap(void) const {
    return iResultShowMap;
}

void SendToUnity::setIResultShowMap(const int p_iResultShowMap) {
    iResultShowMap = p_iResultShowMap;
}

const int SendToUnity::getIResultSpeed(void) const {
    return iResultSpeed;
}

void SendToUnity::setIResultSpeed(const int p_iResultSpeed) {
    iResultSpeed = p_iResultSpeed;
}

const int SendToUnity::getIResultStateBot(void) const {
    return iResultStateBot;
}

void SendToUnity::setIResultStateBot(const int p_iResultStateBot) {
    iResultStateBot = p_iResultStateBot;
}

const int SendToUnity::getISendResultDestination(void) const {
    return iSendResultDestination;
}

void SendToUnity::setISendResultDestination(const int p_iSendResultDestination) {
    iSendResultDestination = p_iSendResultDestination;
}

const int SendToUnity::getISendResultGetMagVal(void) const {
    return iSendResultGetMagVal;
}

void SendToUnity::setISendResultGetMagVal(const int p_iSendResultGetMagVal) {
    iSendResultGetMagVal = p_iSendResultGetMagVal;
}

const int SendToUnity::getISendResultGoToDest(void) const {
    return iSendResultGoToDest;
}

void SendToUnity::setISendResultGoToDest(const int p_iSendResultGoToDest) {
    iSendResultGoToDest = p_iSendResultGoToDest;
}

const int SendToUnity::getISendResultMagCalcMethod(void) const {
    return iSendResultMagCalcMethod;
}

void SendToUnity::setISendResultMagCalcMethod(const int p_iSendResultMagCalcMethod) {
    iSendResultMagCalcMethod = p_iSendResultMagCalcMethod;
}

const int SendToUnity::getISendResultMovDir(void) const {
    return iSendResultMovDir;
}

void SendToUnity::setISendResultMovDir(const int p_iSendResultMovDir) {
    iSendResultMovDir = p_iSendResultMovDir;
}

const int SendToUnity::getISendResultPathAlgo(void) const {
    return iSendResultPathAlgo;
}

void SendToUnity::setISendResultPathAlgo(const int p_iSendResultPathAlgo) {
    iSendResultPathAlgo = p_iSendResultPathAlgo;
}

const int SendToUnity::getISendResultShowMap(void) const {
    return iSendResultShowMap;
}

void SendToUnity::setISendResultShowMap(const int p_iSendResultShowMap) {
    iSendResultShowMap = p_iSendResultShowMap;
}

const int SendToUnity::getISendResultSpeed(void) const {
    return iSendResultSpeed;
}

void SendToUnity::setISendResultSpeed(const int p_iSendResultSpeed) {
    iSendResultSpeed = p_iSendResultSpeed;
}

const int SendToUnity::getISendResultStateBot(void) const {
    return iSendResultStateBot;
}

void SendToUnity::setISendResultStateBot(const int p_iSendResultStateBot) {
    iSendResultStateBot = p_iSendResultStateBot;
}

const SOCKET SendToUnity::getListenSocketForDestination(void) const {
    return listenSocketForDestination;
}

void SendToUnity::setListenSocketForDestination(const SOCKET p_listenSocketForDestination) {
    listenSocketForDestination = p_listenSocketForDestination;
}

const SOCKET SendToUnity::getListenSocketForGetMagVal(void) const {
    return listenSocketForGetMagVal;
}

void SendToUnity::setListenSocketForGetMagVal(const SOCKET p_listenSocketForGetMagVal) {
    listenSocketForGetMagVal = p_listenSocketForGetMagVal;
}

const SOCKET SendToUnity::getListenSocketForGoToDest(void) const {
    return listenSocketForGoToDest;
}

void SendToUnity::setListenSocketForGoToDest(const SOCKET p_listenSocketForGoToDest) {
    listenSocketForGoToDest = p_listenSocketForGoToDest;
}

const SOCKET SendToUnity::getListenSocketForMagCalcMethod(void) const {
    return listenSocketForMagCalcMethod;
}

void SendToUnity::setListenSocketForMagCalcMethod(const SOCKET p_listenSocketForMagCalcMethod) {
    listenSocketForMagCalcMethod = p_listenSocketForMagCalcMethod;
}

const SOCKET SendToUnity::getListenSocketForMovDir(void) const {
    return listenSocketForMovDir;
}

void SendToUnity::setListenSocketForMovDir(const SOCKET p_listenSocketForMovDir) {
    listenSocketForMovDir = p_listenSocketForMovDir;
}

const SOCKET SendToUnity::getListenSocketForPathAlgo(void) const {
    return listenSocketForPathAlgo;
}

void SendToUnity::setListenSocketForPathAlgo(const SOCKET p_listenSocketForPathAlgo) {
    listenSocketForPathAlgo = p_listenSocketForPathAlgo;
}

const SOCKET SendToUnity::getListenSocketForRecDestination(void) const {
    return listenSocketForRecDestination;
}

void SendToUnity::setListenSocketForRecDestination(const SOCKET p_listenSocketForRecDestination) {
    listenSocketForRecDestination = p_listenSocketForRecDestination;
}

const SOCKET SendToUnity::getListenSocketForRecGetMagVal(void) const {
    return listenSocketForRecGetMagVal;
}

void SendToUnity::setListenSocketForRecGetMagVal(const SOCKET p_listenSocketForRecGetMagVal) {
    listenSocketForRecGetMagVal = p_listenSocketForRecGetMagVal;
}

const SOCKET SendToUnity::getListenSocketForRecMagCalcMethod(void) const {
    return listenSocketForRecMagCalcMethod;
}

void SendToUnity::setListenSocketForRecMagCalcMethod(const SOCKET p_listenSocketForRecMagCalcMethod) {
    listenSocketForRecMagCalcMethod = p_listenSocketForRecMagCalcMethod;
}

const SOCKET SendToUnity::getListenSocketForRecMovDir(void) const {
    return listenSocketForRecMovDir;
}

void SendToUnity::setListenSocketForRecMovDir(const SOCKET p_listenSocketForRecMovDir) {
    listenSocketForRecMovDir = p_listenSocketForRecMovDir;
}

const SOCKET SendToUnity::getListenSocketForRecPathAlgo(void) const {
    return listenSocketForRecPathAlgo;
}

void SendToUnity::setListenSocketForRecPathAlgo(const SOCKET p_listenSocketForRecPathAlgo) {
    listenSocketForRecPathAlgo = p_listenSocketForRecPathAlgo;
}

const SOCKET SendToUnity::getListenSocketForRecShowMap(void) const {
    return listenSocketForRecShowMap;
}

void SendToUnity::setListenSocketForRecShowMap(const SOCKET p_listenSocketForRecShowMap) {
    listenSocketForRecShowMap = p_listenSocketForRecShowMap;
}

const SOCKET SendToUnity::getListenSocketForRecSpeed(void) const {
    return listenSocketForRecSpeed;
}

void SendToUnity::setListenSocketForRecSpeed(const SOCKET p_listenSocketForRecSpeed) {
    listenSocketForRecSpeed = p_listenSocketForRecSpeed;
}

const SOCKET SendToUnity::getListenSocketForRecStateBot(void) const {
    return listenSocketForRecStateBot;
}

void SendToUnity::setListenSocketForRecStateBot(const SOCKET p_listenSocketForRecStateBot) {
    listenSocketForRecStateBot = p_listenSocketForRecStateBot;
}

const SOCKET SendToUnity::getListenSocketForShowMap(void) const {
    return listenSocketForShowMap;
}

void SendToUnity::setListenSocketForShowMap(const SOCKET p_listenSocketForShowMap) {
    listenSocketForShowMap = p_listenSocketForShowMap;
}

const SOCKET SendToUnity::getListenSocketForSpeed(void) const {
    return listenSocketForSpeed;
}

void SendToUnity::setListenSocketForSpeed(const SOCKET p_listenSocketForSpeed) {
    listenSocketForSpeed = p_listenSocketForSpeed;
}

const SOCKET SendToUnity::getListenSocketForStateBot(void) const {
    return listenSocketForStateBot;
}

void SendToUnity::setListenSocketForStateBot(const SOCKET p_listenSocketForStateBot) {
    listenSocketForStateBot = p_listenSocketForStateBot;
}

const int SendToUnity::getPortD(void) const {
    return portD;
}

void SendToUnity::setPortD(const int p_portD) {
    portD = p_portD;
}

const int SendToUnity::getPortDestination(void) const {
    return portDestination;
}

void SendToUnity::setPortDestination(const int p_portDestination) {
    portDestination = p_portDestination;
}

const int SendToUnity::getPortGetMagVal(void) const {
    return portGetMagVal;
}

void SendToUnity::setPortGetMagVal(const int p_portGetMagVal) {
    portGetMagVal = p_portGetMagVal;
}

const int SendToUnity::getPortGoToDest(void) const {
    return portGoToDest;
}

void SendToUnity::setPortGoToDest(const int p_portGoToDest) {
    portGoToDest = p_portGoToDest;
}

const int SendToUnity::getPortMCM(void) const {
    return portMCM;
}

void SendToUnity::setPortMCM(const int p_portMCM) {
    portMCM = p_portMCM;
}

const int SendToUnity::getPortMD(void) const {
    return portMD;
}

void SendToUnity::setPortMD(const int p_portMD) {
    portMD = p_portMD;
}

const int SendToUnity::getPortMagCalcMethod(void) const {
    return portMagCalcMethod;
}

void SendToUnity::setPortMagCalcMethod(const int p_portMagCalcMethod) {
    portMagCalcMethod = p_portMagCalcMethod;
}

const int SendToUnity::getPortMovDir(void) const {
    return portMovDir;
}

void SendToUnity::setPortMovDir(const int p_portMovDir) {
    portMovDir = p_portMovDir;
}

const int SendToUnity::getPortPA(void) const {
    return portPA;
}

void SendToUnity::setPortPA(const int p_portPA) {
    portPA = p_portPA;
}

const int SendToUnity::getPortPathAlgo(void) const {
    return portPathAlgo;
}

void SendToUnity::setPortPathAlgo(const int p_portPathAlgo) {
    portPathAlgo = p_portPathAlgo;
}

const int SendToUnity::getPortS(void) const {
    return portS;
}

void SendToUnity::setPortS(const int p_portS) {
    portS = p_portS;
}

const int SendToUnity::getPortSB(void) const {
    return portSB;
}

void SendToUnity::setPortSB(const int p_portSB) {
    portSB = p_portSB;
}

const int SendToUnity::getPortSM(void) const {
    return portSM;
}

void SendToUnity::setPortSM(const int p_portSM) {
    portSM = p_portSM;
}

const int SendToUnity::getPortShowMap(void) const {
    return portShowMap;
}

void SendToUnity::setPortShowMap(const int p_portShowMap) {
    portShowMap = p_portShowMap;
}

const int SendToUnity::getPortSpeed(void) const {
    return portSpeed;
}

void SendToUnity::setPortSpeed(const int p_portSpeed) {
    portSpeed = p_portSpeed;
}

const int SendToUnity::getPortStateBot(void) const {
    return portStateBot;
}

void SendToUnity::setPortStateBot(const int p_portStateBot) {
    portStateBot = p_portStateBot;
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
    state_11_timeout = scheduleTimeout(100, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
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
                            state_11_timeout = scheduleTimeout(100, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
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
    state_10_timeout = scheduleTimeout(100, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
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
                    state_10_timeout = scheduleTimeout(100, "ROOT.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
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
    aomsAttributes->addAttribute("ws", UNKNOWN2STRING(myReal->ws));
    aomsAttributes->addAttribute("serverName", x2String(myReal->serverName));
    aomsAttributes->addAttribute("recvbuf", array2String(DEFAULT_BUFLEN, myReal->recvbuf, sizeof(char), &x2String));
    aomsAttributes->addAttribute("recvbuflen", x2String(myReal->recvbuflen));
    aomsAttributes->addAttribute("sendbuflen", x2String(myReal->sendbuflen));
    aomsAttributes->addAttribute("displayValue", x2String(myReal->displayValue));
    aomsAttributes->addAttribute("sndmsgbuf", array2String(DEFAULT_BUFLEN+3, myReal->sndmsgbuf, sizeof(char), &x2String));
    aomsAttributes->addAttribute("Int32", x2String(myReal->Int32));
    aomsAttributes->addAttribute("utof", x2String(myReal->utof));
    aomsAttributes->addAttribute("fval", x2String(myReal->fval));
    aomsAttributes->addAttribute("filename", x2String(myReal->filename));
    aomsAttributes->addAttribute("est", x2String(myReal->est));
    aomsAttributes->addAttribute("address_MagCalcMethod", UNKNOWN2STRING(myReal->address_MagCalcMethod));
    aomsAttributes->addAttribute("address_PathAlgo", UNKNOWN2STRING(myReal->address_PathAlgo));
    aomsAttributes->addAttribute("address_MovDir", UNKNOWN2STRING(myReal->address_MovDir));
    aomsAttributes->addAttribute("address_Speed", UNKNOWN2STRING(myReal->address_Speed));
    aomsAttributes->addAttribute("address_ShowMap", UNKNOWN2STRING(myReal->address_ShowMap));
    aomsAttributes->addAttribute("address_Destination", UNKNOWN2STRING(myReal->address_Destination));
    aomsAttributes->addAttribute("address_GetMagVal", UNKNOWN2STRING(myReal->address_GetMagVal));
    aomsAttributes->addAttribute("portMagCalcMethod", x2String(myReal->portMagCalcMethod));
    aomsAttributes->addAttribute("portPathAlgo", x2String(myReal->portPathAlgo));
    aomsAttributes->addAttribute("portMovDir", x2String(myReal->portMovDir));
    aomsAttributes->addAttribute("portSpeed", x2String(myReal->portSpeed));
    aomsAttributes->addAttribute("portShowMap", x2String(myReal->portShowMap));
    aomsAttributes->addAttribute("portDestination", x2String(myReal->portDestination));
    aomsAttributes->addAttribute("portGetMagVal", x2String(myReal->portGetMagVal));
    aomsAttributes->addAttribute("listenSocketForMagCalcMethod", UNKNOWN2STRING(myReal->listenSocketForMagCalcMethod));
    aomsAttributes->addAttribute("listenSocketForPathAlgo", UNKNOWN2STRING(myReal->listenSocketForPathAlgo));
    aomsAttributes->addAttribute("listenSocketForMovDir", UNKNOWN2STRING(myReal->listenSocketForMovDir));
    aomsAttributes->addAttribute("listenSocketForSpeed", UNKNOWN2STRING(myReal->listenSocketForSpeed));
    aomsAttributes->addAttribute("listenSocketForShowMap", UNKNOWN2STRING(myReal->listenSocketForShowMap));
    aomsAttributes->addAttribute("listenSocketForDestination", UNKNOWN2STRING(myReal->listenSocketForDestination));
    aomsAttributes->addAttribute("listenSocketForGetMagVal", UNKNOWN2STRING(myReal->listenSocketForGetMagVal));
    aomsAttributes->addAttribute("iResultMagCalcMethod", x2String(myReal->iResultMagCalcMethod));
    aomsAttributes->addAttribute("iResultPathAlgo", x2String(myReal->iResultPathAlgo));
    aomsAttributes->addAttribute("iResultMovDir", x2String(myReal->iResultMovDir));
    aomsAttributes->addAttribute("iResultSpeed", x2String(myReal->iResultSpeed));
    aomsAttributes->addAttribute("iResultShowMap", x2String(myReal->iResultShowMap));
    aomsAttributes->addAttribute("iResultDestination", x2String(myReal->iResultDestination));
    aomsAttributes->addAttribute("iResultGetMagVal", x2String(myReal->iResultGetMagVal));
    aomsAttributes->addAttribute("MagCalcMethod", x2String(myReal->MagCalcMethod));
    aomsAttributes->addAttribute("PathAlgo", x2String(myReal->PathAlgo));
    aomsAttributes->addAttribute("MovDir", x2String(myReal->MovDir));
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
    aomsAttributes->addAttribute("ShowMap", x2String(myReal->ShowMap));
    aomsAttributes->addAttribute("Destination", x2String(myReal->Destination));
    aomsAttributes->addAttribute("GetMagVal", x2String(myReal->GetMagVal));
    aomsAttributes->addAttribute("iSendResultMagCalcMethod", x2String(myReal->iSendResultMagCalcMethod));
    aomsAttributes->addAttribute("iSendResultPathAlgo", x2String(myReal->iSendResultPathAlgo));
    aomsAttributes->addAttribute("iSendResultMovDir", x2String(myReal->iSendResultMovDir));
    aomsAttributes->addAttribute("iSendResultSpeed", x2String(myReal->iSendResultSpeed));
    aomsAttributes->addAttribute("iSendResultShowMap", x2String(myReal->iSendResultShowMap));
    aomsAttributes->addAttribute("iSendResultDestination", x2String(myReal->iSendResultDestination));
    aomsAttributes->addAttribute("iSendResultGetMagVal", x2String(myReal->iSendResultGetMagVal));
    aomsAttributes->addAttribute("address_StateBot", UNKNOWN2STRING(myReal->address_StateBot));
    aomsAttributes->addAttribute("portStateBot", x2String(myReal->portStateBot));
    aomsAttributes->addAttribute("listenSocketForStateBot", UNKNOWN2STRING(myReal->listenSocketForStateBot));
    aomsAttributes->addAttribute("iResultStateBot", x2String(myReal->iResultStateBot));
    aomsAttributes->addAttribute("iSendResultStateBot", x2String(myReal->iSendResultStateBot));
    aomsAttributes->addAttribute("StateBot", x2String(myReal->StateBot));
    aomsAttributes->addAttribute("address_r_D", UNKNOWN2STRING(myReal->address_r_D));
    aomsAttributes->addAttribute("address_r_GMV", UNKNOWN2STRING(myReal->address_r_GMV));
    aomsAttributes->addAttribute("address_r_MCM", UNKNOWN2STRING(myReal->address_r_MCM));
    aomsAttributes->addAttribute("address_r_PA", UNKNOWN2STRING(myReal->address_r_PA));
    aomsAttributes->addAttribute("address_r_MD", UNKNOWN2STRING(myReal->address_r_MD));
    aomsAttributes->addAttribute("address_r_S", UNKNOWN2STRING(myReal->address_r_S));
    aomsAttributes->addAttribute("address_r_SM", UNKNOWN2STRING(myReal->address_r_SM));
    aomsAttributes->addAttribute("address_r_SB", UNKNOWN2STRING(myReal->address_r_SB));
    aomsAttributes->addAttribute("iResultRecMagCalcMethod", x2String(myReal->iResultRecMagCalcMethod));
    aomsAttributes->addAttribute("iResultRecPathAlgo", x2String(myReal->iResultRecPathAlgo));
    aomsAttributes->addAttribute("iResultRecMovDir", x2String(myReal->iResultRecMovDir));
    aomsAttributes->addAttribute("iResultRecSpeed", x2String(myReal->iResultRecSpeed));
    aomsAttributes->addAttribute("iResultRecShowMap", x2String(myReal->iResultRecShowMap));
    aomsAttributes->addAttribute("iResultRecDestination", x2String(myReal->iResultRecDestination));
    aomsAttributes->addAttribute("iResultRecGetMagVal", x2String(myReal->iResultRecGetMagVal));
    aomsAttributes->addAttribute("iResultRecStateBot", x2String(myReal->iResultRecStateBot));
    aomsAttributes->addAttribute("listenSocketForRecMagCalcMethod", UNKNOWN2STRING(myReal->listenSocketForRecMagCalcMethod));
    aomsAttributes->addAttribute("listenSocketForRecPathAlgo", UNKNOWN2STRING(myReal->listenSocketForRecPathAlgo));
    aomsAttributes->addAttribute("listenSocketForRecMovDir", UNKNOWN2STRING(myReal->listenSocketForRecMovDir));
    aomsAttributes->addAttribute("listenSocketForRecSpeed", UNKNOWN2STRING(myReal->listenSocketForRecSpeed));
    aomsAttributes->addAttribute("listenSocketForRecShowMap", UNKNOWN2STRING(myReal->listenSocketForRecShowMap));
    aomsAttributes->addAttribute("listenSocketForRecDestination", UNKNOWN2STRING(myReal->listenSocketForRecDestination));
    aomsAttributes->addAttribute("listenSocketForRecGetMagVal", UNKNOWN2STRING(myReal->listenSocketForRecGetMagVal));
    aomsAttributes->addAttribute("listenSocketForRecStateBot", UNKNOWN2STRING(myReal->listenSocketForRecStateBot));
    aomsAttributes->addAttribute("portMCM", x2String(myReal->portMCM));
    aomsAttributes->addAttribute("portPA", x2String(myReal->portPA));
    aomsAttributes->addAttribute("portMD", x2String(myReal->portMD));
    aomsAttributes->addAttribute("portS", x2String(myReal->portS));
    aomsAttributes->addAttribute("portSM", x2String(myReal->portSM));
    aomsAttributes->addAttribute("portD", x2String(myReal->portD));
    aomsAttributes->addAttribute("portSB", x2String(myReal->portSB));
    aomsAttributes->addAttribute("address_GoToDest", UNKNOWN2STRING(myReal->address_GoToDest));
    aomsAttributes->addAttribute("Go", x2String(myReal->Go));
    aomsAttributes->addAttribute("iResultGoToDest", x2String(myReal->iResultGoToDest));
    aomsAttributes->addAttribute("iSendResultGoToDest", x2String(myReal->iSendResultGoToDest));
    aomsAttributes->addAttribute("listenSocketForGoToDest", UNKNOWN2STRING(myReal->listenSocketForGoToDest));
    aomsAttributes->addAttribute("portGoToDest", x2String(myReal->portGoToDest));
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

IMPLEMENT_REACTIVE_META_P(SendToUnity, ContrPkg, ContrPkg, false, OMAnimatedSendToUnity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\SendToUnity.cpp
*********************************************************************/

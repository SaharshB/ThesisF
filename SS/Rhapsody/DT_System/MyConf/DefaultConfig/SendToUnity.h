/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: SendToUnity
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\SendToUnity.h
*********************************************************************/

#ifndef SendToUnity_H
#define SendToUnity_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <string.h>
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## class SendToUnity
#include "intFlowInterface.h"
//## auto_generated
#include "ContrPkg.h"
//## package ContrPkg

//## class SendToUnity
class SendToUnity : public OMThread, public OMReactive, public intFlowInterface {
public :

//#[ ignore
    //## package ContrPkg
    class Speed_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Speed_SP_C(void);
        
        //## auto_generated
        virtual ~Speed_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class MovDir_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        MovDir_SP_C(void);
        
        //## auto_generated
        virtual ~MovDir_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class Destination_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Destination_SP_C(void);
        
        //## auto_generated
        virtual ~Destination_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class PathAlgo_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        PathAlgo_SP_C(void);
        
        //## auto_generated
        virtual ~PathAlgo_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class GetMagVal_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        GetMagVal_SP_C(void);
        
        //## auto_generated
        virtual ~GetMagVal_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class MagCalcMethod_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        MagCalcMethod_SP_C(void);
        
        //## auto_generated
        virtual ~MagCalcMethod_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class StateBot_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        StateBot_SP_C(void);
        
        //## auto_generated
        virtual ~StateBot_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class ShowMap_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        ShowMap_SP_C(void);
        
        //## auto_generated
        virtual ~ShowMap_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class Go_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Go_SP_C(void);
        
        //## auto_generated
        virtual ~Go_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSendToUnity(SendToUnity* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
//#]

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSendToUnity;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    ////    Attributes    ////
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);

public :

    //## operation callMain()
    virtual int callMain(void);
    
    //## auto_generated
    const OMString getDisplayValue(void) const;
    
    //## auto_generated
    const int getRecvbuflen(void) const;
    
    //## auto_generated
    const int getSendbuflen(void) const;
    
    //## auto_generated
    const char* getServerName(void) const;
    
    //## auto_generated
    const int getSockfd(void) const;
    
    //## auto_generated
    const WSADATA getWs(void) const;
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);

protected :

    //## auto_generated
    void cancelTimeouts(void);

private :

    OMString displayValue;		//## attribute displayValue
    
    char recvbuf[DEFAULT_BUFLEN];		//## attribute recvbuf
    
    int recvbuflen;		//## attribute recvbuflen
    
    int sendbuflen;		//## attribute sendbuflen
    
    char* serverName;		//## attribute serverName
    
    char sndmsgbuf[DEFAULT_BUFLEN+3];		//## attribute sndmsgbuf
    
    int sockfd;		//## attribute sockfd
    
    WSADATA ws;		//## attribute ws

public :

    //## auto_generated
    SendToUnity(void);
    
    //## auto_generated
    virtual ~SendToUnity(void);
    
    //## auto_generated
    const int getInt32(void) const;
    
    //## auto_generated
    const OMString getFilename(void) const;
    
    //## auto_generated
    const double getFval(void) const;
    
    //## auto_generated
    const double getUtof(void) const;

private :

    int Int32;		//## attribute Int32
    
    OMString filename;		//## attribute filename
    
    double fval;		//## attribute fval
    
    float est;		//## attribute est
    
    double utof;		//## attribute utof

public :

    //## auto_generated
    void setDisplayValue(const OMString p_displayValue);
    
    //## auto_generated
    const char getRecvbuf(const Rhp_int32_t iterI1) const;
    
    //## auto_generated
    void setRecvbuf(const Rhp_int32_t iterI1, const char p_recvbuf);
    
    //## auto_generated
    void setRecvbuflen(const int p_recvbuflen);
    
    //## auto_generated
    void setSendbuflen(const int p_sendbuflen);
    
    //## auto_generated
    void setServerName(char* const p_serverName);
    
    //## auto_generated
    const char getSndmsgbuf(const Rhp_int32_t iterI1) const;
    
    //## auto_generated
    void setSndmsgbuf(const Rhp_int32_t iterI1, const char p_sndmsgbuf);
    
    //## auto_generated
    void setSockfd(const int p_sockfd);
    
    //## auto_generated
    void setWs(const WSADATA p_ws);

protected :

    //## auto_generated
    void initRelations(void);

private :

    int MovDir;		//## attribute MovDir
    
    int Destination;		//## attribute Destination
    
    int PathAlgo;		//## attribute PathAlgo
    
    SOCKADDR_IN address_MovDir;		//## attribute address_MovDir
    
    SOCKADDR_IN address_Destination;		//## attribute address_Destination
    
    SOCKADDR_IN address_PathAlgo;		//## attribute address_PathAlgo
    
    SOCKADDR_IN address_Speed;		//## attribute address_Speed
    
    SOCKADDR_IN address_GetMagVal;		//## attribute address_GetMagVal
    
    SOCKADDR_IN address_MagCalcMethod;		//## attribute address_MagCalcMethod
    
    SOCKADDR_IN address_StateBot;		//## attribute address_StateBot
    
    SOCKADDR_IN address_ShowMap;		//## attribute address_ShowMap
    
    int Speed;		//## attribute Speed
    
    int GetMagVal;		//## attribute GetMagVal
    
    int MagCalcMethod;		//## attribute MagCalcMethod
    
    int StateBot;		//## attribute StateBot
    
    int iResultMovDir;		//## attribute iResultMovDir
    
    int iResultDestination;		//## attribute iResultDestination
    
    int iResultPathAlgo;		//## attribute iResultPathAlgo
    
    int iResultSpeed;		//## attribute iResultSpeed
    
    int iResultGetMagVal;		//## attribute iResultGetMagVal
    
    int iResultMagCalcMethod;		//## attribute iResultMagCalcMethod
    
    int iResultStateBot;		//## attribute iResultStateBot
    
    int iResultShowMap;		//## attribute iResultShowMap
    
    int iSendResultMovDir;		//## attribute iSendResultMovDir
    
    int iSendResultDestination;		//## attribute iSendResultDestination
    
    int iSendResultPathAlgo;		//## attribute iSendResultPathAlgo
    
    int iSendResultSpeed;		//## attribute iSendResultSpeed
    
    int iSendResultGetMagVal;		//## attribute iSendResultGetMagVal
    
    int iSendResultMagCalcMethod;		//## attribute iSendResultMagCalcMethod
    
    int iSendResultStateBot;		//## attribute iSendResultStateBot
    
    int iSendResultShowMap;		//## attribute iSendResultShowMap
    
    int ShowMap;		//## attribute ShowMap
    
    SOCKET listenSocketForMovDir;		//## attribute listenSocketForMovDir
    
    SOCKET listenSocketForDestination;		//## attribute listenSocketForDestination
    
    SOCKET listenSocketForPathAlgo;		//## attribute listenSocketForPathAlgo
    
    SOCKET listenSocketForSpeed;		//## attribute listenSocketForSpeed
    
    SOCKET listenSocketForGetMagVal;		//## attribute listenSocketForGetMagVal
    
    SOCKET listenSocketForMagCalcMethod;		//## attribute listenSocketForMagCalcMethod
    
    SOCKET listenSocketForStateBot;		//## attribute listenSocketForStateBot
    
    SOCKET listenSocketForShowMap;		//## attribute listenSocketForShowMap
    
    int portMovDir;		//## attribute portMovDir
    
    int portDestination;		//## attribute portDestination
    
    int portPathAlgo;		//## attribute portPathAlgo
    
    int portSpeed;		//## attribute portSpeed
    
    int portGetMagVal;		//## attribute portGetMagVal
    
    int portMagCalcMethod;		//## attribute portMagCalcMethod
    
    int portStateBot;		//## attribute portStateBot
    
    int portShowMap;		//## attribute portShowMap

public :

//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void setDestination(int p_Destination);
    
    void setGetMagVal(int p_GetMagVal);
    
    void setGo(int p_Go);
    
    void setMagCalcMethod(int p_MagCalcMethod);
    
    void setMovDir(int p_MovDir);
    
    void setPathAlgo(int p_PathAlgo);
    
    void setShowMap(int p_ShowMap);
    
    void setSpeed(int p_Speed);
    
    void setStateBot(int p_StateBot);
//#]

    //## auto_generated
    Speed_SP_C* getSpeed_SP(void) const;
    
    //## auto_generated
    Speed_SP_C* get_Speed_SP(void) const;
    
    //## auto_generated
    MovDir_SP_C* getMovDir_SP(void) const;
    
    //## auto_generated
    MovDir_SP_C* get_MovDir_SP(void) const;
    
    //## auto_generated
    Destination_SP_C* getDestination_SP(void) const;
    
    //## auto_generated
    Destination_SP_C* get_Destination_SP(void) const;
    
    //## auto_generated
    PathAlgo_SP_C* getPathAlgo_SP(void) const;
    
    //## auto_generated
    PathAlgo_SP_C* get_PathAlgo_SP(void) const;
    
    //## auto_generated
    GetMagVal_SP_C* getGetMagVal_SP(void) const;
    
    //## auto_generated
    GetMagVal_SP_C* get_GetMagVal_SP(void) const;
    
    //## auto_generated
    MagCalcMethod_SP_C* getMagCalcMethod_SP(void) const;
    
    //## auto_generated
    MagCalcMethod_SP_C* get_MagCalcMethod_SP(void) const;
    
    //## auto_generated
    StateBot_SP_C* getStateBot_SP(void) const;
    
    //## auto_generated
    StateBot_SP_C* get_StateBot_SP(void) const;
    
    //## auto_generated
    ShowMap_SP_C* getShowMap_SP(void) const;
    
    //## auto_generated
    ShowMap_SP_C* get_ShowMap_SP(void) const;
    
    //## auto_generated
    Go_SP_C* getGo_SP(void) const;
    
    //## auto_generated
    Go_SP_C* get_Go_SP(void) const;
    
    //## auto_generated
    const int getDestination(void) const;
    
    //## auto_generated
    const int getGetMagVal(void) const;
    
    //## auto_generated
    const int getGo(void) const;
    
    //## auto_generated
    void setInt32(const int p_Int32);
    
    //## auto_generated
    const int getMagCalcMethod(void) const;
    
    //## auto_generated
    const int getMovDir(void) const;
    
    //## auto_generated
    const int getPathAlgo(void) const;
    
    //## auto_generated
    const int getShowMap(void) const;
    
    //## auto_generated
    const int getSpeed(void) const;
    
    //## auto_generated
    const int getStateBot(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_Destination(void) const;
    
    //## auto_generated
    void setAddress_Destination(const SOCKADDR_IN p_address_Destination);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_GetMagVal(void) const;
    
    //## auto_generated
    void setAddress_GetMagVal(const SOCKADDR_IN p_address_GetMagVal);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_GoToDest(void) const;
    
    //## auto_generated
    void setAddress_GoToDest(const SOCKADDR_IN p_address_GoToDest);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_MagCalcMethod(void) const;
    
    //## auto_generated
    void setAddress_MagCalcMethod(const SOCKADDR_IN p_address_MagCalcMethod);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_MovDir(void) const;
    
    //## auto_generated
    void setAddress_MovDir(const SOCKADDR_IN p_address_MovDir);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_PathAlgo(void) const;
    
    //## auto_generated
    void setAddress_PathAlgo(const SOCKADDR_IN p_address_PathAlgo);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_ShowMap(void) const;
    
    //## auto_generated
    void setAddress_ShowMap(const SOCKADDR_IN p_address_ShowMap);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_Speed(void) const;
    
    //## auto_generated
    void setAddress_Speed(const SOCKADDR_IN p_address_Speed);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_StateBot(void) const;
    
    //## auto_generated
    void setAddress_StateBot(const SOCKADDR_IN p_address_StateBot);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_D(void) const;
    
    //## auto_generated
    void setAddress_r_D(const SOCKADDR_IN p_address_r_D);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_GMV(void) const;
    
    //## auto_generated
    void setAddress_r_GMV(const SOCKADDR_IN p_address_r_GMV);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_MCM(void) const;
    
    //## auto_generated
    void setAddress_r_MCM(const SOCKADDR_IN p_address_r_MCM);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_MD(void) const;
    
    //## auto_generated
    void setAddress_r_MD(const SOCKADDR_IN p_address_r_MD);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_PA(void) const;
    
    //## auto_generated
    void setAddress_r_PA(const SOCKADDR_IN p_address_r_PA);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_S(void) const;
    
    //## auto_generated
    void setAddress_r_S(const SOCKADDR_IN p_address_r_S);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_SB(void) const;
    
    //## auto_generated
    void setAddress_r_SB(const SOCKADDR_IN p_address_r_SB);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_r_SM(void) const;
    
    //## auto_generated
    void setAddress_r_SM(const SOCKADDR_IN p_address_r_SM);
    
    //## auto_generated
    const float getEst(void) const;
    
    //## auto_generated
    void setEst(const float p_est);
    
    //## auto_generated
    void setFilename(const OMString p_filename);
    
    //## auto_generated
    void setFval(const double p_fval);
    
    //## auto_generated
    const int getIResultDestination(void) const;
    
    //## auto_generated
    void setIResultDestination(const int p_iResultDestination);
    
    //## auto_generated
    const int getIResultGetMagVal(void) const;
    
    //## auto_generated
    void setIResultGetMagVal(const int p_iResultGetMagVal);
    
    //## auto_generated
    const int getIResultGoToDest(void) const;
    
    //## auto_generated
    void setIResultGoToDest(const int p_iResultGoToDest);
    
    //## auto_generated
    const int getIResultMagCalcMethod(void) const;
    
    //## auto_generated
    void setIResultMagCalcMethod(const int p_iResultMagCalcMethod);
    
    //## auto_generated
    const int getIResultMovDir(void) const;
    
    //## auto_generated
    void setIResultMovDir(const int p_iResultMovDir);
    
    //## auto_generated
    const int getIResultPathAlgo(void) const;
    
    //## auto_generated
    void setIResultPathAlgo(const int p_iResultPathAlgo);
    
    //## auto_generated
    const int getIResultRecDestination(void) const;
    
    //## auto_generated
    void setIResultRecDestination(const int p_iResultRecDestination);
    
    //## auto_generated
    const int getIResultRecGetMagVal(void) const;
    
    //## auto_generated
    void setIResultRecGetMagVal(const int p_iResultRecGetMagVal);
    
    //## auto_generated
    const int getIResultRecMagCalcMethod(void) const;
    
    //## auto_generated
    void setIResultRecMagCalcMethod(const int p_iResultRecMagCalcMethod);
    
    //## auto_generated
    const int getIResultRecMovDir(void) const;
    
    //## auto_generated
    void setIResultRecMovDir(const int p_iResultRecMovDir);
    
    //## auto_generated
    const int getIResultRecPathAlgo(void) const;
    
    //## auto_generated
    void setIResultRecPathAlgo(const int p_iResultRecPathAlgo);
    
    //## auto_generated
    const int getIResultRecShowMap(void) const;
    
    //## auto_generated
    void setIResultRecShowMap(const int p_iResultRecShowMap);
    
    //## auto_generated
    const int getIResultRecSpeed(void) const;
    
    //## auto_generated
    void setIResultRecSpeed(const int p_iResultRecSpeed);
    
    //## auto_generated
    const int getIResultRecStateBot(void) const;
    
    //## auto_generated
    void setIResultRecStateBot(const int p_iResultRecStateBot);
    
    //## auto_generated
    const int getIResultShowMap(void) const;
    
    //## auto_generated
    void setIResultShowMap(const int p_iResultShowMap);
    
    //## auto_generated
    const int getIResultSpeed(void) const;
    
    //## auto_generated
    void setIResultSpeed(const int p_iResultSpeed);
    
    //## auto_generated
    const int getIResultStateBot(void) const;
    
    //## auto_generated
    void setIResultStateBot(const int p_iResultStateBot);
    
    //## auto_generated
    const int getISendResultDestination(void) const;
    
    //## auto_generated
    void setISendResultDestination(const int p_iSendResultDestination);
    
    //## auto_generated
    const int getISendResultGetMagVal(void) const;
    
    //## auto_generated
    void setISendResultGetMagVal(const int p_iSendResultGetMagVal);
    
    //## auto_generated
    const int getISendResultGoToDest(void) const;
    
    //## auto_generated
    void setISendResultGoToDest(const int p_iSendResultGoToDest);
    
    //## auto_generated
    const int getISendResultMagCalcMethod(void) const;
    
    //## auto_generated
    void setISendResultMagCalcMethod(const int p_iSendResultMagCalcMethod);
    
    //## auto_generated
    const int getISendResultMovDir(void) const;
    
    //## auto_generated
    void setISendResultMovDir(const int p_iSendResultMovDir);
    
    //## auto_generated
    const int getISendResultPathAlgo(void) const;
    
    //## auto_generated
    void setISendResultPathAlgo(const int p_iSendResultPathAlgo);
    
    //## auto_generated
    const int getISendResultShowMap(void) const;
    
    //## auto_generated
    void setISendResultShowMap(const int p_iSendResultShowMap);
    
    //## auto_generated
    const int getISendResultSpeed(void) const;
    
    //## auto_generated
    void setISendResultSpeed(const int p_iSendResultSpeed);
    
    //## auto_generated
    const int getISendResultStateBot(void) const;
    
    //## auto_generated
    void setISendResultStateBot(const int p_iSendResultStateBot);
    
    //## auto_generated
    const SOCKET getListenSocketForDestination(void) const;
    
    //## auto_generated
    void setListenSocketForDestination(const SOCKET p_listenSocketForDestination);
    
    //## auto_generated
    const SOCKET getListenSocketForGetMagVal(void) const;
    
    //## auto_generated
    void setListenSocketForGetMagVal(const SOCKET p_listenSocketForGetMagVal);
    
    //## auto_generated
    const SOCKET getListenSocketForGoToDest(void) const;
    
    //## auto_generated
    void setListenSocketForGoToDest(const SOCKET p_listenSocketForGoToDest);
    
    //## auto_generated
    const SOCKET getListenSocketForMagCalcMethod(void) const;
    
    //## auto_generated
    void setListenSocketForMagCalcMethod(const SOCKET p_listenSocketForMagCalcMethod);
    
    //## auto_generated
    const SOCKET getListenSocketForMovDir(void) const;
    
    //## auto_generated
    void setListenSocketForMovDir(const SOCKET p_listenSocketForMovDir);
    
    //## auto_generated
    const SOCKET getListenSocketForPathAlgo(void) const;
    
    //## auto_generated
    void setListenSocketForPathAlgo(const SOCKET p_listenSocketForPathAlgo);
    
    //## auto_generated
    const SOCKET getListenSocketForRecDestination(void) const;
    
    //## auto_generated
    void setListenSocketForRecDestination(const SOCKET p_listenSocketForRecDestination);
    
    //## auto_generated
    const SOCKET getListenSocketForRecGetMagVal(void) const;
    
    //## auto_generated
    void setListenSocketForRecGetMagVal(const SOCKET p_listenSocketForRecGetMagVal);
    
    //## auto_generated
    const SOCKET getListenSocketForRecMagCalcMethod(void) const;
    
    //## auto_generated
    void setListenSocketForRecMagCalcMethod(const SOCKET p_listenSocketForRecMagCalcMethod);
    
    //## auto_generated
    const SOCKET getListenSocketForRecMovDir(void) const;
    
    //## auto_generated
    void setListenSocketForRecMovDir(const SOCKET p_listenSocketForRecMovDir);
    
    //## auto_generated
    const SOCKET getListenSocketForRecPathAlgo(void) const;
    
    //## auto_generated
    void setListenSocketForRecPathAlgo(const SOCKET p_listenSocketForRecPathAlgo);
    
    //## auto_generated
    const SOCKET getListenSocketForRecShowMap(void) const;
    
    //## auto_generated
    void setListenSocketForRecShowMap(const SOCKET p_listenSocketForRecShowMap);
    
    //## auto_generated
    const SOCKET getListenSocketForRecSpeed(void) const;
    
    //## auto_generated
    void setListenSocketForRecSpeed(const SOCKET p_listenSocketForRecSpeed);
    
    //## auto_generated
    const SOCKET getListenSocketForRecStateBot(void) const;
    
    //## auto_generated
    void setListenSocketForRecStateBot(const SOCKET p_listenSocketForRecStateBot);
    
    //## auto_generated
    const SOCKET getListenSocketForShowMap(void) const;
    
    //## auto_generated
    void setListenSocketForShowMap(const SOCKET p_listenSocketForShowMap);
    
    //## auto_generated
    const SOCKET getListenSocketForSpeed(void) const;
    
    //## auto_generated
    void setListenSocketForSpeed(const SOCKET p_listenSocketForSpeed);
    
    //## auto_generated
    const SOCKET getListenSocketForStateBot(void) const;
    
    //## auto_generated
    void setListenSocketForStateBot(const SOCKET p_listenSocketForStateBot);
    
    //## auto_generated
    const int getPortD(void) const;
    
    //## auto_generated
    void setPortD(const int p_portD);
    
    //## auto_generated
    const int getPortDestination(void) const;
    
    //## auto_generated
    void setPortDestination(const int p_portDestination);
    
    //## auto_generated
    const int getPortGetMagVal(void) const;
    
    //## auto_generated
    void setPortGetMagVal(const int p_portGetMagVal);
    
    //## auto_generated
    const int getPortGoToDest(void) const;
    
    //## auto_generated
    void setPortGoToDest(const int p_portGoToDest);
    
    //## auto_generated
    const int getPortMCM(void) const;
    
    //## auto_generated
    void setPortMCM(const int p_portMCM);
    
    //## auto_generated
    const int getPortMD(void) const;
    
    //## auto_generated
    void setPortMD(const int p_portMD);
    
    //## auto_generated
    const int getPortMagCalcMethod(void) const;
    
    //## auto_generated
    void setPortMagCalcMethod(const int p_portMagCalcMethod);
    
    //## auto_generated
    const int getPortMovDir(void) const;
    
    //## auto_generated
    void setPortMovDir(const int p_portMovDir);
    
    //## auto_generated
    const int getPortPA(void) const;
    
    //## auto_generated
    void setPortPA(const int p_portPA);
    
    //## auto_generated
    const int getPortPathAlgo(void) const;
    
    //## auto_generated
    void setPortPathAlgo(const int p_portPathAlgo);
    
    //## auto_generated
    const int getPortS(void) const;
    
    //## auto_generated
    void setPortS(const int p_portS);
    
    //## auto_generated
    const int getPortSB(void) const;
    
    //## auto_generated
    void setPortSB(const int p_portSB);
    
    //## auto_generated
    const int getPortSM(void) const;
    
    //## auto_generated
    void setPortSM(const int p_portSM);
    
    //## auto_generated
    const int getPortShowMap(void) const;
    
    //## auto_generated
    void setPortShowMap(const int p_portShowMap);
    
    //## auto_generated
    const int getPortSpeed(void) const;
    
    //## auto_generated
    void setPortSpeed(const int p_portSpeed);
    
    //## auto_generated
    const int getPortStateBot(void) const;
    
    //## auto_generated
    void setPortStateBot(const int p_portStateBot);
    
    //## auto_generated
    void setUtof(const double p_utof);

private :

    int Go;		//## attribute Go
    
    SOCKADDR_IN address_GoToDest;		//## attribute address_GoToDest
    
    SOCKADDR_IN address_r_D;		//## attribute address_r_D
    
    SOCKADDR_IN address_r_GMV;		//## attribute address_r_GMV
    
    SOCKADDR_IN address_r_MCM;		//## attribute address_r_MCM
    
    SOCKADDR_IN address_r_MD;		//## attribute address_r_MD
    
    SOCKADDR_IN address_r_PA;		//## attribute address_r_PA
    
    SOCKADDR_IN address_r_S;		//## attribute address_r_S
    
    SOCKADDR_IN address_r_SB;		//## attribute address_r_SB
    
    SOCKADDR_IN address_r_SM;		//## attribute address_r_SM
    
    int iResultGoToDest;		//## attribute iResultGoToDest
    
    int iResultRecDestination;		//## attribute iResultRecDestination
    
    int iResultRecGetMagVal;		//## attribute iResultRecGetMagVal
    
    int iResultRecMagCalcMethod;		//## attribute iResultRecMagCalcMethod
    
    int iResultRecMovDir;		//## attribute iResultRecMovDir
    
    int iResultRecPathAlgo;		//## attribute iResultRecPathAlgo
    
    int iResultRecShowMap;		//## attribute iResultRecShowMap
    
    int iResultRecSpeed;		//## attribute iResultRecSpeed
    
    int iResultRecStateBot;		//## attribute iResultRecStateBot
    
    int iSendResultGoToDest;		//## attribute iSendResultGoToDest
    
    SOCKET listenSocketForGoToDest;		//## attribute listenSocketForGoToDest
    
    SOCKET listenSocketForRecDestination;		//## attribute listenSocketForRecDestination
    
    SOCKET listenSocketForRecGetMagVal;		//## attribute listenSocketForRecGetMagVal
    
    SOCKET listenSocketForRecMagCalcMethod;		//## attribute listenSocketForRecMagCalcMethod
    
    SOCKET listenSocketForRecMovDir;		//## attribute listenSocketForRecMovDir
    
    SOCKET listenSocketForRecPathAlgo;		//## attribute listenSocketForRecPathAlgo
    
    SOCKET listenSocketForRecShowMap;		//## attribute listenSocketForRecShowMap
    
    SOCKET listenSocketForRecSpeed;		//## attribute listenSocketForRecSpeed
    
    SOCKET listenSocketForRecStateBot;		//## attribute listenSocketForRecStateBot
    
    int portD;		//## attribute portD
    
    int portGoToDest;		//## attribute portGoToDest
    
    int portMCM;		//## attribute portMCM
    
    int portMD;		//## attribute portMD
    
    int portPA;		//## attribute portPA
    
    int portS;		//## attribute portS
    
    int portSB;		//## attribute portSB
    
    int portSM;		//## attribute portSM
    
//#[ ignore
    Speed_SP_C Speed_SP;
    
    MovDir_SP_C MovDir_SP;
    
    Destination_SP_C Destination_SP;
    
    PathAlgo_SP_C PathAlgo_SP;
    
    GetMagVal_SP_C GetMagVal_SP;
    
    MagCalcMethod_SP_C MagCalcMethod_SP;
    
    StateBot_SP_C StateBot_SP;
    
    ShowMap_SP_C ShowMap_SP;
    
    Go_SP_C Go_SP;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // DispenseFuel:
    //## statechart_method
    inline RhpBoolean DispenseFuel_IN(void) const;
    
    //## statechart_method
    void DispenseFuel_entDef(void);
    
    //## statechart_method
    void DispenseFuel_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DispenseFuel_processEvent(void);
    
    // state_11:
    //## statechart_method
    inline RhpBoolean state_11_IN(void) const;
    
    //## statechart_method
    void state_11_entDef(void);
    
    //## statechart_method
    void state_11_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_11_processEvent(void);
    
    // SendAndRecieve:
    //## statechart_method
    inline RhpBoolean SendAndRecieve_IN(void) const;
    
    // state_10:
    //## statechart_method
    inline RhpBoolean state_10_IN(void) const;
    
    //## statechart_method
    void state_10_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent(void);
    
    // UpdateVariable:
    //## statechart_method
    inline RhpBoolean UpdateVariable_IN(void) const;
    
    // accepttimeevent_25:
    //## statechart_method
    inline RhpBoolean accepttimeevent_25_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum SendToUnity_Enum {
        OMNonState = 0,
        DispenseFuel = 1,
        state_11 = 2,
        SendAndRecieve = 3,
        state_10 = 4,
        UpdateVariable = 5,
        accepttimeevent_25 = 6
    };
//#]

private :

//#[ ignore
    SendToUnity_Enum rootState_subState;
    
    SendToUnity_Enum rootState_active;
    
    SendToUnity_Enum state_11_subState;
    
    SendToUnity_Enum state_11_active;
    
    IOxfTimeout* state_11_timeout;
    
    SendToUnity_Enum state_10_subState;
    
    SendToUnity_Enum state_10_active;
    
    IOxfTimeout* state_10_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSendToUnity : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SendToUnity, OMAnimatedSendToUnity)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DispenseFuel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SendAndRecieve_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UpdateVariable_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_25_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SendToUnity::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SendToUnity::DispenseFuel_IN(void) const {
    return rootState_subState == DispenseFuel;
}

inline RhpBoolean SendToUnity::state_11_IN(void) const {
    return DispenseFuel_IN();
}

inline RhpBoolean SendToUnity::SendAndRecieve_IN(void) const {
    return state_11_subState == SendAndRecieve;
}

inline RhpBoolean SendToUnity::state_10_IN(void) const {
    return DispenseFuel_IN();
}

inline RhpBoolean SendToUnity::UpdateVariable_IN(void) const {
    return state_10_subState == UpdateVariable;
}

inline RhpBoolean SendToUnity::accepttimeevent_25_IN(void) const {
    return state_10_subState == accepttimeevent_25;
}

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\SendToUnity.h
*********************************************************************/

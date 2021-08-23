/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SendToUnity
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\SendToUnity.h
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
//## auto_generated
#include "IMRPkg.h"
//## class SendToUnity
#include "intFlowInterface.h"
//## package IMRPkg

//## class SendToUnity
class SendToUnity : public OMThread, public OMReactive, public intFlowInterface {
public :

//#[ ignore
    //## package IMRPkg
    class fire_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        fire_SP_C(void);
        
        //## auto_generated
        virtual ~fire_SP_C(void);
        
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
    
    //## package IMRPkg
    class Extinguisher_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Extinguisher_SP_C(void);
        
        //## auto_generated
        virtual ~Extinguisher_SP_C(void);
        
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
    
    //## package IMRPkg
    class fanSpeed_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        fanSpeed_SP_C(void);
        
        //## auto_generated
        virtual ~fanSpeed_SP_C(void);
        
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
    
    //## package IMRPkg
    class StateHVAC_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        StateHVAC_SP_C(void);
        
        //## auto_generated
        virtual ~StateHVAC_SP_C(void);
        
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
    
    //## package IMRPkg
    class temperature_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        temperature_SP_C(void);
        
        //## auto_generated
        virtual ~temperature_SP_C(void);
        
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
    
    //## package IMRPkg
    class interiorLightIntensity_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        interiorLightIntensity_SP_C(void);
        
        //## auto_generated
        virtual ~interiorLightIntensity_SP_C(void);
        
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
    
    //## package IMRPkg
    class Door_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Door_SP_C(void);
        
        //## auto_generated
        virtual ~Door_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        //## auto_generated
        intFlowInterface* getOutBound(void);
        
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
    
    //## package IMRPkg
    class userCode_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        userCode_SP_C(void);
        
        //## auto_generated
        virtual ~userCode_SP_C(void);
        
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
    
    //## package IMRPkg
    class Call_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Call_SP_C(void);
        
        //## auto_generated
        virtual ~Call_SP_C(void);
        
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
    
    //## package IMRPkg
    class alarm_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        alarm_SP_C(void);
        
        //## auto_generated
        virtual ~alarm_SP_C(void);
        
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
    
    //## package IMRPkg
    class hologram_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        hologram_SP_C(void);
        
        //## auto_generated
        virtual ~hologram_SP_C(void);
        
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
    const char getTemp(void) const;
    
    //## auto_generated
    const WSADATA getWs(void) const;
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);

protected :

    //## auto_generated
    void cancelTimeouts(void);

private :

    SOCKET connectSocketForTest1;		//## attribute connectSocketForTest1
    
    OMString displayValue;		//## attribute displayValue
    
    int iResultTest1;		//## attribute iResultTest1
    
    int iSendResultTest1;		//## attribute iSendResultTest1
    
    SOCKET listenSocketForTest1;		//## attribute listenSocketForTest1
    
    int portTest1;		//## attribute portTest1
    
    char recvbuf[DEFAULT_BUFLEN];		//## attribute recvbuf
    
    int recvbuflen;		//## attribute recvbuflen
    
    int sendbuflen;		//## attribute sendbuflen
    
    char* serverName;		//## attribute serverName
    
    char sndmsgbuf[DEFAULT_BUFLEN+3];		//## attribute sndmsgbuf
    
    int sockfd;		//## attribute sockfd
    
    char temp;		//## attribute temp
    
    WSADATA ws;		//## attribute ws

public :

    //## auto_generated
    SendToUnity(void);
    
    //## auto_generated
    virtual ~SendToUnity(void);
    
    //## auto_generated
    const int getInt32(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_hvac(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_intensity(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_temperature(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_test(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_test1(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_test2(void) const;
    
    //## auto_generated
    const SOCKET getConnectSocketForHVAC(void) const;
    
    //## auto_generated
    const SOCKET getConnectSocketForIntensity(void) const;
    
    //## auto_generated
    const SOCKET getConnectSocketForTemperature(void) const;
    
    //## auto_generated
    const SOCKET getConnectSocketForTest(void) const;
    
    //## auto_generated
    const SOCKET getConnectSocketForTest1(void) const;
    
    //## auto_generated
    const SOCKET getConnectSocketForTest2(void) const;
    
    //## auto_generated
    const OMString getFilename(void) const;
    
    //## auto_generated
    const double getFval(void) const;
    
    //## auto_generated
    const float getHvac(void) const;
    
    //## auto_generated
    const bool getHvac_bool(void) const;
    
    //## auto_generated
    const OMString getHvac_text(void) const;
    
    //## auto_generated
    const int getIResultHVAC(void) const;
    
    //## auto_generated
    const int getIResultIntensity(void) const;
    
    //## auto_generated
    const int getIResultTemperature(void) const;
    
    //## auto_generated
    const int getIResultTest(void) const;
    
    //## auto_generated
    const int getIResultTest1(void) const;
    
    //## auto_generated
    const int getIResultTest2(void) const;
    
    //## auto_generated
    const int getISendResultHVAC(void) const;
    
    //## auto_generated
    const int getISendResultIntensity(void) const;
    
    //## auto_generated
    const int getISendResultTemperature(void) const;
    
    //## auto_generated
    const int getISendResultTest(void) const;
    
    //## auto_generated
    const int getISendResultTest1(void) const;
    
    //## auto_generated
    const int getISendResultTest2(void) const;
    
    //## auto_generated
    const float getIntensity(void) const;
    
    //## auto_generated
    const SOCKET getListenSocketForHVAC(void) const;
    
    //## auto_generated
    const SOCKET getListenSocketForIntensity(void) const;
    
    //## auto_generated
    const SOCKET getListenSocketForTemperature(void) const;
    
    //## auto_generated
    const SOCKET getListenSocketForTest(void) const;
    
    //## auto_generated
    const SOCKET getListenSocketForTest1(void) const;
    
    //## auto_generated
    const SOCKET getListenSocketForTest2(void) const;
    
    //## auto_generated
    const int getPortHVAC(void) const;
    
    //## auto_generated
    const int getPortIntensity(void) const;
    
    //## auto_generated
    const int getPortTemperature(void) const;
    
    //## auto_generated
    const int getPortTest(void) const;
    
    //## auto_generated
    const int getPortTest1(void) const;
    
    //## auto_generated
    const int getPortTest2(void) const;
    
    //## auto_generated
    const int getTemperature(void) const;
    
    //## auto_generated
    const float getTest(void) const;
    
    //## auto_generated
    const float getTest1(void) const;
    
    //## auto_generated
    const float getTest2(void) const;
    
    //## auto_generated
    const float getTest2check(void) const;
    
    //## auto_generated
    const double getUtof(void) const;

private :

    int Int32;		//## attribute Int32
    
    SOCKADDR_IN address_hvac;		//## attribute address_hvac
    
    SOCKADDR_IN address_intensity;		//## attribute address_intensity
    
    SOCKADDR_IN address_temperature;		//## attribute address_temperature
    
    SOCKADDR_IN address_test;		//## attribute address_test
    
    SOCKADDR_IN address_test1;		//## attribute address_test1
    
    SOCKADDR_IN address_test2;		//## attribute address_test2
    
    SOCKET connectSocketForHVAC;		//## attribute connectSocketForHVAC
    
    SOCKET connectSocketForIntensity;		//## attribute connectSocketForIntensity
    
    SOCKET connectSocketForTemperature;		//## attribute connectSocketForTemperature
    
    SOCKET connectSocketForTest;		//## attribute connectSocketForTest
    
    SOCKET connectSocketForTest2;		//## attribute connectSocketForTest2
    
    OMString filename;		//## attribute filename
    
    double fval;		//## attribute fval
    
    float hvac;		//## attribute hvac
    
    bool hvac_bool;		//## attribute hvac_bool
    
    OMString hvac_text;		//## attribute hvac_text
    
    int iResultHVAC;		//## attribute iResultHVAC
    
    int iResultIntensity;		//## attribute iResultIntensity
    
    int iResultTemperature;		//## attribute iResultTemperature
    
    int iResultTest;		//## attribute iResultTest
    
    int iResultTest2;		//## attribute iResultTest2
    
    int iSendResultHVAC;		//## attribute iSendResultHVAC
    
    int iSendResultIntensity;		//## attribute iSendResultIntensity
    
    int iSendResultTemperature;		//## attribute iSendResultTemperature
    
    int iSendResultTest;		//## attribute iSendResultTest
    
    int iSendResultTest2;		//## attribute iSendResultTest2
    
    float intensity;		//## attribute intensity
    
    SOCKET listenSocketForHVAC;		//## attribute listenSocketForHVAC
    
    SOCKET listenSocketForIntensity;		//## attribute listenSocketForIntensity
    
    SOCKET listenSocketForTemperature;		//## attribute listenSocketForTemperature
    
    SOCKET listenSocketForTest;		//## attribute listenSocketForTest
    
    SOCKET listenSocketForTest2;		//## attribute listenSocketForTest2
    
    int portHVAC;		//## attribute portHVAC
    
    int portIntensity;		//## attribute portIntensity
    
    int portTemperature;		//## attribute portTemperature
    
    int portTest;		//## attribute portTest
    
    int portTest2;		//## attribute portTest2
    
    int temperature;		//## attribute temperature
    
    float test;		//## attribute test
    
    float test1;		//## attribute test1
    
    float test2;		//## attribute test2
    
    float test2check;		//## attribute test2check
    
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
    void setTemp(const char p_temp);
    
    //## auto_generated
    void setWs(const WSADATA p_ws);
    
    //## auto_generated
    fire_SP_C* getFire_SP(void) const;
    
    //## auto_generated
    fire_SP_C* get_fire_SP(void) const;
    
    //## auto_generated
    Extinguisher_SP_C* getExtinguisher_SP(void) const;
    
    //## auto_generated
    Extinguisher_SP_C* get_Extinguisher_SP(void) const;
    
    //## auto_generated
    fanSpeed_SP_C* getFanSpeed_SP(void) const;
    
    //## auto_generated
    fanSpeed_SP_C* get_fanSpeed_SP(void) const;
    
    //## auto_generated
    StateHVAC_SP_C* getStateHVAC_SP(void) const;
    
    //## auto_generated
    StateHVAC_SP_C* get_StateHVAC_SP(void) const;
    
    //## auto_generated
    temperature_SP_C* getTemperature_SP(void) const;
    
    //## auto_generated
    temperature_SP_C* get_temperature_SP(void) const;
    
    //## auto_generated
    interiorLightIntensity_SP_C* getInteriorLightIntensity_SP(void) const;
    
    //## auto_generated
    interiorLightIntensity_SP_C* get_interiorLightIntensity_SP(void) const;
    
    //## auto_generated
    Door_SP_C* getDoor_SP(void) const;
    
    //## auto_generated
    Door_SP_C* get_Door_SP(void) const;
    
    //## auto_generated
    userCode_SP_C* getUserCode_SP(void) const;
    
    //## auto_generated
    userCode_SP_C* get_userCode_SP(void) const;
    
    //## auto_generated
    Call_SP_C* getCall_SP(void) const;
    
    //## auto_generated
    Call_SP_C* get_Call_SP(void) const;
    
    //## auto_generated
    alarm_SP_C* getAlarm_SP(void) const;
    
    //## auto_generated
    alarm_SP_C* get_alarm_SP(void) const;
    
    //## auto_generated
    hologram_SP_C* getHologram_SP(void) const;
    
    //## auto_generated
    hologram_SP_C* get_hologram_SP(void) const;
    
    //## auto_generated
    const int getCall(void) const;
    
    //## auto_generated
    const int getDoor(void) const;
    
    //## auto_generated
    const int getExtinguisher(void) const;
    
    //## auto_generated
    const int getStateHVAC(void) const;
    
    //## auto_generated
    const SOCKADDR_IN getAddress_Door(void) const;
    
    //## auto_generated
    void setAddress_Door(const SOCKADDR_IN p_address_Door);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_StateHVAC(void) const;
    
    //## auto_generated
    void setAddress_StateHVAC(const SOCKADDR_IN p_address_StateHVAC);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_fanSpeed(void) const;
    
    //## auto_generated
    void setAddress_fanSpeed(const SOCKADDR_IN p_address_fanSpeed);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_hologram(void) const;
    
    //## auto_generated
    void setAddress_hologram(const SOCKADDR_IN p_address_hologram);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_interiorLightIntensity(void) const;
    
    //## auto_generated
    void setAddress_interiorLightIntensity(const SOCKADDR_IN p_address_interiorLightIntensity);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_userCode(void) const;
    
    //## auto_generated
    void setAddress_userCode(const SOCKADDR_IN p_address_userCode);
    
    //## auto_generated
    const int getAlarm(void) const;
    
    //## auto_generated
    const int getFanSpeed(void) const;
    
    //## auto_generated
    const int getFire(void) const;
    
    //## auto_generated
    const int getHologram(void) const;
    
    //## auto_generated
    const int getIResultDoor(void) const;
    
    //## auto_generated
    void setIResultDoor(const int p_iResultDoor);
    
    //## auto_generated
    const int getIResultStateHVAC(void) const;
    
    //## auto_generated
    void setIResultStateHVAC(const int p_iResultStateHVAC);
    
    //## auto_generated
    const int getIResultfanSpeed(void) const;
    
    //## auto_generated
    void setIResultfanSpeed(const int p_iResultfanSpeed);
    
    //## auto_generated
    const int getIResulthologram(void) const;
    
    //## auto_generated
    void setIResulthologram(const int p_iResulthologram);
    
    //## auto_generated
    const int getIResultinteriorLightIntensity(void) const;
    
    //## auto_generated
    void setIResultinteriorLightIntensity(const int p_iResultinteriorLightIntensity);
    
    //## auto_generated
    const int getIResultuserCode(void) const;
    
    //## auto_generated
    void setIResultuserCode(const int p_iResultuserCode);
    
    //## auto_generated
    const int getISendResultDoor(void) const;
    
    //## auto_generated
    void setISendResultDoor(const int p_iSendResultDoor);
    
    //## auto_generated
    const int getISendResultStateHVAC(void) const;
    
    //## auto_generated
    void setISendResultStateHVAC(const int p_iSendResultStateHVAC);
    
    //## auto_generated
    const int getISendResultfanSpeed(void) const;
    
    //## auto_generated
    void setISendResultfanSpeed(const int p_iSendResultfanSpeed);
    
    //## auto_generated
    const int getISendResulthologram(void) const;
    
    //## auto_generated
    void setISendResulthologram(const int p_iSendResulthologram);
    
    //## auto_generated
    const int getISendResultinteriorLightIntensity(void) const;
    
    //## auto_generated
    void setISendResultinteriorLightIntensity(const int p_iSendResultinteriorLightIntensity);
    
    //## auto_generated
    const int getISendResultuserCode(void) const;
    
    //## auto_generated
    void setISendResultuserCode(const int p_iSendResultuserCode);
    
    //## auto_generated
    const int getInteriorLightIntensity(void) const;
    
    //## auto_generated
    const SOCKET getListenSocketForDoor(void) const;
    
    //## auto_generated
    void setListenSocketForDoor(const SOCKET p_listenSocketForDoor);
    
    //## auto_generated
    const SOCKET getListenSocketForStateHVAC(void) const;
    
    //## auto_generated
    void setListenSocketForStateHVAC(const SOCKET p_listenSocketForStateHVAC);
    
    //## auto_generated
    const SOCKET getListenSocketForfanSpeed(void) const;
    
    //## auto_generated
    void setListenSocketForfanSpeed(const SOCKET p_listenSocketForfanSpeed);
    
    //## auto_generated
    const SOCKET getListenSocketForhologram(void) const;
    
    //## auto_generated
    void setListenSocketForhologram(const SOCKET p_listenSocketForhologram);
    
    //## auto_generated
    const SOCKET getListenSocketForinteriorLightIntensity(void) const;
    
    //## auto_generated
    void setListenSocketForinteriorLightIntensity(const SOCKET p_listenSocketForinteriorLightIntensity);
    
    //## auto_generated
    const SOCKET getListenSocketForuserCode(void) const;
    
    //## auto_generated
    void setListenSocketForuserCode(const SOCKET p_listenSocketForuserCode);
    
    //## auto_generated
    const int getPortDoor(void) const;
    
    //## auto_generated
    void setPortDoor(const int p_portDoor);
    
    //## auto_generated
    const int getPortStateHVAC(void) const;
    
    //## auto_generated
    void setPortStateHVAC(const int p_portStateHVAC);
    
    //## auto_generated
    const int getPortfanSpeed(void) const;
    
    //## auto_generated
    void setPortfanSpeed(const int p_portfanSpeed);
    
    //## auto_generated
    const int getPorthologram(void) const;
    
    //## auto_generated
    void setPorthologram(const int p_porthologram);
    
    //## auto_generated
    const int getPortinteriorLightIntensity(void) const;
    
    //## auto_generated
    void setPortinteriorLightIntensity(const int p_portinteriorLightIntensity);
    
    //## auto_generated
    const int getPortuserCode(void) const;
    
    //## auto_generated
    void setPortuserCode(const int p_portuserCode);
    
    //## auto_generated
    const int getUserCode(void) const;

protected :

    //## auto_generated
    void initRelations(void);

private :

    int Call;		//## attribute Call
    
    int Door;		//## attribute Door
    
    int Extinguisher;		//## attribute Extinguisher
    
    int StateHVAC;		//## attribute StateHVAC
    
    SOCKADDR_IN address_Call;		//## attribute address_Call
    
    SOCKADDR_IN address_Door;		//## attribute address_Door
    
    SOCKADDR_IN address_Extinguisher;		//## attribute address_Extinguisher
    
    SOCKADDR_IN address_StateHVAC;		//## attribute address_StateHVAC
    
    SOCKADDR_IN address_alarm;		//## attribute address_alarm
    
    SOCKADDR_IN address_fanSpeed;		//## attribute address_fanSpeed
    
    SOCKADDR_IN address_fire;		//## attribute address_fire
    
    SOCKADDR_IN address_hologram;		//## attribute address_hologram
    
    SOCKADDR_IN address_interiorLightIntensity;		//## attribute address_interiorLightIntensity
    
    SOCKADDR_IN address_userCode;		//## attribute address_userCode
    
    int alarm;		//## attribute alarm
    
    int fanSpeed;		//## attribute fanSpeed
    
    int fire;		//## attribute fire
    
    int hologram;		//## attribute hologram
    
    int iResultCall;		//## attribute iResultCall
    
    int iResultDoor;		//## attribute iResultDoor
    
    int iResultExtinguisher;		//## attribute iResultExtinguisher
    
    int iResultStateHVAC;		//## attribute iResultStateHVAC
    
    int iResultalarm;		//## attribute iResultalarm
    
    int iResultfanSpeed;		//## attribute iResultfanSpeed
    
    int iResultfire;		//## attribute iResultfire
    
    int iResulthologram;		//## attribute iResulthologram
    
    int iResultinteriorLightIntensity;		//## attribute iResultinteriorLightIntensity
    
    int iResultuserCode;		//## attribute iResultuserCode
    
    int iSendResultCall;		//## attribute iSendResultCall
    
    int iSendResultDoor;		//## attribute iSendResultDoor
    
    int iSendResultExtinguisher;		//## attribute iSendResultExtinguisher
    
    int iSendResultStateHVAC;		//## attribute iSendResultStateHVAC
    
    int iSendResultalarm;		//## attribute iSendResultalarm
    
    int iSendResultfanSpeed;		//## attribute iSendResultfanSpeed
    
    int iSendResultfire;		//## attribute iSendResultfire
    
    int iSendResulthologram;		//## attribute iSendResulthologram
    
    int iSendResultinteriorLightIntensity;		//## attribute iSendResultinteriorLightIntensity
    
    int iSendResultuserCode;		//## attribute iSendResultuserCode
    
    int interiorLightIntensity;		//## attribute interiorLightIntensity
    
    SOCKET listenSocketForCall;		//## attribute listenSocketForCall
    
    SOCKET listenSocketForDoor;		//## attribute listenSocketForDoor
    
    SOCKET listenSocketForExtinguisher;		//## attribute listenSocketForExtinguisher
    
    SOCKET listenSocketForStateHVAC;		//## attribute listenSocketForStateHVAC
    
    SOCKET listenSocketForalarm;		//## attribute listenSocketForalarm
    
    SOCKET listenSocketForfanSpeed;		//## attribute listenSocketForfanSpeed
    
    SOCKET listenSocketForfire;		//## attribute listenSocketForfire
    
    SOCKET listenSocketForhologram;		//## attribute listenSocketForhologram
    
    SOCKET listenSocketForinteriorLightIntensity;		//## attribute listenSocketForinteriorLightIntensity
    
    SOCKET listenSocketForuserCode;		//## attribute listenSocketForuserCode
    
    int portCall;		//## attribute portCall
    
    int portDoor;		//## attribute portDoor
    
    int portExtinguisher;		//## attribute portExtinguisher
    
    int portStateHVAC;		//## attribute portStateHVAC
    
    int portalarm;		//## attribute portalarm
    
    int portfanSpeed;		//## attribute portfanSpeed
    
    int portfire;		//## attribute portfire
    
    int porthologram;		//## attribute porthologram
    
    int portinteriorLightIntensity;		//## attribute portinteriorLightIntensity
    
    int portuserCode;		//## attribute portuserCode
    
    int userCode;		//## attribute userCode

public :

//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void setAlarm(int p_alarm);
    
    void setCall(int p_Call);
    
    void setDoor(int p_Door);
    
    void setExtinguisher(int p_Extinguisher);
    
    void setFanSpeed(int p_fanSpeed);
    
    void setFire(int p_fire);
    
    void setHologram(int p_hologram);
    
    void setInteriorLightIntensity(int p_interiorLightIntensity);
    
    void setStateHVAC(int p_StateHVAC);
    
    void setTemperature(int p_temperature);
    
    void setUserCode(int p_userCode);
//#]

    //## auto_generated
    void setInt32(const int p_Int32);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_Call(void) const;
    
    //## auto_generated
    void setAddress_Call(const SOCKADDR_IN p_address_Call);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_Extinguisher(void) const;
    
    //## auto_generated
    void setAddress_Extinguisher(const SOCKADDR_IN p_address_Extinguisher);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_alarm(void) const;
    
    //## auto_generated
    void setAddress_alarm(const SOCKADDR_IN p_address_alarm);
    
    //## auto_generated
    const SOCKADDR_IN getAddress_fire(void) const;
    
    //## auto_generated
    void setAddress_fire(const SOCKADDR_IN p_address_fire);
    
    //## auto_generated
    void setAddress_hvac(const SOCKADDR_IN p_address_hvac);
    
    //## auto_generated
    void setAddress_intensity(const SOCKADDR_IN p_address_intensity);
    
    //## auto_generated
    void setAddress_temperature(const SOCKADDR_IN p_address_temperature);
    
    //## auto_generated
    void setAddress_test(const SOCKADDR_IN p_address_test);
    
    //## auto_generated
    void setAddress_test1(const SOCKADDR_IN p_address_test1);
    
    //## auto_generated
    void setAddress_test2(const SOCKADDR_IN p_address_test2);
    
    //## auto_generated
    void setConnectSocketForHVAC(const SOCKET p_connectSocketForHVAC);
    
    //## auto_generated
    void setConnectSocketForIntensity(const SOCKET p_connectSocketForIntensity);
    
    //## auto_generated
    void setConnectSocketForTemperature(const SOCKET p_connectSocketForTemperature);
    
    //## auto_generated
    void setConnectSocketForTest(const SOCKET p_connectSocketForTest);
    
    //## auto_generated
    void setConnectSocketForTest1(const SOCKET p_connectSocketForTest1);
    
    //## auto_generated
    void setConnectSocketForTest2(const SOCKET p_connectSocketForTest2);
    
    //## auto_generated
    void setFilename(const OMString p_filename);
    
    //## auto_generated
    void setFval(const double p_fval);
    
    //## auto_generated
    void setHvac(const float p_hvac);
    
    //## auto_generated
    void setHvac_bool(const bool p_hvac_bool);
    
    //## auto_generated
    void setHvac_text(const OMString p_hvac_text);
    
    //## auto_generated
    const int getIResultCall(void) const;
    
    //## auto_generated
    void setIResultCall(const int p_iResultCall);
    
    //## auto_generated
    const int getIResultExtinguisher(void) const;
    
    //## auto_generated
    void setIResultExtinguisher(const int p_iResultExtinguisher);
    
    //## auto_generated
    void setIResultHVAC(const int p_iResultHVAC);
    
    //## auto_generated
    void setIResultIntensity(const int p_iResultIntensity);
    
    //## auto_generated
    void setIResultTemperature(const int p_iResultTemperature);
    
    //## auto_generated
    void setIResultTest(const int p_iResultTest);
    
    //## auto_generated
    void setIResultTest1(const int p_iResultTest1);
    
    //## auto_generated
    void setIResultTest2(const int p_iResultTest2);
    
    //## auto_generated
    const int getIResultalarm(void) const;
    
    //## auto_generated
    void setIResultalarm(const int p_iResultalarm);
    
    //## auto_generated
    const int getIResultfire(void) const;
    
    //## auto_generated
    void setIResultfire(const int p_iResultfire);
    
    //## auto_generated
    const int getISendResultCall(void) const;
    
    //## auto_generated
    void setISendResultCall(const int p_iSendResultCall);
    
    //## auto_generated
    const int getISendResultExtinguisher(void) const;
    
    //## auto_generated
    void setISendResultExtinguisher(const int p_iSendResultExtinguisher);
    
    //## auto_generated
    void setISendResultHVAC(const int p_iSendResultHVAC);
    
    //## auto_generated
    void setISendResultIntensity(const int p_iSendResultIntensity);
    
    //## auto_generated
    void setISendResultTemperature(const int p_iSendResultTemperature);
    
    //## auto_generated
    void setISendResultTest(const int p_iSendResultTest);
    
    //## auto_generated
    void setISendResultTest1(const int p_iSendResultTest1);
    
    //## auto_generated
    void setISendResultTest2(const int p_iSendResultTest2);
    
    //## auto_generated
    const int getISendResultalarm(void) const;
    
    //## auto_generated
    void setISendResultalarm(const int p_iSendResultalarm);
    
    //## auto_generated
    const int getISendResultfire(void) const;
    
    //## auto_generated
    void setISendResultfire(const int p_iSendResultfire);
    
    //## auto_generated
    void setIntensity(const float p_intensity);
    
    //## auto_generated
    const SOCKET getListenSocketForCall(void) const;
    
    //## auto_generated
    void setListenSocketForCall(const SOCKET p_listenSocketForCall);
    
    //## auto_generated
    const SOCKET getListenSocketForExtinguisher(void) const;
    
    //## auto_generated
    void setListenSocketForExtinguisher(const SOCKET p_listenSocketForExtinguisher);
    
    //## auto_generated
    void setListenSocketForHVAC(const SOCKET p_listenSocketForHVAC);
    
    //## auto_generated
    void setListenSocketForIntensity(const SOCKET p_listenSocketForIntensity);
    
    //## auto_generated
    void setListenSocketForTemperature(const SOCKET p_listenSocketForTemperature);
    
    //## auto_generated
    void setListenSocketForTest(const SOCKET p_listenSocketForTest);
    
    //## auto_generated
    void setListenSocketForTest1(const SOCKET p_listenSocketForTest1);
    
    //## auto_generated
    void setListenSocketForTest2(const SOCKET p_listenSocketForTest2);
    
    //## auto_generated
    const SOCKET getListenSocketForalarm(void) const;
    
    //## auto_generated
    void setListenSocketForalarm(const SOCKET p_listenSocketForalarm);
    
    //## auto_generated
    const SOCKET getListenSocketForfire(void) const;
    
    //## auto_generated
    void setListenSocketForfire(const SOCKET p_listenSocketForfire);
    
    //## auto_generated
    const int getPortCall(void) const;
    
    //## auto_generated
    void setPortCall(const int p_portCall);
    
    //## auto_generated
    const int getPortExtinguisher(void) const;
    
    //## auto_generated
    void setPortExtinguisher(const int p_portExtinguisher);
    
    //## auto_generated
    void setPortHVAC(const int p_portHVAC);
    
    //## auto_generated
    void setPortIntensity(const int p_portIntensity);
    
    //## auto_generated
    void setPortTemperature(const int p_portTemperature);
    
    //## auto_generated
    void setPortTest(const int p_portTest);
    
    //## auto_generated
    void setPortTest1(const int p_portTest1);
    
    //## auto_generated
    void setPortTest2(const int p_portTest2);
    
    //## auto_generated
    const int getPortalarm(void) const;
    
    //## auto_generated
    void setPortalarm(const int p_portalarm);
    
    //## auto_generated
    const int getPortfire(void) const;
    
    //## auto_generated
    void setPortfire(const int p_portfire);
    
    //## auto_generated
    void setTest(const float p_test);
    
    //## auto_generated
    void setTest1(const float p_test1);
    
    //## auto_generated
    void setTest2(const float p_test2);
    
    //## auto_generated
    void setTest2check(const float p_test2check);
    
    //## auto_generated
    void setUtof(const double p_utof);

private :

//#[ ignore
    fire_SP_C fire_SP;
    
    Extinguisher_SP_C Extinguisher_SP;
    
    fanSpeed_SP_C fanSpeed_SP;
    
    StateHVAC_SP_C StateHVAC_SP;
    
    temperature_SP_C temperature_SP;
    
    interiorLightIntensity_SP_C interiorLightIntensity_SP;
    
    Door_SP_C Door_SP;
    
    userCode_SP_C userCode_SP;
    
    Call_SP_C Call_SP;
    
    alarm_SP_C alarm_SP;
    
    hologram_SP_C hologram_SP;
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
	File Path	: DefaultComponent\DefaultConfig\SendToUnity.h
*********************************************************************/

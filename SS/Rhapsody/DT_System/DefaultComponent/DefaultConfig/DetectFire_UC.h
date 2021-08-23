/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DetectFire_UC
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\DetectFire_UC.h
*********************************************************************/

#ifndef DetectFire_UC_H
#define DetectFire_UC_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
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
#include "string.h"
//## auto_generated
#include "IMRPkg.h"
//## class fire_SP_C
#include "intFlowInterface.h"
//## link itsEnableFireExtinguisher_UC
class EnableFireExtinguisher_UC;

//#[ ignore
#define OMAnim_IMRPkg_DetectFire_UC_setCall_int_ARGS_DECLARATION int p_Call;

#define OMAnim_IMRPkg_DetectFire_UC_setExtinguisher_int_ARGS_DECLARATION int p_Extinguisher;

#define OMAnim_IMRPkg_DetectFire_UC_setAlarm_int_ARGS_DECLARATION int p_alarm;

#define OMAnim_IMRPkg_DetectFire_UC_setFire_int_ARGS_DECLARATION int p_fire;
//#]

//## package IMRPkg

//## class DetectFire_UC
class DetectFire_UC : public OMReactive {
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDetectFire_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit DetectFire_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~DetectFire_UC(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    fire_SP_C* getFire_SP(void) const;
    
    //## auto_generated
    const int getFire(void) const;
    
    //## auto_generated
    const EnableFireExtinguisher_UC* getItsEnableFireExtinguisher_UC(void) const;
    
    //## auto_generated
    void setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);

public :

    //## TriggeredOperation evSetFire()
    void evSetFire(void);
    
    ////    Attributes    ////

private :

    int fire;		//## attribute fire
    
    ////    Relations and components    ////
    
    EnableFireExtinguisher_UC* itsEnableFireExtinguisher_UC;		//## link itsEnableFireExtinguisher_UC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC);
    
    //## auto_generated
    void _setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC);
    
    //## auto_generated
    void _clearItsEnableFireExtinguisher_UC(void);
    
    ////    Framework    ////
    
    //## auto_generated
    const RhpString getWarningMessage(void) const;
    
    //## auto_generated
    void setWarningMessage(const RhpString p_WarningMessage);

private :

    RhpString WarningMessage;		//## attribute WarningMessage

public :

//#[ ignore
    void setAlarm(int p_alarm);
    
    void setCall(int p_Call);
    
    void setExtinguisher(int p_Extinguisher);
    
    void setFire(int p_fire);
//#]

    //## auto_generated
    fire_SP_C* get_fire_SP(void) const;
    
    //## auto_generated
    Extinguisher_SP_C* getExtinguisher_SP(void) const;
    
    //## auto_generated
    Extinguisher_SP_C* get_Extinguisher_SP(void) const;
    
    //## auto_generated
    Call_SP_C* getCall_SP(void) const;
    
    //## auto_generated
    Call_SP_C* get_Call_SP(void) const;
    
    //## auto_generated
    alarm_SP_C* getAlarm_SP(void) const;
    
    //## auto_generated
    alarm_SP_C* get_alarm_SP(void) const;
    
    //## auto_generated
    const int getCall(void) const;
    
    //## auto_generated
    const int getExtinguisher(void) const;
    
    //## auto_generated
    const int getAlarm(void) const;

private :

    int Call;		//## attribute Call
    
    int Extinguisher;		//## attribute Extinguisher
    
    int alarm;		//## attribute alarm
    
//#[ ignore
    fire_SP_C fire_SP;
    
    Extinguisher_SP_C Extinguisher_SP;
    
    Call_SP_C Call_SP;
    
    alarm_SP_C alarm_SP;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // FireDetected:
    //## statechart_method
    inline RhpBoolean FireDetected_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum DetectFire_UC_Enum {
        OMNonState = 0,
        Idle = 1,
        FireDetected = 2
    };
//#]

private :

//#[ ignore
    DetectFire_UC_Enum rootState_subState;
    
    DetectFire_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(IMRPkg_DetectFire_UC_setCall_int)

DECLARE_OPERATION_CLASS(IMRPkg_DetectFire_UC_setExtinguisher_int)

DECLARE_OPERATION_CLASS(IMRPkg_DetectFire_UC_setAlarm_int)

DECLARE_OPERATION_CLASS(IMRPkg_DetectFire_UC_setFire_int)

//#[ ignore
class OMAnimatedDetectFire_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(DetectFire_UC, OMAnimatedDetectFire_UC)
    
    DECLARE_META_OP(IMRPkg_DetectFire_UC_setCall_int)
    
    DECLARE_META_OP(IMRPkg_DetectFire_UC_setExtinguisher_int)
    
    DECLARE_META_OP(IMRPkg_DetectFire_UC_setAlarm_int)
    
    DECLARE_META_OP(IMRPkg_DetectFire_UC_setFire_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FireDetected_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
class evSetFire_DetectFire_UC_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    evSetFire_DetectFire_UC_Event(void);
    
    ////    Framework    ////
    
    static const IOxfEvent::ID evSetFire_DetectFire_UC_Event_id;
};
//#]

inline RhpBoolean DetectFire_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean DetectFire_UC::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean DetectFire_UC::FireDetected_IN(void) const {
    return rootState_subState == FireDetected;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DetectFire_UC.h
*********************************************************************/

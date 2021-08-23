/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TriggerAlarm_UC
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\TriggerAlarm_UC.h
*********************************************************************/

#ifndef TriggerAlarm_UC_H
#define TriggerAlarm_UC_H

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
//## link itsEnableFireExtinguisher_UC
class EnableFireExtinguisher_UC;

//## link itsPlaceEmergencyCall
class PlaceEmergencyCall;

//## package IMRPkg

//## class TriggerAlarm_UC
class TriggerAlarm_UC : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTriggerAlarm_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit TriggerAlarm_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~TriggerAlarm_UC(void);
    
    ////    Operations    ////
    
    //## operation setAlarm()
    virtual bool setAlarm(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getAlarm(void) const;
    
    //## auto_generated
    void setAlarm(const bool p_alarm);
    
    //## auto_generated
    const EnableFireExtinguisher_UC* getItsEnableFireExtinguisher_UC(void) const;
    
    //## auto_generated
    void setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC);
    
    //## auto_generated
    const PlaceEmergencyCall* getItsPlaceEmergencyCall(void) const;
    
    //## auto_generated
    void setItsPlaceEmergencyCall(PlaceEmergencyCall* const p_PlaceEmergencyCall);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    bool alarm;		//## attribute alarm
    
    ////    Relations and components    ////
    
    EnableFireExtinguisher_UC* itsEnableFireExtinguisher_UC;		//## link itsEnableFireExtinguisher_UC
    
    PlaceEmergencyCall* itsPlaceEmergencyCall;		//## link itsPlaceEmergencyCall
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC);
    
    //## auto_generated
    void _setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC);
    
    //## auto_generated
    void _clearItsEnableFireExtinguisher_UC(void);
    
    //## auto_generated
    void __setItsPlaceEmergencyCall(PlaceEmergencyCall* const p_PlaceEmergencyCall);
    
    //## auto_generated
    void _setItsPlaceEmergencyCall(PlaceEmergencyCall* const p_PlaceEmergencyCall);
    
    //## auto_generated
    void _clearItsPlaceEmergencyCall(void);
    
    ////    Framework    ////
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SendFireSignal:
    //## statechart_method
    inline RhpBoolean SendFireSignal_IN(void) const;
    
    // sendaction_4:
    //## statechart_method
    inline RhpBoolean sendaction_4_IN(void) const;
    
    // Alarm_on:
    //## statechart_method
    inline RhpBoolean Alarm_on_IN(void) const;
    
    // Alarm_off:
    //## statechart_method
    inline RhpBoolean Alarm_off_IN(void) const;
    
    // accepteventaction_1:
    //## statechart_method
    inline RhpBoolean accepteventaction_1_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum TriggerAlarm_UC_Enum {
        OMNonState = 0,
        SendFireSignal = 1,
        sendaction_4 = 2,
        Alarm_on = 3,
        Alarm_off = 4,
        accepteventaction_1 = 5
    };
//#]

private :

//#[ ignore
    TriggerAlarm_UC_Enum rootState_subState;
    
    TriggerAlarm_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTriggerAlarm_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TriggerAlarm_UC, OMAnimatedTriggerAlarm_UC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SendFireSignal_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Alarm_on_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Alarm_off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean TriggerAlarm_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean TriggerAlarm_UC::SendFireSignal_IN(void) const {
    return rootState_subState == SendFireSignal;
}

inline RhpBoolean TriggerAlarm_UC::sendaction_4_IN(void) const {
    return rootState_subState == sendaction_4;
}

inline RhpBoolean TriggerAlarm_UC::Alarm_on_IN(void) const {
    return rootState_subState == Alarm_on;
}

inline RhpBoolean TriggerAlarm_UC::Alarm_off_IN(void) const {
    return rootState_subState == Alarm_off;
}

inline RhpBoolean TriggerAlarm_UC::accepteventaction_1_IN(void) const {
    return rootState_subState == accepteventaction_1;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TriggerAlarm_UC.h
*********************************************************************/

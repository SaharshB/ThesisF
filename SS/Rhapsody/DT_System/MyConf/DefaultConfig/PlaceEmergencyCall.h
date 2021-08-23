/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: PlaceEmergencyCall
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\PlaceEmergencyCall.h
*********************************************************************/

#ifndef PlaceEmergencyCall_H
#define PlaceEmergencyCall_H

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
//## link itsTriggerAlarm_UC
class TriggerAlarm_UC;

//## package IMRPkg

//## class PlaceEmergencyCall
class PlaceEmergencyCall : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPlaceEmergencyCall;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PlaceEmergencyCall(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~PlaceEmergencyCall(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getCall(void) const;
    
    //## auto_generated
    const TriggerAlarm_UC* getItsTriggerAlarm_UC(void) const;
    
    //## auto_generated
    void setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    bool Call;		//## attribute Call
    
    ////    Relations and components    ////
    
    TriggerAlarm_UC* itsTriggerAlarm_UC;		//## link itsTriggerAlarm_UC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC);
    
    //## auto_generated
    void _setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC);
    
    //## auto_generated
    void _clearItsTriggerAlarm_UC(void);
    
    ////    Framework    ////
    
    //## auto_generated
    const RhpBoolean getCallMsg(void) const;
    
    //## auto_generated
    void setCallMsg(const RhpBoolean p_CallMsg);

private :

    RhpBoolean CallMsg;		//## attribute CallMsg

public :

    //## auto_generated
    void setCall(const bool p_Call);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Phone_off:
    //## statechart_method
    inline RhpBoolean Phone_off_IN(void) const;
    
    // Phone_InUse:
    //## statechart_method
    inline RhpBoolean Phone_InUse_IN(void) const;
    
    // accepteventaction_4:
    //## statechart_method
    inline RhpBoolean accepteventaction_4_IN(void) const;
    
    // accepteventaction_3:
    //## statechart_method
    inline RhpBoolean accepteventaction_3_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum PlaceEmergencyCall_Enum {
        OMNonState = 0,
        Phone_off = 1,
        Phone_InUse = 2,
        accepteventaction_4 = 3,
        accepteventaction_3 = 4
    };
//#]

private :

//#[ ignore
    PlaceEmergencyCall_Enum rootState_subState;
    
    PlaceEmergencyCall_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPlaceEmergencyCall : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PlaceEmergencyCall, OMAnimatedPlaceEmergencyCall)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Phone_off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Phone_InUse_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_3_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean PlaceEmergencyCall::rootState_IN(void) const {
    return true;
}

inline RhpBoolean PlaceEmergencyCall::Phone_off_IN(void) const {
    return rootState_subState == Phone_off;
}

inline RhpBoolean PlaceEmergencyCall::Phone_InUse_IN(void) const {
    return rootState_subState == Phone_InUse;
}

inline RhpBoolean PlaceEmergencyCall::accepteventaction_4_IN(void) const {
    return rootState_subState == accepteventaction_4;
}

inline RhpBoolean PlaceEmergencyCall::accepteventaction_3_IN(void) const {
    return rootState_subState == accepteventaction_3;
}

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\PlaceEmergencyCall.h
*********************************************************************/

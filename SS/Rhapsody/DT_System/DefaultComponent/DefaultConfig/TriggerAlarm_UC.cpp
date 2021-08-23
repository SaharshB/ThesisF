/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TriggerAlarm_UC
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\TriggerAlarm_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TriggerAlarm_UC.h"
//## link itsEnableFireExtinguisher_UC
#include "EnableFireExtinguisher_UC.h"
//## link itsPlaceEmergencyCall
#include "PlaceEmergencyCall.h"
//#[ ignore
#define IMRPkg_TriggerAlarm_UC_TriggerAlarm_UC_SERIALIZE OM_NO_OP

#define IMRPkg_TriggerAlarm_UC_setAlarm_SERIALIZE OM_NO_OP
//#]

//## package IMRPkg

//## class TriggerAlarm_UC
TriggerAlarm_UC::TriggerAlarm_UC(IOxfActive* const theActiveContext) : OMReactive(), alarm(0), itsEnableFireExtinguisher_UC(NULL), itsPlaceEmergencyCall(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TriggerAlarm_UC, TriggerAlarm_UC(), 0, IMRPkg_TriggerAlarm_UC_TriggerAlarm_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

TriggerAlarm_UC::~TriggerAlarm_UC(void) {
    NOTIFY_DESTRUCTOR(~TriggerAlarm_UC, true);
    cleanUpRelations();
}

bool TriggerAlarm_UC::setAlarm(void) {
    NOTIFY_OPERATION(setAlarm, setAlarm(), 0, IMRPkg_TriggerAlarm_UC_setAlarm_SERIALIZE);
    //#[ operation setAlarm()
    if (alarm == false)  {
    	alarm = true; 
    	}
    else{
    	alarm = false;
    	}
    return alarm;
    //#]
}

const bool TriggerAlarm_UC::getAlarm(void) const {
    return alarm;
}

void TriggerAlarm_UC::setAlarm(const bool p_alarm) {
    alarm = p_alarm;
}

const EnableFireExtinguisher_UC* TriggerAlarm_UC::getItsEnableFireExtinguisher_UC(void) const {
    return itsEnableFireExtinguisher_UC;
}

void TriggerAlarm_UC::setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC) {
    if(p_EnableFireExtinguisher_UC != NULL)
        {
            p_EnableFireExtinguisher_UC->_setItsTriggerAlarm_UC(this);
        }
    _setItsEnableFireExtinguisher_UC(p_EnableFireExtinguisher_UC);
}

const PlaceEmergencyCall* TriggerAlarm_UC::getItsPlaceEmergencyCall(void) const {
    return itsPlaceEmergencyCall;
}

void TriggerAlarm_UC::setItsPlaceEmergencyCall(PlaceEmergencyCall* const p_PlaceEmergencyCall) {
    if(p_PlaceEmergencyCall != NULL)
        {
            p_PlaceEmergencyCall->_setItsTriggerAlarm_UC(this);
        }
    _setItsPlaceEmergencyCall(p_PlaceEmergencyCall);
}

bool TriggerAlarm_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TriggerAlarm_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void TriggerAlarm_UC::cleanUpRelations(void) {
    if(itsEnableFireExtinguisher_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnableFireExtinguisher_UC");
            const TriggerAlarm_UC* p_TriggerAlarm_UC = itsEnableFireExtinguisher_UC->getItsTriggerAlarm_UC();
            if(p_TriggerAlarm_UC != NULL)
                {
                    itsEnableFireExtinguisher_UC->__setItsTriggerAlarm_UC(NULL);
                }
            itsEnableFireExtinguisher_UC = NULL;
        }
    if(itsPlaceEmergencyCall != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPlaceEmergencyCall");
            const TriggerAlarm_UC* p_TriggerAlarm_UC = itsPlaceEmergencyCall->getItsTriggerAlarm_UC();
            if(p_TriggerAlarm_UC != NULL)
                {
                    itsPlaceEmergencyCall->__setItsTriggerAlarm_UC(NULL);
                }
            itsPlaceEmergencyCall = NULL;
        }
}

void TriggerAlarm_UC::__setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC) {
    itsEnableFireExtinguisher_UC = p_EnableFireExtinguisher_UC;
    if(p_EnableFireExtinguisher_UC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnableFireExtinguisher_UC", p_EnableFireExtinguisher_UC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnableFireExtinguisher_UC");
        }
}

void TriggerAlarm_UC::_setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC) {
    if(itsEnableFireExtinguisher_UC != NULL)
        {
            itsEnableFireExtinguisher_UC->__setItsTriggerAlarm_UC(NULL);
        }
    __setItsEnableFireExtinguisher_UC(p_EnableFireExtinguisher_UC);
}

void TriggerAlarm_UC::_clearItsEnableFireExtinguisher_UC(void) {
    NOTIFY_RELATION_CLEARED("itsEnableFireExtinguisher_UC");
    itsEnableFireExtinguisher_UC = NULL;
}

void TriggerAlarm_UC::__setItsPlaceEmergencyCall(PlaceEmergencyCall* const p_PlaceEmergencyCall) {
    itsPlaceEmergencyCall = p_PlaceEmergencyCall;
    if(p_PlaceEmergencyCall != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPlaceEmergencyCall", p_PlaceEmergencyCall, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPlaceEmergencyCall");
        }
}

void TriggerAlarm_UC::_setItsPlaceEmergencyCall(PlaceEmergencyCall* const p_PlaceEmergencyCall) {
    if(itsPlaceEmergencyCall != NULL)
        {
            itsPlaceEmergencyCall->__setItsTriggerAlarm_UC(NULL);
        }
    __setItsPlaceEmergencyCall(p_PlaceEmergencyCall);
}

void TriggerAlarm_UC::_clearItsPlaceEmergencyCall(void) {
    NOTIFY_RELATION_CLEARED("itsPlaceEmergencyCall");
    itsPlaceEmergencyCall = NULL;
}

void TriggerAlarm_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Alarm_off");
        rootState_subState = Alarm_off;
        rootState_active = Alarm_off;
        //#[ state Alarm_off.(Entry) 
        alarm = false;
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus TriggerAlarm_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Alarm_off
        case Alarm_off:
        {
            if(IS_EVENT_TYPE_OF(evFireDetected_IMRPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Alarm_off");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_1");
                    pushNullTransition();
                    rootState_subState = accepteventaction_1;
                    rootState_active = accepteventaction_1;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_1");
                    NOTIFY_STATE_ENTERED("ROOT.Alarm_on");
                    pushNullTransition();
                    rootState_subState = Alarm_on;
                    rootState_active = Alarm_on;
                    //#[ state Alarm_on.(Entry) 
                    setAlarm();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Alarm_on
        case Alarm_on:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Alarm_on");
                    NOTIFY_STATE_ENTERED("ROOT.SendFireSignal");
                    rootState_subState = SendFireSignal;
                    rootState_active = SendFireSignal;
                    //#[ state SendFireSignal.(Entry) 
                    itsPlaceEmergencyCall->GEN(evFireDetected);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SendFireSignal
        case SendFireSignal:
        {
            if(IS_EVENT_TYPE_OF(evStopAlarm_IMRPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.SendFireSignal");
                    //#[ transition 4 
                    setAlarm();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    itsPlaceEmergencyCall->GEN(evStopAlarm);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Alarm_off");
                    rootState_subState = Alarm_off;
                    rootState_active = Alarm_off;
                    //#[ state Alarm_off.(Entry) 
                    alarm = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTriggerAlarm_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("alarm", x2String(myReal->alarm));
}

void OMAnimatedTriggerAlarm_UC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPlaceEmergencyCall", false, true);
    if(myReal->itsPlaceEmergencyCall)
        {
            aomsRelations->ADD_ITEM(myReal->itsPlaceEmergencyCall);
        }
    aomsRelations->addRelation("itsEnableFireExtinguisher_UC", false, true);
    if(myReal->itsEnableFireExtinguisher_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnableFireExtinguisher_UC);
        }
}

void OMAnimatedTriggerAlarm_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case TriggerAlarm_UC::Alarm_off:
        {
            Alarm_off_serializeStates(aomsState);
        }
        break;
        case TriggerAlarm_UC::accepteventaction_1:
        {
            accepteventaction_1_serializeStates(aomsState);
        }
        break;
        case TriggerAlarm_UC::Alarm_on:
        {
            Alarm_on_serializeStates(aomsState);
        }
        break;
        case TriggerAlarm_UC::SendFireSignal:
        {
            SendFireSignal_serializeStates(aomsState);
        }
        break;
        case TriggerAlarm_UC::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTriggerAlarm_UC::SendFireSignal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SendFireSignal");
}

void OMAnimatedTriggerAlarm_UC::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedTriggerAlarm_UC::Alarm_on_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Alarm_on");
}

void OMAnimatedTriggerAlarm_UC::Alarm_off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Alarm_off");
}

void OMAnimatedTriggerAlarm_UC::accepteventaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_1");
}
//#]

IMPLEMENT_REACTIVE_META_P(TriggerAlarm_UC, IMRPkg, IMRPkg, false, OMAnimatedTriggerAlarm_UC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TriggerAlarm_UC.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PlaceEmergencyCall
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PlaceEmergencyCall.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PlaceEmergencyCall.h"
//## link itsTriggerAlarm_UC
#include "TriggerAlarm_UC.h"
//#[ ignore
#define IMRPkg_PlaceEmergencyCall_PlaceEmergencyCall_SERIALIZE OM_NO_OP
//#]

//## package IMRPkg

//## class PlaceEmergencyCall
PlaceEmergencyCall::PlaceEmergencyCall(IOxfActive* const theActiveContext) : OMReactive(), Call(0), itsTriggerAlarm_UC(NULL), CallMsg("No activity") {
    NOTIFY_REACTIVE_CONSTRUCTOR(PlaceEmergencyCall, PlaceEmergencyCall(), 0, IMRPkg_PlaceEmergencyCall_PlaceEmergencyCall_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

PlaceEmergencyCall::~PlaceEmergencyCall(void) {
    NOTIFY_DESTRUCTOR(~PlaceEmergencyCall, true);
    cleanUpRelations();
}

const bool PlaceEmergencyCall::getCall(void) const {
    return Call;
}

const TriggerAlarm_UC* PlaceEmergencyCall::getItsTriggerAlarm_UC(void) const {
    return itsTriggerAlarm_UC;
}

void PlaceEmergencyCall::setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC) {
    if(p_TriggerAlarm_UC != NULL)
        {
            p_TriggerAlarm_UC->_setItsPlaceEmergencyCall(this);
        }
    _setItsTriggerAlarm_UC(p_TriggerAlarm_UC);
}

bool PlaceEmergencyCall::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PlaceEmergencyCall::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PlaceEmergencyCall::cleanUpRelations(void) {
    if(itsTriggerAlarm_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTriggerAlarm_UC");
            const PlaceEmergencyCall* p_PlaceEmergencyCall = itsTriggerAlarm_UC->getItsPlaceEmergencyCall();
            if(p_PlaceEmergencyCall != NULL)
                {
                    itsTriggerAlarm_UC->__setItsPlaceEmergencyCall(NULL);
                }
            itsTriggerAlarm_UC = NULL;
        }
}

void PlaceEmergencyCall::__setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC) {
    itsTriggerAlarm_UC = p_TriggerAlarm_UC;
    if(p_TriggerAlarm_UC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTriggerAlarm_UC", p_TriggerAlarm_UC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTriggerAlarm_UC");
        }
}

void PlaceEmergencyCall::_setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC) {
    if(itsTriggerAlarm_UC != NULL)
        {
            itsTriggerAlarm_UC->__setItsPlaceEmergencyCall(NULL);
        }
    __setItsTriggerAlarm_UC(p_TriggerAlarm_UC);
}

void PlaceEmergencyCall::_clearItsTriggerAlarm_UC(void) {
    NOTIFY_RELATION_CLEARED("itsTriggerAlarm_UC");
    itsTriggerAlarm_UC = NULL;
}

const RhpBoolean PlaceEmergencyCall::getCallMsg(void) const {
    return CallMsg;
}

void PlaceEmergencyCall::setCallMsg(const RhpBoolean p_CallMsg) {
    CallMsg = p_CallMsg;
}

void PlaceEmergencyCall::setCall(const bool p_Call) {
    Call = p_Call;
}

void PlaceEmergencyCall::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.Phone_off");
        rootState_subState = Phone_off;
        rootState_active = Phone_off;
        //#[ state Phone_off.(Entry) 
        CallMsg = "No outgoing calls";
        Call = false;
        //#]
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus PlaceEmergencyCall::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Phone_off
        case Phone_off:
        {
            if(IS_EVENT_TYPE_OF(evFireDetected_IMRPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Phone_off");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_3");
                    pushNullTransition();
                    rootState_subState = accepteventaction_3;
                    rootState_active = accepteventaction_3;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Phone_InUse
        case Phone_InUse:
        {
            if(IS_EVENT_TYPE_OF(evStopAlarm_IMRPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Phone_InUse");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_4");
                    pushNullTransition();
                    rootState_subState = accepteventaction_4;
                    rootState_active = accepteventaction_4;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.Phone_InUse");
                    rootState_subState = Phone_InUse;
                    rootState_active = Phone_InUse;
                    //#[ state Phone_InUse.(Entry) 
                    Call = true; 
                    CallMsg = "Caling Emergency Services";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Phone_off");
                    rootState_subState = Phone_off;
                    rootState_active = Phone_off;
                    //#[ state Phone_off.(Entry) 
                    CallMsg = "No outgoing calls";
                    Call = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
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
void OMAnimatedPlaceEmergencyCall::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Call", x2String(myReal->Call));
    aomsAttributes->addAttribute("CallMsg", x2String(myReal->CallMsg));
}

void OMAnimatedPlaceEmergencyCall::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTriggerAlarm_UC", false, true);
    if(myReal->itsTriggerAlarm_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsTriggerAlarm_UC);
        }
}

void OMAnimatedPlaceEmergencyCall::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PlaceEmergencyCall::Phone_off:
        {
            Phone_off_serializeStates(aomsState);
        }
        break;
        case PlaceEmergencyCall::Phone_InUse:
        {
            Phone_InUse_serializeStates(aomsState);
        }
        break;
        case PlaceEmergencyCall::accepteventaction_3:
        {
            accepteventaction_3_serializeStates(aomsState);
        }
        break;
        case PlaceEmergencyCall::accepteventaction_4:
        {
            accepteventaction_4_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPlaceEmergencyCall::Phone_off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Phone_off");
}

void OMAnimatedPlaceEmergencyCall::Phone_InUse_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Phone_InUse");
}

void OMAnimatedPlaceEmergencyCall::accepteventaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_4");
}

void OMAnimatedPlaceEmergencyCall::accepteventaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_3");
}
//#]

IMPLEMENT_REACTIVE_META_P(PlaceEmergencyCall, IMRPkg, IMRPkg, false, OMAnimatedPlaceEmergencyCall)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PlaceEmergencyCall.cpp
*********************************************************************/

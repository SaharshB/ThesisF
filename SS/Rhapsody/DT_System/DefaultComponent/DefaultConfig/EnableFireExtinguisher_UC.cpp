/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EnableFireExtinguisher_UC
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\EnableFireExtinguisher_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "EnableFireExtinguisher_UC.h"
//## link itsDetectFire_UC
#include "DetectFire_UC.h"
//## link itsTriggerAlarm_UC
#include "TriggerAlarm_UC.h"
//#[ ignore
#define IMRPkg_EnableFireExtinguisher_UC_EnableFireExtinguisher_UC_SERIALIZE OM_NO_OP

#define IMRPkg_EnableFireExtinguisher_UC_enableExtinguisher_SERIALIZE OM_NO_OP
//#]

//## package IMRPkg

//## class EnableFireExtinguisher_UC
EnableFireExtinguisher_UC::EnableFireExtinguisher_UC(IOxfActive* const theActiveContext) : OMReactive(), Extinguisher(0), itsDetectFire_UC(NULL), itsTriggerAlarm_UC(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(EnableFireExtinguisher_UC, EnableFireExtinguisher_UC(), 0, IMRPkg_EnableFireExtinguisher_UC_EnableFireExtinguisher_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

EnableFireExtinguisher_UC::~EnableFireExtinguisher_UC(void) {
    NOTIFY_DESTRUCTOR(~EnableFireExtinguisher_UC, true);
    cleanUpRelations();
}

bool EnableFireExtinguisher_UC::enableExtinguisher(void) {
    NOTIFY_OPERATION(enableExtinguisher, enableExtinguisher(), 0, IMRPkg_EnableFireExtinguisher_UC_enableExtinguisher_SERIALIZE);
    //#[ operation enableExtinguisher()
    if (Extinguisher == false)  {
    	Extinguisher = true; 
    	}
    else{
    	Extinguisher = false;
    	}
    return Extinguisher;
    
    //#]
}

const bool EnableFireExtinguisher_UC::getExtinguisher(void) const {
    return Extinguisher;
}

const DetectFire_UC* EnableFireExtinguisher_UC::getItsDetectFire_UC(void) const {
    return itsDetectFire_UC;
}

void EnableFireExtinguisher_UC::setItsDetectFire_UC(DetectFire_UC* const p_DetectFire_UC) {
    if(p_DetectFire_UC != NULL)
        {
            p_DetectFire_UC->_setItsEnableFireExtinguisher_UC(this);
        }
    _setItsDetectFire_UC(p_DetectFire_UC);
}

const TriggerAlarm_UC* EnableFireExtinguisher_UC::getItsTriggerAlarm_UC(void) const {
    return itsTriggerAlarm_UC;
}

void EnableFireExtinguisher_UC::setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC) {
    if(p_TriggerAlarm_UC != NULL)
        {
            p_TriggerAlarm_UC->_setItsEnableFireExtinguisher_UC(this);
        }
    _setItsTriggerAlarm_UC(p_TriggerAlarm_UC);
}

bool EnableFireExtinguisher_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void EnableFireExtinguisher_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void EnableFireExtinguisher_UC::cleanUpRelations(void) {
    if(itsDetectFire_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDetectFire_UC");
            const EnableFireExtinguisher_UC* p_EnableFireExtinguisher_UC = itsDetectFire_UC->getItsEnableFireExtinguisher_UC();
            if(p_EnableFireExtinguisher_UC != NULL)
                {
                    itsDetectFire_UC->__setItsEnableFireExtinguisher_UC(NULL);
                }
            itsDetectFire_UC = NULL;
        }
    if(itsTriggerAlarm_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTriggerAlarm_UC");
            const EnableFireExtinguisher_UC* p_EnableFireExtinguisher_UC = itsTriggerAlarm_UC->getItsEnableFireExtinguisher_UC();
            if(p_EnableFireExtinguisher_UC != NULL)
                {
                    itsTriggerAlarm_UC->__setItsEnableFireExtinguisher_UC(NULL);
                }
            itsTriggerAlarm_UC = NULL;
        }
}

void EnableFireExtinguisher_UC::__setItsDetectFire_UC(DetectFire_UC* const p_DetectFire_UC) {
    itsDetectFire_UC = p_DetectFire_UC;
    if(p_DetectFire_UC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDetectFire_UC", p_DetectFire_UC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDetectFire_UC");
        }
}

void EnableFireExtinguisher_UC::_setItsDetectFire_UC(DetectFire_UC* const p_DetectFire_UC) {
    if(itsDetectFire_UC != NULL)
        {
            itsDetectFire_UC->__setItsEnableFireExtinguisher_UC(NULL);
        }
    __setItsDetectFire_UC(p_DetectFire_UC);
}

void EnableFireExtinguisher_UC::_clearItsDetectFire_UC(void) {
    NOTIFY_RELATION_CLEARED("itsDetectFire_UC");
    itsDetectFire_UC = NULL;
}

void EnableFireExtinguisher_UC::__setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC) {
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

void EnableFireExtinguisher_UC::_setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC) {
    if(itsTriggerAlarm_UC != NULL)
        {
            itsTriggerAlarm_UC->__setItsEnableFireExtinguisher_UC(NULL);
        }
    __setItsTriggerAlarm_UC(p_TriggerAlarm_UC);
}

void EnableFireExtinguisher_UC::_clearItsTriggerAlarm_UC(void) {
    NOTIFY_RELATION_CLEARED("itsTriggerAlarm_UC");
    itsTriggerAlarm_UC = NULL;
}

void EnableFireExtinguisher_UC::setExtinguisher(const bool p_Extinguisher) {
    Extinguisher = p_Extinguisher;
}

void EnableFireExtinguisher_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus EnableFireExtinguisher_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case FireDetection:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.FireDetection");
                    NOTIFY_STATE_ENTERED("ROOT.Extinguisher_Enabled");
                    pushNullTransition();
                    rootState_subState = Extinguisher_Enabled;
                    rootState_active = Extinguisher_Enabled;
                    //#[ state Extinguisher_Enabled.(Entry) 
                     enableExtinguisher();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evFireDetected_IMRPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.FireDetection");
                    pushNullTransition();
                    rootState_subState = FireDetection;
                    rootState_active = FireDetection;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Extinguisher_Enabled
        case Extinguisher_Enabled:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Extinguisher_Enabled");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                    rootState_subState = sendaction_3;
                    rootState_active = sendaction_3;
                    //#[ state sendaction_3.(Entry) 
                    itsTriggerAlarm_UC->GEN(evFireDetected);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(evStopExtinguisher_IMRPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    //#[ transition 4 
                    enableExtinguisher();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    itsDetectFire_UC->GEN(evStopExtinguisher);
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
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
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
void OMAnimatedEnableFireExtinguisher_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Extinguisher", x2String(myReal->Extinguisher));
}

void OMAnimatedEnableFireExtinguisher_UC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTriggerAlarm_UC", false, true);
    if(myReal->itsTriggerAlarm_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsTriggerAlarm_UC);
        }
    aomsRelations->addRelation("itsDetectFire_UC", false, true);
    if(myReal->itsDetectFire_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsDetectFire_UC);
        }
}

void OMAnimatedEnableFireExtinguisher_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case EnableFireExtinguisher_UC::FireDetection:
        {
            FireDetection_serializeStates(aomsState);
        }
        break;
        case EnableFireExtinguisher_UC::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case EnableFireExtinguisher_UC::Extinguisher_Enabled:
        {
            Extinguisher_Enabled_serializeStates(aomsState);
        }
        break;
        case EnableFireExtinguisher_UC::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        case EnableFireExtinguisher_UC::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedEnableFireExtinguisher_UC::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedEnableFireExtinguisher_UC::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedEnableFireExtinguisher_UC::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedEnableFireExtinguisher_UC::FireDetection_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FireDetection");
}

void OMAnimatedEnableFireExtinguisher_UC::Extinguisher_Enabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Extinguisher_Enabled");
}
//#]

IMPLEMENT_REACTIVE_META_P(EnableFireExtinguisher_UC, IMRPkg, IMRPkg, false, OMAnimatedEnableFireExtinguisher_UC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EnableFireExtinguisher_UC.cpp
*********************************************************************/

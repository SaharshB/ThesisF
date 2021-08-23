/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DetectFire_UC
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\DetectFire_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "DetectFire_UC.h"
//## link itsEnableFireExtinguisher_UC
#include "EnableFireExtinguisher_UC.h"
//#[ ignore
#define IMRPkg_DetectFire_UC_DetectFire_UC_SERIALIZE OM_NO_OP

#define IMRPkg_DetectFire_UC_evSetFire_SERIALIZE OM_NO_OP

#define OMAnim_IMRPkg_DetectFire_UC_setCall_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Call)

#define OMAnim_IMRPkg_DetectFire_UC_setCall_int_SERIALIZE_RET_VAL

#define OMAnim_IMRPkg_DetectFire_UC_setExtinguisher_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Extinguisher)

#define OMAnim_IMRPkg_DetectFire_UC_setExtinguisher_int_SERIALIZE_RET_VAL

#define OMAnim_IMRPkg_DetectFire_UC_setAlarm_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alarm)

#define OMAnim_IMRPkg_DetectFire_UC_setAlarm_int_SERIALIZE_RET_VAL

#define OMAnim_IMRPkg_DetectFire_UC_setFire_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_fire)

#define OMAnim_IMRPkg_DetectFire_UC_setFire_int_SERIALIZE_RET_VAL
//#]

//## package IMRPkg

//## class DetectFire_UC
//#[ ignore
DetectFire_UC::fire_SP_C::fire_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

DetectFire_UC::fire_SP_C::~fire_SP_C(void) {
    cleanUpRelations();
}

void DetectFire_UC::fire_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* DetectFire_UC::fire_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* DetectFire_UC::fire_SP_C::getOutBound(void) {
    return this;
}

void DetectFire_UC::fire_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void DetectFire_UC::fire_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

DetectFire_UC::Extinguisher_SP_C::Extinguisher_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

DetectFire_UC::Extinguisher_SP_C::~Extinguisher_SP_C(void) {
    cleanUpRelations();
}

void DetectFire_UC::Extinguisher_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* DetectFire_UC::Extinguisher_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* DetectFire_UC::Extinguisher_SP_C::getOutBound(void) {
    return this;
}

void DetectFire_UC::Extinguisher_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void DetectFire_UC::Extinguisher_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

DetectFire_UC::Call_SP_C::Call_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

DetectFire_UC::Call_SP_C::~Call_SP_C(void) {
    cleanUpRelations();
}

void DetectFire_UC::Call_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* DetectFire_UC::Call_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* DetectFire_UC::Call_SP_C::getOutBound(void) {
    return this;
}

void DetectFire_UC::Call_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void DetectFire_UC::Call_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

DetectFire_UC::alarm_SP_C::alarm_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

DetectFire_UC::alarm_SP_C::~alarm_SP_C(void) {
    cleanUpRelations();
}

void DetectFire_UC::alarm_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* DetectFire_UC::alarm_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* DetectFire_UC::alarm_SP_C::getOutBound(void) {
    return this;
}

void DetectFire_UC::alarm_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void DetectFire_UC::alarm_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

DetectFire_UC::DetectFire_UC(IOxfActive* const theActiveContext) : OMReactive(), fire(0), itsEnableFireExtinguisher_UC(NULL), Call(0), Extinguisher(0), alarm(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DetectFire_UC, DetectFire_UC(), 0, IMRPkg_DetectFire_UC_DetectFire_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

DetectFire_UC::~DetectFire_UC(void) {
    NOTIFY_DESTRUCTOR(~DetectFire_UC, true);
    cleanUpRelations();
}

DetectFire_UC::fire_SP_C* DetectFire_UC::getFire_SP(void) const {
    return (DetectFire_UC::fire_SP_C*) &fire_SP;
}

const int DetectFire_UC::getFire(void) const {
    return fire;
}

const EnableFireExtinguisher_UC* DetectFire_UC::getItsEnableFireExtinguisher_UC(void) const {
    return itsEnableFireExtinguisher_UC;
}

void DetectFire_UC::setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC) {
    if(p_EnableFireExtinguisher_UC != NULL)
        {
            p_EnableFireExtinguisher_UC->_setItsDetectFire_UC(this);
        }
    _setItsEnableFireExtinguisher_UC(p_EnableFireExtinguisher_UC);
}

bool DetectFire_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DetectFire_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void DetectFire_UC::cleanUpRelations(void) {
    if(itsEnableFireExtinguisher_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnableFireExtinguisher_UC");
            const DetectFire_UC* p_DetectFire_UC = itsEnableFireExtinguisher_UC->getItsDetectFire_UC();
            if(p_DetectFire_UC != NULL)
                {
                    itsEnableFireExtinguisher_UC->__setItsDetectFire_UC(NULL);
                }
            itsEnableFireExtinguisher_UC = NULL;
        }
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE 
#undef OM_SER_RET
#define OM_SER_RET(val) 
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


void DetectFire_UC::evSetFire(void) {
    NOTIFY_TRIGGERED_OPERATION(evSetFire, evSetFire(), 0, IMRPkg_DetectFire_UC_evSetFire_SERIALIZE);
    evSetFire_DetectFire_UC_Event triggerEvent;
    (void) handleTrigger(&triggerEvent);
    OM_RETURN_VOID;
}

void DetectFire_UC::__setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC) {
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

void DetectFire_UC::_setItsEnableFireExtinguisher_UC(EnableFireExtinguisher_UC* const p_EnableFireExtinguisher_UC) {
    if(itsEnableFireExtinguisher_UC != NULL)
        {
            itsEnableFireExtinguisher_UC->__setItsDetectFire_UC(NULL);
        }
    __setItsEnableFireExtinguisher_UC(p_EnableFireExtinguisher_UC);
}

void DetectFire_UC::_clearItsEnableFireExtinguisher_UC(void) {
    NOTIFY_RELATION_CLEARED("itsEnableFireExtinguisher_UC");
    itsEnableFireExtinguisher_UC = NULL;
}

const RhpString DetectFire_UC::getWarningMessage(void) const {
    return WarningMessage;
}

void DetectFire_UC::setWarningMessage(const RhpString p_WarningMessage) {
    WarningMessage = p_WarningMessage;
    NOTIFY_SET_OPERATION;
}

//#[ ignore
void DetectFire_UC::setAlarm(int p_alarm) {
    if (alarm != p_alarm)  {
        alarm = p_alarm;
        FLOW_DATA_SEND(alarm, alarm_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void DetectFire_UC::setCall(int p_Call) {
    if (Call != p_Call)  {
        Call = p_Call;
        FLOW_DATA_SEND(Call, Call_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void DetectFire_UC::setExtinguisher(int p_Extinguisher) {
    if (Extinguisher != p_Extinguisher)  {
        Extinguisher = p_Extinguisher;
        FLOW_DATA_SEND(Extinguisher, Extinguisher_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void DetectFire_UC::setFire(int p_fire) {
    if (fire != p_fire)  {
        fire = p_fire;
        FLOW_DATA_SEND(fire, fire_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}
//#]

DetectFire_UC::fire_SP_C* DetectFire_UC::get_fire_SP(void) const {
    return (DetectFire_UC::fire_SP_C*) &fire_SP;
}

DetectFire_UC::Extinguisher_SP_C* DetectFire_UC::getExtinguisher_SP(void) const {
    return (DetectFire_UC::Extinguisher_SP_C*) &Extinguisher_SP;
}

DetectFire_UC::Extinguisher_SP_C* DetectFire_UC::get_Extinguisher_SP(void) const {
    return (DetectFire_UC::Extinguisher_SP_C*) &Extinguisher_SP;
}

DetectFire_UC::Call_SP_C* DetectFire_UC::getCall_SP(void) const {
    return (DetectFire_UC::Call_SP_C*) &Call_SP;
}

DetectFire_UC::Call_SP_C* DetectFire_UC::get_Call_SP(void) const {
    return (DetectFire_UC::Call_SP_C*) &Call_SP;
}

DetectFire_UC::alarm_SP_C* DetectFire_UC::getAlarm_SP(void) const {
    return (DetectFire_UC::alarm_SP_C*) &alarm_SP;
}

DetectFire_UC::alarm_SP_C* DetectFire_UC::get_alarm_SP(void) const {
    return (DetectFire_UC::alarm_SP_C*) &alarm_SP;
}

const int DetectFire_UC::getCall(void) const {
    return Call;
}

const int DetectFire_UC::getExtinguisher(void) const {
    return Extinguisher;
}

const int DetectFire_UC::getAlarm(void) const {
    return alarm;
}

void DetectFire_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        //#[ state Idle.(Entry) 
        WarningMessage = "What a beautiful day for a meeting :)";
        
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DetectFire_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evFireDetected_IMRPkg_id) == 1)
                {
                    //## transition 1 
                    if(fire == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.Idle");
                            NOTIFY_STATE_ENTERED("ROOT.FireDetected");
                            rootState_subState = FireDetected;
                            rootState_active = FireDetected;
                            //#[ state FireDetected.(Entry) 
                            WarningMessage = "FIRE save yourselves :/";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State FireDetected
        case FireDetected:
        {
            if(IS_EVENT_TYPE_OF(evFireDetected_IMRPkg_id) == 1)
                {
                    //## transition 2 
                    if(fire == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.FireDetected");
                            NOTIFY_STATE_ENTERED("ROOT.Idle");
                            rootState_subState = Idle;
                            rootState_active = Idle;
                            //#[ state Idle.(Entry) 
                            WarningMessage = "What a beautiful day for a meeting :)";
                            
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
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
void OMAnimatedDetectFire_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("fire", x2String(myReal->fire));
    aomsAttributes->addAttribute("WarningMessage", x2String(myReal->WarningMessage));
    aomsAttributes->addAttribute("Extinguisher", x2String(myReal->Extinguisher));
    aomsAttributes->addAttribute("Call", x2String(myReal->Call));
    aomsAttributes->addAttribute("alarm", x2String(myReal->alarm));
}

void OMAnimatedDetectFire_UC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEnableFireExtinguisher_UC", false, true);
    if(myReal->itsEnableFireExtinguisher_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnableFireExtinguisher_UC);
        }
}

void OMAnimatedDetectFire_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DetectFire_UC::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case DetectFire_UC::FireDetected:
        {
            FireDetected_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDetectFire_UC::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedDetectFire_UC::FireDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FireDetected");
}
//#]

IMPLEMENT_REACTIVE_META_P(DetectFire_UC, IMRPkg, IMRPkg, false, OMAnimatedDetectFire_UC)

IMPLEMENT_META_OP(OMAnimatedDetectFire_UC, IMRPkg_DetectFire_UC_setCall_int, "setCall", FALSE, "setCall(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_DetectFire_UC_setCall_int, DetectFire_UC, setCall(p_Call), NO_OP())

IMPLEMENT_META_OP(OMAnimatedDetectFire_UC, IMRPkg_DetectFire_UC_setExtinguisher_int, "setExtinguisher", FALSE, "setExtinguisher(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_DetectFire_UC_setExtinguisher_int, DetectFire_UC, setExtinguisher(p_Extinguisher), NO_OP())

IMPLEMENT_META_OP(OMAnimatedDetectFire_UC, IMRPkg_DetectFire_UC_setAlarm_int, "setAlarm", FALSE, "setAlarm(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_DetectFire_UC_setAlarm_int, DetectFire_UC, setAlarm(p_alarm), NO_OP())

IMPLEMENT_META_OP(OMAnimatedDetectFire_UC, IMRPkg_DetectFire_UC_setFire_int, "setFire", FALSE, "setFire(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_DetectFire_UC_setFire_int, DetectFire_UC, setFire(p_fire), NO_OP())
#endif // _OMINSTRUMENT

//#[ ignore
evSetFire_DetectFire_UC_Event::evSetFire_DetectFire_UC_Event(void) {
    setId(evSetFire_DetectFire_UC_Event_id);
}

const IOxfEvent::ID evSetFire_DetectFire_UC_Event::evSetFire_DetectFire_UC_Event_id(31000);
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DetectFire_UC.cpp
*********************************************************************/

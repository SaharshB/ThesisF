/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: PINCode_UC
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\PINCode_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PINCode_UC.h"
//## link itsLightControl_UC
#include "LightControl_UC.h"
//#[ ignore
#define IMRPkg_PINCode_UC_PINCode_UC_SERIALIZE OM_NO_OP
//#]

//## package IMRPkg

//## class PINCode_UC
//#[ ignore
PINCode_UC::userCode_SP_C::userCode_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

PINCode_UC::userCode_SP_C::~userCode_SP_C(void) {
    cleanUpRelations();
}

void PINCode_UC::userCode_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* PINCode_UC::userCode_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* PINCode_UC::userCode_SP_C::getOutBound(void) {
    return this;
}

void PINCode_UC::userCode_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void PINCode_UC::userCode_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

PINCode_UC::Door_SP_C::Door_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

PINCode_UC::Door_SP_C::~Door_SP_C(void) {
    cleanUpRelations();
}

void PINCode_UC::Door_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void PINCode_UC::Door_SP_C::connectPINCode_UC(PINCode_UC* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* PINCode_UC::Door_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void PINCode_UC::Door_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void PINCode_UC::Door_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

PINCode_UC::PINCode_UC(IOxfActive* const theActiveContext) : OMReactive(), intFlowInterface(), InteriorLightIntensity(0), userCode(2468), verification(0), itsLightControl_UC(NULL), Door(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PINCode_UC, PINCode_UC(), 0, IMRPkg_PINCode_UC_PINCode_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

PINCode_UC::~PINCode_UC(void) {
    NOTIFY_DESTRUCTOR(~PINCode_UC, true);
    cleanUpRelations();
    cancelTimeouts();
}

PINCode_UC::userCode_SP_C* PINCode_UC::getUserCode_SP(void) const {
    return (PINCode_UC::userCode_SP_C*) &userCode_SP;
}

PINCode_UC::Door_SP_C* PINCode_UC::getDoor_SP(void) const {
    return (PINCode_UC::Door_SP_C*) &Door_SP;
}

const int PINCode_UC::getInteriorLightIntensity(void) const {
    return InteriorLightIntensity;
}

void PINCode_UC::setInteriorLightIntensity(const int p_InteriorLightIntensity) {
    InteriorLightIntensity = p_InteriorLightIntensity;
}

const int PINCode_UC::getUserCode(void) const {
    return userCode;
}

const int PINCode_UC::getDoor(void) const {
    return Door;
}

const int PINCode_UC::getVerification(void) const {
    return verification;
}

void PINCode_UC::setVerification(const int p_verification) {
    verification = p_verification;
}

const LightControl_UC* PINCode_UC::getItsLightControl_UC(void) const {
    return itsLightControl_UC;
}

void PINCode_UC::setItsLightControl_UC(LightControl_UC* const p_LightControl_UC) {
    if(p_LightControl_UC != NULL)
        {
            p_LightControl_UC->_setItsPINCode_UC(this);
        }
    _setItsLightControl_UC(p_LightControl_UC);
}

bool PINCode_UC::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool PINCode_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PINCode_UC::initRelations(void) {
    if (get_Door_SP() != NULL) {
        get_Door_SP()->connectPINCode_UC(this);
    }
}

void PINCode_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void PINCode_UC::cleanUpRelations(void) {
    if(itsLightControl_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLightControl_UC");
            const PINCode_UC* p_PINCode_UC = itsLightControl_UC->getItsPINCode_UC();
            if(p_PINCode_UC != NULL)
                {
                    itsLightControl_UC->__setItsPINCode_UC(NULL);
                }
            itsLightControl_UC = NULL;
        }
}

void PINCode_UC::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void PINCode_UC::__setItsLightControl_UC(LightControl_UC* const p_LightControl_UC) {
    itsLightControl_UC = p_LightControl_UC;
    if(p_LightControl_UC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLightControl_UC", p_LightControl_UC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLightControl_UC");
        }
}

void PINCode_UC::_setItsLightControl_UC(LightControl_UC* const p_LightControl_UC) {
    if(itsLightControl_UC != NULL)
        {
            itsLightControl_UC->__setItsPINCode_UC(NULL);
        }
    __setItsLightControl_UC(p_LightControl_UC);
}

void PINCode_UC::_clearItsLightControl_UC(void) {
    NOTIFY_RELATION_CLEARED("itsLightControl_UC");
    itsLightControl_UC = NULL;
}

const RhpString PINCode_UC::getDisplayStatus(void) const {
    return DisplayStatus;
}

void PINCode_UC::setDisplayStatus(const RhpString p_DisplayStatus) {
    DisplayStatus = p_DisplayStatus;
}

//#[ ignore
void PINCode_UC::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_Door_SP()) {
        setDoor(data);
    }
}

void PINCode_UC::setDoor(int p_Door) {
    if (Door != p_Door) {
        Door = p_Door;
        FLOW_DATA_RECEIVE("Door", Door, x2String);
    }
    
}

void PINCode_UC::setUserCode(int p_userCode) {
    if (userCode != p_userCode)  {
        userCode = p_userCode;
        FLOW_DATA_SEND(userCode, userCode_SP, SetValue, x2String);
    }
}
//#]

PINCode_UC::userCode_SP_C* PINCode_UC::get_userCode_SP(void) const {
    return (PINCode_UC::userCode_SP_C*) &userCode_SP;
}

PINCode_UC::Door_SP_C* PINCode_UC::get_Door_SP(void) const {
    return (PINCode_UC::Door_SP_C*) &Door_SP;
}

void PINCode_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Door_Closed");
        rootState_subState = Door_Closed;
        rootState_active = Door_Closed;
        //#[ state Door_Closed.(Entry) 
        DisplayStatus = "Please type in the access code";
        
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PINCode_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Door_Closed
        case Door_Closed:
        {
            if(IS_EVENT_TYPE_OF(evReqAccess_IMRPkg_id) == 1)
                {
                    //## transition 3 
                    if(Door == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.Door_Closed");
                            NOTIFY_STATE_ENTERED("ROOT.Door_Open");
                            rootState_subState = Door_Open;
                            rootState_active = Door_Open;
                            //#[ state Door_Open.(Entry) 
                            
                            DisplayStatus = "PIN accepted, door is unlocked";       
                            Door = 1;
                            //#]
                            rootState_timeout = scheduleTimeout(4000, "ROOT.Door_Open");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Door_Open
        case Door_Open:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Door_Open");
                            NOTIFY_STATE_ENTERED("ROOT.state_5");
                            rootState_subState = state_5;
                            rootState_active = state_5;
                            //#[ state state_5.(Entry) 
                            DisplayStatus = "Door is closing";
                            
                            //#]
                            rootState_timeout = scheduleTimeout(1000, "ROOT.state_5");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State state_5
        case state_5:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_5");
                            NOTIFY_STATE_ENTERED("ROOT.Door_Closed");
                            rootState_subState = Door_Closed;
                            rootState_active = Door_Closed;
                            //#[ state Door_Closed.(Entry) 
                            DisplayStatus = "Please type in the access code";
                            
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
void OMAnimatedPINCode_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("userCode", x2String(myReal->userCode));
    aomsAttributes->addAttribute("InteriorLightIntensity", x2String(myReal->InteriorLightIntensity));
    aomsAttributes->addAttribute("verification", x2String(myReal->verification));
    aomsAttributes->addAttribute("Door", x2String(myReal->Door));
    aomsAttributes->addAttribute("DisplayStatus", x2String(myReal->DisplayStatus));
}

void OMAnimatedPINCode_UC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLightControl_UC", false, true);
    if(myReal->itsLightControl_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsLightControl_UC);
        }
}

void OMAnimatedPINCode_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PINCode_UC::Door_Closed:
        {
            Door_Closed_serializeStates(aomsState);
        }
        break;
        case PINCode_UC::Door_Open:
        {
            Door_Open_serializeStates(aomsState);
        }
        break;
        case PINCode_UC::state_5:
        {
            state_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPINCode_UC::state_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_5");
}

void OMAnimatedPINCode_UC::Door_Open_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Door_Open");
}

void OMAnimatedPINCode_UC::Door_Closed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Door_Closed");
}
//#]

IMPLEMENT_REACTIVE_META_P(PINCode_UC, IMRPkg, IMRPkg, false, OMAnimatedPINCode_UC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\PINCode_UC.cpp
*********************************************************************/

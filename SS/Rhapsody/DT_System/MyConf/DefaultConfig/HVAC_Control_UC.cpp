/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_Control_UC
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\HVAC_Control_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "HVAC_Control_UC.h"
//## link itsLightControl_UC
#include "LightControl_UC.h"
//#[ ignore
#define IMRPkg_HVAC_Control_UC_HVAC_Control_UC_SERIALIZE OM_NO_OP

#define IMRPkg_HVAC_Control_UC_setTemp_SERIALIZE OM_NO_OP

#define OMAnim_IMRPkg_HVAC_Control_UC_setStateHVAC_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_StateHVAC)

#define OMAnim_IMRPkg_HVAC_Control_UC_setStateHVAC_int_SERIALIZE_RET_VAL

#define OMAnim_IMRPkg_HVAC_Control_UC_setTemperature_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_temperature)

#define OMAnim_IMRPkg_HVAC_Control_UC_setTemperature_int_SERIALIZE_RET_VAL
//#]

//## package IMRPkg

//## class HVAC_Control_UC
//#[ ignore
HVAC_Control_UC::FanSpeed_SP_C::FanSpeed_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

HVAC_Control_UC::FanSpeed_SP_C::~FanSpeed_SP_C(void) {
    cleanUpRelations();
}

void HVAC_Control_UC::FanSpeed_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* HVAC_Control_UC::FanSpeed_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* HVAC_Control_UC::FanSpeed_SP_C::getOutBound(void) {
    return this;
}

void HVAC_Control_UC::FanSpeed_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void HVAC_Control_UC::FanSpeed_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

HVAC_Control_UC::StateHVAC_SP_C::StateHVAC_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

HVAC_Control_UC::StateHVAC_SP_C::~StateHVAC_SP_C(void) {
    cleanUpRelations();
}

void HVAC_Control_UC::StateHVAC_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* HVAC_Control_UC::StateHVAC_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* HVAC_Control_UC::StateHVAC_SP_C::getOutBound(void) {
    return this;
}

void HVAC_Control_UC::StateHVAC_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void HVAC_Control_UC::StateHVAC_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

HVAC_Control_UC::temperature_SP_C::temperature_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

HVAC_Control_UC::temperature_SP_C::~temperature_SP_C(void) {
    cleanUpRelations();
}

void HVAC_Control_UC::temperature_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* HVAC_Control_UC::temperature_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* HVAC_Control_UC::temperature_SP_C::getOutBound(void) {
    return this;
}

void HVAC_Control_UC::temperature_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void HVAC_Control_UC::temperature_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

HVAC_Control_UC::HVAC_Control_UC(IOxfActive* const theActiveContext) : OMReactive(), FanSpeed(0), StateHVAC(0), temperature(10), itsLightControl_UC(NULL), itsLightControl_UC_1(NULL), Msg("HVAC is Off") {
    NOTIFY_REACTIVE_CONSTRUCTOR(HVAC_Control_UC, HVAC_Control_UC(), 0, IMRPkg_HVAC_Control_UC_HVAC_Control_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

HVAC_Control_UC::~HVAC_Control_UC(void) {
    NOTIFY_DESTRUCTOR(~HVAC_Control_UC, true);
    cleanUpRelations();
}

int HVAC_Control_UC::setTemp(void) {
    NOTIFY_OPERATION(setTemp, setTemp(), 0, IMRPkg_HVAC_Control_UC_setTemp_SERIALIZE);
    //#[ operation setTemp()
    if (StateHVAC == 1){
    	temperature = temperature;
    	}
    else{
    	temperature = 0;
    	}	
    return temperature;	
    //#]
}

HVAC_Control_UC::FanSpeed_SP_C* HVAC_Control_UC::getFanSpeed_SP(void) const {
    return (HVAC_Control_UC::FanSpeed_SP_C*) &FanSpeed_SP;
}

HVAC_Control_UC::FanSpeed_SP_C* HVAC_Control_UC::get_FanSpeed_SP(void) const {
    return (HVAC_Control_UC::FanSpeed_SP_C*) &FanSpeed_SP;
}

const int HVAC_Control_UC::getFanSpeed(void) const {
    return FanSpeed;
}

const LightControl_UC* HVAC_Control_UC::getItsLightControl_UC(void) const {
    return itsLightControl_UC;
}

void HVAC_Control_UC::setItsLightControl_UC(LightControl_UC* const p_LightControl_UC) {
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

bool HVAC_Control_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void HVAC_Control_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void HVAC_Control_UC::cleanUpRelations(void) {
    if(itsLightControl_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLightControl_UC");
            itsLightControl_UC = NULL;
        }
    if(itsLightControl_UC_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLightControl_UC_1");
            const HVAC_Control_UC* p_HVAC_Control_UC = itsLightControl_UC_1->getItsHVAC_Control_UC();
            if(p_HVAC_Control_UC != NULL)
                {
                    itsLightControl_UC_1->__setItsHVAC_Control_UC(NULL);
                }
            itsLightControl_UC_1 = NULL;
        }
}

const LightControl_UC* HVAC_Control_UC::getItsLightControl_UC_1(void) const {
    return itsLightControl_UC_1;
}

void HVAC_Control_UC::setItsLightControl_UC_1(LightControl_UC* const p_LightControl_UC) {
    if(p_LightControl_UC != NULL)
        {
            p_LightControl_UC->_setItsHVAC_Control_UC(this);
        }
    _setItsLightControl_UC_1(p_LightControl_UC);
}

void HVAC_Control_UC::__setItsLightControl_UC_1(LightControl_UC* const p_LightControl_UC) {
    itsLightControl_UC_1 = p_LightControl_UC;
    if(p_LightControl_UC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLightControl_UC_1", p_LightControl_UC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLightControl_UC_1");
        }
}

void HVAC_Control_UC::_setItsLightControl_UC_1(LightControl_UC* const p_LightControl_UC) {
    if(itsLightControl_UC_1 != NULL)
        {
            itsLightControl_UC_1->__setItsHVAC_Control_UC(NULL);
        }
    __setItsLightControl_UC_1(p_LightControl_UC);
}

void HVAC_Control_UC::_clearItsLightControl_UC_1(void) {
    NOTIFY_RELATION_CLEARED("itsLightControl_UC_1");
    itsLightControl_UC_1 = NULL;
}

//#[ ignore
void HVAC_Control_UC::setFanSpeed(int p_FanSpeed) {
    if (FanSpeed != p_FanSpeed)  {
        FanSpeed = p_FanSpeed;
        FLOW_DATA_SEND(FanSpeed, FanSpeed_SP, SetValue, x2String);
    }
}

void HVAC_Control_UC::setStateHVAC(int p_StateHVAC) {
    if (StateHVAC != p_StateHVAC)  {
        StateHVAC = p_StateHVAC;
        FLOW_DATA_SEND(StateHVAC, StateHVAC_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void HVAC_Control_UC::setTemperature(int p_temperature) {
    if (temperature != p_temperature)  {
        temperature = p_temperature;
        FLOW_DATA_SEND(temperature, temperature_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}
//#]

HVAC_Control_UC::StateHVAC_SP_C* HVAC_Control_UC::getStateHVAC_SP(void) const {
    return (HVAC_Control_UC::StateHVAC_SP_C*) &StateHVAC_SP;
}

HVAC_Control_UC::StateHVAC_SP_C* HVAC_Control_UC::get_StateHVAC_SP(void) const {
    return (HVAC_Control_UC::StateHVAC_SP_C*) &StateHVAC_SP;
}

HVAC_Control_UC::temperature_SP_C* HVAC_Control_UC::getTemperature_SP(void) const {
    return (HVAC_Control_UC::temperature_SP_C*) &temperature_SP;
}

HVAC_Control_UC::temperature_SP_C* HVAC_Control_UC::get_temperature_SP(void) const {
    return (HVAC_Control_UC::temperature_SP_C*) &temperature_SP;
}

const RhpString HVAC_Control_UC::getMsg(void) const {
    return Msg;
}

void HVAC_Control_UC::setMsg(const RhpString p_Msg) {
    Msg = p_Msg;
    NOTIFY_SET_OPERATION;
}

const int HVAC_Control_UC::getStateHVAC(void) const {
    return StateHVAC;
}

const int HVAC_Control_UC::getTemperature(void) const {
    return temperature;
}

void HVAC_Control_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.HVAC_off");
        rootState_subState = HVAC_off;
        rootState_active = HVAC_off;
        //#[ state HVAC_off.(Entry) 
        Msg = "HVAC is Off";
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus HVAC_Control_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State HVAC_on
        case HVAC_on:
        {
            if(IS_EVENT_TYPE_OF(evTunHVACOn_IMRPkg_id) == 1)
                {
                    //## transition 1 
                    if(StateHVAC == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.HVAC_on");
                            NOTIFY_STATE_ENTERED("ROOT.HVAC_off");
                            rootState_subState = HVAC_off;
                            rootState_active = HVAC_off;
                            //#[ state HVAC_off.(Entry) 
                            Msg = "HVAC is Off";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State HVAC_off
        case HVAC_off:
        {
            if(IS_EVENT_TYPE_OF(evTunHVACOn_IMRPkg_id) == 1)
                {
                    //## transition 2 
                    if(StateHVAC == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.HVAC_off");
                            NOTIFY_STATE_ENTERED("ROOT.HVAC_on");
                            rootState_subState = HVAC_on;
                            rootState_active = HVAC_on;
                            //#[ state HVAC_on.(Entry) 
                            Msg = "HVAC is On";
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
void OMAnimatedHVAC_Control_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
    aomsAttributes->addAttribute("FanSpeed", x2String(myReal->FanSpeed));
    aomsAttributes->addAttribute("StateHVAC", x2String(myReal->StateHVAC));
    aomsAttributes->addAttribute("Msg", x2String(myReal->Msg));
}

void OMAnimatedHVAC_Control_UC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLightControl_UC", false, true);
    if(myReal->itsLightControl_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsLightControl_UC);
        }
    aomsRelations->addRelation("itsLightControl_UC_1", false, true);
    if(myReal->itsLightControl_UC_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsLightControl_UC_1);
        }
}

void OMAnimatedHVAC_Control_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case HVAC_Control_UC::HVAC_on:
        {
            HVAC_on_serializeStates(aomsState);
        }
        break;
        case HVAC_Control_UC::HVAC_off:
        {
            HVAC_off_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHVAC_Control_UC::HVAC_on_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_on");
}

void OMAnimatedHVAC_Control_UC::HVAC_off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_off");
}
//#]

IMPLEMENT_REACTIVE_META_P(HVAC_Control_UC, IMRPkg, IMRPkg, false, OMAnimatedHVAC_Control_UC)

IMPLEMENT_META_OP(OMAnimatedHVAC_Control_UC, IMRPkg_HVAC_Control_UC_setStateHVAC_int, "setStateHVAC", FALSE, "setStateHVAC(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_HVAC_Control_UC_setStateHVAC_int, HVAC_Control_UC, setStateHVAC(p_StateHVAC), NO_OP())

IMPLEMENT_META_OP(OMAnimatedHVAC_Control_UC, IMRPkg_HVAC_Control_UC_setTemperature_int, "setTemperature", FALSE, "setTemperature(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_HVAC_Control_UC_setTemperature_int, HVAC_Control_UC, setTemperature(p_temperature), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\HVAC_Control_UC.cpp
*********************************************************************/

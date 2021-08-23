/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: MagCalc_UC
//!	Generated Date	: Thu, 22, Jul 2021  
	File Path	: MyConf\DefaultConfig\MagCalc_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "MagCalc_UC.h"
//#[ ignore
#define ContrPkg_MagCalc_UC_MagCalc_UC_SERIALIZE OM_NO_OP

#define ContrPkg_MagCalc_UC_CurrentMagVal_SERIALIZE OM_NO_OP

#define ContrPkg_MagCalc_UC_MagValExtrpMethod_SERIALIZE OM_NO_OP

#define OMAnim_ContrPkg_MagCalc_UC_setGetMagVal_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_GetMagVal)

#define OMAnim_ContrPkg_MagCalc_UC_setGetMagVal_int_SERIALIZE_RET_VAL

#define OMAnim_ContrPkg_MagCalc_UC_setMagCalcMethod_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_MagCalcMethod)

#define OMAnim_ContrPkg_MagCalc_UC_setMagCalcMethod_int_SERIALIZE_RET_VAL
//#]

//## package ContrPkg

//## class MagCalc_UC
//#[ ignore
MagCalc_UC::GetMagVal_SP_C::GetMagVal_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

MagCalc_UC::GetMagVal_SP_C::~GetMagVal_SP_C(void) {
    cleanUpRelations();
}

void MagCalc_UC::GetMagVal_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* MagCalc_UC::GetMagVal_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* MagCalc_UC::GetMagVal_SP_C::getOutBound(void) {
    return this;
}

void MagCalc_UC::GetMagVal_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void MagCalc_UC::GetMagVal_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

MagCalc_UC::MagCalcMethod_SP_C::MagCalcMethod_SP_C(void) : intFlowInterface(), _p_(0) {
}

MagCalc_UC::MagCalcMethod_SP_C::~MagCalcMethod_SP_C(void) {
    cleanUpRelations();
}

void MagCalc_UC::MagCalcMethod_SP_C::SetValue(int data, void * pCaller) {
    
    for(int iterI = 0 ; iterI < itsIntFlowInterface.getCount() ; iterI++)
    {
        itsIntFlowInterface[iterI]->SetValue(data,pCaller);
        if(iterI < itsIntFlowInterface.getCount() - 1)
        {
            FLOW_DATA_POP
        }
    }
    
}

intFlowInterface* MagCalc_UC::MagCalcMethod_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* MagCalc_UC::MagCalcMethod_SP_C::getOutBound(void) {
    return this;
}

intFlowInterface* MagCalc_UC::MagCalcMethod_SP_C::getItsIntFlowInterfaceAt(Rhp_int32_t iterI) const {
    return itsIntFlowInterface.getAt(iterI);
}

void MagCalc_UC::MagCalcMethod_SP_C::addItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.add(p_intFlowInterface);
}

void MagCalc_UC::MagCalcMethod_SP_C::removeItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.remove(p_intFlowInterface);
}

void MagCalc_UC::MagCalcMethod_SP_C::clearItsIntFlowInterface(void) {
    itsIntFlowInterface.removeAll();
}

int MagCalc_UC::MagCalcMethod_SP_C::findItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) const {
    return itsIntFlowInterface.find(p_intFlowInterface);
}

void MagCalc_UC::MagCalcMethod_SP_C::cleanUpRelations(void) {
    {
        itsIntFlowInterface.removeAll();
    }
}
//#]

MagCalc_UC::MagCalc_UC(IOxfActive* const theActiveContext) : OMReactive(), GetMagVal(0), MagCalcMethod(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MagCalc_UC, MagCalc_UC(), 0, ContrPkg_MagCalc_UC_MagCalc_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

MagCalc_UC::~MagCalc_UC(void) {
    NOTIFY_DESTRUCTOR(~MagCalc_UC, true);
}

int MagCalc_UC::CurrentMagVal(void) {
    NOTIFY_OPERATION(CurrentMagVal, CurrentMagVal(), 0, ContrPkg_MagCalc_UC_CurrentMagVal_SERIALIZE);
    //#[ operation CurrentMagVal()
    return GetMagVal;
    //#]
}

int MagCalc_UC::MagValExtrpMethod(void) {
    NOTIFY_OPERATION(MagValExtrpMethod, MagValExtrpMethod(), 0, ContrPkg_MagCalc_UC_MagValExtrpMethod_SERIALIZE);
    //#[ operation MagValExtrpMethod()
    MagCalcMethod;
    
    return MagCalcMethod;
    //#]
}

//#[ ignore
void MagCalc_UC::setGetMagVal(int p_GetMagVal) {
    if (GetMagVal != p_GetMagVal)  {
        GetMagVal = p_GetMagVal;
        FLOW_DATA_SEND(GetMagVal, GetMagVal_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void MagCalc_UC::setMagCalcMethod(int p_MagCalcMethod) {
    if (MagCalcMethod != p_MagCalcMethod)  {
        MagCalcMethod = p_MagCalcMethod;
        FLOW_DATA_SEND(MagCalcMethod, MagCalcMethod_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}
//#]

MagCalc_UC::GetMagVal_SP_C* MagCalc_UC::getGetMagVal_SP(void) const {
    return (MagCalc_UC::GetMagVal_SP_C*) &GetMagVal_SP;
}

MagCalc_UC::GetMagVal_SP_C* MagCalc_UC::get_GetMagVal_SP(void) const {
    return (MagCalc_UC::GetMagVal_SP_C*) &GetMagVal_SP;
}

MagCalc_UC::MagCalcMethod_SP_C* MagCalc_UC::getMagCalcMethod_SP(void) const {
    return (MagCalc_UC::MagCalcMethod_SP_C*) &MagCalcMethod_SP;
}

MagCalc_UC::MagCalcMethod_SP_C* MagCalc_UC::get_MagCalcMethod_SP(void) const {
    return (MagCalc_UC::MagCalcMethod_SP_C*) &MagCalcMethod_SP;
}

const int MagCalc_UC::getGetMagVal(void) const {
    return GetMagVal;
}

const int MagCalc_UC::getMagCalcMethod(void) const {
    return MagCalcMethod;
}

const char MagCalc_UC::getMagMsg(void) const {
    return MagMsg;
}

void MagCalc_UC::setMagMsg(const char p_MagMsg) {
    MagMsg = p_MagMsg;
}

bool MagCalc_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void MagCalc_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void MagCalc_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus MagCalc_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evCheckMagVal_ContrPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.MagExtrpMethod");
                    pushNullTransition();
                    rootState_subState = MagExtrpMethod;
                    rootState_active = MagExtrpMethod;
                    //#[ state MagExtrpMethod.(Entry) 
                    CurrentMagVal();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evSetMagExtrpMethod_ContrPkg_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("3");
                        NOTIFY_STATE_EXITED("ROOT.Idle");
                        NOTIFY_STATE_ENTERED("ROOT.GetCurrentVal");
                        pushNullTransition();
                        rootState_subState = GetCurrentVal;
                        rootState_active = GetCurrentVal;
                        //#[ state GetCurrentVal.(Entry) 
                        MagValExtrpMethod();
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("3");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State MagExtrpMethod
        case MagExtrpMethod:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.MagExtrpMethod");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State GetCurrentVal
        case GetCurrentVal:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.GetCurrentVal");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedMagCalc_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("MagCalcMethod", x2String(myReal->MagCalcMethod));
    aomsAttributes->addAttribute("GetMagVal", x2String(myReal->GetMagVal));
    aomsAttributes->addAttribute("MagMsg", x2String(myReal->MagMsg));
}

void OMAnimatedMagCalc_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case MagCalc_UC::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case MagCalc_UC::MagExtrpMethod:
        {
            MagExtrpMethod_serializeStates(aomsState);
        }
        break;
        case MagCalc_UC::GetCurrentVal:
        {
            GetCurrentVal_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMagCalc_UC::MagExtrpMethod_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MagExtrpMethod");
}

void OMAnimatedMagCalc_UC::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedMagCalc_UC::GetCurrentVal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.GetCurrentVal");
}
//#]

IMPLEMENT_REACTIVE_META_P(MagCalc_UC, ContrPkg, ContrPkg, false, OMAnimatedMagCalc_UC)

IMPLEMENT_META_OP(OMAnimatedMagCalc_UC, ContrPkg_MagCalc_UC_setGetMagVal_int, "setGetMagVal", FALSE, "setGetMagVal(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_MagCalc_UC_setGetMagVal_int, MagCalc_UC, setGetMagVal(p_GetMagVal), NO_OP())

IMPLEMENT_META_OP(OMAnimatedMagCalc_UC, ContrPkg_MagCalc_UC_setMagCalcMethod_int, "setMagCalcMethod", FALSE, "setMagCalcMethod(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_MagCalc_UC_setMagCalcMethod_int, MagCalc_UC, setMagCalcMethod(p_MagCalcMethod), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\MagCalc_UC.cpp
*********************************************************************/

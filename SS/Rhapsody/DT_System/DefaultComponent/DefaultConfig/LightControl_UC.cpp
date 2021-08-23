/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LightControl_UC
//!	Generated Date	: Mon, 6, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\LightControl_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "LightControl_UC.h"
//## link itsPINCode_UC
#include "PINCode_UC.h"
//## link itsHVAC_Control_UC
#include "HVAC_Control_UC.h"
//#[ ignore
#define IMRPkg_LightControl_UC_LightControl_UC_SERIALIZE OM_NO_OP

#define IMRPkg_LightControl_UC_setIntensity_SERIALIZE OM_NO_OP

#define OMAnim_IMRPkg_LightControl_UC_setInteriorLightIntensity_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_InteriorLightIntensity)

#define OMAnim_IMRPkg_LightControl_UC_setInteriorLightIntensity_int_SERIALIZE_RET_VAL
//#]

//## package IMRPkg

//## class LightControl_UC
//#[ ignore
LightControl_UC::InteriorLightIntensity_SP_C::InteriorLightIntensity_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

LightControl_UC::InteriorLightIntensity_SP_C::~InteriorLightIntensity_SP_C(void) {
    cleanUpRelations();
}

void LightControl_UC::InteriorLightIntensity_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* LightControl_UC::InteriorLightIntensity_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* LightControl_UC::InteriorLightIntensity_SP_C::getOutBound(void) {
    return this;
}

void LightControl_UC::InteriorLightIntensity_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void LightControl_UC::InteriorLightIntensity_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

LightControl_UC::LightControl_UC(IOxfActive* const theActiveContext) : OMReactive(), AmbientLightIntensity(0), InteriorLightIntensity(2), itsPINCode_UC(NULL), itsHVAC_Control_UC(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(LightControl_UC, LightControl_UC(), 0, IMRPkg_LightControl_UC_LightControl_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

LightControl_UC::~LightControl_UC(void) {
    NOTIFY_DESTRUCTOR(~LightControl_UC, true);
    cleanUpRelations();
}

LightControl_UC::InteriorLightIntensity_SP_C* LightControl_UC::getInteriorLightIntensity_SP(void) const {
    return (LightControl_UC::InteriorLightIntensity_SP_C*) &InteriorLightIntensity_SP;
}

LightControl_UC::InteriorLightIntensity_SP_C* LightControl_UC::get_InteriorLightIntensity_SP(void) const {
    return (LightControl_UC::InteriorLightIntensity_SP_C*) &InteriorLightIntensity_SP;
}

OMIterator<int> LightControl_UC::getAmbientLightIntensity(void) const {
    OMIterator<int> iter(AmbientLightIntensity);
    return iter;
}

void LightControl_UC::setAmbientLightIntensity(const int p_AmbientLightIntensity) {
    AmbientLightIntensity.add(p_AmbientLightIntensity);
}

const int LightControl_UC::getInteriorLightIntensity(void) const {
    return InteriorLightIntensity;
}

const PINCode_UC* LightControl_UC::getItsPINCode_UC(void) const {
    return itsPINCode_UC;
}

void LightControl_UC::setItsPINCode_UC(PINCode_UC* const p_PINCode_UC) {
    if(p_PINCode_UC != NULL)
        {
            p_PINCode_UC->_setItsLightControl_UC(this);
        }
    _setItsPINCode_UC(p_PINCode_UC);
}

void LightControl_UC::cleanUpRelations(void) {
    if(itsHVAC_Control_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_Control_UC");
            const LightControl_UC* p_LightControl_UC = itsHVAC_Control_UC->getItsLightControl_UC_1();
            if(p_LightControl_UC != NULL)
                {
                    itsHVAC_Control_UC->__setItsLightControl_UC_1(NULL);
                }
            itsHVAC_Control_UC = NULL;
        }
    if(itsPINCode_UC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPINCode_UC");
            const LightControl_UC* p_LightControl_UC = itsPINCode_UC->getItsLightControl_UC();
            if(p_LightControl_UC != NULL)
                {
                    itsPINCode_UC->__setItsLightControl_UC(NULL);
                }
            itsPINCode_UC = NULL;
        }
}

void LightControl_UC::__setItsPINCode_UC(PINCode_UC* const p_PINCode_UC) {
    itsPINCode_UC = p_PINCode_UC;
    if(p_PINCode_UC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPINCode_UC", p_PINCode_UC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPINCode_UC");
        }
}

void LightControl_UC::_setItsPINCode_UC(PINCode_UC* const p_PINCode_UC) {
    if(itsPINCode_UC != NULL)
        {
            itsPINCode_UC->__setItsLightControl_UC(NULL);
        }
    __setItsPINCode_UC(p_PINCode_UC);
}

void LightControl_UC::_clearItsPINCode_UC(void) {
    NOTIFY_RELATION_CLEARED("itsPINCode_UC");
    itsPINCode_UC = NULL;
}

int LightControl_UC::setIntensity(void) {
    NOTIFY_OPERATION(setIntensity, setIntensity(), 0, IMRPkg_LightControl_UC_setIntensity_SERIALIZE);
    //#[ operation setIntensity()
    return InteriorLightIntensity;
    //#]
}

const HVAC_Control_UC* LightControl_UC::getItsHVAC_Control_UC(void) const {
    return itsHVAC_Control_UC;
}

void LightControl_UC::setItsHVAC_Control_UC(HVAC_Control_UC* const p_HVAC_Control_UC) {
    if(p_HVAC_Control_UC != NULL)
        {
            p_HVAC_Control_UC->_setItsLightControl_UC_1(this);
        }
    _setItsHVAC_Control_UC(p_HVAC_Control_UC);
}

bool LightControl_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void LightControl_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void LightControl_UC::__setItsHVAC_Control_UC(HVAC_Control_UC* const p_HVAC_Control_UC) {
    itsHVAC_Control_UC = p_HVAC_Control_UC;
    if(p_HVAC_Control_UC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC_Control_UC", p_HVAC_Control_UC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_Control_UC");
        }
}

void LightControl_UC::_setItsHVAC_Control_UC(HVAC_Control_UC* const p_HVAC_Control_UC) {
    if(itsHVAC_Control_UC != NULL)
        {
            itsHVAC_Control_UC->__setItsLightControl_UC_1(NULL);
        }
    __setItsHVAC_Control_UC(p_HVAC_Control_UC);
}

void LightControl_UC::_clearItsHVAC_Control_UC(void) {
    NOTIFY_RELATION_CLEARED("itsHVAC_Control_UC");
    itsHVAC_Control_UC = NULL;
}

//#[ ignore
void LightControl_UC::setInteriorLightIntensity(int p_InteriorLightIntensity) {
    if (InteriorLightIntensity != p_InteriorLightIntensity)  {
        InteriorLightIntensity = p_InteriorLightIntensity;
        FLOW_DATA_SEND(InteriorLightIntensity, InteriorLightIntensity_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}
//#]

void LightControl_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Lights");
        rootState_subState = Lights;
        rootState_active = Lights;
        //#[ state Lights.(Entry) 
        setIntensity();
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus LightControl_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLightControl_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("InteriorLightIntensity", x2String(myReal->InteriorLightIntensity));
    aomsAttributes->addAttribute("AmbientLightIntensity", UNKNOWN2STRING(myReal->AmbientLightIntensity));
}

void OMAnimatedLightControl_UC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPINCode_UC", false, true);
    if(myReal->itsPINCode_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsPINCode_UC);
        }
    aomsRelations->addRelation("itsHVAC_Control_UC", false, true);
    if(myReal->itsHVAC_Control_UC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC_Control_UC);
        }
}

void OMAnimatedLightControl_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == LightControl_UC::Lights)
        {
            Lights_serializeStates(aomsState);
        }
}

void OMAnimatedLightControl_UC::Lights_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Lights");
}
//#]

IMPLEMENT_REACTIVE_META_P(LightControl_UC, IMRPkg, IMRPkg, false, OMAnimatedLightControl_UC)

IMPLEMENT_META_OP(OMAnimatedLightControl_UC, IMRPkg_LightControl_UC_setInteriorLightIntensity_int, "setInteriorLightIntensity", FALSE, "setInteriorLightIntensity(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_LightControl_UC_setInteriorLightIntensity_int, LightControl_UC, setInteriorLightIntensity(p_InteriorLightIntensity), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LightControl_UC.cpp
*********************************************************************/

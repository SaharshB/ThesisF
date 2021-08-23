/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Hologram_UC
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Hologram_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Hologram_UC.h"
//#[ ignore
#define IMRPkg_Hologram_UC_Hologram_UC_SERIALIZE OM_NO_OP

#define OMAnim_IMRPkg_Hologram_UC_setHologram_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_hologram)

#define OMAnim_IMRPkg_Hologram_UC_setHologram_int_SERIALIZE_RET_VAL
//#]

//## package IMRPkg

//## class Hologram_UC
//#[ ignore
Hologram_UC::hologram_SP_C::hologram_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

Hologram_UC::hologram_SP_C::~hologram_SP_C(void) {
    cleanUpRelations();
}

void Hologram_UC::hologram_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* Hologram_UC::hologram_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* Hologram_UC::hologram_SP_C::getOutBound(void) {
    return this;
}

void Hologram_UC::hologram_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Hologram_UC::hologram_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

Hologram_UC::Hologram_UC(IOxfActive* const theActiveContext) : OMReactive(), hologram(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Hologram_UC, Hologram_UC(), 0, IMRPkg_Hologram_UC_Hologram_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Hologram_UC::~Hologram_UC(void) {
    NOTIFY_DESTRUCTOR(~Hologram_UC, true);
}

Hologram_UC::hologram_SP_C* Hologram_UC::getHologram_SP(void) const {
    return (Hologram_UC::hologram_SP_C*) &hologram_SP;
}

Hologram_UC::hologram_SP_C* Hologram_UC::get_hologram_SP(void) const {
    return (Hologram_UC::hologram_SP_C*) &hologram_SP;
}

const int Hologram_UC::getHologram(void) const {
    return hologram;
}

bool Hologram_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Hologram_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

//#[ ignore
void Hologram_UC::setHologram(int p_hologram) {
    if (hologram != p_hologram)  {
        hologram = p_hologram;
        FLOW_DATA_SEND(hologram, hologram_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}
//#]

void Hologram_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.Hologram_Off");
        rootState_subState = Hologram_Off;
        rootState_active = Hologram_Off;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus Hologram_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Hologram_Off
        case Hologram_Off:
        {
            if(IS_EVENT_TYPE_OF(evHologram_IMRPkg_id) == 1)
                {
                    //## transition 0 
                    if(hologram == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            NOTIFY_STATE_EXITED("ROOT.Hologram_Off");
                            NOTIFY_STATE_ENTERED("ROOT.Hologram_On");
                            rootState_subState = Hologram_On;
                            rootState_active = Hologram_On;
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Hologram_On
        case Hologram_On:
        {
            if(IS_EVENT_TYPE_OF(evHologramCall_IMRPkg_id) == 1)
                {
                    //## transition 1 
                    if(hologram == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.Hologram_On");
                            NOTIFY_STATE_ENTERED("ROOT.Hologram_Off");
                            rootState_subState = Hologram_Off;
                            rootState_active = Hologram_Off;
                            NOTIFY_TRANSITION_TERMINATED("1");
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
void OMAnimatedHologram_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("hologram", x2String(myReal->hologram));
}

void OMAnimatedHologram_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Hologram_UC::Hologram_Off:
        {
            Hologram_Off_serializeStates(aomsState);
        }
        break;
        case Hologram_UC::Hologram_On:
        {
            Hologram_On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHologram_UC::Hologram_On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Hologram_On");
}

void OMAnimatedHologram_UC::Hologram_Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Hologram_Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Hologram_UC, IMRPkg, IMRPkg, false, OMAnimatedHologram_UC)

IMPLEMENT_META_OP(OMAnimatedHologram_UC, IMRPkg_Hologram_UC_setHologram_int, "setHologram", FALSE, "setHologram(int)", 1)

IMPLEMENT_OP_CALL(IMRPkg_Hologram_UC_setHologram_int, Hologram_UC, setHologram(p_hologram), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Hologram_UC.cpp
*********************************************************************/

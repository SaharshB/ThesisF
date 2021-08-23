/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Display_UC
//!	Generated Date	: Wed, 28, Jul 2021  
	File Path	: MyConf\DefaultConfig\Display_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Display_UC.h"
//#[ ignore
#define ContrPkg_Display_UC_Display_UC_SERIALIZE OM_NO_OP

#define ContrPkg_Display_UC_DisplayMap_SERIALIZE OM_NO_OP

#define OMAnim_ContrPkg_Display_UC_setShowMap_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_ShowMap)

#define OMAnim_ContrPkg_Display_UC_setShowMap_int_SERIALIZE_RET_VAL
//#]

//## package ContrPkg

//## class Display_UC
//#[ ignore
Display_UC::ShowMap_SP_C::ShowMap_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

Display_UC::ShowMap_SP_C::~ShowMap_SP_C(void) {
    cleanUpRelations();
}

void Display_UC::ShowMap_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* Display_UC::ShowMap_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* Display_UC::ShowMap_SP_C::getOutBound(void) {
    return this;
}

void Display_UC::ShowMap_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Display_UC::ShowMap_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

Display_UC::PathAlgo_SP_C::PathAlgo_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

Display_UC::PathAlgo_SP_C::~PathAlgo_SP_C(void) {
    cleanUpRelations();
}

void Display_UC::PathAlgo_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void Display_UC::PathAlgo_SP_C::connectDisplay_UC(Display_UC* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* Display_UC::PathAlgo_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void Display_UC::PathAlgo_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Display_UC::PathAlgo_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

Display_UC::Destination_SP_C::Destination_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

Display_UC::Destination_SP_C::~Destination_SP_C(void) {
    cleanUpRelations();
}

void Display_UC::Destination_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void Display_UC::Destination_SP_C::connectDisplay_UC(Display_UC* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* Display_UC::Destination_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void Display_UC::Destination_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Display_UC::Destination_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

Display_UC::MagCalcMethod_SP_C::MagCalcMethod_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

Display_UC::MagCalcMethod_SP_C::~MagCalcMethod_SP_C(void) {
    cleanUpRelations();
}

void Display_UC::MagCalcMethod_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void Display_UC::MagCalcMethod_SP_C::connectDisplay_UC(Display_UC* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* Display_UC::MagCalcMethod_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void Display_UC::MagCalcMethod_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Display_UC::MagCalcMethod_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

Display_UC::Display_UC(IOxfActive* const theActiveContext) : OMReactive(), intFlowInterface(), DispMessage("DisplayMsg") {
    NOTIFY_REACTIVE_CONSTRUCTOR(Display_UC, Display_UC(), 0, ContrPkg_Display_UC_Display_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Display_UC::~Display_UC(void) {
    NOTIFY_DESTRUCTOR(~Display_UC, true);
}

int Display_UC::DisplayMap(void) {
    NOTIFY_OPERATION(DisplayMap, DisplayMap(), 0, ContrPkg_Display_UC_DisplayMap_SERIALIZE);
    //#[ operation DisplayMap()
    if (ShowMap == 1){
    	if (Destination == 0){
    		DispMessage = "Error: NoDestination";
    		ShowMap=0;
    		return ShowMap;
    	}
    	if (PathAlgo == 0){
    		DispMessage = "Error: NoPathPlan";
    		ShowMap=0;
    		return ShowMap;
    	}
    }
    DispMessage = "Hello";          
    
    return ShowMap;
    //#]
}

//#[ ignore
void Display_UC::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_PathAlgo_SP()) {
        setPathAlgo(data);
    }
    
    if (pCaller == (void *)get_Destination_SP()) {
        setDestination(data);
    }
    
    if (pCaller == (void *)get_MagCalcMethod_SP()) {
        setMagCalcMethod(data);
    }
}

void Display_UC::setDestination(int p_Destination) {
    if (Destination != p_Destination) {
        Destination = p_Destination;
        FLOW_DATA_RECEIVE("Destination", Destination, x2String);
    }
    
}

void Display_UC::setMagCalcMethod(int p_MagCalcMethod) {
    if (MagCalcMethod != p_MagCalcMethod) {
        MagCalcMethod = p_MagCalcMethod;
        FLOW_DATA_RECEIVE("MagCalcMethod", MagCalcMethod, x2String);
    }
    
}

void Display_UC::setPathAlgo(int p_PathAlgo) {
    if (PathAlgo != p_PathAlgo) {
        PathAlgo = p_PathAlgo;
        FLOW_DATA_RECEIVE("PathAlgo", PathAlgo, x2String);
    }
    
}

void Display_UC::setShowMap(int p_ShowMap) {
    if (ShowMap != p_ShowMap)  {
        ShowMap = p_ShowMap;
        FLOW_DATA_SEND(ShowMap, ShowMap_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}
//#]

Display_UC::ShowMap_SP_C* Display_UC::getShowMap_SP(void) const {
    return (Display_UC::ShowMap_SP_C*) &ShowMap_SP;
}

Display_UC::ShowMap_SP_C* Display_UC::get_ShowMap_SP(void) const {
    return (Display_UC::ShowMap_SP_C*) &ShowMap_SP;
}

Display_UC::PathAlgo_SP_C* Display_UC::getPathAlgo_SP(void) const {
    return (Display_UC::PathAlgo_SP_C*) &PathAlgo_SP;
}

Display_UC::PathAlgo_SP_C* Display_UC::get_PathAlgo_SP(void) const {
    return (Display_UC::PathAlgo_SP_C*) &PathAlgo_SP;
}

Display_UC::Destination_SP_C* Display_UC::getDestination_SP(void) const {
    return (Display_UC::Destination_SP_C*) &Destination_SP;
}

Display_UC::Destination_SP_C* Display_UC::get_Destination_SP(void) const {
    return (Display_UC::Destination_SP_C*) &Destination_SP;
}

Display_UC::MagCalcMethod_SP_C* Display_UC::getMagCalcMethod_SP(void) const {
    return (Display_UC::MagCalcMethod_SP_C*) &MagCalcMethod_SP;
}

Display_UC::MagCalcMethod_SP_C* Display_UC::get_MagCalcMethod_SP(void) const {
    return (Display_UC::MagCalcMethod_SP_C*) &MagCalcMethod_SP;
}

const int Display_UC::getDestination(void) const {
    return Destination;
}

const char* Display_UC::getDispMessage(void) const {
    return DispMessage;
}

void Display_UC::setDispMessage(char* const p_DispMessage) {
    DispMessage = p_DispMessage;
    NOTIFY_SET_OPERATION;
}

const int Display_UC::getMagCalcMethod(void) const {
    return MagCalcMethod;
}

const int Display_UC::getPathAlgo(void) const {
    return PathAlgo;
}

const int Display_UC::getShowMap(void) const {
    return ShowMap;
}

const int Display_UC::getTempMap(void) const {
    return tempMap;
}

void Display_UC::setTempMap(const int p_tempMap) {
    tempMap = p_tempMap;
}

bool Display_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Display_UC::initRelations(void) {
    if (get_PathAlgo_SP() != NULL) {
        get_PathAlgo_SP()->connectDisplay_UC(this);
    }
    if (get_Destination_SP() != NULL) {
        get_Destination_SP()->connectDisplay_UC(this);
    }
    if (get_MagCalcMethod_SP() != NULL) {
        get_MagCalcMethod_SP()->connectDisplay_UC(this);
    }
}

void Display_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Display_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Display_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evDisplayMap_ContrPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.DispMap");
                    pushNullTransition();
                    rootState_subState = DispMap;
                    rootState_active = DispMap;
                    //#[ state DispMap.(Entry) 
                    DisplayMap();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DispMap
        case DispMap:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DispMap");
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
void OMAnimatedDisplay_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("ShowMap", x2String(myReal->ShowMap));
    aomsAttributes->addAttribute("DispMessage", x2String(myReal->DispMessage));
    aomsAttributes->addAttribute("Destination", x2String(myReal->Destination));
    aomsAttributes->addAttribute("tempMap", x2String(myReal->tempMap));
    aomsAttributes->addAttribute("PathAlgo", x2String(myReal->PathAlgo));
    aomsAttributes->addAttribute("MagCalcMethod", x2String(myReal->MagCalcMethod));
}

void OMAnimatedDisplay_UC::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedDisplay_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Display_UC::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case Display_UC::DispMap:
        {
            DispMap_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDisplay_UC::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedDisplay_UC::DispMap_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DispMap");
}
//#]

IMPLEMENT_REACTIVE_META_P(Display_UC, ContrPkg, ContrPkg, false, OMAnimatedDisplay_UC)

IMPLEMENT_META_OP(OMAnimatedDisplay_UC, ContrPkg_Display_UC_setShowMap_int, "setShowMap", FALSE, "setShowMap(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_Display_UC_setShowMap_int, Display_UC, setShowMap(p_ShowMap), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Display_UC.cpp
*********************************************************************/

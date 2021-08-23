/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: PathCalc_UC
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\PathCalc_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PathCalc_UC.h"
//#[ ignore
#define ContrPkg_PathCalc_UC_PathCalc_UC_SERIALIZE OM_NO_OP

#define ContrPkg_PathCalc_UC_GoToDest_SERIALIZE OM_NO_OP

#define ContrPkg_PathCalc_UC_MoveDestAlgo_SERIALIZE OM_NO_OP

#define ContrPkg_PathCalc_UC_SetDestination_SERIALIZE OM_NO_OP

#define OMAnim_ContrPkg_PathCalc_UC_setDestination_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Destination)

#define OMAnim_ContrPkg_PathCalc_UC_setDestination_int_SERIALIZE_RET_VAL

#define OMAnim_ContrPkg_PathCalc_UC_setGo_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Go)

#define OMAnim_ContrPkg_PathCalc_UC_setGo_int_SERIALIZE_RET_VAL

#define OMAnim_ContrPkg_PathCalc_UC_setPathAlgo_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_PathAlgo)

#define OMAnim_ContrPkg_PathCalc_UC_setPathAlgo_int_SERIALIZE_RET_VAL
//#]

//## package ContrPkg

//## class PathCalc_UC
//#[ ignore
PathCalc_UC::Destination_SP_C::Destination_SP_C(void) : intFlowInterface(), _p_(0) {
}

PathCalc_UC::Destination_SP_C::~Destination_SP_C(void) {
    cleanUpRelations();
}

void PathCalc_UC::Destination_SP_C::SetValue(int data, void * pCaller) {
    
    for(int iterI = 0 ; iterI < itsIntFlowInterface.getCount() ; iterI++)
    {
        itsIntFlowInterface[iterI]->SetValue(data,pCaller);
        if(iterI < itsIntFlowInterface.getCount() - 1)
        {
            FLOW_DATA_POP
        }
    }
    
}

intFlowInterface* PathCalc_UC::Destination_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* PathCalc_UC::Destination_SP_C::getOutBound(void) {
    return this;
}

intFlowInterface* PathCalc_UC::Destination_SP_C::getItsIntFlowInterfaceAt(Rhp_int32_t iterI) const {
    return itsIntFlowInterface.getAt(iterI);
}

void PathCalc_UC::Destination_SP_C::addItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.add(p_intFlowInterface);
}

void PathCalc_UC::Destination_SP_C::removeItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.remove(p_intFlowInterface);
}

void PathCalc_UC::Destination_SP_C::clearItsIntFlowInterface(void) {
    itsIntFlowInterface.removeAll();
}

int PathCalc_UC::Destination_SP_C::findItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) const {
    return itsIntFlowInterface.find(p_intFlowInterface);
}

void PathCalc_UC::Destination_SP_C::cleanUpRelations(void) {
    {
        itsIntFlowInterface.removeAll();
    }
}

PathCalc_UC::PathAlgo_SP_C::PathAlgo_SP_C(void) : intFlowInterface(), _p_(0) {
}

PathCalc_UC::PathAlgo_SP_C::~PathAlgo_SP_C(void) {
    cleanUpRelations();
}

void PathCalc_UC::PathAlgo_SP_C::SetValue(int data, void * pCaller) {
    
    for(int iterI = 0 ; iterI < itsIntFlowInterface.getCount() ; iterI++)
    {
        itsIntFlowInterface[iterI]->SetValue(data,pCaller);
        if(iterI < itsIntFlowInterface.getCount() - 1)
        {
            FLOW_DATA_POP
        }
    }
    
}

intFlowInterface* PathCalc_UC::PathAlgo_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* PathCalc_UC::PathAlgo_SP_C::getOutBound(void) {
    return this;
}

intFlowInterface* PathCalc_UC::PathAlgo_SP_C::getItsIntFlowInterfaceAt(Rhp_int32_t iterI) const {
    return itsIntFlowInterface.getAt(iterI);
}

void PathCalc_UC::PathAlgo_SP_C::addItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.add(p_intFlowInterface);
}

void PathCalc_UC::PathAlgo_SP_C::removeItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.remove(p_intFlowInterface);
}

void PathCalc_UC::PathAlgo_SP_C::clearItsIntFlowInterface(void) {
    itsIntFlowInterface.removeAll();
}

int PathCalc_UC::PathAlgo_SP_C::findItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) const {
    return itsIntFlowInterface.find(p_intFlowInterface);
}

void PathCalc_UC::PathAlgo_SP_C::cleanUpRelations(void) {
    {
        itsIntFlowInterface.removeAll();
    }
}

PathCalc_UC::StateBot_SP_C::StateBot_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

PathCalc_UC::StateBot_SP_C::~StateBot_SP_C(void) {
    cleanUpRelations();
}

void PathCalc_UC::StateBot_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void PathCalc_UC::StateBot_SP_C::connectPathCalc_UC(PathCalc_UC* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* PathCalc_UC::StateBot_SP_C::getItsIntFlowInterface(void) {
    return this;
}

void PathCalc_UC::StateBot_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void PathCalc_UC::StateBot_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

PathCalc_UC::Go_SP_C::Go_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

PathCalc_UC::Go_SP_C::~Go_SP_C(void) {
    cleanUpRelations();
}

void PathCalc_UC::Go_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* PathCalc_UC::Go_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* PathCalc_UC::Go_SP_C::getOutBound(void) {
    return this;
}

void PathCalc_UC::Go_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void PathCalc_UC::Go_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

PathCalc_UC::PathCalc_UC(IOxfActive* const theActiveContext) : OMReactive(), intFlowInterface(), Destination(0), Go(0), PathAlgo(0), PathMsg("Hello"), StateBot(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PathCalc_UC, PathCalc_UC(), 0, ContrPkg_PathCalc_UC_PathCalc_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

PathCalc_UC::~PathCalc_UC(void) {
    NOTIFY_DESTRUCTOR(~PathCalc_UC, true);
}

void PathCalc_UC::GoToDest(void) {
    NOTIFY_OPERATION(GoToDest, GoToDest(), 0, ContrPkg_PathCalc_UC_GoToDest_SERIALIZE);
    //#[ operation GoToDest()
    printf("########In the go to func########\n");
    if(StateBot==1){
    	PathMsg = "Error: Manual"; 	           
    	printf("********* Exiting func StateBot = 1 *********\n");    
    	Go=0;
    	return;
    }
    if (Destination == 0){
    	PathMsg = "Error: NoDest";         
    	printf("********* Exiting func Destination = 0 *********\n");
    	Go=0;
    	return;
    }       
    if (PathAlgo == 0){
    	PathMsg = "Error: NoAlgo";         
    	printf("********* Exiting func PathAlgo = 0 *********\n");
    	Go=0;
    	return;
    }                            
    Go =1;       
    PathMsg = "Going to Dest";           
    printf("Exiting func. Value of GoTo: %d\n",Go);
    return;
    //#]
}

int PathCalc_UC::MoveDestAlgo(void) {
    NOTIFY_OPERATION(MoveDestAlgo, MoveDestAlgo(), 0, ContrPkg_PathCalc_UC_MoveDestAlgo_SERIALIZE);
    //#[ operation MoveDestAlgo()
    return PathAlgo;
    //#]
}

char PathCalc_UC::SetDestination(void) {
    NOTIFY_OPERATION(SetDestination, SetDestination(), 0, ContrPkg_PathCalc_UC_SetDestination_SERIALIZE);
    //#[ operation SetDestination()
    return Destination;
    //#]
}

//#[ ignore
void PathCalc_UC::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_StateBot_SP()) {
        setStateBot(data);
    }
}

void PathCalc_UC::setDestination(int p_Destination) {
    if (Destination != p_Destination)  {
        Destination = p_Destination;
        FLOW_DATA_SEND(Destination, Destination_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void PathCalc_UC::setGo(int p_Go) {
    if (Go != p_Go)  {
        Go = p_Go;
        FLOW_DATA_SEND(Go, Go_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void PathCalc_UC::setPathAlgo(int p_PathAlgo) {
    if (PathAlgo != p_PathAlgo)  {
        PathAlgo = p_PathAlgo;
        FLOW_DATA_SEND(PathAlgo, PathAlgo_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void PathCalc_UC::setStateBot(int p_StateBot) {
    if (StateBot != p_StateBot) {
        StateBot = p_StateBot;
        FLOW_DATA_RECEIVE("StateBot", StateBot, x2String);
    }
    
}
//#]

PathCalc_UC::Destination_SP_C* PathCalc_UC::getDestination_SP(void) const {
    return (PathCalc_UC::Destination_SP_C*) &Destination_SP;
}

PathCalc_UC::Destination_SP_C* PathCalc_UC::get_Destination_SP(void) const {
    return (PathCalc_UC::Destination_SP_C*) &Destination_SP;
}

PathCalc_UC::PathAlgo_SP_C* PathCalc_UC::getPathAlgo_SP(void) const {
    return (PathCalc_UC::PathAlgo_SP_C*) &PathAlgo_SP;
}

PathCalc_UC::PathAlgo_SP_C* PathCalc_UC::get_PathAlgo_SP(void) const {
    return (PathCalc_UC::PathAlgo_SP_C*) &PathAlgo_SP;
}

PathCalc_UC::StateBot_SP_C* PathCalc_UC::getStateBot_SP(void) const {
    return (PathCalc_UC::StateBot_SP_C*) &StateBot_SP;
}

PathCalc_UC::StateBot_SP_C* PathCalc_UC::get_StateBot_SP(void) const {
    return (PathCalc_UC::StateBot_SP_C*) &StateBot_SP;
}

PathCalc_UC::Go_SP_C* PathCalc_UC::getGo_SP(void) const {
    return (PathCalc_UC::Go_SP_C*) &Go_SP;
}

PathCalc_UC::Go_SP_C* PathCalc_UC::get_Go_SP(void) const {
    return (PathCalc_UC::Go_SP_C*) &Go_SP;
}

const int PathCalc_UC::getDestination(void) const {
    return Destination;
}

const int PathCalc_UC::getGo(void) const {
    return Go;
}

const int PathCalc_UC::getPathAlgo(void) const {
    return PathAlgo;
}

const char* PathCalc_UC::getPathMsg(void) const {
    return PathMsg;
}

void PathCalc_UC::setPathMsg(char* const p_PathMsg) {
    PathMsg = p_PathMsg;
    NOTIFY_SET_OPERATION;
}

const int PathCalc_UC::getStateBot(void) const {
    return StateBot;
}

bool PathCalc_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PathCalc_UC::initRelations(void) {
    if (get_StateBot_SP() != NULL) {
        get_StateBot_SP()->connectPathCalc_UC(this);
    }
}

void PathCalc_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PathCalc_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PathCalc_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evGoToDest_ContrPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.state_3");
                    pushNullTransition();
                    rootState_subState = state_3;
                    rootState_active = state_3;
                    //#[ state state_3.(Entry) 
                    GoToDest();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evPathPlan_ContrPkg_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("4");
                        NOTIFY_STATE_EXITED("ROOT.Idle");
                        NOTIFY_STATE_ENTERED("ROOT.SetPathAlgo");
                        rootState_subState = SetPathAlgo;
                        rootState_active = SetPathAlgo;
                        //#[ state SetPathAlgo.(Entry) 
                        MoveDestAlgo();
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("4");
                        res = eventConsumed;
                    }
                else {
                    if(IS_EVENT_TYPE_OF(evSetDest_ContrPkg_id) == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.Idle");
                            NOTIFY_STATE_ENTERED("ROOT.SetDest");
                            rootState_subState = SetDest;
                            rootState_active = SetDest;
                            //#[ state SetDest.(Entry) 
                            SetDestination();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    }
                    
                }
                
            
        }
        break;
        // State SetDest
        case SetDest:
        {
            if(IS_EVENT_TYPE_OF(evSetDest_ContrPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.SetDest");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SetPathAlgo
        case SetPathAlgo:
        {
            if(IS_EVENT_TYPE_OF(evSetDest_ContrPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.SetPathAlgo");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State state_3
        case state_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_3");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("6");
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
void OMAnimatedPathCalc_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Destination", x2String(myReal->Destination));
    aomsAttributes->addAttribute("PathAlgo", x2String(myReal->PathAlgo));
    aomsAttributes->addAttribute("PathMsg", x2String(myReal->PathMsg));
    aomsAttributes->addAttribute("Go", x2String(myReal->Go));
    aomsAttributes->addAttribute("StateBot", x2String(myReal->StateBot));
}

void OMAnimatedPathCalc_UC::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedPathCalc_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PathCalc_UC::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case PathCalc_UC::SetDest:
        {
            SetDest_serializeStates(aomsState);
        }
        break;
        case PathCalc_UC::SetPathAlgo:
        {
            SetPathAlgo_serializeStates(aomsState);
        }
        break;
        case PathCalc_UC::state_3:
        {
            state_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPathCalc_UC::state_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_3");
}

void OMAnimatedPathCalc_UC::SetPathAlgo_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SetPathAlgo");
}

void OMAnimatedPathCalc_UC::SetDest_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SetDest");
}

void OMAnimatedPathCalc_UC::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(PathCalc_UC, ContrPkg, ContrPkg, false, OMAnimatedPathCalc_UC)

IMPLEMENT_META_OP(OMAnimatedPathCalc_UC, ContrPkg_PathCalc_UC_setDestination_int, "setDestination", FALSE, "setDestination(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_PathCalc_UC_setDestination_int, PathCalc_UC, setDestination(p_Destination), NO_OP())

IMPLEMENT_META_OP(OMAnimatedPathCalc_UC, ContrPkg_PathCalc_UC_setGo_int, "setGo", FALSE, "setGo(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_PathCalc_UC_setGo_int, PathCalc_UC, setGo(p_Go), NO_OP())

IMPLEMENT_META_OP(OMAnimatedPathCalc_UC, ContrPkg_PathCalc_UC_setPathAlgo_int, "setPathAlgo", FALSE, "setPathAlgo(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_PathCalc_UC_setPathAlgo_int, PathCalc_UC, setPathAlgo(p_PathAlgo), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\PathCalc_UC.cpp
*********************************************************************/

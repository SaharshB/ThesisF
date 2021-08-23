/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: BotMov_UC
//!	Generated Date	: Thu, 22, Jul 2021  
	File Path	: MyConf\DefaultConfig\BotMov_UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "BotMov_UC.h"
//#[ ignore
#define ContrPkg_BotMov_UC_BotMov_UC_SERIALIZE OM_NO_OP

#define ContrPkg_BotMov_UC_BotDir_SERIALIZE OM_NO_OP

#define ContrPkg_BotMov_UC_BotMove_SERIALIZE OM_NO_OP

#define ContrPkg_BotMov_UC_MoveSpeed_SERIALIZE OM_NO_OP

#define OMAnim_ContrPkg_BotMov_UC_setMovDir_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_MovDir)

#define OMAnim_ContrPkg_BotMov_UC_setMovDir_int_SERIALIZE_RET_VAL

#define OMAnim_ContrPkg_BotMov_UC_setSpeed_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Speed)

#define OMAnim_ContrPkg_BotMov_UC_setSpeed_int_SERIALIZE_RET_VAL

#define OMAnim_ContrPkg_BotMov_UC_setStateBot_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_StateBot)

#define OMAnim_ContrPkg_BotMov_UC_setStateBot_int_SERIALIZE_RET_VAL
//#]

//## package ContrPkg

//## class BotMov_UC
//#[ ignore
BotMov_UC::Speed_SP_C::Speed_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

BotMov_UC::Speed_SP_C::~Speed_SP_C(void) {
    cleanUpRelations();
}

void BotMov_UC::Speed_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* BotMov_UC::Speed_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* BotMov_UC::Speed_SP_C::getOutBound(void) {
    return this;
}

void BotMov_UC::Speed_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void BotMov_UC::Speed_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

BotMov_UC::MovDir_SP_C::MovDir_SP_C(void) : intFlowInterface(), _p_(0), itsIntFlowInterface(NULL) {
}

BotMov_UC::MovDir_SP_C::~MovDir_SP_C(void) {
    cleanUpRelations();
}

void BotMov_UC::MovDir_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* BotMov_UC::MovDir_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* BotMov_UC::MovDir_SP_C::getOutBound(void) {
    return this;
}

void BotMov_UC::MovDir_SP_C::setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void BotMov_UC::MovDir_SP_C::cleanUpRelations(void) {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

BotMov_UC::StateBot_SP_C::StateBot_SP_C(void) : intFlowInterface(), _p_(0) {
}

BotMov_UC::StateBot_SP_C::~StateBot_SP_C(void) {
    cleanUpRelations();
}

void BotMov_UC::StateBot_SP_C::SetValue(int data, void * pCaller) {
    
    for(int iterI = 0 ; iterI < itsIntFlowInterface.getCount() ; iterI++)
    {
        itsIntFlowInterface[iterI]->SetValue(data,pCaller);
        if(iterI < itsIntFlowInterface.getCount() - 1)
        {
            FLOW_DATA_POP
        }
    }
    
}

intFlowInterface* BotMov_UC::StateBot_SP_C::getItsIntFlowInterface(void) {
    return this;
}

intFlowInterface* BotMov_UC::StateBot_SP_C::getOutBound(void) {
    return this;
}

intFlowInterface* BotMov_UC::StateBot_SP_C::getItsIntFlowInterfaceAt(Rhp_int32_t iterI) const {
    return itsIntFlowInterface.getAt(iterI);
}

void BotMov_UC::StateBot_SP_C::addItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.add(p_intFlowInterface);
}

void BotMov_UC::StateBot_SP_C::removeItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) {
    itsIntFlowInterface.remove(p_intFlowInterface);
}

void BotMov_UC::StateBot_SP_C::clearItsIntFlowInterface(void) {
    itsIntFlowInterface.removeAll();
}

int BotMov_UC::StateBot_SP_C::findItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) const {
    return itsIntFlowInterface.find(p_intFlowInterface);
}

void BotMov_UC::StateBot_SP_C::cleanUpRelations(void) {
    {
        itsIntFlowInterface.removeAll();
    }
}
//#]

BotMov_UC::BotMov_UC(IOxfActive* const theActiveContext) : OMReactive(), MovDir(1), MoveMsg("Stationary"), Speed(0), StateBot(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(BotMov_UC, BotMov_UC(), 0, ContrPkg_BotMov_UC_BotMov_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

BotMov_UC::~BotMov_UC(void) {
    NOTIFY_DESTRUCTOR(~BotMov_UC, true);
}

int BotMov_UC::BotDir(void) {
    NOTIFY_OPERATION(BotDir, BotDir(), 0, ContrPkg_BotMov_UC_BotDir_SERIALIZE);
    //#[ operation BotDir()
    if(StateBot!=1)
    {
    	MovDir=0;
    }
    else
    	MovDir=MovDir;
    
    return MovDir;
    //#]
}

bool BotMov_UC::BotMove(void) {
    NOTIFY_OPERATION(BotMove, BotMove(), 0, ContrPkg_BotMov_UC_BotMove_SERIALIZE);
    //#[ operation BotMove()
    if(StateBot==1)
    	MoveMsg="Manual";
    else
    	MoveMsg="Not Manual";
    
    return StateBot;
    //#]
}

int BotMov_UC::MoveSpeed(void) {
    NOTIFY_OPERATION(MoveSpeed, MoveSpeed(), 0, ContrPkg_BotMov_UC_MoveSpeed_SERIALIZE);
    //#[ operation MoveSpeed()
    return Speed;
    //#]
}

//#[ ignore
void BotMov_UC::setMovDir(int p_MovDir) {
    if (MovDir != p_MovDir)  {
        MovDir = p_MovDir;
        FLOW_DATA_SEND(MovDir, MovDir_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void BotMov_UC::setSpeed(int p_Speed) {
    if (Speed != p_Speed)  {
        Speed = p_Speed;
        FLOW_DATA_SEND(Speed, Speed_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}

void BotMov_UC::setStateBot(int p_StateBot) {
    if (StateBot != p_StateBot)  {
        StateBot = p_StateBot;
        FLOW_DATA_SEND(StateBot, StateBot_SP, SetValue, x2String);
    }
    NOTIFY_SET_OPERATION;
}
//#]

BotMov_UC::Speed_SP_C* BotMov_UC::getSpeed_SP(void) const {
    return (BotMov_UC::Speed_SP_C*) &Speed_SP;
}

BotMov_UC::Speed_SP_C* BotMov_UC::get_Speed_SP(void) const {
    return (BotMov_UC::Speed_SP_C*) &Speed_SP;
}

BotMov_UC::MovDir_SP_C* BotMov_UC::getMovDir_SP(void) const {
    return (BotMov_UC::MovDir_SP_C*) &MovDir_SP;
}

BotMov_UC::MovDir_SP_C* BotMov_UC::get_MovDir_SP(void) const {
    return (BotMov_UC::MovDir_SP_C*) &MovDir_SP;
}

BotMov_UC::StateBot_SP_C* BotMov_UC::getStateBot_SP(void) const {
    return (BotMov_UC::StateBot_SP_C*) &StateBot_SP;
}

BotMov_UC::StateBot_SP_C* BotMov_UC::get_StateBot_SP(void) const {
    return (BotMov_UC::StateBot_SP_C*) &StateBot_SP;
}

const int BotMov_UC::getMovDir(void) const {
    return MovDir;
}

const char* BotMov_UC::getMoveMsg(void) const {
    return MoveMsg;
}

void BotMov_UC::setMoveMsg(char* const p_MoveMsg) {
    MoveMsg = p_MoveMsg;
    NOTIFY_SET_OPERATION;
}

const int BotMov_UC::getSpeed(void) const {
    return Speed;
}

const int BotMov_UC::getStateBot(void) const {
    return StateBot;
}

bool BotMov_UC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void BotMov_UC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void BotMov_UC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus BotMov_UC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evMove_ContrPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.SetBotState");
                    pushNullTransition();
                    rootState_subState = SetBotState;
                    rootState_active = SetBotState;
                    //#[ state SetBotState.(Entry) 
                    StateBot = BotMove();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evSetDir_ContrPkg_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("6");
                        NOTIFY_STATE_EXITED("ROOT.Idle");
                        NOTIFY_STATE_ENTERED("ROOT.SetDirection");
                        pushNullTransition();
                        rootState_subState = SetDirection;
                        rootState_active = SetDirection;
                        //#[ state SetDirection.(Entry) 
                        BotDir();
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("6");
                        res = eventConsumed;
                    }
                else {
                    if(IS_EVENT_TYPE_OF(evSetSpeed_ContrPkg_id) == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            NOTIFY_STATE_EXITED("ROOT.Idle");
                            NOTIFY_STATE_ENTERED("ROOT.SetSpeed");
                            pushNullTransition();
                            rootState_subState = SetSpeed;
                            rootState_active = SetSpeed;
                            //#[ state SetSpeed.(Entry) 
                            MoveSpeed();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                    }
                    
                }
                
            
        }
        break;
        // State SetDirection
        case SetDirection:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SetDirection");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SetBotState
        case SetBotState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SetBotState");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SetSpeed
        case SetSpeed:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SetSpeed");
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
void OMAnimatedBotMov_UC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("MovDir", x2String(myReal->MovDir));
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
    aomsAttributes->addAttribute("StateBot", x2String(myReal->StateBot));
    aomsAttributes->addAttribute("MoveMsg", x2String(myReal->MoveMsg));
}

void OMAnimatedBotMov_UC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case BotMov_UC::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case BotMov_UC::SetDirection:
        {
            SetDirection_serializeStates(aomsState);
        }
        break;
        case BotMov_UC::SetBotState:
        {
            SetBotState_serializeStates(aomsState);
        }
        break;
        case BotMov_UC::SetSpeed:
        {
            SetSpeed_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedBotMov_UC::SetSpeed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SetSpeed");
}

void OMAnimatedBotMov_UC::SetDirection_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SetDirection");
}

void OMAnimatedBotMov_UC::SetBotState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SetBotState");
}

void OMAnimatedBotMov_UC::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(BotMov_UC, ContrPkg, ContrPkg, false, OMAnimatedBotMov_UC)

IMPLEMENT_META_OP(OMAnimatedBotMov_UC, ContrPkg_BotMov_UC_setMovDir_int, "setMovDir", FALSE, "setMovDir(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_BotMov_UC_setMovDir_int, BotMov_UC, setMovDir(p_MovDir), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBotMov_UC, ContrPkg_BotMov_UC_setSpeed_int, "setSpeed", FALSE, "setSpeed(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_BotMov_UC_setSpeed_int, BotMov_UC, setSpeed(p_Speed), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBotMov_UC, ContrPkg_BotMov_UC_setStateBot_int, "setStateBot", FALSE, "setStateBot(int)", 1)

IMPLEMENT_OP_CALL(ContrPkg_BotMov_UC_setStateBot_int, BotMov_UC, setStateBot(p_StateBot), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\BotMov_UC.cpp
*********************************************************************/

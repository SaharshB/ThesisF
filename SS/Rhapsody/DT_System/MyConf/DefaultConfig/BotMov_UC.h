/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: BotMov_UC
//!	Generated Date	: Sat, 19, Jun 2021  
	File Path	: MyConf\DefaultConfig\BotMov_UC.h
*********************************************************************/

#ifndef BotMov_UC_H
#define BotMov_UC_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include "ContrPkg.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class Speed_SP_C
#include "intFlowInterface.h"
//## auto_generated
#include "omcollec.h"
//#[ ignore
#define OMAnim_ContrPkg_BotMov_UC_setMovDir_int_ARGS_DECLARATION int p_MovDir;

#define OMAnim_ContrPkg_BotMov_UC_setSpeed_int_ARGS_DECLARATION int p_Speed;

#define OMAnim_ContrPkg_BotMov_UC_setStateBot_int_ARGS_DECLARATION int p_StateBot;
//#]

//## package ContrPkg

//## class BotMov_UC
class BotMov_UC : public OMReactive {
public :

//#[ ignore
    //## package ContrPkg
    class Speed_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Speed_SP_C(void);
        
        //## auto_generated
        virtual ~Speed_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        //## auto_generated
        intFlowInterface* getOutBound(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class MovDir_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        MovDir_SP_C(void);
        
        //## auto_generated
        virtual ~MovDir_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        //## auto_generated
        intFlowInterface* getOutBound(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class StateBot_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        StateBot_SP_C(void);
        
        //## auto_generated
        virtual ~StateBot_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        //## auto_generated
        intFlowInterface* getOutBound(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterfaceAt(Rhp_int32_t iterI) const;
        
        //## auto_generated
        void addItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
        
        //## auto_generated
        void removeItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
        
        //## auto_generated
        void clearItsIntFlowInterface(void);
        
        //## auto_generated
        int findItsIntFlowInterface(intFlowInterface* const p_intFlowInterface) const;
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMCollection<intFlowInterface*> itsIntFlowInterface;		//## link itsIntFlowInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedBotMov_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit BotMov_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~BotMov_UC(void);
    
    ////    Operations    ////
    
    //## operation BotDir()
    virtual int BotDir(void);
    
    //## operation BotMove()
    virtual bool BotMove(void);
    
    //## operation MoveSpeed()
    virtual int MoveSpeed(void);
    
//#[ ignore
    void setMovDir(int p_MovDir);
    
    void setSpeed(int p_Speed);
    
    void setStateBot(int p_StateBot);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    Speed_SP_C* getSpeed_SP(void) const;
    
    //## auto_generated
    Speed_SP_C* get_Speed_SP(void) const;
    
    //## auto_generated
    MovDir_SP_C* getMovDir_SP(void) const;
    
    //## auto_generated
    MovDir_SP_C* get_MovDir_SP(void) const;
    
    //## auto_generated
    StateBot_SP_C* getStateBot_SP(void) const;
    
    //## auto_generated
    StateBot_SP_C* get_StateBot_SP(void) const;
    
    //## auto_generated
    const int getMovDir(void) const;
    
    //## auto_generated
    const char* getMoveMsg(void) const;
    
    //## auto_generated
    void setMoveMsg(char* const p_MoveMsg);
    
    //## auto_generated
    const int getSpeed(void) const;
    
    //## auto_generated
    const int getStateBot(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int MovDir;		//## attribute MovDir
    
    char* MoveMsg;		//## attribute MoveMsg
    
    int Speed;		//## attribute Speed
    
    int StateBot;		//## attribute StateBot
    
    ////    Relations and components    ////
    
//#[ ignore
    Speed_SP_C Speed_SP;
    
    MovDir_SP_C MovDir_SP;
    
    StateBot_SP_C StateBot_SP;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SetSpeed:
    //## statechart_method
    inline RhpBoolean SetSpeed_IN(void) const;
    
    // SetDirection:
    //## statechart_method
    inline RhpBoolean SetDirection_IN(void) const;
    
    // SetBotState:
    //## statechart_method
    inline RhpBoolean SetBotState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum BotMov_UC_Enum {
        OMNonState = 0,
        SetSpeed = 1,
        SetDirection = 2,
        SetBotState = 3,
        Idle = 4
    };
//#]

private :

//#[ ignore
    BotMov_UC_Enum rootState_subState;
    
    BotMov_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(ContrPkg_BotMov_UC_setMovDir_int)

DECLARE_OPERATION_CLASS(ContrPkg_BotMov_UC_setSpeed_int)

DECLARE_OPERATION_CLASS(ContrPkg_BotMov_UC_setStateBot_int)

//#[ ignore
class OMAnimatedBotMov_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(BotMov_UC, OMAnimatedBotMov_UC)
    
    DECLARE_META_OP(ContrPkg_BotMov_UC_setMovDir_int)
    
    DECLARE_META_OP(ContrPkg_BotMov_UC_setSpeed_int)
    
    DECLARE_META_OP(ContrPkg_BotMov_UC_setStateBot_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SetSpeed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SetDirection_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SetBotState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean BotMov_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean BotMov_UC::SetSpeed_IN(void) const {
    return rootState_subState == SetSpeed;
}

inline RhpBoolean BotMov_UC::SetDirection_IN(void) const {
    return rootState_subState == SetDirection;
}

inline RhpBoolean BotMov_UC::SetBotState_IN(void) const {
    return rootState_subState == SetBotState;
}

inline RhpBoolean BotMov_UC::Idle_IN(void) const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\BotMov_UC.h
*********************************************************************/

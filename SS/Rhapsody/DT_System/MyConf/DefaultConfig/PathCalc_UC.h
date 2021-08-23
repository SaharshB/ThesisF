/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: PathCalc_UC
//!	Generated Date	: Wed, 28, Jul 2021  
	File Path	: MyConf\DefaultConfig\PathCalc_UC.h
*********************************************************************/

#ifndef PathCalc_UC_H
#define PathCalc_UC_H

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
//## class PathCalc_UC
#include "intFlowInterface.h"
//## auto_generated
#include "omcollec.h"
//#[ ignore
#define OMAnim_ContrPkg_PathCalc_UC_setDestination_int_ARGS_DECLARATION int p_Destination;

#define OMAnim_ContrPkg_PathCalc_UC_setGo_int_ARGS_DECLARATION int p_Go;

#define OMAnim_ContrPkg_PathCalc_UC_setPathAlgo_int_ARGS_DECLARATION int p_PathAlgo;
//#]

//## package ContrPkg

//## class PathCalc_UC
class PathCalc_UC : public OMReactive, public intFlowInterface {
public :

//#[ ignore
    //## package ContrPkg
    class Destination_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Destination_SP_C(void);
        
        //## auto_generated
        virtual ~Destination_SP_C(void);
        
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
    
    //## package ContrPkg
    class PathAlgo_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        PathAlgo_SP_C(void);
        
        //## auto_generated
        virtual ~PathAlgo_SP_C(void);
        
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
        void connectPathCalc_UC(PathCalc_UC* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
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
    class Go_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Go_SP_C(void);
        
        //## auto_generated
        virtual ~Go_SP_C(void);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedPathCalc_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PathCalc_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~PathCalc_UC(void);
    
    ////    Operations    ////
    
    //## operation GoToDest()
    virtual void GoToDest(void);
    
    //## operation MoveDestAlgo()
    virtual int MoveDestAlgo(void);
    
    //## operation SetDestination()
    virtual char SetDestination(void);
    
//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void setDestination(int p_Destination);
    
    void setGo(int p_Go);
    
    void setPathAlgo(int p_PathAlgo);
    
    void setStateBot(int p_StateBot);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    Destination_SP_C* getDestination_SP(void) const;
    
    //## auto_generated
    Destination_SP_C* get_Destination_SP(void) const;
    
    //## auto_generated
    PathAlgo_SP_C* getPathAlgo_SP(void) const;
    
    //## auto_generated
    PathAlgo_SP_C* get_PathAlgo_SP(void) const;
    
    //## auto_generated
    StateBot_SP_C* getStateBot_SP(void) const;
    
    //## auto_generated
    StateBot_SP_C* get_StateBot_SP(void) const;
    
    //## auto_generated
    Go_SP_C* getGo_SP(void) const;
    
    //## auto_generated
    Go_SP_C* get_Go_SP(void) const;
    
    //## auto_generated
    const int getDestination(void) const;
    
    //## auto_generated
    const int getGo(void) const;
    
    //## auto_generated
    const int getPathAlgo(void) const;
    
    //## auto_generated
    const char* getPathMsg(void) const;
    
    //## auto_generated
    void setPathMsg(char* const p_PathMsg);
    
    //## auto_generated
    const int getStateBot(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int Destination;		//## attribute Destination
    
    int Go;		//## attribute Go
    
    int PathAlgo;		//## attribute PathAlgo
    
    char* PathMsg;		//## attribute PathMsg
    
    int StateBot;		//## attribute StateBot
    
    ////    Relations and components    ////
    
//#[ ignore
    Destination_SP_C Destination_SP;
    
    PathAlgo_SP_C PathAlgo_SP;
    
    StateBot_SP_C StateBot_SP;
    
    Go_SP_C Go_SP;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // state_3:
    //## statechart_method
    inline RhpBoolean state_3_IN(void) const;
    
    // SetPathAlgo:
    //## statechart_method
    inline RhpBoolean SetPathAlgo_IN(void) const;
    
    // SetDest:
    //## statechart_method
    inline RhpBoolean SetDest_IN(void) const;
    
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
    enum PathCalc_UC_Enum {
        OMNonState = 0,
        state_3 = 1,
        SetPathAlgo = 2,
        SetDest = 3,
        Idle = 4
    };
//#]

private :

//#[ ignore
    PathCalc_UC_Enum rootState_subState;
    
    PathCalc_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(ContrPkg_PathCalc_UC_setDestination_int)

DECLARE_OPERATION_CLASS(ContrPkg_PathCalc_UC_setGo_int)

DECLARE_OPERATION_CLASS(ContrPkg_PathCalc_UC_setPathAlgo_int)

//#[ ignore
class OMAnimatedPathCalc_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PathCalc_UC, OMAnimatedPathCalc_UC)
    
    DECLARE_META_OP(ContrPkg_PathCalc_UC_setDestination_int)
    
    DECLARE_META_OP(ContrPkg_PathCalc_UC_setGo_int)
    
    DECLARE_META_OP(ContrPkg_PathCalc_UC_setPathAlgo_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SetPathAlgo_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SetDest_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean PathCalc_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean PathCalc_UC::state_3_IN(void) const {
    return rootState_subState == state_3;
}

inline RhpBoolean PathCalc_UC::SetPathAlgo_IN(void) const {
    return rootState_subState == SetPathAlgo;
}

inline RhpBoolean PathCalc_UC::SetDest_IN(void) const {
    return rootState_subState == SetDest;
}

inline RhpBoolean PathCalc_UC::Idle_IN(void) const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\PathCalc_UC.h
*********************************************************************/

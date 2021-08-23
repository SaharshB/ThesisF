/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Hologram_UC
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Hologram_UC.h
*********************************************************************/

#ifndef Hologram_UC_H
#define Hologram_UC_H

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
#include "IMRPkg.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class hologram_SP_C
#include "intFlowInterface.h"
//#[ ignore
#define OMAnim_IMRPkg_Hologram_UC_setHologram_int_ARGS_DECLARATION int p_hologram;
//#]

//## package IMRPkg

//## class Hologram_UC
class Hologram_UC : public OMReactive {
public :

//#[ ignore
    //## package IMRPkg
    class hologram_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        hologram_SP_C(void);
        
        //## auto_generated
        virtual ~hologram_SP_C(void);
        
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
    friend class OMAnimatedHologram_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Hologram_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Hologram_UC(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    hologram_SP_C* getHologram_SP(void) const;
    
    //## auto_generated
    hologram_SP_C* get_hologram_SP(void) const;
    
    //## auto_generated
    const int getHologram(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int hologram;		//## attribute hologram
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

//#[ ignore
    void setHologram(int p_hologram);
//#]

private :

//#[ ignore
    hologram_SP_C hologram_SP;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Hologram_On:
    //## statechart_method
    inline RhpBoolean Hologram_On_IN(void) const;
    
    // Hologram_Off:
    //## statechart_method
    inline RhpBoolean Hologram_Off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum Hologram_UC_Enum {
        OMNonState = 0,
        Hologram_On = 1,
        Hologram_Off = 2
    };
//#]

private :

//#[ ignore
    Hologram_UC_Enum rootState_subState;
    
    Hologram_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(IMRPkg_Hologram_UC_setHologram_int)

//#[ ignore
class OMAnimatedHologram_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Hologram_UC, OMAnimatedHologram_UC)
    
    DECLARE_META_OP(IMRPkg_Hologram_UC_setHologram_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Hologram_On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Hologram_Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Hologram_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Hologram_UC::Hologram_On_IN(void) const {
    return rootState_subState == Hologram_On;
}

inline RhpBoolean Hologram_UC::Hologram_Off_IN(void) const {
    return rootState_subState == Hologram_Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Hologram_UC.h
*********************************************************************/

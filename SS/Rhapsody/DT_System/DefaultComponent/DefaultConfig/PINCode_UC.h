/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PINCode_UC
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PINCode_UC.h
*********************************************************************/

#ifndef PINCode_UC_H
#define PINCode_UC_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class PINCode_UC
#include "intFlowInterface.h"
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
//## link itsLightControl_UC
class LightControl_UC;

//## package IMRPkg

//## class PINCode_UC
class PINCode_UC : public OMReactive, public intFlowInterface {
public :

//#[ ignore
    //## package IMRPkg
    class userCode_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        userCode_SP_C(void);
        
        //## auto_generated
        virtual ~userCode_SP_C(void);
        
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
    
    //## package IMRPkg
    class Door_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Door_SP_C(void);
        
        //## auto_generated
        virtual ~Door_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectPINCode_UC(PINCode_UC* part);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedPINCode_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PINCode_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~PINCode_UC(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    userCode_SP_C* getUserCode_SP(void) const;
    
    //## auto_generated
    Door_SP_C* getDoor_SP(void) const;
    
    //## auto_generated
    const int getInteriorLightIntensity(void) const;
    
    //## auto_generated
    void setInteriorLightIntensity(const int p_InteriorLightIntensity);
    
    //## auto_generated
    const int getUserCode(void) const;
    
    //## auto_generated
    const int getDoor(void) const;
    
    //## auto_generated
    const int getVerification(void) const;
    
    //## auto_generated
    void setVerification(const int p_verification);
    
    //## auto_generated
    const LightControl_UC* getItsLightControl_UC(void) const;
    
    //## auto_generated
    void setItsLightControl_UC(LightControl_UC* const p_LightControl_UC);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    int InteriorLightIntensity;		//## attribute InteriorLightIntensity
    
    int userCode;		//## attribute userCode
    
    int verification;		//## attribute verification
    
    ////    Relations and components    ////
    
    LightControl_UC* itsLightControl_UC;		//## link itsLightControl_UC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsLightControl_UC(LightControl_UC* const p_LightControl_UC);
    
    //## auto_generated
    void _setItsLightControl_UC(LightControl_UC* const p_LightControl_UC);
    
    //## auto_generated
    void _clearItsLightControl_UC(void);
    
    ////    Framework    ////
    
    //## auto_generated
    const RhpString getDisplayStatus(void) const;
    
    //## auto_generated
    void setDisplayStatus(const RhpString p_DisplayStatus);
    
//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void setDoor(int p_Door);
    
    void setUserCode(int p_userCode);
//#]

    //## auto_generated
    userCode_SP_C* get_userCode_SP(void) const;
    
    //## auto_generated
    Door_SP_C* get_Door_SP(void) const;

private :

    RhpString DisplayStatus;		//## attribute DisplayStatus
    
    int Door;		//## attribute Door
    
//#[ ignore
    userCode_SP_C userCode_SP;
    
    Door_SP_C Door_SP;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // state_5:
    //## statechart_method
    inline RhpBoolean state_5_IN(void) const;
    
    // Door_Open:
    //## statechart_method
    inline RhpBoolean Door_Open_IN(void) const;
    
    // Door_Closed:
    //## statechart_method
    inline RhpBoolean Door_Closed_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum PINCode_UC_Enum {
        OMNonState = 0,
        state_5 = 1,
        Door_Open = 2,
        Door_Closed = 3
    };
//#]

private :

//#[ ignore
    PINCode_UC_Enum rootState_subState;
    
    PINCode_UC_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPINCode_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PINCode_UC, OMAnimatedPINCode_UC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Door_Open_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Door_Closed_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean PINCode_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean PINCode_UC::state_5_IN(void) const {
    return rootState_subState == state_5;
}

inline RhpBoolean PINCode_UC::Door_Open_IN(void) const {
    return rootState_subState == Door_Open;
}

inline RhpBoolean PINCode_UC::Door_Closed_IN(void) const {
    return rootState_subState == Door_Closed;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PINCode_UC.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: MagCalc_UC
//!	Generated Date	: Thu, 22, Jul 2021  
	File Path	: MyConf\DefaultConfig\MagCalc_UC.h
*********************************************************************/

#ifndef MagCalc_UC_H
#define MagCalc_UC_H

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
//## class GetMagVal_SP_C
#include "intFlowInterface.h"
//## auto_generated
#include "omcollec.h"
//#[ ignore
#define OMAnim_ContrPkg_MagCalc_UC_setGetMagVal_int_ARGS_DECLARATION int p_GetMagVal;

#define OMAnim_ContrPkg_MagCalc_UC_setMagCalcMethod_int_ARGS_DECLARATION int p_MagCalcMethod;
//#]

//## package ContrPkg

//## class MagCalc_UC
class MagCalc_UC : public OMReactive {
public :

//#[ ignore
    //## package ContrPkg
    class GetMagVal_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        GetMagVal_SP_C(void);
        
        //## auto_generated
        virtual ~GetMagVal_SP_C(void);
        
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
    class MagCalcMethod_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        MagCalcMethod_SP_C(void);
        
        //## auto_generated
        virtual ~MagCalcMethod_SP_C(void);
        
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
    friend class OMAnimatedMagCalc_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit MagCalc_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~MagCalc_UC(void);
    
    ////    Operations    ////
    
    //## operation CurrentMagVal()
    virtual int CurrentMagVal(void);
    
    //## operation MagValExtrpMethod()
    virtual int MagValExtrpMethod(void);
    
//#[ ignore
    void setGetMagVal(int p_GetMagVal);
    
    void setMagCalcMethod(int p_MagCalcMethod);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    GetMagVal_SP_C* getGetMagVal_SP(void) const;
    
    //## auto_generated
    GetMagVal_SP_C* get_GetMagVal_SP(void) const;
    
    //## auto_generated
    MagCalcMethod_SP_C* getMagCalcMethod_SP(void) const;
    
    //## auto_generated
    MagCalcMethod_SP_C* get_MagCalcMethod_SP(void) const;
    
    //## auto_generated
    const int getGetMagVal(void) const;
    
    //## auto_generated
    const int getMagCalcMethod(void) const;
    
    //## auto_generated
    const char getMagMsg(void) const;
    
    //## auto_generated
    void setMagMsg(const char p_MagMsg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int GetMagVal;		//## attribute GetMagVal
    
    int MagCalcMethod;		//## attribute MagCalcMethod
    
    char MagMsg;		//## attribute MagMsg
    
    ////    Relations and components    ////
    
//#[ ignore
    GetMagVal_SP_C GetMagVal_SP;
    
    MagCalcMethod_SP_C MagCalcMethod_SP;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // MagExtrpMethod:
    //## statechart_method
    inline RhpBoolean MagExtrpMethod_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // GetCurrentVal:
    //## statechart_method
    inline RhpBoolean GetCurrentVal_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum MagCalc_UC_Enum {
        OMNonState = 0,
        MagExtrpMethod = 1,
        Idle = 2,
        GetCurrentVal = 3
    };
//#]

private :

//#[ ignore
    MagCalc_UC_Enum rootState_subState;
    
    MagCalc_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(ContrPkg_MagCalc_UC_setGetMagVal_int)

DECLARE_OPERATION_CLASS(ContrPkg_MagCalc_UC_setMagCalcMethod_int)

//#[ ignore
class OMAnimatedMagCalc_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(MagCalc_UC, OMAnimatedMagCalc_UC)
    
    DECLARE_META_OP(ContrPkg_MagCalc_UC_setGetMagVal_int)
    
    DECLARE_META_OP(ContrPkg_MagCalc_UC_setMagCalcMethod_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MagExtrpMethod_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GetCurrentVal_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean MagCalc_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean MagCalc_UC::MagExtrpMethod_IN(void) const {
    return rootState_subState == MagExtrpMethod;
}

inline RhpBoolean MagCalc_UC::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean MagCalc_UC::GetCurrentVal_IN(void) const {
    return rootState_subState == GetCurrentVal;
}

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\MagCalc_UC.h
*********************************************************************/

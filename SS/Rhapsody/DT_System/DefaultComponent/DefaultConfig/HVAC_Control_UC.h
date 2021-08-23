/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_Control_UC
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\HVAC_Control_UC.h
*********************************************************************/

#ifndef HVAC_Control_UC_H
#define HVAC_Control_UC_H

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
//## class FanSpeed_SP_C
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

//#[ ignore
#define OMAnim_IMRPkg_HVAC_Control_UC_setStateHVAC_int_ARGS_DECLARATION int p_StateHVAC;

#define OMAnim_IMRPkg_HVAC_Control_UC_setTemperature_int_ARGS_DECLARATION int p_temperature;
//#]

//## package IMRPkg

//## class HVAC_Control_UC
class HVAC_Control_UC : public OMReactive {
public :

//#[ ignore
    //## package IMRPkg
    class FanSpeed_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        FanSpeed_SP_C(void);
        
        //## auto_generated
        virtual ~FanSpeed_SP_C(void);
        
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
    class StateHVAC_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        StateHVAC_SP_C(void);
        
        //## auto_generated
        virtual ~StateHVAC_SP_C(void);
        
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
    class temperature_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        temperature_SP_C(void);
        
        //## auto_generated
        virtual ~temperature_SP_C(void);
        
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
    friend class OMAnimatedHVAC_Control_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit HVAC_Control_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~HVAC_Control_UC(void);
    
    ////    Operations    ////
    
    //## operation setTemp()
    virtual int setTemp(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    FanSpeed_SP_C* getFanSpeed_SP(void) const;
    
    //## auto_generated
    FanSpeed_SP_C* get_FanSpeed_SP(void) const;
    
    //## auto_generated
    const int getFanSpeed(void) const;
    
    //## auto_generated
    const LightControl_UC* getItsLightControl_UC(void) const;
    
    //## auto_generated
    void setItsLightControl_UC(LightControl_UC* const p_LightControl_UC);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int FanSpeed;		//## attribute FanSpeed
    
    int StateHVAC;		//## attribute StateHVAC
    
    int temperature;		//## attribute temperature
    
    ////    Relations and components    ////
    
    LightControl_UC* itsLightControl_UC;		//## link itsLightControl_UC
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## auto_generated
    const LightControl_UC* getItsLightControl_UC_1(void) const;
    
    //## auto_generated
    void setItsLightControl_UC_1(LightControl_UC* const p_LightControl_UC);

private :

    LightControl_UC* itsLightControl_UC_1;		//## link itsLightControl_UC_1

public :

    //## auto_generated
    void __setItsLightControl_UC_1(LightControl_UC* const p_LightControl_UC);
    
    //## auto_generated
    void _setItsLightControl_UC_1(LightControl_UC* const p_LightControl_UC);
    
    //## auto_generated
    void _clearItsLightControl_UC_1(void);
    
//#[ ignore
    void setFanSpeed(int p_FanSpeed);
    
    void setStateHVAC(int p_StateHVAC);
    
    void setTemperature(int p_temperature);
//#]

    //## auto_generated
    StateHVAC_SP_C* getStateHVAC_SP(void) const;
    
    //## auto_generated
    StateHVAC_SP_C* get_StateHVAC_SP(void) const;
    
    //## auto_generated
    temperature_SP_C* getTemperature_SP(void) const;
    
    //## auto_generated
    temperature_SP_C* get_temperature_SP(void) const;
    
    //## auto_generated
    const RhpString getMsg(void) const;
    
    //## auto_generated
    void setMsg(const RhpString p_Msg);
    
    //## auto_generated
    const int getStateHVAC(void) const;
    
    //## auto_generated
    const int getTemperature(void) const;

private :

    RhpString Msg;		//## attribute Msg
    
//#[ ignore
    FanSpeed_SP_C FanSpeed_SP;
    
    StateHVAC_SP_C StateHVAC_SP;
    
    temperature_SP_C temperature_SP;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // HVAC_on:
    //## statechart_method
    inline RhpBoolean HVAC_on_IN(void) const;
    
    // HVAC_off:
    //## statechart_method
    inline RhpBoolean HVAC_off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum HVAC_Control_UC_Enum {
        OMNonState = 0,
        HVAC_on = 1,
        HVAC_off = 2
    };
//#]

private :

//#[ ignore
    HVAC_Control_UC_Enum rootState_subState;
    
    HVAC_Control_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(IMRPkg_HVAC_Control_UC_setStateHVAC_int)

DECLARE_OPERATION_CLASS(IMRPkg_HVAC_Control_UC_setTemperature_int)

//#[ ignore
class OMAnimatedHVAC_Control_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(HVAC_Control_UC, OMAnimatedHVAC_Control_UC)
    
    DECLARE_META_OP(IMRPkg_HVAC_Control_UC_setStateHVAC_int)
    
    DECLARE_META_OP(IMRPkg_HVAC_Control_UC_setTemperature_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HVAC_on_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HVAC_off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean HVAC_Control_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean HVAC_Control_UC::HVAC_on_IN(void) const {
    return rootState_subState == HVAC_on;
}

inline RhpBoolean HVAC_Control_UC::HVAC_off_IN(void) const {
    return rootState_subState == HVAC_off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_Control_UC.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LightControl_UC
//!	Generated Date	: Mon, 6, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\LightControl_UC.h
*********************************************************************/

#ifndef LightControl_UC_H
#define LightControl_UC_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "omcollec.h"
//## class InteriorLightIntensity_SP_C
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
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsHVAC_Control_UC
class HVAC_Control_UC;

//## link itsPINCode_UC
class PINCode_UC;

//#[ ignore
#define OMAnim_IMRPkg_LightControl_UC_setInteriorLightIntensity_int_ARGS_DECLARATION int p_InteriorLightIntensity;
//#]

//## package IMRPkg

//## class LightControl_UC
class LightControl_UC : public OMReactive {
public :

//#[ ignore
    //## package IMRPkg
    class InteriorLightIntensity_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        InteriorLightIntensity_SP_C(void);
        
        //## auto_generated
        virtual ~InteriorLightIntensity_SP_C(void);
        
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
    friend class OMAnimatedLightControl_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit LightControl_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~LightControl_UC(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    InteriorLightIntensity_SP_C* getInteriorLightIntensity_SP(void) const;
    
    //## auto_generated
    InteriorLightIntensity_SP_C* get_InteriorLightIntensity_SP(void) const;
    
    //## auto_generated
    OMIterator<int> getAmbientLightIntensity(void) const;
    
    //## auto_generated
    void setAmbientLightIntensity(const int p_AmbientLightIntensity);
    
    //## auto_generated
    const int getInteriorLightIntensity(void) const;
    
    //## auto_generated
    const PINCode_UC* getItsPINCode_UC(void) const;
    
    //## auto_generated
    void setItsPINCode_UC(PINCode_UC* const p_PINCode_UC);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    OMCollection<int> AmbientLightIntensity;		//## attribute AmbientLightIntensity
    
    int InteriorLightIntensity;		//## attribute InteriorLightIntensity
    
    ////    Relations and components    ////
    
    PINCode_UC* itsPINCode_UC;		//## link itsPINCode_UC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPINCode_UC(PINCode_UC* const p_PINCode_UC);
    
    //## auto_generated
    void _setItsPINCode_UC(PINCode_UC* const p_PINCode_UC);
    
    //## auto_generated
    void _clearItsPINCode_UC(void);
    
    //## operation setIntensity()
    virtual int setIntensity(void);
    
    //## auto_generated
    const HVAC_Control_UC* getItsHVAC_Control_UC(void) const;
    
    //## auto_generated
    void setItsHVAC_Control_UC(HVAC_Control_UC* const p_HVAC_Control_UC);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);

private :

    HVAC_Control_UC* itsHVAC_Control_UC;		//## link itsHVAC_Control_UC

public :

    //## auto_generated
    void __setItsHVAC_Control_UC(HVAC_Control_UC* const p_HVAC_Control_UC);
    
    //## auto_generated
    void _setItsHVAC_Control_UC(HVAC_Control_UC* const p_HVAC_Control_UC);
    
    //## auto_generated
    void _clearItsHVAC_Control_UC(void);
    
//#[ ignore
    void setInteriorLightIntensity(int p_InteriorLightIntensity);
//#]

private :

//#[ ignore
    InteriorLightIntensity_SP_C InteriorLightIntensity_SP;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Lights:
    //## statechart_method
    inline RhpBoolean Lights_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum LightControl_UC_Enum {
        OMNonState = 0,
        Lights = 1
    };
//#]

private :

//#[ ignore
    LightControl_UC_Enum rootState_subState;
    
    LightControl_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(IMRPkg_LightControl_UC_setInteriorLightIntensity_int)

//#[ ignore
class OMAnimatedLightControl_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(LightControl_UC, OMAnimatedLightControl_UC)
    
    DECLARE_META_OP(IMRPkg_LightControl_UC_setInteriorLightIntensity_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Lights_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean LightControl_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean LightControl_UC::Lights_IN(void) const {
    return rootState_subState == Lights;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LightControl_UC.h
*********************************************************************/

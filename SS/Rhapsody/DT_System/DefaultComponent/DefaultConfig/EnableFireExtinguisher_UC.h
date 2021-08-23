/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EnableFireExtinguisher_UC
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\EnableFireExtinguisher_UC.h
*********************************************************************/

#ifndef EnableFireExtinguisher_UC_H
#define EnableFireExtinguisher_UC_H

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
//## link itsDetectFire_UC
class DetectFire_UC;

//## link itsTriggerAlarm_UC
class TriggerAlarm_UC;

//## package IMRPkg

//## class EnableFireExtinguisher_UC
class EnableFireExtinguisher_UC : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEnableFireExtinguisher_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit EnableFireExtinguisher_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~EnableFireExtinguisher_UC(void);
    
    ////    Operations    ////
    
    //## operation enableExtinguisher()
    virtual bool enableExtinguisher(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getExtinguisher(void) const;
    
    //## auto_generated
    const DetectFire_UC* getItsDetectFire_UC(void) const;
    
    //## auto_generated
    void setItsDetectFire_UC(DetectFire_UC* const p_DetectFire_UC);
    
    //## auto_generated
    const TriggerAlarm_UC* getItsTriggerAlarm_UC(void) const;
    
    //## auto_generated
    void setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    bool Extinguisher;		//## attribute Extinguisher
    
    ////    Relations and components    ////
    
    DetectFire_UC* itsDetectFire_UC;		//## link itsDetectFire_UC
    
    TriggerAlarm_UC* itsTriggerAlarm_UC;		//## link itsTriggerAlarm_UC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDetectFire_UC(DetectFire_UC* const p_DetectFire_UC);
    
    //## auto_generated
    void _setItsDetectFire_UC(DetectFire_UC* const p_DetectFire_UC);
    
    //## auto_generated
    void _clearItsDetectFire_UC(void);
    
    //## auto_generated
    void __setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC);
    
    //## auto_generated
    void _setItsTriggerAlarm_UC(TriggerAlarm_UC* const p_TriggerAlarm_UC);
    
    //## auto_generated
    void _clearItsTriggerAlarm_UC(void);
    
    ////    Framework    ////
    
    //## auto_generated
    void setExtinguisher(const bool p_Extinguisher);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // sendaction_4:
    //## statechart_method
    inline RhpBoolean sendaction_4_IN(void) const;
    
    // sendaction_3:
    //## statechart_method
    inline RhpBoolean sendaction_3_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // FireDetection:
    //## statechart_method
    inline RhpBoolean FireDetection_IN(void) const;
    
    // Extinguisher_Enabled:
    //## statechart_method
    inline RhpBoolean Extinguisher_Enabled_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum EnableFireExtinguisher_UC_Enum {
        OMNonState = 0,
        sendaction_4 = 1,
        sendaction_3 = 2,
        Idle = 3,
        FireDetection = 4,
        Extinguisher_Enabled = 5
    };
//#]

private :

//#[ ignore
    EnableFireExtinguisher_UC_Enum rootState_subState;
    
    EnableFireExtinguisher_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEnableFireExtinguisher_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(EnableFireExtinguisher_UC, OMAnimatedEnableFireExtinguisher_UC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FireDetection_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Extinguisher_Enabled_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean EnableFireExtinguisher_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean EnableFireExtinguisher_UC::sendaction_4_IN(void) const {
    return rootState_subState == sendaction_4;
}

inline RhpBoolean EnableFireExtinguisher_UC::sendaction_3_IN(void) const {
    return rootState_subState == sendaction_3;
}

inline RhpBoolean EnableFireExtinguisher_UC::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean EnableFireExtinguisher_UC::FireDetection_IN(void) const {
    return rootState_subState == FireDetection;
}

inline RhpBoolean EnableFireExtinguisher_UC::Extinguisher_Enabled_IN(void) const {
    return rootState_subState == Extinguisher_Enabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EnableFireExtinguisher_UC.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IMR
//!	Generated Date	: Mon, 6, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\IMR.h
*********************************************************************/

#ifndef IMR_H
#define IMR_H

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
//## classInstance itsDetectFire_UC
#include "DetectFire_UC.h"
//## classInstance itsEnableFireExtinguisher_UC
#include "EnableFireExtinguisher_UC.h"
//## classInstance itsHVAC_Control_UC
#include "HVAC_Control_UC.h"
//## classInstance itsLightControl_UC
#include "LightControl_UC.h"
//## classInstance itsPINCode_UC
#include "PINCode_UC.h"
//## classInstance itsPlaceEmergencyCall
#include "PlaceEmergencyCall.h"
//## classInstance itsSendToUnity
#include "SendToUnity.h"
//## classInstance itsTriggerAlarm_UC
#include "TriggerAlarm_UC.h"
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
//## classInstance itsHologram_UC
#include "Hologram_UC.h"
//## package IMRPkg

//## class IMR
class IMR : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIMR;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit IMR(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~IMR(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DetectFire_UC* getItsDetectFire_UC(void) const;
    
    //## auto_generated
    const EnableFireExtinguisher_UC* getItsEnableFireExtinguisher_UC(void) const;
    
    //## auto_generated
    const HVAC_Control_UC* getItsHVAC_Control_UC(void) const;
    
    //## auto_generated
    const LightControl_UC* getItsLightControl_UC(void) const;
    
    //## auto_generated
    const PINCode_UC* getItsPINCode_UC(void) const;
    
    //## auto_generated
    const PlaceEmergencyCall* getItsPlaceEmergencyCall(void) const;
    
    //## auto_generated
    const SendToUnity* getItsSendToUnity(void) const;
    
    //## auto_generated
    const TriggerAlarm_UC* getItsTriggerAlarm_UC(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
    
    //## auto_generated
    const Hologram_UC* getItsHologram_UC(void) const;

private :

    DetectFire_UC itsDetectFire_UC;		//## classInstance itsDetectFire_UC
    
    EnableFireExtinguisher_UC itsEnableFireExtinguisher_UC;		//## classInstance itsEnableFireExtinguisher_UC
    
    HVAC_Control_UC itsHVAC_Control_UC;		//## classInstance itsHVAC_Control_UC
    
    Hologram_UC itsHologram_UC;		//## classInstance itsHologram_UC
    
    LightControl_UC itsLightControl_UC;		//## classInstance itsLightControl_UC
    
    PINCode_UC itsPINCode_UC;		//## classInstance itsPINCode_UC
    
    PlaceEmergencyCall itsPlaceEmergencyCall;		//## classInstance itsPlaceEmergencyCall
    
    SendToUnity itsSendToUnity;		//## classInstance itsSendToUnity
    
    TriggerAlarm_UC itsTriggerAlarm_UC;		//## classInstance itsTriggerAlarm_UC
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIMR : virtual public AOMInstance {
    DECLARE_META(IMR, OMAnimatedIMR)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IMR.h
*********************************************************************/

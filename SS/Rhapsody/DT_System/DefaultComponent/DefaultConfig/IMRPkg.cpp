/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IMRPkg
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\IMRPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## classInstance itsDetectFire_UC
#include "DetectFire_UC.h"
//## classInstance itsEnableFireExtinguisher_UC
#include "EnableFireExtinguisher_UC.h"
//## classInstance itsHVAC_Control_UC
#include "HVAC_Control_UC.h"
//## auto_generated
#include "IMR.h"
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
#include "IMRPkg.h"
//## classInstance itsHologram_UC
#include "Hologram_UC.h"
//#[ ignore
#define evAlarm_SERIALIZE OM_NO_OP

#define evAlarm_UNSERIALIZE OM_NO_OP

#define evAlarm_CONSTRUCTOR evAlarm()

#define evFireDetected_SERIALIZE OM_NO_OP

#define evFireDetected_UNSERIALIZE OM_NO_OP

#define evFireDetected_CONSTRUCTOR evFireDetected()

#define evPhoneCall_SERIALIZE OM_NO_OP

#define evPhoneCall_UNSERIALIZE OM_NO_OP

#define evPhoneCall_CONSTRUCTOR evPhoneCall()

#define evStopAlarm_SERIALIZE OM_NO_OP

#define evStopAlarm_UNSERIALIZE OM_NO_OP

#define evStopAlarm_CONSTRUCTOR evStopAlarm()

#define evStopExtinguisher_SERIALIZE OM_NO_OP

#define evStopExtinguisher_UNSERIALIZE OM_NO_OP

#define evStopExtinguisher_CONSTRUCTOR evStopExtinguisher()

#define evDoorOpen_SERIALIZE OM_NO_OP

#define evDoorOpen_UNSERIALIZE OM_NO_OP

#define evDoorOpen_CONSTRUCTOR evDoorOpen()

#define evReqAccess_SERIALIZE OM_NO_OP

#define evReqAccess_UNSERIALIZE OM_NO_OP

#define evReqAccess_CONSTRUCTOR evReqAccess()

#define evTunHVACOn_SERIALIZE OM_NO_OP

#define evTunHVACOn_UNSERIALIZE OM_NO_OP

#define evTunHVACOn_CONSTRUCTOR evTunHVACOn()

#define evTunHVAVOff_SERIALIZE OM_NO_OP

#define evTunHVAVOff_UNSERIALIZE OM_NO_OP

#define evTunHVAVOff_CONSTRUCTOR evTunHVAVOff()

#define evHologram_SERIALIZE OM_NO_OP

#define evHologram_UNSERIALIZE OM_NO_OP

#define evHologram_CONSTRUCTOR evHologram()

#define evHologramCall_SERIALIZE OM_NO_OP

#define evHologramCall_UNSERIALIZE OM_NO_OP

#define evHologramCall_CONSTRUCTOR evHologramCall()
//#]

//## package IMRPkg


//## classInstance itsDetectFire_UC
DetectFire_UC itsDetectFire_UC;

//## classInstance itsEnableFireExtinguisher_UC
EnableFireExtinguisher_UC itsEnableFireExtinguisher_UC;

//## classInstance itsHVAC_Control_UC
HVAC_Control_UC itsHVAC_Control_UC;

//## classInstance itsHologram_UC
Hologram_UC itsHologram_UC;

//## classInstance itsLightControl_UC
LightControl_UC itsLightControl_UC;

//## classInstance itsPINCode_UC
PINCode_UC itsPINCode_UC;

//## classInstance itsPlaceEmergencyCall
PlaceEmergencyCall itsPlaceEmergencyCall;

//## classInstance itsSendToUnity
SendToUnity itsSendToUnity;

//## classInstance itsTriggerAlarm_UC
TriggerAlarm_UC itsTriggerAlarm_UC;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(IMRPkg, IMRPkg)
#endif // _OMINSTRUMENT

void IMRPkg_initRelations(void) {
    {
        {
            itsPINCode_UC.setShouldDelete(false);
        }
        {
            itsTriggerAlarm_UC.setShouldDelete(false);
        }
        {
            itsPlaceEmergencyCall.setShouldDelete(false);
        }
        {
            itsEnableFireExtinguisher_UC.setShouldDelete(false);
        }
        {
            itsHVAC_Control_UC.setShouldDelete(false);
        }
        {
            itsLightControl_UC.setShouldDelete(false);
        }
        {
            itsHologram_UC.setShouldDelete(false);
        }
        {
            itsSendToUnity.setShouldDelete(false);
        }
        {
            itsDetectFire_UC.setShouldDelete(false);
        }
    }
    itsEnableFireExtinguisher_UC.setItsTriggerAlarm_UC(&itsTriggerAlarm_UC);
    itsTriggerAlarm_UC.setItsPlaceEmergencyCall(&itsPlaceEmergencyCall);
    {
        
        itsDetectFire_UC.get_fire_SP()->setItsIntFlowInterface(itsSendToUnity.get_fire_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsDetectFire_UC.get_Extinguisher_SP()->setItsIntFlowInterface(itsSendToUnity.get_Extinguisher_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsDetectFire_UC.get_Call_SP()->setItsIntFlowInterface(itsSendToUnity.get_Call_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsDetectFire_UC.get_alarm_SP()->setItsIntFlowInterface(itsSendToUnity.get_alarm_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsPINCode_UC.get_userCode_SP()->setItsIntFlowInterface(itsSendToUnity.get_userCode_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsSendToUnity.get_Door_SP()->setItsIntFlowInterface(itsPINCode_UC.get_Door_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsHVAC_Control_UC.get_FanSpeed_SP()->setItsIntFlowInterface(itsSendToUnity.get_fanSpeed_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsHVAC_Control_UC.get_StateHVAC_SP()->setItsIntFlowInterface(itsSendToUnity.get_StateHVAC_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsHVAC_Control_UC.get_temperature_SP()->setItsIntFlowInterface(itsSendToUnity.get_temperature_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsLightControl_UC.get_InteriorLightIntensity_SP()->setItsIntFlowInterface(itsSendToUnity.get_interiorLightIntensity_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsHologram_UC.get_hologram_SP()->setItsIntFlowInterface(itsSendToUnity.get_hologram_SP()->getItsIntFlowInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool IMRPkg_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsDetectFire_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsEnableFireExtinguisher_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsHVAC_Control_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsHologram_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsLightControl_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsPINCode_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsPlaceEmergencyCall.startBehavior();
        }
    if(done == true)
        {
            done = itsSendToUnity.startBehavior();
        }
    if(done == true)
        {
            done = itsTriggerAlarm_UC.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsPINCode_UC, PINCode_UC, "itsPINCode_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTriggerAlarm_UC, TriggerAlarm_UC, "itsTriggerAlarm_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsPlaceEmergencyCall, PlaceEmergencyCall, "itsPlaceEmergencyCall", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsEnableFireExtinguisher_UC, EnableFireExtinguisher_UC, "itsEnableFireExtinguisher_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsHVAC_Control_UC, HVAC_Control_UC, "itsHVAC_Control_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsLightControl_UC, LightControl_UC, "itsLightControl_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsHologram_UC, Hologram_UC, "itsHologram_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSendToUnity, SendToUnity, "itsSendToUnity", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDetectFire_UC, DetectFire_UC, "itsDetectFire_UC", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
IMRPkg_OMInitializer::IMRPkg_OMInitializer(void) {
    IMRPkg_initRelations();
    (void) IMRPkg_startBehavior();
}

IMRPkg_OMInitializer::~IMRPkg_OMInitializer(void) {
}
//#]

//## event evAlarm()
evAlarm::evAlarm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evAlarm)
    setId(evAlarm_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evAlarm_IMRPkg_id(18601);
//#]

IMPLEMENT_META_EVENT_P(evAlarm, IMRPkg, IMRPkg, evAlarm())

//## event evFireDetected()
evFireDetected::evFireDetected(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evFireDetected)
    setId(evFireDetected_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evFireDetected_IMRPkg_id(18602);
//#]

IMPLEMENT_META_EVENT_P(evFireDetected, IMRPkg, IMRPkg, evFireDetected())

//## event evPhoneCall()
evPhoneCall::evPhoneCall(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evPhoneCall)
    setId(evPhoneCall_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evPhoneCall_IMRPkg_id(18603);
//#]

IMPLEMENT_META_EVENT_P(evPhoneCall, IMRPkg, IMRPkg, evPhoneCall())

//## event evStopAlarm()
evStopAlarm::evStopAlarm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStopAlarm)
    setId(evStopAlarm_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evStopAlarm_IMRPkg_id(18604);
//#]

IMPLEMENT_META_EVENT_P(evStopAlarm, IMRPkg, IMRPkg, evStopAlarm())

//## event evStopExtinguisher()
evStopExtinguisher::evStopExtinguisher(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStopExtinguisher)
    setId(evStopExtinguisher_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evStopExtinguisher_IMRPkg_id(18605);
//#]

IMPLEMENT_META_EVENT_P(evStopExtinguisher, IMRPkg, IMRPkg, evStopExtinguisher())

//## event evDoorOpen()
evDoorOpen::evDoorOpen(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evDoorOpen)
    setId(evDoorOpen_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evDoorOpen_IMRPkg_id(18606);
//#]

IMPLEMENT_META_EVENT_P(evDoorOpen, IMRPkg, IMRPkg, evDoorOpen())

//## event evReqAccess()
evReqAccess::evReqAccess(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evReqAccess)
    setId(evReqAccess_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evReqAccess_IMRPkg_id(18607);
//#]

IMPLEMENT_META_EVENT_P(evReqAccess, IMRPkg, IMRPkg, evReqAccess())

//## event evTunHVACOn()
evTunHVACOn::evTunHVACOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evTunHVACOn)
    setId(evTunHVACOn_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evTunHVACOn_IMRPkg_id(18608);
//#]

IMPLEMENT_META_EVENT_P(evTunHVACOn, IMRPkg, IMRPkg, evTunHVACOn())

//## event evTunHVAVOff()
evTunHVAVOff::evTunHVAVOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evTunHVAVOff)
    setId(evTunHVAVOff_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evTunHVAVOff_IMRPkg_id(18609);
//#]

IMPLEMENT_META_EVENT_P(evTunHVAVOff, IMRPkg, IMRPkg, evTunHVAVOff())

//## event evHologram()
evHologram::evHologram(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evHologram)
    setId(evHologram_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evHologram_IMRPkg_id(18610);
//#]

IMPLEMENT_META_EVENT_P(evHologram, IMRPkg, IMRPkg, evHologram())

//## event evHologramCall()
evHologramCall::evHologramCall(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evHologramCall)
    setId(evHologramCall_IMRPkg_id);
}

//#[ ignore
const IOxfEvent::ID evHologramCall_IMRPkg_id(18611);
//#]

IMPLEMENT_META_EVENT_P(evHologramCall, IMRPkg, IMRPkg, evHologramCall())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IMRPkg.cpp
*********************************************************************/

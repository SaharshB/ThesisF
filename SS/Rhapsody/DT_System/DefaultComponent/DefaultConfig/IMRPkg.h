/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IMRPkg
//!	Generated Date	: Mon, 6, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\IMRPkg.h
*********************************************************************/

#ifndef IMRPkg_H
#define IMRPkg_H

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
#include <event.h>
//## classInstance itsDetectFire_UC
class DetectFire_UC;

//## classInstance itsEnableFireExtinguisher_UC
class EnableFireExtinguisher_UC;

//## classInstance itsHVAC_Control_UC
class HVAC_Control_UC;

//## classInstance itsHologram_UC
class Hologram_UC;

//## auto_generated
class IMR;

//## classInstance itsLightControl_UC
class LightControl_UC;

//## classInstance itsPINCode_UC
class PINCode_UC;

//## classInstance itsPlaceEmergencyCall
class PlaceEmergencyCall;

//## classInstance itsSendToUnity
class SendToUnity;

//## classInstance itsTriggerAlarm_UC
class TriggerAlarm_UC;

//## package IMRPkg


//#[ type DEFAULT_BUFLEN
#define DEFAULT_BUFLEN 1024
//#]

//## classInstance itsDetectFire_UC
extern DetectFire_UC itsDetectFire_UC;

//## classInstance itsEnableFireExtinguisher_UC
extern EnableFireExtinguisher_UC itsEnableFireExtinguisher_UC;

//## classInstance itsHVAC_Control_UC
extern HVAC_Control_UC itsHVAC_Control_UC;

//## classInstance itsHologram_UC
extern Hologram_UC itsHologram_UC;

//## classInstance itsLightControl_UC
extern LightControl_UC itsLightControl_UC;

//## classInstance itsPINCode_UC
extern PINCode_UC itsPINCode_UC;

//## classInstance itsPlaceEmergencyCall
extern PlaceEmergencyCall itsPlaceEmergencyCall;

//## classInstance itsSendToUnity
extern SendToUnity itsSendToUnity;

//## classInstance itsTriggerAlarm_UC
extern TriggerAlarm_UC itsTriggerAlarm_UC;

//## auto_generated
void IMRPkg_initRelations(void);

//## auto_generated
bool IMRPkg_startBehavior(void);

//#[ ignore
class IMRPkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    IMRPkg_OMInitializer(void);
    
    //## auto_generated
    ~IMRPkg_OMInitializer(void);
};
//#]

//## event evAlarm()
class evAlarm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAlarm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAlarm(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAlarm : virtual public AOMEvent {
    DECLARE_META_EVENT(evAlarm)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evAlarm_IMRPkg_id;
//#]

//## event evFireDetected()
class evFireDetected : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFireDetected;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFireDetected(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFireDetected : virtual public AOMEvent {
    DECLARE_META_EVENT(evFireDetected)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evFireDetected_IMRPkg_id;
//#]

//## event evPhoneCall()
class evPhoneCall : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPhoneCall;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPhoneCall(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPhoneCall : virtual public AOMEvent {
    DECLARE_META_EVENT(evPhoneCall)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPhoneCall_IMRPkg_id;
//#]

//## event evStopAlarm()
class evStopAlarm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStopAlarm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStopAlarm(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStopAlarm : virtual public AOMEvent {
    DECLARE_META_EVENT(evStopAlarm)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStopAlarm_IMRPkg_id;
//#]

//## event evStopExtinguisher()
class evStopExtinguisher : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStopExtinguisher;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStopExtinguisher(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStopExtinguisher : virtual public AOMEvent {
    DECLARE_META_EVENT(evStopExtinguisher)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStopExtinguisher_IMRPkg_id;
//#]

//## event evDoorOpen()
class evDoorOpen : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDoorOpen;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDoorOpen(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDoorOpen : virtual public AOMEvent {
    DECLARE_META_EVENT(evDoorOpen)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evDoorOpen_IMRPkg_id;
//#]

//## event evReqAccess()
class evReqAccess : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReqAccess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReqAccess(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReqAccess : virtual public AOMEvent {
    DECLARE_META_EVENT(evReqAccess)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evReqAccess_IMRPkg_id;
//#]

//## event evTunHVACOn()
class evTunHVACOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTunHVACOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTunHVACOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTunHVACOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evTunHVACOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evTunHVACOn_IMRPkg_id;
//#]

//## event evTunHVAVOff()
class evTunHVAVOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTunHVAVOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTunHVAVOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTunHVAVOff : virtual public AOMEvent {
    DECLARE_META_EVENT(evTunHVAVOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evTunHVAVOff_IMRPkg_id;
//#]

//## event evHologram()
class evHologram : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevHologram;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evHologram(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevHologram : virtual public AOMEvent {
    DECLARE_META_EVENT(evHologram)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evHologram_IMRPkg_id;
//#]

//## event evHologramCall()
class evHologramCall : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevHologramCall;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evHologramCall(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevHologramCall : virtual public AOMEvent {
    DECLARE_META_EVENT(evHologramCall)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evHologramCall_IMRPkg_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IMRPkg.h
*********************************************************************/

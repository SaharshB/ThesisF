/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IMR
//!	Generated Date	: Mon, 6, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\IMR.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IMR.h"
//#[ ignore
#define IMRPkg_IMR_IMR_SERIALIZE OM_NO_OP
//#]

//## package IMRPkg

//## class IMR
IMR::IMR(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(IMR, IMR(), 0, IMRPkg_IMR_IMR_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsEnableFireExtinguisher_UC.setShouldDelete(false);
        }
        {
            itsDetectFire_UC.setShouldDelete(false);
        }
        {
            itsPINCode_UC.setShouldDelete(false);
        }
        {
            itsHVAC_Control_UC.setShouldDelete(false);
        }
        {
            itsLightControl_UC.setShouldDelete(false);
        }
        {
            itsPlaceEmergencyCall.setShouldDelete(false);
        }
        {
            itsSendToUnity.setShouldDelete(false);
        }
        {
            itsTriggerAlarm_UC.setShouldDelete(false);
        }
        {
            itsHologram_UC.setShouldDelete(false);
        }
    }
}

IMR::~IMR(void) {
    NOTIFY_DESTRUCTOR(~IMR, true);
}

const DetectFire_UC* IMR::getItsDetectFire_UC(void) const {
    return &itsDetectFire_UC;
}

const EnableFireExtinguisher_UC* IMR::getItsEnableFireExtinguisher_UC(void) const {
    return &itsEnableFireExtinguisher_UC;
}

const HVAC_Control_UC* IMR::getItsHVAC_Control_UC(void) const {
    return &itsHVAC_Control_UC;
}

const LightControl_UC* IMR::getItsLightControl_UC(void) const {
    return &itsLightControl_UC;
}

const PINCode_UC* IMR::getItsPINCode_UC(void) const {
    return &itsPINCode_UC;
}

const PlaceEmergencyCall* IMR::getItsPlaceEmergencyCall(void) const {
    return &itsPlaceEmergencyCall;
}

const SendToUnity* IMR::getItsSendToUnity(void) const {
    return &itsSendToUnity;
}

const TriggerAlarm_UC* IMR::getItsTriggerAlarm_UC(void) const {
    return &itsTriggerAlarm_UC;
}

bool IMR::startBehavior(void) {
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
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void IMR::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsEnableFireExtinguisher_UC.setActiveContext(theActiveContext, false);
        itsDetectFire_UC.setActiveContext(theActiveContext, false);
        itsPINCode_UC.setActiveContext(theActiveContext, false);
        itsHVAC_Control_UC.setActiveContext(theActiveContext, false);
        itsLightControl_UC.setActiveContext(theActiveContext, false);
        itsPlaceEmergencyCall.setActiveContext(theActiveContext, false);
        itsTriggerAlarm_UC.setActiveContext(theActiveContext, false);
        itsHologram_UC.setActiveContext(theActiveContext, false);
    }
}

void IMR::destroy(void) {
    itsDetectFire_UC.destroy();
    itsEnableFireExtinguisher_UC.destroy();
    itsHVAC_Control_UC.destroy();
    itsHologram_UC.destroy();
    itsLightControl_UC.destroy();
    itsPINCode_UC.destroy();
    itsPlaceEmergencyCall.destroy();
    itsSendToUnity.destroy();
    itsTriggerAlarm_UC.destroy();
    OMReactive::destroy();
}

const Hologram_UC* IMR::getItsHologram_UC(void) const {
    return &itsHologram_UC;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedIMR::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEnableFireExtinguisher_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsEnableFireExtinguisher_UC);
    aomsRelations->addRelation("itsDetectFire_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDetectFire_UC);
    aomsRelations->addRelation("itsPINCode_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPINCode_UC);
    aomsRelations->addRelation("itsHVAC_Control_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHVAC_Control_UC);
    aomsRelations->addRelation("itsLightControl_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLightControl_UC);
    aomsRelations->addRelation("itsPlaceEmergencyCall", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPlaceEmergencyCall);
    aomsRelations->addRelation("itsSendToUnity", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSendToUnity);
    aomsRelations->addRelation("itsTriggerAlarm_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTriggerAlarm_UC);
    aomsRelations->addRelation("itsHologram_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHologram_UC);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(IMR, IMRPkg, IMRPkg, false, OMAnimatedIMR)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IMR.cpp
*********************************************************************/

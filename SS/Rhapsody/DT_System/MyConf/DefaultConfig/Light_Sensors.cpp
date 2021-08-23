/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Light_Sensors
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\Light_Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Light_Sensors.h"
//#[ ignore
#define StructuralDiagrams_Light_Sensors_Light_Sensors_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Light_Sensors
Light_Sensors::Light_Sensors(void) : Sensors() {
    NOTIFY_CONSTRUCTOR(Light_Sensors, Light_Sensors(), 0, StructuralDiagrams_Light_Sensors_Light_Sensors_SERIALIZE);
}

Light_Sensors::~Light_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Light_Sensors, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLight_Sensors::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedLight_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Light_Sensors, StructuralDiagrams, false, Sensors, OMAnimatedSensors, OMAnimatedLight_Sensors)

OMINIT_SUPERCLASS(Sensors, OMAnimatedSensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Light_Sensors.cpp
*********************************************************************/

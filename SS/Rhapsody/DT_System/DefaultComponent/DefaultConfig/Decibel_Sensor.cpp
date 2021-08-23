/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Decibel_Sensor
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Decibel_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Decibel_Sensor.h"
//#[ ignore
#define StructuralDiagrams_Decibel_Sensor_Decibel_Sensor_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Decibel_Sensor
Decibel_Sensor::Decibel_Sensor(void) : Sensors() {
    NOTIFY_CONSTRUCTOR(Decibel_Sensor, Decibel_Sensor(), 0, StructuralDiagrams_Decibel_Sensor_Decibel_Sensor_SERIALIZE);
}

Decibel_Sensor::~Decibel_Sensor(void) {
    NOTIFY_DESTRUCTOR(~Decibel_Sensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDecibel_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedDecibel_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Decibel_Sensor, StructuralDiagrams, false, Sensors, OMAnimatedSensors, OMAnimatedDecibel_Sensor)

OMINIT_SUPERCLASS(Sensors, OMAnimatedSensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Decibel_Sensor.cpp
*********************************************************************/

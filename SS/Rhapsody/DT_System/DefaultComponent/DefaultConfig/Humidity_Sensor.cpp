/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Humidity_Sensor
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Humidity_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Humidity_Sensor.h"
//#[ ignore
#define StructuralDiagrams_Humidity_Sensor_Humidity_Sensor_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Humidity_Sensor
Humidity_Sensor::Humidity_Sensor(void) : Sensors() {
    NOTIFY_CONSTRUCTOR(Humidity_Sensor, Humidity_Sensor(), 0, StructuralDiagrams_Humidity_Sensor_Humidity_Sensor_SERIALIZE);
}

Humidity_Sensor::~Humidity_Sensor(void) {
    NOTIFY_DESTRUCTOR(~Humidity_Sensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHumidity_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedHumidity_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Humidity_Sensor, StructuralDiagrams, false, Sensors, OMAnimatedSensors, OMAnimatedHumidity_Sensor)

OMINIT_SUPERCLASS(Sensors, OMAnimatedSensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Humidity_Sensor.cpp
*********************************************************************/

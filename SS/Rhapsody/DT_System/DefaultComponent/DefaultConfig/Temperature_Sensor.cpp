/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Temperature_Sensor
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Temperature_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Temperature_Sensor.h"
//## link itsEnvironment
#include "Environment.h"
//#[ ignore
#define StructuralDiagrams_Temperature_Sensor_Temperature_Sensor_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Temperature_Sensor
Temperature_Sensor::Temperature_Sensor(void) : Sensors(), itsEnvironment(NULL) {
    NOTIFY_CONSTRUCTOR(Temperature_Sensor, Temperature_Sensor(), 0, StructuralDiagrams_Temperature_Sensor_Temperature_Sensor_SERIALIZE);
}

Temperature_Sensor::~Temperature_Sensor(void) {
    NOTIFY_DESTRUCTOR(~Temperature_Sensor, false);
    cleanUpRelations();
}

const Environment* Temperature_Sensor::getItsEnvironment(void) const {
    return itsEnvironment;
}

void Temperature_Sensor::setItsEnvironment(Environment* const p_Environment) {
    itsEnvironment = p_Environment;
    if(p_Environment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironment", p_Environment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
        }
}

void Temperature_Sensor::cleanUpRelations(void) {
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            itsEnvironment = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTemperature_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedTemperature_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
    OMAnimatedSensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Temperature_Sensor, StructuralDiagrams, false, Sensors, OMAnimatedSensors, OMAnimatedTemperature_Sensor)

OMINIT_SUPERCLASS(Sensors, OMAnimatedSensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Temperature_Sensor.cpp
*********************************************************************/

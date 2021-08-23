/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensors
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\Fire_Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_Sensors.h"
//## link itsEnvironment
#include "Environment.h"
//#[ ignore
#define StructuralDiagrams_Fire_Sensors_Fire_Sensors_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Fire_Sensors
Fire_Sensors::Fire_Sensors(void) : Sensors(), itsEnvironment(NULL) {
    NOTIFY_CONSTRUCTOR(Fire_Sensors, Fire_Sensors(), 0, StructuralDiagrams_Fire_Sensors_Fire_Sensors_SERIALIZE);
}

Fire_Sensors::~Fire_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Fire_Sensors, false);
    cleanUpRelations();
}

const Environment* Fire_Sensors::getItsEnvironment(void) const {
    return itsEnvironment;
}

void Fire_Sensors::setItsEnvironment(Environment* const p_Environment) {
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

void Fire_Sensors::cleanUpRelations(void) {
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            itsEnvironment = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFire_Sensors::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedFire_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
    OMAnimatedSensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Fire_Sensors, StructuralDiagrams, false, Sensors, OMAnimatedSensors, OMAnimatedFire_Sensors)

OMINIT_SUPERCLASS(Sensors, OMAnimatedSensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Fire_Sensors.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensors.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_Sensors_Sensors_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Sensors
Sensors::Sensors(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(Sensors, Sensors(), 0, StructuralDiagrams_Sensors_Sensors_SERIALIZE);
}

Sensors::~Sensors(void) {
    NOTIFY_DESTRUCTOR(~Sensors, true);
    cleanUpRelations();
}

const IMR_System* Sensors::getItsIMR_System(void) const {
    return itsIMR_System;
}

void Sensors::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsSensors_3(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void Sensors::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const Sensors* p_Sensors = itsIMR_System->getItsSensors_3();
            if(p_Sensors != NULL)
                {
                    itsIMR_System->__setItsSensors_3(NULL);
                }
            itsIMR_System = NULL;
        }
}

void Sensors::__setItsIMR_System(IMR_System* const p_IMR_System) {
    itsIMR_System = p_IMR_System;
    if(p_IMR_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsIMR_System", p_IMR_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
        }
}

void Sensors::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsSensors_3(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void Sensors::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(Sensors, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/

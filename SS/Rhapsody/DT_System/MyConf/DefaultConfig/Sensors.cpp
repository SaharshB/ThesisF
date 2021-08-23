/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensors.h"
//## link itsContrller
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_Sensors_Sensors_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Sensors
Sensors::Sensors(void) : itsContrller(NULL) {
    NOTIFY_CONSTRUCTOR(Sensors, Sensors(), 0, StructuralDiagrams_Sensors_Sensors_SERIALIZE);
}

Sensors::~Sensors(void) {
    NOTIFY_DESTRUCTOR(~Sensors, true);
    cleanUpRelations();
}

const Controller_System* Sensors::getItsContrller(void) const {
    return itsContrller;
}

void Sensors::setItsContrller(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsSensors(this);
        }
    _setItsContrller(p_Controller_System);
}

void Sensors::cleanUpRelations(void) {
    if(itsContrller != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsContrller");
            const Sensors* p_Sensors = itsContrller->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsContrller->__setItsSensors(NULL);
                }
            itsContrller = NULL;
        }
}

void Sensors::__setItsContrller(Controller_System* const p_Controller_System) {
    itsContrller = p_Controller_System;
    if(p_Controller_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsContrller", p_Controller_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsContrller");
        }
}

void Sensors::_setItsContrller(Controller_System* const p_Controller_System) {
    if(itsContrller != NULL)
        {
            itsContrller->__setItsSensors(NULL);
        }
    __setItsContrller(p_Controller_System);
}

void Sensors::_clearItsContrller(void) {
    NOTIFY_RELATION_CLEARED("itsContrller");
    itsContrller = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsContrller", false, true);
    if(myReal->itsContrller)
        {
            aomsRelations->ADD_ITEM(myReal->itsContrller);
        }
}
//#]

IMPLEMENT_META_P(Sensors, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Sensors.cpp
*********************************************************************/

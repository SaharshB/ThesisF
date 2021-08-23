/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Actuators
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Actuators.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Actuators.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_Actuators_Actuators_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Actuators
Actuators::Actuators(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(Actuators, Actuators(), 0, StructuralDiagrams_Actuators_Actuators_SERIALIZE);
}

Actuators::~Actuators(void) {
    NOTIFY_DESTRUCTOR(~Actuators, true);
    cleanUpRelations();
}

const Controller_System* Actuators::getItsController_System(void) const {
    return itsController_System;
}

void Actuators::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsActuators(this);
        }
    _setItsController_System(p_Controller_System);
}

void Actuators::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const Actuators* p_Actuators = itsController_System->getItsActuators();
            if(p_Actuators != NULL)
                {
                    itsController_System->__setItsActuators(NULL);
                }
            itsController_System = NULL;
        }
}

void Actuators::__setItsController_System(Controller_System* const p_Controller_System) {
    itsController_System = p_Controller_System;
    if(p_Controller_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController_System", p_Controller_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
        }
}

void Actuators::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsActuators(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void Actuators::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedActuators::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(Actuators, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedActuators)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Actuators.cpp
*********************************************************************/

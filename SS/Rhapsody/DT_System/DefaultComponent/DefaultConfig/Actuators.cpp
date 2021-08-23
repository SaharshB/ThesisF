/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Actuators
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Actuators.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Actuators.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_Actuators_Actuators_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Actuators
Actuators::Actuators(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(Actuators, Actuators(), 0, StructuralDiagrams_Actuators_Actuators_SERIALIZE);
}

Actuators::~Actuators(void) {
    NOTIFY_DESTRUCTOR(~Actuators, true);
    cleanUpRelations();
}

const IMR_System* Actuators::getItsIMR_System(void) const {
    return itsIMR_System;
}

void Actuators::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsActuators(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void Actuators::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const Actuators* p_Actuators = itsIMR_System->getItsActuators();
            if(p_Actuators != NULL)
                {
                    itsIMR_System->__setItsActuators(NULL);
                }
            itsIMR_System = NULL;
        }
}

void Actuators::__setItsIMR_System(IMR_System* const p_IMR_System) {
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

void Actuators::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsActuators(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void Actuators::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedActuators::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(Actuators, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedActuators)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Actuators.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Environment
Environment::Environment(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, StructuralDiagrams_Environment_Environment_SERIALIZE);
}

Environment::~Environment(void) {
    NOTIFY_DESTRUCTOR(~Environment, true);
    cleanUpRelations();
}

const IMR_System* Environment::getItsIMR_System(void) const {
    return itsIMR_System;
}

void Environment::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsEnvironment(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void Environment::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const Environment* p_Environment = itsIMR_System->getItsEnvironment();
            if(p_Environment != NULL)
                {
                    itsIMR_System->__setItsEnvironment(NULL);
                }
            itsIMR_System = NULL;
        }
}

void Environment::__setItsIMR_System(IMR_System* const p_IMR_System) {
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

void Environment::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsEnvironment(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void Environment::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(Environment, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/

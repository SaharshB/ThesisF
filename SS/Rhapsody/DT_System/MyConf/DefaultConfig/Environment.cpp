/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Environment
Environment::Environment(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, StructuralDiagrams_Environment_Environment_SERIALIZE);
}

Environment::~Environment(void) {
    NOTIFY_DESTRUCTOR(~Environment, true);
    cleanUpRelations();
}

const Controller_System* Environment::getItsController_System(void) const {
    return itsController_System;
}

void Environment::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsEnvironment(this);
        }
    _setItsController_System(p_Controller_System);
}

void Environment::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const Environment* p_Environment = itsController_System->getItsEnvironment();
            if(p_Environment != NULL)
                {
                    itsController_System->__setItsEnvironment(NULL);
                }
            itsController_System = NULL;
        }
}

void Environment::__setItsController_System(Controller_System* const p_Controller_System) {
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

void Environment::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsEnvironment(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void Environment::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(Environment, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Environment.cpp
*********************************************************************/

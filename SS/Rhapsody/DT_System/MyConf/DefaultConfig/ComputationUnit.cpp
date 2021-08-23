/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: ComputationUnit
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\ComputationUnit.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ComputationUnit.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_ComputationUnit_ComputationUnit_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class ComputationUnit
ComputationUnit::ComputationUnit(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(ComputationUnit, ComputationUnit(), 0, StructuralDiagrams_ComputationUnit_ComputationUnit_SERIALIZE);
}

ComputationUnit::~ComputationUnit(void) {
    NOTIFY_DESTRUCTOR(~ComputationUnit, true);
    cleanUpRelations();
}

const Controller_System* ComputationUnit::getItsController_System(void) const {
    return itsController_System;
}

void ComputationUnit::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsComputationUnit(this);
        }
    _setItsController_System(p_Controller_System);
}

void ComputationUnit::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const ComputationUnit* p_ComputationUnit = itsController_System->getItsComputationUnit();
            if(p_ComputationUnit != NULL)
                {
                    itsController_System->__setItsComputationUnit(NULL);
                }
            itsController_System = NULL;
        }
}

void ComputationUnit::__setItsController_System(Controller_System* const p_Controller_System) {
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

void ComputationUnit::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsComputationUnit(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void ComputationUnit::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedComputationUnit::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(ComputationUnit, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedComputationUnit)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\ComputationUnit.cpp
*********************************************************************/

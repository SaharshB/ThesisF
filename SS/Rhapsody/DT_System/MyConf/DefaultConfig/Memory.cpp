/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Memory
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Memory.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Memory.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_Memory_Memory_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Memory
Memory::Memory(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(Memory, Memory(), 0, StructuralDiagrams_Memory_Memory_SERIALIZE);
}

Memory::~Memory(void) {
    NOTIFY_DESTRUCTOR(~Memory, true);
    cleanUpRelations();
}

const Controller_System* Memory::getItsController_System(void) const {
    return itsController_System;
}

void Memory::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsMemory(this);
        }
    _setItsController_System(p_Controller_System);
}

void Memory::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const Memory* p_Memory = itsController_System->getItsMemory();
            if(p_Memory != NULL)
                {
                    itsController_System->__setItsMemory(NULL);
                }
            itsController_System = NULL;
        }
}

void Memory::__setItsController_System(Controller_System* const p_Controller_System) {
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

void Memory::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsMemory(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void Memory::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMemory::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(Memory, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedMemory)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Memory.cpp
*********************************************************************/

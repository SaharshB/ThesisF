/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Communication
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Communication.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Communication.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_Communication_Communication_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Communication
Communication::Communication(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(Communication, Communication(), 0, StructuralDiagrams_Communication_Communication_SERIALIZE);
}

Communication::~Communication(void) {
    NOTIFY_DESTRUCTOR(~Communication, true);
    cleanUpRelations();
}

const Controller_System* Communication::getItsController_System(void) const {
    return itsController_System;
}

void Communication::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsCommunication(this);
        }
    _setItsController_System(p_Controller_System);
}

void Communication::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const Communication* p_Communication = itsController_System->getItsCommunication();
            if(p_Communication != NULL)
                {
                    itsController_System->__setItsCommunication(NULL);
                }
            itsController_System = NULL;
        }
}

void Communication::__setItsController_System(Controller_System* const p_Controller_System) {
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

void Communication::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsCommunication(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void Communication::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunication::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(Communication, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedCommunication)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Communication.cpp
*********************************************************************/

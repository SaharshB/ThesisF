/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Communication
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Communication.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Communication.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_Communication_Communication_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Communication
Communication::Communication(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(Communication, Communication(), 0, StructuralDiagrams_Communication_Communication_SERIALIZE);
}

Communication::~Communication(void) {
    NOTIFY_DESTRUCTOR(~Communication, true);
    cleanUpRelations();
}

const IMR_System* Communication::getItsIMR_System(void) const {
    return itsIMR_System;
}

void Communication::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsCommunication_3(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void Communication::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const Communication* p_Communication = itsIMR_System->getItsCommunication_3();
            if(p_Communication != NULL)
                {
                    itsIMR_System->__setItsCommunication_3(NULL);
                }
            itsIMR_System = NULL;
        }
}

void Communication::__setItsIMR_System(IMR_System* const p_IMR_System) {
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

void Communication::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsCommunication_3(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void Communication::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunication::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(Communication, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedCommunication)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Communication.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Security_System
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Security_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Security_System.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_Security_System_Security_System_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Security_System
Security_System::Security_System(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(Security_System, Security_System(), 0, StructuralDiagrams_Security_System_Security_System_SERIALIZE);
}

Security_System::~Security_System(void) {
    NOTIFY_DESTRUCTOR(~Security_System, true);
    cleanUpRelations();
}

const IMR_System* Security_System::getItsIMR_System(void) const {
    return itsIMR_System;
}

void Security_System::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsSecurity_System(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void Security_System::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const Security_System* p_Security_System = itsIMR_System->getItsSecurity_System();
            if(p_Security_System != NULL)
                {
                    itsIMR_System->__setItsSecurity_System(NULL);
                }
            itsIMR_System = NULL;
        }
}

void Security_System::__setItsIMR_System(IMR_System* const p_IMR_System) {
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

void Security_System::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsSecurity_System(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void Security_System::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSecurity_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(Security_System, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedSecurity_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Security_System.cpp
*********************************************************************/

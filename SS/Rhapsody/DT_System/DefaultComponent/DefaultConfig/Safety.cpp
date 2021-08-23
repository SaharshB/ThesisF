/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Safety
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Safety.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Safety.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_Safety_Safety_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Safety
Safety::Safety(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(Safety, Safety(), 0, StructuralDiagrams_Safety_Safety_SERIALIZE);
}

Safety::~Safety(void) {
    NOTIFY_DESTRUCTOR(~Safety, true);
    cleanUpRelations();
}

const IMR_System* Safety::getItsIMR_System(void) const {
    return itsIMR_System;
}

void Safety::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsSafety(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void Safety::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const Safety* p_Safety = itsIMR_System->getItsSafety();
            if(p_Safety != NULL)
                {
                    itsIMR_System->__setItsSafety(NULL);
                }
            itsIMR_System = NULL;
        }
}

void Safety::__setItsIMR_System(IMR_System* const p_IMR_System) {
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

void Safety::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsSafety(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void Safety::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSafety::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(Safety, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedSafety)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Safety.cpp
*********************************************************************/

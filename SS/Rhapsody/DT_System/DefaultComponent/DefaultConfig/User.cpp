/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "User.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_User_User_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class User
User::User(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(User, User(), 0, StructuralDiagrams_User_User_SERIALIZE);
}

User::~User(void) {
    NOTIFY_DESTRUCTOR(~User, true);
    cleanUpRelations();
}

const IMR_System* User::getItsIMR_System(void) const {
    return itsIMR_System;
}

void User::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsUser(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void User::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const User* p_User = itsIMR_System->getItsUser();
            if(p_User != NULL)
                {
                    itsIMR_System->__setItsUser(NULL);
                }
            itsIMR_System = NULL;
        }
}

void User::__setItsIMR_System(IMR_System* const p_IMR_System) {
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

void User::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsUser(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void User::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUser::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(User, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedUser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

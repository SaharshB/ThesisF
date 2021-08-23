/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "User.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_User_User_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class User
User::User(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(User, User(), 0, StructuralDiagrams_User_User_SERIALIZE);
}

User::~User(void) {
    NOTIFY_DESTRUCTOR(~User, true);
    cleanUpRelations();
}

const Controller_System* User::getItsController_System(void) const {
    return itsController_System;
}

void User::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsUser(this);
        }
    _setItsController_System(p_Controller_System);
}

void User::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const User* p_User = itsController_System->getItsUser();
            if(p_User != NULL)
                {
                    itsController_System->__setItsUser(NULL);
                }
            itsController_System = NULL;
        }
}

void User::__setItsController_System(Controller_System* const p_Controller_System) {
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

void User::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsUser(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void User::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUser::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(User, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedUser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\User.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: TurtleBotMov
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\TurtleBotMov.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TurtleBotMov.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_TurtleBotMov_TurtleBotMov_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class TurtleBotMov
TurtleBotMov::TurtleBotMov(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(TurtleBotMov, TurtleBotMov(), 0, StructuralDiagrams_TurtleBotMov_TurtleBotMov_SERIALIZE);
}

TurtleBotMov::~TurtleBotMov(void) {
    NOTIFY_DESTRUCTOR(~TurtleBotMov, true);
    cleanUpRelations();
}

const Controller_System* TurtleBotMov::getItsController_System(void) const {
    return itsController_System;
}

void TurtleBotMov::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsTurtleBotMov(this);
        }
    _setItsController_System(p_Controller_System);
}

void TurtleBotMov::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const TurtleBotMov* p_TurtleBotMov = itsController_System->getItsTurtleBotMov();
            if(p_TurtleBotMov != NULL)
                {
                    itsController_System->__setItsTurtleBotMov(NULL);
                }
            itsController_System = NULL;
        }
}

void TurtleBotMov::__setItsController_System(Controller_System* const p_Controller_System) {
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

void TurtleBotMov::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsTurtleBotMov(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void TurtleBotMov::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTurtleBotMov::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(TurtleBotMov, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedTurtleBotMov)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\TurtleBotMov.cpp
*********************************************************************/

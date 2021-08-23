/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: UI
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\UI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UI.h"
//## link itsController_System
#include "Controller_System.h"
//#[ ignore
#define StructuralDiagrams_UI_UI_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class UI
UI::UI(void) : itsController_System(NULL) {
    NOTIFY_CONSTRUCTOR(UI, UI(), 0, StructuralDiagrams_UI_UI_SERIALIZE);
}

UI::~UI(void) {
    NOTIFY_DESTRUCTOR(~UI, true);
    cleanUpRelations();
}

const Controller_System* UI::getItsController_System(void) const {
    return itsController_System;
}

void UI::setItsController_System(Controller_System* const p_Controller_System) {
    if(p_Controller_System != NULL)
        {
            p_Controller_System->_setItsUI(this);
        }
    _setItsController_System(p_Controller_System);
}

void UI::cleanUpRelations(void) {
    if(itsController_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_System");
            const UI* p_UI = itsController_System->getItsUI();
            if(p_UI != NULL)
                {
                    itsController_System->__setItsUI(NULL);
                }
            itsController_System = NULL;
        }
}

void UI::__setItsController_System(Controller_System* const p_Controller_System) {
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

void UI::_setItsController_System(Controller_System* const p_Controller_System) {
    if(itsController_System != NULL)
        {
            itsController_System->__setItsUI(NULL);
        }
    __setItsController_System(p_Controller_System);
}

void UI::_clearItsController_System(void) {
    NOTIFY_RELATION_CLEARED("itsController_System");
    itsController_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_System", false, true);
    if(myReal->itsController_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_System);
        }
}
//#]

IMPLEMENT_META_P(UI, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\UI.cpp
*********************************************************************/

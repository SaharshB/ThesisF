/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GUI
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\GUI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GUI.h"
//## link itsIMR_System
#include "IMR_System.h"
//#[ ignore
#define StructuralDiagrams_GUI_GUI_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class GUI
GUI::GUI(void) : itsIMR_System(NULL) {
    NOTIFY_CONSTRUCTOR(GUI, GUI(), 0, StructuralDiagrams_GUI_GUI_SERIALIZE);
}

GUI::~GUI(void) {
    NOTIFY_DESTRUCTOR(~GUI, true);
    cleanUpRelations();
}

const IMR_System* GUI::getItsIMR_System(void) const {
    return itsIMR_System;
}

void GUI::setItsIMR_System(IMR_System* const p_IMR_System) {
    if(p_IMR_System != NULL)
        {
            p_IMR_System->_setItsGUI(this);
        }
    _setItsIMR_System(p_IMR_System);
}

void GUI::cleanUpRelations(void) {
    if(itsIMR_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIMR_System");
            const GUI* p_GUI = itsIMR_System->getItsGUI();
            if(p_GUI != NULL)
                {
                    itsIMR_System->__setItsGUI(NULL);
                }
            itsIMR_System = NULL;
        }
}

void GUI::__setItsIMR_System(IMR_System* const p_IMR_System) {
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

void GUI::_setItsIMR_System(IMR_System* const p_IMR_System) {
    if(itsIMR_System != NULL)
        {
            itsIMR_System->__setItsGUI(NULL);
        }
    __setItsIMR_System(p_IMR_System);
}

void GUI::_clearItsIMR_System(void) {
    NOTIFY_RELATION_CLEARED("itsIMR_System");
    itsIMR_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIMR_System", false, true);
    if(myReal->itsIMR_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsIMR_System);
        }
}
//#]

IMPLEMENT_META_P(GUI, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedGUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GUI.cpp
*********************************************************************/

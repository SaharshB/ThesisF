/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PIN_Panel
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PIN_Panel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PIN_Panel.h"
//#[ ignore
#define StructuralDiagrams_PIN_Panel_PIN_Panel_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class PIN_Panel
PIN_Panel::PIN_Panel(void) : GUI() {
    NOTIFY_CONSTRUCTOR(PIN_Panel, PIN_Panel(), 0, StructuralDiagrams_PIN_Panel_PIN_Panel_SERIALIZE);
}

PIN_Panel::~PIN_Panel(void) {
    NOTIFY_DESTRUCTOR(~PIN_Panel, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPIN_Panel::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedGUI::serializeAttributes(aomsAttributes);
}

void OMAnimatedPIN_Panel::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedGUI::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PIN_Panel, StructuralDiagrams, false, GUI, OMAnimatedGUI, OMAnimatedPIN_Panel)

OMINIT_SUPERCLASS(GUI, OMAnimatedGUI)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PIN_Panel.cpp
*********************************************************************/

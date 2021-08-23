/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Projector
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\Projector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Projector.h"
//#[ ignore
#define StructuralDiagrams_Projector_Projector_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Projector
Projector::Projector(void) : GUI() {
    NOTIFY_CONSTRUCTOR(Projector, Projector(), 0, StructuralDiagrams_Projector_Projector_SERIALIZE);
}

Projector::~Projector(void) {
    NOTIFY_DESTRUCTOR(~Projector, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProjector::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedGUI::serializeAttributes(aomsAttributes);
}

void OMAnimatedProjector::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedGUI::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Projector, StructuralDiagrams, false, GUI, OMAnimatedGUI, OMAnimatedProjector)

OMINIT_SUPERCLASS(GUI, OMAnimatedGUI)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Projector.cpp
*********************************************************************/

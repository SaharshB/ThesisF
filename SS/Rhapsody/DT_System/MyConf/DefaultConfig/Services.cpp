/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Services
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Services.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Services.h"
//#[ ignore
#define StructuralDiagrams_Services_Services_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Services
Services::Services(void) {
    NOTIFY_CONSTRUCTOR(Services, Services(), 0, StructuralDiagrams_Services_Services_SERIALIZE);
}

Services::~Services(void) {
    NOTIFY_DESTRUCTOR(~Services, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedServices::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Services, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedServices)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Services.cpp
*********************************************************************/

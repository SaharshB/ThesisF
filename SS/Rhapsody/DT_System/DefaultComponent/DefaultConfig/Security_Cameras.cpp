/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Security_Cameras
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Security_Cameras.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Security_Cameras.h"
//## link itsSecurity_System
#include "Security_System.h"
//#[ ignore
#define StructuralDiagrams_Security_Cameras_Security_Cameras_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Security_Cameras
Security_Cameras::Security_Cameras(void) : Sensors(), itsSecurity_System(NULL) {
    NOTIFY_CONSTRUCTOR(Security_Cameras, Security_Cameras(), 0, StructuralDiagrams_Security_Cameras_Security_Cameras_SERIALIZE);
}

Security_Cameras::~Security_Cameras(void) {
    NOTIFY_DESTRUCTOR(~Security_Cameras, false);
    cleanUpRelations();
}

const Security_System* Security_Cameras::getItsSecurity_System(void) const {
    return itsSecurity_System;
}

void Security_Cameras::setItsSecurity_System(Security_System* const p_Security_System) {
    itsSecurity_System = p_Security_System;
    if(p_Security_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSecurity_System", p_Security_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSecurity_System");
        }
}

void Security_Cameras::cleanUpRelations(void) {
    if(itsSecurity_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSecurity_System");
            itsSecurity_System = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSecurity_Cameras::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedSecurity_Cameras::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSecurity_System", false, true);
    if(myReal->itsSecurity_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsSecurity_System);
        }
    OMAnimatedSensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Security_Cameras, StructuralDiagrams, false, Sensors, OMAnimatedSensors, OMAnimatedSecurity_Cameras)

OMINIT_SUPERCLASS(Sensors, OMAnimatedSensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Security_Cameras.cpp
*********************************************************************/

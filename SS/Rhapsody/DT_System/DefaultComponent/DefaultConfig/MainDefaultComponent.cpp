/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "IMRPkg.h"
//## auto_generated
#include "StructuralDiagrams.h"
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//## auto_generated
#include "SendToUnity.h"
DefaultComponent::DefaultComponent(void) {
    IMRPkg_initRelations();
    (void) IMRPkg_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                SendToUnity p_SendToUnity;
                p_SendToUnity.setShouldDelete(false);
                DefaultComponent initializer_DefaultComponent;
                (void) p_SendToUnity.startBehavior();
                //#[ configuration DefaultComponent::DefaultConfig 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

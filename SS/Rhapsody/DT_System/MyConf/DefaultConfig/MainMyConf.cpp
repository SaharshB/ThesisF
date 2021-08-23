/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\MainMyConf.cpp
*********************************************************************/

//## auto_generated
#include "MainMyConf.h"
//## auto_generated
#include "ContrPkg.h"
//## auto_generated
#include "StructuralDiagrams.h"
//## auto_generated
#include "UseCaseAnalysisPkg.h"
MyConf::MyConf(void) {
    ContrPkg_initRelations();
    (void) ContrPkg_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                MyConf initializer_MyConf;
                //#[ configuration MyConf::DefaultConfig 
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
	File Path	: MyConf\DefaultConfig\MainMyConf.cpp
*********************************************************************/

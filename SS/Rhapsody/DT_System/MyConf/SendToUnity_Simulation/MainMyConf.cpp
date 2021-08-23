/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: MyConf 
	Configuration 	: SendToUnity_Simulation
	Model Element	: SendToUnity_Simulation
//!	Generated Date	: Thu, 25, Jun 2020  
	File Path	: MyConf\SendToUnity_Simulation\MainMyConf.cpp
*********************************************************************/

//## auto_generated
#include "MainMyConf.h"
//## auto_generated
#include "SendToUnity.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                SendToUnity p_SendToUnity;
                p_SendToUnity.setShouldDelete(false);
                (void) p_SendToUnity.startBehavior();
                //#[ configuration MyConf::SendToUnity_Simulation 
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
	File Path	: MyConf\SendToUnity_Simulation\MainMyConf.cpp
*********************************************************************/

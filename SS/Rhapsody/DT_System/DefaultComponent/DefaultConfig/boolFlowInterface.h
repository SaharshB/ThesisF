/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: boolFlowInterface
//!	Generated Date	: Mon, 6, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\boolFlowInterface.h
*********************************************************************/

#ifndef boolFlowInterface_H
#define boolFlowInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include "FlowPortInterfaces.h"
//#[ ignore
//## package FlowPortInterfaces

//## ignore
class boolFlowInterface {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    boolFlowInterface(void);
    
    //## auto_generated
    virtual ~boolFlowInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation SetValue(bool,void *)
    virtual void SetValue(bool data, void * pCaller = NULL) = 0;
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\boolFlowInterface.h
*********************************************************************/

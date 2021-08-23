/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: intFlowInterface
//!	Generated Date	: Mon, 6, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\intFlowInterface.h
*********************************************************************/

#ifndef intFlowInterface_H
#define intFlowInterface_H

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
class intFlowInterface {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    intFlowInterface(void);
    
    //## auto_generated
    virtual ~intFlowInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation SetValue(int,void *)
    virtual void SetValue(int data, void * pCaller = NULL) = 0;
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\intFlowInterface.h
*********************************************************************/

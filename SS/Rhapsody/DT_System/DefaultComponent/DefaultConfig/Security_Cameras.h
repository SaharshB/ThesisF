/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Security_Cameras
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Security_Cameras.h
*********************************************************************/

#ifndef Security_Cameras_H
#define Security_Cameras_H

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
#include "StructuralDiagrams.h"
//## class Security_Cameras
#include "Sensors.h"
//## link itsSecurity_System
class Security_System;

//## package StructuralDiagrams

//## class Security_Cameras
class Security_Cameras : public Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSecurity_Cameras;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Security_Cameras(void);
    
    //## auto_generated
    ~Security_Cameras(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Security_System* getItsSecurity_System(void) const;
    
    //## auto_generated
    void setItsSecurity_System(Security_System* const p_Security_System);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Security_System* itsSecurity_System;		//## link itsSecurity_System
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSecurity_Cameras : public OMAnimatedSensors {
    DECLARE_META(Security_Cameras, OMAnimatedSecurity_Cameras)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Security_Cameras.h
*********************************************************************/

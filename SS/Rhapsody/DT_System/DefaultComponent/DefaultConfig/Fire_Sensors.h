/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensors
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensors.h
*********************************************************************/

#ifndef Fire_Sensors_H
#define Fire_Sensors_H

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
//## class Fire_Sensors
#include "Sensors.h"
//## link itsEnvironment
class Environment;

//## package StructuralDiagrams

//## class Fire_Sensors
class Fire_Sensors : public Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFire_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Fire_Sensors(void);
    
    //## auto_generated
    ~Fire_Sensors(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Environment* getItsEnvironment(void) const;
    
    //## auto_generated
    void setItsEnvironment(Environment* const p_Environment);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Environment* itsEnvironment;		//## link itsEnvironment
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFire_Sensors : public OMAnimatedSensors {
    DECLARE_META(Fire_Sensors, OMAnimatedFire_Sensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensors.h
*********************************************************************/

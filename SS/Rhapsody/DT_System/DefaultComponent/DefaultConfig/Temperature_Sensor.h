/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Temperature_Sensor
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Temperature_Sensor.h
*********************************************************************/

#ifndef Temperature_Sensor_H
#define Temperature_Sensor_H

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
//## class Temperature_Sensor
#include "Sensors.h"
//## link itsEnvironment
class Environment;

//## package StructuralDiagrams

//## class Temperature_Sensor
class Temperature_Sensor : public Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTemperature_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Temperature_Sensor(void);
    
    //## auto_generated
    ~Temperature_Sensor(void);
    
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
class OMAnimatedTemperature_Sensor : public OMAnimatedSensors {
    DECLARE_META(Temperature_Sensor, OMAnimatedTemperature_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Temperature_Sensor.h
*********************************************************************/

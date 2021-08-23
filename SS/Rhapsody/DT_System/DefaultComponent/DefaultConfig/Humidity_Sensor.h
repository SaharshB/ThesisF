/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Humidity_Sensor
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Humidity_Sensor.h
*********************************************************************/

#ifndef Humidity_Sensor_H
#define Humidity_Sensor_H

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
//## class Humidity_Sensor
#include "Sensors.h"
//## package StructuralDiagrams

//## class Humidity_Sensor
class Humidity_Sensor : public Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHumidity_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Humidity_Sensor(void);
    
    //## auto_generated
    ~Humidity_Sensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHumidity_Sensor : public OMAnimatedSensors {
    DECLARE_META(Humidity_Sensor, OMAnimatedHumidity_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Humidity_Sensor.h
*********************************************************************/

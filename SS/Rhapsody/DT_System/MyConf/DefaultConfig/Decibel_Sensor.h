/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Decibel_Sensor
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\Decibel_Sensor.h
*********************************************************************/

#ifndef Decibel_Sensor_H
#define Decibel_Sensor_H

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
//## class Decibel_Sensor
#include "Sensors.h"
//## package StructuralDiagrams

//## class Decibel_Sensor
class Decibel_Sensor : public Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDecibel_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Decibel_Sensor(void);
    
    //## auto_generated
    ~Decibel_Sensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDecibel_Sensor : public OMAnimatedSensors {
    DECLARE_META(Decibel_Sensor, OMAnimatedDecibel_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\Decibel_Sensor.h
*********************************************************************/

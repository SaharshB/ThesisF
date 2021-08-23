/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Light_Sensors
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Light_Sensors.h
*********************************************************************/

#ifndef Light_Sensors_H
#define Light_Sensors_H

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
//## class Light_Sensors
#include "Sensors.h"
//## package StructuralDiagrams

//## class Light_Sensors
class Light_Sensors : public Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLight_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Light_Sensors(void);
    
    //## auto_generated
    ~Light_Sensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLight_Sensors : public OMAnimatedSensors {
    DECLARE_META(Light_Sensors, OMAnimatedLight_Sensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Light_Sensors.h
*********************************************************************/

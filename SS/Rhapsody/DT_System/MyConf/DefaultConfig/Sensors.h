/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Sensors.h
*********************************************************************/

#ifndef Sensors_H
#define Sensors_H

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
//## link itsContrller
class Controller_System;

//## package StructuralDiagrams

//## class Sensors
class Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensors(void);
    
    //## auto_generated
    ~Sensors(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Controller_System* getItsContrller(void) const;
    
    //## auto_generated
    void setItsContrller(Controller_System* const p_Controller_System);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Controller_System* itsContrller;		//## link itsContrller
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsContrller(Controller_System* const p_Controller_System);
    
    //## auto_generated
    void _setItsContrller(Controller_System* const p_Controller_System);
    
    //## auto_generated
    void _clearItsContrller(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensors : virtual public AOMInstance {
    DECLARE_META(Sensors, OMAnimatedSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\Sensors.h
*********************************************************************/

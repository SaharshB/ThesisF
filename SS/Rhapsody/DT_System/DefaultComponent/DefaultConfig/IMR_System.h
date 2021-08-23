/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IMR_System
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\IMR_System.h
*********************************************************************/

#ifndef IMR_System_H
#define IMR_System_H

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
//## auto_generated
#include "omcollec.h"
//## link itsActuators
class Actuators;

//## link itsCommunication
class Communication;

//## link itsEnvironment
class Environment;

//## link itsGUI
class GUI;

//## link itsSafety
class Safety;

//## link itsSecurity_System
class Security_System;

//## link itsSensors
class Sensors;

//## link itsUser
class User;

//## package StructuralDiagrams

//## class IMR_System
class IMR_System {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIMR_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IMR_System(void);
    
    //## auto_generated
    ~IMR_System(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Actuators* getItsActuators(void) const;
    
    //## auto_generated
    void setItsActuators(Actuators* const p_Actuators);
    
    //## auto_generated
    const Communication* getItsCommunication(void) const;
    
    //## auto_generated
    void setItsCommunication(Communication* const p_Communication);
    
    //## auto_generated
    const Communication* getItsCommunication_1(void) const;
    
    //## auto_generated
    void setItsCommunication_1(Communication* const p_Communication);
    
    //## auto_generated
    const Communication* getItsCommunication_2(void) const;
    
    //## auto_generated
    void setItsCommunication_2(Communication* const p_Communication);
    
    //## auto_generated
    const Communication* getItsCommunication_3(void) const;
    
    //## auto_generated
    void setItsCommunication_3(Communication* const p_Communication);
    
    //## auto_generated
    const Environment* getItsEnvironment(void) const;
    
    //## auto_generated
    void setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    const GUI* getItsGUI(void) const;
    
    //## auto_generated
    void setItsGUI(GUI* const p_GUI);
    
    //## auto_generated
    const Safety* getItsSafety(void) const;
    
    //## auto_generated
    void setItsSafety(Safety* const p_Safety);
    
    //## auto_generated
    const Security_System* getItsSecurity_System(void) const;
    
    //## auto_generated
    void setItsSecurity_System(Security_System* const p_Security_System);
    
    //## auto_generated
    const Sensors* getItsSensors(void) const;
    
    //## auto_generated
    void setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    const Sensors* getItsSensors_1(void) const;
    
    //## auto_generated
    void setItsSensors_1(Sensors* const p_Sensors);
    
    //## auto_generated
    OMIterator<Sensors*> getItsSensors_2(void) const;
    
    //## auto_generated
    void addItsSensors_2(Sensors* const p_Sensors);
    
    //## auto_generated
    void removeItsSensors_2(Sensors* const p_Sensors);
    
    //## auto_generated
    void clearItsSensors_2(void);
    
    //## auto_generated
    const Sensors* getItsSensors_3(void) const;
    
    //## auto_generated
    void setItsSensors_3(Sensors* const p_Sensors);
    
    //## auto_generated
    const User* getItsUser(void) const;
    
    //## auto_generated
    void setItsUser(User* const p_User);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Actuators* itsActuators;		//## link itsActuators
    
    Communication* itsCommunication;		//## link itsCommunication
    
    Communication* itsCommunication_1;		//## link itsCommunication_1
    
    Communication* itsCommunication_2;		//## link itsCommunication_2
    
    Communication* itsCommunication_3;		//## link itsCommunication_3
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    GUI* itsGUI;		//## link itsGUI
    
    Safety* itsSafety;		//## link itsSafety
    
    Security_System* itsSecurity_System;		//## link itsSecurity_System
    
    Sensors* itsSensors;		//## link itsSensors
    
    Sensors* itsSensors_1;		//## link itsSensors_1
    
    OMCollection<Sensors*> itsSensors_2;		//## link itsSensors_2
    
    Sensors* itsSensors_3;		//## link itsSensors_3
    
    User* itsUser;		//## link itsUser
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsActuators(Actuators* const p_Actuators);
    
    //## auto_generated
    void _setItsActuators(Actuators* const p_Actuators);
    
    //## auto_generated
    void _clearItsActuators(void);
    
    //## auto_generated
    void __setItsCommunication_3(Communication* const p_Communication);
    
    //## auto_generated
    void _setItsCommunication_3(Communication* const p_Communication);
    
    //## auto_generated
    void _clearItsCommunication_3(void);
    
    //## auto_generated
    void __setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _clearItsEnvironment(void);
    
    //## auto_generated
    void __setItsGUI(GUI* const p_GUI);
    
    //## auto_generated
    void _setItsGUI(GUI* const p_GUI);
    
    //## auto_generated
    void _clearItsGUI(void);
    
    //## auto_generated
    void __setItsSafety(Safety* const p_Safety);
    
    //## auto_generated
    void _setItsSafety(Safety* const p_Safety);
    
    //## auto_generated
    void _clearItsSafety(void);
    
    //## auto_generated
    void __setItsSecurity_System(Security_System* const p_Security_System);
    
    //## auto_generated
    void _setItsSecurity_System(Security_System* const p_Security_System);
    
    //## auto_generated
    void _clearItsSecurity_System(void);
    
    //## auto_generated
    void __setItsSensors_3(Sensors* const p_Sensors);
    
    //## auto_generated
    void _setItsSensors_3(Sensors* const p_Sensors);
    
    //## auto_generated
    void _clearItsSensors_3(void);
    
    //## auto_generated
    void __setItsUser(User* const p_User);
    
    //## auto_generated
    void _setItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIMR_System : virtual public AOMInstance {
    DECLARE_META(IMR_System, OMAnimatedIMR_System)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IMR_System.h
*********************************************************************/

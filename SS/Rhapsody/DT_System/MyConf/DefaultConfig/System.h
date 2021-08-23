/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: System
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\System.h
*********************************************************************/

#ifndef System_H
#define System_H

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
//## link itsActuators
class Actuators;

//## link itsCommunication
class Communication;

//## link itsComputationUnit
class ComputationUnit;

//## link itsEnvironment
class Environment;

//## link itsMemory
class Memory;

//## link itsSensors
class Sensors;

//## link itsUI
class UI;

//## link itsUser
class User;

//## package StructuralDiagrams

//## class System
class System {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    System(void);
    
    //## auto_generated
    ~System(void);
    
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
    const ComputationUnit* getItsComputationUnit(void) const;
    
    //## auto_generated
    void setItsComputationUnit(ComputationUnit* const p_ComputationUnit);
    
    //## auto_generated
    const Environment* getItsEnvironment(void) const;
    
    //## auto_generated
    void setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    const Memory* getItsMemory(void) const;
    
    //## auto_generated
    void setItsMemory(Memory* const p_Memory);
    
    //## auto_generated
    const Sensors* getItsSensors(void) const;
    
    //## auto_generated
    void setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    const UI* getItsUI(void) const;
    
    //## auto_generated
    void setItsUI(UI* const p_UI);
    
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
    
    ComputationUnit* itsComputationUnit;		//## link itsComputationUnit
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    Memory* itsMemory;		//## link itsMemory
    
    Sensors* itsSensors;		//## link itsSensors
    
    UI* itsUI;		//## link itsUI
    
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
    void __setItsCommunication(Communication* const p_Communication);
    
    //## auto_generated
    void _setItsCommunication(Communication* const p_Communication);
    
    //## auto_generated
    void _clearItsCommunication(void);
    
    //## auto_generated
    void __setItsComputationUnit(ComputationUnit* const p_ComputationUnit);
    
    //## auto_generated
    void _setItsComputationUnit(ComputationUnit* const p_ComputationUnit);
    
    //## auto_generated
    void _clearItsComputationUnit(void);
    
    //## auto_generated
    void __setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _clearItsEnvironment(void);
    
    //## auto_generated
    void __setItsMemory(Memory* const p_Memory);
    
    //## auto_generated
    void _setItsMemory(Memory* const p_Memory);
    
    //## auto_generated
    void _clearItsMemory(void);
    
    //## auto_generated
    void __setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _clearItsSensors(void);
    
    //## auto_generated
    void __setItsUI(UI* const p_UI);
    
    //## auto_generated
    void _setItsUI(UI* const p_UI);
    
    //## auto_generated
    void _clearItsUI(void);
    
    //## auto_generated
    void __setItsUser(User* const p_User);
    
    //## auto_generated
    void _setItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSystem : virtual public AOMInstance {
    DECLARE_META(System, OMAnimatedSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\System.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: ComputationUnit
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\ComputationUnit.h
*********************************************************************/

#ifndef ComputationUnit_H
#define ComputationUnit_H

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
//## link itsController_System
class Controller_System;

//## package StructuralDiagrams

//## class ComputationUnit
class ComputationUnit {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedComputationUnit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ComputationUnit(void);
    
    //## auto_generated
    ~ComputationUnit(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Controller_System* getItsController_System(void) const;
    
    //## auto_generated
    void setItsController_System(Controller_System* const p_Controller_System);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Controller_System* itsController_System;		//## link itsController_System
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController_System(Controller_System* const p_Controller_System);
    
    //## auto_generated
    void _setItsController_System(Controller_System* const p_Controller_System);
    
    //## auto_generated
    void _clearItsController_System(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedComputationUnit : virtual public AOMInstance {
    DECLARE_META(ComputationUnit, OMAnimatedComputationUnit)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\ComputationUnit.h
*********************************************************************/

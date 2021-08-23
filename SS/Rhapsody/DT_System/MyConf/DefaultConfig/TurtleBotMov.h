/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: TurtleBotMov
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\TurtleBotMov.h
*********************************************************************/

#ifndef TurtleBotMov_H
#define TurtleBotMov_H

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

//## class TurtleBotMov
class TurtleBotMov {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTurtleBotMov;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TurtleBotMov(void);
    
    //## auto_generated
    ~TurtleBotMov(void);
    
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
class OMAnimatedTurtleBotMov : virtual public AOMInstance {
    DECLARE_META(TurtleBotMov, OMAnimatedTurtleBotMov)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\TurtleBotMov.h
*********************************************************************/

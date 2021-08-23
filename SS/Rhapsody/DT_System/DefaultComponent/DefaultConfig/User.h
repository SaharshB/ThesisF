/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\User.h
*********************************************************************/

#ifndef User_H
#define User_H

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
//## link itsIMR_System
class IMR_System;

//## package StructuralDiagrams

//## class User
class User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUser;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    User(void);
    
    //## auto_generated
    ~User(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const IMR_System* getItsIMR_System(void) const;
    
    //## auto_generated
    void setItsIMR_System(IMR_System* const p_IMR_System);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    IMR_System* itsIMR_System;		//## link itsIMR_System
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsIMR_System(IMR_System* const p_IMR_System);
    
    //## auto_generated
    void _setItsIMR_System(IMR_System* const p_IMR_System);
    
    //## auto_generated
    void _clearItsIMR_System(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUser : virtual public AOMInstance {
    DECLARE_META(User, OMAnimatedUser)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.h
*********************************************************************/

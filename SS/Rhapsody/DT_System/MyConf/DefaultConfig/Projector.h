/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Projector
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\Projector.h
*********************************************************************/

#ifndef Projector_H
#define Projector_H

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
//## class Projector
#include "GUI.h"
//## package StructuralDiagrams

//## class Projector
class Projector : public GUI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedProjector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Projector(void);
    
    //## auto_generated
    ~Projector(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProjector : public OMAnimatedGUI {
    DECLARE_META(Projector, OMAnimatedProjector)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\Projector.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: PIN_Panel
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\PIN_Panel.h
*********************************************************************/

#ifndef PIN_Panel_H
#define PIN_Panel_H

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
//## class PIN_Panel
#include "GUI.h"
//## package StructuralDiagrams

//## class PIN_Panel
class PIN_Panel : public GUI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPIN_Panel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PIN_Panel(void);
    
    //## auto_generated
    ~PIN_Panel(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPIN_Panel : public OMAnimatedGUI {
    DECLARE_META(PIN_Panel, OMAnimatedPIN_Panel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\PIN_Panel.h
*********************************************************************/

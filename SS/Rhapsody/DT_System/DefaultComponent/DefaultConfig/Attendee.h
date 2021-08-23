/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Attendee
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Attendee.h
*********************************************************************/

#ifndef Attendee_H
#define Attendee_H

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
#include "UseCaseAnalysisPkg.h"
//## link itsGUI
class GUI;

//## link itsNetwork_Connection
class Network_Connection;

//## link itsPIN_Panel
class PIN_Panel;

//## link itsTelephone_Line
class Telephone_Line;

//## package UseCaseAnalysisPkg

//## actor Attendee
class Attendee {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAttendee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Attendee(void);
    
    //## auto_generated
    ~Attendee(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const GUI* getItsGUI(void) const;
    
    //## auto_generated
    void setItsGUI(GUI* const p_GUI);
    
    //## auto_generated
    const Network_Connection* getItsNetwork_Connection(void) const;
    
    //## auto_generated
    void setItsNetwork_Connection(Network_Connection* const p_Network_Connection);
    
    //## auto_generated
    const PIN_Panel* getItsPIN_Panel(void) const;
    
    //## auto_generated
    void setItsPIN_Panel(PIN_Panel* const p_PIN_Panel);
    
    //## auto_generated
    const Telephone_Line* getItsTelephone_Line(void) const;
    
    //## auto_generated
    void setItsTelephone_Line(Telephone_Line* const p_Telephone_Line);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    GUI* itsGUI;		//## link itsGUI
    
    Network_Connection* itsNetwork_Connection;		//## link itsNetwork_Connection
    
    PIN_Panel* itsPIN_Panel;		//## link itsPIN_Panel
    
    Telephone_Line* itsTelephone_Line;		//## link itsTelephone_Line
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAttendee : virtual public AOMInstance {
    DECLARE_META(Attendee, OMAnimatedAttendee)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Attendee.h
*********************************************************************/

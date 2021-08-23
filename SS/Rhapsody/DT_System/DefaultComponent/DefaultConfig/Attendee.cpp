/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20192727
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Attendee
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Attendee.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Attendee.h"
//## link itsGUI
#include "GUI.h"
//## link itsNetwork_Connection
#include "Network_Connection.h"
//## link itsPIN_Panel
#include "PIN_Panel.h"
//## link itsTelephone_Line
#include "Telephone_Line.h"
//#[ ignore
#define UseCaseAnalysisPkg_Attendee_Attendee_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg

//## actor Attendee
Attendee::Attendee(void) : itsGUI(NULL), itsNetwork_Connection(NULL), itsPIN_Panel(NULL), itsTelephone_Line(NULL) {
    NOTIFY_CONSTRUCTOR(Attendee, Attendee(), 0, UseCaseAnalysisPkg_Attendee_Attendee_SERIALIZE);
}

Attendee::~Attendee(void) {
    NOTIFY_DESTRUCTOR(~Attendee, true);
    cleanUpRelations();
}

const GUI* Attendee::getItsGUI(void) const {
    return itsGUI;
}

void Attendee::setItsGUI(GUI* const p_GUI) {
    itsGUI = p_GUI;
    if(p_GUI != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGUI", p_GUI, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGUI");
        }
}

const Network_Connection* Attendee::getItsNetwork_Connection(void) const {
    return itsNetwork_Connection;
}

void Attendee::setItsNetwork_Connection(Network_Connection* const p_Network_Connection) {
    itsNetwork_Connection = p_Network_Connection;
    if(p_Network_Connection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork_Connection", p_Network_Connection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork_Connection");
        }
}

const PIN_Panel* Attendee::getItsPIN_Panel(void) const {
    return itsPIN_Panel;
}

void Attendee::setItsPIN_Panel(PIN_Panel* const p_PIN_Panel) {
    itsPIN_Panel = p_PIN_Panel;
    if(p_PIN_Panel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPIN_Panel", p_PIN_Panel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPIN_Panel");
        }
}

const Telephone_Line* Attendee::getItsTelephone_Line(void) const {
    return itsTelephone_Line;
}

void Attendee::setItsTelephone_Line(Telephone_Line* const p_Telephone_Line) {
    itsTelephone_Line = p_Telephone_Line;
    if(p_Telephone_Line != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTelephone_Line", p_Telephone_Line, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTelephone_Line");
        }
}

void Attendee::cleanUpRelations(void) {
    if(itsGUI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGUI");
            itsGUI = NULL;
        }
    if(itsNetwork_Connection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork_Connection");
            itsNetwork_Connection = NULL;
        }
    if(itsPIN_Panel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPIN_Panel");
            itsPIN_Panel = NULL;
        }
    if(itsTelephone_Line != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTelephone_Line");
            itsTelephone_Line = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAttendee::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPIN_Panel", false, true);
    if(myReal->itsPIN_Panel)
        {
            aomsRelations->ADD_ITEM(myReal->itsPIN_Panel);
        }
    aomsRelations->addRelation("itsGUI", false, true);
    if(myReal->itsGUI)
        {
            aomsRelations->ADD_ITEM(myReal->itsGUI);
        }
    aomsRelations->addRelation("itsNetwork_Connection", false, true);
    if(myReal->itsNetwork_Connection)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork_Connection);
        }
    aomsRelations->addRelation("itsTelephone_Line", false, true);
    if(myReal->itsTelephone_Line)
        {
            aomsRelations->ADD_ITEM(myReal->itsTelephone_Line);
        }
}
//#]

IMPLEMENT_META_P(Attendee, UseCaseAnalysisPkg, UseCaseAnalysisPkg, false, OMAnimatedAttendee)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Attendee.cpp
*********************************************************************/

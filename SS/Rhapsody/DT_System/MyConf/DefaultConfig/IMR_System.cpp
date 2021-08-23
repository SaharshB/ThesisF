/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: IMR_System
//!	Generated Date	: Sat, 24, Apr 2021  
	File Path	: MyConf\DefaultConfig\IMR_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IMR_System.h"
//## link itsActuators
#include "Actuators.h"
//## link itsCommunication
#include "Communication.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsGUI
#include "GUI.h"
//## link itsSafety
#include "Safety.h"
//## link itsSecurity_System
#include "Security_System.h"
//## link itsSensors
#include "Sensors.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define StructuralDiagrams_IMR_System_IMR_System_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class IMR_System
IMR_System::IMR_System(void) : itsActuators(NULL), itsCommunication(NULL), itsCommunication_1(NULL), itsCommunication_2(NULL), itsCommunication_3(NULL), itsEnvironment(NULL), itsGUI(NULL), itsSafety(NULL), itsSecurity_System(NULL), itsSensors(NULL), itsSensors_1(NULL), itsSensors_3(NULL), itsUser(NULL) {
    NOTIFY_CONSTRUCTOR(IMR_System, IMR_System(), 0, StructuralDiagrams_IMR_System_IMR_System_SERIALIZE);
}

IMR_System::~IMR_System(void) {
    NOTIFY_DESTRUCTOR(~IMR_System, true);
    cleanUpRelations();
}

const Actuators* IMR_System::getItsActuators(void) const {
    return itsActuators;
}

void IMR_System::setItsActuators(Actuators* const p_Actuators) {
    if(p_Actuators != NULL)
        {
            p_Actuators->_setItsIMR_System(this);
        }
    _setItsActuators(p_Actuators);
}

const Communication* IMR_System::getItsCommunication(void) const {
    return itsCommunication;
}

void IMR_System::setItsCommunication(Communication* const p_Communication) {
    itsCommunication = p_Communication;
    if(p_Communication != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication", p_Communication, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication");
        }
}

const Communication* IMR_System::getItsCommunication_1(void) const {
    return itsCommunication_1;
}

void IMR_System::setItsCommunication_1(Communication* const p_Communication) {
    itsCommunication_1 = p_Communication;
    if(p_Communication != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_1", p_Communication, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_1");
        }
}

const Communication* IMR_System::getItsCommunication_2(void) const {
    return itsCommunication_2;
}

void IMR_System::setItsCommunication_2(Communication* const p_Communication) {
    itsCommunication_2 = p_Communication;
    if(p_Communication != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_2", p_Communication, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_2");
        }
}

const Communication* IMR_System::getItsCommunication_3(void) const {
    return itsCommunication_3;
}

void IMR_System::setItsCommunication_3(Communication* const p_Communication) {
    if(p_Communication != NULL)
        {
            p_Communication->_setItsIMR_System(this);
        }
    _setItsCommunication_3(p_Communication);
}

const Environment* IMR_System::getItsEnvironment(void) const {
    return itsEnvironment;
}

void IMR_System::setItsEnvironment(Environment* const p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsIMR_System(this);
        }
    _setItsEnvironment(p_Environment);
}

const GUI* IMR_System::getItsGUI(void) const {
    return itsGUI;
}

void IMR_System::setItsGUI(GUI* const p_GUI) {
    if(p_GUI != NULL)
        {
            p_GUI->_setItsIMR_System(this);
        }
    _setItsGUI(p_GUI);
}

const Safety* IMR_System::getItsSafety(void) const {
    return itsSafety;
}

void IMR_System::setItsSafety(Safety* const p_Safety) {
    if(p_Safety != NULL)
        {
            p_Safety->_setItsIMR_System(this);
        }
    _setItsSafety(p_Safety);
}

const Security_System* IMR_System::getItsSecurity_System(void) const {
    return itsSecurity_System;
}

void IMR_System::setItsSecurity_System(Security_System* const p_Security_System) {
    if(p_Security_System != NULL)
        {
            p_Security_System->_setItsIMR_System(this);
        }
    _setItsSecurity_System(p_Security_System);
}

const Sensors* IMR_System::getItsSensors(void) const {
    return itsSensors;
}

void IMR_System::setItsSensors(Sensors* const p_Sensors) {
    itsSensors = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
        }
}

const Sensors* IMR_System::getItsSensors_1(void) const {
    return itsSensors_1;
}

void IMR_System::setItsSensors_1(Sensors* const p_Sensors) {
    itsSensors_1 = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors_1", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors_1");
        }
}

OMIterator<Sensors*> IMR_System::getItsSensors_2(void) const {
    OMIterator<Sensors*> iter(itsSensors_2);
    return iter;
}

void IMR_System::addItsSensors_2(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors_2", p_Sensors, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors_2");
        }
    itsSensors_2.add(p_Sensors);
}

void IMR_System::removeItsSensors_2(Sensors* const p_Sensors) {
    NOTIFY_RELATION_ITEM_REMOVED("itsSensors_2", p_Sensors);
    itsSensors_2.remove(p_Sensors);
}

void IMR_System::clearItsSensors_2(void) {
    NOTIFY_RELATION_CLEARED("itsSensors_2");
    itsSensors_2.removeAll();
}

const Sensors* IMR_System::getItsSensors_3(void) const {
    return itsSensors_3;
}

void IMR_System::setItsSensors_3(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsIMR_System(this);
        }
    _setItsSensors_3(p_Sensors);
}

const User* IMR_System::getItsUser(void) const {
    return itsUser;
}

void IMR_System::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsIMR_System(this);
        }
    _setItsUser(p_User);
}

void IMR_System::cleanUpRelations(void) {
    if(itsActuators != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsActuators");
            const IMR_System* p_IMR_System = itsActuators->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsActuators->__setItsIMR_System(NULL);
                }
            itsActuators = NULL;
        }
    if(itsCommunication != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication");
            itsCommunication = NULL;
        }
    if(itsCommunication_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_1");
            itsCommunication_1 = NULL;
        }
    if(itsCommunication_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_2");
            itsCommunication_2 = NULL;
        }
    if(itsCommunication_3 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_3");
            const IMR_System* p_IMR_System = itsCommunication_3->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsCommunication_3->__setItsIMR_System(NULL);
                }
            itsCommunication_3 = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            const IMR_System* p_IMR_System = itsEnvironment->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsEnvironment->__setItsIMR_System(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsGUI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGUI");
            const IMR_System* p_IMR_System = itsGUI->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsGUI->__setItsIMR_System(NULL);
                }
            itsGUI = NULL;
        }
    if(itsSafety != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafety");
            const IMR_System* p_IMR_System = itsSafety->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsSafety->__setItsIMR_System(NULL);
                }
            itsSafety = NULL;
        }
    if(itsSecurity_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSecurity_System");
            const IMR_System* p_IMR_System = itsSecurity_System->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsSecurity_System->__setItsIMR_System(NULL);
                }
            itsSecurity_System = NULL;
        }
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            itsSensors = NULL;
        }
    if(itsSensors_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors_1");
            itsSensors_1 = NULL;
        }
    {
        itsSensors_2.removeAll();
    }
    if(itsSensors_3 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors_3");
            const IMR_System* p_IMR_System = itsSensors_3->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsSensors_3->__setItsIMR_System(NULL);
                }
            itsSensors_3 = NULL;
        }
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            const IMR_System* p_IMR_System = itsUser->getItsIMR_System();
            if(p_IMR_System != NULL)
                {
                    itsUser->__setItsIMR_System(NULL);
                }
            itsUser = NULL;
        }
}

void IMR_System::__setItsActuators(Actuators* const p_Actuators) {
    itsActuators = p_Actuators;
    if(p_Actuators != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsActuators", p_Actuators, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsActuators");
        }
}

void IMR_System::_setItsActuators(Actuators* const p_Actuators) {
    if(itsActuators != NULL)
        {
            itsActuators->__setItsIMR_System(NULL);
        }
    __setItsActuators(p_Actuators);
}

void IMR_System::_clearItsActuators(void) {
    NOTIFY_RELATION_CLEARED("itsActuators");
    itsActuators = NULL;
}

void IMR_System::__setItsCommunication_3(Communication* const p_Communication) {
    itsCommunication_3 = p_Communication;
    if(p_Communication != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_3", p_Communication, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_3");
        }
}

void IMR_System::_setItsCommunication_3(Communication* const p_Communication) {
    if(itsCommunication_3 != NULL)
        {
            itsCommunication_3->__setItsIMR_System(NULL);
        }
    __setItsCommunication_3(p_Communication);
}

void IMR_System::_clearItsCommunication_3(void) {
    NOTIFY_RELATION_CLEARED("itsCommunication_3");
    itsCommunication_3 = NULL;
}

void IMR_System::__setItsEnvironment(Environment* const p_Environment) {
    itsEnvironment = p_Environment;
    if(p_Environment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironment", p_Environment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
        }
}

void IMR_System::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsIMR_System(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void IMR_System::_clearItsEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void IMR_System::__setItsGUI(GUI* const p_GUI) {
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

void IMR_System::_setItsGUI(GUI* const p_GUI) {
    if(itsGUI != NULL)
        {
            itsGUI->__setItsIMR_System(NULL);
        }
    __setItsGUI(p_GUI);
}

void IMR_System::_clearItsGUI(void) {
    NOTIFY_RELATION_CLEARED("itsGUI");
    itsGUI = NULL;
}

void IMR_System::__setItsSafety(Safety* const p_Safety) {
    itsSafety = p_Safety;
    if(p_Safety != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafety", p_Safety, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafety");
        }
}

void IMR_System::_setItsSafety(Safety* const p_Safety) {
    if(itsSafety != NULL)
        {
            itsSafety->__setItsIMR_System(NULL);
        }
    __setItsSafety(p_Safety);
}

void IMR_System::_clearItsSafety(void) {
    NOTIFY_RELATION_CLEARED("itsSafety");
    itsSafety = NULL;
}

void IMR_System::__setItsSecurity_System(Security_System* const p_Security_System) {
    itsSecurity_System = p_Security_System;
    if(p_Security_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSecurity_System", p_Security_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSecurity_System");
        }
}

void IMR_System::_setItsSecurity_System(Security_System* const p_Security_System) {
    if(itsSecurity_System != NULL)
        {
            itsSecurity_System->__setItsIMR_System(NULL);
        }
    __setItsSecurity_System(p_Security_System);
}

void IMR_System::_clearItsSecurity_System(void) {
    NOTIFY_RELATION_CLEARED("itsSecurity_System");
    itsSecurity_System = NULL;
}

void IMR_System::__setItsSensors_3(Sensors* const p_Sensors) {
    itsSensors_3 = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors_3", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors_3");
        }
}

void IMR_System::_setItsSensors_3(Sensors* const p_Sensors) {
    if(itsSensors_3 != NULL)
        {
            itsSensors_3->__setItsIMR_System(NULL);
        }
    __setItsSensors_3(p_Sensors);
}

void IMR_System::_clearItsSensors_3(void) {
    NOTIFY_RELATION_CLEARED("itsSensors_3");
    itsSensors_3 = NULL;
}

void IMR_System::__setItsUser(User* const p_User) {
    itsUser = p_User;
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
}

void IMR_System::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsIMR_System(NULL);
        }
    __setItsUser(p_User);
}

void IMR_System::_clearItsUser(void) {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedIMR_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsActuators", false, true);
    if(myReal->itsActuators)
        {
            aomsRelations->ADD_ITEM(myReal->itsActuators);
        }
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
    aomsRelations->addRelation("itsUser", false, true);
    if(myReal->itsUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsUser);
        }
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
    aomsRelations->addRelation("itsSafety", false, true);
    if(myReal->itsSafety)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafety);
        }
    aomsRelations->addRelation("itsSensors_1", false, true);
    if(myReal->itsSensors_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors_1);
        }
    aomsRelations->addRelation("itsGUI", false, true);
    if(myReal->itsGUI)
        {
            aomsRelations->ADD_ITEM(myReal->itsGUI);
        }
    aomsRelations->addRelation("itsSensors_2", false, false);
    {
        OMIterator<Sensors*> iter(myReal->itsSensors_2);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsCommunication", false, true);
    if(myReal->itsCommunication)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication);
        }
    aomsRelations->addRelation("itsCommunication_1", false, true);
    if(myReal->itsCommunication_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_1);
        }
    aomsRelations->addRelation("itsCommunication_2", false, true);
    if(myReal->itsCommunication_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_2);
        }
    aomsRelations->addRelation("itsCommunication_3", false, true);
    if(myReal->itsCommunication_3)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_3);
        }
    aomsRelations->addRelation("itsSecurity_System", false, true);
    if(myReal->itsSecurity_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsSecurity_System);
        }
    aomsRelations->addRelation("itsSensors_3", false, true);
    if(myReal->itsSensors_3)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors_3);
        }
}
//#]

IMPLEMENT_META_P(IMR_System, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedIMR_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\IMR_System.cpp
*********************************************************************/

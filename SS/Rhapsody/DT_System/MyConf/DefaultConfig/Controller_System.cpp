/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Controller_System
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\Controller_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Controller_System.h"
//## link itsActuators
#include "Actuators.h"
//## link itsCommunication
#include "Communication.h"
//## link itsComputationUnit
#include "ComputationUnit.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsMemory
#include "Memory.h"
//## link itsSensors
#include "Sensors.h"
//## link itsUI
#include "UI.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define StructuralDiagrams_Controller_System_Controller_System_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class Controller_System
Controller_System::Controller_System(void) : itsActuators(NULL), itsCommunication(NULL), itsComputationUnit(NULL), itsEnvironment(NULL), itsMemory(NULL), itsSensors(NULL), itsUI(NULL), itsUser(NULL) {
    NOTIFY_CONSTRUCTOR(Controller_System, Controller_System(), 0, StructuralDiagrams_Controller_System_Controller_System_SERIALIZE);
}

Controller_System::~Controller_System(void) {
    NOTIFY_DESTRUCTOR(~Controller_System, true);
    cleanUpRelations();
}

const Actuators* Controller_System::getItsActuators(void) const {
    return itsActuators;
}

void Controller_System::setItsActuators(Actuators* const p_Actuators) {
    if(p_Actuators != NULL)
        {
            p_Actuators->_setItsController_System(this);
        }
    _setItsActuators(p_Actuators);
}

const Communication* Controller_System::getItsCommunication(void) const {
    return itsCommunication;
}

void Controller_System::setItsCommunication(Communication* const p_Communication) {
    if(p_Communication != NULL)
        {
            p_Communication->_setItsController_System(this);
        }
    _setItsCommunication(p_Communication);
}

const ComputationUnit* Controller_System::getItsComputationUnit(void) const {
    return itsComputationUnit;
}

void Controller_System::setItsComputationUnit(ComputationUnit* const p_ComputationUnit) {
    if(p_ComputationUnit != NULL)
        {
            p_ComputationUnit->_setItsController_System(this);
        }
    _setItsComputationUnit(p_ComputationUnit);
}

const Environment* Controller_System::getItsEnvironment(void) const {
    return itsEnvironment;
}

void Controller_System::setItsEnvironment(Environment* const p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsController_System(this);
        }
    _setItsEnvironment(p_Environment);
}

const Memory* Controller_System::getItsMemory(void) const {
    return itsMemory;
}

void Controller_System::setItsMemory(Memory* const p_Memory) {
    if(p_Memory != NULL)
        {
            p_Memory->_setItsController_System(this);
        }
    _setItsMemory(p_Memory);
}

const Sensors* Controller_System::getItsSensors(void) const {
    return itsSensors;
}

void Controller_System::setItsSensors(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsContrller(this);
        }
    _setItsSensors(p_Sensors);
}

const UI* Controller_System::getItsUI(void) const {
    return itsUI;
}

void Controller_System::setItsUI(UI* const p_UI) {
    if(p_UI != NULL)
        {
            p_UI->_setItsController_System(this);
        }
    _setItsUI(p_UI);
}

const User* Controller_System::getItsUser(void) const {
    return itsUser;
}

void Controller_System::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsController_System(this);
        }
    _setItsUser(p_User);
}

void Controller_System::cleanUpRelations(void) {
    if(itsActuators != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsActuators");
            const Controller_System* p_Controller_System = itsActuators->getItsController_System();
            if(p_Controller_System != NULL)
                {
                    itsActuators->__setItsController_System(NULL);
                }
            itsActuators = NULL;
        }
    if(itsCommunication != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication");
            const Controller_System* p_Controller_System = itsCommunication->getItsController_System();
            if(p_Controller_System != NULL)
                {
                    itsCommunication->__setItsController_System(NULL);
                }
            itsCommunication = NULL;
        }
    if(itsComputationUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsComputationUnit");
            const Controller_System* p_Controller_System = itsComputationUnit->getItsController_System();
            if(p_Controller_System != NULL)
                {
                    itsComputationUnit->__setItsController_System(NULL);
                }
            itsComputationUnit = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            const Controller_System* p_Controller_System = itsEnvironment->getItsController_System();
            if(p_Controller_System != NULL)
                {
                    itsEnvironment->__setItsController_System(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsMemory != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMemory");
            const Controller_System* p_Controller_System = itsMemory->getItsController_System();
            if(p_Controller_System != NULL)
                {
                    itsMemory->__setItsController_System(NULL);
                }
            itsMemory = NULL;
        }
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            const Controller_System* p_Controller_System = itsSensors->getItsContrller();
            if(p_Controller_System != NULL)
                {
                    itsSensors->__setItsContrller(NULL);
                }
            itsSensors = NULL;
        }
    if(itsUI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUI");
            const Controller_System* p_Controller_System = itsUI->getItsController_System();
            if(p_Controller_System != NULL)
                {
                    itsUI->__setItsController_System(NULL);
                }
            itsUI = NULL;
        }
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            const Controller_System* p_Controller_System = itsUser->getItsController_System();
            if(p_Controller_System != NULL)
                {
                    itsUser->__setItsController_System(NULL);
                }
            itsUser = NULL;
        }
}

void Controller_System::__setItsActuators(Actuators* const p_Actuators) {
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

void Controller_System::_setItsActuators(Actuators* const p_Actuators) {
    if(itsActuators != NULL)
        {
            itsActuators->__setItsController_System(NULL);
        }
    __setItsActuators(p_Actuators);
}

void Controller_System::_clearItsActuators(void) {
    NOTIFY_RELATION_CLEARED("itsActuators");
    itsActuators = NULL;
}

void Controller_System::__setItsCommunication(Communication* const p_Communication) {
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

void Controller_System::_setItsCommunication(Communication* const p_Communication) {
    if(itsCommunication != NULL)
        {
            itsCommunication->__setItsController_System(NULL);
        }
    __setItsCommunication(p_Communication);
}

void Controller_System::_clearItsCommunication(void) {
    NOTIFY_RELATION_CLEARED("itsCommunication");
    itsCommunication = NULL;
}

void Controller_System::__setItsComputationUnit(ComputationUnit* const p_ComputationUnit) {
    itsComputationUnit = p_ComputationUnit;
    if(p_ComputationUnit != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsComputationUnit", p_ComputationUnit, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsComputationUnit");
        }
}

void Controller_System::_setItsComputationUnit(ComputationUnit* const p_ComputationUnit) {
    if(itsComputationUnit != NULL)
        {
            itsComputationUnit->__setItsController_System(NULL);
        }
    __setItsComputationUnit(p_ComputationUnit);
}

void Controller_System::_clearItsComputationUnit(void) {
    NOTIFY_RELATION_CLEARED("itsComputationUnit");
    itsComputationUnit = NULL;
}

void Controller_System::__setItsEnvironment(Environment* const p_Environment) {
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

void Controller_System::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsController_System(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void Controller_System::_clearItsEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void Controller_System::__setItsMemory(Memory* const p_Memory) {
    itsMemory = p_Memory;
    if(p_Memory != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMemory", p_Memory, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMemory");
        }
}

void Controller_System::_setItsMemory(Memory* const p_Memory) {
    if(itsMemory != NULL)
        {
            itsMemory->__setItsController_System(NULL);
        }
    __setItsMemory(p_Memory);
}

void Controller_System::_clearItsMemory(void) {
    NOTIFY_RELATION_CLEARED("itsMemory");
    itsMemory = NULL;
}

void Controller_System::__setItsSensors(Sensors* const p_Sensors) {
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

void Controller_System::_setItsSensors(Sensors* const p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsContrller(NULL);
        }
    __setItsSensors(p_Sensors);
}

void Controller_System::_clearItsSensors(void) {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

void Controller_System::__setItsUI(UI* const p_UI) {
    itsUI = p_UI;
    if(p_UI != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUI", p_UI, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUI");
        }
}

void Controller_System::_setItsUI(UI* const p_UI) {
    if(itsUI != NULL)
        {
            itsUI->__setItsController_System(NULL);
        }
    __setItsUI(p_UI);
}

void Controller_System::_clearItsUI(void) {
    NOTIFY_RELATION_CLEARED("itsUI");
    itsUI = NULL;
}

void Controller_System::__setItsUser(User* const p_User) {
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

void Controller_System::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsController_System(NULL);
        }
    __setItsUser(p_User);
}

void Controller_System::_clearItsUser(void) {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsActuators", false, true);
    if(myReal->itsActuators)
        {
            aomsRelations->ADD_ITEM(myReal->itsActuators);
        }
    aomsRelations->addRelation("itsComputationUnit", false, true);
    if(myReal->itsComputationUnit)
        {
            aomsRelations->ADD_ITEM(myReal->itsComputationUnit);
        }
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
    aomsRelations->addRelation("itsUI", false, true);
    if(myReal->itsUI)
        {
            aomsRelations->ADD_ITEM(myReal->itsUI);
        }
    aomsRelations->addRelation("itsMemory", false, true);
    if(myReal->itsMemory)
        {
            aomsRelations->ADD_ITEM(myReal->itsMemory);
        }
    aomsRelations->addRelation("itsCommunication", false, true);
    if(myReal->itsCommunication)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication);
        }
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
    aomsRelations->addRelation("itsUser", false, true);
    if(myReal->itsUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsUser);
        }
}
//#]

IMPLEMENT_META_P(Controller_System, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedController_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Controller_System.cpp
*********************************************************************/

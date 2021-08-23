/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: System
//!	Generated Date	: Sun, 8, Aug 2021  
	File Path	: MyConf\DefaultConfig\System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "System.h"
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
#define StructuralDiagrams_System_System_SERIALIZE OM_NO_OP
//#]

//## package StructuralDiagrams

//## class System
System::System(void) : itsActuators(NULL), itsCommunication(NULL), itsComputationUnit(NULL), itsEnvironment(NULL), itsMemory(NULL), itsSensors(NULL), itsUI(NULL), itsUser(NULL) {
    NOTIFY_CONSTRUCTOR(System, System(), 0, StructuralDiagrams_System_System_SERIALIZE);
}

System::~System(void) {
    NOTIFY_DESTRUCTOR(~System, true);
    cleanUpRelations();
}

const Actuators* System::getItsActuators(void) const {
    return itsActuators;
}

void System::setItsActuators(Actuators* const p_Actuators) {
    if(p_Actuators != NULL)
        {
            p_Actuators->_setItsSystem(this);
        }
    _setItsActuators(p_Actuators);
}

const Communication* System::getItsCommunication(void) const {
    return itsCommunication;
}

void System::setItsCommunication(Communication* const p_Communication) {
    if(p_Communication != NULL)
        {
            p_Communication->_setItsSystem(this);
        }
    _setItsCommunication(p_Communication);
}

const ComputationUnit* System::getItsComputationUnit(void) const {
    return itsComputationUnit;
}

void System::setItsComputationUnit(ComputationUnit* const p_ComputationUnit) {
    if(p_ComputationUnit != NULL)
        {
            p_ComputationUnit->_setItsSystem(this);
        }
    _setItsComputationUnit(p_ComputationUnit);
}

const Environment* System::getItsEnvironment(void) const {
    return itsEnvironment;
}

void System::setItsEnvironment(Environment* const p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsSystem(this);
        }
    _setItsEnvironment(p_Environment);
}

const Memory* System::getItsMemory(void) const {
    return itsMemory;
}

void System::setItsMemory(Memory* const p_Memory) {
    if(p_Memory != NULL)
        {
            p_Memory->_setItsSystem(this);
        }
    _setItsMemory(p_Memory);
}

const Sensors* System::getItsSensors(void) const {
    return itsSensors;
}

void System::setItsSensors(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsContrller(this);
        }
    _setItsSensors(p_Sensors);
}

const UI* System::getItsUI(void) const {
    return itsUI;
}

void System::setItsUI(UI* const p_UI) {
    if(p_UI != NULL)
        {
            p_UI->_setItsSystem(this);
        }
    _setItsUI(p_UI);
}

const User* System::getItsUser(void) const {
    return itsUser;
}

void System::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsSystem(this);
        }
    _setItsUser(p_User);
}

void System::cleanUpRelations(void) {
    if(itsActuators != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsActuators");
            const System* p_System = itsActuators->getItsSystem();
            if(p_System != NULL)
                {
                    itsActuators->__setItsSystem(NULL);
                }
            itsActuators = NULL;
        }
    if(itsCommunication != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication");
            const System* p_System = itsCommunication->getItsSystem();
            if(p_System != NULL)
                {
                    itsCommunication->__setItsSystem(NULL);
                }
            itsCommunication = NULL;
        }
    if(itsComputationUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsComputationUnit");
            const System* p_System = itsComputationUnit->getItsSystem();
            if(p_System != NULL)
                {
                    itsComputationUnit->__setItsSystem(NULL);
                }
            itsComputationUnit = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            const System* p_System = itsEnvironment->getItsSystem();
            if(p_System != NULL)
                {
                    itsEnvironment->__setItsSystem(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsMemory != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMemory");
            const System* p_System = itsMemory->getItsSystem();
            if(p_System != NULL)
                {
                    itsMemory->__setItsSystem(NULL);
                }
            itsMemory = NULL;
        }
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            const System* p_System = itsSensors->getItsContrller();
            if(p_System != NULL)
                {
                    itsSensors->__setItsContrller(NULL);
                }
            itsSensors = NULL;
        }
    if(itsUI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUI");
            const System* p_System = itsUI->getItsSystem();
            if(p_System != NULL)
                {
                    itsUI->__setItsSystem(NULL);
                }
            itsUI = NULL;
        }
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            const System* p_System = itsUser->getItsSystem();
            if(p_System != NULL)
                {
                    itsUser->__setItsSystem(NULL);
                }
            itsUser = NULL;
        }
}

void System::__setItsActuators(Actuators* const p_Actuators) {
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

void System::_setItsActuators(Actuators* const p_Actuators) {
    if(itsActuators != NULL)
        {
            itsActuators->__setItsSystem(NULL);
        }
    __setItsActuators(p_Actuators);
}

void System::_clearItsActuators(void) {
    NOTIFY_RELATION_CLEARED("itsActuators");
    itsActuators = NULL;
}

void System::__setItsCommunication(Communication* const p_Communication) {
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

void System::_setItsCommunication(Communication* const p_Communication) {
    if(itsCommunication != NULL)
        {
            itsCommunication->__setItsSystem(NULL);
        }
    __setItsCommunication(p_Communication);
}

void System::_clearItsCommunication(void) {
    NOTIFY_RELATION_CLEARED("itsCommunication");
    itsCommunication = NULL;
}

void System::__setItsComputationUnit(ComputationUnit* const p_ComputationUnit) {
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

void System::_setItsComputationUnit(ComputationUnit* const p_ComputationUnit) {
    if(itsComputationUnit != NULL)
        {
            itsComputationUnit->__setItsSystem(NULL);
        }
    __setItsComputationUnit(p_ComputationUnit);
}

void System::_clearItsComputationUnit(void) {
    NOTIFY_RELATION_CLEARED("itsComputationUnit");
    itsComputationUnit = NULL;
}

void System::__setItsEnvironment(Environment* const p_Environment) {
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

void System::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsSystem(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void System::_clearItsEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void System::__setItsMemory(Memory* const p_Memory) {
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

void System::_setItsMemory(Memory* const p_Memory) {
    if(itsMemory != NULL)
        {
            itsMemory->__setItsSystem(NULL);
        }
    __setItsMemory(p_Memory);
}

void System::_clearItsMemory(void) {
    NOTIFY_RELATION_CLEARED("itsMemory");
    itsMemory = NULL;
}

void System::__setItsSensors(Sensors* const p_Sensors) {
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

void System::_setItsSensors(Sensors* const p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsContrller(NULL);
        }
    __setItsSensors(p_Sensors);
}

void System::_clearItsSensors(void) {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

void System::__setItsUI(UI* const p_UI) {
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

void System::_setItsUI(UI* const p_UI) {
    if(itsUI != NULL)
        {
            itsUI->__setItsSystem(NULL);
        }
    __setItsUI(p_UI);
}

void System::_clearItsUI(void) {
    NOTIFY_RELATION_CLEARED("itsUI");
    itsUI = NULL;
}

void System::__setItsUser(User* const p_User) {
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

void System::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsSystem(NULL);
        }
    __setItsUser(p_User);
}

void System::_clearItsUser(void) {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSystem::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_META_P(System, StructuralDiagrams, StructuralDiagrams, false, OMAnimatedSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\System.cpp
*********************************************************************/

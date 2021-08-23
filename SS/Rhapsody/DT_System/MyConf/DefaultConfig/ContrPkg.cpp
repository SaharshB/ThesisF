/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: ContrPkg
//!	Generated Date	: Thu, 22, Jul 2021  
	File Path	: MyConf\DefaultConfig\ContrPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ContrPkg.h"
//## classInstance itsBotMov_UC
#include "BotMov_UC.h"
//## classInstance itsDisplay_UC
#include "Display_UC.h"
//## classInstance itsMagCalc_UC
#include "MagCalc_UC.h"
//## classInstance itsPathCalc_UC
#include "PathCalc_UC.h"
//## classInstance itsSendToUnity
#include "SendToUnity.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "IMR.h"
//#[ ignore
#define evDisplayMap_SERIALIZE OM_NO_OP

#define evDisplayMap_UNSERIALIZE OM_NO_OP

#define evDisplayMap_CONSTRUCTOR evDisplayMap()

#define evMove_SERIALIZE OM_NO_OP

#define evMove_UNSERIALIZE OM_NO_OP

#define evMove_CONSTRUCTOR evMove()

#define evSetDir_SERIALIZE OM_NO_OP

#define evSetDir_UNSERIALIZE OM_NO_OP

#define evSetDir_CONSTRUCTOR evSetDir()

#define evSetSpeed_SERIALIZE OM_NO_OP

#define evSetSpeed_UNSERIALIZE OM_NO_OP

#define evSetSpeed_CONSTRUCTOR evSetSpeed()

#define evSetDest_SERIALIZE OM_NO_OP

#define evSetDest_UNSERIALIZE OM_NO_OP

#define evSetDest_CONSTRUCTOR evSetDest()

#define evPathPlan_SERIALIZE OM_NO_OP

#define evPathPlan_UNSERIALIZE OM_NO_OP

#define evPathPlan_CONSTRUCTOR evPathPlan()

#define evCheckMagVal_SERIALIZE OM_NO_OP

#define evCheckMagVal_UNSERIALIZE OM_NO_OP

#define evCheckMagVal_CONSTRUCTOR evCheckMagVal()

#define evSetMagExtrpMethod_SERIALIZE OM_NO_OP

#define evSetMagExtrpMethod_UNSERIALIZE OM_NO_OP

#define evSetMagExtrpMethod_CONSTRUCTOR evSetMagExtrpMethod()

#define evGoToDest_SERIALIZE OM_NO_OP

#define evGoToDest_UNSERIALIZE OM_NO_OP

#define evGoToDest_CONSTRUCTOR evGoToDest()
//#]

//## package ContrPkg


//## classInstance itsBotMov_UC
BotMov_UC itsBotMov_UC;

//## classInstance itsDisplay_UC
Display_UC itsDisplay_UC;

//## classInstance itsMagCalc_UC
MagCalc_UC itsMagCalc_UC;

//## classInstance itsMagCalc_UC_1
MagCalc_UC itsMagCalc_UC_1;

//## classInstance itsMagCalc_UC_2
MagCalc_UC itsMagCalc_UC_2;

//## classInstance itsPathCalc_UC
PathCalc_UC itsPathCalc_UC;

//## classInstance itsSendToUnity
SendToUnity itsSendToUnity;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(ContrPkg, ContrPkg)
#endif // _OMINSTRUMENT

void ContrPkg_initRelations(void) {
    {
        {
            itsSendToUnity.setShouldDelete(false);
        }
        {
            itsPathCalc_UC.setShouldDelete(false);
        }
        {
            itsDisplay_UC.setShouldDelete(false);
        }
        {
            itsBotMov_UC.setShouldDelete(false);
        }
        {
            itsMagCalc_UC.setShouldDelete(false);
        }
        {
            itsMagCalc_UC_1.setShouldDelete(false);
        }
        {
            itsMagCalc_UC_2.setShouldDelete(false);
        }
    }
    {
        
        itsDisplay_UC.get_ShowMap_SP()->setItsIntFlowInterface(itsSendToUnity.get_ShowMap_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsMagCalc_UC.get_GetMagVal_SP()->setItsIntFlowInterface(itsSendToUnity.get_GetMagVal_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsMagCalc_UC_2.get_GetMagVal_SP()->setItsIntFlowInterface(itsSendToUnity.get_GetMagVal_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsMagCalc_UC.get_MagCalcMethod_SP()->addItsIntFlowInterface(itsSendToUnity.get_MagCalcMethod_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsMagCalc_UC_2.get_MagCalcMethod_SP()->addItsIntFlowInterface(itsSendToUnity.get_MagCalcMethod_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsMagCalc_UC_2.get_MagCalcMethod_SP()->addItsIntFlowInterface(itsDisplay_UC.get_MagCalcMethod_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsPathCalc_UC.get_Destination_SP()->addItsIntFlowInterface(itsSendToUnity.get_Destination_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsPathCalc_UC.get_Destination_SP()->addItsIntFlowInterface(itsDisplay_UC.get_Destination_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsPathCalc_UC.get_PathAlgo_SP()->addItsIntFlowInterface(itsSendToUnity.get_PathAlgo_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsPathCalc_UC.get_PathAlgo_SP()->addItsIntFlowInterface(itsDisplay_UC.get_PathAlgo_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsPathCalc_UC.get_Go_SP()->setItsIntFlowInterface(itsSendToUnity.get_Go_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsBotMov_UC.get_Speed_SP()->setItsIntFlowInterface(itsSendToUnity.get_Speed_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsBotMov_UC.get_MovDir_SP()->setItsIntFlowInterface(itsSendToUnity.get_MovDir_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsBotMov_UC.get_StateBot_SP()->addItsIntFlowInterface(itsSendToUnity.get_StateBot_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsBotMov_UC.get_StateBot_SP()->addItsIntFlowInterface(itsPathCalc_UC.get_StateBot_SP()->getItsIntFlowInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool ContrPkg_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsBotMov_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsDisplay_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsMagCalc_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsMagCalc_UC_1.startBehavior();
        }
    if(done == true)
        {
            done = itsMagCalc_UC_2.startBehavior();
        }
    if(done == true)
        {
            done = itsPathCalc_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsSendToUnity.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsSendToUnity, SendToUnity, "itsSendToUnity", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsPathCalc_UC, PathCalc_UC, "itsPathCalc_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDisplay_UC, Display_UC, "itsDisplay_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsBotMov_UC, BotMov_UC, "itsBotMov_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsMagCalc_UC, MagCalc_UC, "itsMagCalc_UC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsMagCalc_UC_1, MagCalc_UC, "itsMagCalc_UC_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsMagCalc_UC_2, MagCalc_UC, "itsMagCalc_UC_2", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
ContrPkg_OMInitializer::ContrPkg_OMInitializer(void) {
    ContrPkg_initRelations();
    (void) ContrPkg_startBehavior();
}

ContrPkg_OMInitializer::~ContrPkg_OMInitializer(void) {
}
//#]

//## event evDisplayMap()
evDisplayMap::evDisplayMap(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evDisplayMap)
    setId(evDisplayMap_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evDisplayMap_ContrPkg_id(18601);
//#]

IMPLEMENT_META_EVENT_P(evDisplayMap, ContrPkg, ContrPkg, evDisplayMap())

//## event evMove()
evMove::evMove(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evMove)
    setId(evMove_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evMove_ContrPkg_id(18602);
//#]

IMPLEMENT_META_EVENT_P(evMove, ContrPkg, ContrPkg, evMove())

//## event evSetDir()
evSetDir::evSetDir(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetDir)
    setId(evSetDir_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evSetDir_ContrPkg_id(18603);
//#]

IMPLEMENT_META_EVENT_P(evSetDir, ContrPkg, ContrPkg, evSetDir())

//## event evSetSpeed()
evSetSpeed::evSetSpeed(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetSpeed)
    setId(evSetSpeed_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evSetSpeed_ContrPkg_id(18604);
//#]

IMPLEMENT_META_EVENT_P(evSetSpeed, ContrPkg, ContrPkg, evSetSpeed())

//## event evSetDest()
evSetDest::evSetDest(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetDest)
    setId(evSetDest_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evSetDest_ContrPkg_id(18605);
//#]

IMPLEMENT_META_EVENT_P(evSetDest, ContrPkg, ContrPkg, evSetDest())

//## event evPathPlan()
evPathPlan::evPathPlan(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evPathPlan)
    setId(evPathPlan_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evPathPlan_ContrPkg_id(18606);
//#]

IMPLEMENT_META_EVENT_P(evPathPlan, ContrPkg, ContrPkg, evPathPlan())

//## event evCheckMagVal()
evCheckMagVal::evCheckMagVal(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evCheckMagVal)
    setId(evCheckMagVal_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evCheckMagVal_ContrPkg_id(18607);
//#]

IMPLEMENT_META_EVENT_P(evCheckMagVal, ContrPkg, ContrPkg, evCheckMagVal())

//## event evSetMagExtrpMethod()
evSetMagExtrpMethod::evSetMagExtrpMethod(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetMagExtrpMethod)
    setId(evSetMagExtrpMethod_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evSetMagExtrpMethod_ContrPkg_id(18608);
//#]

IMPLEMENT_META_EVENT_P(evSetMagExtrpMethod, ContrPkg, ContrPkg, evSetMagExtrpMethod())

//## event evGoToDest()
evGoToDest::evGoToDest(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evGoToDest)
    setId(evGoToDest_ContrPkg_id);
}

//#[ ignore
const IOxfEvent::ID evGoToDest_ContrPkg_id(18609);
//#]

IMPLEMENT_META_EVENT_P(evGoToDest, ContrPkg, ContrPkg, evGoToDest())

/*********************************************************************
	File Path	: MyConf\DefaultConfig\ContrPkg.cpp
*********************************************************************/

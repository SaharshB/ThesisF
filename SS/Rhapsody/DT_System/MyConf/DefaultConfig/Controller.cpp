/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Controller.h"
//#[ ignore
#define ContrPkg_Controller_Controller_SERIALIZE OM_NO_OP
//#]

//## package ContrPkg

//## class Controller
Controller::Controller(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Controller, Controller(), 0, ContrPkg_Controller_Controller_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDisplay_UC.setShouldDelete(false);
        }
        {
            itsSendToUnity.setShouldDelete(false);
        }
        {
            itsMagCalc_UC.setShouldDelete(false);
        }
        {
            itsPathCalc_UC.setShouldDelete(false);
        }
        {
            itsBotMov_UC.setShouldDelete(false);
        }
    }
}

Controller::~Controller(void) {
    NOTIFY_DESTRUCTOR(~Controller, true);
}

const BotMov_UC* Controller::getItsBotMov_UC(void) const {
    return &itsBotMov_UC;
}

const Display_UC* Controller::getItsDisplay_UC(void) const {
    return &itsDisplay_UC;
}

const MagCalc_UC* Controller::getItsMagCalc_UC(void) const {
    return &itsMagCalc_UC;
}

const PathCalc_UC* Controller::getItsPathCalc_UC(void) const {
    return &itsPathCalc_UC;
}

const SendToUnity* Controller::getItsSendToUnity(void) const {
    return &itsSendToUnity;
}

bool Controller::startBehavior(void) {
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
            done = itsPathCalc_UC.startBehavior();
        }
    if(done == true)
        {
            done = itsSendToUnity.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Controller::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDisplay_UC.setActiveContext(theActiveContext, false);
        itsMagCalc_UC.setActiveContext(theActiveContext, false);
        itsPathCalc_UC.setActiveContext(theActiveContext, false);
        itsBotMov_UC.setActiveContext(theActiveContext, false);
    }
}

void Controller::destroy(void) {
    itsBotMov_UC.destroy();
    itsDisplay_UC.destroy();
    itsMagCalc_UC.destroy();
    itsPathCalc_UC.destroy();
    itsSendToUnity.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDisplay_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDisplay_UC);
    aomsRelations->addRelation("itsSendToUnity", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSendToUnity);
    aomsRelations->addRelation("itsMagCalc_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMagCalc_UC);
    aomsRelations->addRelation("itsPathCalc_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPathCalc_UC);
    aomsRelations->addRelation("itsBotMov_UC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsBotMov_UC);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Controller, ContrPkg, ContrPkg, false, OMAnimatedController)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\Controller.cpp
*********************************************************************/

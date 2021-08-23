/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: IMR
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\IMR.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IMR.h"
//#[ ignore
#define ContrPkg_IMR_IMR_SERIALIZE OM_NO_OP
//#]

//## package ContrPkg

//## class IMR
IMR::IMR(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(IMR, IMR(), 0, ContrPkg_IMR_IMR_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsSendToUnity.setShouldDelete(false);
        }
    }
}

IMR::~IMR(void) {
    NOTIFY_DESTRUCTOR(~IMR, true);
}

const SendToUnity* IMR::getItsSendToUnity(void) const {
    return &itsSendToUnity;
}

bool IMR::startBehavior(void) {
    bool done = true;
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

void IMR::destroy(void) {
    itsSendToUnity.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedIMR::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSendToUnity", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSendToUnity);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(IMR, ContrPkg, ContrPkg, false, OMAnimatedIMR)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\IMR.cpp
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: IMR
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\IMR.h
*********************************************************************/

#ifndef IMR_H
#define IMR_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsSendToUnity
#include "SendToUnity.h"
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
#include "ContrPkg.h"
//## package ContrPkg

//## class IMR
class IMR : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIMR;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit IMR(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~IMR(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SendToUnity* getItsSendToUnity(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    virtual void destroy(void);

private :

    SendToUnity itsSendToUnity;		//## classInstance itsSendToUnity
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIMR : virtual public AOMInstance {
    DECLARE_META(IMR, OMAnimatedIMR)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\IMR.h
*********************************************************************/

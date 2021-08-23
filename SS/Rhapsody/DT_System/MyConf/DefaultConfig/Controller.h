/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

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
#include "ContrPkg.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
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
//## package ContrPkg

//## class Controller
class Controller : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Controller(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Controller(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const BotMov_UC* getItsBotMov_UC(void) const;
    
    //## auto_generated
    const Display_UC* getItsDisplay_UC(void) const;
    
    //## auto_generated
    const MagCalc_UC* getItsMagCalc_UC(void) const;
    
    //## auto_generated
    const PathCalc_UC* getItsPathCalc_UC(void) const;
    
    //## auto_generated
    const SendToUnity* getItsSendToUnity(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////

private :

    BotMov_UC itsBotMov_UC;		//## classInstance itsBotMov_UC
    
    Display_UC itsDisplay_UC;		//## classInstance itsDisplay_UC
    
    MagCalc_UC itsMagCalc_UC;		//## classInstance itsMagCalc_UC
    
    PathCalc_UC itsPathCalc_UC;		//## classInstance itsPathCalc_UC
    
    SendToUnity itsSendToUnity;		//## classInstance itsSendToUnity
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : virtual public AOMInstance {
    DECLARE_META(Controller, OMAnimatedController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\Controller.h
*********************************************************************/

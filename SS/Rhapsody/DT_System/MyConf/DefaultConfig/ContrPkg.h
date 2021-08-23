/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: ContrPkg
//!	Generated Date	: Thu, 22, Jul 2021  
	File Path	: MyConf\DefaultConfig\ContrPkg.h
*********************************************************************/

#ifndef ContrPkg_H
#define ContrPkg_H

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
#include <event.h>
//## classInstance itsBotMov_UC
class BotMov_UC;

//## auto_generated
class Controller;

//## classInstance itsDisplay_UC
class Display_UC;

//## auto_generated
class IMR;

//## classInstance itsMagCalc_UC
class MagCalc_UC;

//## classInstance itsPathCalc_UC
class PathCalc_UC;

//## classInstance itsSendToUnity
class SendToUnity;

//## package ContrPkg


//#[ type DEFAULT_BUFLEN
#define DEFAULT_BUFLEN 1024
//#]

//## classInstance itsBotMov_UC
extern BotMov_UC itsBotMov_UC;

//## classInstance itsDisplay_UC
extern Display_UC itsDisplay_UC;

//## classInstance itsMagCalc_UC
extern MagCalc_UC itsMagCalc_UC;

//## classInstance itsMagCalc_UC_1
extern MagCalc_UC itsMagCalc_UC_1;

//## classInstance itsMagCalc_UC_2
extern MagCalc_UC itsMagCalc_UC_2;

//## classInstance itsPathCalc_UC
extern PathCalc_UC itsPathCalc_UC;

//## classInstance itsSendToUnity
extern SendToUnity itsSendToUnity;

//## auto_generated
void ContrPkg_initRelations(void);

//## auto_generated
bool ContrPkg_startBehavior(void);

//#[ ignore
class ContrPkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ContrPkg_OMInitializer(void);
    
    //## auto_generated
    ~ContrPkg_OMInitializer(void);
};
//#]

//## event evDisplayMap()
class evDisplayMap : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDisplayMap;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDisplayMap(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDisplayMap : virtual public AOMEvent {
    DECLARE_META_EVENT(evDisplayMap)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evDisplayMap_ContrPkg_id;
//#]

//## event evMove()
class evMove : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMove;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMove(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMove : virtual public AOMEvent {
    DECLARE_META_EVENT(evMove)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evMove_ContrPkg_id;
//#]

//## event evSetDir()
class evSetDir : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetDir;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetDir(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetDir : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetDir)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSetDir_ContrPkg_id;
//#]

//## event evSetSpeed()
class evSetSpeed : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetSpeed;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetSpeed(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetSpeed : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetSpeed)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSetSpeed_ContrPkg_id;
//#]

//## event evSetDest()
class evSetDest : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetDest;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetDest(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetDest : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetDest)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSetDest_ContrPkg_id;
//#]

//## event evPathPlan()
class evPathPlan : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPathPlan;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPathPlan(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPathPlan : virtual public AOMEvent {
    DECLARE_META_EVENT(evPathPlan)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPathPlan_ContrPkg_id;
//#]

//## event evCheckMagVal()
class evCheckMagVal : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCheckMagVal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCheckMagVal(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCheckMagVal : virtual public AOMEvent {
    DECLARE_META_EVENT(evCheckMagVal)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evCheckMagVal_ContrPkg_id;
//#]

//## event evSetMagExtrpMethod()
class evSetMagExtrpMethod : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetMagExtrpMethod;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetMagExtrpMethod(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetMagExtrpMethod : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetMagExtrpMethod)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSetMagExtrpMethod_ContrPkg_id;
//#]

//## event evGoToDest()
class evGoToDest : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevGoToDest;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evGoToDest(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevGoToDest : virtual public AOMEvent {
    DECLARE_META_EVENT(evGoToDest)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evGoToDest_ContrPkg_id;
//#]

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\ContrPkg.h
*********************************************************************/

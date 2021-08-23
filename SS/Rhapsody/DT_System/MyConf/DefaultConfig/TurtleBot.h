/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: TurtleBot
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\TurtleBot.h
*********************************************************************/

#ifndef TurtleBot_H
#define TurtleBot_H

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
#include "UseCaseAnalysisPkg.h"
//## package UseCaseAnalysisPkg

//## actor TurtleBot
class TurtleBot {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTurtleBot;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TurtleBot(void);
    
    //## auto_generated
    ~TurtleBot(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTurtleBot : virtual public AOMInstance {
    DECLARE_META(TurtleBot, OMAnimatedTurtleBot)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\TurtleBot.h
*********************************************************************/

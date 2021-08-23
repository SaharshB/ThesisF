/********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: TurtleBot
//!	Generated Date	: Mon, 3, May 2021  
	File Path	: MyConf\DefaultConfig\TurtleBot.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TurtleBot.h"
//#[ ignore
#define UseCaseAnalysisPkg_TurtleBot_TurtleBot_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg

//## actor TurtleBot
TurtleBot::TurtleBot(void) {
    NOTIFY_CONSTRUCTOR(TurtleBot, TurtleBot(), 0, UseCaseAnalysisPkg_TurtleBot_TurtleBot_SERIALIZE);
}

TurtleBot::~TurtleBot(void) {
    NOTIFY_DESTRUCTOR(~TurtleBot, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(TurtleBot, UseCaseAnalysisPkg, UseCaseAnalysisPkg, false, OMAnimatedTurtleBot)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MyConf\DefaultConfig\TurtleBot.cpp
*********************************************************************/

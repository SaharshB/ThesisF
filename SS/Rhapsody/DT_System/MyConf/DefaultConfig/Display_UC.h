/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Saharsh
	Component	: MyConf 
	Configuration 	: DefaultConfig
	Model Element	: Display_UC
//!	Generated Date	: Thu, 22, Jul 2021  
	File Path	: MyConf\DefaultConfig\Display_UC.h
*********************************************************************/

#ifndef Display_UC_H
#define Display_UC_H

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
//## class Display_UC
#include "intFlowInterface.h"
//#[ ignore
#define OMAnim_ContrPkg_Display_UC_setShowMap_int_ARGS_DECLARATION int p_ShowMap;
//#]

//## package ContrPkg

//## class Display_UC
class Display_UC : public OMReactive, public intFlowInterface {
public :

//#[ ignore
    //## package ContrPkg
    class ShowMap_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        ShowMap_SP_C(void);
        
        //## auto_generated
        virtual ~ShowMap_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        //## auto_generated
        intFlowInterface* getOutBound(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class PathAlgo_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        PathAlgo_SP_C(void);
        
        //## auto_generated
        virtual ~PathAlgo_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectDisplay_UC(Display_UC* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class Destination_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Destination_SP_C(void);
        
        //## auto_generated
        virtual ~Destination_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectDisplay_UC(Display_UC* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
    
    //## package ContrPkg
    class MagCalcMethod_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        MagCalcMethod_SP_C(void);
        
        //## auto_generated
        virtual ~MagCalcMethod_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectDisplay_UC(Display_UC* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* const p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisplay_UC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Display_UC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Display_UC(void);
    
    ////    Operations    ////
    
    //## operation DisplayMap()
    virtual int DisplayMap(void);
    
//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void setDestination(int p_Destination);
    
    void setMagCalcMethod(int p_MagCalcMethod);
    
    void setPathAlgo(int p_PathAlgo);
    
    void setShowMap(int p_ShowMap);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    ShowMap_SP_C* getShowMap_SP(void) const;
    
    //## auto_generated
    ShowMap_SP_C* get_ShowMap_SP(void) const;
    
    //## auto_generated
    PathAlgo_SP_C* getPathAlgo_SP(void) const;
    
    //## auto_generated
    PathAlgo_SP_C* get_PathAlgo_SP(void) const;
    
    //## auto_generated
    Destination_SP_C* getDestination_SP(void) const;
    
    //## auto_generated
    Destination_SP_C* get_Destination_SP(void) const;
    
    //## auto_generated
    MagCalcMethod_SP_C* getMagCalcMethod_SP(void) const;
    
    //## auto_generated
    MagCalcMethod_SP_C* get_MagCalcMethod_SP(void) const;
    
    //## auto_generated
    const int getDestination(void) const;
    
    //## auto_generated
    const char* getDispMessage(void) const;
    
    //## auto_generated
    void setDispMessage(char* const p_DispMessage);
    
    //## auto_generated
    const int getMagCalcMethod(void) const;
    
    //## auto_generated
    const int getPathAlgo(void) const;
    
    //## auto_generated
    const int getShowMap(void) const;
    
    //## auto_generated
    const int getTempMap(void) const;
    
    //## auto_generated
    void setTempMap(const int p_tempMap);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int Destination;		//## attribute Destination
    
    char* DispMessage;		//## attribute DispMessage
    
    int MagCalcMethod;		//## attribute MagCalcMethod
    
    int PathAlgo;		//## attribute PathAlgo
    
    int ShowMap;		//## attribute ShowMap
    
    int tempMap;		//## attribute tempMap
    
    ////    Relations and components    ////
    
//#[ ignore
    ShowMap_SP_C ShowMap_SP;
    
    PathAlgo_SP_C PathAlgo_SP;
    
    Destination_SP_C Destination_SP;
    
    MagCalcMethod_SP_C MagCalcMethod_SP;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // DispMap:
    //## statechart_method
    inline RhpBoolean DispMap_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Display_UC_Enum {
        OMNonState = 0,
        Idle = 1,
        DispMap = 2
    };
//#]

private :

//#[ ignore
    Display_UC_Enum rootState_subState;
    
    Display_UC_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(ContrPkg_Display_UC_setShowMap_int)

//#[ ignore
class OMAnimatedDisplay_UC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Display_UC, OMAnimatedDisplay_UC)
    
    DECLARE_META_OP(ContrPkg_Display_UC_setShowMap_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DispMap_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Display_UC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Display_UC::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean Display_UC::DispMap_IN(void) const {
    return rootState_subState == DispMap;
}

#endif
/*********************************************************************
	File Path	: MyConf\DefaultConfig\Display_UC.h
*********************************************************************/

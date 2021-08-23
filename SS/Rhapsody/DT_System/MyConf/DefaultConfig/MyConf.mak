
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\ProgramData\IBM\Rational\Rhapsody\8.4\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rational\Rhapsody\8.4"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=MyConf

all : $(TARGET_NAME)$(EXE_EXT) MyConf.mak

TARGET_MAIN=MainMyConf

LIBS= \
  ws2_32.lib \
  WSOCK32.LIB

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  SendToUnity.obj \
  IMR.obj \
  Controller.obj \
  Display_UC.obj \
  BotMov_UC.obj \
  PathCalc_UC.obj \
  MagCalc_UC.obj \
  User.obj \
  Environment.obj \
  TurtleBot.obj \
  interface_12.obj \
  ComputationUnit.obj \
  Controller_System.obj \
  GUI.obj \
  Services.obj \
  ServicesUI.obj \
  Sensors.obj \
  Actuators.obj \
  UI.obj \
  veUI.obj \
  Memory.obj \
  Communication.obj \
  intFlowInterface.obj \
  ContrPkg.obj \
  UseCaseAnalysisPkg.obj \
  StructuralDiagrams.obj \
  FlowPortInterfaces.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






SendToUnity.obj : SendToUnity.cpp SendToUnity.h    ContrPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SendToUnity.obj" "SendToUnity.cpp" 



IMR.obj : IMR.cpp IMR.h    ContrPkg.h SendToUnity.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IMR.obj" "IMR.cpp" 



Controller.obj : Controller.cpp Controller.h    ContrPkg.h Display_UC.h SendToUnity.h MagCalc_UC.h PathCalc_UC.h BotMov_UC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Controller.obj" "Controller.cpp" 



Display_UC.obj : Display_UC.cpp Display_UC.h    ContrPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Display_UC.obj" "Display_UC.cpp" 



BotMov_UC.obj : BotMov_UC.cpp BotMov_UC.h    ContrPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"BotMov_UC.obj" "BotMov_UC.cpp" 



PathCalc_UC.obj : PathCalc_UC.cpp PathCalc_UC.h    ContrPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PathCalc_UC.obj" "PathCalc_UC.cpp" 



MagCalc_UC.obj : MagCalc_UC.cpp MagCalc_UC.h    ContrPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MagCalc_UC.obj" "MagCalc_UC.cpp" 



User.obj : User.cpp User.h    UseCaseAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Environment.obj : Environment.cpp Environment.h    UseCaseAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Environment.obj" "Environment.cpp" 



TurtleBot.obj : TurtleBot.cpp TurtleBot.h    UseCaseAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TurtleBot.obj" "TurtleBot.cpp" 



interface_12.obj : interface_12.cpp interface_12.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"interface_12.obj" "interface_12.cpp" 



ComputationUnit.obj : ComputationUnit.cpp ComputationUnit.h    StructuralDiagrams.h Controller_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ComputationUnit.obj" "ComputationUnit.cpp" 



Controller_System.obj : Controller_System.cpp Controller_System.h    StructuralDiagrams.h Actuators.h ComputationUnit.h Sensors.h UI.h Memory.h Communication.h Environment.h User.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Controller_System.obj" "Controller_System.cpp" 



GUI.obj : GUI.cpp GUI.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GUI.obj" "GUI.cpp" 



Services.obj : Services.cpp Services.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Services.obj" "Services.cpp" 



ServicesUI.obj : ServicesUI.cpp ServicesUI.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ServicesUI.obj" "ServicesUI.cpp" 



Sensors.obj : Sensors.cpp Sensors.h    StructuralDiagrams.h Controller_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensors.obj" "Sensors.cpp" 



Actuators.obj : Actuators.cpp Actuators.h    StructuralDiagrams.h Controller_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Actuators.obj" "Actuators.cpp" 



UI.obj : UI.cpp UI.h    StructuralDiagrams.h Controller_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UI.obj" "UI.cpp" 



veUI.obj : veUI.cpp veUI.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"veUI.obj" "veUI.cpp" 



Memory.obj : Memory.cpp Memory.h    StructuralDiagrams.h Controller_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Memory.obj" "Memory.cpp" 



Communication.obj : Communication.cpp Communication.h    StructuralDiagrams.h Controller_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Communication.obj" "Communication.cpp" 



intFlowInterface.obj : intFlowInterface.cpp intFlowInterface.h    FlowPortInterfaces.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"intFlowInterface.obj" "intFlowInterface.cpp" 



ContrPkg.obj : ContrPkg.cpp ContrPkg.h    SendToUnity.h IMR.h Controller.h Display_UC.h BotMov_UC.h PathCalc_UC.h MagCalc_UC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ContrPkg.obj" "ContrPkg.cpp" 



UseCaseAnalysisPkg.obj : UseCaseAnalysisPkg.cpp UseCaseAnalysisPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UseCaseAnalysisPkg.obj" "UseCaseAnalysisPkg.cpp" 



StructuralDiagrams.obj : StructuralDiagrams.cpp StructuralDiagrams.h    interface_12.h ComputationUnit.h Controller_System.h GUI.h Services.h ServicesUI.h Sensors.h Actuators.h UI.h veUI.h Memory.h Environment.h Communication.h User.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StructuralDiagrams.obj" "StructuralDiagrams.cpp" 



FlowPortInterfaces.obj : FlowPortInterfaces.cpp FlowPortInterfaces.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"FlowPortInterfaces.obj" "FlowPortInterfaces.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) MyConf.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) MyConf.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist SendToUnity.obj erase SendToUnity.obj
	if exist IMR.obj erase IMR.obj
	if exist Controller.obj erase Controller.obj
	if exist Display_UC.obj erase Display_UC.obj
	if exist BotMov_UC.obj erase BotMov_UC.obj
	if exist PathCalc_UC.obj erase PathCalc_UC.obj
	if exist MagCalc_UC.obj erase MagCalc_UC.obj
	if exist User.obj erase User.obj
	if exist Environment.obj erase Environment.obj
	if exist TurtleBot.obj erase TurtleBot.obj
	if exist interface_12.obj erase interface_12.obj
	if exist ComputationUnit.obj erase ComputationUnit.obj
	if exist Controller_System.obj erase Controller_System.obj
	if exist GUI.obj erase GUI.obj
	if exist Services.obj erase Services.obj
	if exist ServicesUI.obj erase ServicesUI.obj
	if exist Sensors.obj erase Sensors.obj
	if exist Actuators.obj erase Actuators.obj
	if exist UI.obj erase UI.obj
	if exist veUI.obj erase veUI.obj
	if exist Memory.obj erase Memory.obj
	if exist Communication.obj erase Communication.obj
	if exist intFlowInterface.obj erase intFlowInterface.obj
	if exist ContrPkg.obj erase ContrPkg.obj
	if exist UseCaseAnalysisPkg.obj erase UseCaseAnalysisPkg.obj
	if exist StructuralDiagrams.obj erase StructuralDiagrams.obj
	if exist FlowPortInterfaces.obj erase FlowPortInterfaces.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	

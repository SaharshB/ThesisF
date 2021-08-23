
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

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS= \
  ws2_32.lib \
  WSOCK32.LIB

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  SendToUnity.obj \
  DetectFire_UC.obj \
  EnableFireExtinguisher_UC.obj \
  PlaceEmergencyCall.obj \
  TriggerAlarm_UC.obj \
  PINCode_UC.obj \
  HVAC_Control_UC.obj \
  LightControl_UC.obj \
  IMR.obj \
  Hologram_UC.obj \
  Attendee.obj \
  IMR_System.obj \
  Sensors.obj \
  Actuators.obj \
  User.obj \
  Environment.obj \
  interface_12.obj \
  Security_System.obj \
  Safety.obj \
  GUI.obj \
  Projector.obj \
  Light_Sensors.obj \
  Security_Cameras.obj \
  Fire_Sensors.obj \
  Humidity_Sensor.obj \
  PIN_Panel.obj \
  Decibel_Sensor.obj \
  Communication.obj \
  Telephone_Line.obj \
  Network_Connection.obj \
  Temperature_Sensor.obj \
  intFlowInterface.obj \
  IMRPkg.obj \
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






SendToUnity.obj : SendToUnity.cpp SendToUnity.h    IMRPkg.h intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SendToUnity.obj" "SendToUnity.cpp" 



DetectFire_UC.obj : DetectFire_UC.cpp DetectFire_UC.h    IMRPkg.h EnableFireExtinguisher_UC.h intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DetectFire_UC.obj" "DetectFire_UC.cpp" 



EnableFireExtinguisher_UC.obj : EnableFireExtinguisher_UC.cpp EnableFireExtinguisher_UC.h    IMRPkg.h TriggerAlarm_UC.h DetectFire_UC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EnableFireExtinguisher_UC.obj" "EnableFireExtinguisher_UC.cpp" 



PlaceEmergencyCall.obj : PlaceEmergencyCall.cpp PlaceEmergencyCall.h    IMRPkg.h TriggerAlarm_UC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PlaceEmergencyCall.obj" "PlaceEmergencyCall.cpp" 



TriggerAlarm_UC.obj : TriggerAlarm_UC.cpp TriggerAlarm_UC.h    IMRPkg.h PlaceEmergencyCall.h EnableFireExtinguisher_UC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TriggerAlarm_UC.obj" "TriggerAlarm_UC.cpp" 



PINCode_UC.obj : PINCode_UC.cpp PINCode_UC.h    IMRPkg.h LightControl_UC.h intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PINCode_UC.obj" "PINCode_UC.cpp" 



HVAC_Control_UC.obj : HVAC_Control_UC.cpp HVAC_Control_UC.h    IMRPkg.h LightControl_UC.h intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HVAC_Control_UC.obj" "HVAC_Control_UC.cpp" 



LightControl_UC.obj : LightControl_UC.cpp LightControl_UC.h    IMRPkg.h PINCode_UC.h HVAC_Control_UC.h intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LightControl_UC.obj" "LightControl_UC.cpp" 



IMR.obj : IMR.cpp IMR.h    IMRPkg.h EnableFireExtinguisher_UC.h DetectFire_UC.h PINCode_UC.h HVAC_Control_UC.h LightControl_UC.h PlaceEmergencyCall.h SendToUnity.h TriggerAlarm_UC.h Hologram_UC.h intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IMR.obj" "IMR.cpp" 



Hologram_UC.obj : Hologram_UC.cpp Hologram_UC.h    IMRPkg.h intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Hologram_UC.obj" "Hologram_UC.cpp" 



Attendee.obj : Attendee.cpp Attendee.h    UseCaseAnalysisPkg.h PIN_Panel.h GUI.h Network_Connection.h Telephone_Line.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Attendee.obj" "Attendee.cpp" 



IMR_System.obj : IMR_System.cpp IMR_System.h    StructuralDiagrams.h Actuators.h Sensors.h User.h Environment.h Safety.h GUI.h Communication.h Security_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IMR_System.obj" "IMR_System.cpp" 



Sensors.obj : Sensors.cpp Sensors.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensors.obj" "Sensors.cpp" 



Actuators.obj : Actuators.cpp Actuators.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Actuators.obj" "Actuators.cpp" 



User.obj : User.cpp User.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Environment.obj : Environment.cpp Environment.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Environment.obj" "Environment.cpp" 



interface_12.obj : interface_12.cpp interface_12.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"interface_12.obj" "interface_12.cpp" 



Security_System.obj : Security_System.cpp Security_System.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Security_System.obj" "Security_System.cpp" 



Safety.obj : Safety.cpp Safety.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Safety.obj" "Safety.cpp" 



GUI.obj : GUI.cpp GUI.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GUI.obj" "GUI.cpp" 



Projector.obj : Projector.cpp Projector.h    StructuralDiagrams.h GUI.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Projector.obj" "Projector.cpp" 



Light_Sensors.obj : Light_Sensors.cpp Light_Sensors.h    StructuralDiagrams.h Sensors.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Light_Sensors.obj" "Light_Sensors.cpp" 



Security_Cameras.obj : Security_Cameras.cpp Security_Cameras.h    StructuralDiagrams.h Security_System.h Sensors.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Security_Cameras.obj" "Security_Cameras.cpp" 



Fire_Sensors.obj : Fire_Sensors.cpp Fire_Sensors.h    StructuralDiagrams.h Environment.h Sensors.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Fire_Sensors.obj" "Fire_Sensors.cpp" 



Humidity_Sensor.obj : Humidity_Sensor.cpp Humidity_Sensor.h    StructuralDiagrams.h Sensors.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Humidity_Sensor.obj" "Humidity_Sensor.cpp" 



PIN_Panel.obj : PIN_Panel.cpp PIN_Panel.h    StructuralDiagrams.h GUI.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PIN_Panel.obj" "PIN_Panel.cpp" 



Decibel_Sensor.obj : Decibel_Sensor.cpp Decibel_Sensor.h    StructuralDiagrams.h Sensors.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Decibel_Sensor.obj" "Decibel_Sensor.cpp" 



Communication.obj : Communication.cpp Communication.h    StructuralDiagrams.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Communication.obj" "Communication.cpp" 



Telephone_Line.obj : Telephone_Line.cpp Telephone_Line.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Telephone_Line.obj" "Telephone_Line.cpp" 



Network_Connection.obj : Network_Connection.cpp Network_Connection.h    StructuralDiagrams.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Network_Connection.obj" "Network_Connection.cpp" 



Temperature_Sensor.obj : Temperature_Sensor.cpp Temperature_Sensor.h    StructuralDiagrams.h Environment.h Sensors.h IMR_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Temperature_Sensor.obj" "Temperature_Sensor.cpp" 



intFlowInterface.obj : intFlowInterface.cpp intFlowInterface.h    FlowPortInterfaces.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"intFlowInterface.obj" "intFlowInterface.cpp" 



IMRPkg.obj : IMRPkg.cpp IMRPkg.h    SendToUnity.h DetectFire_UC.h EnableFireExtinguisher_UC.h PlaceEmergencyCall.h TriggerAlarm_UC.h PINCode_UC.h HVAC_Control_UC.h LightControl_UC.h IMR.h Hologram_UC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IMRPkg.obj" "IMRPkg.cpp" 



UseCaseAnalysisPkg.obj : UseCaseAnalysisPkg.cpp UseCaseAnalysisPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UseCaseAnalysisPkg.obj" "UseCaseAnalysisPkg.cpp" 



StructuralDiagrams.obj : StructuralDiagrams.cpp StructuralDiagrams.h    IMR_System.h Sensors.h Actuators.h User.h Environment.h interface_12.h Security_System.h Safety.h GUI.h Projector.h Light_Sensors.h Security_Cameras.h Fire_Sensors.h Humidity_Sensor.h PIN_Panel.h Decibel_Sensor.h Communication.h Telephone_Line.h Network_Connection.h Temperature_Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StructuralDiagrams.obj" "StructuralDiagrams.cpp" 



FlowPortInterfaces.obj : FlowPortInterfaces.cpp FlowPortInterfaces.h    intFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"FlowPortInterfaces.obj" "FlowPortInterfaces.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist SendToUnity.obj erase SendToUnity.obj
	if exist DetectFire_UC.obj erase DetectFire_UC.obj
	if exist EnableFireExtinguisher_UC.obj erase EnableFireExtinguisher_UC.obj
	if exist PlaceEmergencyCall.obj erase PlaceEmergencyCall.obj
	if exist TriggerAlarm_UC.obj erase TriggerAlarm_UC.obj
	if exist PINCode_UC.obj erase PINCode_UC.obj
	if exist HVAC_Control_UC.obj erase HVAC_Control_UC.obj
	if exist LightControl_UC.obj erase LightControl_UC.obj
	if exist IMR.obj erase IMR.obj
	if exist Hologram_UC.obj erase Hologram_UC.obj
	if exist Attendee.obj erase Attendee.obj
	if exist IMR_System.obj erase IMR_System.obj
	if exist Sensors.obj erase Sensors.obj
	if exist Actuators.obj erase Actuators.obj
	if exist User.obj erase User.obj
	if exist Environment.obj erase Environment.obj
	if exist interface_12.obj erase interface_12.obj
	if exist Security_System.obj erase Security_System.obj
	if exist Safety.obj erase Safety.obj
	if exist GUI.obj erase GUI.obj
	if exist Projector.obj erase Projector.obj
	if exist Light_Sensors.obj erase Light_Sensors.obj
	if exist Security_Cameras.obj erase Security_Cameras.obj
	if exist Fire_Sensors.obj erase Fire_Sensors.obj
	if exist Humidity_Sensor.obj erase Humidity_Sensor.obj
	if exist PIN_Panel.obj erase PIN_Panel.obj
	if exist Decibel_Sensor.obj erase Decibel_Sensor.obj
	if exist Communication.obj erase Communication.obj
	if exist Telephone_Line.obj erase Telephone_Line.obj
	if exist Network_Connection.obj erase Network_Connection.obj
	if exist Temperature_Sensor.obj erase Temperature_Sensor.obj
	if exist intFlowInterface.obj erase intFlowInterface.obj
	if exist IMRPkg.obj erase IMRPkg.obj
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
	

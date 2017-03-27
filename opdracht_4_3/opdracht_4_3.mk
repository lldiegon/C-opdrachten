##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=opdracht_4_3
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Diego/Documents/Workspace
ProjectPath            :=C:/Users/Diego/Documents/Workspace/opdracht_4_3
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Diego
Date                   :=27/03/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="opdracht_4_3.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/opdracht_4_3.c$(ObjectSuffix) $(IntermediateDirectory)/opdracht_4_3_compressed.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Diego/Documents/Workspace/opdracht_4_3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/opdracht_4_3.c$(ObjectSuffix): opdracht_4_3.c $(IntermediateDirectory)/opdracht_4_3.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Diego/Documents/Workspace/opdracht_4_3/opdracht_4_3.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/opdracht_4_3.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/opdracht_4_3.c$(DependSuffix): opdracht_4_3.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/opdracht_4_3.c$(ObjectSuffix) -MF$(IntermediateDirectory)/opdracht_4_3.c$(DependSuffix) -MM opdracht_4_3.c

$(IntermediateDirectory)/opdracht_4_3.c$(PreprocessSuffix): opdracht_4_3.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/opdracht_4_3.c$(PreprocessSuffix) opdracht_4_3.c

$(IntermediateDirectory)/opdracht_4_3_compressed.c$(ObjectSuffix): opdracht_4_3_compressed.c $(IntermediateDirectory)/opdracht_4_3_compressed.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Diego/Documents/Workspace/opdracht_4_3/opdracht_4_3_compressed.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/opdracht_4_3_compressed.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/opdracht_4_3_compressed.c$(DependSuffix): opdracht_4_3_compressed.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/opdracht_4_3_compressed.c$(ObjectSuffix) -MF$(IntermediateDirectory)/opdracht_4_3_compressed.c$(DependSuffix) -MM opdracht_4_3_compressed.c

$(IntermediateDirectory)/opdracht_4_3_compressed.c$(PreprocessSuffix): opdracht_4_3_compressed.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/opdracht_4_3_compressed.c$(PreprocessSuffix) opdracht_4_3_compressed.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/



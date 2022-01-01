#include <vector>

using std::string;

#pragma once

class Text {
	public:
		void applyLang(string lang);
		Text(string lang);
		std::vector<string> help;
		string errnoNotPermitted;
		string errnoNoFileOrDir;
		string errnoPermissionDenied;
		string errnoInOut;
		string errnoMemory;
		string errnoUnavailable;
		string errnoAddress;
		string errnoBlockDev;
		string errnoBusy;
		string errnoDirectory;
		string errnoBadArgs;
		string errnoUnknownDev;
		string errnoUnknownGeneric;
		string prefixInfo;
		string prefixError;
		string prefixWarning;
		string prefixDebug;
		string prefixQuestion;
		string prefixVInfo;
		string prefixVError;
		string prefixVWarning;
		string prefixVDebug;
		string prefixVQuestion;
		string errorNotEnoughArgs;
		string errorConfDoesNotExist1;
		string errorConfDoesNotExist2;
		string errorNoHajimeConfig;
		string errorStartupServiceWindowsAdmin;
		string errorSystemdRoot;
		string errorNoSystemd;
		string errorServersFilePresent;
		string errorServerFileNotPresent1;
		string errorServerFileNotPresent2;
		string errorServersFileNotCreated;
		string errorCouldntSetPath;
		string errorGeneric;
		string errorMethodNotValid;
		string errorCreatingDirectory;
		string errorFilesInPath;
		string errorNoServersFile;
		string errorMount;
		string errorCode;
		string errorHajFileNotMade;
		string errorServerConfNotCreated;
		string errorOptionNotAvailable;
		string errorInvalidServerNumber;
		string errorServerSelectionInvalid;
		string errorDoesntSupportWindows;
		string errorInvalidCommand;
		string errorInvalidHajCommand1;
		string errorInvalidServerCommand1;
		string warningFoundSysvinitService;
		string warningFoundSystemdService;
		string warningFoundServerConf;
		string warningFoundHajConf;
		string warningIsRunningFalse;
		string warningTestingWindowsSupport;
		string warningHajConfPresent;
		string warningLaunchdServPresent;
		string warningFoundServerConfPlusFile;
		string questionMakeLaunchdServ;
		string questionPrompt;
		string questionMakeHajimeConfig;
		string questionMakeServerConfig;
		string questionMakeNewSysvinitService;
		string questionWizardServersFile;
		string questionWizardServerFile;
		string questionWizardStartupService;
		string questionSysvinitUser;
		string questionSysvinitGroup;
		string questionDoSetupInstaller;
		string questionStartHajime;
		string questionUseFlags;
		string questionInstallNewOne;
		string questionInstallNewOneAgain;
		string questionCreateAnotherServerFile;
		string questionApplyConfigToServerFile;
		string questionUseDefaultServerFile1;
		string questionUseDefaultServerFile2;
		string questionEnterNewServerFile;
		string optionMakeServerFileManually;
		string optionDoManually;
		string optionEnterManually;
		string optionLetHajimeDeduce;
		string optionSkipStep;
		string optionUseDefault;
		string optionChooseOptionBelow;
		string optionYourChoice;
		string optionAttendedInstallation;
		string optionUnattendedInstallation;
		string optionSkipSetup;
		string optionAikarFlags;
		string optionHillttyFlags;
		string infoInstallingSysvinit;
		string infoInstallingNewSysvinit;
		string infoInstalledSysvinit;
		string infoAbortedSysvinit;
		string infoNoLogFile;
		string infoReadingServerSettings;
		string infoServerFile;
		string infoServerPath;
		string infoServerCommand;
		string infoServerMethod;
		string infoServerDevice;
		string infoServerDebug;
		string infoServerIsRunning;
		string infoCreatedServerConfig1;
		string infoCreatedServerConfig2;
		string infoTryingToStartProgram;
		string infoStartingServer;
		string infoServerStartCompleted;
		string infoPOSIXdriveMount;
		string infoTryingFilesystem1;
		string infoTryingFilesystem2;
		string infoTryingMount;
		string infoCreatingDirectory;
		string infoDeviceMounted;
		string infoNoMount;
		string infoWizardHajimeFile;
		string infoWizardServersFile;
		string infoWizardServerFile;
		string infoWizardStartupService;
		string infoWizardComplete;
		string infoWizardNextStepServerFile1;
		string infoWizardNextStepServerFile2;
		string infoInstallingDefServConf;
		string infoInstallingNewServConf;
		string infoInstallingDefHajConf;
		string infoCheckingExistingFile;
		string infoHajConfigMade1;
		string infoHajConfigMade2;
		string infoInstallingWStartServ;
		string infoTipAdministrator;
		string infoInstallingLaunchdServ;
		string infoInstallingNewLaunchdServ;
		string infoInstalledLaunchServ;
		string infoAbortedLaunchServ;
		string infoMakingSystemdServ;
		string infoInstallingServersFile;
		string infoCheckingExistingServersFile;
		string infoMadeServersFile;
		string infoEnterNewNameForServer1;
		string infoEnterNewNameForServer2;
		string infoEnterCommand;
		string debugHajDefConfNoExist1;
		string debugHajDefConfNoExist2;
		string debugReadingReadsettings;
		string debugReadReadsettings;
		string debugFlagVecInFor;
		string debugFlagVecOutFor;
		string debugUsingOldMethod;
		string debugUsingNewMethod;
		string debugFlags;
		string debugFlagArray0;
		string debugFlagArray1;
		string debugValidatingSettings;
		string fileServerConfComment;
};

extern string hajDefaultConfFile;
extern Text text;

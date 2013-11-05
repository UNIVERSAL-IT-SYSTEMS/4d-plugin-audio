/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Audio
 #	author : miyako
 #	2013/11/02
 #
 # --------------------------------------------------------------------------------*/


void CommandDispatcherInMainProcess (int32_t pProcNum, PA_PluginParameters params);

// --- Devices
void AUDIO_DEVICE_LIST(sLONG_PTR *pResult, PackagePtr pParams);

// --- Record
void AUDIO_End_recording(PA_PluginParameters params);
void AUDIO_Begin_recording(PA_PluginParameters params);
void AUDIO_Is_recording(PA_PluginParameters params);

// --- Play
void AUDIO_Open_file(sLONG_PTR *pResult, PackagePtr pParams);
void AUDIO_CLOSE(sLONG_PTR *pResult, PackagePtr pParams);
void AUDIO_PLAY(sLONG_PTR *pResult, PackagePtr pParams);
void AUDIO_PAUSE(sLONG_PTR *pResult, PackagePtr pParams);
void AUDIO_RESUME(sLONG_PTR *pResult, PackagePtr pParams);
void AUDIO_STOP(sLONG_PTR *pResult, PackagePtr pParams);
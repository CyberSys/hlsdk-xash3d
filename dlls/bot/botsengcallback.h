#include "enginecallback.h"
#define GET_FILE_SIZE                 (*g_engfuncs.pfnGetFileSize)
#define SERVER_PRINT                 (*g_engfuncs.pfnServerPrint)
#define CREATE_FAKE_CLIENT		(*g_engfuncs.pfnCreateFakeClient)
#define PLAYER_RUN_MOVE			(*g_engfuncs.pfnRunPlayerMove)
#define NUMBER_OF_ENTITIES		(*g_engfuncs.pfnNumberOfEntities)
#define GET_INFO_BUFFER			(*g_engfuncs.pfnGetInfoKeyBuffer)
#define GET_KEY_VALUE			(*g_engfuncs.pfnInfoKeyValue)
#define SET_KEY_VALUE			(*g_engfuncs.pfnSetKeyValue)
#define SET_CLIENT_KEY_VALUE		(*g_engfuncs.pfnSetClientKeyValue)
#define IS_MAP_VALID			(*g_engfuncs.pfnIsMapValid)
#define STATIC_DECAL			(*g_engfuncs.pfnStaticDecal)
#define IS_DEDICATED_SERVER		(*g_engfuncs.pfnIsDedicatedServer)
#define PRECACHE_EVENT			(*g_engfuncs.pfnPrecacheEvent)
#define PLAYBACK_EVENT_FULL		(*g_engfuncs.pfnPlaybackEvent)
#define ENGINE_SET_PVS			(*g_engfuncs.pfnSetFatPVS)
#define ENGINE_SET_PAS			(*g_engfuncs.pfnSetFatPAS)
#define ENGINE_CHECK_VISIBILITY		(*g_engfuncs.pfnCheckVisibility)
#if 0
#define DELTA_SET			(*g_engfuncs.pfnDeltaSetField)
#define DELTA_UNSET			(*g_engfuncs.pfnDeltaUnsetField)
#define DELTA_ADDENCODER		(*g_engfuncs.pfnDeltaAddEncoder)
#define ENGINE_CURRENT_PLAYER		(*g_engfuncs.pfnGetCurrentPlayer)
#define ENGINE_CANSKIP			(*g_engfuncs.pfnCanSkipPlayer)
#define DELTA_FINDFIELD			(*g_engfuncs.pfnDeltaFindField)
#define DELTA_SETBYINDEX		(*g_engfuncs.pfnDeltaSetFieldByIndex)
#define DELTA_UNSETBYINDEX		(*g_engfuncs.pfnDeltaUnsetFieldByIndex)
#define	REMOVE_KEY_VALUE		(*g_engfuncs.pfnInfo_RemoveKey)
#define SET_PHYSICS_KEY_VALUE		(*g_engfuncs.pfnSetPhysicsKeyValue)
#define ENGINE_GETPHYSINFO		(*g_engfuncs.pfnGetPhysicsInfoString)
#define ENGINE_SETGROUPMASK		(*g_engfuncs.pfnSetGroupMask)
#define ENGINE_INSTANCE_BASELINE	(*g_engfuncs.pfnCreateInstancedBaseline)
#define ENGINE_FORCE_UNMODIFIED		(*g_engfuncs.pfnForceUnmodified)
#define PLAYER_CNX_STATS		(*g_engfuncs.pfnGetPlayerStats)
#endif
#define ADD_SERVER_COMMAND		(*g_engfuncs.pfnAddServerCommand)
#define SET_CLIENT_LISTENING		(*g_engfuncs.pfnVoice_SetClientListening)
#define GETPLAYERAUTHID			(*g_engfuncs.pfnGetPlayerAuthId)
#define GET_FILE_SIZE			(*g_engfuncs.pfnGetFileSize)
#define GET_APPROX_WAVE_PLAY_LEN	(*g_engfuncs.pfnGetApproxWavePlayLen)
#define IS_CAREER_MATCH			(*g_engfuncs.pfnIsCareerMatch)
#define GET_LOCALIZED_STRING_LENGTH	(*g_engfuncs.pfnGetLocalizedStringLength)
#define REGISTER_TUTOR_MESSAGE_SHOWN	(*g_engfuncs.pfnRegisterTutorMessageShown)
#define GET_TIMES_TUTOR_MESSAGE_SHOWN	(*g_engfuncs.pfnGetTimesTutorMessageShown)
#define ENG_CHECK_PARM			(*g_engfuncs.pfnEngCheckParm)

void CONSOLE_ECHO(char *pszMsg, ...);
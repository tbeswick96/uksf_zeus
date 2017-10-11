#define DEBUG_SYNCHRONOUS

#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) FUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define CURATOR_ICON "\A3\Ui_F_Curator\Data\Logos\arma3_zeus_icon_ca.paa"

#define WHITELISTED (getPlayerUID player) in GVAR(curatorsWhitelistArray)
#define ADMIN_OR_HOST IS_ADMIN || {isServer && {hasInterface}}
#define ADMIN_OR_WHITELISTED ADMIN_OR_HOST || {WHITELISTED}
#define MULTIPLAYER_ADMIN_OR_WHITELISTED isMultiplayer && {ADMIN_OR_WHITELISTED}

#define CONDITION_LOGIN ((ADMIN_OR_HOST) || {!GVAR(curatorsLocked)}) && {(GVAR(curatorPlayers) find (name player)) isEqualTo -1} && {(GVAR(curatorPlayers) find "") > -1}
#define CONDITION_LOGOUT ((ADMIN_OR_HOST) || {!GVAR(curatorsLocked)}) && {(GVAR(curatorPlayers) find (name player)) != -1}
#define CONDITION_LOCK MULTIPLAYER_ADMIN_OR_WHITELISTED && {!GVAR(curatorsLocked)}
#define CONDITION_UNLOCK MULTIPLAYER_ADMIN_OR_WHITELISTED && {GVAR(curatorsLocked)}
#define CONDITION_KICKALL MULTIPLAYER_ADMIN_OR_WHITELISTED && {({_x != ""} count GVAR(curatorPlayers)) > 1}

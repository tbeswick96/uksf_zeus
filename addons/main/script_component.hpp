#define COMPONENT main
#define COMPONENT_BEAUTIFIED Main
#include "\u\uksf_zeus\addons\main\script_mod.hpp"

//#define DEBUG_MODE_FULL
//#define DISABLE_COMPILE_CACHE
//#define CBA_DEBUG_SYNCHRONOUS

#include "\u\uksf_zeus\addons\main\script_macros.hpp"

#define ZEUS_ICON "\A3\Ui_F_Curator\Data\Logos\arma3_zeus_icon_ca.paa"

#define ADD_CURATOR(INDEX) _curator = _group createUnit ["ModuleCurator_F", [0,0,0], [], 0, "NONE"]; \
_curator addCuratorAddons activatedAddons; \
GVAR(curatorObjects) set [INDEX, _curator]

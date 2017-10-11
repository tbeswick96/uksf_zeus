#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // CBA
            "cba_ui",
            "cba_xeh",
            "cba_jr",

			//ACE
			"ace_main",
			"ace_common",
			"ace_interaction"
        };
        author = QUOTE(UKSF);
        authors[] = { "Beswick.T" };
        url = QUOTE(www.uk-sf.com);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@uksf_zeus";
        name = "UKSF Zeus";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/uksf/zeus/issues";
    };
};

#include "CfgSettings.hpp"
#include "CfgEventHandlers.hpp"

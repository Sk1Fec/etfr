#include "script_component.hpp"

class CfgPatches {
  class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"etfr_main"};
        author = CSTRING(Authors);
        url = CSTRING(URL);
        VERSION_CONFIG;

        weapons[] = {
            "ETFR_R147P",
        };
  };
};

#include "CfgEventHandlers.hpp"
#include "dialogs.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

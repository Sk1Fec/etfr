#include "script_component.hpp"

class CfgPatches {
  class ADDON {
      // Meta information for editor
      name = COMPONENT_NAME;
      units[] = {};
      weapons[] = {};
      requiredVersion = REQUIRED_VERSION;
      requiredAddons[] = {"cba_main", "ace_main"};
      author = CSTRING(Authors);
      url = CSTRING(URL);
      VERSION_CONFIG;
  };
};

class CfgMods {
    class PREFIX {
        dir = "@etfr";
        name = "Extended Task Force Radios";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/kavinsky/etfr/issues";
    };
};

#include "CfgEventHandlers.hpp"

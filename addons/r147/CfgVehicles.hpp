class CfgVehicles {
    /*class Item_ETFR_R147: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "R-147";
        author = CSTRING(Authors);
        vehicleClass = "Items";
        faction = "OPF_F";
        side = 0;
        class TransportItems {
            MACRO_ADDITEM(ETFR_R147,1);
        };

        #include "\z\tfar\addons\static_radios\edenAttributes.hpp"
    };*/

    class Item_ETFR_R147P: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "R-147P";
        author = CSTRING(Authors);
        vehicleClass = "Items";
        faction = "OPF_F";
        side = 0;
        class TransportItems {
            MACRO_ADDITEM(ETFR_R147,1);
        };

        #include "\z\tfar\addons\static_radios\edenAttributes.hpp"
    };
};

class CfgWeapons {
    class ItemRadio;

    class ETFR_R147: ItemRadio {
        author = CSTRING(Authors);
        displayName = "R-147";
        descriptionShort = CSTRING(R147_descriptionShort);
        scope = 2;
        scopeCurator = 2;
        model = QPATHTOF(models\r147p);
        picture = QPATHTOF(textures\r147p_icon_ca.paa);
        tf_prototype = 1;
        tf_range = 2000;
        tf_dialog = "ETFR_R147P_Dialog";
        tf_encryptionCode = "tf_east_radio_code";
        tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
        tf_subtype = "digital";
        tf_parent = "ETFR_R147P";
        tf_additional_channel = 0;
        tf_channel_freqs[] = {
            "45.5", "45.6", "45.7", "45.8"
        };
    };

    class ETFR_R147P: ETFR_R147 {
        displayName = "R-147P";
        descriptionShort = CSTRING(R147P_descriptionShort);
        tf_parent = "ETFR_R147P";
    };

    TF_RADIO_IDS(ETFR_R147,R-147)
    TF_RADIO_IDS(ETFR_R147P,R-147P)
};

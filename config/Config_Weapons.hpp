/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" },
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "hgun_PDW2000_F", "", 20000, -1, "" },
            { "hgun_P07_khk_F", "", 21000, -1, "" }, //Apex DLC
            { "hgun_Pistol_01_F", "", 20000, -1, "" }, //Apex DLC
            { "SMG_05_F", "", 180000, -1, "" } //Apex DLC
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 75, 100, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 75, 100, "" } //Apex DLC - Had to guess this. Not referenced anywhere
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500, "" },
            { "arifle_Katiba_F", "", 30000, 5000, "" },
            { "srifle_DMR_01_F", "", 50000, -1, "" },
            { "arifle_SDAR_F", "", 20000, 7500, "" },
            { "arifle_AK12_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 7500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 5000, "" }, //Apex DLC
			{ "CUP_arifle_FNFAL_railed", "", 72000, 30000, ""}
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 3000, 1000, "" },
            { "30Rnd_762x39_Mag_F", "", 3000, 1000, "" },
            { "30Rnd_545x39_Mag_F", "", 300, 100, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 2750, 1000, "" },
            { "10Rnd_762x54_Mag", "", 500, 100, "" },
            { "20Rnd_556x45_UW_mag", "", 1250, 1000, "" },
            { "30Rnd_580x42_Mag_F", "", 1250, 1000, "" }, //Apex DLC
			{ "CUP_20Rnd_762x51_FNFAL_M", "", 4250, 1000, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 100, "" },
            { "optic_Holosight", "", 3600, 100, "" },
            { "optic_Hamr", "", 7500, 100, "" },
            { "acc_flashlight", "", 1000, 100, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" },
            { "PWA_pickaxe", "", 100, 100, "" },
            { "PWA_shovel", "", 100, 10, "" },
            { "PWA_secateurs", "", 100, 10, "" },
            { "PWA_prospectingtools", "", 100, 10, "" },
            { "PWA_drillingequipment", "", 100, 10, "" },
			{ "ACE_fieldDressing", "", 10, 5, "" },
			{ "ACE_elasticBandage", "", 10, 5, "" },
			{ "ACE_packingBandage", "", 10, 5, "" },
			{ "ACE_salineIV_250", "", 20, 10, "" },
			{ "ACE_tourniquet", "", 30, 12, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" },
            { "PWA_pickaxe", "", 100, 100, "" },
            { "PWA_shovel", "", 100, 10, "" },
            { "PWA_secateurs", "", 100, 10, "" },
            { "PWA_prospectingtools", "", 100, 10, "" },
            { "PWA_drillingequipment", "", 100, 10, "" },
			{ "ACE_packingBandage", "", 10, 5, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "HandGrenade_Stone", "Flashbang", 1700, -1, "" },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650, "" },
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500, "" },
            { "hgun_P07_F", "", 7500, 1500, "" },
            { "SMG_02_ACO_F", "", 30000, -1, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 7500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, -1, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 5000, "call life_coplevel >= 3" },
            // Snipers
            { "srifle_DMR_07_blk_F", "", 32000, 5000, "call life_coplevel >= 3" }, //Apex DLC
			{ "ACE_fieldDressing", "", 10, 5, "" },
			{ "ACE_elasticBandage", "", 10, 5, "" },
			{ "ACE_packingBandage", "", 10, 5, "" },
			{ "ACE_salineIV_250", "", 20, 10, "" },
			{ "ACE_tourniquet", "", 30, 12, "" }

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 130, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 100, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 100, "" },
            { "acc_flashlight", "", 750, 100, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 100, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 100, "call life_coplevel >= 2" },
            { "optic_MRD", "", 2750, 100, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "ACE_atropine", "", 100, 50, "" },
			{ "ACE_epinephrine", "", 100, 50, "" },
			{ "ACE_morphine", "", 100, 50, "" },
			{ "ACE_fieldDressing", "", 10, 5, "" },
			{ "ACE_elasticBandage", "", 10, 5, "" },
			{ "ACE_packingBandage", "", 10, 5, "" },
			{ "ACE_salineIV_250", "", 20, 10, "" },
			{ "ACE_salineIV", "", 40, 20, "" },
			{ "ACE_personalAidKit", "", 20, 10, "" },
			{ "ACE_surgicalKit", "", 120, 50, "" },
			{ "ACE_tourniquet", "", 30, 12, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};

class CfgGather {
    class Resources {
        class templateres {
            amount = 5;
            zones[] = { "template_1", "template_2", "template_3", "template_4" };
            item = "";
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
		class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
			mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
			mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
			mined[] = {"PWA_heroin_raw"};
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
			mined[] = {"PWA_cocaine_raw"};
            zoneSize = 30;
        };

        class cannabis {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
			mined[] = {"PWA_cannabis_raw"};
            zoneSize = 30;
        };
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "PWA_pickaxe";
            mined[] = {"PWA_copper_raw"};
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "PWA_pickaxe";
            mined[] = { "PWA_iron_raw" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "PWA_pickaxe";
            mined[] = { "PWA_diamond_raw" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "PWA_pickaxe";
            mined[] = { "PWA_stone_raw" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1" };
            item = "PWA_drillingequipment";
            mined[] = { "PWA_oil_raw" };
            zoneSize = 30;
        };
		//custom materials Project Warlord
		class platinum_unrefined {
            amount = 2;
            zones[] = { "platinum_mine" };
            item = "PWA_pickaxe";
            mined[] = { "PWA_platinum_raw" };
            zoneSize = 30;
        };
		class ruby_uncut {
            amount = 2;
            zones[] = { "ruby_mine" };
            item = "PWA_pickaxe";
            mined[] = { "PWA_ruby_raw" };
            zoneSize = 30;
        };
		class cigarettes_unprocessed {
            amount = 2;
            zones[] = { "cigarettes_field" };
            item = "PWA_secateurs";
            mined[] = { "PWA_cigarettes_raw" };
            zoneSize = 30;
		};
		class coke_unprocessed {
            amount = 2;
            zones[] = { "coke_mine" };
            item = "PWA_pickaxe";
            mined[] = { "PWA_coke_raw" };
            zoneSize = 30;
		};
		class millet_unprocessed {
            amount = 2;
            zones[] = { "millet_field_1" , "millet_field_2" };
            item = "PWA_secateurs";
            mined[] = { "PWA_millet_raw" };
            zoneSize = 30;
		};
		class date {
            amount = 2;
            zones[] = { "date_field_1" , "date_field_2" , "date_field_3" };
            item = "";
            mined[] = { "PWA_date_raw" };
            zoneSize = 30;
		};
		class nuts {
            amount = 2;
            zones[] = { "nut_field_1" , "nut_field_2" , "nut_field_3" };
            item = "";
            mined[] = { "PWA_nuts_raw" };
            zoneSize = 30;
		};
    };
};
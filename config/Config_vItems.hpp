/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "arifle_TRG20_F","30Rnd_556x45_Stanag","ACE_fieldDressing","PWA_waterbottle", "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_date_raw", "PWA_nuts_raw",  "PWA_millet_processed", "PWA_storagecrate_small", "PWA_storagecrate_big"};
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "PWA_waterbottle",  "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_defibrillator"};
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "PWA_waterbottle", "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_boltcutter"};
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "PWA_waterbottle", "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_boltcutter"};
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "PWA_coffee", "PWA_donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "PWA_coffee", "PWA_donuts", "PWA_energydrink", "PWA_toolkit", "PWA_jerrycan_full", "ACE_packingBandage"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "PWA_cocaine_processed", "PWA_heroin_processed", "PWA_cannabis_processed", "PWA_brownbrown_processed" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "PWA_oil_processed", "PWA_oil_postprocessed", "PWA_coke_processed" , "PWA_jerrycan_full" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "PWA_salema_raw", "PWA_ornate_raw", "PWA_mackerel_raw", "PWA_tuna_raw", "PWA_mullet_raw", "PWA_catshark_raw", "PWA_bluecrab_raw", "PWA_snowcrab_raw","PWA_kingcrab_raw"};
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "PWA_iron_processed", "PWA_copper_processed", "PWA_platinum_processed" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "PWA_ruby_processed", "PWA_diamond_processed" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "PWA_stone_processed" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "PWA_gold_processed" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "PWA_donuts", "PWA_coffee", "PWA_nailribbon", "PWA_waterbottle", "PWA_energydrink", "PWA_toolkit", "PWA_jerrycan_full", "defusekit", "PWA_defibrillator", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
	class arifle_TRG20_F {
        variable = "arifle_TRG20_F";
        buyPrice = 900;
        sellPrice = 450;
    };
	class 30Rnd_556x45_Stanag {
        variable = "30Rnd_556x45_Stanag";
        buyPrice = 900;
        sellPrice = 450;
    };
	class ACE_fieldDressing {
        variable = "ACE_fieldDressing";
        buyPrice = 900;
        sellPrice = 450;
    };
    class PWA_defibrillator {
        variable = "PWA_defibrillator";
        buyPrice = 900;
        sellPrice = 450;
    };

    class PWA_toolkit {
        variable = "PWA_toolkit";
        buyPrice = 350;
        sellPrice = 100;
    };

    class PWA_jerrycan_empty {
        variable = "PWA_jerrycan_empty";
        buyPrice = -1;
        sellPrice = 10;
    };

    class PWA_jerrycan_full {
        variable = "PWA_jerrycan_full";
        buyPrice = 850;
        sellPrice = 500;
    };

    class PWA_nailribbon {
        variable = "PWA_nailribbon";
        buyPrice = 2500;
        sellPrice = 1200;
    };

    class PWA_lockpick {
        variable = "PWA_lockpick";
        buyPrice = 150;
        sellPrice = 75;
    };

    class PWA_gold_processed {
        variable = "PWA_gold_processed";
        buyPrice = -1;
        sellPrice = 17500;
    };

    class PWA_boltcutter {
        variable = "PWA_boltcutter";
        buyPrice = 7500;
        sellPrice = 1000;
    };

    class defusekit {
        variable = "defuseKit";
        buyPrice = 2500;
        sellPrice = 2000;
    };

    class PWA_storagecrate_small {
        variable = "PWA_storagecrate_small";
        buyPrice = 75000;
        sellPrice = 50000;
    };

    class PWA_storagecrate_big {
        variable = "PWA_storagecrate_big";
        buyPrice = 150000;
        sellPrice = 125000;
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        buyPrice = -1;
        sellPrice = -1;
    };

    class PWA_oil_processed {
        variable = "PWA_oil_processed";
        buyPrice = -1;
        sellPrice = 3200;
    };
	
	class PWA_oil_postprocessed {
        variable = "PWA_oil_postprocessed";
        buyPrice = -1;
        sellPrice = 4200;
    };

    class PWA_copper_raw {
        variable = "PWA_copper_raw";
        buyPrice = -1;
        sellPrice = -1;
    };

    class PWA_copper_processed {
        variable = "PWA_copper_processed";
        buyPrice = -1;
        sellPrice = 1500;
    };

    class PWA_iron_raw {
        variable = "PWA_iron_raw";
        buyPrice = -1;
        sellPrice = -1;
    };

    class PWA_iron_processed {
        variable = "PWA_iron_processed";
        buyPrice = -1;
        sellPrice = 3200;
    };

    class PWA_ruby_raw {
        variable = "PWA_ruby_raw";
        buyPrice = -1;
        sellPrice = 250;
    };

    class PWA_ruby_processed {
        variable = "WA_ruby_processed";
        buyPrice = -1;
        sellPrice = 1400;
    };
	
	class PWA_diamond_raw {
        variable = "PWA_diamond_raw";
        buyPrice = -1;
        sellPrice = 750;
    };

    class PWA_diamond_processed {
        variable = "PWA_diamond_processed";
        buyPrice = -1;
        sellPrice = 2000;
    };

    class PWA_stone_raw {
        variable = "PWA_stone_raw";
        buyPrice = -1;
        sellPrice = -1;
    };

    class PWA_stone_processed {
        variable = "PWA_stone_processed";
        buyPrice = -1;
        sellPrice = 1950;
    };

   class PWA_platinum_raw {
        variable = "PWA_platinum_raw";
        buyPrice = -1;
        sellPrice = -1;
    };

    class PWA_platinum_processed {
        variable = "PWA_platinum_processed";
        buyPrice = -1;
        sellPrice = 4000;
    };
	
	class PWA_coke_raw {
        variable = "PWA_coke_raw";
        buyPrice = -1;
        sellPrice = -1;
    };

    class PWA_coke_processed {
        variable = "PWA_coke_processed";
        buyPrice = -1;
        sellPrice = 1700;
    };
	
    //Drugs
    class PWA_heroin_raw {
        variable = "PWA_heroin_raw";
        buyPrice = -1;
        sellPrice = -1;
        processedItem = "PWA_heroin_processed";
    };

    class PWA_heroin_processed {
        variable = "PWA_heroin_processed";
        buyPrice = 7120;
        sellPrice = 3560;
    };

    class PWA_cannabis_raw {
        variable = "PWA_cannabis_raw";
        buyPrice = -1;
        sellPrice = -1;
        processedItem = "PWA_cannabis_processed";
    };

    class PWA_cannabis_processed {
        variable = "PWA_cannabis_processed";
        buyPrice = 2700;
        sellPrice = 1350;
    };

    class PWA_cocaine_raw {
        variable = "PWA_cocaine_raw";
        buyPrice = -1;
        sellPrice = -1;
        processedItem = "PWA_cocaine_processed";
    };

    class PWA_cocaine_processed {
        variable = "PWA_cocaine_processed";
        buyPrice = 5060;
        sellPrice = 2530;
    };

    class PWA_brownbrown_processed {
        variable = "PWA_brownbrown_processed";
        buyPrice = 9500;
        sellPrice = 4750;
    };
	
    //Drink
    class PWA_energydrink {
        variable = "PWA_energydrink";
        buyPrice = 1500;
        sellPrice = 200;
    };

    class PWA_coffee {
        variable = "PWA_coffee";
        buyPrice = 10;
        sellPrice = 5;
    };

    class PWA_waterbottle {
        variable = "PWA_waterbottle";
        buyPrice = 10;
        sellPrice = 5;
    };

    //Food + Plants

	class PWA_date_raw {
        variable = "PWA_date_raw";
        buyPrice = -1;
        sellPrice = 250;
    };
	
	class PWA_nuts_raw {
        variable = "PWA_nuts_raw";
        buyPrice = -1;
        sellPrice = 265;
    };
	
	class PWA_millet_raw {
        variable = "PWA_millet_raw";
        buyPrice = -1;
        sellPrice = -1;
    };
	
	class PWA_millet_processed {
        variable = "PWA_millet_processed";
        buyPrice = -1;
        sellPrice = 375;
    };
	
    class PWA_beefjerky {
        variable = "PWA_beefjerky";
        buyPrice = 75;
        sellPrice = 25;
    };

    class PWA_donut {
        variable = "PWA_donut";
        buyPrice = 120;
        sellPrice = 60;
    };

    class PWA_salema_raw{
        variable = "PWA_salema_raw";
        buyPrice = -1;
        sellPrice = 45;
    };

    class PWA_ornate_raw {
        variable = "PWA_ornate_raw";
        buyPrice = -1;
        sellPrice = 40;
    };

    class PWA_mackerel_raw {
        variable = "PWA_mackerel_raw";
        buyPrice = -1;
        sellPrice = 175;
    };

     class PWA_tuna_raw {
        variable = "PWA_tuna_raw";
        buyPrice = -1;
        sellPrice = 700;
    };

    class PWA_mullet_raw {
        variable = "PWA_mullet_raw";
        buyPrice = -1;
        sellPrice = 250;
    };

    class PWA_catshark_raw {
        variable = "PWA_catshark_raw";
        buyPrice = -1;
        sellPrice = 300;
    };

	class PWA_bluecrab_raw {
        variable = "PWA_bluecrab_raw";
        buyPrice = -1;
        sellPrice = 950;
    };
	
	class PWA_snowcrab_raw {
        variable = "PWA_snowcrab_raw";
        buyPrice = -1;
        sellPrice = 1250;
    };
	
	class PWA_kingcrab_raw {
        variable = "PWA_kingcrab_raw";
        buyPrice = -1;
        sellPrice = 1400;
    };
	
	class PWA_lobster_raw {
        variable = "PWA_lobster_raw";
        buyPrice = -1;
        sellPrice = 1650;
    };
	
	
};

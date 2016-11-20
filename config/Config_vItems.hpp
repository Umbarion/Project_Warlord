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
        items[] = { "PWA_waterbottle", "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_storagecrate_small", "PWA_storagecrate_big" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "PWA_waterbottle",  "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "PWA_waterbottle", "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "PWA_waterbottle", "PWA_energydrink", "PWA_beefjerky", "PWA_toolkit", "PWA_jerrycan_full", "PWA_boltcutter", "blastingcharge" };
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
        items[] = { "PWA_coffee", "PWA_donuts", "PWA_energydrink", "PWA_toolkit", "PWA_jerrycan_full"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "PWA_cocaine_processed", "PWA_heroin_processed", "PWA_cannabis_processed" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "PWA_oil_processed", "PWA_pickaxe", "PWA_jerrycan_full" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "PWA_salema_raw", "salema", "PWA_ornate_raw", "ornate", "PWA_mackerel_raw", "mackerel", "PWA_tuna_raw", "tuna", "PWA_mullet_raw", "mullet", "PWA_catshark_raw", "catshark" };
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
        items[] = { "PWA_iron_processed", "PWA_copper_processed" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "PWA_diamond_raw", "PWA_diamond_processed" };
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
        items[] = { "PWA_donuts", "PWA_coffee", "PWA_nailribbon", "PWA_waterbottle", "PWA_energydrink", "PWA_toolkit", "PWA_jerrycan_full", "defusekit", "PWA_defibrillator" };
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
        sellPrice = 95000;
    };

    class blastingcharge {
        variable = "blastingCharge";
        buyPrice = 35000;
        sellPrice = 10000;
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

    class salt_unrefined {
        variable = "saltUnrefined";
        buyPrice = -1;
        sellPrice = -1;
    };

    class salt_refined {
        variable = "saltRefined";
        buyPrice = -1;
        sellPrice = 1450;
    };

    class sand {
        variable = "sand";
        buyPrice = -1;
        sellPrice = -1;
    };

    class glass {
        variable = "glass";
        buyPrice = -1;
        sellPrice = 1450;
    };

    class PWA_diamond_raw {
        variable = "diamondUncut";
        buyPrice = -1;
        sellPrice = 750;
    };

    class PWA_diamond_processed {
        variable = "diamondCut";
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

    //Drugs
    class PWA_heroin_raw {
        variable = "PWA_heroin_raw";
        buyPrice = -1;
        sellPrice = -1;
        processedItem = "PWA_heroin_processed";
    };

    class PWA_heroin_processed {
        variable = "PWA_heroin_processed";
        buyPrice = 3500;
        sellPrice = 2560;
    };

    class PWA_cannabis_raw {
        variable = "PWA_cannabis_raw";
        buyPrice = -1;
        sellPrice = -1;
        processedItem = "PWA_cannabis_processed";
    };

    class PWA_cannabis_processed {
        variable = "PWA_cannabis_processed";
        buyPrice = 2800;
        sellPrice = 2350;
    };

    class PWA_cocaine_raw {
        variable = "PWA_cocaine_raw";
        buyPrice = -1;
        sellPrice = -1;
        processedItem = "PWA_cocaine_processed";
    };

    class PWA_cocaine_processed {
        variable = "PWA_cocaine_processed";
        buyPrice = -1;
        sellPrice = 5000;
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

    //Food
    class apple {
        variable = "apple";
        buyPrice = 65;
        sellPrice = 50;
    };

    class peach {
        variable = "peach";
        buyPrice = 68;
        sellPrice = 55;
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

    class rabbit_raw {
        variable = "rabbitRaw";
        buyPrice = -1;
        sellPrice = 95;
    };

    class rabbit {
        variable = "rabbit";
        buyPrice = 150;
        sellPrice = 115;
    };

    class PWA_salema_raw{
        variable = "PWA_salema_raw";
        buyPrice = -1;
        sellPrice = 45;
    };

    class salema {
        variable = "salema";
        buyPrice = 75;
        sellPrice = 55;
    };

    class PWA_ornate_raw {
        variable = "PWA_ornate_raw";
        buyPrice = -1;
        sellPrice = 40;
    };

    class ornate {
        variable = "ornate";
        buyPrice = 175;
        sellPrice = 150;
    };

    class PWA_mackerel_raw {
        variable = "PWA_mackerel_raw";
        buyPrice = -1;
        sellPrice = 175;
    };

    class mackerel {
        variable = "mackerel";
        buyPrice = 250;
        sellPrice = 200;
    };

    class PWA_tuna_raw {
        variable = "PWA_tuna_raw";
        buyPrice = -1;
        sellPrice = 700;
    };

    class tuna {
        variable = "tuna";
        buyPrice = 1250;
        sellPrice = 1000;
    };

    class PWA_mullet_raw {
        variable = "PWA_mullet_raw";
        buyPrice = -1;
        sellPrice = 250;
    };

    class mullet {
        variable = "mullet";
        buyPrice = 600;
        sellPrice = 400;
    };

    class PWA_catshark_raw {
        variable = "PWA_catshark_raw";
        buyPrice = -1;
        sellPrice = 300;
    };

    class catshark {
        variable = "catshark";
        buyPrice = 750;
        sellPrice = 500;
    };

    class turtle_raw {
        variable = "turtleRaw";
        buyPrice = -1;
        sellPrice = 3000;
    };

    class turtle_soup {
        variable = "turtleSoup";
        buyPrice = 1000;
        sellPrice = 750;
    };

    class hen_raw {
        variable = "henRaw";
        buyPrice = -1;
        sellPrice = 65;
    };

    class hen {
        variable = "hen";
        buyPrice = 115;
        sellPrice = 85;
    };

    class rooster_raw {
        variable = "roosterRaw";
        buyPrice = -1;
        sellPrice = 65;
    };

    class rooster {
        variable = "rooster";
        buyPrice = 90;
        sellPrice = 85;
    };

    class sheep_raw {
        variable = "sheepRaw";
        buyPrice = -1;
        sellPrice = 95;
    };

    class sheep {
        variable = "sheep";
        buyPrice = 155;
        sellPrice = 115;
    };

    class goat_raw {
        variable = "goatRaw";
        buyPrice = -1;
        sellPrice = 115;
    };

    class goat {
        variable = "goat";
        buyPrice = 175;
        sellPrice = 135;
    };
};

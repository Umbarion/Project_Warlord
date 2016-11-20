/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"PWA_oil_raw",1}};
        MaterialsGive[] = {{"PWA_oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };

    class diamond {
        MaterialsReq[] = {{"PWA_diamond_raw",1}};
        MaterialsGive[] = {{"PWA_diamond_processed",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };

    class heroin {
        MaterialsReq[] = {{"PWA_heroin_raw",1}};
        MaterialsGive[] = {{"PWA_heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };

    class copper {
        MaterialsReq[] = {{"PWA_copper_raw",1}};
        MaterialsGive[] = {{"PWA_copper_processed",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

    class iron {
        MaterialsReq[] = {{"PWA_iron_raw",1}};
        MaterialsGive[] = {{"PWA_iron_processed",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cocaine {
        MaterialsReq[] = {{"PWA_cocaine_raw",1}};
        MaterialsGive[] = {{"PWA_cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };

    class marijuana {
        MaterialsReq[] = {{"PWA_cannabis_raw",1}};
        MaterialsGive[] = {{"PWA_cannabis_processed",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 500;
    };

    class cement {
        MaterialsReq[] = {{"PWA_stone_raw",1}};
        MaterialsGive[] = {{"PWA_stone_processed",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
	//custom materials Project Warlord
	class platinum {
        MaterialsReq[] = {{"PWA_platinum_raw",1}};
        MaterialsGive[] = {{"PWA_platinum_processed",1}};
        Text = "STR_Process_Platinum";
        //ScrollText = "Process Platinum";
        NoLicenseCost = 1500;
    };
	class ruby {
        MaterialsReq[] = {{"PWA_ruby_raw",1}};
        MaterialsGive[] = {{"PWA_ruby_processed",1}};
        Text = "STR_Process_Ruby";
        //ScrollText = "Process Ruby";
        NoLicenseCost = 1200;
    };
	class cigarettes {
        MaterialsReq[] = {{"PWA_cigarettes_raw",1}};
        MaterialsGive[] = {{"PWA_cigarettes_processed",1}};
        Text = "STR_Process_Cigarettes";
        //ScrollText = "Process Cigarettes";
        NoLicenseCost = 700;
    };
	class coke {
        MaterialsReq[] = {{"PWA_coke_raw",1}};
        MaterialsGive[] = {{"PWA_coke_processed",1}};
        Text = "STR_Process_Coke";
        //ScrollText = "Process Coke";
        NoLicenseCost = 1500;
    };
	class millet {
        MaterialsReq[] = {{"PWA_millet_raw",1}};
        MaterialsGive[] = {{"PWA_millet_processed",1}};
        Text = "STR_Process_Millet";
        //ScrollText = "Process Millet";
        NoLicenseCost = 500;
    };
};

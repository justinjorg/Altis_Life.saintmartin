class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "ivory_wrx", "" },
            { "ivory_veyron", "" },
            { "ivory_taurus", "" },
            { "ivory_supra", "" },
            { "ivory_suburban", "" },
            { "ivory_rs4", "" },
            { "ivory_rev", "" },
            { "ivory_r34", "" }, //First
            { "ivory_r8", "" },
            { "ivory_prius", "" }
        };
    };

    class vip_silver_cars {
        side = "civ";
        conditions = "call life_donorlevel >= 1";
        vehicles[] = {
            { "ivory_evox", "" },
            { "ivory_elise", "" },
            { "ivory_e36", "" },
            { "ivory_cv", "" }
        };
    };

    class vip_gold_cars {
        side = "civ";
        conditions = "call life_donorlevel >= 2";
        vehicles[] = {
            { "ivory_evox", "" },
            { "ivory_elise", "" },
            { "ivory_e36", "" },
            { "ivory_cv", "" },
            { "ivory_charger", "" }, //First
            { "ivory_challenger", "" },
            { "ivory_ccx", "" },
            { "ivory_c", "" }
        };
    };

    class vip_platnium_cars {
        side = "civ";
        conditions = "call life_donorlevel >= 3";
        vehicles[] = {
            { "ivory_evox", "" },
            { "ivory_elise", "" },
            { "ivory_e36", "" },
            { "ivory_cv", "" },
            { "ivory_charger", "" }, //First
            { "ivory_challenger", "" },
            { "ivory_ccx", "" },
            { "ivory_c", "" },
            { "ivory_911", "" },
            { "ivory_mp4", "" },
            { "ivory_m3", "" },
            { "ivory_lp560", "" }
        };
    };

    class vip_titianium_cars {
        side = "civ";
        conditions = "call life_donorlevel >= 4";
        vehicles[] = {
            { "ivory_evox", "" },
            { "ivory_elise", "" },
            { "ivory_e36", "" },
            { "ivory_cv", "" },
            { "ivory_charger", "" }, //First
            { "ivory_challenger", "" },
            { "ivory_ccx", "" },
            { "ivory_c", "" },
            { "ivory_911", "" },
            { "ivory_mp4", "" },
            { "ivory_m3", "" },
            { "ivory_lp560", "" },
            { "ivory_lfa", "" },
            { "ivory_isf", "" },
            { "ivory_gti", "" }, //Apex DLC
            { "ivory_gt500", "" }
        };
    };

    class vip_diamond_cars {
        side = "civ";
        conditions = "call life_donorlevel >= 5";
        vehicles[] = {
            { "ivory_evox", "" },
            { "ivory_elise", "" },
            { "ivory_e36", "" },
            { "ivory_cv", "" },
            { "ivory_charger", "" }, //First
            { "ivory_challenger", "" },
            { "ivory_ccx", "" },
            { "ivory_c", "" },
            { "ivory_911", "" },
            { "ivory_mp4", "" },
            { "ivory_m3", "" },
            { "ivory_lp560", "" },
            { "ivory_lfa", "" },
            { "ivory_isf", "" },
            { "ivory_gti", "" }, //Apex DLC
            { "ivory_gt500", "" },
            { "ivory_190e", "" },
            { "ivory_f1", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "B_Truck_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
             { "I_Heli_light_03_dymanicLoadout_F", "" },
            { "I_Heli_Transport_02_F", "" } //Apex DLC
        };
    };

    
    class civ_aircraft {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Glider", "" },
            { "IVORY_T6A_1", "" },
            { "IVORY_ERJ135_1", "" },
            { "IVORY_CRJ200_1", "" },
            { "yak42", "" },
            { "ivory_yak42d_1", "" },
            { "tu154", "" },
            { "b737", "" },
            { "b747", "" }  //Apex DLC
        };
    };

    class civ_vip_aircraft {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Glider", "" },
            { "IVORY_T6A_1", "" },
            { "IVORY_ERJ135_1", "" },
            { "IVORY_CRJ200_1", "" },
            { "yak42", "" },
            { "ivory_yak42d_1", "" },
            { "tu154", "" },
            { "b737", "" },
            { "b747", "" }  //Apex DLC
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "I_Truck_02_medical_F", "" },
            { "O_Truck_03_medical_F", "" },
            { "B_Truck_01_medical_F", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "ivory_suburban_marked", "call life_coplevel >= 1" },
            { "ivory_suburban_slicktop", "call life_coplevel >= 1" },
            { "ivory_suburban_unmarked", "call life_coplevel >= 1" },
            { "ivory_challenger_marked", "call life_coplevel >= 1" },
            { "ivory_challenger_unmarked", "call life_coplevel >= 1" },
            { "ivory_challenger_slicktop", "call life_coplevel >= 1" },
            { "ivory_charger_marked", "call life_coplevel >= 1" },
            { "ivory_charger_slicktop", "call life_coplevel >= 1" },
            { "ivory_charger_unmarked", "call life_coplevel >= 1" },
            { "ivory_taurus_marked", "call life_coplevel >= 1" },
            { "ivory_taurus_slicktop", "call life_coplevel >= 1" },
            { "ivory_taurus_unmarked", "call life_coplevel >= 2" },
            { "ivory_cv_marked", "" },
            { "ivory_cv_unmarked", "" },
            { "ivory_cv_slicktop", "" },
            { "ivory_wrx_unmarked", "call life_coplevel >= 1" },
            { "ivory_wrx_skicktop", "call life_coplevel >= 1" },// END EDITS
            { "ivory_evox_marked", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBLBCSO", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBLBHP", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBLBSP", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBLBSP2", "call life_coplevel >= 1" },// END EDITS
            { "A3L_CVPIFPBLBPD", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBPD", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBCSO", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBHP", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBFG", "call life_coplevel >= 1" },
            { "A3L_CVPIFPBSM", "call life_coplevel >= 1" },// END EDITS
            { "A3L_EvoXFPBLBSO", "call life_coplevel >= 1" },
            { "A3L_EvoXFPBLBPD", "call life_coplevel >= 1" },
            { "A3L_TaurusFPBLBCSO", "call life_coplevel >= 1" },
            { "A3L_TaurusFPBCSO", "call life_coplevel >= 1" },// END EDITS
            { "A3L_TaurusFPBLBPD", "call life_coplevel >= 1" },
            { "A3L_TaurusFPBPD", "call life_coplevel >= 1" },
            { "A3L_TaurusFPBPDGM", "call life_coplevel >= 1" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "USCG_Jayhawk", "call life_coplevel >= 4" },
            { "USCG_Jayhawk_Empty", "call life_coplevel >= 4" },
            { "I_Heli_Transport_02_F", "call life_coplevel >= 4" },
            { "I_Heli_light_03_dynamicLoadout_F", "call life_coplevel >= 4" },
            { "I_Heli_light_03_unarmed_F", "call life_coplevel >= 4" },
            { "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 4" },
            { "O_Heli_Light_02_dynamicLoadout_F", "call life_coplevel >= 4" },
            { "O_Heli_Attack_02_dynamicLoadout_F", "call life_coplevel >= 4" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" }
        };
    };

    class cop_aircg {
        side = "cop";
        conditions = "call life_coplevel >= 4";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "USCG_Jayhawk", "call life_coplevel >= 4" },
            { "USCG_Jayhawk_Empty", "call life_coplevel >= 4" },
            { "I_Heli_Transport_02_F", "call life_coplevel >= 4" },
            { "I_Heli_light_03_dynamicLoadout_F", "call life_coplevel >= 4" },
            { "I_Heli_light_03_unarmed_F", "call life_coplevel >= 4" },
            { "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 4" },
            { "O_Heli_Light_02_dynamicLoadout_F", "call life_coplevel >= 4" },
            { "O_Heli_Attack_02_dynamicLoadout_F", "call life_coplevel >= 4" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "call life_coplevel >= 4" }, //Apex DLC
            { "B_T_Lifeboat", "call life_coplevel >= 4" }, //Apex DLC
            { "I_Boat_Armed_01_minigun_F", "call life_coplevel >= 4" }, //Apex DLC
            { "I_Boat_Transport_01_F", "call life_coplevel >= 4" }, //Apex DLC
            { "C_Boat_Civil_01_rescue_F", "call life_coplevel >= 4" }, //Apex DLC
            { "C_Boat_Transport_02_F", "call life_coplevel >= 4" }, //Apex DLC
            { "C_Boat_Civil_01_police_F", "call life_coplevel >= 4" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class IVORY_T6A_1 {
        vItemSpace = -1;
        conditions = "";
        price = 25000;
        textures[] = {};
    };
    class Glider {
       vItemSpace = -1;
        conditions = "";
        price = 15000;
        textures[] = {};
    };
    class IVORY_ERJ135_1 {
        vItemSpace = -1;
        conditions = "";
        price = 35000;
        textures[] = {};
    };
    class IVORY_CRJ200_1 {
        vItemSpace = -1;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
    class yak42 {
        vItemSpace = -1;
        conditions = "";
        price = 55000;
        textures[] = {};
    };
    class ivory_yak42d_1 {
        vItemSpace = -1;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
    class tu154 {
        vItemSpace = -1;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
    class b737 {
        vItemSpace = -1;
        conditions = "";
        price = 85000;
        textures[] = {};
    };
    class b747 {
        vItemSpace = -1;
        conditions = "";
        price = 95000;
        textures[] = {};
    };
    // Apex DLC
   class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class ivory_suburban_marked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_suburban_slicktop {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_suburban_unmarked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_challenger_marked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_challenger_unmarked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_challenger_slicktop {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_charger_marked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_charger_slicktop {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_charger_unmarked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_taurus_marked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_taurus_slicktop {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_taurus_unmarked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_cv_marked {
        vItemSpace = 200;
        conditions = "";
        price = 5000;
        textures[] = {};
    };

     class ivory_cv_unmarked {
        vItemSpace = 200;
        conditions = "";
        price = 5000;
        textures[] = {};
    };

     class ivory_cv_slicktop {
        vItemSpace = 200;
        conditions = "";
        price = 5000;
        textures[] = {};
    };

     class ivory_wrx_unmarked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_wrx_skicktop {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_evox_marked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_evox_slicktop {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

     class ivory_evox_unmarked {
        vItemSpace = 200;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class ivory_wrx {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_veyron {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_taurus {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_taurus {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_supra {
        vItemSpace = 1165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_suburban {
        vItemSpace = 900;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_rs4 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_rev {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_r34 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_r8 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_prius {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_mp4 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_m3 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_lp560 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_lfa {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_isf {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_gti {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_gt500 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_f1 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_evox {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_elise {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_e36 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_cv {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_charger {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_challenger {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_ccx {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_c {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_911 {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class ivory_190e {
        vItemSpace = 165;
        conditions = "";
        price = 15000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 165;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 165;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 165;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };


    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 165;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
};

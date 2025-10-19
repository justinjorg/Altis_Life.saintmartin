#define true 1
#define false 0

/*
    price - Cost of the building
    numberCrates - Allowed number of crates
    restrictedPos[] - Same as the old fn_getBuildingPositions. A list of restricted building positions (i.e, to stop spawning outside, or by windows etc)
        default: {}
    canGarage - True if the building can be used as a garage (need to buy ontop)
        default: false
    garageSpawnPos[] - worldToModel position to spawn vehicles, leave {} if canGarage is false.
        default: {}
    garageSpawnDir - Offset to garage direction to spawn at (+-90 etc). It will be used in the manner: getDir _garage + spawnDir
        default: 0
    garageBlacklists[] - List of blacklisted houses for buying garages
        default: {}
*/

class Housing {

    class saintmartin {

        //Maison Petite
        class Land_i_House_Small_02_b_pink_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_02_b_brown_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_02_b_whiteblue_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_02_V1_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,2.4};
        };

        class Land_i_House_Small_02_V2_F : Land_i_House_Small_02_V1_F{};

        class Land_i_House_Small_02_b_blue_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_02_b_white_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_02_b_yellow_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_House_Small_03_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-2.35,1,2.8};
        };

        class Land_House_Small_05_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,1,2};
        };

        class Land_House_Big_01_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1,2,2};
        };

        class Land_House_Small_06_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {3,-2,2};
        };

        class Land_House_Small_04_F {
            price = 300000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

        //Maison avec garage
        class Land_GarageShelter_01_F {
            price = 150000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {0.241684,-5.72266,-1.46744};
            garageSpawnDir = 90;
            garageBlacklists[] = {{10998,9698.24,-0.219376}};
            lightPos[] = {0,0,2};
        };

        class Land_House_Big_02_F {
            price = 850000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {12.8365,0.414551,-1.81252};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,0,2};
        };

        //Moyenne maison

        class Land_HouseA {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        class Land_HouseA1 {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        class Land_HouseA_L {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {-3.5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        class Land_HouseB {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        class Land_HouseB1 {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        class Land_HouseB1_L {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {-3.5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        class Land_HouseC_R {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        class Land_HouseC1_L {
            price = 1500000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {-3.5,-14,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,2,3};
        };

        //Grosse maison

        class Land_HouseDoubleAL {
            price = 2000000;
            numberCrates = 4;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {-7,-21,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,0,3};
        };

        class Land_HouseDoubleAL2 {
            price = 2000000;
            numberCrates = 4;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {-7,-21,0};
            garageSpawnDir = 180;
            garageBlacklists[] = {};
            lightPos[] = {0,0,3};
        };

        class Land_House_Big_03_F {
            price = 2000000;
            numberCrates = 4;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {20,-3.5,-2};
            garageSpawnDir = 90;
            garageBlacklists[] = {};
            lightPos[] = {0,0,3};
        };

//Maison Moyenne
        class Land_i_House_Small_03_V1_F {
            price = 600000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

        class Land_i_House_Small_01_b_brown_F {
            price = 600000;
            numberCrates = 2;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_01_b_yellow_F {
            price = 600000;
            numberCrates = 2;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_01_b_blue_F {
            price = 600000;
            numberCrates = 2;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_01_b_white_F {
            price = 600000;
            numberCrates = 2;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_01_V1_F {
            price = 600000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1.5,0,2};
        };

        class Land_i_House_Small_01_b_whiteblue_F {
            price = 600000;
            numberCrates = 2;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Small_01_V3_F : Land_i_House_Small_01_V1_F{};
        class Land_i_House_Small_01_V2_F : Land_i_House_Small_01_V1_F{};

//Maison Moyenne-Grande
        class Land_i_House_Big_02_b_blue_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_b_yellow_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_b_whiteblue_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_b_brown_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_b_pink_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_b_white_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_V1_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_V2_F : Land_i_House_Big_02_V1_F{};
        class Land_i_House_Big_02_V3_F : Land_i_House_Big_02_V1_F{};

//Maison Grande
        class Land_i_House_Big_01_V1_F {
            price = 1200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_V2_F : Land_i_House_Big_01_V1_F{};
        class Land_i_House_Big_01_V3_F : Land_i_House_Big_01_V1_F{};

        class Land_i_House_Big_01_b_whiteblue_F {
            price = 1200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_b_white_F {
            price = 1200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_b_pink_F {
            price = 1200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_b_blue_F {
            price = 1200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_b_brown_F {
            price = 1200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_b_yellow_F {
            price = 1200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

    };

};

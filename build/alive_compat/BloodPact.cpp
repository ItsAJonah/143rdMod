class CfgPatches {
    class O_143RenegadesBlood {
        units[] = {
            "O_Blood_Pact_Ammo_Bearer_01",
            "O_Blood_Pact_Rifleman_01",
            "O_Blood_Pact_Grenadier_01",
            "O_Blood_Pact_Heavy_rifleman_01",
            "O_Blood_Pact_Engineer_01",
            "O_Blood_Pact_Blood_Pact_Officer_01",
            "O_Blood_Pact_Plasma_Gunner_01",
            "O_Blood_Pact_Meltagunner_01",
            "O_Blood_Pact_AT_Missileman_01"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "VGm. Venture";
        authors[] = {"VGm. Venture"};
    };
};

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 196.146114 on Stable branch
// Generated with ALiVE version 1.12.1.2002131
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class O_143RenegadesBlood {
        displayName = "143rd Renegades - Blood Pact";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 1;
    };
};

class CfgGroups {
    class EAST {

        class O_143RenegadesBlood {
            name = "143rd Renegades - Blood Pact";

            class Infantry {
                name = "Infantry";

                class o_blood_pact_infantry_sentry {
                    name = "Sentry";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                };

                class o_blood_pact_infantry_fireteam {
                    name = "Fireteam";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                };

                class o_blood_pact_infantry_fireteam_at {
                    name = "Fireteam AT";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.4;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_AT_Missileman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                };

                class o_blood_pact_infantry_fireteam_plasma {
                    name = "Fireteam Plasma";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.4;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Plasma_Gunner_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                };

                class o_blood_pact_infantry_fireteam_melta {
                    name = "Fireteam Melta";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.4;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Meltagunner_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                };

                class o_blood_pact_infantry_infantry_squad {
                    name = "Infantry Squad";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_AT_Missileman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Plasma_Gunner_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

                class o_blood_pact_specops_heavy_rifileman_squad {
                    name = "Heavy Rifileman Squad";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Heavy_rifleman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Heavy_rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Heavy_rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Heavy_rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Heavy_rifleman_01";
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

                class o_blood_pact_support_hq_team {
                    name = "HQ Team";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Blood_Pact_Officer_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Engineer_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Engineer_01";
                    };
                };

            };

            class Mechanized {
                name = "Mechanized Infantry";
				class o_blood_pact_Mechanized_Squad {
                    name = "Mechanized Squad";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "_RenegadeChimAuto_Black_OP";
                    };
					class Unit1 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Blood_Pact_Grenadier_01";
                    };
                    class Unit2 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_AT_Missileman_01";
                    };
                    class Unit3 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Plasma_Gunner_01";
                    };
                    class Unit4 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit6 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
                    class Unit10 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Blood_Pact_Rifleman_01";
                    };
				};
            };

            class Armored {
                name = "Armor";
                class o_blood_pact_infantry_sentry {
                    name = "Tank Squadron";
                    side = 0;
                    faction = "O_143RenegadesBlood";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LiEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Renegade_LR_Battlecannon_Black_OP";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Renegade_LR_Battlecannon_Black_OP";
                    };
                };

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class TIOW_Bloodpact_inf_05_OP;
    class TIOW_Bloodpact_inf_05_OP_OCimport_01 : TIOW_Bloodpact_inf_05_OP { scope = 0; class EventHandlers; };
    class TIOW_Bloodpact_inf_05_OP_OCimport_02 : TIOW_Bloodpact_inf_05_OP_OCimport_01 { class EventHandlers; };

    class TIOW_Bloodpact_inf_01_OP;
    class TIOW_Bloodpact_inf_01_OP_OCimport_01 : TIOW_Bloodpact_inf_01_OP { scope = 0; class EventHandlers; };
    class TIOW_Bloodpact_inf_01_OP_OCimport_02 : TIOW_Bloodpact_inf_01_OP_OCimport_01 { class EventHandlers; };

    class TIOW_Bloodpact_inf_02_OP;
    class TIOW_Bloodpact_inf_02_OP_OCimport_01 : TIOW_Bloodpact_inf_02_OP { scope = 0; class EventHandlers; };
    class TIOW_Bloodpact_inf_02_OP_OCimport_02 : TIOW_Bloodpact_inf_02_OP_OCimport_01 { class EventHandlers; };

    class TIOW_Bloodpact_inf_03_OP;
    class TIOW_Bloodpact_inf_03_OP_OCimport_01 : TIOW_Bloodpact_inf_03_OP { scope = 0; class EventHandlers; };
    class TIOW_Bloodpact_inf_03_OP_OCimport_02 : TIOW_Bloodpact_inf_03_OP_OCimport_01 { class EventHandlers; };

    class TIOW_Bloodpact_inf_04_OP;
    class TIOW_Bloodpact_inf_04_OP_OCimport_01 : TIOW_Bloodpact_inf_04_OP { scope = 0; class EventHandlers; };
    class TIOW_Bloodpact_inf_04_OP_OCimport_02 : TIOW_Bloodpact_inf_04_OP_OCimport_01 { class EventHandlers; };


    class O_Blood_Pact_Ammo_Bearer_01 : TIOW_Bloodpact_inf_05_OP_OCimport_02 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"M36KantRifle700"};
        respawnWeapons[] = {"M36KantRifle700"};

        magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
        respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

        backpack = "Ren_Backpack_02_black_Ammo";

        ALiVE_orbatCreator_loadout[] = {{"M36KantRifle700","","","",{"M36KantRifle_mag",50},{},""},{},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_chaos_frag_grenade_mag",3,1},{"TIOW_ig_smoke_grenade_mag",1,1}}},{"TIOW_Bloodpact_vest_01",{}},{"Ren_Backpack_02_black_Ammo",{{"30Rnd_Agrip_mag",2,30},{"MLAT_Mag",1,1},{"DK_PlasmaGun_Flask",1,10},{"TIOW_Meltagun_Mag",1,5}}},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_02",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_Rifleman_01 : TIOW_Bloodpact_inf_01_OP_OCimport_02 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"AgripinaaAutoChaos"};
        respawnWeapons[] = {"AgripinaaAutoChaos"};

        magazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};
        respawnMagazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};

        ALiVE_orbatCreator_loadout[] = {{"AgripinaaAutoChaos","","","",{"30Rnd_Agrip_mag",30},{},""},{},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"30Rnd_Agrip_mag",3,30},{"30Rnd_Agrip_mag_Tracer",2,30},{"TIOW_chaos_frag_grenade_mag",2,1}}},{"TIOW_Bloodpact_vest_01",{}},{},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_01",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_Grenadier_01 : TIOW_Bloodpact_inf_02_OP_OCimport_02 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_02","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_02","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"AgripinaaAutoChaosgl"};
        respawnWeapons[] = {"AgripinaaAutoChaosgl"};

        magazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};
        respawnMagazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};

        ALiVE_orbatCreator_loadout[] = {{"AgripinaaAutoChaosgl","","","",{"30Rnd_Agrip_mag",30},{},""},{},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"30Rnd_Agrip_mag",1,30},{"30Rnd_Agrip_mag_Tracer",2,30},{"TIOW_chaos_frag_grenade_mag",3,1},{"TIOW_chaos_krak_grenade_mag",2,1},{"TIOW_ig_smoke_grenade_mag",1,1}}},{"TIOW_Bloodpact_vest_02",{{"3Rnd_HE_Grenade_shell",3,3}}},{},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_01",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_Heavy_rifleman_01 : TIOW_Bloodpact_inf_03_OP_OCimport_02 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy rifleman";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_03","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_03","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"M36KantRifle700"};
        respawnWeapons[] = {"M36KantRifle700"};

        magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
        respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

        ALiVE_orbatCreator_loadout[] = {{"M36KantRifle700","","","",{"M36KantRifle_mag",50},{},""},{},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_chaos_frag_grenade_mag",3,1},{"TIOW_ig_smoke_grenade_mag",1,1}}},{"TIOW_Bloodpact_vest_03",{}},{},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_02",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_Engineer_01 : TIOW_Bloodpact_inf_04_OP_OCimport_02 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_04","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_04","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"AgripinaaAutoChaos"};
        respawnWeapons[] = {"AgripinaaAutoChaos"};

        magazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};
        respawnMagazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};

        backpack = "Ren_Backpack_02_black_Engineer";

        ALiVE_orbatCreator_loadout[] = {{"AgripinaaAutoChaos","","","",{"30Rnd_Agrip_mag",30},{},""},{},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"30Rnd_Agrip_mag",3,30},{"30Rnd_Agrip_mag_Tracer",2,30},{"TIOW_chaos_frag_grenade_mag",2,1}}},{"TIOW_Bloodpact_vest_04",{}},{"Ren_Backpack_02_black_Engineer",{{"ToolKit",1},{"MineDetector",1}}},"","TIOW_Bloodpact_mask_01",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_Blood_Pact_Officer_01 : O_Blood_Pact_Rifleman_01 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Blood Pact Officer";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_04","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_04","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"AgripinaaAutoChaosgl"};
        respawnWeapons[] = {"AgripinaaAutoChaosgl"};

        magazines[] = {"30Rnd_Agrip_mag","1Rnd_HE_Grenade_shell","30Rnd_Agrip_mag","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_Agrip_mag","1Rnd_HE_Grenade_shell","30Rnd_Agrip_mag","1Rnd_HE_Grenade_shell"};

        ALiVE_orbatCreator_loadout[] = {{"AgripinaaAutoChaosgl","","","",{"30Rnd_Agrip_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"30Rnd_Agrip_mag_Tracer",1,30},{"TIOW_chaos_frag_grenade_mag",2,1},{"30Rnd_Agrip_mag",3,30},{"1Rnd_HE_Grenade_shell",3,1}}},{"TIOW_Bloodpact_vest_04",{}},{},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_01_silver",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_Plasma_Gunner_01 : O_Blood_Pact_Rifleman_01 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Plasma Gunner";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Chaos_PlasmaGun"};
        respawnWeapons[] = {"Chaos_PlasmaGun"};

        magazines[] = {"DK_PlasmaGun_Flask","DK_PlasmaGun_Flask"};
        respawnMagazines[] = {"DK_PlasmaGun_Flask","DK_PlasmaGun_Flask"};

        backpack = "Ren_Backpack_02_black";

        ALiVE_orbatCreator_loadout[] = {{"Chaos_PlasmaGun","","","",{"DK_PlasmaGun_Flask",10},{},""},{},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"30Rnd_Agrip_mag_Tracer",2,30},{"TIOW_chaos_frag_grenade_mag",2,1},{"DK_PlasmaGun_Flask",1,10}}},{"TIOW_Bloodpact_vest_01",{{"DK_PlasmaGun_Flask",2,10}}},{"Ren_Backpack_02_black",{{"DK_Overcharge_PlasmaGun_Flask",2,3},{"DK_PlasmaGun_Flask",3,10}}},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_01",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_Meltagunner_01 : O_Blood_Pact_Rifleman_01 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Meltagunner";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"TIOW_MeltaGun_01","LuciusLaspistolBlack"};
        respawnWeapons[] = {"TIOW_MeltaGun_01","LuciusLaspistolBlack"};

        magazines[] = {"TIOW_Meltagun_Mag","LuciusLaspistol_mag","TIOW_Meltagun_Mag","LuciusLaspistol_mag"};
        respawnMagazines[] = {"TIOW_Meltagun_Mag","LuciusLaspistol_mag","TIOW_Meltagun_Mag","LuciusLaspistol_mag"};

        ALiVE_orbatCreator_loadout[] = {{"TIOW_MeltaGun_01","","","",{"TIOW_Meltagun_Mag",5},{},""},{},{"LuciusLaspistolBlack","","","",{"LuciusLaspistol_mag",50},{},""},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"30Rnd_Agrip_mag_Tracer",2,30},{"TIOW_chaos_frag_grenade_mag",2,1},{"TIOW_Meltagun_Mag",3,5},{"LuciusLaspistol_mag",3,50}}},{"TIOW_Bloodpact_vest_01",{{"LuciusLaspistol_mag",2,50},{"TIOW_Meltagun_Mag",8,5}}},{},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_01",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Blood_Pact_AT_Missileman_01 : O_Blood_Pact_Plasma_Gunner_01 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Missileman";
        side = 0;
        faction = "O_143RenegadesBlood";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "TIOW_U_Bloodpact_01_OP";

        linkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Bloodpact_vest_01","TIOW_Bloodpact_helmet_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"AgripinaaAutoChaos","MissileLauncherDKOKBlack"};
        respawnWeapons[] = {"AgripinaaAutoChaos","MissileLauncherDKOKBlack"};

        magazines[] = {"30Rnd_Agrip_mag","MLAT_Mag","30Rnd_Agrip_mag"};
        respawnMagazines[] = {"30Rnd_Agrip_mag","MLAT_Mag","30Rnd_Agrip_mag"};

        backpack = "Ren_Backpack_02_black";

        ALiVE_orbatCreator_loadout[] = {{"AgripinaaAutoChaos","","","",{"30Rnd_Agrip_mag",30},{},""},{"MissileLauncherDKOKBlack","","","",{"MLAT_Mag",1},{},""},{},{"TIOW_U_Bloodpact_01_OP",{{"FirstAidKit",1},{"30Rnd_Agrip_mag_Tracer",1,30},{"TIOW_chaos_frag_grenade_mag",2,1},{"30Rnd_Agrip_mag",3,30}}},{"TIOW_Bloodpact_vest_01",{{"30Rnd_Agrip_mag",8,30}}},{"Ren_Backpack_02_black",{{"VNG_MLMelta_Mag",2,1},{"30Rnd_Agrip_mag",5,30}}},"TIOW_Bloodpact_helmet_01","TIOW_Bloodpact_mask_01",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};
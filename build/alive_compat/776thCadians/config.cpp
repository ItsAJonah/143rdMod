//776th Units
class CfgPatches {
    class I_143Cadian776 {
        units[] = {
			"I_143Cadian776_Cadian_Shocktrooper_776th_01",
			"I_143Cadian776_Cadian_Officer_776_01",
			"I_143Cadian776_Cadian_Shocktrooper_Plasma_776_01",
			"I_143Cadian776_Cadian_Shocktrooper_Missile_776_01"
		};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"ace_common"};
        author = "VGm. Venture";
        authors[] = {"VGm. Venture"};
    };
};

class CfgFactionClasses {
    class I_143Cadian776 {
        displayName = "143rd Cadians - 776th";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
        priority = 1;
    };
};

class CfgGroups {
    class Indep {

        class I_143Cadian776{
            name = "143rd Cadians - 776th";

            class Infantry {
                name = "Infantry";

                class I_143Cadian776_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class I_143Cadian776_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class I_143Cadian776_infantry_fireteam_at {
                    name = "Fireteam - AT";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Missile_776_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class I_143Cadian776_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Plasma_776_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class I_143Cadian776_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class I_143Cadian776_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Missile_776_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Plasma_776_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };


            };

            class SpecOps {
                name = "Special Forces";
				class I_143Cadian776_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";
                class I_143Cadian776_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Taurox_HS_776_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Plasma_776_01";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";
                class I_143Cadian776_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Officer_776_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Plasma_776_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Missile_776_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Med776th_Indep";
                    };
                };

            };

            class Mechanized {
                name = "Mechanized Infantry";

                class I_143Cadian776_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "REPLACEAPC";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_143Cadian776_Cadian_Shocktrooper_Plasma_776_01";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

            };

            class Armored {
                name = "Armor";
				class I_143Cadian776_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "I_143Cadian776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Indep";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Indep";
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
// TIOW Characters
//			"TIOW_Taurox_HS_776_Indep",
//			"TIOW_Cad_GM776th_Indep",
//			"TIOW_Cad_VET776th_Indep",
//			"TIOW_Cad_Tnk776th_Indep",
//			"TIOW_Cad_Med776th_Indep",
//			"TIOW_Cad_Kasr776th_Indep",
//			"TIOW_Cad_GM_Melta_776th_Indep",
//			"TIOW_Cad_GM_Plasma_776th_Indep",
//			"TIOW_Cad_GM_Flamer_776th_Indep",
//			"TIOW_Cad_GM_GrenadeLauncher_776th_Indep",
//			"TIOW_Cad_GM_Vox_776th_Indep",
//			"TIOW_Cad_SGT776th_Indep",
//			"TIOW_Cad_SNIPER776th_Indep",
class CfgVehicles
{
		class TIOW_Cad_GM776th_Indep;
		class TIOW_Cad_GM776th_Indep_OCimport_01 : TIOW_Cad_GM776th_Indep { scope = 0; class EventHandlers; };
		class TIOW_Cad_GM776th_Indep_OCimport_02 : TIOW_Cad_GM776th_Indep_OCimport_01 { class EventHandlers; };
		
		class I_143Cadian776_Cadian_Shocktrooper_776th_01 : TIOW_Cad_GM776th_Indep_OCimport_02 {
			author = "VGm. Venture";
			scope = 0;
			scopeCurator = 2;
			displayName = "Cadian Shocktrooper (776th)";
			side = 2;
			faction = "I_143Cadian776";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni776th_Indep";

			linkedItems[] = {"Cad_Gear776th","Cad_Inf_Helm776th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_Gear776th","Cad_Inf_Helm776th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"M36KantRifle776"};
			respawnWeapons[] = {"M36KantRifle776"};

			magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle776","","","",{"M36KantRifle_mag",50},{},""},{},{},{"CadUni776th_Indep",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_Gear776th",{}},{},"Cad_Inf_Helm776th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian776_Cadian_Shocktrooper_Missile_776_01 : I_143Cadian776_Cadian_Shocktrooper_776th_01 {
			author = "VGm. Venture";
			scope = 0;
			scopeCurator = 2;
			displayName = "Cadian Shocktrooper - Missile [776]";
			side = 2;
			faction = "I_143Cadian776";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni776th_Indep";

			linkedItems[] = {"Cad_Gear776th","Cad_Inf_Helm776th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_Gear776th","Cad_Inf_Helm776th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"M36KantRifle776","MissileLauncherDKOKBlack"};
			respawnWeapons[] = {"M36KantRifle776","MissileLauncherDKOKBlack"};

			magazines[] = {"M36KantRifle_mag","MLAT_Mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","MLAT_Mag","M36KantRifle_mag"};

			backpack = "VNG_CadATBackpack";

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle776","","","TIOW_2x4xScope_1",{"M36KantRifle_mag",50},{},""},{"MissileLauncherDKOKBlack","","","",{"MLAT_Mag",1},{},""},{},{"CadUni776th_Indep",{{"FirstAidKit",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_Gear776th",{{"M36KantRifle_mag",10,50}}},{"VNG_CadATBackpack",{{"VNG_MLMelta_Mag",4,1},{"MLHE_Mag",2,1}}},"Cad_Inf_Helm776th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};
		
		class I_143Cadian776_Cadian_Officer_776_01 : I_143Cadian776_Cadian_Shocktrooper_776th_01 {
			author = "VGm. Venture";
			scope = 0;
			scopeCurator = 2;
			displayName = "Cadian Officer [776]";
			side = 2;
			faction = "I_143Cadian776";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni776th";

			linkedItems[] = {"TIOW_IG_Sergeant_Armour_776","TIOW_IG_PatrolCap_776","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"TIOW_IG_Sergeant_Armour_776","TIOW_IG_PatrolCap_776","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"M36KantRifle776"};
			respawnWeapons[] = {"M36KantRifle776"};

			magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

			backpack = "TIOW_CadBackpack_Winter";

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle776","","","",{"M36KantRifle_mag",50},{},""},{},{},{"CadUni776th",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"TIOW_IG_Sergeant_Armour_776",{{"VNG_HighPoweredM36KantRifle_mag",10,25}}},{"TIOW_CadBackpack_Winter",{{"ACE_elasticBandage",20},{"ACE_quikclot",20}}},"TIOW_IG_PatrolCap_776","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian776_Cadian_Shocktrooper_Plasma_776_01 : I_143Cadian776_Cadian_Shocktrooper_776th_01 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Shocktrooper - Plasma [776]";
			side = 2;
			faction = "I_143Cadian776";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni776th_Indep";

			linkedItems[] = {"Cad_Gear776th","Cad_Inf_Helm776th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_Gear776th","Cad_Inf_Helm776th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"TIOW_IG_Plasmagun_01","LuciusLaspistolBlack"};
			respawnWeapons[] = {"TIOW_IG_Plasmagun_01","LuciusLaspistolBlack"};

			magazines[] = {"DK_PlasmaGun_Flask","LuciusLaspistol_mag","DK_PlasmaGun_Flask","LuciusLaspistol_mag"};
			respawnMagazines[] = {"DK_PlasmaGun_Flask","LuciusLaspistol_mag","DK_PlasmaGun_Flask","LuciusLaspistol_mag"};

			backpack = "VNG_CadATBackpack";

			ALiVE_orbatCreator_loadout[] = {{"TIOW_IG_Plasmagun_01","","","",{"DK_PlasmaGun_Flask",10},{},""},{},{"LuciusLaspistolBlack","","","",{"LuciusLaspistol_mag",50},{},""},{"CadUni776th_Indep",{{"FirstAidKit",1},{"ACE_elasticBandage",2},{"TIOW_ig_frag_grenade_mag",2,1},{"DK_PlasmaGun_Flask",2,10}}},{"Cad_Gear776th",{{"DK_PlasmaGun_Flask",1,10},{"LuciusLaspistol_mag",3,50},{"DK_Overcharge_PlasmaGun_Flask",1,3}}},{"VNG_CadATBackpack",{{"DK_Overcharge_PlasmaGun_Flask",5,3},{"DK_PlasmaGun_Flask",6,10},{"LuciusLaspistol_mag",2,50}}},"Cad_Inf_Helm776th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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
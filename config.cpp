
class CfgPatches
{
	class AmmoExpansionCompatHH
	{
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"Ammo_AE762x25",
			"HH_TT33"
		}
	};
};
class CfgMods
{
	class AmmoExpansionCompatHH
	{
		dir = "AmmoExpansionCompatHH";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Ammunition Expansion Compatibility Hooch's Heat";
		author = "angrystoma";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs = "";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class missionScriptModule
			{
				value="";
				files[]= {"AmmoExpansionCompatHH\Scripts\5_Mission"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"AmmoExpansionCompatHH\Scripts\4_World"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"AmmoExpansionCompatHH\Scripts\3_Game"};
			};
		};
	};
};

class cfgWeapons
{
	class CZ75;
	class HH_TT33: CZ75
	{
		chamberableFrom[]+=
		{
			"Ammo_AE762x25"
		};
	}
};

class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base;
	class Mag_IJ70_8Rnd;

	class HH_TT33_Mag: Mag_IJ70_8Rnd
	{
		ammo="Bullet_AE762x25";
		ammoItems[]+=
		{
			"Ammo_AE762x25"
		};
	}
}

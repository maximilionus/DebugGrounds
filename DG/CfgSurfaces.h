class CfgSurfaces
{
	class Default {};
	class debuggrounds_CoastalGrass_surface: Default
	{
		files = "dg_trava1*";
		rough = 0.1;
		dust = 1;
		soundEnviron = "grass";
		character = "debuggrounds_CoastalGrass_Character";
		soundHit = "soft_ground";
	};
	class debuggrounds_Grass2_surface: Default
	{
		files = "dg_trava2*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "grass";
		character = "debuggrounds_Grass_Character";
		soundHit = "soft_ground";
	};
	class debuggrounds_Sand_surface: Default
	{
		files = "dg_sand*";
		rough = 0.4;
		dust = 1;
		soundEnviron = "sand";
		character = "debuggrounds_none_Character";
		soundHit = "soft_ground";
	};
	class debuggrounds_FreeSpace_surface: Default
	{
		files = "dg_concrete*";
		rough = 0.4;
		dust=0.15000001;
		soundEnviron = "concrete";
		character = "debuggrounds_none_Character";
		soundHit = "concrete";
	};
};
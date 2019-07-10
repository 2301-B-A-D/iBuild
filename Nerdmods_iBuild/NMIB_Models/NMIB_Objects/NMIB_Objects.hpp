class NMIB_Plot_Workbench : ReammoBox
{
	vehicleClass = "NerdMods_iBuild_A3";		
	mapSize = 5;				
	supplyRadius = 2;
	memoryPointSupply = "doplnovani";
	scope = 2;
	displayName = "Plot Workbench";
	icon = "\Nerdmods_iBuild\NMIB_Images\iBuild_Icon";
	model = "Nerdmods_iBuild\NMIB_Models\NMIB_Objects\NMIB_Workbench.p3d";
	author = "NerdMod";
	
	maximumLoad = 10000;
	transportMaxWeapons = 10000;
	transportMaxMagazines = 10000;
	
	class TransportMagazines {};
	
	class TransportWeapons {};
	
	class TransportItems
	{
		class _xx_NMIB_PlotLease_Itm
		{
			name = "NMIB_PlotLease_Itm";
			count = 1;
		};		
		class _xx_NMIB_ScrapMetal_Itm
		{
			name = "NMIB_ScrapMetal_Itm";
			count = 2;
		};			
		class _xx_NMIB_WoodNails_Itm
		{
			name = "NMIB_WoodNails_Itm";
			count = 1;
		};
		class _xx_NMIB_WoodPlanks_Itm
		{
			name = "NMIB_WoodPlanks_Itm";
			count = 4;
		};
	};
	
	class Eventhandlers
	{
		init = "(_this select 0) allowdamage false;";
	};		
};

class NMIB_Plot_Workbench_Ghost : iBuild_Ghost
{
	scope = 1;
	displayName = "Workbench Ghost";
	model = "Nerdmods_iBuild\NMIB_Models\NMIB_Objects\NMIB_Workbench_Ghost.p3d";
};
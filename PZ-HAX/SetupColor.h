#pragma once
#include "globals.h"

void SetupColors()
{
	Globals::ColorsForPicker1.push_back(ColorP("Team Box", g_Options.COLOR.TeamColor));
	Globals::ColorsForPicker1.push_back(ColorP("Team Name", g_Options.COLOR.TeamNameColor));
	Globals::ColorsForPicker1.push_back(ColorP("Team Distance", g_Options.COLOR.TeamDistanceColor));
	Globals::ColorsForPicker1.push_back(ColorP("Team Line ", g_Options.COLOR.TeamLineColor));
	Globals::ColorsForPicker1.push_back(ColorP("Team Filedbox ", g_Options.COLOR.TeamFiledboxColor));
	Globals::ColorsForPicker1.push_back(ColorP("Team Skeleton", g_Options.COLOR.TeamSkeleton));
	Globals::ColorsForPicker1.push_back(ColorP("Team Knocked", g_Options.COLOR.Teamknocked));

	Globals::ColorsForPicker2.push_back(ColorP("Vis Box", g_Options.COLOR.OccludedEnemyColor));
	Globals::ColorsForPicker2.push_back(ColorP("UnVis Box", g_Options.COLOR.VisibleEnemyColor));
	Globals::ColorsForPicker2.push_back(ColorP("Vis Name", g_Options.COLOR.VisNameColor));
	Globals::ColorsForPicker2.push_back(ColorP("UnVis Name", g_Options.COLOR.UnVisNameColor));
	Globals::ColorsForPicker2.push_back(ColorP("Vis Distance", g_Options.COLOR.VisDistanceColor));
	Globals::ColorsForPicker2.push_back(ColorP("UnVis Distance", g_Options.COLOR.UnVisDistanceColor));
	Globals::ColorsForPicker2.push_back(ColorP("Vis Line", g_Options.COLOR.VisLineColor));
	Globals::ColorsForPicker2.push_back(ColorP("UnVis Line", g_Options.COLOR.UnVisLineColor));
	Globals::ColorsForPicker2.push_back(ColorP("Vis Filedbox", g_Options.COLOR.VisFiledboxColor));
	Globals::ColorsForPicker2.push_back(ColorP("UnVis Filedbox", g_Options.COLOR.UnVisFiledboxColor));
	Globals::ColorsForPicker2.push_back(ColorP("Vis Skeleton", g_Options.COLOR.VisSkeleton));
	Globals::ColorsForPicker2.push_back(ColorP("UnVis Skeleton", g_Options.COLOR.UnVisSkeleton));
	Globals::ColorsForPicker2.push_back(ColorP("Vis Knocked", g_Options.COLOR.Visknocked));
	Globals::ColorsForPicker2.push_back(ColorP("UnVis Knocked", g_Options.COLOR.UnVisknocked));

	Globals::ColorsForPicker3.push_back(ColorP("Name", g_Options.COLOR.VehicleNameColor));
	Globals::ColorsForPicker3.push_back(ColorP("3DBOX", g_Options.COLOR.VehicleColor));

	Globals::ColorsForPicker4.push_back(ColorP("Team", g_Options.COLOR.RadarTeam));
	Globals::ColorsForPicker4.push_back(ColorP("Vis Enemy", g_Options.COLOR.VisRadarEnemy));
	Globals::ColorsForPicker4.push_back(ColorP("UnVis Enemy", g_Options.COLOR.UnVisRadarEnemy));
	Globals::ColorsForPicker4.push_back(ColorP("Vehicle", g_Options.COLOR.VehicleRadar));

	/*=====================================================*/
		Globals::ColorsForPicker5.push_back(ColorP("ID 0", g_Options.COLOR.id[0].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 1", g_Options.COLOR.id[1].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 2", g_Options.COLOR.id[2].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 3", g_Options.COLOR.id[3].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 4", g_Options.COLOR.id[4].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 5", g_Options.COLOR.id[5].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 6", g_Options.COLOR.id[6].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 7", g_Options.COLOR.id[7].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 8", g_Options.COLOR.id[8].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 9", g_Options.COLOR.id[9].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 10", g_Options.COLOR.id[10].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 11", g_Options.COLOR.id[11].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 12", g_Options.COLOR.id[12].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 13", g_Options.COLOR.id[13].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 14", g_Options.COLOR.id[14].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 15", g_Options.COLOR.id[15].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 16", g_Options.COLOR.id[16].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 17", g_Options.COLOR.id[17].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 18", g_Options.COLOR.id[18].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 19", g_Options.COLOR.id[19].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 20", g_Options.COLOR.id[20].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 21", g_Options.COLOR.id[21].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 22", g_Options.COLOR.id[22].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 23", g_Options.COLOR.id[23].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 24", g_Options.COLOR.id[24].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 25", g_Options.COLOR.id[25].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 26", g_Options.COLOR.id[26].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 27", g_Options.COLOR.id[27].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 28", g_Options.COLOR.id[28].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 29", g_Options.COLOR.id[29].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 30", g_Options.COLOR.id[30].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 31", g_Options.COLOR.id[31].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 32", g_Options.COLOR.id[32].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 33", g_Options.COLOR.id[33].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 34", g_Options.COLOR.id[34].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 35", g_Options.COLOR.id[35].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 36", g_Options.COLOR.id[36].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 37", g_Options.COLOR.id[37].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 38", g_Options.COLOR.id[38].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 39", g_Options.COLOR.id[39].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 40", g_Options.COLOR.id[40].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 41", g_Options.COLOR.id[41].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 42", g_Options.COLOR.id[42].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 43", g_Options.COLOR.id[43].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 44", g_Options.COLOR.id[44].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 45", g_Options.COLOR.id[45].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 46", g_Options.COLOR.id[46].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 47", g_Options.COLOR.id[47].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 48", g_Options.COLOR.id[48].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 49", g_Options.COLOR.id[49].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 50", g_Options.COLOR.id[50].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 51", g_Options.COLOR.id[51].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 52", g_Options.COLOR.id[52].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 53", g_Options.COLOR.id[53].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 54", g_Options.COLOR.id[54].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 55", g_Options.COLOR.id[55].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 56", g_Options.COLOR.id[56].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 57", g_Options.COLOR.id[57].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 58", g_Options.COLOR.id[58].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 59", g_Options.COLOR.id[59].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 60", g_Options.COLOR.id[60].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 61", g_Options.COLOR.id[61].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 62", g_Options.COLOR.id[62].Team));
		Globals::ColorsForPicker5.push_back(ColorP("ID 63", g_Options.COLOR.id[63].Team));

		Globals::ColorsForPicker6.push_back(ColorP("Crosshair", g_Options.COLOR.CrossHair));


}
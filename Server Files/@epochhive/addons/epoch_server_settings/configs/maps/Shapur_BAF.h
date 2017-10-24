/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Epoch gamemode server Side map specific configs for Shapur_BAF.

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_server_settngs/configs/maps/Shapur_BAF.h
*/
class Shapur_BAF : Default
{
	worldSize = 0; // 0 = default to worldSize command
	plantLimit = 10;
	vehicleSpawnTypes[] = {
		{"FlatAreaCity",1},
		{"FlatAreaCitySmall",1},
		{"NameCity",2},
		{"NameVillage",1},
		{"NameCityCapital",4},
		{"Airport",5},
		{"NameLocal",2},
		{"StrongpointArea",1},
		{"VegetationBroadleaf",1},
		{"VegetationFir",1},
		{"ViewPoint",1}
	};
	traderBlds[] = {"House", "Building"};
	containerPos[] = {};
	telePos[] = {
		// N [-0.286865,8.17383,-10.3098]
		// S [-0.415527,-7.05298,-10.3098]
		// E [13.5127,0.410156,-10.3098]
		// W [-14.4316,0.112793,-10.3098]
			//{ "Transport_N_EPOCH", { -0.286865, 8.17383, -10.3098 }, "", "north" },
			//{ "Transport_W_EPOCH", { -14.4316, 0.112793, -10.3098 }, "", "west" },
			//{ "Transport_E_EPOCH", { 13.5127,0.410156,-10.3098 }, "", "east" },
			{ "Transport_C_EPOCH", { 13.5127, 0.410156, -10.3098 }, "", "south" }
	};
	propsPos[] = {
	};
	staticNpcPos[] = {
	};
};

#pragma once

enum eSurfaceType
{
	SURFACE_DEFAULT,
	SURFACE_TARMAC,
	SURFACE_GRASS,
	SURFACE_GRAVEL,
	SURFACE_MUD_DRY,
	SURFACE_PAVEMENT,
	SURFACE_CAR,
	SURFACE_GLASS,
	SURFACE_TRANSPARENT_CLOTH,
	SURFACE_GARAGE_DOOR,
	SURFACE_CAR_PANEL,
	SURFACE_THICK_METAL_PLATE,
	SURFACE_SCAFFOLD_POLE,
	SURFACE_LAMP_POST,
	SURFACE_FIRE_HYDRANT,
	SURFACE_GIRDER,
	SURFACE_METAL_CHAIN_FENCE,
	SURFACE_PED,
	SURFACE_SAND,
	SURFACE_WATER,
	SURFACE_WOOD_CRATES,
	SURFACE_WOOD_BENCH,
	SURFACE_WOOD_SOLID,
	SURFACE_RUBBER,
	SURFACE_PLASTIC,
	SURFACE_HEDGE,
	SURFACE_STEEP_CLIFF,
	SURFACE_CONTAINER,
	SURFACE_NEWS_VENDOR,
	SURFACE_WHEELBASE,
	SURFACE_CARDBOARDBOX,
	SURFACE_TRANSPARENT_STONE,
	SURFACE_METAL_GATE,

	// These are illegal
	SURFACE_SAND_BEACH,
	SURFACE_CONCRETE_BEACH,
};

enum
{
	ADHESIVE_RUBBER,
	ADHESIVE_HARD,
	ADHESIVE_ROAD,
	ADHESIVE_LOOSE,
	ADHESIVE_WET,

	NUMADHESIVEGROUPS
};

struct CColPoint;

class CSurfaceTable
{
	static float ms_aAdhesiveLimitTable[NUMADHESIVEGROUPS][NUMADHESIVEGROUPS];
public:
	static void Initialise(Const char *filename);
	static int GetAdhesionGroup(uint8 surfaceType);
	static float GetWetMultiplier(uint8 surfaceType);
	static float GetAdhesiveLimit(CColPoint &colpoint);
};

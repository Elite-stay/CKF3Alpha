#pragma once

typedef	enum
{
	BULLET_NONE = 0,
	BULLET_PLAYER_MINIGUN,
	BULLET_PLAYER_SHOTGUN,
	BULLET_PLAYER_TF2,
	BULLET_PLAYER_SNIPERIFLE
}ev_bullet_t;

enum scattergun_e
{
	SCATTERGUN_IDLE1,
	SCATTERGUN_START_RELOAD,
	SCATTERGUN_RELOAD,
	SCATTERGUN_AFTER_RELOAD,
	SCATTERGUN_DRAW,
	SCATTERGUN_SHOOT
};

enum pistol_e
{
	PISTOL_IDLE1,
	PISTOL_RELOAD,
	PISTOL_DRAW,
	PISTOL_FIRE
};

enum bat_e
{
	BAT_IDLE,
	BAT_IDLE1,
	BAT_IDLE2,
	BAT_DRAW,
	BAT_IDLE3,
	BAT_IDLE4,
	BAT_SLASH1,
	BAT_SLASH2
};

enum rocketlauncher_e
{
	ROCKETLAUNCHER_IDLE,
	ROCKETLAUNCHER_START_RELOAD,
	ROCKETLAUNCHER_RELOAD,
	ROCKETLAUNCHER_AFTER_RELOAD,
	ROCKETLAUNCHER_DRAW,
	ROCKETLAUNCHER_SHOOT	
};

enum shotgun_e
{
	SHOTGUN_IDLE1,
	SHOTGUN_START_RELOAD,
	SHOTGUN_RELOAD,
	SHOTGUN_AFTER_RELOAD,
	SHOTGUN_DRAW,
	SHOTGUN_SHOOT	
};

enum shovel_e
{
	SHOVEL_IDLE,
	SHOVEL_IDLE1,
	SHOVEL_IDLE2,
	SHOVEL_DRAW,
	SHOVEL_IDLE3,
	SHOVEL_IDLE4,
	SHOVEL_SLASH1,
	SHOVEL_SLASH2
};

enum minigun_e
{
	MINIGUN_IDLE1,
	MINIGUN_SPIN_SHOOT,
	MINIGUN_DRAW,
	MINIGUN_WIND_UP,
	MINIGUN_WIND_DOWN,
	MINIGUN_SPIN_IDLE1
};

enum fist_e
{
	FIST_IDLE,
	FIST_IDLE1,
	FIST_IDLE2,
	FIST_DRAW,
	FIST_IDLE3,
	FIST_IDLE4,
	FIST_SLASH1,
	FIST_SLASH2
};

enum flamethrower_e
{
	FLAMETHROWER_IDLE,
	FLAMETHROWER_FIRE,
	FLAMETHROWER_AIRBLAST,
	FLAMETHROWER_DRAW
};

enum fireaxe_e
{
	FIREAXE_IDLE,
	FIREAXE_IDLE1,
	FIREAXE_IDLE2,
	FIREAXE_DRAW,
	FIREAXE_IDLE3,
	FIREAXE_IDLE4,
	FIREAXE_SLASH1,
	FIREAXE_SLASH2,	
	FIREAXE_STAB
};

enum grenadelauncher_e
{
	GRENADELAUNCHER_IDLE,
	GRENADELAUNCHER_START_RELOAD,
	GRENADELAUNCHER_RELOAD,
	GRENADELAUNCHER_AFTER_RELOAD,
	GRENADELAUNCHER_DRAW,
	GRENADELAUNCHER_SHOOT	
};

enum stickylauncher_e
{
	STICKYLAUNCHER_IDLE,
	STICKYLAUNCHER_START_RELOAD,
	STICKYLAUNCHER_RELOAD,
	STICKYLAUNCHER_AFTER_RELOAD,
	STICKYLAUNCHER_DRAW,
	STICKYLAUNCHER_SHOOT	
};

enum bottle_e
{
	BOTTLE_IDLE,
	BOTTLE_SLASH1_BREAK,
	BOTTLE_SLASH2_BREAK,
	BOTTLE_DRAW,
	BOTTLE_SLASH1_BROKEN,
	BOTTLE_SLASH2_BROKEN,
	BOTTLE_SLASH1,
	BOTTLE_SLASH2,
	BOTTLE_IDLE_BROKEN,
	BOTTLE_DRAW_BROKEN
};

enum sniperifle_e
{
	SNIPERIFLE_IDLE1,
	SNIPERIFLE_IDLE2,
	SNIPERIFLE_DRAW,
	SNIPERIFLE_FIRE
};

enum smg_e
{
	SMG_IDLE1,
	SMG_RELOAD,
	SMG_DRAW,
	SMG_FIRE
};

enum kukri_e
{
	KUKRI_IDLE,
	KUKRI_IDLE1,
	KUKRI_IDLE2,
	KUKRI_DRAW,
	KUKRI_IDLE3,
	KUKRI_IDLE4,
	KUKRI_SLASH1,
	KUKRI_SLASH2,	
	KUKRI_STAB
};

enum syringegun_e
{
	SYRINGEGUN_IDLE,
	SYRINGEGUN_RELOAD,
	SYRINGEGUN_DRAW,
	SYRINGEGUN_SHOOT
};

enum medigun_e
{
	MEDIGUN_IDLE1,
	MEDIGUN_DRAW,
	MEDIGUN_HEAL,
	MEDIGUN_UBER
};

enum bonesaw_e
{
	BONESAW_IDLE,
	BONESAW_IDLE1,
	BONESAW_IDLE2,
	BONESAW_DRAW,
	BONESAW_IDLE3,
	BONESAW_IDLE4,
	BONESAW_SLASH1,
	BONESAW_SLASH2,	
	BONESAW_STAB
};

enum wrench_e
{
	WRENCH_IDLE,
	WRENCH_IDLE1,
	WRENCH_IDLE2,
	WRENCH_DRAW,
	WRENCH_IDLE3,
	WRENCH_IDLE4,
	WRENCH_SLASH1,
	WRENCH_SLASH2,
	WRENCH_STAB
};

enum buildpda_e
{
	BUILDPDA_IDLE1,
	BUILDPDA_DRAW
};

enum destroypda_e
{
	DESTROYPDA_IDLE1,
	DESTROYPDA_DRAW
};

enum revolver_e
{
	REVOLVER_IDLE1,
	REVOLVER_RELOAD,
	REVOLVER_DRAW,
	REVOLVER_FIRE
};

enum butterfly_e
{
	BUTTERFLY_IDLE,
	BUTTERFLY_HANDUP,
	BUTTERFLY_HANDIDLE,
	BUTTERFLY_DRAW,
	BUTTERFLY_IDLE2,
	BUTTERFLY_IDLE3,
	BUTTERFLY_SLASH1,
	BUTTERFLY_SLASH2,	
	BUTTERFLY_HANDDOWN,
	BUTTERFLY_STAB
};

enum sapper_e
{
	SAPPER_IDLE1,
	SAPPER_DRAW,
	SAPPER_DRAW2
};

enum disguisekit_e
{
	DISGUISEKIT_IDLE1,
	DISGUISEKIT_DRAW
};

#define STATE_MINIGUN_NONE 0
#define STATE_MINIGUN_WINDUP 1
#define STATE_MINIGUN_SPIN 2
#define STATE_MINIGUN_FIRE 3
#define STATE_MINIGUN_FIRECRIT 4
#define STATE_MINIGUN_WINDDOWN 5

#define STATE_FLAMETHROWER_IDLE 0
#define STATE_FLAMETHROWER_START 1
#define STATE_FLAMETHROWER_LOOP 2
#define STATE_FLAMETHROWER_LOOP_CRIT 3
#define STATE_FLAMETHROWER_AIRBLAST 4

extern vec3_t g_vecZero;
#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = -1;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = -2;
	var uLocal_108 = -2;
	var uLocal_109 = -2;
	var uLocal_110 = 5;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 2;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 2;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	BOOL bLocal_139 = 0;
	BOOL bLocal_140 = 0;
	BOOL bLocal_141 = 0;
	BOOL bLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	Object obLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	Object obScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	BOOL flag;
	char* name;
	var sizeAndPeds;
	BOOL flag2;
	Vector3 vector;
	Hash entityModel;
	Vector3 entityRotation;
	BOOL flag3;
	int pedNearbyPeds;
	int i;
	Vector3 vector2;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	fLocal_63 = 0f;
	iLocal_138 = -1;
	uLocal_152 = { 0f, 0f, 0f };
	obLocal_149 = obScriptParam_0;

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_382();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_381(13) || func_381(14))
	{
		func_382();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_39729)
	{
		func_382();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_76966)
		SCRIPT::TERMINATE_THIS_THREAD();

	flag = false;
	name = "tvscreen";
	sizeAndPeds = 25;
	flag2 = true;
	vector = { ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) - (ENTITY::GET_ENTITY_FORWARD_VECTOR(obScriptParam_0) * { 0.6f, 0.6f, 0.6f }) };
	vector.f_2 = vector.f_2 + 0.5f;
	uLocal_155 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obScriptParam_0, uLocal_152) };
	Global_1946297 = 0;
	Global_1946293 = false;
	Global_1946405 = 0;

	while (flag2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		{
			if (bLocal_140)
				if (!func_379(PLAYER::PLAYER_ID()))
					if (!_STOPWATCH_IS_INITIALIZED(&uLocal_143))
						func_377(&uLocal_143, true, false);
		
			if (Global_1946293 && func_376(PLAYER::PLAYER_ID()) || func_375(PLAYER::PLAYER_ID()))
			{
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_147))
				{
					func_377(&uLocal_147, false, false);
				}
				else if (func_374(&uLocal_147, 10000, false))
				{
					_STOPWATCH_DESTROY(&uLocal_147);
					Global_1946293 = false;
				}
			
				func_367(0);
			}
		
			if (Global_1845118)
			{
				if (!flag)
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_149);
				
					if (entityModel == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true), 1f, joaat("prop_laptop_01a"), false);
						entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_149, 2) };
						obLocal_149 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(obLocal_149, true), false, true, false);
						ENTITY::SET_ENTITY_ROTATION(obLocal_149, entityRotation, 2, true);
						flag = true;
					}
				}
			}
		
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obLocal_149, 0))
			{
				func_382();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(obLocal_149) && !CUTSCENE::IS_CUTSCENE_PLAYING() && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_149))
			{
				flag3 = false;
				pedNearbyPeds = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
				i = 0;
			
				for (i = 0; i < pedNearbyPeds; i = i + 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(sizeAndPeds[i], false))
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(sizeAndPeds[i], "MP_COMMON_MISS", "HACK_INTRO", 3))
							flag3 = true;
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(sizeAndPeds[i], "MP_COMMON_MISS", "HACK_LOOP", 3))
							flag3 = true;
				}
			
				if (Global_17)
					flag3 = true;
			
				vector2 = { 0.6f, 0.6f, 0.8f };
			
				if (func_366() || func_365(PLAYER::PLAYER_ID()) || func_375(PLAYER::PLAYER_ID()) || func_364())
					vector2 = { 1f, 1f, 0.9f };
				else if (func_363())
					vector2 = { 0.75f, 0.55f, 1.25f };
			
				flag4 = func_362(PLAYER::PLAYER_ID());
				flag5 = true;
			
				if (func_363() || func_361())
					flag5 = func_360(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_149), 90f);
			
				if (!flag3 && !Global_33569 && !func_359(0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && !func_358() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vector, vector2, false, true, 1) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(obLocal_149) && !IS_BIT_SET(Global_2621446, 15) && !func_357() && !(Global_79768 && func_356()) && !(!Global_79768 && func_355()) && !(Global_79768 && IS_BIT_SET(Global_4718592.f_15, 24) && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !(Global_79768 && func_354() && func_353()) && !(Global_79768 && func_352(PLAYER::PLAYER_ID()) == 5) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !Global_78526 && !func_349() && !func_348() && flag5 && !func_345() && !func_344())
				{
					if (!func_343(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_260.f_36) && !func_342(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_260.f_36, -1) && !func_341(PLAYER::PLAYER_ID()))
					{
						if (bLocal_141 != flag4)
						{
							if (func_376(PLAYER::PLAYER_ID()) || func_340(PLAYER::PLAYER_ID()) || func_375(PLAYER::PLAYER_ID()))
							{
								if (iLocal_138 != -1)
									func_339(&iLocal_138);
							
								if (func_337())
									HUD::CLEAR_HELP(true);
							}
						}
					
						bLocal_141 = flag4;
					
						if (iLocal_138 == -1)
							if (flag)
								_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "MPLA_BILL" /*Unable to use the laptop until utility charge is paid.*/, 0, 0, 0, 0);
							else if (func_366())
								func_335(flag4);
							else if (func_332())
								func_329(flag4);
							else if (func_364())
								func_319(flag4);
							else if (func_363())
								func_317(flag4);
							else
								_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "BROWSEINPUTTRIG" /*Press ~INPUT_CONTEXT~ to browse the internet on this computer.*/, 0, 0, 0, 0);
					}
				
					if (iLocal_138 != -1 && func_315(iLocal_138, true) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_314())
					{
						if (iLocal_138 != -1)
							func_339(&iLocal_138);
					
						if (!flag)
						{
							if (func_313() || func_312() || func_311())
								func_306();
						
							if (func_366())
							{
								func_33(0, flag4);
								func_32(0, 1);
							}
							else if (func_364())
							{
								func_33(0, flag4);
								func_32(0, 3);
							}
							else if (func_332())
							{
								func_33(1, flag4);
								func_32(0, 2);
							}
							else if (func_363())
							{
								func_32(8, 0);
							}
							else
							{
								func_32(0, 0);
							}
						
							if (!bLocal_139)
							{
								func_25();
								bLocal_139 = true;
							}
						
							flag6 = true;
						
							if (func_313() || func_312() || func_311())
							{
								func_24(&uLocal_145, false, false);
							
								while (!func_374(&uLocal_145, 500, false))
								{
									func_367(0);
									BUILTIN::WAIT(0);
								}
							
								_STOPWATCH_DESTROY(&uLocal_145);
							}
						
							while (flag6)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(obLocal_149) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(obLocal_149, true), 1.5f, 1.5f, 4f, false, true, 1))
									Global_76858 = 1;
							
								if (func_313() || func_312() || func_341(PLAYER::PLAYER_ID()) || func_311())
									if (!func_23() && !Global_78526)
										flag6 = false;
								else if (func_23() || Global_76858)
									flag6 = false;
							
								if (func_313())
									func_367(0);
							
								BUILTIN::WAIT(0);
							}
						
							if (func_313() || func_312() || func_311())
								func_9();
						
							func_367(0);
							_STOPWATCH_DESTROY(&uLocal_147);
							bLocal_139 = false;
						}
					}
					else if (iLocal_138 != -1 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_314() && func_311())
					{
						if (iLocal_138 != -1)
						{
							func_339(&iLocal_138);
							func_8();
							func_6();
						}
					
						func_306();
						MISC::SET_BIT(&(Global_1946439.f_4), 28);
					
						while (IS_BIT_SET(Global_1946439.f_4, 28))
						{
							BUILTIN::WAIT(0);
						}
					
						func_9();
						func_5();
						func_4();
						func_367(0);
					}
				}
				else
				{
					if (iLocal_138 != -1)
						func_339(&iLocal_138);
				
					if (func_376(PLAYER::PLAYER_ID()) || func_340(PLAYER::PLAYER_ID()))
						if (func_337())
							HUD::CLEAR_HELP(true);
				
					if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
						if (func_1())
							flag2 = false;
				}
			}
			else if (iLocal_138 != -1)
			{
				func_339(&iLocal_138);
			}
		}
		else
		{
			if (iLocal_138 != -1)
				func_339(&iLocal_138);
		
			flag2 = false;
		}
	
		BUILTIN::WAIT(0);
	}

	if (flag)
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(name))
			HUD::RELEASE_NAMED_RENDERTARGET(name);

	return;
}

BOOL func_1() // Position - 0x88D (2189)
{
	Hash entityModel;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_149);
	
		if (func_3(entityModel))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				entityCoords2 = { ENTITY::GET_ENTITY_COORDS(obLocal_149, true) };
				return BUILTIN::VDIST2(entityCoords, entityCoords2) > 10000f;
			}
		}
		else
		{
			return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_149);
		}
	}

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x8F5 (2293)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_3(Hash hParam0) // Position - 0x916 (2326)
{
	if (hParam0 == joaat("prop_laptop_lester"))
		return true;

	return false;
}

void func_4() // Position - 0x92D (2349)
{
	if (IS_BIT_SET(Global_1668463, 4))
		MISC::CLEAR_BIT(&Global_1668463, 4);

	return;
}

void func_5() // Position - 0x947 (2375)
{
	if (Global_2672967.f_1023.f_10)
		Global_2672967.f_1023.f_10 = 0;

	return;
}

void func_6() // Position - 0x965 (2405)
{
	func_7();

	if (!IS_BIT_SET(Global_1668463, 4))
		MISC::SET_BIT(&Global_1668463, 4);

	return;
}

void func_7() // Position - 0x984 (2436)
{
	MISC::CLEAR_BIT(&Global_1668463, 0);
	MISC::CLEAR_BIT(&Global_1668463, 1);
	return;
}

void func_8() // Position - 0x99E (2462)
{
	if (!Global_2672967.f_1023.f_10)
		Global_2672967.f_1023.f_10 = 1;

	return;
}

void func_9() // Position - 0x9BD (2493)
{
	var animDict;

	if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(obLocal_149))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PLAYER::PLAYER_PED_ID());
				
					if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
			
				if (func_10(1, &animDict))
					STREAMING::REMOVE_ANIM_DICT(&animDict);
			
				if (func_10(2, &animDict))
				{
					if (iLocal_150 != 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
							iLocal_151 = -1;
						}
					
						iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obLocal_149, 2), 2, false, false, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						STREAMING::REMOVE_ANIM_DICT(&animDict);
					}
				}
			}
		}
	}

	Global_1946292 = 0;
	return;
}

BOOL func_10(int iParam0, char* sParam1) // Position - 0xAB1 (2737)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	if (!func_376(PLAYER::PLAYER_ID()) && !func_375(PLAYER::PLAYER_ID()) && !func_11(PLAYER::PLAYER_ID()))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam1, "anim@amb@warehouse@laptop@", 64);
	return true;
}

BOOL func_11(Player plParam0) // Position - 0xB19 (2841)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658019[plParam0 /*467*/].f_324.f_8 != -1)
				return func_12(Global_2658019[plParam0 /*467*/].f_324.f_8) == 13;

	return false;
}

int func_12(int iParam0) // Position - 0xB60 (2912)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 177:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 178:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	
		case 174:
		case 175:
		case 176:
			return 34;
	}

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x10AF (4271)
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672967.f_3)
					return Global_2672967.f_2;
				else if (Global_2658019[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x110F (4367)
{
	return -1;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x1118 (4376)
{
	if (Global_1575060 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_22())
		return true;

	if (Global_2699147)
		return true;

	if (func_21())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_19())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x119C (4508)
{
	switch (func_18())
	{
		case 0:
			return func_17();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_17() // Position - 0x11CF (4559)
{
	switch (Global_2699255)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_18() // Position - 0x11F3 (4595)
{
	return Global_33298;
}

BOOL func_19() // Position - 0x11FE (4606)
{
	return Global_2684748.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x120D (4621)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_21() // Position - 0x1224 (4644)
{
	return Global_2696555;
}

BOOL func_22() // Position - 0x1230 (4656)
{
	return Global_2684748.f_695;
}

BOOL func_23() // Position - 0x123F (4671)
{
	return Global_76855;
}

void func_24(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x124B (4683)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*uParam0 = MISC::GET_GAME_TIMER();

	uParam0->f_1 = 1;
	return;
}

void func_25() // Position - 0x1288 (4744)
{
	if (func_31() || func_30())
	{
		func_29();
		func_26();
	}

	return;
}

void func_26() // Position - 0x12A9 (4777)
{
	if (!_IS_FMMC_ACTIVE() && !func_27() && Global_2685689)
		Global_4718592.f_138116 = 0;

	return;
}

BOOL func_27() // Position - 0x12D7 (4823)
{
	return Global_2684748.f_693;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x12E6 (4838)
{
	return Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_185 != 0;
}

void func_29() // Position - 0x12FD (4861)
{
	Global_2684748.f_758 = 1;
	return;
}

BOOL func_30() // Position - 0x130D (4877)
{
	return Global_2684748.f_737;
}

BOOL func_31() // Position - 0x131C (4892)
{
	return IS_BIT_SET(Global_2684748.f_2, 11);
}

void func_32(int iParam0, int iParam1) // Position - 0x132D (4909)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_76969 = iParam0;
	flag = iParam1 == 1;
	flag2 = iParam1 == 2;
	flag3 = iParam1 == 3;

	switch (Global_76969)
	{
		case 3:
			Global_76967 = 0;
			break;
	
		case 4:
			Global_76967 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0)
	{
		if (flag)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (flag2)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0)
	{
		if (flag3)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return;
	}

	if (Global_79768 && func_356())
		return;

	if (!Global_79768 && func_355())
		return;

	if (Global_79768)
	{
		Global_76820 = iParam1;
	}
	else if (flag)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (flag2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (flag3)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
			SCRIPT::REQUEST_SCRIPT("appImportExport");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
			SCRIPT::REQUEST_SCRIPT("appInternet");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appInternet", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}

	return;
}

void func_33(int iParam0, BOOL bParam1) // Position - 0x150D (5389)
{
	if (!bParam1 && !func_305(PLAYER::PLAYER_ID(), true) && func_304() < func_303() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_299(PLAYER::PLAYER_ID()))
		func_34(true, iParam0, 375994962);

	return;
}

void func_34(BOOL bParam0, int iParam1, int iParam2) // Position - 0x155C (5468)
{
	var unk;

	func_147(true, true, iParam1, iParam2);

	if (bParam0)
	{
		if (func_146(91) || func_146(98))
			func_143();
	
		func_113();
		func_112(17);
		unk.f_3 = 514341487;
		unk.f_4 = iParam1;
	
		if (func_111(PLAYER::PLAYER_ID()) && iParam1 == 0)
			unk.f_4 = 100;
	
		func_109(unk, func_110(false, true));
		func_61();
	
		if (!func_111(PLAYER::PLAYER_ID()) && iParam1 != 1)
			_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(_CHAR_GANGAPP_SECUROSERV, "GB_TXTMSG_INIT2" /*Thank you for registering with SecuroServ as a VIP. Recruit your Protection Detail immediately to start feeling the benefits of having a troop of armed Bodyguards at your beck and call. But what now? Take your operation to the next level by getting an office on dynasty8realestate.com, of course! You'll become a CEO with access to Special Cargo, Vehicle Cargo, Special Vehicle Work and many other benefits.*/, 2, 0, 0, 0, 0, true, 0, 1);
	}

	return;
}

int _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x15F8 (5624)
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	MISC::CLEAR_BIT(&Global_9075, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_37(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9816 = iParam6;
			Global_9719[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9796 = echParam0;
			MISC::SET_BIT(&Global_9075, 1);
			MISC::SET_BIT(&Global_9075, 7);
		}
	
		return 1;
	}

	return 0;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x1687 (5767)
{
	return Global_2241[character /*29*/].f_3;
}

int func_37(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x169A (5786)
{
	int num;
	int num2;

	iParam13 > 99;
	MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	num = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_21239 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_21239 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_21239 == CHAR_FRANKLIN)
				num = 0;
			else
				num = 1;
			break;
	
		default:
			num = 0;
			break;
	}

	if (num == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				return 0;
	
		if (Global_114370.f_14055[Global_21239 /*20*/].f_17 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_53() == 0)
	{
		func_51();
		return 0;
	}

	func_50(Global_23670);
	TEXT_LABEL_ASSIGN_STRING(&Global_114370.f_14145[Global_23670 /*104*/], sParam1, 64);
	Global_114370.f_14145[Global_23670 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114370.f_14145[Global_23670 /*104*/].f_24 = iParam2;
	}

	Global_114370.f_14145[Global_23670 /*104*/].f_25 = iParam7;
	Global_114370.f_14145[Global_23670 /*104*/].f_26 = iParam8;
	Global_114370.f_14145[Global_23670 /*104*/].f_29 = iParam9;
	Global_114370.f_14145[Global_23670 /*104*/].f_30 = iParam12;
	Global_114370.f_14145[Global_23670 /*104*/].f_31 = iParam11;
	Global_114370.f_14145[Global_23670 /*104*/].f_28 = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14145[Global_23670 /*104*/].f_33), sParam4, 64);
	Global_114370.f_14145[Global_23670 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14145[Global_23670 /*104*/].f_50), sParam5, 64);
	Global_114370.f_14145[Global_23670 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14145[Global_23670 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14145[Global_23670 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_9075, 10))
	{
		Global_114370.f_14145[Global_23670 /*104*/].f_99[0] = 1;
		Global_114370.f_14145[Global_23670 /*104*/].f_99[1] = 1;
		Global_114370.f_14145[Global_23670 /*104*/].f_99[2] = 1;
		Global_9815 = 4;
		func_49(0);
		func_49(2);
		func_49(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_114370.f_14145[Global_23670 /*104*/].f_99[Global_21239] = 1;
				break;
		
			case 0:
				Global_114370.f_14145[Global_23670 /*104*/].f_99[0] = 1;
				break;
		
			case 2:
				Global_114370.f_14145[Global_23670 /*104*/].f_99[2] = 1;
				break;
		
			case 1:
				Global_114370.f_14145[Global_23670 /*104*/].f_99[1] = 1;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_21239)
			{
				case CHAR_MICHAEL:
					func_49(0);
					Global_9815 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_49(1);
					Global_9815 = 1;
					break;
			
				case CHAR_TREVOR:
					func_49(2);
					Global_9815 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_49(3);
					Global_9815 = 3;
					break;
			
				default:
					Global_9815 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_9075, 10))
		{
			Global_114370.f_14055[0 /*20*/].f_17 = 1;
			Global_114370.f_14055[1 /*20*/].f_17 = 1;
			Global_114370.f_14055[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114370.f_14055[Global_21239 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114370.f_14055[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114370.f_14055[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114370.f_14055[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_23672[Global_23670] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21182)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21228, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21239)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_21228, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_21228, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_21228, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21228, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9914[Global_21239 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_48())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21228, true);
	}

	if (!Global_21462 && !IS_BIT_SET(Global_9077, 9))
	{
		if (Global_21239.f_1 == 6)
		{
			func_47(Global_21220, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_43(1);
			func_47(Global_21220, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21219), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1975629 != -1 && echParam0 == Global_1975629)
		num2 = 1;

	func_38(echParam0, sParam1, num2, func_42(PLAYER::PLAYER_ID()));
	return 1;
}

void func_38(eCharacter echParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0x1B7D (7037)
{
	eCharacter character;

	if (!func_39())
		return;

	character = echParam0;
	character.f_1 = 1654525105;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = uParam3;
	character.f_6 = Global_1975612.f_7;
	character.f_7 = Global_1975612.f_8;
	character.f_8 = Global_1975612.f_9;
	character.f_9 = Global_1975612.f_10;
	character.f_10 = Global_1975612.f_11;
	character.f_11 = Global_1975612.f_12;
	character.f_12 = Global_1975612.f_13;
	character.f_13 = Global_1975612.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1975629 = -1;

	return;
}

BOOL func_39() // Position - 0x1C18 (7192)
{
	if (!Global_262145.f_28434)
		return false;

	if (!Global_79768)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_40(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_40(Player plParam0) // Position - 0x1C7B (7291)
{
	return func_41(plParam0, 20);
}

BOOL func_41(Player plParam0, int iParam1) // Position - 0x1C8B (7307)
{
	return IS_BIT_SET(Global_1888882[plParam0 /*611*/].f_10.f_4, iParam1);
}

var func_42(Player plParam0) // Position - 0x1CA3 (7331)
{
	return Global_1845274[plParam0 /*877*/].f_198.f_6;
}

void func_43(int iParam0) // Position - 0x1CB8 (7352)
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_23671 = 0;
	Global_9714 = iParam0;
	func_46();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_381(14))
		{
			while (num < 36)
			{
				if (iParam0 == Global_9082[num /*15*/].f_11)
				{
					if (i == Global_9082[num /*15*/].f_4)
					{
						if (Global_9676[i] == 0)
						{
							Global_9638[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_9076, 3))
								{
									value = 42;
									Global_21465 = 1;
								}
								else
								{
									value = 255;
									Global_21465 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21220, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696550)
								if (num == 14)
									func_44(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23665), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
						
							Global_9676[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 36)
			{
				if (iParam0 == Global_9082[num /*15*/].f_11)
				{
					if (i == Global_9082[num /*15*/].f_4)
					{
						if (Global_9676[i] == 0)
						{
							Global_9638[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114370.f_14145[j /*104*/].f_24 != 0)
										if (Global_114370.f_14145[j /*104*/].f_28 == 0)
											if (Global_114370.f_14145[j /*104*/].f_99[Global_21239] == 1)
												Global_23671 = Global_23671 + 1;
								}
							
								func_44(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23671), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79768)
								{
									value2 = 0;
									value2 = Global_4543039;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4543041[k /*296*/].f_24 != 0)
											if (Global_4543041[k /*296*/].f_28 == 0)
												if (Global_4543041[k /*296*/].f_291[Global_21239] == 1)
													value2 = value2 + 1;
									}
								
									func_44(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value2), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21239)
									{
										case CHAR_MICHAEL:
											value3 = Global_45618;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45619;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45620;
											break;
									
										default:
											break;
									}
								
									func_44(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value3), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_44(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23665), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21220, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9081);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_9076, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21220, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_9076, 3))
								{
									value5 = 42;
									Global_21465 = 1;
								}
								else
								{
									value5 = 255;
									Global_21465 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21220, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21220, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 25 && MISC::ARE_STRINGS_EQUAL(&Global_9082[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_9076, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21220, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9082[num /*15*/].f_10 == 57 && num == 25)
							{
								value6 = 0;
								value6 = Global_1881909.f_1;
								func_44(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value6), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_44(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9676[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_44(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x223F (8767)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_45(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_45(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_45(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_45(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_45(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_45(const char* sParam0) // Position - 0x22F2 (8946)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_46() // Position - 0x2304 (8964)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9676[i] = 0;
	}

	return;
}

void func_47(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2327 (8999)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_48() // Position - 0x238A (9098)
{
	return Global_1575088;
}

void func_49(int iParam0) // Position - 0x2396 (9110)
{
	var unk;
	var unk2;

	unk = Global_114370.f_14055[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_50(int iParam0) // Position - 0x23B5 (9141)
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_114370.f_14145[iParam0 /*104*/].f_18 = clockSeconds;
	Global_114370.f_14145[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_114370.f_14145[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_114370.f_14145[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_114370.f_14145[iParam0 /*104*/].f_18.f_4 = num;
	Global_114370.f_14145[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_51() // Position - 0x2447 (9287)
{
	int num;
	int num2;
	int num3;

	if (Global_79768)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	num3 = num;
	Global_23670 = 34;
	Global_114370.f_14145[Global_23670 /*104*/].f_18 = -1;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_1 = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_2 = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_3 = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_52(Global_114370.f_14145[num3 /*104*/].f_18, Global_114370.f_14145[Global_23670 /*104*/].f_18))
			Global_23670 = num3;
	
		num3 = num3 + 1;
	}

	Global_114370.f_14145[Global_23670 /*104*/].f_24 = 1;
	return;
}

BOOL func_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x2512 (9490)
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

int func_53() // Position - 0x25FD (9725)
{
	int num;
	int num2;
	int i;

	if (Global_79768)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_114370.f_14145[i /*104*/].f_24 == 0)
		{
			Global_23670 = i;
			return 1;
		}
	}

	i = num;
	Global_23670 = 34;
	Global_114370.f_14145[Global_23670 /*104*/].f_18 = -1;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_1 = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_2 = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_3 = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_114370.f_14145[i /*104*/].f_24 == 0 || Global_114370.f_14145[i /*104*/].f_24 == 1)
			if (!func_52(Global_114370.f_14145[i /*104*/].f_18, Global_114370.f_14145[Global_23670 /*104*/].f_18))
				Global_23670 = i;
	
		Global_114370.f_14145[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_23670 == 34)
		return 0;

	Global_114370.f_14145[Global_23670 /*104*/].f_99[0] = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_99[1] = 0;
	Global_114370.f_14145[Global_23670 /*104*/].f_99[2] = 0;
	return 1;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x2765 (10085)
{
	if (func_381(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28055[0 /*29*/])
				Global_21239 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28055[1 /*29*/])
				Global_21239 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28055[2 /*29*/])
				Global_21239 = CHAR_TREVOR;
			else
				Global_21239 = CHAR_MICHAEL;
	}
	else
	{
		Global_21239 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21239 == _CHAR_NULL)
			Global_21239 = CHAR_MULTIPLAYER;
	
		if (Global_79768)
			Global_21239 = CHAR_MULTIPLAYER;
	
		if (Global_21239 > CHAR_MULTIPLAYER)
			Global_21239 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2807 (10247)
{
	func_56();
	return Global_114370.f_2367.f_539.f_4321;
}

void func_56() // Position - 0x2820 (10272)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_57(character) && !func_381(14) || Global_113318)
			{
				if (Global_114370.f_2367.f_539.f_4321 != character && func_57(Global_114370.f_2367.f_539.f_4321))
					Global_114370.f_2367.f_539.f_4322 = Global_114370.f_2367.f_539.f_4321;
			
				Global_114370.f_2367.f_539.f_4323 = character;
				Global_114370.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114370.f_2367.f_539.f_4323 = Global_114370.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114370.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_57(eCharacter echParam0) // Position - 0x291D (10525)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2929 (10537)
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2966 (10598)
{
	if (func_57(character))
		return func_60(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_60(eCharacter echParam0) // Position - 0x298B (10635)
{
	return Global_2241[echParam0 /*29*/];
}

void func_61() // Position - 0x299A (10650)
{
	if (!func_106() && func_76() && func_74(PLAYER::PLAYER_ID()))
		if (func_71())
			_THEFEED_SHOW_MESSAGE("GB_INFO_MC_L" /*There are players looking to join a MC in this session.*/, false);
		else
			_THEFEED_SHOW_MESSAGE("GB_INFO_LFG" /*There are players looking for work as Bodyguards in this session.*/, false);

	return;
}

int _THEFEED_SHOW_MESSAGE(char* sParam0, BOOL bParam1) // Position - 0x29DE (10718)
{
	int num;
	int num2;

	num = -1;
	num2 = 1;

	if (bParam1)
		num2 = 2;

	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_63(0, sParam0, num2, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return num;
}

void func_63(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x2A16 (10774)
{
	int num;

	if (!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_66(PLAYER::PLAYER_ID(), 0))
		return;

	num = func_64(iParam2);

	if (num >= 0 && num < 5)
	{
		Global_1940171.f_5[num /*53*/] = iParam0;
		Global_1940171.f_5[num /*53*/].f_1 = iParam2;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1940171.f_5[num /*53*/].f_8), sParam1, 16);
		Global_1940171.f_5[num /*53*/].f_2[0] = iParam4;
		Global_1940171.f_5[num /*53*/].f_2[1] = iParam5;
		Global_1940171.f_5[num /*53*/].f_2[2] = iParam6;
		Global_1940171.f_5[num /*53*/].f_7 = iParam7;
		Global_1940171.f_5[num /*53*/].f_6 = iParam8;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1940171.f_5[num /*53*/].f_12), sParam3, 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1940171.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1940171.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1940171.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
	}

	return;
}

int func_64(int iParam0) // Position - 0x2B1E (11038)
{
	int i;

	for (i = 0; i <= Global_1940171 - 1; i = i + 1)
	{
		if (iParam0 > Global_1940171.f_5[i /*53*/].f_1)
		{
			func_65(i);
			return i;
		}
	}

	Global_1940171 = Global_1940171 + 1;

	if (Global_1940171 > 5)
	{
		Global_1940171 = 5;
		return Global_1940171;
	}

	return Global_1940171 - 1;
}

void func_65(int iParam0) // Position - 0x2B80 (11136)
{
	int i;

	for (i = 4; i >= iParam0 + 1; i = i + -1)
	{
		Global_1940171.f_5[i /*53*/] = { Global_1940171.f_5[i - 1 /*53*/] };
	}

	return;
}

BOOL func_66(Player plParam0, int iParam1) // Position - 0x2BB9 (11193)
{
	BOOL flag;

	if (!func_69(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_67(-1, false) == 8;
	else
		flag = Global_1845274[plParam0 /*877*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_67(int iParam0, BOOL bParam1) // Position - 0x2C12 (11282)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_68();

	if (Global_1575068[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574921[num2];
		bParam1;
	}

	return num;
}

int func_68() // Position - 0x2C53 (11347)
{
	return Global_1574927;
}

BOOL func_69(Player plParam0) // Position - 0x2C5F (11359)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x2C81 (11393)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

BOOL func_71() // Position - 0x2C92 (11410)
{
	return func_72(PLAYER::PLAYER_ID());
}

BOOL func_72(Player plParam0) // Position - 0x2CA2 (11426)
{
	return func_73(plParam0, 1);
}

BOOL func_73(Player plParam0, int iParam1) // Position - 0x2CB1 (11441)
{
	if (func_69(plParam0))
		if (func_69(Global_1888882[plParam0 /*611*/].f_10))
			if (Global_1888882[plParam0 /*611*/].f_10 == plParam0 && Global_1888882[plParam0 /*611*/].f_10.f_431 == iParam1)
				return 1;

	return 0;
}

BOOL func_74(Player plParam0) // Position - 0x2D00 (11520)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return false;

	if (func_66(plParam0, 0))
		return false;

	if (IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_140, 2) || IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_140, 5))
		return false;

	if (func_75(plParam0))
		return false;

	return true;
}

BOOL func_75(Player plParam0) // Position - 0x2D68 (11624)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_41(plParam0, 9);

	return false;
}

BOOL func_76() // Position - 0x2D86 (11654)
{
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (func_77(player))
			return true;
	}

	return false;
}

BOOL func_77(Player plParam0) // Position - 0x2DB7 (11703)
{
	int num;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (plParam0 != PLAYER::PLAYER_ID())
		{
			num = 0;
		
			if (func_105(true))
				if (func_104(plParam0, 9))
					num = 1;
			else if (func_41(plParam0, 15))
				num = 1;
		
			if (num && func_78(plParam0, 0, false))
				return true;
		}
	}

	return false;
}

int func_78(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x2E14 (11796)
{
	var gamerHandle;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return 0;

	if (func_66(plParam0, 0))
		return 0;

	if (func_102(plParam0))
		return 0;

	if (IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_140, 2) || IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_140, 5))
		return 0;

	if (func_101(plParam0))
		return 0;

	if (bParam2)
	{
		if (func_99(plParam0, plParam1, true))
			return 0;
	
		if (func_40(plParam0))
			return 0;
	
		if (func_97(plParam0, true))
			return 0;
	}
	else if (func_305(plParam0, true))
	{
		return 0;
	}

	if (func_96(plParam0))
		return 0;

	if (func_75(plParam0))
		return 0;

	if (func_299(plParam0))
		return 0;

	if (func_94(plParam0))
		return 0;

	if (func_91(plParam0))
		return 0;

	if (func_81(plParam0))
		return 0;

	if (!Global_1984997)
	{
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };
	
		if (IS_GAMER_HANDLE_VALID(gamerHandle) && !NETWORK::_NETWORK_HAS_PLAYER_PASSED_CHECK_TYPE(0, &gamerHandle))
			return 0;
	}

	return 1;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x2F48 (12104)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x2F58 (12120)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_81(Player plParam0) // Position - 0x2F6F (12143)
{
	if (func_89(plParam0))
		return true;

	if (func_82(plParam0))
		return true;

	return false;
}

BOOL func_82(Player plParam0) // Position - 0x2F92 (12178)
{
	if (func_83(plParam0, 339, -1))
		return true;

	return false;
}

BOOL func_83(Player plParam0, int iParam1, int iParam2) // Position - 0x2FAC (12204)
{
	Player player;

	if (func_87(plParam0) == iParam1)
	{
		if (iParam2 == -1)
		{
			return true;
		}
		else
		{
			player = func_86(plParam0);
		
			if (player != _INVALID_PLAYER_INDEX())
				return func_84(player) == iParam2;
		}
	}

	return false;
}

int func_84(Player plParam0) // Position - 0x2FEA (12266)
{
	if (func_85(plParam0, false))
		return Global_1888882[plParam0 /*611*/].f_10.f_182;

	return -1;
}

BOOL func_85(Player plParam0, BOOL bParam1) // Position - 0x300D (12301)
{
	if (func_69(plParam0))
		if (Global_1888882[plParam0 /*611*/].f_10.f_33 != -1 || bParam1 && Global_1888882[plParam0 /*611*/].f_10.f_32 != -1)
			return true;

	return false;
}

Player func_86(Player plParam0) // Position - 0x3051 (12369)
{
	return Global_1888882[plParam0 /*611*/].f_10.f_35;
}

int func_87(Player plParam0) // Position - 0x3066 (12390)
{
	if (func_88(plParam0, false))
		return Global_1888882[plParam0 /*611*/].f_10.f_32;

	return -1;
}

BOOL func_88(Player plParam0, BOOL bParam1) // Position - 0x3089 (12425)
{
	if (func_69(plParam0))
		if (Global_1888882[plParam0 /*611*/].f_10.f_32 != -1 || bParam1 && Global_1888882[plParam0 /*611*/].f_10.f_33 != -1)
			return true;

	return false;
}

BOOL func_89(Player plParam0) // Position - 0x30CD (12493)
{
	if (func_90(plParam0) == 339)
		return true;

	return false;
}

int func_90(Player plParam0) // Position - 0x30E6 (12518)
{
	if (func_69(plParam0))
		if (func_85(plParam0, false))
			return Global_1888882[plParam0 /*611*/].f_10.f_33;

	return -1;
}

BOOL func_91(Player plParam0) // Position - 0x3112 (12562)
{
	return func_92(func_93(plParam0));
}

BOOL func_92(int iParam0) // Position - 0x3124 (12580)
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_93(Player plParam0) // Position - 0x3139 (12601)
{
	return Global_1908496[plParam0 /*313*/].f_273;
}

BOOL func_94(Player plParam0) // Position - 0x314D (12621)
{
	if (func_66(plParam0, 0))
		return true;

	if (func_95())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658019[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_95() // Position - 0x318C (12684)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_96(Player plParam0) // Position - 0x319A (12698)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1888882[player /*611*/].f_1, 0);

	return false;
}

BOOL func_97(Player plParam0, BOOL bParam1) // Position - 0x31BD (12733)
{
	return func_98(plParam0, bParam1, 1);
}

int func_98(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x31CE (12750)
{
	Player player;

	if (!func_69(plParam0))
		return 0;

	if (!bParam1)
		if (func_73(plParam0, iParam2))
			return 0;

	player = Global_1888882[plParam0 /*611*/].f_10;

	if (func_69(player) && Global_1888882[player /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_99(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x322A (12842)
{
	if (func_69(plParam1))
	{
		if (!bParam2)
			if (func_100(plParam0, plParam1))
				return false;
	
		if (Global_1888882[plParam0 /*611*/].f_10 != _INVALID_PLAYER_INDEX())
			return plParam1 == Global_1888882[plParam0 /*611*/].f_10;
	}

	return false;
}

BOOL func_100(Player plParam0, Player plParam1) // Position - 0x3274 (12916)
{
	if (plParam1 != _INVALID_PLAYER_INDEX())
		if (plParam0 != _INVALID_PLAYER_INDEX())
			if (Global_1888882[plParam0 /*611*/].f_10 != _INVALID_PLAYER_INDEX())
				if (Global_1888882[plParam0 /*611*/].f_10 == plParam0)
					return plParam1 == plParam0;

	return false;
}

BOOL func_101(Player plParam0) // Position - 0x32B9 (12985)
{
	return func_41(plParam0, 30);
}

BOOL func_102(Player plParam0) // Position - 0x32C9 (13001)
{
	if (!func_41(plParam0, 2))
		return true;

	if (func_41(plParam0, 1))
		return true;

	if (func_103(plParam0) > 0)
		return true;

	return false;
}

int func_103(Player plParam0) // Position - 0x32FD (13053)
{
	return Global_1888882[plParam0 /*611*/].f_10.f_23;
}

BOOL func_104(Player plParam0, int iParam1) // Position - 0x3312 (13074)
{
	return IS_BIT_SET(Global_1888882[plParam0 /*611*/].f_10.f_5, iParam1);
}

BOOL func_105(BOOL bParam0) // Position - 0x332A (13098)
{
	return func_97(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_106() // Position - 0x333C (13116)
{
	int i;
	var string2;
	var string1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_11[i] == _INVALID_PLAYER_INDEX())
		{
			TEXT_LABEL_ASSIGN_STRING(&string1, "", 64);
			string1 = { func_107(func_108(i)) };
		
			if (MISC::ARE_STRINGS_EQUAL(&string1, &string2))
				return false;
		}
	}

	return true;
}

struct<16> func_107(int iParam0) // Position - 0x3396 (13206)
{
	return Global_2685690.f_3081.f_18[iParam0 /*16*/];
}

int func_108(int iParam0) // Position - 0x33AE (13230)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		default:
		
	}

	return 0;
}

void func_109(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15) // Position - 0x3404 (13316)
{
	hParam0 = -642704387;
	hParam0.f_1 = PLAYER::PLAYER_ID();

	if (!(iParam15 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &hParam0, 15, iParam15, hParam0);

	return;
}

int func_110(BOOL bParam0, BOOL bParam1) // Position - 0x3433 (13363)
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_66(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_111(Player plParam0) // Position - 0x3498 (13464)
{
	if (!func_69(plParam0))
		return false;

	return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_260.f_34, 26);
}

void func_112(int iParam0) // Position - 0x34BF (13503)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2740191.f_5272.f_7[num], offset);
	return;
}

void func_113() // Position - 0x34E8 (13544)
{
	var unk;
	int num;

	if (func_137(true) && !func_134(1))
		return;

	unk = { func_133(145, 147, -1) };
	num = 0;

	if (func_105(true))
	{
		unk = { func_133(47, 48, -1) };
		num = 1;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_131(PLAYER::PLAYER_ID(), false), 64);

	func_119(&unk, num, false);

	if (!func_118() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_116())
		func_115(28);
	else
		func_114(28);

	return;
}

void func_114(int iParam0) // Position - 0x357A (13690)
{
	MISC::SET_BIT(&(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_4), iParam0);
	return;
}

void func_115(int iParam0) // Position - 0x3597 (13719)
{
	MISC::CLEAR_BIT(&(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_4), iParam0);
	return;
}

BOOL func_116() // Position - 0x35B4 (13748)
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	if (func_117())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (func_118())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return true;

	return false;
}

BOOL func_117() // Position - 0x3625 (13861)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_118() // Position - 0x363B (13883)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_119(const char* sParam0, int iParam1, BOOL bParam2) // Position - 0x3651 (13905)
{
	if (bParam2)
	{
		if (func_105(true) || iParam1 == 1)
		{
			func_128(47, 48, sParam0, -1, true);
			func_127(3, sParam0);
		
			if (func_71() && iParam1 == 1)
				func_126(sParam0, bParam2);
		}
		else
		{
			func_128(145, 147, sParam0, -1, true);
			func_127(1, sParam0);
		
			if (func_353() && iParam1 == 0)
				func_120(sParam0, bParam2);
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_105), sParam0, 64);
	func_127(6, sParam0);
	Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();

	if (!func_118() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_116())
		func_115(28);
	else
		func_114(28);

	return;
}

void func_120(const char* sParam0, BOOL bParam1) // Position - 0x3721 (14113)
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_128(45, 46, sParam0, -1, true);
			func_127(0, sParam0);
			unk = { func_133(145, 147, -1) };
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
			{
				func_128(145, 147, sParam0, -1, true);
				func_127(1, sParam0);
			}
		
			if (func_125(true))
			{
				unk = { func_133(145, 147, -1) };
				func_121(-1408096250, unk, -81044133);
			}
		}
	}

	if (!func_118() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_116())
		func_115(28);
	else
		func_114(28);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_341), sParam0, 64);
		func_127(5, sParam0);
	}

	return;
}

void func_121(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17) // Position - 0x37EC (14316)
{
	BOOL isBoss;
	int bossType;
	int bossId1;
	int bossId2;
	int textSource;

	if (Global_1986342 == MISC::GET_FRAME_COUNT())
		return;

	Global_1986342 = MISC::GET_FRAME_COUNT();
	isBoss = func_353();
	bossType = 0;

	if (func_125(true))
		if (func_105(true))
			bossType = 1;
		else
			bossType = 2;

	bossId1 = func_123(_GET_BOSS_OF_LOCAL_PLAYER());
	bossId2 = func_122(_GET_BOSS_OF_LOCAL_PLAYER());
	textSource = iParam17;
	STATS::_PLAYSTATS_NAMED_USER_CONTENT(isBoss, bossType, bossId1, bossId2, iParam0, &uParam1, textSource);
	return;
}

int func_122(Player plParam0) // Position - 0x3856 (14422)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1888882[plParam0 /*611*/].f_10.f_8[1];
}

int func_123(Player plParam0) // Position - 0x387B (14459)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1888882[plParam0 /*611*/].f_10.f_8[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x38A0 (14496)
{
	return Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10;
}

BOOL func_125(BOOL bParam0) // Position - 0x38B5 (14517)
{
	return func_305(PLAYER::PLAYER_ID(), bParam0);
}

void func_126(const char* sParam0, BOOL bParam1) // Position - 0x38C7 (14535)
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_128(49, 50, sParam0, -1, true);
			func_127(2, sParam0);
		
			if (func_125(true))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
				func_121(-1629413369, unk, -81044133);
			}
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_357), sParam0, 64);
		func_127(7, sParam0);
	}

	if (!func_118() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_116())
		func_115(28);
	else
		func_114(28);

	return;
}

void func_127(int iParam0, const char* sParam1) // Position - 0x3963 (14691)
{
	Global_1985671[iParam0] = MISC::GET_HASH_KEY(sParam1);
	return;
}

void func_128(int iParam0, int iParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x3979 (14713)
{
	Hash statName;
	Hash statName2;
	var value;
	var value2;
	int lengthOfLiteralString;
	int length;

	statName = func_129(iParam0, iParam3);
	statName2 = func_129(iParam1, iParam3);

	if (statName != 0 && statName2 != 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&value, "", 32);
		TEXT_LABEL_ASSIGN_STRING(&value2, "", 32);
		lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
	
		if (lengthOfLiteralString > 0)
		{
			length = 10;
		
			if (lengthOfLiteralString < 10)
				length = lengthOfLiteralString;
		
			TEXT_LABEL_ASSIGN_STRING(&value, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, length, 31), 32);
		
			if (lengthOfLiteralString > 10)
				TEXT_LABEL_ASSIGN_STRING(&value2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, lengthOfLiteralString, 31), 32);
		}
	
		STATS::STAT_SET_STRING(statName, &value, bParam4);
		STATS::STAT_SET_STRING(statName2, &value2, bParam4);
	}

	return;
}

Hash func_129(int iParam0, int iParam1) // Position - 0x3A0C (14860)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_130(iParam1));
}

int func_130(int iParam0) // Position - 0x3A21 (14881)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_68();
	
		if (num2 > -1)
		{
			Global_2752424 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752424 = 1;
		}
	}

	return num;
}

const char* func_131(Player plParam0, BOOL bParam1) // Position - 0x3A55 (14933)
{
	if (!bParam1)
		if (func_97(plParam0, true))
			return func_132();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_132() // Position - 0x3A7C (14972)
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

struct<16> func_133(int iParam0, int iParam1, int iParam2) // Position - 0x3A8C (14988)
{
	Hash statHash;
	Hash statHash2;
	var unk;
	var unk17;

	statHash = func_129(iParam0, iParam2);
	statHash2 = func_129(iParam1, iParam2);
	TEXT_LABEL_ASSIGN_STRING(&unk, STATS::STAT_GET_STRING(statHash, -1), 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, STATS::STAT_GET_STRING(statHash2, -1), 32);
	TEXT_LABEL_APPEND_STRING(&unk, &unk17, 64);
	return unk;
}

BOOL func_134(int iParam0) // Position - 0x3AC9 (15049)
{
	int num;

	num = func_135(15548, -1);
	return IS_BIT_SET(num, iParam0);
}

BOOL func_135(int iParam0, int iParam1) // Position - 0x3AE0 (15072)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17296)
	{
		statHash = func_136(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_136(int iParam0, int iParam1) // Position - 0x3B0F (15119)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_130(iParam1));
}

BOOL func_137(BOOL bParam0) // Position - 0x3B24 (15140)
{
	if (bParam0)
		return func_139();

	return func_92(func_138());
}

int func_138() // Position - 0x3B40 (15168)
{
	return Global_1908496[PLAYER::PLAYER_ID() /*313*/].f_273;
}

BOOL func_139() // Position - 0x3B56 (15190)
{
	return func_141(526, -1) || unk_0xB233964AC562A357() && func_140() != 0 && !func_134(0);
}

int func_140() // Position - 0x3B86 (15238)
{
	return unk_0xA0A0D77ECEDD4136();
}

BOOL func_141(int iParam0, int iParam1) // Position - 0x3B92 (15250)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_142(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_142(int iParam0, int iParam1) // Position - 0x3BB6 (15286)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_130(iParam1));
}

void func_143() // Position - 0x3BCB (15307)
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_2672967.f_2590[i /*80*/].f_2 != 0)
		{
			Global_2672967.f_2590[i /*80*/].f_2 = 5;
			func_144(&(Global_2672967.f_2590[i /*80*/].f_69), 1);
		}
	}

	return;
}

void func_144(var uParam0, int iParam1) // Position - 0x3C16 (15382)
{
	func_145(uParam0, iParam1);
	return;
}

void func_145(var uParam0, int iParam1) // Position - 0x3C26 (15398)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_146(int iParam0) // Position - 0x3C37 (15415)
{
	return Global_2672967.f_2590[0 /*80*/].f_1 == iParam0;
}

void func_147(BOOL bParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3C4E (15438)
{
	var userID;
	int cloudTimeAsInt;
	int num;
	var unk6;
	var unk22;
	var unk23;
	const char* userid;
	var unk24;
	BOOL flag;
	int address;

	if (!func_296())
		return;

	num = 1;

	if (func_111(PLAYER::PLAYER_ID()))
		num = 2;

	if (iParam2 == 1)
		num = 3;

	if (Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			unk6 = { func_294(iParam2) };
			STATS::START_BEING_BOSS(num, &unk6, iParam3);
			func_291(false);
			func_289(false);
			func_115(21);
			func_115(22);
			Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_469 = num;
		}
	
		Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10 = PLAYER::PLAYER_ID();
		Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_431 = iParam2;
		Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_468 = iParam2;
		STATS::GET_BOSS_GOON_UUID(func_68(), &unk22, &unk23);
		func_288(unk22, unk23);
		userid = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &userID);
		TEXT_LABEL_ASSIGN_STRING(&unk24, userid, 64);
		func_287(unk24);
		func_286();
	
		if (func_135(13616, -1) <= 0)
			cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		else
			cloudTimeAsInt = func_135(13616, -1) - 43200;
	
		func_283(cloudTimeAsInt);
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", INT))
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
	
		Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_24 = -1;
		Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_25 = -1;
		Global_2740191.f_5272.f_227 = -1;
		func_277();
		func_269(12, 0, true);
	
		if (bParam0)
			func_112(0);
	
		if (Global_2740191.f_5272.f_263 != _INVALID_PLAYER_INDEX())
			Global_2740191.f_5272.f_263 = _INVALID_PLAYER_INDEX();
	
		if (IS_BIT_SET(Global_2740191.f_1872, 15))
			MISC::CLEAR_BIT(&(Global_2740191.f_1872), 15);
	
		if (func_268(15))
			func_267(15);
	
		if (!func_266() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_265();
			func_264(2);
		}
	
		func_263(13656, 2, -1, true);
		func_115(31);
		func_113();
		func_262();
		func_261();
		func_260();
		func_226();
	
		if (iParam2 != 1)
		{
			if (!func_225(82, 3))
			{
				flag = false;
				address = func_135(13613, -1);
			
				if (!IS_BIT_SET(address, 11))
				{
					MISC::SET_BIT(&address, 11);
					func_263(13613, address, -1, true);
					flag = true;
				}
			
				func_219(82, 3, flag);
			}
		}
	
		if (iParam2 == 1)
			STATS::PLAYSTATS_CHANGE_MC_ROLE(func_123(_GET_BOSS_OF_LOCAL_PLAYER()), func_122(_GET_BOSS_OF_LOCAL_PLAYER()), func_218(), func_217(), Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_432, 4, Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_470);
	
		if (bParam1)
			if (iParam2 == 0)
				func_121(-1408096250, func_294(iParam2), -81044133);
			else
				func_121(-1629413369, func_294(iParam2), -81044133);
	}

	if (iParam2 == 1)
		if (!_STAT_GET_PACKED_BOOL(36871, -1))
			func_148(36871, true);
	else if (num == 2)
		if (!_STAT_GET_PACKED_BOOL(36888, -1))
			func_148(36888, true);

	return;
}

void func_148(int iParam0, BOOL bParam1) // Position - 0x3F44 (16196)
{
	BOOL flag;
	int num;

	if (*Global_262145.f_35149)
	{
		_STAT_SET_PACKED_BOOL(iParam0, bParam1, -1);
		return;
	}

	flag = true;
	num.f_2 = -1;
	num = func_214(iParam0);

	if (!func_213(num, bParam1 == _STAT_GET_PACKED_BOOL(iParam0, -1)))
	{
		flag = false;
	}
	else
	{
		num.f_1 = func_212(num);
	
		if (num.f_1 == 4)
			flag = false;
	
		if (flag && !func_210(iParam0, &num))
			flag = false;
	}

	_STAT_SET_PACKED_BOOL(iParam0, bParam1, -1);

	if (flag)
		func_149(&num);

	return;
}

void func_149(var uParam0) // Position - 0x3FD4 (16340)
{
	uParam0->f_6 = func_193(*uParam0, uParam0->f_2);

	if (uParam0->f_6 > uParam0->f_2.f_1)
	{
		func_187(*uParam0);
	
		if (uParam0->f_2.f_1 == 0 && uParam0->f_6 > 0 && uParam0->f_2.f_2 > 1)
			func_185(uParam0->f_2);
	}

	if (uParam0->f_6 >= uParam0->f_2.f_2)
	{
		func_181(uParam0->f_2);
	
		if (func_173(*uParam0, uParam0->f_1, false, false))
		{
			func_159(*uParam0, uParam0->f_1);
			uParam0->f_7 = 1;
		
			if (!Global_2740191.f_7134.f_1 && func_212(*uParam0) >= uParam0->f_1)
			{
				Global_2740191.f_7134.f_1 = 1;
				Global_2740191.f_7134.f_2 = 1;
			}
		
			func_156();
		}
	
		func_155(*uParam0);
	}
	else if (func_150(uParam0))
	{
		func_155(*uParam0);
	}

	return;
}

BOOL func_150(var uParam0) // Position - 0x40BA (16570)
{
	var unk;
	BOOL flag;

	unk = 10;
	flag = false;
	func_154(*uParam0, uParam0->f_2, &unk, &flag);

	if (uParam0->f_6 <= uParam0->f_2.f_1)
		return false;

	if (!flag)
		if (func_153(&unk, uParam0->f_2.f_1, uParam0->f_6, &(uParam0->f_2.f_3)))
			if (func_151(*uParam0, uParam0->f_2, uParam0->f_2.f_3))
				return false;
		else
			return false;

	return true;
}

BOOL func_151(var uParam0, var uParam1, var uParam2) // Position - 0x412A (16682)
{
	int num;

	num = func_152(uParam0, uParam1, uParam2);

	if (num != 54820)
		return _STAT_GET_PACKED_BOOL(num, -1);

	return false;
}

int func_152(int iParam0, int iParam1, int iParam2) // Position - 0x4152 (16722)
{
	switch (iParam0)
	{
		case 18:
			switch (iParam1)
			{
				case 196:
					switch (iParam2)
					{
						case 0:
							return 41871;
					
						case 1:
							return 41872;
					
						case 2:
							return 41873;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 170:
					switch (iParam2)
					{
						case 0:
							return 41984;
					
						case 1:
							return 41985;
					
						case 2:
							return 41986;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 157:
					switch (iParam2)
					{
						case 0:
							return 41990;
					
						case 1:
							return 41991;
					
						case 2:
							return 41992;
					
						case 3:
							return 41993;
					}
					break;
			}
			break;
	}

	return 54820;
}

BOOL func_153(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x426B (17003)
{
	int num;
	int i;

	num = 0;
	i = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		num = uParam0->[i];
	
		if (num != 0)
		{
			if (iParam1 < num && iParam2 >= num)
			{
				*uParam3 = i;
				return true;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

void func_154(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x42BD (17085)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_3[0] > 0)
		{
			for (j = 0; j < 10; j = j + 1)
			{
				uParam2->[j] = Global_1985099.f_1[i /*14*/].f_3[j];
			}
		
			return;
		}
	}

	uParam2->[0] = 1;

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 82:
					*uParam3 = 1;
					break;
			
				case 76:
					uParam2->[0] = 10;
					break;
			
				case 77:
					uParam2->[0] = 100000;
					break;
			
				case 79:
					uParam2->[0] = 500000;
					break;
			
				case 81:
					uParam2->[0] = 14;
					break;
			
				case 83:
					uParam2->[0] = 2000000;
					break;
			
				case 84:
					uParam2->[0] = 500000;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 88:
				case 89:
				case 91:
				case 96:
					*uParam3 = 1;
					break;
			
				case 90:
					uParam2->[0] = 25000;
					break;
			
				case 92:
					uParam2->[0] = 2;
					break;
			
				case 94:
					uParam2->[0] = 9;
					break;
			
				case 95:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 97:
					uParam2->[0] = 100000;
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 4:
				case 6:
					*uParam3 = 1;
					break;
			
				case 5:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 101:
				case 102:
					*uParam3 = 1;
					break;
			
				case 103:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					uParam2->[3] = 250000;
					break;
			
				case 104:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 105:
					uParam2->[0] = 3;
					break;
			
				case 106:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 107:
					uParam2->[0] = 10;
					break;
			
				case 108:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					uParam2->[3] = 24;
					break;
			
				case 109:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					break;
			
				case 110:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 12:
					*uParam3 = 1;
					break;
			
				case 13:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			
				case 15:
					uParam2->[0] = 9;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 116:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					uParam2->[3] = 250000;
					break;
			
				case 117:
				case 118:
				case 122:
					*uParam3 = 1;
					break;
			
				case 120:
					uParam2->[0] = 10;
					break;
			
				case 121:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					uParam2->[3] = 2500000;
					break;
			
				case 123:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					uParam2->[3] = 2500000;
					uParam2->[4] = 5000000;
					uParam2->[5] = 10000000;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 301:
					*uParam3 = 1;
					break;
			
				case 302:
					uParam2->[0] = 15;
					break;
			
				case 303:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			
				case 304:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 18:
				case 20:
				case 21:
				case 22:
				case 23:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
					break;
			
				case 183:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 184:
					*uParam3 = 1;
					break;
			
				case 185:
					*uParam3 = 1;
					break;
			
				case 186:
					*uParam3 = 1;
					break;
			
				case 187:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 188:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
				case 325:
				case 327:
				case 328:
					break;
			
				case 324:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			
				case 326:
					uParam2->[0] = 10;
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 329:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					uParam2->[3] = 200;
					uParam2->[4] = 250;
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
				case 339:
				case 345:
					break;
			
				case 340:
					*uParam3 = 1;
					break;
			
				case 341:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 342:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					break;
			
				case 343:
					*uParam3 = 1;
					break;
			
				case 344:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					*uParam3 = 1;
					break;
			
				case 125:
					break;
			
				case 126:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 127:
				case 128:
					*uParam3 = 1;
					break;
			
				case 129:
					uParam2->[1] = 250000;
					uParam2->[2] = 500000;
					uParam2->[3] = 1000000;
					break;
			
				case 130:
					*uParam3 = 1;
					break;
			
				case 131:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 132:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 133:
					*uParam3 = 1;
					break;
			
				case 134:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 135:
					*uParam3 = 1;
					break;
			
				case 136:
					uParam2->[1] = 2500000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 34:
				case 36:
				case 37:
				case 38:
				case 39:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 42:
				case 44:
				case 45:
				case 46:
				case 47:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 50:
				case 52:
				case 53:
				case 54:
				case 55:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 58:
				case 60:
				case 61:
				case 62:
				case 63:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 66:
				case 68:
				case 69:
				case 70:
				case 71:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					*uParam3 = 1;
					break;
			
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
					break;
			
				case 365:
					uParam2->[0] = 6;
					break;
			
				case 366:
					uParam2->[1] = 8;
					break;
			
				case 367:
					*uParam3 = 1;
					break;
			
				case 368:
					*uParam3 = 1;
					break;
			
				case 369:
					uParam2->[1] = 6;
					uParam2->[2] = 10;
					uParam2->[3] = 12;
					break;
			
				case 370:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			
				case 371:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 141:
				case 142:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 144:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 145:
					*uParam3 = 1;
					break;
			
				case 146:
					uParam2->[0] = 10;
					break;
			
				case 147:
				case 148:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 149:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 232:
				case 233:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 234:
					*uParam3 = 1;
					break;
			
				case 237:
					uParam2->[0] = 10;
					break;
			
				case 238:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 239:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			
				case 240:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 259:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 261:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 262:
					uParam2->[1] = 5;
					uParam2->[2] = 7;
					break;
			
				case 263:
					uParam2->[0] = 15;
					break;
			
				case 264:
					*uParam3 = 1;
					break;
			
				case 265:
					uParam2->[0] = 6;
					break;
			
				case 266:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 271:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 273:
					*uParam3 = 1;
					break;
			
				case 276:
					uParam2->[0] = 15;
					break;
			
				case 277:
					*uParam3 = 1;
					break;
			
				case 278:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			
				case 279:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 247:
					uParam2->[1] = 2;
					uParam2->[2] = 10;
					uParam2->[3] = 13;
					break;
			
				case 248:
				case 251:
				case 252:
					*uParam3 = 1;
					break;
			
				case 250:
					uParam2->[0] = 11;
					break;
			
				case 253:
					uParam2->[1] = 5;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					uParam2->[4] = 100;
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 288:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 14;
					break;
			
				case 289:
					uParam2->[0] = 11;
					break;
			
				case 290:
				case 291:
					*uParam3 = 1;
					break;
			
				case 292:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 15;
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 309:
				case 310:
				case 312:
				case 313:
					*uParam3 = 1;
					break;
			
				case 308:
					uParam2->[1] = 5;
					break;
			
				case 311:
					uParam2->[0] = 15;
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 152:
					uParam2->[1] = 5;
					break;
			
				case 156:
				case 161:
					*uParam3 = 1;
					break;
			
				case 157:
					uParam2->[1] = 10000;
					uParam2->[2] = 50000;
					uParam2->[3] = 100000;
					uParam2->[4] = 250000;
					break;
			
				case 158:
				case 160:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 159:
					uParam2->[0] = 8;
					break;
			
				case 162:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 167:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 169:
					uParam2->[0] = 11;
					uParam2->[1] = 20;
					uParam2->[2] = 25;
					break;
			
				case 170:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			
				case 172:
					uParam2->[0] = 26;
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 173:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					uParam2->[3] = 250;
					uParam2->[4] = 500;
					uParam2->[5] = 1000;
					break;
			
				case 174:
					*uParam3 = 1;
					break;
			
				case 175:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					uParam2->[4] = 10000000;
					uParam2->[5] = 25000000;
					uParam2->[6] = 50000000;
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 194:
				case 197:
				case 198:
				case 199:
					*uParam3 = 1;
					break;
			
				case 195:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 196:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					uParam2->[3] = 40;
					break;
			
				case 200:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					uParam2->[4] = 50;
					break;
			
				case 201:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 208:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 13;
					break;
			
				case 209:
					*uParam3 = 1;
					break;
			
				case 210:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 211:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			
				case 212:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					break;
			
				case 213:
					uParam2->[1] = 100000;
					uParam2->[2] = 250000;
					uParam2->[3] = 500000;
					break;
			
				case 214:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 221:
				case 223:
				case 224:
				case 225:
					*uParam3 = 1;
					break;
			
				case 226:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					uParam2->[4] = 200;
					uParam2->[5] = 250;
					break;
			
				case 227:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 331:
				case 332:
					*uParam3 = 1;
					break;
			
				case 333:
				case 334:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 335:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 15;
					uParam2->[4] = 20;
					break;
			
				case 336:
				case 337:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 316:
					*uParam3 = 1;
					break;
			
				case 317:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 318:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					break;
			
				case 319:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 320:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 354:
				case 357:
					*uParam3 = 1;
					break;
			
				case 355:
					uParam2->[0] = 10;
					break;
			
				case 356:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 358:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			}
			break;
	}

	return;
}

void func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x5537 (21815)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_2740191.f_7134.f_10[i /*8*/].f_2 == uParam0.f_2)
		{
			if (uParam0.f_6 >= Global_2740191.f_7134.f_10[i /*8*/].f_6)
				Global_2740191.f_7134.f_10[i /*8*/] = { uParam0 };
		
			return;
		}
		else if (Global_2740191.f_7134.f_10[i /*8*/].f_2 == -1)
		{
			Global_2740191.f_7134.f_10[i /*8*/] = { uParam0 };
			return;
		}
	}

	return;
}

void func_156() // Position - 0x55C7 (21959)
{
	int num;
	BOOL flag;

	num = func_157();
	flag = false;

	if (num >= 5 && !_STAT_GET_PACKED_BOOL(41806, -1))
	{
		_STAT_SET_PACKED_BOOL(41806, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_5", 16);
		Global_2740191.f_7134.f_5 = 5;
		flag = true;
	}

	if (num >= 10 && !_STAT_GET_PACKED_BOOL(41807, -1))
	{
		_STAT_SET_PACKED_BOOL(41807, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_1", 16);
		Global_2740191.f_7134.f_5 = 10;
		flag = true;
	}

	if (num >= 15 && !_STAT_GET_PACKED_BOOL(41808, -1))
	{
		_STAT_SET_PACKED_BOOL(41808, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_15", 16);
		Global_2740191.f_7134.f_5 = 15;
		flag = true;
	}

	if (num >= 20 && !_STAT_GET_PACKED_BOOL(41809, -1))
	{
		_STAT_SET_PACKED_BOOL(41809, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_0", 16);
		Global_2740191.f_7134.f_5 = 20;
		flag = true;
	}

	if (num >= 25 && !_STAT_GET_PACKED_BOOL(41810, -1))
	{
		_STAT_SET_PACKED_BOOL(41810, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_7", 16);
		Global_2740191.f_7134.f_5 = 25;
		flag = true;
	}

	if (num >= 30 && !_STAT_GET_PACKED_BOOL(42053, -1))
	{
		_STAT_SET_PACKED_BOOL(42053, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_X7M_O_2", 16);
		Global_2740191.f_7134.f_5 = 30;
		flag = true;
	}

	if (flag)
		Global_2740191.f_7134.f_4 = 1;

	return;
}

int func_157() // Position - 0x5759 (22361)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	BOOL flag;
	int num3;

	num = 0;
	i = 0;
	num2 = 0;
	flag = false;

	for (i = 0; i < 5; i = i + 1)
	{
		flag = func_135(func_158(i), -1);
	
		for (j = 0; j < 8; j = j + 1)
		{
			num2 = 0;
		
			for (k = 0; k < 4; k = k + 1)
			{
				num3 = (j * 4) + k;
			
				if (IS_BIT_SET(flag, num3))
					num2 = num2 + 1;
			}
		
			if (num2 == 4)
				num = num + 1;
		}
	}

	return num;
}

int func_158(int iParam0) // Position - 0x57D9 (22489)
{
	switch (iParam0)
	{
		case 0:
			return 15562;
	
		case 1:
			return 15563;
	
		case 2:
			return 15564;
	
		case 3:
			return 15565;
	
		case 4:
			return 17293;
	
		default:
		
	}

	return 17293;
}

void func_159(int iParam0, int iParam1) // Position - 0x5827 (22567)
{
	int num;
	BOOL address;
	int offset;

	num = func_172(iParam0);
	address = func_135(num, -1);
	offset = func_170(iParam0, iParam1);

	if (!IS_BIT_SET(address, offset))
	{
		func_163(iParam0, iParam1);
		MISC::SET_BIT(&address, offset);
		func_263(num, address, -1, true);
	}

	func_160(iParam0, iParam1);
	return;
}

void func_160(int iParam0, int iParam1) // Position - 0x5878 (22648)
{
	int num;
	int offset;

	num = func_161(iParam0);
	offset = func_170(iParam0, iParam1);

	if (!IS_BIT_SET(Global_1668419.f_33[num], offset))
	{
		MISC::SET_BIT(&Global_1668419.f_33[num], offset);
		Global_1668419.f_42 = Global_1668419.f_42 + 1;
	}

	if (!IS_BIT_SET(Global_1668419.f_27[num], offset))
	{
		MISC::SET_BIT(&Global_1668419.f_27[num], offset);
		Global_1668419.f_41 = Global_1668419.f_41 + 1;
	}

	if (iParam1 != 3 && iParam1 != 4)
	{
		if (!IS_BIT_SET(Global_1668419.f_27[num], offset + 1))
		{
			MISC::SET_BIT(&Global_1668419.f_27[num], offset + 1);
			Global_1668419.f_41 = Global_1668419.f_41 + 1;
		}
	}

	return;
}

int func_161(int iParam0) // Position - 0x5933 (22835)
{
	return func_162(iParam0) / 8;
}

int func_162(int iParam0) // Position - 0x5944 (22852)
{
	switch (iParam0)
	{
		case 2:
			return 0;
	
		case 3:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 6:
			return 4;
	
		case 7:
			return 5;
	
		case 8:
			return 6;
	
		case 13:
			return 7;
	
		case 14:
			return 8;
	
		case 15:
			return 9;
	
		case 16:
			return 10;
	
		case 17:
			return 11;
	
		case 18:
			return 12;
	
		case 19:
			return 13;
	
		case 20:
			return 14;
	
		case 21:
			return 15;
	
		case 22:
			return 16;
	
		case 23:
			return 17;
	
		case 24:
			return 18;
	
		case 25:
			return 19;
	
		case 26:
			return 20;
	
		case 27:
			return 21;
	
		case 28:
			return 22;
	
		case 29:
			return 23;
	
		case 30:
			return 24;
	
		case 31:
			return 25;
	
		case 32:
			return 26;
	
		case 33:
			return 27;
	
		case 12:
			return 28;
	
		case 1:
			return 29;
	
		case 11:
			return 30;
	
		case 10:
			return 31;
	
		case 0:
			return 32;
	
		case 9:
			return 33;
	
		default:
		
	}

	return 0;
}

void func_163(int iParam0, int iParam1) // Position - 0x5AC2 (23234)
{
	var entityCoords;
	int num;
	Hash hash;
	Hash hash2;
	Hash hash3;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	num = func_168();
	hash = func_167();
	hash2 = func_166(iParam1);
	hash3 = func_164(iParam0);
	num2 = -1;
	unk_0x9C4B3BAF947660BB(entityCoords, num, hash, hash2, hash3, num2);
	return;
}

Hash func_164(int iParam0) // Position - 0x5B15 (23317)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "PROGRESS_HUB_PACK_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_165(iParam0), 64);
	return MISC::GET_HASH_KEY(&unk);
}

char* func_165(int iParam0) // Position - 0x5B35 (23349)
{
	switch (iParam0)
	{
		case 0:
			return "FIELD_HANGAR";
	
		case 1:
			return "CHICKEN_FACTORY_RAID";
	
		case 2:
			return "PROJECT_OVERTHROW";
	
		case 3:
			return "OPERATION_PAPER_TRAIL";
	
		case 4:
			return "SUPERYACHT_LIFE";
	
		case 5:
			return "GERALDS_LAST_PLAY";
	
		case 6:
			return "PREMIUM_DELUXE_REPO_WORK";
	
		case 7:
			return "MADRAZO_DISPATCH_SERVICES";
	
		case 8:
			return "LOWRIDERS";
	
		case 9:
			return "BUSINESS_TYCOON";
	
		case 10:
			return "HACKER_DEN";
	
		case 11:
			return "BAIL_OFFICE";
	
		case 12:
			return "SALVAGE_YARD";
	
		case 13:
			return "LOS_SANTOS_DRUG_WARS";
	
		case 14:
			return "THE_CONTRACT";
	
		case 15:
			return "AFTER_HOURS";
	
		case 16:
			return "SMUGGLERS_RUN";
	
		case 17:
			return "GUNRUNNING";
	
		case 18:
			return "IMPORT_EXPORT";
	
		case 19:
			return "BIKERS";
	
		case 20:
			return "FAIFAF";
	
		case 21:
			return "LOS_SANTOS_TUNERS";
	
		case 22:
			return "DIAMOND_CASINO";
	
		case 23:
			return "CAYO_PERICO_HEIST";
	
		case 24:
			return "DIAMOND_CASINO_HEIST";
	
		case 25:
			return "DOOMSDAY_HEIST";
	
		case 26:
			return "HEISTS";
	
		case 27:
			return "ARENA_WAR";
	
		case 28:
			return "ADVERSARY_MODES";
	
		case 29:
			return "SURVIVALS";
	
		case 30:
			return "RACING";
	
		case 31:
			return "DEATHMATCHES";
	
		case 32:
			return "VEHICLE_ENTHUSIAST";
	
		case 33:
			return "WEAPONS_EXPERT";
	
		default:
		
	}

	return "***INVALID***";
}

Hash func_166(int iParam0) // Position - 0x5D02 (23810)
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_1");
	
		case 1:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_2");
	
		case 2:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_3");
	
		case 3:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_4");
	
		case 4:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_MAX");
	
		default:
		
	}

	return MISC::GET_HASH_KEY("***INVALID***");
}

Hash func_167() // Position - 0x5D6E (23918)
{
	return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_COMPLETED");
}

int func_168() // Position - 0x5D7E (23934)
{
	if (Global_1668418 == 0)
		func_169();

	return Global_1668418;
}

void func_169() // Position - 0x5D96 (23958)
{
	Global_1668418 = MISC::GET_HASH_KEY(NETWORK::GET_CLOUD_TIME_AS_STRING()) + NETWORK::GET_CLOUD_TIME_AS_INT() + NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) + MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
	return;
}

int func_170(int iParam0, int iParam1) // Position - 0x5DC5 (24005)
{
	if (iParam1 == 4)
		iParam1 = 3;

	return (func_171(iParam0) * 4) + iParam1;
}

int func_171(int iParam0) // Position - 0x5DE1 (24033)
{
	return func_162(iParam0) % 8;
}

int func_172(int iParam0) // Position - 0x5DF2 (24050)
{
	int num;

	num = func_161(iParam0);
	return func_158(num);
}

BOOL func_173(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5E08 (24072)
{
	BOOL flag;
	int num;
	int num2;
	int num3;
	int i;
	int num4;

	flag = true;
	num = func_212(iParam0);

	if (num > iParam1)
		return true;

	if (bParam2)
		return false;

	num2 = func_179(iParam0, iParam1, 0);
	num3 = (num2 + func_176(iParam0, iParam1)) - 1;
	i = 0;

	for (i = num2; i <= num3; i = i + 1)
	{
		num4 = i;
	
		if (func_174(iParam0, num4))
			func_181(num4);
		else
			flag = false;
	
		if (!bParam3 && !flag)
			return false;
	}

	if (flag)
	{
		func_159(iParam0, iParam1);
		return true;
	}

	return false;
}

BOOL func_174(int iParam0, int iParam1) // Position - 0x5EA5 (24229)
{
	BOOL flag;
	BOOL flag2;

	flag = func_175(iParam0, iParam1);
	flag2 = func_193(iParam0, iParam1);
	return flag2 >= flag;
}

BOOL func_175(int iParam0, int iParam1) // Position - 0x5EC6 (24262)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_2 > 0)
			return Global_1985099.f_1[i /*14*/].f_2;
	}

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 72:
				case 73:
				case 74:
				case 75:
				case 78:
				case 80:
					return 1;
			
				case 82:
					return 6;
			
				case 76:
					return 10;
			
				case 77:
					return 100000;
			
				case 79:
					return 500000;
			
				case 81:
					return 14;
			
				case 83:
					return 2000000;
			
				case 84:
					return 500000;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 85:
				case 86:
				case 87:
				case 93:
					return 1;
			
				case 88:
					return 5;
			
				case 89:
				case 92:
					return 2;
			
				case 90:
					return 25000;
			
				case 91:
				case 96:
					return 4;
			
				case 94:
					return 9;
			
				case 95:
					return 25;
			
				case 97:
					return 100000;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 7:
					return 1;
			
				case 4:
				case 6:
					return 6;
			
				case 5:
					return 5000000;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 98:
				case 99:
				case 100:
					return 1;
			
				case 101:
					return 5;
			
				case 102:
					return 2;
			
				case 103:
					return 250000;
			
				case 104:
				case 107:
					return 10;
			
				case 105:
					return 3;
			
				case 106:
					return 25;
			
				case 108:
					return 24;
			
				case 109:
					return 1000000;
			
				case 110:
					return 5000000;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 8:
				case 9:
				case 10:
				case 11:
				case 14:
					return 1;
			
				case 12:
					return 2;
			
				case 13:
					return 5000000;
			
				case 15:
					return 9;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 111:
				case 112:
				case 113:
				case 114:
				case 115:
				case 119:
					return 1;
			
				case 116:
					return 250000;
			
				case 117:
				case 118:
				case 122:
					return 5;
			
				case 120:
					return 10;
			
				case 121:
					return 2500000;
			
				case 123:
					return 10000000;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 293:
				case 294:
				case 295:
				case 296:
				case 297:
				case 298:
				case 299:
				case 300:
					return 1;
			
				case 301:
					return 5;
			
				case 302:
					return 15;
			
				case 303:
					return 50000000;
			
				case 304:
					return 5;
			
				case 305:
					return 1;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 16:
				case 17:
				case 19:
					return 1;
			
				case 18:
				case 20:
				case 21:
				case 22:
				case 23:
					return 6;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
					return 1;
			
				case 183:
					return 25;
			
				case 184:
					return 5;
			
				case 185:
					return 8;
			
				case 186:
					return 18;
			
				case 187:
					return 25;
			
				case 188:
					return 25000000;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
				case 325:
				case 327:
				case 328:
				case 323:
					return 1;
			
				case 324:
					return 50;
			
				case 326:
					return 100;
			
				case 329:
					return 250;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
				case 339:
				case 345:
					return 1;
			
				case 340:
					return 5;
			
				case 341:
					return 10;
			
				case 342:
					return 20;
			
				case 343:
					return 25;
			
				case 344:
					return 50;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					return 6;
			
				case 125:
					return 1;
			
				case 126:
					return 10;
			
				case 127:
				case 128:
					return 5;
			
				case 129:
					return 1000000;
			
				case 130:
					return 10;
			
				case 131:
					return 25;
			
				case 132:
					return 100;
			
				case 133:
					return 24;
			
				case 134:
					return 100;
			
				case 135:
					return 11;
			
				case 136:
					return 10000000;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 24:
				case 25:
				case 27:
					return 1;
			
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
					return 6;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 32:
				case 33:
				case 35:
					return 1;
			
				case 34:
				case 36:
				case 37:
				case 38:
				case 39:
					return 6;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 40:
				case 41:
				case 43:
					return 1;
			
				case 42:
				case 44:
				case 45:
				case 46:
				case 47:
					return 6;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 48:
				case 49:
				case 51:
					return 1;
			
				case 50:
				case 52:
				case 53:
				case 54:
				case 55:
					return 8;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 56:
				case 57:
				case 59:
					return 1;
			
				case 58:
				case 60:
				case 61:
				case 62:
				case 63:
					return 6;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 64:
				case 65:
				case 67:
					return 1;
			
				case 66:
				case 68:
				case 69:
				case 70:
				case 71:
					return 8;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					return 5;
			
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
					return 1;
			
				case 365:
					return 6;
			
				case 366:
					return 8;
			
				case 367:
					return 10;
			
				case 368:
					return 10;
			
				case 369:
					return 12;
			
				case 370:
					return 50;
			
				case 371:
					return 5;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 137:
				case 138:
				case 139:
				case 140:
				case 143:
					return 1;
			
				case 141:
				case 142:
				case 146:
					return 10;
			
				case 144:
					return 25;
			
				case 145:
					return 6;
			
				case 147:
				case 148:
					return 100;
			
				case 149:
					return 5000000;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 228:
				case 229:
				case 230:
				case 231:
				case 235:
				case 236:
					return 1;
			
				case 232:
				case 233:
				case 237:
					return 10;
			
				case 234:
					return 8;
			
				case 238:
					return 25;
			
				case 239:
					return 5000000;
			
				case 240:
					return 100;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 254:
				case 255:
				case 256:
				case 257:
				case 258:
				case 260:
					return 1;
			
				case 259:
					return 10;
			
				case 261:
					return 25;
			
				case 262:
					return 7;
			
				case 263:
					return 15;
			
				case 264:
					return 5;
			
				case 265:
					return 6;
			
				case 266:
					return 50000000;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 267:
				case 268:
				case 269:
				case 270:
				case 272:
				case 275:
					return 1;
			
				case 271:
					return 25;
			
				case 273:
					return 3;
			
				case 274:
					return 1;
			
				case 276:
					return 15;
			
				case 277:
					return 4;
			
				case 278:
					return 50000000;
			
				case 279:
					return 100000;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 241:
				case 242:
				case 243:
				case 244:
				case 245:
				case 246:
				case 249:
					return 1;
			
				case 247:
					return 13;
			
				case 248:
				case 251:
				case 252:
					return 6;
			
				case 250:
					return 11;
			
				case 253:
					return 100;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 280:
				case 281:
				case 282:
				case 283:
				case 284:
				case 285:
				case 286:
				case 287:
					return 1;
			
				case 288:
					return 14;
			
				case 289:
					return 10;
			
				case 290:
				case 291:
					return 3;
			
				case 292:
					return 15;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 306:
				case 307:
					return 1;
			
				case 308:
					return 5;
			
				case 309:
					return 25;
			
				case 310:
					return 9;
			
				case 311:
					return 15;
			
				case 312:
					return 20;
			
				case 313:
					return 50;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 150:
				case 151:
				case 153:
				case 154:
				case 155:
					return 1;
			
				case 152:
					return 5;
			
				case 156:
					return 4;
			
				case 157:
					return Global_262145.f_23684;
			
				case 158:
				case 160:
					return 25;
			
				case 159:
					return 8;
			
				case 161:
					return 10;
			
				case 162:
					return 50000000;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 163:
				case 164:
				case 165:
				case 166:
				case 168:
				case 171:
					return 1;
			
				case 167:
					return 10;
			
				case 169:
					return 25;
			
				case 170:
					return 50;
			
				case 172:
					return 100;
			
				case 173:
					return 1000;
			
				case 174:
					return 8;
			
				case 175:
					return 50000000;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 189:
				case 190:
				case 191:
				case 192:
				case 193:
					return 1;
			
				case 194:
					return 5;
			
				case 197:
				case 199:
					return 8;
			
				case 198:
					return 10;
			
				case 195:
					return 25;
			
				case 196:
					return 40;
			
				case 200:
					return 50;
			
				case 201:
					return 25000000;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 202:
				case 203:
				case 204:
				case 205:
				case 206:
				case 207:
					return 1;
			
				case 208:
					return 13;
			
				case 209:
					return 5;
			
				case 210:
					return 10;
			
				case 211:
					return 25000000;
			
				case 212:
					return 2500000;
			
				case 214:
					return 50;
			
				case 213:
					return 500000;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 215:
				case 216:
				case 217:
				case 218:
				case 219:
				case 220:
				case 222:
					return 1;
			
				case 221:
					return 11;
			
				case 223:
					return 5;
			
				case 224:
					return 10;
			
				case 225:
					return 6;
			
				case 226:
					return 250;
			
				case 227:
					return 50000000;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 330:
					return 1;
			
				case 331:
				case 332:
					return 5;
			
				case 333:
				case 334:
					return 25;
			
				case 335:
					return 20;
			
				case 336:
				case 337:
					return 50;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 314:
				case 315:
				case 321:
					return 1;
			
				case 316:
					return 5;
			
				case 317:
					return 10;
			
				case 318:
					return 20;
			
				case 319:
					return 25;
			
				case 320:
					return 50;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 346:
				case 347:
				case 348:
				case 349:
				case 350:
				case 351:
				case 352:
				case 353:
					return 1;
			
				case 354:
					return 5;
			
				case 355:
					return 10;
			
				case 356:
					return 100;
			
				case 357:
					return 15;
			
				case 358:
					return 50;
			}
			break;
	}

	return 123456789;
}

// Unhandled jump detected. Output should be considered invalid
int func_176(int iParam0, int iParam1) // Position - 0x7013 (28691)
{
	if (func_177(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				return 3;
		
			case 1:
				return 3;
		
			case 2:
				return 3;
		
			case 3:
				return 4;
		
			default:
				goto 0x6F;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
		
			case 1:
				return 2;
		
			case 2:
				return 2;
		
			case 3:
				return 3;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_177(int iParam0) // Position - 0x7086 (28806)
{
	int num;

	num = func_178(iParam0);

	switch (num)
	{
		case 0:
		case 4:
			return false;
	
		default:
		
	}

	return true;
}

int func_178(int iParam0) // Position - 0x70AE (28846)
{
	switch (iParam0)
	{
		case 26:
		case 25:
		case 24:
		case 23:
			return 3;
	
		case 28:
		case 31:
		case 30:
		case 29:
		case 27:
			return 4;
	
		case 20:
		case 19:
		case 18:
		case 17:
		case 16:
		case 15:
		case 14:
		case 13:
		case 12:
		case 11:
		case 10:
		case 9:
			return 1;
	
		case 8:
		case 7:
		case 6:
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 0;
	
		case 22:
		case 21:
			return 2;
	
		case 33:
		case 32:
			return 5;
	}

	return 5;
}

int func_179(int iParam0, int iParam1, int iParam2) // Position - 0x71B4 (29108)
{
	int num;
	int i;
	int num2;

	num = iParam0;
	i = 0;
	num2 = 0;

	if (num != 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_180(i);
		}
	}

	num = iParam1;
	i = 0;

	if (num != 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_176(iParam0, i);
		}
	}

	num2 = num2 + iParam2;
	return num2;
}

int func_180(int iParam0) // Position - 0x7220 (29216)
{
	if (func_177(iParam0))
		return 13;

	return 8;
}

void func_181(int iParam0) // Position - 0x723B (29243)
{
	int num;
	int num2;
	int offset;

	num = func_184(iParam0);
	num2 = func_183(num);
	offset = func_182(num);
	MISC::SET_BIT(&Global_1668419.f_8[num2], offset);
	Global_1668419.f_40 = Global_1668419.f_40 + 1;
	return;
}

int func_182(int iParam0) // Position - 0x7279 (29305)
{
	return iParam0 % 32;
}

int func_183(int iParam0) // Position - 0x7286 (29318)
{
	return iParam0 / 32;
}

int func_184(int iParam0) // Position - 0x7293 (29331)
{
	switch (iParam0)
	{
		case 16:
			return 0;
	
		case 17:
			return 1;
	
		case 18:
			return 2;
	
		case 19:
			return 3;
	
		case 20:
			return 4;
	
		case 21:
			return 5;
	
		case 22:
			return 6;
	
		case 23:
			return 7;
	
		case 24:
			return 8;
	
		case 25:
			return 9;
	
		case 26:
			return 10;
	
		case 27:
			return 11;
	
		case 28:
			return 12;
	
		case 29:
			return 13;
	
		case 30:
			return 14;
	
		case 31:
			return 15;
	
		case 32:
			return 16;
	
		case 33:
			return 17;
	
		case 34:
			return 18;
	
		case 35:
			return 19;
	
		case 36:
			return 20;
	
		case 37:
			return 21;
	
		case 38:
			return 22;
	
		case 39:
			return 23;
	
		case 40:
			return 24;
	
		case 41:
			return 25;
	
		case 42:
			return 26;
	
		case 43:
			return 27;
	
		case 44:
			return 28;
	
		case 45:
			return 29;
	
		case 46:
			return 30;
	
		case 47:
			return 31;
	
		case 48:
			return 32;
	
		case 49:
			return 33;
	
		case 50:
			return 34;
	
		case 51:
			return 35;
	
		case 52:
			return 36;
	
		case 53:
			return 37;
	
		case 54:
			return 38;
	
		case 55:
			return 39;
	
		case 56:
			return 40;
	
		case 57:
			return 41;
	
		case 58:
			return 42;
	
		case 59:
			return 43;
	
		case 60:
			return 44;
	
		case 61:
			return 45;
	
		case 62:
			return 46;
	
		case 63:
			return 47;
	
		case 64:
			return 48;
	
		case 65:
			return 49;
	
		case 66:
			return 50;
	
		case 67:
			return 51;
	
		case 68:
			return 52;
	
		case 69:
			return 53;
	
		case 70:
			return 54;
	
		case 71:
			return 55;
	
		case 124:
			return 56;
	
		case 125:
			return 57;
	
		case 126:
			return 58;
	
		case 127:
			return 59;
	
		case 128:
			return 60;
	
		case 129:
			return 61;
	
		case 130:
			return 62;
	
		case 131:
			return 63;
	
		case 132:
			return 64;
	
		case 133:
			return 65;
	
		case 134:
			return 66;
	
		case 135:
			return 67;
	
		case 136:
			return 68;
	
		case 137:
			return 69;
	
		case 138:
			return 70;
	
		case 139:
			return 71;
	
		case 140:
			return 72;
	
		case 141:
			return 73;
	
		case 142:
			return 74;
	
		case 143:
			return 75;
	
		case 144:
			return 76;
	
		case 145:
			return 77;
	
		case 146:
			return 78;
	
		case 147:
			return 79;
	
		case 148:
			return 80;
	
		case 149:
			return 81;
	
		case 150:
			return 82;
	
		case 151:
			return 83;
	
		case 152:
			return 84;
	
		case 153:
			return 85;
	
		case 154:
			return 86;
	
		case 155:
			return 87;
	
		case 156:
			return 88;
	
		case 157:
			return 89;
	
		case 158:
			return 90;
	
		case 159:
			return 91;
	
		case 160:
			return 92;
	
		case 161:
			return 93;
	
		case 162:
			return 94;
	
		case 163:
			return 95;
	
		case 164:
			return 96;
	
		case 165:
			return 97;
	
		case 166:
			return 98;
	
		case 167:
			return 99;
	
		case 168:
			return 100;
	
		case 169:
			return 101;
	
		case 170:
			return 102;
	
		case 171:
			return 103;
	
		case 172:
			return 104;
	
		case 173:
			return 105;
	
		case 174:
			return 106;
	
		case 175:
			return 107;
	
		case 176:
			return 108;
	
		case 177:
			return 109;
	
		case 178:
			return 110;
	
		case 179:
			return 111;
	
		case 180:
			return 112;
	
		case 181:
			return 113;
	
		case 182:
			return 114;
	
		case 183:
			return 115;
	
		case 184:
			return 116;
	
		case 185:
			return 117;
	
		case 186:
			return 118;
	
		case 187:
			return 119;
	
		case 188:
			return 120;
	
		case 189:
			return 121;
	
		case 190:
			return 122;
	
		case 191:
			return 123;
	
		case 192:
			return 124;
	
		case 193:
			return 125;
	
		case 194:
			return 126;
	
		case 195:
			return 127;
	
		case 196:
			return 128;
	
		case 197:
			return 129;
	
		case 198:
			return 130;
	
		case 199:
			return 131;
	
		case 200:
			return 132;
	
		case 201:
			return 133;
	
		case 202:
			return 134;
	
		case 203:
			return 135;
	
		case 204:
			return 136;
	
		case 205:
			return 137;
	
		case 206:
			return 138;
	
		case 207:
			return 139;
	
		case 208:
			return 140;
	
		case 209:
			return 141;
	
		case 210:
			return 142;
	
		case 211:
			return 143;
	
		case 212:
			return 144;
	
		case 213:
			return 145;
	
		case 214:
			return 146;
	
		case 215:
			return 147;
	
		case 216:
			return 148;
	
		case 217:
			return 149;
	
		case 218:
			return 150;
	
		case 219:
			return 151;
	
		case 220:
			return 152;
	
		case 221:
			return 153;
	
		case 222:
			return 154;
	
		case 223:
			return 155;
	
		case 224:
			return 156;
	
		case 225:
			return 157;
	
		case 226:
			return 158;
	
		case 227:
			return 159;
	
		case 228:
			return 160;
	
		case 229:
			return 161;
	
		case 230:
			return 162;
	
		case 231:
			return 163;
	
		case 232:
			return 164;
	
		case 233:
			return 165;
	
		case 234:
			return 166;
	
		case 235:
			return 167;
	
		case 236:
			return 168;
	
		case 237:
			return 169;
	
		case 238:
			return 170;
	
		case 239:
			return 171;
	
		case 240:
			return 172;
	
		case 241:
			return 173;
	
		case 242:
			return 174;
	
		case 243:
			return 175;
	
		case 244:
			return 176;
	
		case 245:
			return 177;
	
		case 246:
			return 178;
	
		case 247:
			return 179;
	
		case 248:
			return 180;
	
		case 249:
			return 181;
	
		case 250:
			return 182;
	
		case 251:
			return 183;
	
		case 252:
			return 184;
	
		case 253:
			return 185;
	
		case 254:
			return 186;
	
		case 255:
			return 187;
	
		case 256:
			return 188;
	
		case 257:
			return 189;
	
		case 258:
			return 190;
	
		default:
		
	}

	switch (iParam0)
	{
		case 259:
			return 191;
	
		case 260:
			return 192;
	
		case 261:
			return 193;
	
		case 262:
			return 194;
	
		case 263:
			return 195;
	
		case 264:
			return 196;
	
		case 265:
			return 197;
	
		case 266:
			return 198;
	
		case 267:
			return 199;
	
		case 268:
			return 200;
	
		case 269:
			return 201;
	
		case 270:
			return 202;
	
		case 271:
			return 203;
	
		case 272:
			return 204;
	
		case 273:
			return 205;
	
		case 274:
			return 206;
	
		case 275:
			return 207;
	
		case 276:
			return 208;
	
		case 277:
			return 209;
	
		case 278:
			return 210;
	
		case 279:
			return 211;
	
		case 280:
			return 212;
	
		case 281:
			return 213;
	
		case 282:
			return 214;
	
		case 283:
			return 215;
	
		case 284:
			return 216;
	
		case 285:
			return 217;
	
		case 286:
			return 218;
	
		case 287:
			return 219;
	
		case 288:
			return 220;
	
		case 289:
			return 221;
	
		case 290:
			return 222;
	
		case 291:
			return 223;
	
		case 292:
			return 224;
	
		case 293:
			return 225;
	
		case 294:
			return 226;
	
		case 295:
			return 227;
	
		case 296:
			return 228;
	
		case 297:
			return 229;
	
		case 298:
			return 230;
	
		case 299:
			return 231;
	
		case 300:
			return 232;
	
		case 301:
			return 233;
	
		case 302:
			return 234;
	
		case 303:
			return 235;
	
		case 304:
			return 236;
	
		case 305:
			return 237;
	
		case 306:
			return 238;
	
		case 307:
			return 239;
	
		case 308:
			return 240;
	
		case 309:
			return 241;
	
		case 310:
			return 242;
	
		case 311:
			return 243;
	
		case 312:
			return 244;
	
		case 313:
			return 245;
	
		case 314:
			return 246;
	
		case 315:
			return 247;
	
		case 316:
			return 248;
	
		case 317:
			return 249;
	
		case 318:
			return 250;
	
		case 319:
			return 251;
	
		case 320:
			return 252;
	
		case 321:
			return 253;
	
		case 322:
			return 254;
	
		case 323:
			return 255;
	
		case 324:
			return 256;
	
		case 325:
			return 257;
	
		case 326:
			return 258;
	
		case 327:
			return 259;
	
		case 328:
			return 260;
	
		case 329:
			return 261;
	
		case 330:
			return 262;
	
		case 331:
			return 263;
	
		case 332:
			return 264;
	
		case 333:
			return 265;
	
		case 334:
			return 266;
	
		case 335:
			return 267;
	
		case 336:
			return 268;
	
		case 337:
			return 269;
	
		case 338:
			return 270;
	
		case 339:
			return 271;
	
		case 340:
			return 272;
	
		case 341:
			return 273;
	
		case 342:
			return 274;
	
		case 343:
			return 275;
	
		case 344:
			return 276;
	
		case 345:
			return 277;
	
		case 346:
			return 278;
	
		case 347:
			return 279;
	
		case 348:
			return 280;
	
		case 349:
			return 281;
	
		case 350:
			return 282;
	
		case 351:
			return 283;
	
		case 352:
			return 284;
	
		case 353:
			return 285;
	
		case 354:
			return 286;
	
		case 355:
			return 287;
	
		case 356:
			return 288;
	
		case 357:
			return 289;
	
		case 358:
			return 290;
	
		case 359:
			return 291;
	
		case 360:
			return 292;
	
		case 361:
			return 293;
	
		case 362:
			return 294;
	
		case 363:
			return 295;
	
		case 364:
			return 296;
	
		case 365:
			return 297;
	
		case 366:
			return 298;
	
		case 367:
			return 299;
	
		case 368:
			return 300;
	
		case 369:
			return 301;
	
		case 370:
			return 302;
	
		case 371:
			return 303;
	
		case 111:
			return 304;
	
		case 112:
			return 305;
	
		case 113:
			return 306;
	
		case 114:
			return 307;
	
		case 115:
			return 308;
	
		case 116:
			return 309;
	
		case 117:
			return 310;
	
		case 118:
			return 311;
	
		case 119:
			return 312;
	
		case 120:
			return 313;
	
		case 121:
			return 314;
	
		case 122:
			return 315;
	
		case 123:
			return 316;
	
		case 8:
			return 317;
	
		case 9:
			return 318;
	
		case 10:
			return 319;
	
		case 11:
			return 320;
	
		case 12:
			return 321;
	
		case 13:
			return 322;
	
		case 14:
			return 323;
	
		case 15:
			return 324;
	
		case 98:
			return 325;
	
		case 99:
			return 326;
	
		case 100:
			return 327;
	
		case 101:
			return 328;
	
		case 102:
			return 329;
	
		case 103:
			return 330;
	
		case 104:
			return 331;
	
		case 105:
			return 332;
	
		case 106:
			return 333;
	
		case 107:
			return 334;
	
		case 108:
			return 335;
	
		case 109:
			return 336;
	
		case 110:
			return 337;
	
		case 85:
			return 338;
	
		case 86:
			return 339;
	
		case 87:
			return 340;
	
		case 88:
			return 341;
	
		case 89:
			return 342;
	
		case 90:
			return 343;
	
		case 91:
			return 344;
	
		case 92:
			return 345;
	
		case 93:
			return 346;
	
		case 94:
			return 347;
	
		case 95:
			return 348;
	
		case 96:
			return 349;
	
		case 97:
			return 350;
	
		case 0:
			return 351;
	
		case 1:
			return 352;
	
		case 2:
			return 353;
	
		case 3:
			return 354;
	
		case 4:
			return 355;
	
		case 5:
			return 356;
	
		case 6:
			return 357;
	
		case 7:
			return 358;
	
		case 72:
			return 359;
	
		case 73:
			return 360;
	
		case 74:
			return 361;
	
		case 75:
			return 362;
	
		case 76:
			return 363;
	
		case 77:
			return 364;
	
		case 78:
			return 365;
	
		case 79:
			return 366;
	
		case 80:
			return 367;
	
		case 81:
			return 368;
	
		case 82:
			return 369;
	
		case 83:
			return 370;
	
		case 84:
			return 371;
	
		default:
		
	}

	return 0;
}

void func_185(var uParam0) // Position - 0x8314 (33556)
{
	int num;
	int num2;
	int num3;
	int offset;

	num = func_184(uParam0);
	num2 = func_186(num);

	if (num2 != -1)
	{
		num3 = func_183(num2);
		offset = func_182(num2);
		MISC::SET_BIT(&Global_1668419[num3], offset);
	}

	return;
}

int func_186(int iParam0) // Position - 0x8350 (33616)
{
	switch (iParam0)
	{
		case 2:
			return 0;
	
		case 4:
			return 1;
	
		case 5:
			return 2;
	
		case 6:
			return 3;
	
		case 7:
			return 4;
	
		case 10:
			return 5;
	
		case 12:
			return 6;
	
		case 13:
			return 7;
	
		case 14:
			return 8;
	
		case 15:
			return 9;
	
		case 18:
			return 10;
	
		case 20:
			return 11;
	
		case 21:
			return 12;
	
		case 22:
			return 13;
	
		case 23:
			return 14;
	
		case 26:
			return 15;
	
		case 28:
			return 16;
	
		case 29:
			return 17;
	
		case 30:
			return 18;
	
		case 31:
			return 19;
	
		case 34:
			return 20;
	
		case 36:
			return 21;
	
		case 37:
			return 22;
	
		case 38:
			return 23;
	
		case 39:
			return 24;
	
		case 42:
			return 25;
	
		case 44:
			return 26;
	
		case 45:
			return 27;
	
		case 46:
			return 28;
	
		case 47:
			return 29;
	
		case 50:
			return 30;
	
		case 52:
			return 31;
	
		case 53:
			return 32;
	
		case 54:
			return 33;
	
		case 55:
			return 34;
	
		case 56:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 60:
			return 38;
	
		case 61:
			return 39;
	
		case 62:
			return 40;
	
		case 63:
			return 41;
	
		case 64:
			return 42;
	
		case 65:
			return 43;
	
		case 66:
			return 44;
	
		case 67:
			return 45;
	
		case 68:
			return 46;
	
		case 73:
			return 47;
	
		case 74:
			return 48;
	
		case 76:
			return 49;
	
		case 77:
			return 50;
	
		case 78:
			return 51;
	
		case 79:
			return 52;
	
		case 80:
			return 53;
	
		case 81:
			return 54;
	
		case 84:
			return 55;
	
		case 88:
			return 56;
	
		case 89:
			return 57;
	
		case 90:
			return 58;
	
		case 91:
			return 59;
	
		case 92:
			return 60;
	
		case 93:
			return 61;
	
		case 94:
			return 62;
	
		case 99:
			return 63;
	
		case 101:
			return 64;
	
		case 102:
			return 65;
	
		case 104:
			return 66;
	
		case 105:
			return 67;
	
		case 106:
			return 68;
	
		case 107:
			return 69;
	
		case 115:
			return 70;
	
		case 116:
			return 71;
	
		case 117:
			return 72;
	
		case 118:
			return 73;
	
		case 119:
			return 74;
	
		case 120:
			return 75;
	
		case 126:
			return 76;
	
		case 127:
			return 77;
	
		case 128:
			return 78;
	
		case 129:
			return 79;
	
		case 130:
			return 80;
	
		case 131:
			return 81;
	
		case 132:
			return 82;
	
		case 133:
			return 83;
	
		case 140:
			return 84;
	
		case 141:
			return 85;
	
		case 142:
			return 86;
	
		case 143:
			return 87;
	
		case 144:
			return 88;
	
		case 145:
			return 89;
	
		case 146:
			return 90;
	
		case 153:
			return 91;
	
		case 155:
			return 92;
	
		case 156:
			return 93;
	
		case 157:
			return 94;
	
		case 158:
			return 95;
	
		case 159:
			return 96;
	
		case 164:
			return 97;
	
		case 165:
			return 98;
	
		case 166:
			return 99;
	
		case 169:
			return 100;
	
		case 170:
			return 101;
	
		case 171:
			return 102;
	
		case 172:
			return 103;
	
		case 179:
			return 104;
	
		case 180:
			return 105;
	
		case 182:
			return 106;
	
		case 183:
			return 107;
	
		case 184:
			return 108;
	
		case 185:
			return 109;
	
		case 191:
			return 110;
	
		case 193:
			return 111;
	
		case 194:
			return 112;
	
		case 195:
			return 113;
	
		case 196:
			return 114;
	
		case 197:
			return 115;
	
		case 198:
			return 116;
	
		case 203:
			return 117;
	
		case 205:
			return 118;
	
		case 208:
			return 119;
	
		case 209:
			return 120;
	
		case 210:
			return 121;
	
		case 211:
			return 122;
	
		case 220:
			return 123;
	
		case 221:
			return 124;
	
		case 222:
			return 125;
	
		case 223:
			return 126;
	
		case 224:
			return 127;
	
		case 233:
			return 128;
	
		case 234:
			return 129;
	
		case 235:
			return 130;
	
		case 236:
			return 131;
	
		case 240:
			return 132;
	
		case 241:
			return 133;
	
		case 242:
			return 134;
	
		case 243:
			return 135;
	
		case 244:
			return 136;
	
		case 245:
			return 137;
	
		case 248:
			return 138;
	
		case 249:
			return 139;
	
		case 250:
			return 140;
	
		case 251:
			return 141;
	
		case 252:
			return 142;
	
		case 256:
			return 143;
	
		case 258:
			return 144;
	
		case 261:
			return 145;
	
		case 263:
			return 146;
	
		case 264:
			return 147;
	
		case 265:
			return 148;
	
		case 266:
			return 149;
	
		case 267:
			return 150;
	
		case 268:
			return 151;
	
		case 269:
			return 152;
	
		case 272:
			return 153;
	
		case 273:
			return 154;
	
		case 274:
			return 155;
	
		case 275:
			return 156;
	
		case 276:
			return 157;
	
		case 286:
			return 158;
	
		case 287:
			return 159;
	
		case 288:
			return 160;
	
		case 289:
			return 161;
	
		case 290:
			return 162;
	
		case 291:
			return 163;
	
		case 297:
			return 164;
	
		case 298:
			return 165;
	
		case 299:
			return 166;
	
		case 300:
			return 167;
	
		case 301:
			return 168;
	
		case 302:
			return 169;
	
		case 303:
			return 170;
	
		case 309:
			return 171;
	
		case 310:
			return 172;
	
		case 311:
			return 173;
	
		case 313:
			return 174;
	
		case 314:
			return 175;
	
		case 315:
			return 176;
	
		case 316:
			return 177;
	
		case 321:
			return 178;
	
		case 322:
			return 179;
	
		case 324:
			return 180;
	
		case 328:
			return 181;
	
		case 329:
			return 182;
	
		case 330:
			return 183;
	
		case 331:
			return 184;
	
		case 332:
			return 185;
	
		case 333:
			return 186;
	
		case 334:
			return 187;
	
		case 335:
			return 188;
	
		case 336:
			return 189;
	
		case 337:
			return 190;
	}

	switch (iParam0)
	{
		case 341:
			return 191;
	
		case 342:
			return 192;
	
		case 343:
			return 193;
	
		case 344:
			return 194;
	
		case 345:
			return 195;
	
		case 347:
			return 196;
	
		case 348:
			return 197;
	
		case 349:
			return 198;
	
		case 350:
			return 199;
	
		case 355:
			return 200;
	
		case 356:
			return 201;
	
		case 357:
			return 202;
	
		case 363:
			return 203;
	
		case 364:
			return 204;
	
		case 366:
			return 205;
	
		case 368:
			return 206;
	
		case 369:
			return 207;
	
		case 370:
			return 208;
	
		case 371:
			return 209;
	}

	return -1;
}

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x8EDB (36571)
{
	var entityCoords;
	int num;
	Hash hash;
	Hash hash2;
	var unk3;
	var unk4;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	num = func_168();
	hash = func_192(uParam0.f_6 >= uParam0.f_2.f_2);
	hash2 = func_188(uParam0, uParam0.f_1, uParam0.f_2);
	unk3 = uParam0.f_6;
	unk4 = uParam0.f_2.f_2;
	unk_0x9C4B3BAF947660BB(entityCoords, num, hash, hash2, unk3, unk4);
	return;
}

Hash func_188(int iParam0, var uParam1, int iParam2) // Position - 0x8F44 (36676)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "P_HUB_OBJ_", 64);

	switch (func_178(iParam0))
	{
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "H_", 64);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "SM_", 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "B_", 64);
			break;
	
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "CM_", 64);
			break;
	
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "SS_", 64);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "M_", 64);
			break;
	}

	switch (iParam0)
	{
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "SUMMER2023", 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "PAPERTRAIL", 64);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "SUPERYACHT", 64);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "GERALDS", 64);
			break;
	
		case 6:
			TEXT_LABEL_APPEND_STRING(&unk, "SIMEON", 64);
			break;
	
		case 7:
			TEXT_LABEL_APPEND_STRING(&unk, "MADRAZO", 64);
			break;
	
		case 8:
			TEXT_LABEL_APPEND_STRING(&unk, "LOWRIDERS", 64);
			break;
	
		case 13:
			TEXT_LABEL_APPEND_STRING(&unk, "LSDW", 64);
			break;
	
		case 14:
			TEXT_LABEL_APPEND_STRING(&unk, "CONTRACT", 64);
			break;
	
		case 15:
			TEXT_LABEL_APPEND_STRING(&unk, "AFTERHOURS", 64);
			break;
	
		case 16:
			TEXT_LABEL_APPEND_STRING(&unk, "SMUGGLER", 64);
			break;
	
		case 17:
			TEXT_LABEL_APPEND_STRING(&unk, "GUNRUNNING", 64);
			break;
	
		case 18:
			TEXT_LABEL_APPEND_STRING(&unk, "IMPORTEXPORT", 64);
			break;
	
		case 19:
			TEXT_LABEL_APPEND_STRING(&unk, "BIKERS", 64);
			break;
	
		case 20:
			TEXT_LABEL_APPEND_STRING(&unk, "FAIFAF", 64);
			break;
	
		case 21:
			TEXT_LABEL_APPEND_STRING(&unk, "TUNERS", 64);
			break;
	
		case 22:
			TEXT_LABEL_APPEND_STRING(&unk, "DIAMONDCASINO", 64);
			break;
	
		case 23:
			TEXT_LABEL_APPEND_STRING(&unk, "CAYOPERICO", 64);
			break;
	
		case 24:
			TEXT_LABEL_APPEND_STRING(&unk, "DIAMONDCASINO", 64);
			break;
	
		case 25:
			TEXT_LABEL_APPEND_STRING(&unk, "DOOMSDAY", 64);
			break;
	
		case 26:
			TEXT_LABEL_APPEND_STRING(&unk, "HEISTS", 64);
			break;
	
		case 27:
			TEXT_LABEL_APPEND_STRING(&unk, "ARENAWAR", 64);
			break;
	
		case 28:
			TEXT_LABEL_APPEND_STRING(&unk, "ADVERSARY", 64);
			break;
	
		case 29:
			TEXT_LABEL_APPEND_STRING(&unk, "SURVIVALS", 64);
			break;
	
		case 30:
			TEXT_LABEL_APPEND_STRING(&unk, "RACING", 64);
			break;
	
		case 31:
			TEXT_LABEL_APPEND_STRING(&unk, "DEATHMATCHES", 64);
			break;
	
		case 32:
			TEXT_LABEL_APPEND_STRING(&unk, "VEHICLE", 64);
			break;
	
		case 33:
			TEXT_LABEL_APPEND_STRING(&unk, "WEAPON", 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "CHICKEN", 64);
			break;
	
		case 12:
			TEXT_LABEL_APPEND_STRING(&unk, "SALVAGE", 64);
			break;
	
		case 11:
			TEXT_LABEL_APPEND_STRING(&unk, "BAIL_OFFICE", 64);
			break;
	
		case 10:
			TEXT_LABEL_APPEND_STRING(&unk, "HACKER_DEN", 64);
			break;
	
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "FIELD_HANGAR", 64);
			break;
	
		case 9:
			TEXT_LABEL_APPEND_STRING(&unk, "BUSINESS_TYCOON", 64);
			break;
	}

	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_191(uParam1), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OBJ_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_189((iParam2 - func_179(iParam0, uParam1, 0)) + 1), 64);
	return MISC::GET_HASH_KEY(&unk);
}

char* func_189(int iParam0) // Position - 0x9244 (37444)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 16);
	return func_190(&unk);
}

char* func_190(var uParam0) // Position - 0x925F (37471)
{
	return uParam0;
}

char* func_191(int iParam0) // Position - 0x9269 (37481)
{
	switch (iParam0)
	{
		case 0:
			return "TIER_1";
	
		case 1:
			return "TIER_2";
	
		case 2:
			return "TIER_3";
	
		case 3:
			return "TIER_4";
	
		case 4:
			return "TIER_MAX";
	
		default:
		
	}

	return "***INVALID***";
}

Hash func_192(BOOL bParam0) // Position - 0x92BD (37565)
{
	if (bParam0)
		return MISC::GET_HASH_KEY("PROGRESS_HUB_OBJECTIVE_COMPLETED");

	return MISC::GET_HASH_KEY("PROGRESS_HUB_OBJECTIVE_UPDATED");
}

BOOL func_193(int iParam0, int iParam1) // Position - 0x92E0 (37600)
{
	int i;
	BOOL flag;
	BOOL flag2;
	int j;

	i = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_1 > 0)
			return Global_1985099.f_1[i /*14*/].f_1;
	}

	flag = false;
	flag2 = false;

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 72:
					if (_STAT_GET_PACKED_BOOL(54653, -1))
						flag = true;
					break;
			
				case 73:
					flag2 = func_135(13035, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 74:
					flag2 = _STAT_GET_PACKED_INT(24928, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 75:
					flag2 = func_135(13037, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 76:
					flag = _STAT_GET_PACKED_INT(24928, -1);
					break;
			
				case 77:
					flag = func_135(13040, -1);
					break;
			
				case 78:
					flag2 = func_135(13036, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 79:
					flag = func_135(13066, -1);
					break;
			
				case 80:
					if (_STAT_GET_PACKED_BOOL(28313, -1) || _STAT_GET_PACKED_BOOL(28314, -1) || _STAT_GET_PACKED_BOOL(28315, -1) || _STAT_GET_PACKED_BOOL(28316, -1) || _STAT_GET_PACKED_BOOL(28317, -1) || _STAT_GET_PACKED_BOOL(28318, -1))
						flag = true;
					break;
			
				case 81:
					flag = _STAT_GET_PACKED_INT(24929, -1);
					break;
			
				case 82:
					if (_STAT_GET_PACKED_BOOL(28313, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28314, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28315, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28316, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28317, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28318, -1))
						flag = flag + 1;
					break;
			
				case 83:
					flag = func_135(13066, -1);
					break;
			
				case 84:
					flag = func_135(13040, -1);
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 85:
					flag2 = func_135(12442, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 86:
					if (_STAT_GET_PACKED_BOOL(9539, -1))
						flag = true;
					break;
			
				case 87:
					flag2 = _STAT_GET_PACKED_INT(24903, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 88:
					flag = _STAT_GET_PACKED_INT(24903, -1);
					break;
			
				case 89:
					flag = _STAT_GET_PACKED_INT(24904, -1);
					break;
			
				case 90:
					flag = func_135(12459, -1);
					break;
			
				case 91:
					flag2 = func_135(12444, -1);
				
					if (IS_BIT_SET(flag2, 5) || IS_BIT_SET(flag2, 6))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 7) || IS_BIT_SET(flag2, 8))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 9) || IS_BIT_SET(flag2, 10))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 11) || IS_BIT_SET(flag2, 12))
						flag = flag + 1;
					break;
			
				case 92:
					if (_STAT_GET_PACKED_BOOL(9549, -1))
					{
						flag = 2;
					}
					else
					{
						flag = flag + func_208(_STAT_GET_PACKED_BOOL(9547, -1));
						flag = flag + func_208(_STAT_GET_PACKED_BOOL(9548, -1));
					
						if (flag == 2)
							_STAT_SET_PACKED_BOOL(9549, true, -1);
					}
					break;
			
				case 93:
					if (_STAT_GET_PACKED_BOOL(9542, -1))
						flag = true;
					break;
			
				case 94:
					flag = _STAT_GET_PACKED_INT(24905, -1);
					break;
			
				case 95:
					flag = _STAT_GET_PACKED_INT(24903, -1);
					break;
			
				case 96:
					if (_STAT_GET_PACKED_BOOL(9543, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(9544, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(9545, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(9546, -1))
						flag = flag + 1;
					break;
			
				case 97:
					flag = func_135(12459, -1);
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					if (_STAT_GET_PACKED_BOOL(51280, -1))
						flag = true;
					break;
			
				case 1:
					if (_STAT_GET_PACKED_BOOL(51285, -1))
						flag = true;
					break;
			
				case 2:
					if (_STAT_GET_PACKED_BOOL(51278, -1))
						flag = true;
					break;
			
				case 3:
					if (_STAT_GET_PACKED_BOOL(51286, -1) || _STAT_GET_PACKED_BOOL(51287, -1) || _STAT_GET_PACKED_BOOL(51288, -1) || _STAT_GET_PACKED_BOOL(51289, -1) || _STAT_GET_PACKED_BOOL(51290, -1) || _STAT_GET_PACKED_BOOL(51291, -1))
						flag = true;
					break;
			
				case 4:
					if (_STAT_GET_PACKED_BOOL(51286, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51287, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51288, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51289, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51290, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51291, -1))
						flag = flag + 1;
					break;
			
				case 5:
					flag = func_135(12460, -1);
					break;
			
				case 6:
					if (_STAT_GET_PACKED_BOOL(51292, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51293, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51294, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51295, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51296, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51297, -1))
						flag = flag + 1;
					break;
			
				case 7:
					if (_STAT_GET_PACKED_BOOL(51279, -1))
						flag = true;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 98:
					flag2 = func_135(12241, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 99:
					if (_STAT_GET_PACKED_BOOL(9537, -1))
						flag = true;
					break;
			
				case 100:
					if (_STAT_GET_PACKED_BOOL(7639, -1))
						flag = true;
					break;
			
				case 101:
					flag = _STAT_GET_PACKED_INT(7669, -1);
					break;
			
				case 102:
					flag = _STAT_GET_PACKED_INT(7672, -1);
					break;
			
				case 103:
					flag = func_135(12307, -1);
					break;
			
				case 104:
					flag = _STAT_GET_PACKED_INT(7670, -1);
					break;
			
				case 105:
					flag = _STAT_GET_PACKED_INT(7674, -1);
					break;
			
				case 106:
					flag = _STAT_GET_PACKED_INT(7671, -1);
					break;
			
				case 107:
					flag = _STAT_GET_PACKED_INT(26809, -1);
					break;
			
				case 108:
					flag2 = func_135(12308, -1);
					j = 0;
				
					for (j = 0; j < 24; j = j + 1)
					{
						if (IS_BIT_SET(flag2, j))
							flag = flag + 1;
					}
					break;
			
				case 109:
					flag = func_135(12253, -1);
					break;
			
				case 110:
					flag = func_135(12307, -1);
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 111:
					flag2 = func_135(12032, -1);
				
					if (flag2 > false)
						flag = true;
					break;
			
				case 112:
					if (_STAT_GET_PACKED_BOOL(42038, -1))
						flag = true;
					break;
			
				case 113:
					if (_STAT_GET_PACKED_BOOL(42041, -1))
						flag = true;
					break;
			
				case 114:
					if (_STAT_GET_PACKED_BOOL(42044, -1))
						flag = true;
					break;
			
				case 115:
					if (_STAT_GET_PACKED_BOOL(42045, -1))
						flag = true;
					break;
			
				case 116:
					flag = func_135(12044, -1);
					flag = flag + func_135(12042, -1);
					break;
			
				case 117:
					if (_STAT_GET_PACKED_BOOL(42042, -1))
					{
						flag = 5;
					}
					else
					{
						flag2 = func_135(12033, -1);
					
						if (IS_BIT_SET(flag2, 1) || IS_BIT_SET(flag2, 6))
							flag = flag + 1;
					
						if (IS_BIT_SET(flag2, 2) || IS_BIT_SET(flag2, 7))
							flag = flag + 1;
					
						if (IS_BIT_SET(flag2, 3) || IS_BIT_SET(flag2, 8))
							flag = flag + 1;
					
						if (IS_BIT_SET(flag2, 4) || IS_BIT_SET(flag2, 9))
							flag = flag + 1;
					
						if (IS_BIT_SET(flag2, 5) || IS_BIT_SET(flag2, 10))
							flag = flag + 1;
					
						if (flag == 5)
							_STAT_SET_PACKED_BOOL(42042, true, -1);
					}
					break;
			
				case 118:
					flag = func_135(12045, -1);
					break;
			
				case 119:
					if (_STAT_GET_PACKED_BOOL(42046, -1))
						flag = true;
					break;
			
				case 120:
					flag = _STAT_GET_PACKED_INT(51052, -1);
					break;
			
				case 121:
					flag = func_135(12044, -1);
					flag = flag + func_135(12042, -1);
					break;
			
				case 122:
					if (_STAT_GET_PACKED_BOOL(42047, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42048, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42049, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42050, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42051, -1))
						flag = flag + 1;
					break;
			
				case 123:
					flag = func_135(12043, -1);
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 8:
					if (_STAT_GET_PACKED_BOOL(28272, -1))
						flag = true;
					break;
			
				case 9:
					if (_STAT_GET_PACKED_BOOL(28287, -1))
						flag = true;
					break;
			
				case 10:
					if (_STAT_GET_PACKED_BOOL(28286, -1))
						flag = true;
					break;
			
				case 11:
					if (_STAT_GET_PACKED_BOOL(28285, -1))
						flag = true;
					break;
			
				case 12:
					if (_STAT_GET_PACKED_BOOL(28284, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28283, -1))
						flag = flag + 1;
					break;
			
				case 13:
					flag = func_135(12187, -1);
					break;
			
				case 14:
					if (_STAT_GET_PACKED_BOOL(28282, -1))
						flag = true;
					break;
			
				case 15:
					if (_STAT_GET_PACKED_BOOL(28273, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28274, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28275, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28276, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28277, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28278, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28279, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28280, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(28281, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 16:
					flag2 = func_135(11950, -1);
				
					if (IS_BIT_SET(flag2, 0) || IS_BIT_SET(flag2, 6) || IS_BIT_SET(flag2, 1) || IS_BIT_SET(flag2, 7) || IS_BIT_SET(flag2, 2) || IS_BIT_SET(flag2, 8) || IS_BIT_SET(flag2, 3) || IS_BIT_SET(flag2, 9) || IS_BIT_SET(flag2, 4) || IS_BIT_SET(flag2, 10) || IS_BIT_SET(flag2, 5) || IS_BIT_SET(flag2, 11))
						flag = true;
					break;
			
				case 17:
					if (_STAT_GET_PACKED_BOOL(41566, -1))
						flag = true;
					break;
			
				case 18:
					flag2 = func_135(11950, -1);
				
					if (IS_BIT_SET(flag2, 0) || IS_BIT_SET(flag2, 6))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 1) || IS_BIT_SET(flag2, 7))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 2) || IS_BIT_SET(flag2, 8))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 3) || IS_BIT_SET(flag2, 9))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 4) || IS_BIT_SET(flag2, 10))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 5) || IS_BIT_SET(flag2, 11))
						flag = flag + 1;
					break;
			
				case 19:
					if (_STAT_GET_PACKED_BOOL(41706, -1))
					{
						flag = true;
					}
					else if (func_193(2, 20) > false)
					{
						_STAT_SET_PACKED_BOOL(41706, true, -1);
						flag = true;
					}
					break;
			
				case 20:
					if (_STAT_GET_PACKED_BOOL(41567, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41568, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41569, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41570, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41571, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41572, -1))
						flag = flag + 1;
					break;
			
				case 21:
					if (_STAT_GET_PACKED_BOOL(41573, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41574, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41575, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41576, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41577, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41578, -1))
						flag = flag + 1;
					break;
			
				case 22:
					if (_STAT_GET_PACKED_BOOL(41579, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41580, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41581, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41582, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41583, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41584, -1))
						flag = flag + 1;
					break;
			
				case 23:
					if (_STAT_GET_PACKED_BOOL(41585, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41586, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41587, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41588, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41589, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41590, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
					if (func_135(5448, -1) > false)
						flag = true;
					break;
			
				case 177:
					if (func_135(5453, -1) > true)
						flag = true;
					break;
			
				case 178:
					if (_STAT_GET_PACKED_INT(9359, -1) > 0)
						flag = true;
					break;
			
				case 179:
					if (_STAT_GET_PACKED_BOOL(36870, -1))
						flag = true;
					break;
			
				case 180:
					if (func_135(5465, -1) > false)
						flag = true;
					break;
			
				case 181:
					if (func_135(5457, -1) >= true || func_135(5455, -1) >= true)
						flag = true;
					break;
			
				case 182:
					flag2 = func_135(5395, -1);
				
					if (IS_BIT_SET(flag2, 0) && IS_BIT_SET(flag2, 1) && IS_BIT_SET(flag2, 2) || IS_BIT_SET(flag2, 3) && IS_BIT_SET(flag2, 4) && IS_BIT_SET(flag2, 5) || IS_BIT_SET(flag2, 6) && IS_BIT_SET(flag2, 7) && IS_BIT_SET(flag2, 8) || IS_BIT_SET(flag2, 9) && IS_BIT_SET(flag2, 10) && IS_BIT_SET(flag2, 11) || IS_BIT_SET(flag2, 12) && IS_BIT_SET(flag2, 13) && IS_BIT_SET(flag2, 14) || IS_BIT_SET(flag2, 15) && IS_BIT_SET(flag2, 16) && IS_BIT_SET(flag2, 17))
						flag = true;
					break;
			
				case 183:
					flag = func_135(5453, -1);
					break;
			
				case 184:
					flag = func_207();
					break;
			
				case 185:
					if (_STAT_GET_PACKED_BOOL(36831, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36832, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36833, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36834, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36835, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36836, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36837, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36838, -1))
						flag = flag + 1;
					break;
			
				case 186:
					flag2 = func_135(5395, -1);
					flag = func_205(flag2);
					break;
			
				case 187:
					flag = _STAT_GET_PACKED_INT(9359, -1);
					break;
			
				case 188:
					flag = func_135(5459, -1);
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
					if (func_135(12031, -1) > false)
						flag = true;
					break;
			
				case 323:
					if (_STAT_GET_PACKED_BOOL(41672, -1))
						flag = true;
					break;
			
				case 324:
					flag = func_135(11922, -1);
					break;
			
				case 325:
					if (func_203(48, -1) >= 10)
						flag = true;
					break;
			
				case 326:
					if (_STAT_GET_PACKED_BOOL(41673, -1))
					{
						flag = 100;
					}
					else
					{
						flag = func_135(11947, -1);
					
						if (flag >= 100)
							_STAT_SET_PACKED_BOOL(41673, true, -1);
					}
					break;
			
				case 327:
					flag = _STAT_GET_PACKED_BOOL(41332, -1) ? true : 0;
					break;
			
				case 328:
					flag = _STAT_GET_PACKED_BOOL(41331, -1) ? true : 0;
					break;
			
				case 329:
					flag = func_135(11922, -1);
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
					if (func_135(1209, -1) > false)
						flag = true;
					break;
			
				case 339:
					if (func_135(11921, -1) > false)
						flag = true;
					break;
			
				case 340:
					flag = func_203(40, -1) + func_203(41, -1);
					break;
			
				case 341:
					flag = func_135(11920, -1);
					break;
			
				case 342:
					flag = func_203(40, -1) + func_203(41, -1);
					break;
			
				case 343:
					flag = func_135(11965, -1);
					break;
			
				case 344:
					flag = func_203(40, -1) + func_203(41, -1);
					break;
			
				case 345:
					if (_STAT_GET_PACKED_BOOL(36922, -1))
					{
						flag = true;
					}
					else
					{
						flag = func_135(11919, -1);
					
						if (flag >= 5)
						{
							_STAT_SET_PACKED_BOOL(36922, true, -1);
							flag = true;
						}
						else
						{
							flag = false;
						}
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					flag2 = func_135(12462, -1);
				
					if (IS_BIT_SET(flag2, 0) || IS_BIT_SET(flag2, 11))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 1) || IS_BIT_SET(flag2, 12))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 2) || IS_BIT_SET(flag2, 13))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 3) || IS_BIT_SET(flag2, 14))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 4) || IS_BIT_SET(flag2, 15))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 5) || IS_BIT_SET(flag2, 16))
						flag = flag + 1;
					break;
			
				case 125:
					if (_STAT_GET_PACKED_BOOL(42037, -1))
						flag = true;
					break;
			
				case 126:
					flag = func_135(11811, -1);
					break;
			
				case 127:
					flag2 = func_135(12462, -1);
				
					if (IS_BIT_SET(flag2, 6) || IS_BIT_SET(flag2, 17))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 7) || IS_BIT_SET(flag2, 18))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 8) || IS_BIT_SET(flag2, 19))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 9) || IS_BIT_SET(flag2, 20))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 10) || IS_BIT_SET(flag2, 21))
						flag = flag + 1;
					break;
			
				case 128:
					flag2 = func_135(10872, -1);
				
					if (IS_BIT_SET(flag2, 20))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 21))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 22))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 23))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 24))
						flag = flag + 1;
					break;
			
				case 129:
					flag = func_135(11815, -1);
					break;
			
				case 130:
					flag2 = func_135(10872, -1);
				
					if (IS_BIT_SET(flag2, 0))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 20) && IS_BIT_SET(flag2, 21) && IS_BIT_SET(flag2, 22) && IS_BIT_SET(flag2, 23) && IS_BIT_SET(flag2, 24))
						flag = flag + 1;
				
					if (func_135(11811, -1) >= 10)
						flag = flag + 1;
				
					if (func_135(11813, -1) >= 10)
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_INT(41241, -1) >= 5)
						flag = flag + 1;
				
					flag2 = func_135(12462, -1);
				
					if (IS_BIT_SET(flag2, 5))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 10))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 26))
						flag = flag + 1;
				
					if (func_135(11815, -1) >= 1000000)
						flag = flag + 1;
				
					if (flag == 9)
						flag = flag + 1;
					break;
			
				case 131:
					flag = func_135(11928, -1);
					break;
			
				case 132:
					flag = func_135(11927, -1);
					break;
			
				case 133:
					flag = _STAT_GET_PACKED_INT(42084, -1);
					break;
			
				case 134:
					flag = func_135(11811, -1);
					break;
			
				case 135:
					if (_STAT_GET_PACKED_BOOL(41660, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41661, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41662, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41663, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41664, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41665, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41666, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41667, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41668, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41669, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41670, -1))
						flag = flag + 1;
					break;
			
				case 136:
					flag = func_135(11815, -1);
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 24:
					if (func_135(10394, -1) > false)
						flag = true;
					break;
			
				case 25:
					if (_STAT_GET_PACKED_BOOL(41333, -1) || _STAT_GET_PACKED_BOOL(41334, -1) || _STAT_GET_PACKED_BOOL(41335, -1) || _STAT_GET_PACKED_BOOL(41336, -1) || _STAT_GET_PACKED_BOOL(41337, -1) || _STAT_GET_PACKED_BOOL(41338, -1))
						flag = true;
					break;
			
				case 26:
					flag2 = func_135(10394, -1);
				
					if (IS_BIT_SET(flag2, 0) || IS_BIT_SET(flag2, 7))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 1) || IS_BIT_SET(flag2, 8))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 2) || IS_BIT_SET(flag2, 9))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 3) || IS_BIT_SET(flag2, 10))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 4) || IS_BIT_SET(flag2, 11))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 5) || IS_BIT_SET(flag2, 12))
						flag = flag + 1;
					break;
			
				case 27:
					if (_STAT_GET_PACKED_BOOL(41707, -1))
					{
						flag = true;
					}
					else if (func_193(3, 28) > false)
					{
						_STAT_SET_PACKED_BOOL(41707, true, -1);
						flag = true;
					}
					break;
			
				case 28:
					if (_STAT_GET_PACKED_BOOL(41339, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41340, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41341, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41342, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41343, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41344, -1))
						flag = flag + 1;
					break;
			
				case 29:
					if (_STAT_GET_PACKED_BOOL(41345, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41346, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41347, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41348, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41349, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41350, -1))
						flag = flag + 1;
					break;
			
				case 30:
					if (_STAT_GET_PACKED_BOOL(41351, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41352, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41353, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41354, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41355, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41356, -1))
						flag = flag + 1;
					break;
			
				case 31:
					if (_STAT_GET_PACKED_BOOL(41357, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41358, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41359, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41360, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41361, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41362, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 32:
					if (func_135(8977, -1) > false)
						flag = true;
					break;
			
				case 33:
					if (_STAT_GET_PACKED_BOOL(41379, -1))
						flag = true;
					break;
			
				case 34:
					flag2 = func_135(8977, -1);
				
					if (IS_BIT_SET(flag2, 4) || IS_BIT_SET(flag2, 5))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 6) || IS_BIT_SET(flag2, 7))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 8) || IS_BIT_SET(flag2, 9))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 10) || IS_BIT_SET(flag2, 11))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 12) || IS_BIT_SET(flag2, 13))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 14) || IS_BIT_SET(flag2, 15))
						flag = flag + 1;
					break;
			
				case 35:
					if (_STAT_GET_PACKED_BOOL(41708, -1))
					{
						flag = true;
					}
					else if (func_193(4, 36) > false)
					{
						_STAT_SET_PACKED_BOOL(41708, true, -1);
						flag = true;
					}
					break;
			
				case 36:
					if (_STAT_GET_PACKED_BOOL(41380, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41381, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41382, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41383, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41384, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41385, -1))
						flag = flag + 1;
					break;
			
				case 37:
					if (_STAT_GET_PACKED_BOOL(41386, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41387, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41388, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41389, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41390, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41391, -1))
						flag = flag + 1;
					break;
			
				case 38:
					if (_STAT_GET_PACKED_BOOL(41392, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41393, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41394, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41395, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41396, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41397, -1))
						flag = flag + 1;
					break;
			
				case 39:
					if (_STAT_GET_PACKED_BOOL(41398, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41399, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41400, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41401, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41402, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41403, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 40:
					if (_STAT_GET_PACKED_BOOL(41404, -1) || _STAT_GET_PACKED_BOOL(41405, -1) || _STAT_GET_PACKED_BOOL(41406, -1) || _STAT_GET_PACKED_BOOL(41407, -1) || _STAT_GET_PACKED_BOOL(41408, -1) || _STAT_GET_PACKED_BOOL(41409, -1))
						flag = true;
					break;
			
				case 41:
					if (_STAT_GET_PACKED_BOOL(41410, -1))
						flag = true;
					break;
			
				case 42:
					if (_STAT_GET_PACKED_BOOL(41404, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41405, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41406, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41407, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41408, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41409, -1))
						flag = flag + 1;
					break;
			
				case 43:
					if (_STAT_GET_PACKED_BOOL(41709, -1))
					{
						flag = true;
					}
					else if (func_193(5, 44) > false)
					{
						_STAT_SET_PACKED_BOOL(41709, true, -1);
						flag = true;
					}
					break;
			
				case 44:
					if (_STAT_GET_PACKED_BOOL(41411, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41412, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41413, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41414, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41415, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41416, -1))
						flag = flag + 1;
					break;
			
				case 45:
					if (_STAT_GET_PACKED_BOOL(41417, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41418, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41419, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41420, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41421, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41422, -1))
						flag = flag + 1;
					break;
			
				case 46:
					if (_STAT_GET_PACKED_BOOL(41423, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41424, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41425, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41426, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41427, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41428, -1))
						flag = flag + 1;
					break;
			
				case 47:
					if (_STAT_GET_PACKED_BOOL(41429, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41430, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41431, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41432, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41433, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41434, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 48:
					if (_STAT_GET_PACKED_BOOL(41436, -1) || _STAT_GET_PACKED_BOOL(41437, -1) || _STAT_GET_PACKED_BOOL(41438, -1) || _STAT_GET_PACKED_BOOL(41439, -1) || _STAT_GET_PACKED_BOOL(41440, -1) || _STAT_GET_PACKED_BOOL(41441, -1) || _STAT_GET_PACKED_BOOL(41442, -1) || _STAT_GET_PACKED_BOOL(41443, -1))
						flag = true;
					break;
			
				case 49:
					if (_STAT_GET_PACKED_BOOL(41435, -1))
						flag = true;
					break;
			
				case 50:
					if (_STAT_GET_PACKED_BOOL(41436, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41437, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41438, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41439, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41440, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41441, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41442, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41443, -1))
						flag = flag + 1;
					break;
			
				case 51:
					if (_STAT_GET_PACKED_BOOL(41705, -1))
					{
						flag = true;
					}
					else if (func_193(6, 52) > false)
					{
						_STAT_SET_PACKED_BOOL(41705, true, -1);
						flag = true;
					}
					break;
			
				case 52:
					if (_STAT_GET_PACKED_BOOL(41444, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41445, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41446, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41447, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41448, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41449, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41450, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41451, -1))
						flag = flag + 1;
					break;
			
				case 53:
					if (_STAT_GET_PACKED_BOOL(41452, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41453, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41454, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41455, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41456, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41457, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41458, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41459, -1))
						flag = flag + 1;
					break;
			
				case 54:
					if (_STAT_GET_PACKED_BOOL(41460, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41461, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41462, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41463, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41464, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41465, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41466, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41467, -1))
						flag = flag + 1;
					break;
			
				case 55:
					if (_STAT_GET_PACKED_BOOL(41468, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41469, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41470, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41471, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41472, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41473, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41474, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41475, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 56:
					if (_STAT_GET_PACKED_BOOL(41476, -1) || _STAT_GET_PACKED_BOOL(41477, -1) || _STAT_GET_PACKED_BOOL(41478, -1) || _STAT_GET_PACKED_BOOL(41479, -1) || _STAT_GET_PACKED_BOOL(41480, -1) || _STAT_GET_PACKED_BOOL(41481, -1))
						flag = true;
					break;
			
				case 57:
					if (_STAT_GET_PACKED_BOOL(41506, -1))
						flag = true;
					break;
			
				case 58:
					if (_STAT_GET_PACKED_BOOL(41476, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41477, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41478, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41479, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41480, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41481, -1))
						flag = flag + 1;
					break;
			
				case 59:
					if (_STAT_GET_PACKED_BOOL(41710, -1))
					{
						flag = true;
					}
					else if (func_193(7, 60) > false)
					{
						_STAT_SET_PACKED_BOOL(41710, true, -1);
						flag = true;
					}
					break;
			
				case 60:
					if (_STAT_GET_PACKED_BOOL(41482, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41483, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41484, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41485, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41486, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41487, -1))
						flag = flag + 1;
					break;
			
				case 61:
					if (_STAT_GET_PACKED_BOOL(41488, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41489, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41490, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41491, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41492, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41493, -1))
						flag = flag + 1;
					break;
			
				case 62:
					if (_STAT_GET_PACKED_BOOL(41494, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41495, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41496, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41497, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41498, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41499, -1))
						flag = flag + 1;
					break;
			
				case 63:
					if (_STAT_GET_PACKED_BOOL(41500, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41501, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41502, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41503, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41504, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41505, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 64:
					if (_STAT_GET_PACKED_BOOL(42015, -1) || _STAT_GET_PACKED_BOOL(42016, -1) || _STAT_GET_PACKED_BOOL(42017, -1) || _STAT_GET_PACKED_BOOL(42018, -1) || _STAT_GET_PACKED_BOOL(42019, -1) || _STAT_GET_PACKED_BOOL(42020, -1) || _STAT_GET_PACKED_BOOL(42021, -1) || _STAT_GET_PACKED_BOOL(42022, -1))
						flag = true;
					break;
			
				case 65:
					if (_STAT_GET_PACKED_BOOL(41539, -1))
						flag = true;
					break;
			
				case 66:
					if (_STAT_GET_PACKED_BOOL(42015, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42016, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42017, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42018, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42019, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42020, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42021, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42022, -1))
						flag = flag + 1;
					break;
			
				case 67:
					if (_STAT_GET_PACKED_BOOL(41711, -1))
					{
						flag = true;
					}
					else if (func_193(8, 68) > false)
					{
						_STAT_SET_PACKED_BOOL(41711, true, -1);
						flag = true;
					}
					break;
			
				case 68:
					if (_STAT_GET_PACKED_BOOL(41507, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41508, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41509, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41510, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41511, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41512, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41513, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41514, -1))
						flag = flag + 1;
					break;
			
				case 69:
					if (_STAT_GET_PACKED_BOOL(41515, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41516, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41517, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41518, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41519, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41520, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41521, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41522, -1))
						flag = flag + 1;
					break;
			
				case 70:
					if (_STAT_GET_PACKED_BOOL(41523, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41524, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41525, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41526, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41527, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41528, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41529, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41530, -1))
						flag = flag + 1;
					break;
			
				case 71:
					if (_STAT_GET_PACKED_BOOL(41531, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41532, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41533, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41534, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41535, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41536, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41537, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41538, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					if (_STAT_GET_PACKED_BOOL(36934, -1))
					{
						flag = 5;
					}
					else
					{
						flag = _STAT_GET_PACKED_INT(41248, -1);
					
						if (flag >= 5)
						{
							_STAT_SET_PACKED_BOOL(36934, true, -1);
							flag = 5;
						}
					}
					break;
			
				case 360:
					if (_STAT_GET_PACKED_BOOL(36935, -1))
						flag = true;
					break;
			
				case 361:
					if (_STAT_GET_PACKED_BOOL(36936, -1))
						flag = true;
					break;
			
				case 362:
					if (_STAT_GET_PACKED_BOOL(36937, -1))
						flag = true;
					break;
			
				case 363:
					flag = _STAT_GET_PACKED_BOOL(36938, -1) ? true : 0;
					break;
			
				case 364:
					flag = _STAT_GET_PACKED_BOOL(36920, -1) ? true : 0;
					break;
			
				case 365:
					flag = func_205(func_135(11964, -1));
					break;
			
				case 366:
					flag = func_199();
					break;
			
				case 367:
					if (_STAT_GET_PACKED_BOOL(36942, -1))
					{
						flag = 10;
					}
					else if (_STAT_GET_PACKED_BOOL(36946, -1))
					{
						flag = func_198();
						_STAT_SET_PACKED_BOOL(36946, false, -1);
					}
					else
					{
						flag = func_196();
					}
					break;
			
				case 368:
					flag = func_135(11963, -1);
					break;
			
				case 369:
					flag = func_207();
					break;
			
				case 370:
					if (_STAT_GET_PACKED_BOOL(36941, -1))
					{
						flag = 50;
					}
					else
					{
						flag = _STAT_GET_PACKED_INT(41248, -1);
					
						if (flag >= 50)
						{
							_STAT_SET_PACKED_BOOL(36941, true, -1);
							flag = 50;
						}
					}
					break;
			
				case 371:
					if (_STAT_GET_PACKED_BOOL(15456, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(15457, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(15458, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(15459, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(15460, -1))
						flag = flag + 1;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 137:
					flag = _STAT_GET_PACKED_BOOL(28257, -1) ? true : 0;
					break;
			
				case 138:
					if (func_135(9910, -1) > false)
						flag = true;
					break;
			
				case 139:
					if (IS_BIT_SET(func_135(9905, -1), 0))
						flag = true;
					break;
			
				case 140:
					if (func_194(128, -1) || func_194(129, -1) || func_194(130, -1))
						flag = true;
					break;
			
				case 141:
					flag = func_203(118, -1);
					break;
			
				case 142:
					flag = func_135(9910, -1);
					break;
			
				case 143:
					if (IS_BIT_SET(func_135(9905, -1), 2))
						flag = true;
					break;
			
				case 144:
					flag = func_135(11930, -1);
					break;
			
				case 145:
					if (func_194(134, -1))
						flag = flag + 1;
				
					if (func_194(135, -1))
						flag = flag + 1;
				
					if (func_194(136, -1))
						flag = flag + 1;
				
					if (func_194(140, -1))
						flag = flag + 1;
				
					if (func_194(141, -1))
						flag = flag + 1;
				
					if (func_194(142, -1))
						flag = flag + 1;
					break;
			
				case 146:
					flag = _STAT_GET_PACKED_INT(42085, -1);
					break;
			
				case 147:
					flag = func_135(11931, -1);
					break;
			
				case 148:
					flag = func_135(11930, -1);
					break;
			
				case 149:
					flag = func_135(9911, -1);
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 228:
					if (func_135(9631, -1) == true && _STAT_GET_PACKED_BOOL(31737, -1))
						flag = true;
					break;
			
				case 229:
					if (_STAT_GET_PACKED_BOOL(41870, -1))
					{
						flag = true;
					}
					else if (func_203(111, -1) > false)
					{
						flag = true;
						_STAT_SET_PACKED_BOOL(41870, true, -1);
					}
					break;
			
				case 230:
					flag = _STAT_GET_PACKED_BOOL(31753, -1) ? true : 0;
					break;
			
				case 231:
					if (func_135(9620, -1) > false)
						flag = true;
					break;
			
				case 232:
					flag = func_203(112, -1);
					break;
			
				case 233:
					flag = func_203(107, -1);
					break;
			
				case 234:
					flag = func_205(func_135(9620, -1));
					break;
			
				case 235:
					flag = _STAT_GET_PACKED_BOOL(32397, -1) ? true : 0;
					break;
			
				case 236:
					flag = func_194(114, -1) ? true : 0;
					break;
			
				case 237:
					flag = _STAT_GET_PACKED_INT(30226, -1);
					break;
			
				case 238:
					flag = func_135(9622, -1);
					break;
			
				case 239:
					flag = func_135(11932, -1);
					break;
			
				case 240:
					flag = func_203(107, -1);
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 254:
					flag = _STAT_GET_PACKED_BOOL(30309, -1) ? true : 0;
					break;
			
				case 255:
					flag = _STAT_GET_PACKED_BOOL(30522, -1) ? true : 0;
					break;
			
				case 256:
					if (IS_BIT_SET(func_135(9526, -1), 0) || IS_BIT_SET(func_135(9511, -1), 1))
						flag = true;
					break;
			
				case 257:
					if (IS_BIT_SET(func_135(9511, -1), 1))
						flag = true;
					break;
			
				case 258:
					if (func_135(9586, -1) > false)
						flag = true;
					break;
			
				case 259:
					flag = func_203(100, -1);
					break;
			
				case 260:
					flag = _STAT_GET_PACKED_BOOL(41677, -1) ? true : 0;
					break;
			
				case 261:
					flag = func_135(11933, -1);
					break;
			
				case 262:
					flag = func_205(func_135(9586, -1));
					break;
			
				case 263:
					flag = _STAT_GET_PACKED_INT(42094, -1);
					break;
			
				case 264:
					flag2 = func_135(9511, -1);
				
					if (IS_BIT_SET(flag2, 7))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 8))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 9))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 11))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 6))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 10))
						flag = flag + 1;
					break;
			
				case 265:
					if (func_135(9544, -1) > false)
						flag = flag + 1;
				
					if (func_135(9545, -1) > false)
						flag = flag + 1;
				
					if (func_135(9546, -1) > false)
						flag = flag + 1;
				
					if (func_135(9547, -1) > false)
						flag = flag + 1;
				
					if (func_135(9548, -1) > false)
						flag = flag + 1;
				
					if (func_135(9549, -1) > false)
						flag = flag + 1;
					break;
			
				case 266:
					flag = func_135(11926, -1);
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 267:
					flag2 = func_135(8726, -1);
				
					if (func_205(flag2) > true || IS_BIT_SET(flag2, 1))
						flag = true;
					break;
			
				case 268:
					if (_STAT_GET_PACKED_BOOL(28270, -1))
						flag = true;
					break;
			
				case 269:
					if (_STAT_GET_PACKED_BOOL(36842, -1))
						flag = true;
					break;
			
				case 270:
					if (IS_BIT_SET(func_135(8726, -1), 10))
						flag = true;
					break;
			
				case 271:
					flag = func_203(88, -1);
					break;
			
				case 272:
					if (_STAT_GET_PACKED_BOOL(32399, -1))
						flag = true;
					break;
			
				case 273:
					flag2 = func_135(8726, -1);
				
					if (IS_BIT_SET(flag2, 11))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 12))
						flag = flag + 1;
				
					if (IS_BIT_SET(flag2, 13))
						flag = flag + 1;
					break;
			
				case 274:
					if (func_194(64, -1))
						flag = true;
					break;
			
				case 275:
					if (_STAT_GET_PACKED_BOOL(42025, -1))
						flag = true;
					break;
			
				case 276:
					flag = _STAT_GET_PACKED_INT(42086, -1);
					break;
			
				case 277:
					if (_STAT_GET_PACKED_BOOL(41678, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41679, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41680, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41681, -1))
						flag = flag + 1;
					break;
			
				case 278:
					flag = func_135(11925, -1);
					break;
			
				case 279:
					flag = func_203(90, -1);
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 241:
					if (_STAT_GET_PACKED_BOOL(27089, -1))
						flag = true;
					break;
			
				case 242:
					if (_STAT_GET_PACKED_BOOL(27090, -1))
						flag = true;
					break;
			
				case 243:
					flag2 = func_135(8283, -1);
				
					if (IS_BIT_SET(flag2, 6) || IS_BIT_SET(flag2, 12))
						flag = true;
					break;
			
				case 244:
					flag2 = func_135(8283, -1);
				
					if (IS_BIT_SET(flag2, 11) || IS_BIT_SET(flag2, 17))
						flag = true;
					break;
			
				case 245:
					if (_STAT_GET_PACKED_BOOL(36916, -1))
						flag = true;
					break;
			
				case 246:
					if (func_203(87, -1) > false)
						flag = true;
					break;
			
				case 247:
					if (_STAT_GET_PACKED_BOOL(36844, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36845, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36846, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36847, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36848, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36849, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36850, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36851, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36852, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36853, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36854, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36855, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36856, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36857, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36858, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36859, -1))
						flag = flag + 1;
					break;
			
				case 248:
					if (_STAT_GET_PACKED_BOOL(41548, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41549, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41550, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41551, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41552, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41553, -1))
						flag = flag + 1;
					break;
			
				case 249:
					if (_STAT_GET_PACKED_BOOL(41868, -1))
						flag = true;
					break;
			
				case 250:
					flag = _STAT_GET_PACKED_INT(42093, -1);
					break;
			
				case 251:
					if (_STAT_GET_PACKED_BOOL(41560, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41561, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41562, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41563, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41564, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41565, -1))
						flag = flag + 1;
					break;
			
				case 252:
					if (_STAT_GET_PACKED_BOOL(41554, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41555, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41556, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41557, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41558, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41559, -1))
						flag = flag + 1;
					break;
			
				case 253:
					flag = func_203(87, -1);
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 280:
					if (_STAT_GET_PACKED_BOOL(18139, -1))
						flag = true;
					break;
			
				case 281:
					if (_STAT_GET_PACKED_BOOL(36861, -1))
						flag = true;
					break;
			
				case 282:
					flag2 = func_135(5664, -1);
				
					if (IS_BIT_SET(flag2, 0) || IS_BIT_SET(flag2, 1) || IS_BIT_SET(flag2, 2))
						flag = true;
					break;
			
				case 283:
					if (_STAT_GET_PACKED_BOOL(41712, -1))
						flag = true;
					break;
			
				case 284:
					if (_STAT_GET_PACKED_BOOL(36862, -1))
						flag = true;
					break;
			
				case 285:
					if (_STAT_GET_PACKED_BOOL(41713, -1))
						flag = true;
					break;
			
				case 286:
					if (_STAT_GET_PACKED_BOOL(36863, -1))
						flag = true;
					break;
			
				case 287:
					if (_STAT_GET_PACKED_BOOL(41714, -1))
						flag = true;
					break;
			
				case 288:
					flag = func_135(11935, -1);
					break;
			
				case 289:
					flag = _STAT_GET_PACKED_INT(42087, -1);
					break;
			
				case 290:
					if (_STAT_GET_PACKED_BOOL(41685, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41690, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41696, -1))
						flag = flag + 1;
					break;
			
				case 291:
					if (_STAT_GET_PACKED_BOOL(41697, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41698, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41699, -1))
						flag = flag + 1;
					break;
			
				case 292:
					flag = func_135(11924, -1);
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 306:
					if (_STAT_GET_PACKED_BOOL(25009, -1))
						flag = true;
					break;
			
				case 307:
					if (func_135(7864, -1) > false || func_135(7865, -1) > false)
						flag = true;
				
					if (_STAT_GET_PACKED_BOOL(41647, -1) || _STAT_GET_PACKED_BOOL(41648, -1) || _STAT_GET_PACKED_BOOL(41649, -1) || _STAT_GET_PACKED_BOOL(41650, -1) || _STAT_GET_PACKED_BOOL(41651, -1) || _STAT_GET_PACKED_BOOL(41652, -1) || _STAT_GET_PACKED_BOOL(41653, -1) || _STAT_GET_PACKED_BOOL(41654, -1) || _STAT_GET_PACKED_BOOL(41655, -1))
						flag = true;
					break;
			
				case 308:
					flag = _STAT_GET_PACKED_INT(22063, -1);
					break;
			
				case 309:
					flag = func_135(7852, -1);
					break;
			
				case 310:
					if (_STAT_GET_PACKED_BOOL(41647, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41648, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41649, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41650, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41651, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41652, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41653, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41654, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41655, -1))
						flag = flag + 1;
					break;
			
				case 311:
					flag = _STAT_GET_PACKED_INT(42088, -1);
					break;
			
				case 312:
					flag = _STAT_GET_PACKED_INT(22063, -1);
					break;
			
				case 313:
					flag = func_135(7852, -1);
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 150:
					if (_STAT_GET_PACKED_BOOL(22067, -1))
						flag = true;
					break;
			
				case 151:
					if (func_135(7231, -1) > false)
						flag = true;
					break;
			
				case 152:
					flag = func_135(12010, -1);
					break;
			
				case 153:
					if (_STAT_GET_PACKED_BOOL(22082, -1) || _STAT_GET_PACKED_BOOL(22083, -1) || _STAT_GET_PACKED_BOOL(15533, -1))
						flag = true;
					break;
			
				case 154:
					flag = _STAT_GET_PACKED_BOOL(36868, -1) ? true : 0;
					break;
			
				case 155:
					if (_STAT_GET_PACKED_BOOL(36944, -1))
						flag = true;
					break;
			
				case 156:
					if (_STAT_GET_PACKED_BOOL(22067, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(22082, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(22083, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(15533, -1))
						flag = flag + 1;
					break;
			
				case 157:
					if (_STAT_GET_PACKED_BOOL(41989, -1))
						flag = Global_262145.f_23684;
					else
						flag = func_135(7212, -1);
					break;
			
				case 158:
					flag = func_135(7231, -1);
					break;
			
				case 159:
					flag = _STAT_GET_PACKED_INT(42089, -1);
					break;
			
				case 160:
					flag = func_135(7230, -1);
					break;
			
				case 161:
					flag = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(func_135(12025, -1) / 60));
					break;
			
				case 162:
					flag = func_135(7234, -1);
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 163:
					if (_STAT_GET_PACKED_BOOL(15966, -1))
						flag = true;
					break;
			
				case 164:
					if (func_135(6116, -1) > false)
						flag = true;
					break;
			
				case 165:
					if (_STAT_GET_PACKED_BOOL(41676, -1))
						flag = true;
					break;
			
				case 166:
					if (_STAT_GET_PACKED_BOOL(32398, -1))
						flag = true;
					break;
			
				case 167:
					flag = func_135(6116, -1);
					break;
			
				case 168:
					if (func_135(6118, -1) > false)
						flag = true;
					break;
			
				case 169:
					flag = func_135(6116, -1);
					break;
			
				case 170:
					if (_STAT_GET_PACKED_BOOL(41987, -1))
						flag = 50;
					else
						flag = func_135(6104, -1);
					break;
			
				case 171:
					flag = _STAT_GET_PACKED_BOOL(36924, -1) ? true : 0;
					break;
			
				case 172:
					flag = func_135(6116, -1);
					break;
			
				case 173:
					flag = func_135(11959, -1);
					break;
			
				case 174:
					if (_STAT_GET_PACKED_BOOL(36925, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36926, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36927, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36928, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36929, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36930, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36931, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36932, -1))
						flag = flag + 1;
					break;
			
				case 175:
					flag = func_135(6119, -1);
					flag = flag + func_135(6120, -1);
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 189:
					if (func_135(5303, -1) > false)
						flag = true;
					break;
			
				case 190:
					if (func_135(5332, -1) > false)
						flag = true;
					break;
			
				case 191:
					if (_STAT_GET_PACKED_BOOL(42029, -1) || _STAT_GET_PACKED_BOOL(42030, -1) || _STAT_GET_PACKED_BOOL(42031, -1) || _STAT_GET_PACKED_BOOL(42032, -1) || _STAT_GET_PACKED_BOOL(42033, -1) || _STAT_GET_PACKED_BOOL(42034, -1) || _STAT_GET_PACKED_BOOL(42035, -1) || _STAT_GET_PACKED_BOOL(42036, -1))
						flag = flag + 1;
					break;
			
				case 192:
					if (_STAT_GET_PACKED_BOOL(41874, -1) || _STAT_GET_PACKED_BOOL(41875, -1) || _STAT_GET_PACKED_BOOL(41876, -1) || _STAT_GET_PACKED_BOOL(41877, -1) || _STAT_GET_PACKED_BOOL(41878, -1) || _STAT_GET_PACKED_BOOL(41879, -1) || _STAT_GET_PACKED_BOOL(41880, -1) || _STAT_GET_PACKED_BOOL(41881, -1) || _STAT_GET_PACKED_BOOL(41882, -1) || _STAT_GET_PACKED_BOOL(41883, -1))
						flag = true;
					break;
			
				case 193:
					if (func_135(11941, -1) > false)
						flag = true;
					break;
			
				case 194:
					flag = func_135(11940, -1);
					break;
			
				case 195:
					flag = func_135(5332, -1);
					break;
			
				case 196:
					if (_STAT_GET_PACKED_BOOL(41988, -1))
						flag = 40;
					else
						flag = _STAT_GET_PACKED_INT(42095, -1);
					break;
			
				case 197:
					if (_STAT_GET_PACKED_BOOL(42029, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42030, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42031, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42032, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42033, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42034, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42035, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42036, -1))
						flag = flag + 1;
					break;
			
				case 198:
					if (_STAT_GET_PACKED_BOOL(41874, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41875, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41876, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41877, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41878, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41879, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41880, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41881, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41882, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41883, -1))
						flag = flag + 1;
					break;
			
				case 199:
					if (_STAT_GET_PACKED_BOOL(41540, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41541, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41542, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41543, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41544, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41545, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41546, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41547, -1))
						flag = flag + 1;
					break;
			
				case 200:
					flag = func_135(11941, -1);
					break;
			
				case 201:
					flag = func_135(5333, -1);
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 202:
					flag = _STAT_GET_PACKED_BOOL(36871, -1) ? true : 0;
					break;
			
				case 203:
					flag = _STAT_GET_PACKED_BOOL(36872, -1) ? true : 0;
					break;
			
				case 204:
					if (_STAT_GET_PACKED_BOOL(36875, -1) || _STAT_GET_PACKED_BOOL(36884, -1) || _STAT_GET_PACKED_BOOL(36885, -1) || _STAT_GET_PACKED_BOOL(36877, -1) || _STAT_GET_PACKED_BOOL(36880, -1) || _STAT_GET_PACKED_BOOL(36878, -1) || _STAT_GET_PACKED_BOOL(36883, -1) || _STAT_GET_PACKED_BOOL(36876, -1) || _STAT_GET_PACKED_BOOL(36882, -1) || _STAT_GET_PACKED_BOOL(36881, -1) || _STAT_GET_PACKED_BOOL(36879, -1) || _STAT_GET_PACKED_BOOL(36887, -1) || _STAT_GET_PACKED_BOOL(36886, -1))
						flag = flag + 1;
					break;
			
				case 205:
					flag = _STAT_GET_PACKED_BOOL(36873, -1) ? true : 0;
					break;
			
				case 206:
					if (_STAT_GET_PACKED_BOOL(42001, -1))
						flag = true;
					break;
			
				case 207:
					if (_STAT_GET_PACKED_BOOL(36874, -1))
						flag = true;
					break;
			
				case 208:
					if (_STAT_GET_PACKED_BOOL(36875, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36876, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36877, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36878, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36879, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36880, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36881, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36882, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36883, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36884, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36885, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36886, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36887, -1))
						flag = flag + 1;
					break;
			
				case 209:
					if (func_135(3913, -1) > false || func_135(3903, -1) > false)
						flag = flag + 1;
				
					if (func_135(3946, -1) > false || func_135(3932, -1) > false)
						flag = flag + 1;
				
					if (func_135(3948, -1) > false || func_135(3936, -1) > false)
						flag = flag + 1;
				
					if (func_135(3950, -1) > false || func_135(3940, -1) > false)
						flag = flag + 1;
				
					if (func_135(3952, -1) > false || func_135(3944, -1) > false)
						flag = flag + 1;
					break;
			
				case 210:
					flag = func_135(10411, -1);
					break;
			
				case 211:
					flag = flag + func_135(3954, -1);
					flag = flag + func_135(3955, -1);
					flag = flag + func_135(3956, -1);
					flag = flag + func_135(3957, -1);
					flag = flag + func_135(3958, -1);
					break;
			
				case 212:
					flag = func_135(11943, -1);
					break;
			
				case 213:
					flag = func_135(11969, -1);
					break;
			
				case 214:
					flag = func_135(11942, -1);
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 215:
					flag = _STAT_GET_PACKED_BOOL(36888, -1) ? true : 0;
					break;
			
				case 216:
					flag = _STAT_GET_PACKED_BOOL(36889, -1) ? true : 0;
					break;
			
				case 217:
					if (_STAT_GET_PACKED_BOOL(36892, -1) || _STAT_GET_PACKED_BOOL(36893, -1) || _STAT_GET_PACKED_BOOL(36894, -1) || _STAT_GET_PACKED_BOOL(36895, -1) || _STAT_GET_PACKED_BOOL(36896, -1) || _STAT_GET_PACKED_BOOL(36897, -1) || _STAT_GET_PACKED_BOOL(36898, -1) || _STAT_GET_PACKED_BOOL(36899, -1) || _STAT_GET_PACKED_BOOL(36900, -1) || _STAT_GET_PACKED_BOOL(36901, -1) || _STAT_GET_PACKED_BOOL(36902, -1) || _STAT_GET_PACKED_BOOL(36903, -1) || _STAT_GET_PACKED_BOOL(36904, -1) || _STAT_GET_PACKED_BOOL(36905, -1) || _STAT_GET_PACKED_BOOL(36906, -1) || _STAT_GET_PACKED_BOOL(36907, -1) || _STAT_GET_PACKED_BOOL(36908, -1) || _STAT_GET_PACKED_BOOL(36909, -1) || _STAT_GET_PACKED_BOOL(36910, -1) || _STAT_GET_PACKED_BOOL(36911, -1) || _STAT_GET_PACKED_BOOL(36912, -1) || _STAT_GET_PACKED_BOOL(36913, -1) || _STAT_GET_PACKED_BOOL(36945, -1) || _STAT_GET_PACKED_BOOL(36914, -1) || _STAT_GET_PACKED_BOOL(36915, -1))
						flag = flag + 1;
					break;
			
				case 218:
					flag = _STAT_GET_PACKED_BOOL(36890, -1) ? true : 0;
					break;
			
				case 219:
					if (func_135(3639, -1) > false)
						flag = true;
					break;
			
				case 220:
					if (func_135(3667, -1) > false)
						flag = true;
					break;
			
				case 221:
					if (_STAT_GET_PACKED_BOOL(7559, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7589, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7592, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7577, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7568, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7583, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7571, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7574, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7586, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7562, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(7553, -1))
						flag = flag + 1;
					break;
			
				case 222:
					flag = _STAT_GET_PACKED_BOOL(36891, -1) ? true : 0;
					break;
			
				case 223:
				case 224:
					if (_STAT_GET_PACKED_BOOL(36892, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36893, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36894, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36895, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36896, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36897, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36898, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36899, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36900, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36901, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36902, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36903, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36904, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36905, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36906, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36907, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36908, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36909, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36910, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36911, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36912, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36913, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36945, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36914, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36915, -1))
						flag = flag + 1;
					break;
			
				case 225:
					if (_STAT_GET_PACKED_BOOL(36860, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36839, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36841, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36843, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36864, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36865, -1))
						flag = flag + 1;
					break;
			
				case 226:
					flag = flag + func_135(11970, -1);
					break;
			
				case 227:
					flag = func_135(3671, -1);
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 330:
					if (func_135(1210, -1) > false || _STAT_GET_PACKED_BOOL(42023, -1))
						flag = true;
					break;
			
				case 331:
					if (_STAT_GET_PACKED_BOOL(41363, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41364, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41365, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41366, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41367, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41368, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41369, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41370, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41371, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41372, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41373, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41374, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41375, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41376, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41377, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41378, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42026, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42027, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42028, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42150, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(42151, -1))
						flag = flag + 1;
					break;
			
				case 332:
					flag = func_135(819, -1);
					flag = flag + func_135(12029, -1);
					flag = flag + func_135(12030, -1);
					break;
			
				case 333:
					flag = func_135(819, -1);
					flag = flag + func_135(12029, -1);
					flag = flag + func_135(12030, -1);
					break;
			
				case 334:
					flag = flag + func_205(func_135(11929, -1));
					flag = flag + func_205(func_135(11966, -1));
					flag = flag + func_205(func_135(11967, -1));
					flag = flag + func_205(func_135(11968, -1));
					break;
			
				case 335:
					flag = _STAT_GET_PACKED_INT(41246, -1);
					break;
			
				case 336:
					flag = func_135(12026, -1);
					break;
			
				case 337:
					flag = func_135(819, -1);
					flag = flag + func_135(12029, -1);
					flag = flag + func_135(12030, -1);
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 314:
					if (_STAT_GET_PACKED_BOOL(41594, -1) || _STAT_GET_PACKED_BOOL(41595, -1) || _STAT_GET_PACKED_BOOL(41596, -1) || _STAT_GET_PACKED_BOOL(41597, -1) || _STAT_GET_PACKED_BOOL(41598, -1) || _STAT_GET_PACKED_BOOL(41599, -1) || _STAT_GET_PACKED_BOOL(41600, -1) || _STAT_GET_PACKED_BOOL(41601, -1) || _STAT_GET_PACKED_BOOL(41602, -1) || _STAT_GET_PACKED_BOOL(41603, -1) || _STAT_GET_PACKED_BOOL(41604, -1) || _STAT_GET_PACKED_BOOL(41605, -1) || _STAT_GET_PACKED_BOOL(41606, -1) || _STAT_GET_PACKED_BOOL(41607, -1) || _STAT_GET_PACKED_BOOL(41608, -1) || _STAT_GET_PACKED_BOOL(41609, -1) || _STAT_GET_PACKED_BOOL(41610, -1) || _STAT_GET_PACKED_BOOL(41611, -1) || _STAT_GET_PACKED_BOOL(41612, -1) || _STAT_GET_PACKED_BOOL(41613, -1) || _STAT_GET_PACKED_BOOL(41614, -1) || _STAT_GET_PACKED_BOOL(41615, -1) || _STAT_GET_PACKED_BOOL(41616, -1) || _STAT_GET_PACKED_BOOL(41617, -1) || _STAT_GET_PACKED_BOOL(41618, -1) || _STAT_GET_PACKED_BOOL(41619, -1) || _STAT_GET_PACKED_BOOL(41620, -1) || _STAT_GET_PACKED_BOOL(41621, -1) || _STAT_GET_PACKED_BOOL(41622, -1) || _STAT_GET_PACKED_BOOL(41623, -1) || _STAT_GET_PACKED_BOOL(41624, -1) || _STAT_GET_PACKED_BOOL(41625, -1) || _STAT_GET_PACKED_BOOL(41626, -1) || _STAT_GET_PACKED_BOOL(41627, -1) || _STAT_GET_PACKED_BOOL(41628, -1) || _STAT_GET_PACKED_BOOL(41629, -1) || _STAT_GET_PACKED_BOOL(41630, -1) || _STAT_GET_PACKED_BOOL(41631, -1) || _STAT_GET_PACKED_BOOL(41632, -1) || _STAT_GET_PACKED_BOOL(41633, -1) || _STAT_GET_PACKED_BOOL(41634, -1) || _STAT_GET_PACKED_BOOL(41635, -1) || _STAT_GET_PACKED_BOOL(41636, -1) || _STAT_GET_PACKED_BOOL(41637, -1) || _STAT_GET_PACKED_BOOL(41638, -1) || _STAT_GET_PACKED_BOOL(41639, -1) || _STAT_GET_PACKED_BOOL(41640, -1) || _STAT_GET_PACKED_BOOL(41641, -1) || _STAT_GET_PACKED_BOOL(41642, -1) || _STAT_GET_PACKED_BOOL(41643, -1) || _STAT_GET_PACKED_BOOL(41644, -1) || _STAT_GET_PACKED_BOOL(41645, -1) || _STAT_GET_PACKED_BOOL(41646, -1) || _STAT_GET_PACKED_BOOL(41656, -1) || _STAT_GET_PACKED_BOOL(51339, -1))
						flag = true;
					break;
			
				case 315:
					if (_STAT_GET_PACKED_BOOL(36840, -1))
						flag = true;
					break;
			
				case 316:
				case 318:
				case 320:
					flag = func_135(11917, -1);
					break;
			
				case 317:
				case 319:
					if (_STAT_GET_PACKED_BOOL(41594, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41595, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41596, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41597, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41598, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41599, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41600, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41601, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41602, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41603, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41604, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41605, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41606, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41607, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41608, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41609, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41610, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41611, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41612, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41613, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41614, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41615, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41616, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41617, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41618, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41619, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41620, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41621, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41622, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41623, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41624, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41625, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41626, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41627, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41628, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41629, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41630, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41631, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41632, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41633, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41634, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41635, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41636, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41637, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41638, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41639, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41640, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41641, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41642, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41643, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41644, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41645, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41646, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41656, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(51339, -1))
						flag = flag + 1;
					break;
			
				case 321:
					if (_STAT_GET_PACKED_BOOL(36921, -1))
						flag = true;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 293:
					if (_STAT_GET_PACKED_BOOL(36867, -1))
						flag = true;
					break;
			
				case 294:
					if (_STAT_GET_PACKED_BOOL(36933, -1))
						flag = true;
					break;
			
				case 295:
					if (_STAT_GET_PACKED_BOOL(41700, -1))
						flag = true;
					break;
			
				case 296:
					if (_STAT_GET_PACKED_BOOL(41715, -1))
						flag = true;
					break;
			
				case 297:
					if (_STAT_GET_PACKED_BOOL(41716, -1))
						flag = true;
					break;
			
				case 298:
					if (_STAT_GET_PACKED_BOOL(41717, -1))
						flag = true;
					break;
			
				case 299:
					if (_STAT_GET_PACKED_BOOL(41718, -1))
						flag = true;
					break;
			
				case 300:
					if (_STAT_GET_PACKED_BOOL(41719, -1))
						flag = true;
					break;
			
				case 301:
					flag = _STAT_GET_PACKED_INT(42100, -1);
					break;
			
				case 302:
					flag = _STAT_GET_PACKED_INT(42090, -1);
					break;
			
				case 303:
					flag = func_135(11923, -1);
					break;
			
				case 304:
					if (_STAT_GET_PACKED_BOOL(41701, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41702, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41703, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41704, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(36917, -1))
						flag = flag + 1;
					break;
			
				case 305:
					if (_STAT_GET_PACKED_BOOL(42000, -1))
						flag = true;
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 346:
					flag = _STAT_GET_PACKED_BOOL(41864, -1) ? true : 0;
					break;
			
				case 347:
					if (_STAT_GET_PACKED_BOOL(42014, -1))
						flag = true;
					break;
			
				case 348:
					flag = _STAT_GET_PACKED_BOOL(41865, -1) ? true : 0;
					break;
			
				case 349:
					flag = _STAT_GET_PACKED_BOOL(41863, -1) ? true : 0;
					break;
			
				case 350:
					flag = _STAT_GET_PACKED_BOOL(41840, -1) ? true : 0;
					break;
			
				case 351:
					flag = _STAT_GET_PACKED_BOOL(41839, -1) ? true : 0;
					break;
			
				case 352:
					flag = _STAT_GET_PACKED_BOOL(41841, -1) ? true : 0;
					break;
			
				case 353:
					flag = _STAT_GET_PACKED_BOOL(41838, -1) ? true : 0;
					break;
			
				case 354:
					flag = _STAT_GET_PACKED_INT(42092, -1);
					break;
			
				case 355:
					flag = _STAT_GET_PACKED_INT(42091, -1);
					break;
			
				case 356:
					flag = func_135(11975, -1);
				
					if (flag > 100)
						flag = 99;
				
					if (_STAT_GET_PACKED_BOOL(41866, -1))
						flag = flag + 1;
					break;
			
				case 357:
					if (_STAT_GET_PACKED_BOOL(41842, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41843, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41844, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41845, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41846, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41847, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41848, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41849, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41850, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41851, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41852, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41853, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41854, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41855, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41856, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41857, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41858, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41859, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41860, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41861, -1))
						flag = flag + 1;
				
					if (_STAT_GET_PACKED_BOOL(41862, -1))
						flag = flag + 1;
					break;
			
				case 358:
					flag = func_135(11974, -1);
					break;
			}
			break;
	
		default:
			flag = false;
			break;
	}

	if (flag < false)
		flag = func_175(iParam0, iParam1);

	return flag;
}

BOOL func_194(int iParam0, int iParam1) // Position - 0xEB6C (60268)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_195(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_195(int iParam0, int iParam1) // Position - 0xEB90 (60304)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_130(iParam1));
}

BOOL func_196() // Position - 0xEBA6 (60326)
{
	int num;
	BOOL flag;

	num = _STAT_GET_PACKED_INT(41244, -1);

	if (num == 0)
		return 0;

	flag = func_135(11960, -1);

	if (Global_2740191.f_6950.f_3 - flag >= 2)
	{
		func_197(41244, false, -1);
		return 0;
	}

	return num;
}

void func_197(int iParam0, BOOL bParam1, int iParam2) // Position - 0xEBED (60397)
{
	if (iParam2 == -1)
		iParam2 = func_68();

	if (bParam1 < 0)
		bParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, bParam1, iParam2);
	return;
}

BOOL func_198() // Position - 0xEC15 (60437)
{
	BOOL flag;
	BOOL flag2;

	flag = _STAT_GET_PACKED_INT(41244, -1);
	flag2 = func_135(11960, -1);

	if (Global_2740191.f_6950.f_3 - flag2 >= 2)
	{
		flag = true;
	}
	else if (Global_2740191.f_6950.f_3 - flag2 == 1)
	{
		flag = flag + 1;
	
		if (flag == 10)
			_STAT_SET_PACKED_BOOL(36942, true, -1);
	}

	func_197(41244, flag, -1);
	func_263(11960, Global_2740191.f_6950.f_3, -1, true);
	return flag;
}

BOOL func_199() // Position - 0xEC8E (60558)
{
	BOOL address;
	int i;
	Hash weaponHash;
	int num;

	address = _STAT_GET_PACKED_INT(41242, -1);
	i = 0;

	for (i = 0; i < 103; i = i + 1)
	{
		weaponHash = func_201(i);
		num = func_200(i);
	
		if (num == 17296)
		{
		}
		else if (IS_BIT_SET(func_135(num, -1), i % 32))
		{
			switch (WEAPON::GET_WEAPONTYPE_GROUP(weaponHash))
			{
				case joaat("GROUP_MELEE"):
					MISC::SET_BIT(&address, 0);
					break;
			
				case joaat("GROUP_PISTOL"):
					MISC::SET_BIT(&address, 1);
					break;
			
				case joaat("GROUP_MG"):
				case joaat("GROUP_SMG"):
					MISC::SET_BIT(&address, 2);
					break;
			
				case joaat("GROUP_RIFLE"):
					MISC::SET_BIT(&address, 3);
					break;
			
				case joaat("GROUP_SHOTGUN"):
					MISC::SET_BIT(&address, 4);
					break;
			
				case joaat("GROUP_SNIPER"):
					MISC::SET_BIT(&address, 5);
					break;
			
				case joaat("GROUP_HEAVY"):
					MISC::SET_BIT(&address, 6);
					break;
			
				case joaat("GROUP_THROWN"):
					MISC::SET_BIT(&address, 7);
					break;
			}
		}
	}

	func_197(41242, address, -1);
	return func_205(address);
}

int func_200(int iParam0) // Position - 0xED84 (60804)
{
	iParam0 = iParam0 / 32;

	switch (iParam0)
	{
		case 0:
			return 800;
	
		case 1:
			return 801;
	
		case 2:
			return 2420;
	
		case 3:
			return 10276;
	
		case 4:
			return 12213;
	
		case 5:
			return 12301;
	}

	return 17296;
}

Hash func_201(int iParam0) // Position - 0xEDF7 (60919)
{
	switch (iParam0)
	{
		case 34:
			return joaat("WEAPON_KNIFE");
	
		case 1:
			return joaat("WEAPON_PISTOL");
	
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
	
		case 3:
			return joaat("WEAPON_APPISTOL");
	
		case 5:
			return joaat("WEAPON_SMG");
	
		case 7:
			return joaat("WEAPON_MICROSMG");
	
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
	
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
	
		case 11:
			return joaat("WEAPON_ADVANCEDRIFLE");
	
		case 12:
			return joaat("WEAPON_MG");
	
		case 13:
			return joaat("WEAPON_COMBATMG");
	
		case 15:
			return joaat("WEAPON_STICKYBOMB");
	
		case 16:
			return joaat("WEAPON_GRENADE");
	
		case 17:
			return joaat("WEAPON_SMOKEGRENADE");
	
		case 60:
			return joaat("WEAPON_PROXMINE");
	
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
	
		case 20:
			return joaat("WEAPON_SNIPERRIFLE");
	
		case 21:
			return joaat("WEAPON_HEAVYSNIPER");
	
		case 56:
			return joaat("WEAPON_MARKSMANRIFLE");
	
		case 22:
			return joaat("WEAPON_PUMPSHOTGUN");
	
		case 24:
			return joaat("WEAPON_ASSAULTSHOTGUN");
	
		case 25:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
	
		case 55:
			return joaat("WEAPON_HEAVYSHOTGUN");
	
		case 26:
			return joaat("WEAPON_GRENADELAUNCHER");
	
		case 27:
			return joaat("WEAPON_RPG");
	
		case 28:
			return joaat("WEAPON_MINIGUN");
	
		case 61:
			return joaat("WEAPON_HOMINGLAUNCHER");
	
		case 31:
			return joaat("WEAPON_STUNGUN");
	
		case 33:
			return joaat("GADGET_PARACHUTE");
	
		case 35:
			return joaat("WEAPON_NIGHTSTICK");
	
		case 43:
			return joaat("WEAPON_PETROLCAN");
	
		case 45:
			return joaat("WEAPON_BOTTLE");
	
		case 46:
			return joaat("WEAPON_SPECIALCARBINE");
	
		case 47:
			return joaat("WEAPON_SNSPISTOL");
	
		case 48:
			return joaat("WEAPON_BULLPUPRIFLE");
	
		case 49:
			return joaat("WEAPON_HEAVYPISTOL");
	
		case 23:
			return joaat("WEAPON_BULLPUPSHOTGUN");
	
		case 50:
			return joaat("WEAPON_GUSENBERG");
	
		case 51:
			return joaat("WEAPON_DAGGER");
	
		case 52:
			return joaat("WEAPON_VINTAGEPISTOL");
	
		case 57:
			return joaat("WEAPON_FLAREGUN");
	
		case 53:
			return joaat("WEAPON_MUSKET");
	
		case 54:
			return joaat("WEAPON_FIREWORK");
	
		case 58:
			return joaat("WEAPON_HATCHET");
	
		case 59:
			return joaat("WEAPON_RAILGUN");
	
		case 64:
			return joaat("WEAPON_COMBATPDW");
	
		case 62:
			return joaat("WEAPON_KNUCKLE");
	
		case 63:
			return joaat("WEAPON_MARKSMANPISTOL");
	
		case 65:
			return joaat("WEAPON_MACHETE");
	
		case 68:
			return joaat("WEAPON_MACHINEPISTOL");
	
		case 66:
			return joaat("WEAPON_DBSHOTGUN");
	
		case 67:
			return joaat("WEAPON_COMPACTRIFLE");
	
		case 69:
			return joaat("WEAPON_FLASHLIGHT");
	
		case 70:
			return joaat("WEAPON_REVOLVER");
	
		case 71:
			return joaat("WEAPON_SWITCHBLADE");
	
		case 36:
			return joaat("WEAPON_HAMMER");
	
		case 4:
			return joaat("WEAPON_PISTOL50");
	
		case 6:
			return joaat("WEAPON_ASSAULTSMG");
	
		case 41:
			return joaat("WEAPON_MOLOTOV");
	
		case 39:
			return joaat("WEAPON_GOLFCLUB");
	
		case 38:
			return joaat("WEAPON_CROWBAR");
	
		case 37:
			return joaat("WEAPON_BAT");
	
		case 72:
			return joaat("WEAPON_AUTOSHOTGUN");
	
		case 73:
			return joaat("WEAPON_MINISMG");
	
		case 74:
			return joaat("WEAPON_COMPACTLAUNCHER");
	
		case 75:
			return joaat("WEAPON_BATTLEAXE");
	
		case 76:
			return joaat("WEAPON_PIPEBOMB");
	
		case 77:
			return joaat("WEAPON_POOLCUE");
	
		case 78:
			return joaat("WEAPON_WRENCH");
	
		case 79:
			return joaat("WEAPON_DOUBLEACTION");
	
		case 80:
			return joaat("WEAPON_STONE_HATCHET");
	
		case 81:
			return joaat("WEAPON_RAYPISTOL");
	
		case 82:
			return joaat("WEAPON_RAYCARBINE");
	
		case 83:
			return joaat("WEAPON_RAYMINIGUN");
	
		case 84:
			return joaat("WEAPON_NAVYREVOLVER");
	
		case 85:
			return joaat("WEAPON_CERAMICPISTOL");
	
		case 86:
			return joaat("WEAPON_COMBATSHOTGUN");
	
		case 88:
			return joaat("WEAPON_MILITARYRIFLE");
	
		case 87:
			return joaat("WEAPON_GADGETPISTOL");
	
		case 10:
			return joaat("WEAPON_HEAVYRIFLE");
	
		case 89:
			return joaat("WEAPON_EMPLAUNCHER");
	
		case 90:
			return joaat("WEAPON_FERTILIZERCAN");
	
		case 91:
			return joaat("WEAPON_STUNGUN_MP");
	
		case 92:
			return joaat("WEAPON_METALDETECTOR");
	
		case 93:
			return joaat("WEAPON_TACTICALRIFLE");
	
		case 94:
			return joaat("WEAPON_PRECISIONRIFLE");
	
		case 95:
			return 465894841;
	
		case 96:
			return 1703483498;
	
		case 97:
			return -22923932;
	
		case 98:
			return 350597077;
	
		case 99:
			return joaat("WEAPON_BATTLERIFLE");
	
		case 101:
			return -624951259;
	
		case 102:
			return -1916886713;
	}

	return joaat("WEAPON_UNARMED");
}

var func_202(BOOL bParam0, var uParam1, var uParam2) // Position - 0xF438 (62520)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_203(int iParam0, int iParam1) // Position - 0xF44F (62543)
{
	Hash statHash;
	int outValue;

	statHash = func_204(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_204(int iParam0, int iParam1) // Position - 0xF473 (62579)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_130(iParam1));
}

BOOL func_205(BOOL bParam0) // Position - 0xF489 (62601)
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_206(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

void func_206(var uParam0, int iParam1) // Position - 0xF4C9 (62665)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_207() // Position - 0xF4DE (62686)
{
	int num;
	int num2;

	num2 = 0;
	num = func_135(2828, -1);

	if (_STAT_GET_PACKED_BOOL(42002, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 19))
	{
		_STAT_SET_PACKED_BOOL(42002, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42003, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 20))
	{
		_STAT_SET_PACKED_BOOL(42003, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42006, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 21))
	{
		_STAT_SET_PACKED_BOOL(42006, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42007, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 22))
	{
		_STAT_SET_PACKED_BOOL(42007, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42005, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 23))
	{
		_STAT_SET_PACKED_BOOL(42005, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42004, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 24))
	{
		_STAT_SET_PACKED_BOOL(42004, true, -1);
		num2 = num2 + 1;
	}

	num = func_135(5631, -1);

	if (_STAT_GET_PACKED_BOOL(42012, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 5))
	{
		_STAT_SET_PACKED_BOOL(42012, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42011, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 6))
	{
		_STAT_SET_PACKED_BOOL(42011, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42008, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 7))
	{
		_STAT_SET_PACKED_BOOL(42008, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42013, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 8))
	{
		_STAT_SET_PACKED_BOOL(42013, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42009, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 9))
	{
		_STAT_SET_PACKED_BOOL(42009, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42010, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 10))
	{
		_STAT_SET_PACKED_BOOL(42010, true, -1);
		num2 = num2 + 1;
	}

	func_197(41247, num2, -1);
	return num2;
}

int func_208(BOOL bParam0) // Position - 0xF723 (63267)
{
	if (bParam0)
		return 1;

	return 0;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0xF735 (63285)
{
	if (iParam1 == -1)
		iParam1 = func_68();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

BOOL func_210(int iParam0, var uParam1) // Position - 0xF751 (63313)
{
	int i;

	for (i = uParam1->f_1; i <= 4; i = i + 1)
	{
		uParam1->f_2 = func_211(iParam0, *uParam1, i);
	
		if (uParam1->f_2 != -1)
		{
			uParam1->f_2.f_2 = func_175(*uParam1, uParam1->f_2);
			uParam1->f_2.f_1 = func_193(*uParam1, uParam1->f_2);
		
			if (uParam1->f_2.f_1 >= uParam1->f_2.f_2)
			{
				uParam1->f_2 = -1;
			}
			else
			{
				uParam1->f_1 = i;
				return true;
			}
		}
	}

	return false;
}

int func_211(int iParam0, int iParam1, int iParam2) // Position - 0xF7C9 (63433)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 54653:
							return 72;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 28313:
						case 28314:
						case 28315:
						case 28316:
						case 28317:
						case 28318:
							return 80;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 28313:
						case 28314:
						case 28315:
						case 28316:
						case 28317:
						case 28318:
							return 82;
					}
					break;
			}
			break;
	
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 51280:
							return 0;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 51285:
							return 1;
					
						case 51278:
							return 2;
					}
					break;
			
				case 2:
					if (func_208(_STAT_GET_PACKED_BOOL(51286, -1)) + func_208(_STAT_GET_PACKED_BOOL(51287, -1)) + func_208(_STAT_GET_PACKED_BOOL(51288, -1)) + func_208(_STAT_GET_PACKED_BOOL(51289, -1)) + func_208(_STAT_GET_PACKED_BOOL(51290, -1)) + func_208(_STAT_GET_PACKED_BOOL(51291, -1)) == 1)
						return 3;
				
					switch (iParam0)
					{
						case 51286:
						case 51287:
						case 51288:
						case 51289:
						case 51290:
						case 51291:
							return 4;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 51292:
						case 51293:
						case 51294:
						case 51295:
						case 51296:
						case 51297:
							return 6;
					
						case 51279:
							return 7;
					}
					break;
			}
			break;
	
		case 10:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9539:
							return 86;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9547:
						case 9548:
							return 92;
					
						case 9542:
							return 93;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 9543:
						case 9544:
						case 9545:
						case 9546:
							return 96;
					}
					break;
			}
			break;
	
		case 11:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9537:
							return 99;
					
						case 7639:
							return 100;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 28272:
							return 8;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 28287:
							return 9;
					
						case 28286:
							return 10;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 28285:
							return 11;
					
						case 28284:
						case 28283:
							return 12;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 28282:
							return 14;
					
						case 28273:
						case 28274:
						case 28275:
						case 28276:
						case 28277:
						case 28278:
						case 28279:
						case 28280:
						case 28281:
							return 15;
					}
					break;
			}
			break;
	
		case 12:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42038:
							return 112;
					
						case 42041:
							return 113;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 42044:
							return 114;
					
						case 42045:
							return 115;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 42046:
							return 119;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 42047:
						case 42048:
						case 42049:
						case 42050:
						case 42051:
							return 122;
					}
					break;
			}
			break;
	
		case 2:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41566:
							return 17;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41706:
							return 19;
					
						case 41567:
						case 41568:
						case 41569:
						case 41570:
						case 41571:
						case 41572:
							return 20;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41573:
						case 41574:
						case 41575:
						case 41576:
						case 41577:
						case 41578:
							return 21;
					
						case 41579:
						case 41580:
						case 41581:
						case 41582:
						case 41583:
						case 41584:
							return 22;
					
						case 41585:
						case 41586:
						case 41587:
						case 41588:
						case 41589:
						case 41590:
							return 23;
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42037:
							return 125;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41660:
						case 41661:
						case 41662:
						case 41663:
						case 41664:
						case 41665:
						case 41666:
						case 41667:
						case 41668:
						case 41669:
						case 41670:
							return 135;
					}
					break;
			}
			break;
	
		case 17:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 36870:
							return 179;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 36831:
						case 36832:
						case 36833:
						case 36834:
						case 36835:
						case 36836:
						case 36837:
						case 36838:
							return 185;
					}
					break;
			}
			break;
	
		case 29:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41672:
							return 323;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41332:
							return 327;
					
						case 41331:
							return 328;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41333:
						case 41334:
						case 41335:
						case 41336:
						case 41337:
						case 41338:
							return 25;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41707:
							return 27;
					
						case 41339:
						case 41340:
						case 41341:
						case 41342:
						case 41343:
						case 41344:
							return 28;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41345:
						case 41346:
						case 41347:
						case 41348:
						case 41349:
						case 41350:
							return 29;
					
						case 41351:
						case 41352:
						case 41353:
						case 41354:
						case 41355:
						case 41356:
							return 30;
					
						case 41357:
						case 41358:
						case 41359:
						case 41360:
						case 41361:
						case 41362:
							return 31;
					}
					break;
			}
			break;
	
		case 4:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41379:
							return 33;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41708:
							return 35;
					
						case 41380:
						case 41381:
						case 41382:
						case 41383:
						case 41384:
						case 41385:
							return 36;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41386:
						case 41387:
						case 41388:
						case 41389:
						case 41390:
						case 41391:
							return 37;
					
						case 41392:
						case 41393:
						case 41394:
						case 41395:
						case 41396:
						case 41397:
							return 38;
					
						case 41398:
						case 41399:
						case 41400:
						case 41401:
						case 41402:
						case 41403:
							return 39;
					}
					break;
			}
			break;
	
		case 5:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41404:
						case 41405:
						case 41406:
						case 41407:
						case 41408:
						case 41409:
							return 40;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41410:
							return 41;
					
						case 41404:
						case 41405:
						case 41406:
						case 41407:
						case 41408:
						case 41409:
							return 42;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41709:
							return 43;
					
						case 41411:
						case 41412:
						case 41413:
						case 41414:
						case 41415:
						case 41416:
							return 44;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41417:
						case 41418:
						case 41419:
						case 41420:
						case 41421:
						case 41422:
							return 45;
					
						case 41423:
						case 41424:
						case 41425:
						case 41426:
						case 41427:
						case 41428:
							return 46;
					
						case 41429:
						case 41430:
						case 41431:
						case 41432:
						case 41433:
						case 41434:
							return 47;
					}
					break;
			}
			break;
	
		case 6:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41436:
						case 41437:
						case 41438:
						case 41439:
						case 41440:
						case 41441:
						case 41442:
						case 41443:
							return 48;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41435:
							return 49;
					
						case 41436:
						case 41437:
						case 41438:
						case 41439:
						case 41440:
						case 41441:
						case 41442:
						case 41443:
							return 50;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41705:
							return 51;
					
						case 41444:
						case 41445:
						case 41446:
						case 41447:
						case 41448:
						case 41449:
						case 41450:
						case 41451:
							return 52;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41452:
						case 41453:
						case 41454:
						case 41455:
						case 41456:
						case 41457:
						case 41458:
						case 41459:
							return 53;
					
						case 41460:
						case 41461:
						case 41462:
						case 41463:
						case 41464:
						case 41465:
						case 41466:
						case 41467:
							return 54;
					
						case 41468:
						case 41469:
						case 41470:
						case 41471:
						case 41472:
						case 41473:
						case 41474:
						case 41475:
							return 55;
					}
					break;
			}
			break;
	
		case 7:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41476:
						case 41477:
						case 41478:
						case 41479:
						case 41480:
						case 41481:
							return 56;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41506:
							return 57;
					
						case 41476:
						case 41477:
						case 41478:
						case 41479:
						case 41480:
						case 41481:
							return 58;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41710:
							return 59;
					
						case 41482:
						case 41483:
						case 41484:
						case 41485:
						case 41486:
						case 41487:
							return 60;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41488:
						case 41489:
						case 41490:
						case 41491:
						case 41492:
						case 41493:
							return 61;
					
						case 41494:
						case 41495:
						case 41496:
						case 41497:
						case 41498:
						case 41499:
							return 62;
					
						case 41500:
						case 41501:
						case 41502:
						case 41503:
						case 41504:
						case 41505:
							return 63;
					}
					break;
			}
			break;
	
		case 8:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42015:
						case 42016:
						case 42017:
						case 42018:
						case 42019:
						case 42020:
						case 42021:
						case 42022:
							return 64;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41539:
							return 65;
					
						case 42015:
						case 42016:
						case 42017:
						case 42018:
						case 42019:
						case 42020:
						case 42021:
						case 42022:
							return 66;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41711:
							return 67;
					
						case 41507:
						case 41508:
						case 41509:
						case 41510:
						case 41511:
						case 41512:
						case 41513:
						case 41514:
							return 68;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41515:
						case 41516:
						case 41517:
						case 41518:
						case 41519:
						case 41520:
						case 41521:
						case 41522:
							return 69;
					
						case 41523:
						case 41524:
						case 41525:
						case 41526:
						case 41527:
						case 41528:
						case 41529:
						case 41530:
							return 70;
					
						case 41531:
						case 41532:
						case 41533:
						case 41534:
						case 41535:
						case 41536:
						case 41537:
						case 41538:
							return 71;
					}
					break;
			}
			break;
	
		case 33:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36935:
							return 360;
					
						case 36936:
							return 361;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36937:
							return 362;
					
						case 36938:
							return 363;
					
						case 36920:
							return 364;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36946:
							return 367;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 15456:
						case 15457:
						case 15458:
						case 15459:
						case 15460:
							return 371;
					}
					break;
			}
			break;
	
		case 14:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 28257:
							return 137;
					}
					break;
			}
			break;
	
		case 21:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 31737:
							return 228;
					
						case 41870:
							return 229;
					
						case 31753:
							return 230;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 32397:
							return 235;
					}
					break;
			}
			break;
	
		case 23:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 30309:
							return 254;
					
						case 30522:
							return 255;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41677:
							return 260;
					}
					break;
			}
			break;
	
		case 24:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 28270:
							return 268;
					
						case 36842:
							return 269;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 32399:
							return 272;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 42025:
							return 275;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41678:
						case 41679:
						case 41680:
						case 41681:
							return 277;
					}
					break;
			}
			break;
	
		case 22:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 27089:
							return 241;
					
						case 27090:
							return 242;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36916:
							return 245;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36844:
						case 36845:
						case 36846:
						case 36847:
						case 36848:
						case 36849:
						case 36850:
						case 36851:
						case 36852:
						case 36853:
						case 36854:
						case 36855:
						case 36856:
						case 36857:
						case 36858:
						case 36859:
							return 247;
					
						case 41548:
						case 41549:
						case 41550:
						case 41551:
						case 41552:
						case 41553:
							return 248;
					
						case 41868:
							return 249;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41560:
						case 41561:
						case 41562:
						case 41563:
						case 41564:
						case 41565:
							return 251;
					
						case 41554:
						case 41555:
						case 41556:
						case 41557:
						case 41558:
						case 41559:
							return 252;
					}
					break;
			}
			break;
	
		case 25:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 18139:
							return 280;
					
						case 36861:
							return 281;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41712:
							return 283;
					
						case 36862:
							return 284;
					
						case 41713:
							return 285;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36863:
							return 286;
					
						case 41714:
							return 287;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41685:
						case 41690:
						case 41696:
							return 290;
					
						case 41697:
						case 41698:
						case 41699:
							return 291;
					}
					break;
			}
			break;
	
		case 27:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 25009:
							return 306;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41647:
						case 41648:
						case 41649:
						case 41650:
						case 41651:
						case 41652:
						case 41653:
						case 41654:
						case 41655:
							return 307;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41647:
						case 41648:
						case 41649:
						case 41650:
						case 41651:
						case 41652:
						case 41653:
						case 41654:
						case 41655:
							return 310;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 22067:
							return 150;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36944:
							return 155;
					
						case 36868:
							return 154;
					
						case 22082:
						case 22083:
						case 15533:
							return 153;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 22067:
						case 22082:
						case 22083:
						case 15533:
							return 156;
					
						case 41989:
							return 157;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 15966:
							return 163;
					
						case 41676:
							return 165;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 32398:
							return 166;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36924:
							return 171;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 36925:
						case 36926:
						case 36927:
						case 36928:
						case 36929:
						case 36930:
						case 36931:
						case 36932:
							return 174;
					}
					break;
			}
			break;
	
		case 18:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42029:
						case 42030:
						case 42031:
						case 42032:
						case 42033:
						case 42034:
						case 42035:
						case 42036:
							return 191;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41874:
						case 41875:
						case 41876:
						case 41877:
						case 41878:
						case 41879:
						case 41880:
						case 41881:
						case 41882:
						case 41883:
							return 192;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 42029:
						case 42030:
						case 42031:
						case 42032:
						case 42033:
						case 42034:
						case 42035:
						case 42036:
							return 197;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41874:
						case 41875:
						case 41876:
						case 41877:
						case 41878:
						case 41879:
						case 41880:
						case 41881:
						case 41882:
						case 41883:
							return 198;
					
						case 41540:
						case 41541:
						case 41542:
						case 41543:
						case 41544:
						case 41545:
						case 41546:
						case 41547:
							return 199;
					}
					break;
			}
			break;
	
		case 19:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36871:
							return 202;
					
						case 36872:
							return 203;
					
						case 36875:
						case 36884:
						case 36885:
						case 36877:
						case 36880:
						case 36878:
						case 36883:
						case 36876:
						case 36882:
						case 36881:
						case 36879:
						case 36887:
						case 36886:
							return 204;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36873:
							return 205;
					
						case 42001:
							return 206;
					
						case 36874:
							return 207;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36875:
						case 36884:
						case 36885:
						case 36877:
						case 36880:
						case 36878:
						case 36883:
						case 36876:
						case 36882:
						case 36881:
						case 36879:
						case 36887:
						case 36886:
							return 208;
					}
					break;
			}
			break;
	
		case 20:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36888:
							return 215;
					
						case 36889:
							return 216;
					
						case 36892:
						case 36893:
						case 36894:
						case 36895:
						case 36896:
						case 36897:
						case 36898:
						case 36899:
						case 36900:
						case 36901:
						case 36902:
						case 36903:
						case 36904:
						case 36905:
						case 36906:
						case 36907:
						case 36908:
						case 36909:
						case 36910:
						case 36911:
						case 36912:
						case 36913:
						case 36945:
						case 36914:
						case 36915:
							return 217;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36890:
							return 218;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 7559:
						case 7589:
						case 7592:
						case 7577:
						case 7568:
						case 7583:
						case 7571:
						case 7574:
						case 7586:
						case 7562:
						case 7553:
							return 221;
					
						case 36891:
							return 222;
					
						case 36892:
						case 36893:
						case 36894:
						case 36895:
						case 36896:
						case 36897:
						case 36898:
						case 36899:
						case 36900:
						case 36901:
						case 36902:
						case 36903:
						case 36904:
						case 36905:
						case 36906:
						case 36907:
						case 36908:
						case 36909:
						case 36910:
						case 36911:
						case 36912:
						case 36913:
						case 36945:
						case 36914:
						case 36915:
							return 223;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 36892:
						case 36893:
						case 36894:
						case 36895:
						case 36896:
						case 36897:
						case 36898:
						case 36899:
						case 36900:
						case 36901:
						case 36902:
						case 36903:
						case 36904:
						case 36905:
						case 36906:
						case 36907:
						case 36908:
						case 36909:
						case 36910:
						case 36911:
						case 36912:
						case 36913:
						case 36945:
						case 36914:
						case 36915:
							return 224;
					
						case 36860:
						case 36839:
						case 36841:
						case 36843:
						case 36864:
						case 36865:
							return 225;
					}
					break;
			}
			break;
	
		case 30:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42023:
							return 330;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41363:
						case 41364:
						case 41365:
						case 41366:
						case 41367:
						case 41368:
						case 41369:
						case 41370:
						case 41371:
						case 41372:
						case 41373:
						case 41374:
						case 41375:
						case 41376:
						case 41377:
						case 41378:
						case 42026:
						case 42027:
						case 42028:
						case 42150:
						case 42151:
							return 331;
					}
					break;
			}
			break;
	
		case 28:
			switch (iParam0)
			{
				case 41594:
				case 41595:
				case 41596:
				case 41597:
				case 41598:
				case 41599:
				case 41600:
				case 41601:
				case 41602:
				case 41603:
				case 41604:
				case 41605:
				case 41606:
				case 41607:
				case 41608:
				case 41609:
				case 41610:
				case 41611:
				case 41612:
				case 41613:
				case 41614:
				case 41615:
				case 41616:
				case 41617:
				case 41618:
				case 41619:
				case 41620:
				case 41621:
				case 41622:
				case 41623:
				case 41624:
				case 41625:
				case 41626:
				case 41627:
				case 41628:
				case 41629:
				case 41630:
				case 41631:
				case 41632:
				case 41633:
				case 41634:
				case 41635:
				case 41636:
				case 41637:
				case 41638:
				case 41639:
				case 41640:
				case 41641:
				case 41642:
				case 41643:
				case 41644:
				case 41645:
				case 41646:
				case 41656:
				case 51339:
					switch (iParam2)
					{
						case 0:
							return 314;
					
						case 2:
							return 317;
					
						case 3:
							return 319;
					}
					break;
			
				case 36840:
					switch (iParam2)
					{
						case 1:
							return 315;
					}
					break;
			
				case 36921:
					switch (iParam2)
					{
						case 3:
							return 321;
					}
					break;
			}
			break;
	
		case 26:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36867:
							return 293;
					
						case 36933:
							return 294;
					
						case 41700:
							return 295;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41715:
							return 296;
					
						case 41716:
							return 297;
					
						case 41717:
							return 298;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41718:
							return 299;
					
						case 41719:
							return 300;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41701:
						case 41702:
						case 41703:
						case 41704:
						case 36917:
							return 304;
					
						case 42000:
							return 305;
					}
					break;
			}
			break;
	
		case 32:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41864:
							return 346;
					
						case 42014:
							return 347;
					
						case 41865:
							return 348;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41863:
							return 349;
					
						case 41840:
							return 350;
					
						case 41839:
							return 351;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41841:
							return 352;
					
						case 41838:
							return 353;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41866:
							return 356;
					
						case 41842:
						case 41843:
						case 41844:
						case 41845:
						case 41846:
						case 41847:
						case 41848:
						case 41849:
						case 41850:
						case 41851:
						case 41852:
						case 41853:
						case 41854:
						case 41855:
						case 41856:
						case 41857:
						case 41858:
						case 41859:
						case 41860:
						case 41861:
						case 41862:
							return 357;
					}
					break;
			}
			break;
	}

	return -1;
}

int func_212(int iParam0) // Position - 0x11907 (71943)
{
	int num;
	int num2;
	int num3;
	int i;

	num = func_172(iParam0);
	num2 = func_135(num, -1);
	num3 = func_170(iParam0, 0);

	for (i = 0; i < 4; i = i + 1)
	{
		if (!IS_BIT_SET(num2, num3 + i))
			return i;
	}

	return 4;
}

BOOL func_213(int iParam0, BOOL bParam1) // Position - 0x1194D (72013)
{
	if (iParam0 == -1)
		return false;

	if (bParam1)
		return false;

	return true;
}

int func_214(int iParam0) // Position - 0x11969 (72041)
{
	switch (iParam0)
	{
		case 54653:
		case 28313:
		case 28314:
		case 28315:
		case 28316:
		case 28317:
		case 28318:
			return 9;
	
		case 51280:
		case 51285:
		case 51278:
		case 51286:
		case 51287:
		case 51288:
		case 51289:
		case 51290:
		case 51291:
		case 51292:
		case 51293:
		case 51294:
		case 51295:
		case 51296:
		case 51297:
		case 51279:
			return 0;
	
		case 9539:
		case 9547:
		case 9548:
		case 9542:
		case 9543:
		case 9544:
		case 9545:
		case 9546:
			return 10;
	
		case 9537:
		case 7639:
			return 11;
	
		case 28272:
		case 28287:
		case 28286:
		case 28285:
		case 28284:
		case 28283:
		case 28282:
		case 28273:
		case 28274:
		case 28275:
		case 28276:
		case 28277:
		case 28278:
		case 28279:
		case 28280:
		case 28281:
			return 1;
	
		case 42038:
		case 42041:
		case 42044:
		case 42045:
		case 42046:
		case 42047:
		case 42048:
		case 42049:
		case 42050:
		case 42051:
			return 12;
	
		case 41567:
		case 41568:
		case 41569:
		case 41570:
		case 41571:
		case 41572:
		case 41573:
		case 41574:
		case 41575:
		case 41576:
		case 41577:
		case 41578:
		case 41579:
		case 41580:
		case 41581:
		case 41582:
		case 41583:
		case 41584:
		case 41585:
		case 41586:
		case 41587:
		case 41588:
		case 41589:
		case 41590:
		case 41706:
		case 41566:
			return 2;
	}

	switch (iParam0)
	{
		case 41660:
		case 41661:
		case 41662:
		case 41663:
		case 41664:
		case 41665:
		case 41666:
		case 41667:
		case 41668:
		case 41669:
		case 41670:
		case 42037:
			return 13;
	
		case 41333:
		case 41334:
		case 41335:
		case 41336:
		case 41337:
		case 41338:
		case 41339:
		case 41340:
		case 41341:
		case 41342:
		case 41343:
		case 41344:
		case 41345:
		case 41346:
		case 41347:
		case 41348:
		case 41349:
		case 41350:
		case 41351:
		case 41352:
		case 41353:
		case 41354:
		case 41355:
		case 41356:
		case 41357:
		case 41358:
		case 41359:
		case 41360:
		case 41361:
		case 41362:
		case 41707:
			return 3;
	
		case 41379:
		case 41380:
		case 41381:
		case 41382:
		case 41383:
		case 41384:
		case 41385:
		case 41386:
		case 41387:
		case 41388:
		case 41389:
		case 41390:
		case 41391:
		case 41392:
		case 41393:
		case 41394:
		case 41395:
		case 41396:
		case 41397:
		case 41398:
		case 41399:
		case 41400:
		case 41401:
		case 41402:
		case 41403:
		case 41708:
			return 4;
	
		case 41404:
		case 41405:
		case 41406:
		case 41407:
		case 41408:
		case 41409:
		case 41410:
		case 41411:
		case 41412:
		case 41413:
		case 41414:
		case 41415:
		case 41416:
		case 41417:
		case 41418:
		case 41419:
		case 41420:
		case 41421:
		case 41422:
		case 41423:
		case 41424:
		case 41425:
		case 41426:
		case 41427:
		case 41428:
		case 41429:
		case 41430:
		case 41431:
		case 41432:
		case 41433:
		case 41434:
		case 41709:
			return 5;
	
		case 41436:
		case 41437:
		case 41438:
		case 41439:
		case 41440:
		case 41441:
		case 41442:
		case 41443:
		case 41435:
		case 41444:
		case 41445:
		case 41446:
		case 41447:
		case 41448:
		case 41449:
		case 41450:
		case 41451:
		case 41452:
		case 41453:
		case 41454:
		case 41455:
		case 41456:
		case 41457:
		case 41458:
		case 41459:
		case 41460:
		case 41461:
		case 41462:
		case 41463:
		case 41464:
		case 41465:
		case 41466:
		case 41467:
		case 41468:
		case 41469:
		case 41470:
		case 41471:
		case 41472:
		case 41473:
		case 41474:
		case 41475:
		case 41705:
			return 6;
	}

	switch (iParam0)
	{
		case 41476:
		case 41477:
		case 41478:
		case 41479:
		case 41480:
		case 41481:
		case 41506:
		case 41482:
		case 41483:
		case 41484:
		case 41485:
		case 41486:
		case 41487:
		case 41488:
		case 41489:
		case 41490:
		case 41491:
		case 41492:
		case 41493:
		case 41494:
		case 41495:
		case 41496:
		case 41497:
		case 41498:
		case 41499:
		case 41500:
		case 41501:
		case 41502:
		case 41503:
		case 41504:
		case 41505:
		case 41710:
			return 7;
	
		case 41539:
		case 42015:
		case 42016:
		case 42017:
		case 42018:
		case 42019:
		case 42020:
		case 42021:
		case 42022:
		case 41507:
		case 41508:
		case 41509:
		case 41510:
		case 41511:
		case 41512:
		case 41513:
		case 41514:
		case 41515:
		case 41516:
		case 41517:
		case 41518:
		case 41519:
		case 41520:
		case 41521:
		case 41522:
		case 41523:
		case 41524:
		case 41525:
		case 41526:
		case 41527:
		case 41528:
		case 41529:
		case 41530:
		case 41531:
		case 41532:
		case 41533:
		case 41534:
		case 41535:
		case 41536:
		case 41537:
		case 41538:
		case 41711:
			return 8;
	
		case 36870:
		case 36831:
		case 36832:
		case 36833:
		case 36834:
		case 36835:
		case 36836:
		case 36837:
		case 36838:
			return 17;
	
		case 41332:
		case 41331:
		case 41672:
			return 29;
	}

	switch (iParam0)
	{
		case 36935:
		case 36937:
		case 36938:
		case 15456:
		case 15457:
		case 15458:
		case 15459:
		case 15460:
		case 36920:
		case 36946:
		case 36936:
			return 33;
	
		case 28257:
			return 14;
	
		case 31737:
		case 31753:
		case 32397:
		case 41870:
			return 21;
	
		case 30309:
		case 30522:
		case 41677:
			return 23;
	
		case 41678:
		case 41679:
		case 41680:
		case 41681:
		case 36842:
		case 32399:
		case 28270:
		case 42025:
			return 24;
	
		case 27089:
		case 27090:
		case 36916:
		case 41548:
		case 41549:
		case 41550:
		case 41551:
		case 41552:
		case 41553:
		case 41560:
		case 41561:
		case 41562:
		case 41563:
		case 41564:
		case 41565:
		case 41554:
		case 41555:
		case 41556:
		case 41557:
		case 41558:
		case 41559:
		case 36844:
		case 36845:
		case 36846:
		case 36847:
		case 36848:
		case 36849:
		case 36850:
		case 36851:
		case 36852:
		case 36853:
		case 36854:
		case 36855:
		case 36856:
		case 36857:
		case 36858:
		case 36859:
		case 41868:
			return 22;
	
		case 41685:
		case 41690:
		case 41696:
		case 41697:
		case 41698:
		case 41699:
		case 36861:
		case 36862:
		case 36863:
		case 41712:
		case 41713:
		case 41714:
		case 18139:
			return 25;
	}

	switch (iParam0)
	{
		case 41647:
		case 41648:
		case 41649:
		case 41650:
		case 41651:
		case 41652:
		case 41653:
		case 41654:
		case 41655:
		case 25009:
			return 27;
	
		case 22067:
		case 36944:
		case 36868:
		case 22082:
		case 22083:
		case 15533:
		case 41989:
			return 15;
	
		case 15966:
		case 41676:
		case 32398:
		case 36924:
		case 36925:
		case 36926:
		case 36927:
		case 36928:
		case 36929:
		case 36930:
		case 36931:
		case 36932:
			return 16;
	
		case 41540:
		case 41541:
		case 41542:
		case 41543:
		case 41544:
		case 41545:
		case 41546:
		case 41547:
		case 41874:
		case 41875:
		case 41876:
		case 41877:
		case 41878:
		case 41879:
		case 41880:
		case 41881:
		case 41882:
		case 41883:
		case 42029:
		case 42030:
		case 42031:
		case 42032:
		case 42033:
		case 42034:
		case 42035:
		case 42036:
			return 18;
	
		case 36875:
		case 36884:
		case 36885:
		case 36877:
		case 36880:
		case 36878:
		case 36883:
		case 36876:
		case 36882:
		case 36881:
		case 36879:
		case 36887:
		case 36886:
		case 36873:
		case 36874:
		case 36871:
		case 36872:
		case 42001:
			return 19;
	
		case 36890:
		case 36891:
		case 36888:
		case 36889:
		case 36860:
		case 36839:
		case 36841:
		case 36843:
		case 36864:
		case 36865:
		case 7559:
		case 7589:
		case 7592:
		case 7577:
		case 7568:
		case 7583:
		case 7571:
		case 7574:
		case 7586:
		case 7562:
		case 7553:
		case 36892:
		case 36893:
		case 36894:
		case 36895:
		case 36896:
		case 36897:
		case 36898:
		case 36899:
		case 36900:
		case 36901:
		case 36902:
		case 36903:
		case 36904:
		case 36905:
		case 36906:
		case 36907:
		case 36908:
		case 36909:
		case 36910:
		case 36911:
		case 36912:
		case 36913:
		case 36945:
		case 36914:
		case 36915:
			return 20;
	}

	switch (iParam0)
	{
		case 41363:
		case 41364:
		case 41365:
		case 41366:
		case 41367:
		case 41368:
		case 41369:
		case 41370:
		case 41371:
		case 41372:
		case 41373:
		case 41374:
		case 41375:
		case 41376:
		case 41377:
		case 41378:
		case 42023:
		case 42026:
		case 42027:
		case 42028:
		case 42150:
		case 42151:
			return 30;
	
		case 41594:
		case 41595:
		case 41596:
		case 41597:
		case 41598:
		case 41599:
		case 41600:
		case 41601:
		case 41602:
		case 41603:
		case 41604:
		case 41605:
		case 41606:
		case 41607:
		case 41608:
		case 41609:
		case 41610:
		case 41611:
		case 41612:
		case 41613:
		case 41614:
		case 41615:
		case 41616:
		case 41617:
		case 41618:
		case 41619:
		case 41620:
		case 41621:
		case 41622:
		case 41623:
		case 41624:
		case 41625:
		case 41626:
		case 41627:
		case 41628:
		case 41629:
		case 41630:
		case 41631:
		case 41632:
		case 41633:
		case 41634:
		case 41635:
		case 41636:
		case 41637:
		case 41638:
		case 41639:
		case 41640:
		case 41641:
		case 41642:
		case 41643:
		case 41644:
		case 41645:
		case 41646:
		case 41656:
		case 51339:
		case 36840:
		case 36921:
			return 28;
	
		case 36867:
		case 36933:
		case 41700:
		case 41701:
		case 41702:
		case 41703:
		case 41704:
		case 36917:
		case 41715:
		case 41716:
		case 41717:
		case 41718:
		case 41719:
		case 42000:
			return 26;
	
		case 41864:
		case 41865:
		case 41840:
		case 41839:
		case 41841:
		case 41838:
		case 41866:
		case 41863:
		case 41842:
		case 41843:
		case 41844:
		case 41845:
		case 41846:
		case 41847:
		case 41848:
		case 41849:
		case 41850:
		case 41851:
		case 41852:
		case 41853:
		case 41854:
		case 41855:
		case 41856:
		case 41857:
		case 41858:
		case 41859:
		case 41860:
		case 41861:
		case 41862:
		case 42014:
			return 32;
	}

	return -1;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x12978 (76152)
{
	if (iParam2 == -1)
		iParam2 = func_68();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x12996 (76182)
{
	if (iParam1 == -1)
		iParam1 = func_68();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_217() // Position - 0x129B2 (76210)
{
	if (Global_1943989.f_3 != 0)
		return Global_1943989.f_3;

	return -1;
}

int func_218() // Position - 0x129CE (76238)
{
	if (Global_1943989.f_2 != 0)
		return Global_1943989.f_2;

	return -1;
}

void func_219(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x129EA (76266)
{
	int num;

	Global_9795 = echParam0;

	if (Global_120[echParam0 /*10*/].f_8 != 187)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_224(echParam0, 0, 1);
			func_224(echParam0, 1, 1);
			func_224(echParam0, 2, 1);
			func_223(echParam0, 0, 1);
			func_223(echParam0, 1, 1);
			func_223(echParam0, 2, 1);
		}
		else
		{
			if (func_222(echParam0, echParam1) == 1 && func_221(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_224(echParam0, num, 1);
			func_223(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2740191.f_7025, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2740191.f_7025, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2740191.f_7025, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_79768)
			{
				if (echParam1 != 4)
				{
					if (Global_21239 != echParam1)
					{
						Global_9768[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9785[echParam1] = 1;
						Global_9790[echParam1] = echParam0;
					}
					else if (echParam0 == Global_21239)
					{
					}
					else
					{
						Global_9719[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9719[1 /*6*/].f_5 = echParam1;
						func_220();
					}
				}
				else
				{
					Global_9719[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9719[1 /*6*/].f_5 = echParam1;
					func_220();
				}
			}
			else
			{
				Global_9719[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9719[1 /*6*/].f_5 = echParam1;
				func_220();
			}
		}
	}

	return;
}

void func_220() // Position - 0x12B68 (76648)
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[Global_9795 /*29*/].f_7)), 64);

	if (Global_9814 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_9719[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_9719[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_9075, 0);
	return;
}

int func_221(eCharacter echParam0, int iParam1) // Position - 0x12BE3 (76771)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2241[echParam0 /*29*/].f_24[iParam1];
}

int func_222(eCharacter echParam0, int iParam1) // Position - 0x12C0D (76813)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2241[echParam0 /*29*/].f_12[iParam1];
}

void func_223(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x12C37 (76855)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2241[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28055[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_224(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x12C7C (76924)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2241[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28055[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

BOOL func_225(int iParam0, int iParam1) // Position - 0x12CC1 (76993)
{
	if (func_222(iParam0, iParam1) == 1)
		return true;

	return false;
}

void func_226() // Position - 0x12CDD (77021)
{
	BOOL flag;

	if (func_31())
	{
		if (func_27() || func_259())
		{
			return;
		}
		else
		{
			func_233(false);
		
			if (func_231())
				func_230();
		
			func_229();
			flag = NETWORK::NETWORK_IS_IN_TRANSITION();
		
			if (flag || NETWORK::NETWORK_IS_TRANSITION_STARTED() || NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING() || NETWORK::NETWORK_IS_TRANSITION_LEAVE_POSTPONED())
			{
				if (*Global_262145.f_33488)
					NETWORK::NETWORK_CANCEL_TRANSITION_MATCHMAKING();
			
				if (flag)
					NETWORK::NETWORK_BAIL_TRANSITION(6, 0, 0);
			}
		
			func_228();
			func_227();
			func_229();
		}
	}

	return;
}

void func_227() // Position - 0x12D73 (77171)
{
	Global_1048576.f_10 = 0;
	return;
}

void func_228() // Position - 0x12D82 (77186)
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;
	int num;
	var unk6;
	int num2;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk24;
	var unk40;
	var unk41;
	var unk42;
	var unk43;
	var unk44;
	var unk45;
	var unk46;
	int num3;
	var unk47;
	int i;
	int j;
	int k;

	num = -1;
	num2 = -1;
	num3 = -1;
	Global_2685690.f_6091 = { unk11 };

	for (i = 0; i <= 31; i = i + 1)
	{
		Global_2685690.f_1.f_845[i /*57*/] = { unk11 };
		Global_2685690.f_1.f_845[i /*57*/].f_13 = { unk24 };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2685690.f_1.f_845[i /*57*/].f_29), "", 16);
		Global_2685690.f_1.f_845[i /*57*/].f_44 = unk42;
		Global_2685690.f_1.f_845[i /*57*/].f_45 = unk43;
		Global_2685690.f_1.f_845[i /*57*/].f_46 = 0;
		Global_2685690.f_1.f_845[i /*57*/].f_47 = unk44;
		Global_2685690.f_1.f_845[i /*57*/].f_50 = unk45;
		Global_2685690.f_1.f_845[i /*57*/].f_55 = unk46;
		Global_2685690.f_1.f_845[i /*57*/].f_48 = 0;
		Global_2685690.f_1.f_845[i /*57*/].f_49 = 0;
		Global_2685690.f_1.f_845[i /*57*/].f_54 = 0;
		Global_2685690.f_1.f_845[i /*57*/].f_56 = unk46;
		Global_2685690.f_1.f_845[i /*57*/].f_53 = unk47;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2685690.f_1.f_845[i /*57*/].f_33[j] = unk40;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2685690.f_1.f_845[i /*57*/].f_36[j] = unk41;
		}
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		Global_2685690.f_1.f_2670[i /*57*/] = { unk11 };
		Global_2685690.f_1.f_2670[i /*57*/].f_13 = { unk24 };
		Global_2685690.f_1.f_2670[i /*57*/].f_44 = unk42;
		Global_2685690.f_1.f_2670[i /*57*/].f_45 = unk43;
		Global_2685690.f_1.f_2670[i /*57*/].f_47 = unk44;
		Global_2685690.f_1.f_2670[i /*57*/].f_50 = unk45;
		Global_2685690.f_1.f_2670[i /*57*/].f_55 = unk46;
		Global_2685690.f_1.f_2670[i /*57*/].f_56 = unk46;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2685690.f_1.f_2670[i /*57*/].f_33[j] = unk40;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2685690.f_1.f_2670[i /*57*/].f_36[j] = unk41;
		}
	}

	Global_2685690.f_1.f_2798 = unk;
	Global_2685690.f_1.f_2799 = unk2;
	Global_2685690.f_1.f_2800 = unk3;
	Global_2685690.f_1.f_2802 = unk4;
	Global_2685690.f_1.f_2805 = unk5;
	Global_2685690.f_1.f_2806 = 0;
	Global_2685690.f_1.f_2808 = num;
	Global_2685690.f_1.f_2809 = unk6;
	Global_2685690.f_1.f_2810 = unk6;
	Global_2685690.f_1.f_2811 = num2;
	Global_2685690.f_1.f_2812 = unk7;

	for (k = 0; k < 9; k = k + 1)
	{
		Global_2685690.f_1.f_2813[k] = 0;
	}

	Global_2685690.f_1.f_2826 = num3;
	Global_2685690.f_1.f_2823 = unk8;
	Global_2685690.f_1.f_2824 = unk9;
	Global_2685690.f_1.f_2825 = unk10;
	Global_2684748.f_846 = 0;
	return;
}

void func_229() // Position - 0x130B9 (78009)
{
	MISC::SET_BIT(&(Global_2684748.f_2), 12);
	return;
}

void func_230() // Position - 0x130CD (78029)
{
	Global_1057440 = -1;
	return;
}

BOOL func_231() // Position - 0x130DA (78042)
{
	switch (func_232())
	{
		case 21:
		case 35:
		case 33:
		case 37:
		case 46:
		case 48:
		case 50:
		case 52:
		case 54:
		case 56:
		case 58:
		case 60:
		case 62:
		case 64:
		case 71:
		case 73:
		case 86:
		case 88:
		case 109:
		case 117:
		case 119:
		case 122:
		case 124:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
			return true;
	
		default:
		
	}

	switch (func_232())
	{
		case 75:
			return true;
	
		default:
		
	}

	return false;
}

int func_232() // Position - 0x131B1 (78257)
{
	return Global_1057440;
}

void func_233(BOOL bParam0) // Position - 0x131BD (78269)
{
	BOOL flag;

	if (func_255() && !func_254())
	{
		func_253();
		func_252();
	}
	else
	{
		flag = func_251();
		func_250();
		func_248(true);
		func_247();
		func_246();
		func_245();
	
		if (flag && !bParam0)
			func_244();
	}

	if (Global_2693808.f_8)
		func_243();

	func_242();
	func_241();
	func_240();
	func_238();

	if (!func_237())
	{
		func_236();
		func_235(0);
	}

	func_252();
	func_234(0);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		NETWORK::NETWORK_REMAIN_IN_GAME_CHAT(false);

	return;
}

void func_234(int iParam0) // Position - 0x13250 (78416)
{
	Global_2684748.f_894 = iParam0;
	return;
}

void func_235(int iParam0) // Position - 0x13261 (78433)
{
	if (iParam0 == -1)
		Global_2684748.f_895 = Global_2684748.f_895 + 1;
	else
		Global_2684748.f_895 = iParam0;

	return;
}

void func_236() // Position - 0x1328B (78475)
{
	Global_2684748.f_9 = -1;
	return;
}

BOOL func_237() // Position - 0x1329A (78490)
{
	return Global_2684748.f_739;
}

void func_238() // Position - 0x132A9 (78505)
{
	Global_2684748.f_42 = func_239();
	return;
}

int func_239() // Position - 0x132BB (78523)
{
	if (Global_2692869)
		return 32;

	return 32 - Global_2692870;
}

void func_240() // Position - 0x132D6 (78550)
{
	Global_2684748.f_737 = 0;
	return;
}

void func_241() // Position - 0x132E6 (78566)
{
	Global_2684748.f_719 = 0;
	return;
}

void func_242() // Position - 0x132F6 (78582)
{
	MISC::CLEAR_BIT(&(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_36.f_18), 15);
	return;
}

void func_243() // Position - 0x13313 (78611)
{
	Global_2693808.f_8 = 0;
	Global_2693808.f_7 = 0;
	return;
}

void func_244() // Position - 0x13329 (78633)
{
	MISC::SET_BIT(&(Global_2684748.f_3), 2);
	return;
}

void func_245() // Position - 0x1333C (78652)
{
	MISC::CLEAR_BIT(&Global_2684748, 7);
	return;
}

void func_246() // Position - 0x1334D (78669)
{
	MISC::CLEAR_BIT(&Global_2684748, 6);
	return;
}

void func_247() // Position - 0x1335E (78686)
{
	Global_2684748 = 0;
	Global_2684748.f_2 = 0;
	Global_2684748.f_3 = 0;
	return;
}

void func_248(BOOL bParam0) // Position - 0x13379 (78713)
{
	int i;
	var unk;
	int j;

	Global_2685690.f_1.f_2798 = 0;
	Global_2685690.f_1.f_2799 = 0;
	Global_2685690.f_1.f_2825 = 0;
	Global_2685690.f_1.f_2805 = 0;
	Global_2685690.f_1.f_2806 = 0;
	Global_2685690.f_1.f_2809 = 0;
	Global_2685690.f_1.f_2810 = 0;
	Global_2685690.f_1.f_2808 = -1;
	Global_2685690.f_1.f_2811 = -1;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_2685690.f_1.f_2813[i] = 0;
	}

	Global_2685690.f_1.f_2826 = -1;

	if (bParam0)
	{
		Global_2685690.f_1.f_2823 = -1;
		Global_2685690.f_1.f_2824 = -1;
	}

	Global_2685690.f_1.f_2845 = 0;
	func_249();
	unk.f_33 = 2;
	unk.f_36 = 7;

	for (j = 0; j <= 31; j = j + 1)
	{
		Global_2685690.f_1.f_845[j /*57*/] = { unk };
	}

	Global_2680869.f_33 = -1;
	Global_2680869.f_34 = -1;
	return;
}

void func_249() // Position - 0x13475 (78965)
{
	Global_2680869.f_32 = 0;
	return;
}

void func_250() // Position - 0x13484 (78980)
{
	var unk;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Global_2682501[i /*37*/] = { unk };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682501[i /*37*/].f_13), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682501[i /*37*/].f_29), "", 16);
		Global_2682501[i /*37*/].f_33 = 0;
		Global_2682501[i /*37*/].f_34 = 0;
		Global_2682501[i /*37*/].f_35 = 0;
	}

	Global_2682501.f_1185 = 0;
	Global_2682501.f_1186 = 0;
	return;
}

BOOL func_251() // Position - 0x134FE (79102)
{
	return IS_BIT_SET(Global_2684748.f_3, 2);
}

void func_252() // Position - 0x1350E (79118)
{
	MISC::CLEAR_BIT(&(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_36.f_18), 5);
	return;
}

void func_253() // Position - 0x1352A (79146)
{
	MISC::CLEAR_BIT(&(Global_2684748.f_2), 11);
	return;
}

BOOL func_254() // Position - 0x1353E (79166)
{
	return IS_BIT_SET(Global_2684748.f_2, 27);
}

BOOL func_255() // Position - 0x1354F (79183)
{
	if (func_19() || func_258() || func_257() || func_256())
		return true;

	return false;
}

BOOL func_256() // Position - 0x13581 (79233)
{
	return IS_BIT_SET(Global_2684748, 1);
}

BOOL func_257() // Position - 0x1358F (79247)
{
	return IS_BIT_SET(Global_2684748, 2);
}

BOOL func_258() // Position - 0x1359D (79261)
{
	return IS_BIT_SET(Global_2684748, 20);
}

BOOL func_259() // Position - 0x135AC (79276)
{
	return IS_BIT_SET(Global_2685690.f_1.f_2810, 3);
}

void func_260() // Position - 0x135BF (79295)
{
	if (!Global_2740191.f_5272.f_342)
		Global_2740191.f_5272.f_342 = 1;

	return;
}

void func_261() // Position - 0x135E0 (79328)
{
	var unk;

	if (func_137(true))
		return;

	unk = { func_133(49, 50, -1) };
	func_126(&unk, false);

	if (!func_118() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_116())
		func_115(28);
	else
		func_114(28);

	return;
}

void func_262() // Position - 0x13634 (79412)
{
	var unk;

	if (func_137(true))
		return;

	unk = { func_133(45, 46, -1) };
	func_120(&unk, false);

	if (!func_118() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_116())
		func_115(28);
	else
		func_114(28);

	return;
}

void func_263(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x13688 (79496)
{
	Hash statName;

	if (iParam0 != 17296)
	{
		statName = func_136(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, bParam1, bParam3);
	}

	return;
}

void func_264(int iParam0) // Position - 0x136B6 (79542)
{
	MISC::SET_BIT(&(Global_4598268.f_2), iParam0);

	if (Global_4598268)
		return;

	Global_4598268 = true;
	Global_4598268.f_1 = 0;
	return;
}

void func_265() // Position - 0x136E0 (79584)
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4598194.f_28[i /*2*/] != -1 && Global_4598194.f_28[i /*2*/].f_1 != 0)
			if (HUD::DOES_BLIP_EXIST(Global_4598194.f_28[i /*2*/].f_1))
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_4598194.f_28[i /*2*/].f_1, true);
	}

	return;
}

BOOL func_266() // Position - 0x13741 (79681)
{
	return Global_2684748.f_742;
}

void func_267(int iParam0) // Position - 0x13750 (79696)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_2740191.f_5272.f_7[num], offset);
	return;
}

BOOL func_268(int iParam0) // Position - 0x13779 (79737)
{
	int num;
	int num2;

	num = iParam0 / 32;
	num2 = iParam0 % 32;
	return IS_BIT_SET(Global_2740191.f_5272.f_7[num], num2);
}

void func_269(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1379F (79775)
{
	if (func_276())
	{
		if (iParam1 == 1)
		{
			if (Global_2740191.f_4535 == -1)
				Global_2740191.f_4535 = Global_262145.f_26753;
		
			func_24(&(Global_2740191.f_4533), false, false);
		
			if (bParam2)
			{
				if (Global_2740191.f_4538 == -1)
					Global_2740191.f_4538 = Global_262145.f_26754;
			
				func_24(&(Global_2740191.f_4536), false, false);
			}
			else
			{
				Global_1574582 = false;
				Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
				func_275(true);
			}
		}
		else
		{
			Global_1574582 = false;
			Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
			func_275(true);
		}
	
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_274() && !func_270(PLAYER::PLAYER_ID()))
			Global_1057439 = 0;
	
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}

	return;
}

BOOL func_270(Player plParam0) // Position - 0x13869 (79977)
{
	if (func_271(plParam0, true, false))
		if (Global_1845274[plParam0 /*877*/] != 6)
			return true;

	return false;
}

BOOL func_271(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1388E (80014)
{
	if (bParam1)
		if (func_272(plParam0))
			return true;

	!bParam2;

	if (Global_1845274[plParam0 /*877*/] == -1)
		return false;

	return true;
}

BOOL func_272(Player plParam0) // Position - 0x138C0 (80064)
{
	return func_273(plParam0);
}

BOOL func_273(Player plParam0) // Position - 0x138CE (80078)
{
	return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_11.f_1, 0);
}

BOOL func_274() // Position - 0x138E5 (80101)
{
	return Global_2684748.f_846;
}

void func_275(BOOL bParam0) // Position - 0x138F4 (80116)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_276())
		{
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
		
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
		
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
			
				if (bParam0)
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
			}
		}
		else
		{
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
			
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
			}
		
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}

	return;
}

BOOL func_276() // Position - 0x139ED (80365)
{
	return Global_1574582;
}

void func_277() // Position - 0x139F9 (80377)
{
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			func_279(true, player);
		
			if (player != PLAYER::PLAYER_ID())
				func_278(player);
		}
	}

	return;
}

void func_278(Player plParam0) // Position - 0x13A3B (80443)
{
	Ped playerPed;

	if (IS_BIT_SET(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_101, plParam0))
	{
		playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(playerPed, PLAYER::PLAYER_ID(), true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), plParam0, true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(plParam0, PLAYER::PLAYER_ID(), true);
		func_279(true, plParam0);
		MISC::CLEAR_BIT(&(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_101), plParam0);
	}

	return;
}

void func_279(BOOL bParam0, Player plParam1) // Position - 0x13A9D (80541)
{
	Vehicle vehiclePedIsIn;
	Ped playerPed;
	int num;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(plParam1, false, true))
	{
		playerPed = PLAYER::GET_PLAYER_PED(plParam1);
	
		if (ENTITY::DOES_ENTITY_EXIST(playerPed) && !ENTITY::IS_ENTITY_DEAD(playerPed, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, bParam0, true);
				
					if (func_99(plParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
					{
						if (_GET_BOSS_OF_LOCAL_PLAYER() == plParam1)
						{
							if (Global_2740191.f_5272.f_264[3] != vehiclePedIsIn)
								Global_2740191.f_5272.f_264[3] = vehiclePedIsIn;
						}
						else
						{
							num = func_280(_GET_BOSS_OF_LOCAL_PLAYER(), plParam1);
						
							if (num != -1)
								if (Global_2740191.f_5272.f_264[num] != vehiclePedIsIn)
									Global_2740191.f_5272.f_264[num] = vehiclePedIsIn;
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_99(plParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
				{
					if (_GET_BOSS_OF_LOCAL_PLAYER() == plParam1)
					{
						vehiclePedIsIn = Global_2740191.f_5272.f_264[3];
					
						if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
						{
							VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
							Global_2740191.f_5272.f_264[3] = 0;
						}
					}
					else
					{
						num2 = func_280(_GET_BOSS_OF_LOCAL_PLAYER(), plParam1);
					
						if (num2 != -1)
						{
							vehiclePedIsIn = Global_2740191.f_5272.f_264[num2];
						
							if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
							{
								VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
								Global_2740191.f_5272.f_264[num2] = 0;
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_280(Player plParam0, Player plParam1) // Position - 0x13C3E (80958)
{
	int i;

	if (func_362(plParam0))
	{
		if (func_99(plParam1, plParam0, false) || func_282(plParam1, plParam0))
		{
			for (i = 0; i < 7; i = i + 1)
			{
				if (func_281(plParam0, i) == plParam1)
					return i;
			}
		}
	}

	return -1;
}

Player func_281(Player plParam0, int iParam1) // Position - 0x13C94 (81044)
{
	if (func_362(plParam0))
		if (iParam1 > -1 && iParam1 < 7)
			return Global_1888882[plParam0 /*611*/].f_10.f_11[iParam1];

	return _INVALID_PLAYER_INDEX();
}

BOOL func_282(Player plParam0, Player plParam1) // Position - 0x13CD0 (81104)
{
	if (plParam1 != _INVALID_PLAYER_INDEX())
		if (Global_1888882[plParam0 /*611*/].f_10.f_26 != _INVALID_PLAYER_INDEX())
			return plParam1 == Global_1888882[plParam0 /*611*/].f_10.f_26;

	return false;
}

void func_283(int iParam0) // Position - 0x13D09 (81161)
{
	if (!func_296())
		return;

	Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_1 = iParam0;

	if (func_135(13616, -1) != func_284(PLAYER::PLAYER_ID()))
		func_263(13616, func_284(PLAYER::PLAYER_ID()), -1, true);

	return;
}

int func_284(Player plParam0) // Position - 0x13D51 (81233)
{
	if (func_285(plParam0) == -1)
		return -1;

	return func_285(plParam0) + 43200;
}

int func_285(Player plParam0) // Position - 0x13D72 (81266)
{
	return Global_1888882[plParam0 /*611*/].f_10.f_1;
}

void func_286() // Position - 0x13D87 (81287)
{
	if (MISC::IS_PC_VERSION())
	{
		NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
	
		if (func_105(true))
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
		else
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
	}

	return;
}

void func_287(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x13DB8 (81336)
{
	Global_2685690.f_3081.f_2 = { uParam0 };
	return;
}

void func_288(var uParam0, var uParam1) // Position - 0x13DD1 (81361)
{
	Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_8[0] = uParam0;
	Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10.f_8[1] = uParam1;
	return;
}

void func_289(BOOL bParam0) // Position - 0x13E01 (81409)
{
	func_290(204, bParam0, -1, true);
	return;
}

void func_290(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x13E13 (81427)
{
	Hash statName;

	statName = func_142(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, bParam3);

	return;
}

void func_291(BOOL bParam0) // Position - 0x13E36 (81462)
{
	if (bParam0)
	{
		if (func_293(4))
		{
			func_114(21);
			func_114(22);
		}
	
		func_114(31);
		func_292(bParam0);
	}
	else
	{
		if (func_41(PLAYER::PLAYER_ID(), 21))
		{
			func_115(21);
		
			if (!func_293(3) && func_293(4))
				func_114(22);
		}
	
		func_115(31);
		func_292(bParam0);
	}

	return;
}

void func_292(BOOL bParam0) // Position - 0x13E9E (81566)
{
	func_290(432, bParam0, -1, true);
	return;
}

BOOL func_293(int iParam0) // Position - 0x13EB1 (81585)
{
	return IS_BIT_SET(Global_2740191.f_5272.f_51, iParam0);
}

struct<16> func_294(int iParam0) // Position - 0x13EC5 (81605)
{
	var unk;

	if (iParam0 == 1)
		unk = { func_133(47, 48, -1) };
	else
		unk = { func_133(145, 147, -1) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_295(iParam0), 64);

	return unk;
}

const char* func_295(int iParam0) // Position - 0x13F08 (81672)
{
	switch (iParam0)
	{
		case 1:
			return func_132();
	
		default:
		
	}

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

BOOL func_296() // Position - 0x13F2C (81708)
{
	if (func_298() && func_297(0))
		return true;

	return false;
}

var func_297(int iParam0) // Position - 0x13F4A (81738)
{
	return Global_1574538[iParam0];
}

var func_298() // Position - 0x13F5A (81754)
{
	return func_297(func_68() + 1);
}

BOOL func_299(Player plParam0) // Position - 0x13F6C (81772)
{
	return func_300(plParam0) > 0;
}

int func_300(Player plParam0) // Position - 0x13F7C (81788)
{
	int num;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (Global_1888882[plParam0 /*611*/].f_10.f_181 != -1)
			num = Global_1888882[plParam0 /*611*/].f_10.f_181;
		else
			num = _MPPLY_STAT_GET_INT(joaat("MPPLY_VIPGAMEPLAYDISABLEDTIMER"));
	
		num2 = (num + func_301()) - NETWORK::GET_CLOUD_TIME_AS_INT();
		return num2;
	}

	return -1;
}

var func_301() // Position - 0x13FD1 (81873)
{
	return Global_262145.f_15362;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x13FE0 (81888)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_303() // Position - 0x13FFE (81918)
{
	return Global_262145.f_12825;
}

int func_304() // Position - 0x1400F (81935)
{
	int i;
	int num;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			if (func_362(player))
				num = num + 1;
	}

	return num;
}

BOOL func_305(Player plParam0, BOOL bParam1) // Position - 0x1404C (81996)
{
	if (!func_69(plParam0))
		return false;

	if (!bParam1)
		if (func_362(plParam0))
			return false;

	return func_69(Global_1888882[plParam0 /*611*/].f_10);
}

void func_306() // Position - 0x14084 (82052)
{
	var unk;
	Vector3 offsetFromEntityInWorldCoords;
	BOOL flag;

	Global_1946292 = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obLocal_149, 0.0328f, -0.8f, 0.3f) };
		flag = false;
		_STOPWATCH_DESTROY(&uLocal_145);
	
		if (func_10(0, &unk))
		{
			while (!flag)
			{
				func_367(0);
			
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_145))
					func_377(&uLocal_145, false, false);
				else if (func_374(&uLocal_145, 4000, false))
					flag = true;
			
				if (!func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0.05f, false) && !func_360(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_149), 5f))
					if (!func_308(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD))
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), offsetFromEntityInWorldCoords, 1f, 5000, ENTITY::GET_ENTITY_HEADING(obLocal_149), 0.25f);
				else
					flag = true;
			
				GRAPHICS::DRAW_DEBUG_SPHERE(offsetFromEntityInWorldCoords, 0.1f, 255, 0, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(offsetFromEntityInWorldCoords, ENTITY::GET_ENTITY_COORDS(obLocal_149, true), 0, 255, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0, 0, 255, 255);
				BUILTIN::WAIT(0);
			}
		
			_STOPWATCH_DESTROY(&uLocal_145);
			iLocal_150 = 0;
		}
	}

	while (iLocal_150 != 3)
	{
		func_307(obLocal_149);
		func_367(0);
		BUILTIN::WAIT(0);
	}

	return;
}

void func_307(Object obParam0) // Position - 0x141D5 (82389)
{
	var animDict;
	var animDict2;
	var animDict3;
	char* animnName;
	int endRange;
	int localSceneFromNetworkId;
	int randomIntInRange;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!func_376(PLAYER::PLAYER_ID()) && !func_375(PLAYER::PLAYER_ID()) && !func_11(PLAYER::PLAYER_ID()))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return;

	func_10(0, &animDict);
	func_10(1, &animDict2);
	func_10(2, &animDict3);
	STREAMING::REQUEST_ANIM_DICT(&animDict3);
	STREAMING::REQUEST_ANIM_DICT(&animDict);
	animnName = "idle_a";
	endRange = 1;

	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_F_Freemode_01"))
		endRange = 1;

	switch (iLocal_150)
	{
		case 0:
			bLocal_142 = false;
			GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD) == 7 && STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
						iLocal_151 = -1;
					}
				
					iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, false, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
					STREAMING::REMOVE_ANIM_DICT(&animDict);
					iLocal_150 = 1;
				}
			}
			break;
	
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
			STREAMING::REQUEST_ANIM_DICT(&animDict2);
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_151);
		
			if (!bLocal_142)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.93f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
					bLocal_142 = true;
				}
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.96f)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
			
				if (MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_a") && randomIntInRange == 0 || MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_b") && randomIntInRange == 1 || MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_c") && randomIntInRange == 2 || MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_d") && randomIntInRange == 3)
				{
					randomIntInRange = randomIntInRange + 1;
				
					if (randomIntInRange >= endRange)
						randomIntInRange = 0;
				}
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
					iLocal_151 = -1;
				}
			
				iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
			
				switch (randomIntInRange)
				{
					case 0:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_a", 16);
						iLocal_150 = 3;
						break;
				
					case 1:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_b", 16);
						iLocal_150 = 3;
						break;
				
					case 2:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_c", 16);
						iLocal_150 = 3;
						break;
				
					case 3:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_d", 16);
						iLocal_150 = 3;
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_XXX", 16);
						break;
				}
			}
			break;
	
		case 3:
			bLocal_142 = false;
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_a", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_b", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_c", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_d", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else
				GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
		
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_151);
		
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
					iLocal_151 = -1;
				}
			
				iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_151);
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
					PED::SET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId, 0f);
			
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
				iLocal_150 = 3;
				return;
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.99f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
					iLocal_151 = -1;
				}
			
				iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
				iLocal_150 = 3;
				return;
			}
			break;
	}

	return;
}

BOOL func_308(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x1471F (83743)
{
	if (func_309(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_309(Ped pedParam0) // Position - 0x14752 (83794)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_310(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x14772 (83826)
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

BOOL func_311() // Position - 0x147ED (83949)
{
	if (!func_11(Global_2672967.f_4.f_16))
		return false;

	return IS_BIT_SET(Global_1946439.f_747, 30);
}

BOOL func_312() // Position - 0x14813 (83987)
{
	if (func_375(Global_2672967.f_4.f_16))
		if (IS_BIT_SET(Global_1946439.f_747, 0) || IS_BIT_SET(Global_1946439.f_747, 2))
			return 1;

	return 0;
}

BOOL func_313() // Position - 0x1484A (84042)
{
	if (func_376(Global_2672967.f_4.f_16))
		if (IS_BIT_SET(Global_1946439.f_747, 0) || IS_BIT_SET(Global_1946439.f_747, 2))
			return true;

	return false;
}

BOOL func_314() // Position - 0x14881 (84097)
{
	if (func_299(PLAYER::PLAYER_ID()))
		return false;

	if (func_348())
		return false;

	if (func_345())
		return false;

	if (func_362(PLAYER::PLAYER_ID()))
		return true;
	else if (func_304() < func_303())
		return true;

	return false;
}

BOOL func_315(int iParam0, BOOL bParam1) // Position - 0x148D0 (84176)
{
	int num;

	num = func_316(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_359(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_45156[num /*32*/] == true && Global_45156[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_45156[num /*32*/].f_29)
					return false;
		
			Global_45156[num /*32*/].f_5 = 1;
			Global_45156[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_45156[num /*32*/] == false;
			Global_45156[num /*32*/].f_7;
		}
	}

	return false;
}

int func_316(int iParam0) // Position - 0x14988 (84360)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45156[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_317(BOOL bParam0) // Position - 0x149C3 (84419)
{
	if (func_311() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_318() && !Global_1946293)
		_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 2, "ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/, 0, 0, 0, 0);

	return;
}

BOOL func_318() // Position - 0x14A03 (84483)
{
	return Global_1946439.f_760;
}

void func_319(BOOL bParam0) // Position - 0x14A12 (84498)
{
	if (func_341(PLAYER::PLAYER_ID()) && func_327(PLAYER::PLAYER_ID()) == func_326(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_318() && !Global_1946293)
	{
		if (func_323())
		{
			func_322("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_304() >= func_303())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_299(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_72(PLAYER::PLAYER_ID()))
		{
			func_322("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_143) && func_374(&uLocal_143, 10000, true) || !bLocal_140)
		{
			if (func_320(PLAYER::PLAYER_ID()) || Global_1946293 == true)
			{
				bLocal_140 = true;
			
				if (!Global_1946293)
					func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_337())
					HUD::CLEAR_HELP(true);
			
				bLocal_140 = false;
				_STOPWATCH_DESTROY(&uLocal_143);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_140)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_320(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_140 = false;
			}
		}
	}

	return;
}

BOOL func_320(Player plParam0) // Position - 0x14B87 (84871)
{
	return func_321(func_90(plParam0));
}

BOOL func_321(int iParam0) // Position - 0x14B99 (84889)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_322(char* sParam0) // Position - 0x14BB9 (84921)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_323() // Position - 0x14BCF (84943)
{
	if (Global_1946298)
		return false;

	return func_324();
}

BOOL func_324() // Position - 0x14BE6 (84966)
{
	if (func_325())
		return 1;

	return Global_2684748.f_746;
}

BOOL func_325() // Position - 0x14C00 (84992)
{
	return Global_1575041 == 10;
}

int func_326(Player plParam0) // Position - 0x14C0F (85007)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	return Global_1845274[plParam0 /*877*/].f_260.f_150;
}

int func_327(Player plParam0) // Position - 0x14C32 (85042)
{
	if (func_341(plParam0))
		return func_328(Global_2658019[plParam0 /*467*/].f_324.f_8);

	return 0;
}

int func_328(int iParam0) // Position - 0x14C59 (85081)
{
	switch (iParam0)
	{
		case 60:
			return 1;
	
		case 61:
			return 2;
	
		case 62:
			return 3;
	
		case 63:
			return 4;
	
		case 64:
			return 5;
	
		case 65:
			return 6;
	
		case 66:
			return 7;
	
		case 67:
			return 8;
	
		case 68:
			return 9;
	
		case 69:
			return 10;
	}

	return 0;
}

void func_329(BOOL bParam0) // Position - 0x14CEE (85230)
{
	if (func_340(PLAYER::PLAYER_ID()) || func_312() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_318() && !Global_1946293 && func_360(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_149), 90f))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		}
		else if (func_323())
		{
			if (func_340(PLAYER::PLAYER_ID()))
				func_322("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/);
			else
				func_322("BIKERWHBLCKD" /*Join a public session to manage your Business*/);
		}
		else if (func_72(PLAYER::PLAYER_ID()))
		{
			if (_STOPWATCH_IS_INITIALIZED(&uLocal_143) && func_374(&uLocal_143, 10000, true) || !bLocal_140)
			{
				if (func_330(PLAYER::PLAYER_ID()) || Global_1946293 == true)
				{
					bLocal_140 = true;
				
					if (!Global_1946293)
						func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
				}
				else
				{
					if (func_337())
						HUD::CLEAR_HELP(true);
				
					bLocal_140 = false;
					_STOPWATCH_DESTROY(&uLocal_143);
					_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/, 0, 0, 0, 0);
				}
			}
			else if (bLocal_140)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			
				if (!func_330(PLAYER::PLAYER_ID()))
				{
					bLocal_140 = false;
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (!bParam0 && func_304() < func_303())
		{
			_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/, 0, 0, 0, 0);
		}
		else
		{
			func_322("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/);
		}
	}

	return;
}

BOOL func_330(Player plParam0) // Position - 0x14E5D (85597)
{
	return func_331(func_90(plParam0));
}

BOOL func_331(int iParam0) // Position - 0x14E6F (85615)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_332() // Position - 0x14E95 (85653)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
	{
		if (func_334(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_375(PLAYER::PLAYER_ID()) || func_333(PLAYER::PLAYER_ID()))
			return true;
	}

	return false;
}

BOOL func_333(Player plParam0) // Position - 0x14ED3 (85715)
{
	if (func_342(Global_1845274[plParam0 /*877*/].f_260.f_36, -1))
		return 1;

	return 0;
}

BOOL func_334(Player plParam0) // Position - 0x14EF6 (85750)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658019[plParam0 /*467*/].f_324.f_8 != -1 && Global_2658019[plParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_12(Global_2658019[plParam0 /*467*/].f_324.f_8) == 25;

	return false;
}

void func_335(BOOL bParam0) // Position - 0x14F56 (85846)
{
	if (func_313() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_318() && !Global_1946293)
	{
		if (func_323())
		{
			func_322("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_304() >= func_303())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_299(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_72(PLAYER::PLAYER_ID()))
		{
			func_322("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_143) && func_374(&uLocal_143, 10000, true) || !bLocal_140)
		{
			if (func_379(PLAYER::PLAYER_ID()) || Global_1946293 == true)
			{
				bLocal_140 = true;
			
				if (!Global_1946293)
					func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_337())
					HUD::CLEAR_HELP(true);
			
				bLocal_140 = false;
				_STOPWATCH_DESTROY(&uLocal_143);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_140)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_322("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_379(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_140 = false;
			}
		}
	}

	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x150B1 (86193)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_339(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_45156[i /*32*/])
		{
			Global_45156[i /*32*/] = true;
			Global_45156[i /*32*/].f_1 = Global_45357;
			Global_45357 = Global_45357 + 1;
			Global_45156[i /*32*/].f_4 = 0;
			Global_45156[i /*32*/].f_29 = 0;
			Global_45156[i /*32*/].f_5 = 0;
			Global_45156[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_45156[i /*32*/].f_8), sParam2, 16);
			Global_45156[i /*32*/].f_6 = iParam3;
			Global_45156[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45156[i /*32*/].f_7 = 0;
			Global_45156[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45156[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_45156[i /*32*/].f_13), sParam4, 64);
				Global_45156[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45156[i /*32*/].f_12 = 0;
				Global_45156[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_45156[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_337() // Position - 0x151DC (86492)
{
	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MP_OFF_LAP_1" /*Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHSECUROBLCK" /*This computer is unavailable during a mission.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKD" /*Join a public session to manage your Business*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/))
		return true;

	return false;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x15280 (86656)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_339(var uParam0) // Position - 0x15293 (86675)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_316(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_45156[num /*32*/])
		{
			Global_45156[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_340(Player plParam0) // Position - 0x152EA (86762)
{
	if (func_342(Global_1845274[plParam0 /*877*/].f_260.f_36, -1) && !IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_260.f_34, 1))
		return 1;

	return 0;
}

BOOL func_341(Player plParam0) // Position - 0x15323 (86819)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658019[plParam0 /*467*/].f_324.f_8 != -1)
				return func_12(Global_2658019[plParam0 /*467*/].f_324.f_8) == 1;

	return false;
}

BOOL func_342(int iParam0, int iParam1) // Position - 0x15369 (86889)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

BOOL func_343(int iParam0) // Position - 0x15446 (87110)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

BOOL func_344() // Position - 0x15475 (87157)
{
	return Global_78544;
}

BOOL func_345() // Position - 0x15481 (87169)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && func_305(PLAYER::PLAYER_ID(), true) && func_85(PLAYER::PLAYER_ID(), false) && func_75(PLAYER::PLAYER_ID()))
	{
		if (func_90(PLAYER::PLAYER_ID()) == 256)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, false, true, 0))
				return true;
	
		if (func_90(PLAYER::PLAYER_ID()) == 271)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.8796f, -528.8513f, 75.0839f, -1472.6295f, -526.5934f, 73.3136f, false, true, 0))
				return true;
			else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.4672f, -3167.9465f, -37.5246f, 1006.9028f, -3171.1516f, -39.6192f, false, true, 0))
				return true;
	
		if (func_346(*Global_4718592.f_138116) == 5)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 571.1f, -3123.7f, 19.8f, 567.1f, -3128.7f, 17.8f, false, true, 0))
				return true;
	}

	return false;
}

int func_346(int iParam0) // Position - 0x155AF (87471)
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_347(i))
			return i;
	}

	return -1;
}

int func_347(int iParam0) // Position - 0x155DA (87514)
{
	if (iParam0 != -1)
		return Global_262145.f_33489[iParam0];

	return -1;
}

BOOL func_348() // Position - 0x155F9 (87545)
{
	return IS_BIT_SET(Global_1946439.f_11, 1);
}

BOOL func_349() // Position - 0x15609 (87561)
{
	if (func_351(PLAYER::PLAYER_ID()) == 150 && func_350(PLAYER::PLAYER_PED_ID(), 3084.5112f, -4686.664f, 26.2522f, 50f, true))
		return true;

	return false;
}

BOOL func_350(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5) // Position - 0x15646 (87622)
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5), fParam1) <= fParam4 * fParam4;
}

int func_351(Player plParam0) // Position - 0x15664 (87652)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1888882[player /*611*/];

	return -1;
}

int func_352(Player plParam0) // Position - 0x15683 (87683)
{
	if (func_90(plParam0) == 243)
		return func_84(plParam0);

	return -1;
}

BOOL func_353() // Position - 0x156A0 (87712)
{
	return func_362(PLAYER::PLAYER_ID());
}

BOOL func_354() // Position - 0x156B0 (87728)
{
	return Global_1845274[PLAYER::PLAYER_ID() /*877*/] == 148;
}

BOOL func_355() // Position - 0x156C6 (87750)
{
	return Global_76856;
}

BOOL func_356() // Position - 0x156D2 (87762)
{
	return Global_1931786;
}

BOOL func_357() // Position - 0x156DE (87774)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, false) == PLAYER::PLAYER_PED_ID())
			return true;

	return false;
}

BOOL func_358() // Position - 0x1570C (87820)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_359(int iParam0) // Position - 0x15726 (87846)
{
	if (iParam0 == 1)
		if (Global_21239.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21239.f_1 > 3)
		return true;

	return false;
}

BOOL func_360(float fParam0, float fParam1, float fParam2) // Position - 0x1577D (87933)
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return 1;
	else if (fParam0 < num || fParam0 > num2)
		return 1;

	return 0;
}

BOOL func_361() // Position - 0x157F2 (88050)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		if (func_376(PLAYER::PLAYER_ID()))
			return 1;

	return 0;
}

BOOL func_362(Player plParam0) // Position - 0x15813 (88083)
{
	if (func_69(plParam0))
		if (func_69(Global_1888882[plParam0 /*611*/].f_10))
			return Global_1888882[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

BOOL func_363() // Position - 0x15848 (88136)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149) && func_11(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_364() // Position - 0x1586B (88171)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149) && func_341(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_365(Player plParam0) // Position - 0x1588E (88206)
{
	if (func_342(Global_1845274[plParam0 /*877*/].f_260.f_36, -1))
		return 1;

	return 0;
}

BOOL func_366() // Position - 0x158B1 (88241)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		if (ENTITY::GET_ENTITY_MODEL(obLocal_149) == joaat("ex_prop_monitor_01_ex") || func_376(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

void func_367(int iParam0) // Position - 0x158E4 (88292)
{
	if (func_372())
		return;

	if (!(Global_21239.f_1 == 1))
	{
		if (func_359(0))
			func_368(iParam0);
	
		MISC::SET_BIT(&Global_9076, 2);
	}

	return;
}

void func_368(int iParam0) // Position - 0x15917 (88343)
{
	if (func_372())
		return;

	if (Global_21461)
		if (func_371())
			func_370(true, true);
		else
			func_370(false, false);

	if (Global_21239.f_1 == 10 || Global_21239.f_1 == 9)
		MISC::SET_BIT(&Global_9076, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22602 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9075, 30);
	else
		MISC::CLEAR_BIT(&Global_9075, 30);

	if (!func_369())
		Global_21239.f_1 = 3;

	return;
}

BOOL func_369() // Position - 0x159A1 (88481)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 0)
		return true;

	return false;
}

void func_370(BOOL bParam0, BOOL bParam1) // Position - 0x159C8 (88520)
{
	if (bParam0)
	{
		if (func_359(0))
		{
			Global_21461 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21176);
		
			Global_21167 = { Global_21185[Global_21184 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21167);
		}
	}
	else if (Global_21461 == true)
	{
		Global_21461 = false;
		Global_21167 = { Global_21192[Global_21184 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21176);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21167);
	}

	return;
}

BOOL func_371() // Position - 0x15A3C (88636)
{
	return IS_BIT_SET(Global_1960332, 5);
}

BOOL func_372() // Position - 0x15A4A (88650)
{
	return IS_BIT_SET(Global_1960332, 19);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x15A59 (88665)
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_374(var uParam0, int iParam1, BOOL bParam2) // Position - 0x15A66 (88678)
{
	if (iParam1 == -1)
		return true;

	func_377(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

BOOL func_375(Player plParam0) // Position - 0x15AC4 (88772)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		{
			if (Global_2658019[plParam0 /*467*/].f_324.f_8 != -1)
			{
				num = func_12(Global_2658019[plParam0 /*467*/].f_324.f_8);
				return num == 2 || num == 25;
			}
		}
	}

	return false;
}

BOOL func_376(Player plParam0) // Position - 0x15B19 (88857)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658019[plParam0 /*467*/].f_324.f_8 != -1)
				return func_12(Global_2658019[plParam0 /*467*/].f_324.f_8) == 0;

	return false;
}

void func_377(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15B5F (88927)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x15BA4 (88996)
{
	return uParam0->f_1;
}

BOOL func_379(Player plParam0) // Position - 0x15BB0 (89008)
{
	return func_380(func_90(plParam0));
}

BOOL func_380(int iParam0) // Position - 0x15BC2 (89026)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_381(int iParam0) // Position - 0x15BE8 (89064)
{
	return Global_44392 == iParam0;
}

void func_382() // Position - 0x15BF6 (89078)
{
	if (iLocal_138 != -1)
		func_339(&iLocal_138);

	if (func_337())
		HUD::CLEAR_HELP(true);

	Global_1946293 = false;
	Global_1946292 = 0;
	return;
}


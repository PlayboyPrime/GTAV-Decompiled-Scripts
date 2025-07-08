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
	var uLocal_96 = -1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = -2;
	var uLocal_106 = -2;
	var uLocal_107 = -2;
	var uLocal_108 = 5;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 2;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 2;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	int iLocal_136 = 0;
	BOOL bLocal_137 = 0;
	BOOL bLocal_138 = 0;
	BOOL bLocal_139 = 0;
	BOOL bLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	Object obLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
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
	iLocal_136 = -1;
	uLocal_150 = { 0f, 0f, 0f };
	obLocal_147 = obScriptParam_0;

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_147))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_301();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_300(13) || func_300(14))
	{
		func_301();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_39712)
	{
		func_301();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_76949)
		SCRIPT::TERMINATE_THIS_THREAD();

	flag = false;
	name = "tvscreen";
	sizeAndPeds = 25;
	flag2 = true;
	vector = { ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) - (ENTITY::GET_ENTITY_FORWARD_VECTOR(obScriptParam_0) * { 0.6f, 0.6f, 0.6f }) };
	vector.f_2 = vector.f_2 + 0.5f;
	uLocal_153 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obScriptParam_0, uLocal_150) };
	Global_1945783 = 0;
	Global_1945779 = false;
	Global_1945891 = 0;

	while (flag2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_147))
		{
			if (bLocal_138)
				if (!func_298(PLAYER::PLAYER_ID()))
					if (!_STOPWATCH_IS_INITIALIZED(&uLocal_141))
						func_296(&uLocal_141, true, false);
		
			if (Global_1945779 && func_295(PLAYER::PLAYER_ID()) || func_294(PLAYER::PLAYER_ID()))
			{
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_145))
				{
					func_296(&uLocal_145, false, false);
				}
				else if (func_293(&uLocal_145, 10000, false))
				{
					_STOPWATCH_DESTROY(&uLocal_145);
					Global_1945779 = false;
				}
			
				func_286(0);
			}
		
			if (Global_1845069)
			{
				if (!flag)
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_147);
				
					if (entityModel == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true), 1f, joaat("prop_laptop_01a"), false);
						entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_147, 2) };
						obLocal_147 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(obLocal_147, true), false, true, false);
						ENTITY::SET_ENTITY_ROTATION(obLocal_147, entityRotation, 2, true);
						flag = true;
					}
				}
			}
		
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obLocal_147, 0))
			{
				func_301();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(obLocal_147) && !CUTSCENE::IS_CUTSCENE_PLAYING() && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_147))
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
			
				if (func_285() || func_284(PLAYER::PLAYER_ID()) || func_294(PLAYER::PLAYER_ID()) || func_283())
					vector2 = { 1f, 1f, 0.9f };
				else if (func_282())
					vector2 = { 0.75f, 0.55f, 1.25f };
			
				flag4 = func_281(PLAYER::PLAYER_ID());
				flag5 = true;
			
				if (func_282() || func_280())
					flag5 = func_279(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_147), 90f);
			
				if (!flag3 && !Global_33552 && !func_278(0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && !func_277() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vector, vector2, false, true, 1) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(obLocal_147) && !IS_BIT_SET(Global_2621446, 15) && !func_276() && !(Global_79744 && func_275()) && !(!Global_79744 && func_274()) && !(Global_79744 && IS_BIT_SET(Global_4718592.f_15, 24) && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !(Global_79744 && func_273() && func_272()) && !(Global_79744 && func_271(PLAYER::PLAYER_ID()) == 5) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !Global_78509 && !func_268() && !func_267() && flag5 && !func_264() && !func_263())
				{
					if (!func_262(Global_1845225[PLAYER::PLAYER_ID() /*874*/].f_260.f_36) && !func_261(Global_1845225[PLAYER::PLAYER_ID() /*874*/].f_260.f_36, -1) && !func_260(PLAYER::PLAYER_ID()))
					{
						if (bLocal_139 != flag4)
						{
							if (func_295(PLAYER::PLAYER_ID()) || func_259(PLAYER::PLAYER_ID()) || func_294(PLAYER::PLAYER_ID()))
							{
								if (iLocal_136 != -1)
									func_258(&iLocal_136);
							
								if (func_256())
									HUD::CLEAR_HELP(true);
							}
						}
					
						bLocal_139 = flag4;
					
						if (iLocal_136 == -1)
							if (flag)
								_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "MPLA_BILL" /*Unable to use the laptop until utility charge is paid.*/, 0, 0, 0, 0);
							else if (func_285())
								func_254(flag4);
							else if (func_251())
								func_248(flag4);
							else if (func_283())
								func_238(flag4);
							else if (func_282())
								func_236(flag4);
							else
								_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "BROWSEINPUTTRIG" /*Press ~INPUT_CONTEXT~ to browse the internet on this computer.*/, 0, 0, 0, 0);
					}
				
					if (iLocal_136 != -1 && func_234(iLocal_136, true) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_233())
					{
						if (iLocal_136 != -1)
							func_258(&iLocal_136);
					
						if (!flag)
						{
							if (func_232() || func_231() || func_230())
								func_225();
						
							if (func_285())
							{
								func_30(0, flag4);
								func_29(0, 1);
							}
							else if (func_283())
							{
								func_30(0, flag4);
								func_29(0, 3);
							}
							else if (func_251())
							{
								func_30(1, flag4);
								func_29(0, 2);
							}
							else if (func_282())
							{
								func_29(8, 0);
							}
							else
							{
								func_29(0, 0);
							}
						
							if (!bLocal_137)
							{
								func_22();
								bLocal_137 = true;
							}
						
							flag6 = true;
						
							if (func_232() || func_231() || func_230())
							{
								func_21(&uLocal_143, false, false);
							
								while (!func_293(&uLocal_143, 500, false))
								{
									func_286(0);
									BUILTIN::WAIT(0);
								}
							
								_STOPWATCH_DESTROY(&uLocal_143);
							}
						
							while (flag6)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(obLocal_147) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(obLocal_147, true), 1.5f, 1.5f, 4f, false, true, 1))
									Global_76841 = 1;
							
								if (func_232() || func_231() || func_260(PLAYER::PLAYER_ID()) || func_230())
									if (!func_20() && !Global_78509)
										flag6 = false;
								else if (func_20() || Global_76841)
									flag6 = false;
							
								if (func_232())
									func_286(0);
							
								BUILTIN::WAIT(0);
							}
						
							if (func_232() || func_231() || func_230())
								func_6();
						
							func_286(0);
							_STOPWATCH_DESTROY(&uLocal_145);
							bLocal_137 = false;
						}
					}
					else if (iLocal_136 != -1 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_233() && func_230())
					{
						if (iLocal_136 != -1)
						{
							func_258(&iLocal_136);
							func_5();
						}
					
						func_225();
						MISC::SET_BIT(&(Global_1945923.f_4), 28);
					
						while (IS_BIT_SET(Global_1945923.f_4, 28))
						{
							BUILTIN::WAIT(0);
						}
					
						func_6();
						func_4();
						func_286(0);
					}
				}
				else
				{
					if (iLocal_136 != -1)
						func_258(&iLocal_136);
				
					if (func_295(PLAYER::PLAYER_ID()) || func_259(PLAYER::PLAYER_ID()))
						if (func_256())
							HUD::CLEAR_HELP(true);
				
					if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
						if (func_1())
							flag2 = false;
				}
			}
			else if (iLocal_136 != -1)
			{
				func_258(&iLocal_136);
			}
		}
		else
		{
			if (iLocal_136 != -1)
				func_258(&iLocal_136);
		
			flag2 = false;
		}
	
		BUILTIN::WAIT(0);
	}

	if (flag)
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(name))
			HUD::RELEASE_NAMED_RENDERTARGET(name);

	return;
}

BOOL func_1() // Position - 0x885 (2181)
{
	Hash entityModel;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_147))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_147);
	
		if (func_3(entityModel))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				entityCoords2 = { ENTITY::GET_ENTITY_COORDS(obLocal_147, true) };
				return BUILTIN::VDIST2(entityCoords, entityCoords2) > 10000f;
			}
		}
		else
		{
			return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_147);
		}
	}

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x8ED (2285)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_3(Hash hParam0) // Position - 0x90E (2318)
{
	if (hParam0 == joaat("prop_laptop_lester"))
		return true;

	return false;
}

void func_4() // Position - 0x925 (2341)
{
	if (Global_2672964.f_1023.f_10)
		Global_2672964.f_1023.f_10 = 0;

	return;
}

void func_5() // Position - 0x943 (2371)
{
	if (!Global_2672964.f_1023.f_10)
		Global_2672964.f_1023.f_10 = 1;

	return;
}

void func_6() // Position - 0x962 (2402)
{
	var animDict;

	if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(obLocal_147))
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
			
				if (func_7(1, &animDict))
					STREAMING::REMOVE_ANIM_DICT(&animDict);
			
				if (func_7(2, &animDict))
				{
					if (iLocal_148 != 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_149);
							iLocal_149 = -1;
						}
					
						iLocal_149 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_153, ENTITY::GET_ENTITY_ROTATION(obLocal_147, 2), 2, false, false, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
						STREAMING::REMOVE_ANIM_DICT(&animDict);
					}
				}
			}
		}
	}

	Global_1945778 = 0;
	return;
}

BOOL func_7(int iParam0, char* sParam1) // Position - 0xA56 (2646)
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

	if (!func_295(PLAYER::PLAYER_ID()) && !func_294(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID()))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam1, "anim@amb@warehouse@laptop@", 64);
	return true;
}

BOOL func_8(Player plParam0) // Position - 0xABE (2750)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658016[plParam0 /*467*/].f_324.f_8 != -1)
				return func_9(Global_2658016[plParam0 /*467*/].f_324.f_8) == 13;

	return false;
}

int func_9(int iParam0) // Position - 0xB05 (2821)
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
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	
		case 172:
			return 30;
	
		case 173:
			return 31;
	
		case 174:
		case 175:
		case 176:
			return 32;
	}

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x103B (4155)
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
				if (player == Global_2672964.f_3)
					return Global_2672964.f_2;
				else if (Global_2658016[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x109B (4251)
{
	return -1;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x10A4 (4260)
{
	if (Global_1575058 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_19())
		return true;

	if (Global_2699129)
		return true;

	if (func_18())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_16())
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1128 (4392)
{
	switch (func_15())
	{
		case 0:
			return func_14();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_14() // Position - 0x115B (4443)
{
	switch (Global_2699236)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_15() // Position - 0x117F (4479)
{
	return Global_33281;
}

BOOL func_16() // Position - 0x118A (4490)
{
	return Global_2684745.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x1199 (4505)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_18() // Position - 0x11B0 (4528)
{
	return Global_2696538;
}

BOOL func_19() // Position - 0x11BC (4540)
{
	return Global_2684745.f_695;
}

BOOL func_20() // Position - 0x11CB (4555)
{
	return Global_76838;
}

void func_21(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11D7 (4567)
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

void func_22() // Position - 0x1214 (4628)
{
	if (func_28() || func_27())
	{
		func_26();
		func_23();
	}

	return;
}

void func_23() // Position - 0x1235 (4661)
{
	if (!_IS_FMMC_ACTIVE() && !func_24() && Global_2685684)
		Global_4718592.f_131616 = 0;

	return;
}

BOOL func_24() // Position - 0x1263 (4707)
{
	return Global_2684745.f_693;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x1272 (4722)
{
	return Global_1845225[PLAYER::PLAYER_ID() /*874*/].f_185 != 0;
}

void func_26() // Position - 0x1289 (4745)
{
	Global_2684745.f_758 = 1;
	return;
}

BOOL func_27() // Position - 0x1299 (4761)
{
	return Global_2684745.f_737;
}

BOOL func_28() // Position - 0x12A8 (4776)
{
	return IS_BIT_SET(Global_2684745.f_2, 11);
}

void func_29(int iParam0, int iParam1) // Position - 0x12B9 (4793)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_76952 = iParam0;
	flag = iParam1 == 1;
	flag2 = iParam1 == 2;
	flag3 = iParam1 == 3;

	switch (Global_76952)
	{
		case 3:
			Global_76950 = 0;
			break;
	
		case 4:
			Global_76950 = 3;
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

	if (Global_79744 && func_275())
		return;

	if (!Global_79744 && func_274())
		return;

	if (Global_79744)
	{
		Global_76803 = iParam1;
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

void func_30(int iParam0, BOOL bParam1) // Position - 0x1499 (5273)
{
	if (!bParam1 && !func_224(PLAYER::PLAYER_ID(), true) && func_223() < func_222() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_218(PLAYER::PLAYER_ID()))
		func_31(true, iParam0, 375994962);

	return;
}

void func_31(BOOL bParam0, int iParam1, int iParam2) // Position - 0x14E8 (5352)
{
	var unk;

	func_132(true, true, iParam1, iParam2);

	if (bParam0)
	{
		if (func_131(91) || func_131(98))
			func_128();
	
		func_107();
		func_106(17);
		unk.f_3 = 514341487;
		unk.f_4 = iParam1;
	
		if (func_105(PLAYER::PLAYER_ID()) && iParam1 == 0)
			unk.f_4 = 100;
	
		func_103(unk, func_104(false, true));
		func_58();
	
		if (!func_105(PLAYER::PLAYER_ID()) && iParam1 != 1)
			_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(_CHAR_GANGAPP_SECUROSERV, "GB_TXTMSG_INIT2" /*Thank you for registering with SecuroServ as a VIP. Recruit your Protection Detail immediately to start feeling the benefits of having a troop of armed Bodyguards at your beck and call. But what now? Take your operation to the next level by getting an office on dynasty8realestate.com, of course! You'll become a CEO with access to Special Cargo, Vehicle Cargo, Special Vehicle Work and many other benefits.*/, 2, 0, 0, 0, 0, true, 0, 1);
	}

	return;
}

int _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x1584 (5508)
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

	if (func_34(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9799 = iParam6;
			Global_9702[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9779 = echParam0;
			MISC::SET_BIT(&Global_9075, 1);
			MISC::SET_BIT(&Global_9075, 7);
		}
	
		return 1;
	}

	return 0;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x1613 (5651)
{
	return Global_2241[character /*29*/].f_3;
}

int func_34(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x1626 (5670)
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
			if (Global_21222 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_21222 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_21222 == CHAR_FRANKLIN)
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
	
		if (Global_114344.f_14055[Global_21222 /*20*/].f_17 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_50() == 0)
	{
		func_48();
		return 0;
	}

	func_47(Global_23653);
	TEXT_LABEL_ASSIGN_STRING(&Global_114344.f_14145[Global_23653 /*104*/], sParam1, 64);
	Global_114344.f_14145[Global_23653 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114344.f_14145[Global_23653 /*104*/].f_24 = iParam2;
	}

	Global_114344.f_14145[Global_23653 /*104*/].f_25 = iParam7;
	Global_114344.f_14145[Global_23653 /*104*/].f_26 = iParam8;
	Global_114344.f_14145[Global_23653 /*104*/].f_29 = iParam9;
	Global_114344.f_14145[Global_23653 /*104*/].f_30 = iParam12;
	Global_114344.f_14145[Global_23653 /*104*/].f_31 = iParam11;
	Global_114344.f_14145[Global_23653 /*104*/].f_28 = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114344.f_14145[Global_23653 /*104*/].f_33), sParam4, 64);
	Global_114344.f_14145[Global_23653 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114344.f_14145[Global_23653 /*104*/].f_50), sParam5, 64);
	Global_114344.f_14145[Global_23653 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114344.f_14145[Global_23653 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114344.f_14145[Global_23653 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_9075, 10))
	{
		Global_114344.f_14145[Global_23653 /*104*/].f_99[0] = 1;
		Global_114344.f_14145[Global_23653 /*104*/].f_99[1] = 1;
		Global_114344.f_14145[Global_23653 /*104*/].f_99[2] = 1;
		Global_9798 = 4;
		func_46(0);
		func_46(2);
		func_46(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_114344.f_14145[Global_23653 /*104*/].f_99[Global_21222] = 1;
				break;
		
			case 0:
				Global_114344.f_14145[Global_23653 /*104*/].f_99[0] = 1;
				break;
		
			case 2:
				Global_114344.f_14145[Global_23653 /*104*/].f_99[2] = 1;
				break;
		
			case 1:
				Global_114344.f_14145[Global_23653 /*104*/].f_99[1] = 1;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_21222)
			{
				case CHAR_MICHAEL:
					func_46(0);
					Global_9798 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_46(1);
					Global_9798 = 1;
					break;
			
				case CHAR_TREVOR:
					func_46(2);
					Global_9798 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_46(3);
					Global_9798 = 3;
					break;
			
				default:
					Global_9798 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_9075, 10))
		{
			Global_114344.f_14055[0 /*20*/].f_17 = 1;
			Global_114344.f_14055[1 /*20*/].f_17 = 1;
			Global_114344.f_14055[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114344.f_14055[Global_21222 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114344.f_14055[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114344.f_14055[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114344.f_14055[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_23655[Global_23653] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21165)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21222)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9897[Global_21222 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_45())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21211, true);
	}

	if (!Global_21445 && !IS_BIT_SET(Global_9077, 9))
	{
		if (Global_21222.f_1 == 6)
		{
			func_44(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_40(1);
			func_44(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1974350 != -1 && echParam0 == Global_1974350)
		num2 = 1;

	func_35(echParam0, sParam1, num2, func_39(PLAYER::PLAYER_ID()));
	return 1;
}

void func_35(eCharacter echParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0x1B09 (6921)
{
	eCharacter character;

	if (!func_36())
		return;

	character = echParam0;
	character.f_1 = 1654525105;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = uParam3;
	character.f_6 = Global_1974333.f_7;
	character.f_7 = Global_1974333.f_8;
	character.f_8 = Global_1974333.f_9;
	character.f_9 = Global_1974333.f_10;
	character.f_10 = Global_1974333.f_11;
	character.f_11 = Global_1974333.f_12;
	character.f_12 = Global_1974333.f_13;
	character.f_13 = Global_1974333.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1974350 = -1;

	return;
}

BOOL func_36() // Position - 0x1BA4 (7076)
{
	if (!Global_262145.f_28396)
		return false;

	if (!Global_79744)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_37(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_37(Player plParam0) // Position - 0x1C07 (7175)
{
	return func_38(plParam0, 20);
}

BOOL func_38(Player plParam0, int iParam1) // Position - 0x1C17 (7191)
{
	return IS_BIT_SET(Global_1888737[plParam0 /*611*/].f_10.f_4, iParam1);
}

var func_39(Player plParam0) // Position - 0x1C2F (7215)
{
	return Global_1845225[plParam0 /*874*/].f_198.f_6;
}

void func_40(int iParam0) // Position - 0x1C44 (7236)
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

	Global_23654 = 0;
	Global_9697 = iParam0;
	func_43();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_300(14))
		{
			while (num < 35)
			{
				if (iParam0 == Global_9082[num /*15*/].f_11)
				{
					if (i == Global_9082[num /*15*/].f_4)
					{
						if (Global_9660[i] == 0)
						{
							Global_9623[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_9076, 3))
								{
									value = 42;
									Global_21448 = 1;
								}
								else
								{
									value = 255;
									Global_21448 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696533)
								if (num == 14)
									func_41(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23648), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
						
							Global_9660[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 35)
			{
				if (iParam0 == Global_9082[num /*15*/].f_11)
				{
					if (i == Global_9082[num /*15*/].f_4)
					{
						if (Global_9660[i] == 0)
						{
							Global_9623[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114344.f_14145[j /*104*/].f_24 != 0)
										if (Global_114344.f_14145[j /*104*/].f_28 == 0)
											if (Global_114344.f_14145[j /*104*/].f_99[Global_21222] == 1)
												Global_23654 = Global_23654 + 1;
								}
							
								func_41(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23654), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79744)
								{
									value2 = 0;
									value2 = Global_4543039;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4543041[k /*296*/].f_24 != 0)
											if (Global_4543041[k /*296*/].f_28 == 0)
												if (Global_4543041[k /*296*/].f_291[Global_21222] == 1)
													value2 = value2 + 1;
									}
								
									func_41(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value2), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21222)
									{
										case CHAR_MICHAEL:
											value3 = Global_45601;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45602;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45603;
											break;
									
										default:
											break;
									}
								
									func_41(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value3), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_41(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23648), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9081);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_9076, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_9076, 3))
								{
									value5 = 42;
									Global_21448 = 1;
								}
								else
								{
									value5 = 255;
									Global_21448 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 24 && MISC::ARE_STRINGS_EQUAL(&Global_9082[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_9076, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9082[num /*15*/].f_10 == 57 && num == 24)
							{
								value6 = 0;
								value6 = Global_1881764.f_1;
								func_41(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value6), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_41(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9660[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_41(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x21CB (8651)
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
		func_42(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_42(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_42(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_42(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_42(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_42(const char* sParam0) // Position - 0x227E (8830)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_43() // Position - 0x2290 (8848)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9660[i] = 0;
	}

	return;
}

void func_44(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x22B3 (8883)
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

BOOL func_45() // Position - 0x2316 (8982)
{
	return Global_1575086;
}

void func_46(int iParam0) // Position - 0x2322 (8994)
{
	var unk;
	var unk2;

	unk = Global_114344.f_14055[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_47(int iParam0) // Position - 0x2341 (9025)
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
	Global_114344.f_14145[iParam0 /*104*/].f_18 = clockSeconds;
	Global_114344.f_14145[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_114344.f_14145[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_114344.f_14145[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_114344.f_14145[iParam0 /*104*/].f_18.f_4 = num;
	Global_114344.f_14145[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_48() // Position - 0x23D3 (9171)
{
	int num;
	int num2;
	int num3;

	if (Global_79744)
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
	Global_23653 = 34;
	Global_114344.f_14145[Global_23653 /*104*/].f_18 = -1;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_1 = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_2 = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_3 = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_49(Global_114344.f_14145[num3 /*104*/].f_18, Global_114344.f_14145[Global_23653 /*104*/].f_18))
			Global_23653 = num3;
	
		num3 = num3 + 1;
	}

	Global_114344.f_14145[Global_23653 /*104*/].f_24 = 1;
	return;
}

BOOL func_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x249E (9374)
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

int func_50() // Position - 0x2589 (9609)
{
	int num;
	int num2;
	int i;

	if (Global_79744)
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
		if (Global_114344.f_14145[i /*104*/].f_24 == 0)
		{
			Global_23653 = i;
			return 1;
		}
	}

	i = num;
	Global_23653 = 34;
	Global_114344.f_14145[Global_23653 /*104*/].f_18 = -1;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_1 = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_2 = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_3 = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_114344.f_14145[i /*104*/].f_24 == 0 || Global_114344.f_14145[i /*104*/].f_24 == 1)
			if (!func_49(Global_114344.f_14145[i /*104*/].f_18, Global_114344.f_14145[Global_23653 /*104*/].f_18))
				Global_23653 = i;
	
		Global_114344.f_14145[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_23653 == 34)
		return 0;

	Global_114344.f_14145[Global_23653 /*104*/].f_99[0] = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_99[1] = 0;
	Global_114344.f_14145[Global_23653 /*104*/].f_99[2] = 0;
	return 1;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x26F1 (9969)
{
	if (func_300(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[0 /*29*/])
				Global_21222 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[1 /*29*/])
				Global_21222 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[2 /*29*/])
				Global_21222 = CHAR_TREVOR;
			else
				Global_21222 = CHAR_MICHAEL;
	}
	else
	{
		Global_21222 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21222 == _CHAR_NULL)
			Global_21222 = CHAR_MULTIPLAYER;
	
		if (Global_79744)
			Global_21222 = CHAR_MULTIPLAYER;
	
		if (Global_21222 > CHAR_MULTIPLAYER)
			Global_21222 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2793 (10131)
{
	func_53();
	return Global_114344.f_2367.f_539.f_4321;
}

void func_53() // Position - 0x27AC (10156)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114344.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_54(character) && !func_300(14) || Global_113292)
			{
				if (Global_114344.f_2367.f_539.f_4321 != character && func_54(Global_114344.f_2367.f_539.f_4321))
					Global_114344.f_2367.f_539.f_4322 = Global_114344.f_2367.f_539.f_4321;
			
				Global_114344.f_2367.f_539.f_4323 = character;
				Global_114344.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114344.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114344.f_2367.f_539.f_4323 = Global_114344.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114344.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_54(eCharacter echParam0) // Position - 0x28A9 (10409)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x28B5 (10421)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x28F2 (10482)
{
	if (func_54(character))
		return func_57(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_57(eCharacter echParam0) // Position - 0x2917 (10519)
{
	return Global_2241[echParam0 /*29*/];
}

void func_58() // Position - 0x2926 (10534)
{
	if (!func_100() && func_73() && func_71(PLAYER::PLAYER_ID()))
		if (func_68())
			_THEFEED_SHOW_MESSAGE("GB_INFO_MC_L" /*There are players looking to join a MC in this session.*/, false);
		else
			_THEFEED_SHOW_MESSAGE("GB_INFO_LFG" /*There are players looking for work as Bodyguards in this session.*/, false);

	return;
}

int _THEFEED_SHOW_MESSAGE(char* sParam0, BOOL bParam1) // Position - 0x296A (10602)
{
	int num;
	int num2;

	num = -1;
	num2 = 1;

	if (bParam1)
		num2 = 2;

	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_60(0, sParam0, num2, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return num;
}

void func_60(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x29A2 (10658)
{
	int num;

	if (!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_63(PLAYER::PLAYER_ID(), 0))
		return;

	num = func_61(iParam2);

	if (num >= 0 && num < 5)
	{
		Global_1939694.f_5[num /*53*/] = iParam0;
		Global_1939694.f_5[num /*53*/].f_1 = iParam2;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1939694.f_5[num /*53*/].f_8), sParam1, 16);
		Global_1939694.f_5[num /*53*/].f_2[0] = iParam4;
		Global_1939694.f_5[num /*53*/].f_2[1] = iParam5;
		Global_1939694.f_5[num /*53*/].f_2[2] = iParam6;
		Global_1939694.f_5[num /*53*/].f_7 = iParam7;
		Global_1939694.f_5[num /*53*/].f_6 = iParam8;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1939694.f_5[num /*53*/].f_12), sParam3, 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1939694.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1939694.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1939694.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
	}

	return;
}

int func_61(int iParam0) // Position - 0x2AAA (10922)
{
	int i;

	for (i = 0; i <= Global_1939694 - 1; i = i + 1)
	{
		if (iParam0 > Global_1939694.f_5[i /*53*/].f_1)
		{
			func_62(i);
			return i;
		}
	}

	Global_1939694 = Global_1939694 + 1;

	if (Global_1939694 > 5)
	{
		Global_1939694 = 5;
		return Global_1939694;
	}

	return Global_1939694 - 1;
}

void func_62(int iParam0) // Position - 0x2B0C (11020)
{
	int i;

	for (i = 4; i >= iParam0 + 1; i = i + -1)
	{
		Global_1939694.f_5[i /*53*/] = { Global_1939694.f_5[i - 1 /*53*/] };
	}

	return;
}

BOOL func_63(Player plParam0, int iParam1) // Position - 0x2B45 (11077)
{
	BOOL flag;

	if (!func_66(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_64(-1, false) == 8;
	else
		flag = Global_1845225[plParam0 /*874*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_64(int iParam0, BOOL bParam1) // Position - 0x2B9E (11166)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_65();

	if (Global_1575066[num2] == 1)
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

int func_65() // Position - 0x2BDF (11231)
{
	return Global_1574927;
}

BOOL func_66(Player plParam0) // Position - 0x2BEB (11243)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x2C0D (11277)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

BOOL func_68() // Position - 0x2C1E (11294)
{
	return func_69(PLAYER::PLAYER_ID());
}

BOOL func_69(Player plParam0) // Position - 0x2C2E (11310)
{
	return func_70(plParam0, 1);
}

BOOL func_70(Player plParam0, int iParam1) // Position - 0x2C3D (11325)
{
	if (func_66(plParam0))
		if (func_66(Global_1888737[plParam0 /*611*/].f_10))
			if (Global_1888737[plParam0 /*611*/].f_10 == plParam0 && Global_1888737[plParam0 /*611*/].f_10.f_431 == iParam1)
				return 1;

	return 0;
}

BOOL func_71(Player plParam0) // Position - 0x2C8C (11404)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return false;

	if (func_63(plParam0, 0))
		return false;

	if (IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_140, 2) || IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_140, 5))
		return false;

	if (func_72(plParam0))
		return false;

	return true;
}

BOOL func_72(Player plParam0) // Position - 0x2CF4 (11508)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_38(plParam0, 9);

	return false;
}

BOOL func_73() // Position - 0x2D12 (11538)
{
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (func_74(player))
			return true;
	}

	return false;
}

BOOL func_74(Player plParam0) // Position - 0x2D43 (11587)
{
	int num;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (plParam0 != PLAYER::PLAYER_ID())
		{
			num = 0;
		
			if (func_99(true))
				if (func_98(plParam0, 9))
					num = 1;
			else if (func_38(plParam0, 15))
				num = 1;
		
			if (num && func_75(plParam0, 0, false))
				return true;
		}
	}

	return false;
}

int func_75(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x2DA0 (11680)
{
	var gamerHandle;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return 0;

	if (func_63(plParam0, 0))
		return 0;

	if (func_96(plParam0))
		return 0;

	if (IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_140, 2) || IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_140, 5))
		return 0;

	if (func_95(plParam0))
		return 0;

	if (bParam2)
	{
		if (func_93(plParam0, plParam1, true))
			return 0;
	
		if (func_37(plParam0))
			return 0;
	
		if (func_91(plParam0, true))
			return 0;
	}
	else if (func_224(plParam0, true))
	{
		return 0;
	}

	if (func_90(plParam0))
		return 0;

	if (func_72(plParam0))
		return 0;

	if (func_218(plParam0))
		return 0;

	if (func_88(plParam0))
		return 0;

	if (func_78(plParam0))
		return 0;

	if (!Global_1983644)
	{
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };
	
		if (IS_GAMER_HANDLE_VALID(gamerHandle) && !NETWORK::_NETWORK_HAS_PLAYER_PASSED_CHECK_TYPE(0, &gamerHandle))
			return 0;
	}

	return 1;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x2EC7 (11975)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x2ED7 (11991)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_78(Player plParam0) // Position - 0x2EEE (12014)
{
	if (func_86(plParam0))
		return true;

	if (func_79(plParam0))
		return true;

	return false;
}

BOOL func_79(Player plParam0) // Position - 0x2F11 (12049)
{
	if (func_80(plParam0, 339, -1))
		return true;

	return false;
}

BOOL func_80(Player plParam0, int iParam1, int iParam2) // Position - 0x2F2B (12075)
{
	Player player;

	if (func_84(plParam0) == iParam1)
	{
		if (iParam2 == -1)
		{
			return true;
		}
		else
		{
			player = func_83(plParam0);
		
			if (player != _INVALID_PLAYER_INDEX())
				return func_81(player) == iParam2;
		}
	}

	return false;
}

int func_81(Player plParam0) // Position - 0x2F69 (12137)
{
	if (func_82(plParam0, false))
		return Global_1888737[plParam0 /*611*/].f_10.f_182;

	return -1;
}

BOOL func_82(Player plParam0, BOOL bParam1) // Position - 0x2F8C (12172)
{
	if (func_66(plParam0))
		if (Global_1888737[plParam0 /*611*/].f_10.f_33 != -1 || bParam1 && Global_1888737[plParam0 /*611*/].f_10.f_32 != -1)
			return true;

	return false;
}

Player func_83(Player plParam0) // Position - 0x2FD0 (12240)
{
	return Global_1888737[plParam0 /*611*/].f_10.f_35;
}

int func_84(Player plParam0) // Position - 0x2FE5 (12261)
{
	if (func_85(plParam0, false))
		return Global_1888737[plParam0 /*611*/].f_10.f_32;

	return -1;
}

BOOL func_85(Player plParam0, BOOL bParam1) // Position - 0x3008 (12296)
{
	if (func_66(plParam0))
		if (Global_1888737[plParam0 /*611*/].f_10.f_32 != -1 || bParam1 && Global_1888737[plParam0 /*611*/].f_10.f_33 != -1)
			return true;

	return false;
}

BOOL func_86(Player plParam0) // Position - 0x304C (12364)
{
	if (func_87(plParam0) == 339)
		return true;

	return false;
}

int func_87(Player plParam0) // Position - 0x3065 (12389)
{
	if (func_66(plParam0))
		if (func_82(plParam0, false))
			return Global_1888737[plParam0 /*611*/].f_10.f_33;

	return -1;
}

BOOL func_88(Player plParam0) // Position - 0x3091 (12433)
{
	if (func_63(plParam0, 0))
		return true;

	if (func_89())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658016[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_89() // Position - 0x30D0 (12496)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_90(Player plParam0) // Position - 0x30DE (12510)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1888737[player /*611*/].f_1, 0);

	return false;
}

BOOL func_91(Player plParam0, BOOL bParam1) // Position - 0x3101 (12545)
{
	return func_92(plParam0, bParam1, 1);
}

int func_92(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x3112 (12562)
{
	Player player;

	if (!func_66(plParam0))
		return 0;

	if (!bParam1)
		if (func_70(plParam0, iParam2))
			return 0;

	player = Global_1888737[plParam0 /*611*/].f_10;

	if (func_66(player) && Global_1888737[player /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_93(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x316E (12654)
{
	if (func_66(plParam1))
	{
		if (!bParam2)
			if (func_94(plParam0, plParam1))
				return false;
	
		if (Global_1888737[plParam0 /*611*/].f_10 != _INVALID_PLAYER_INDEX())
			return plParam1 == Global_1888737[plParam0 /*611*/].f_10;
	}

	return false;
}

BOOL func_94(Player plParam0, Player plParam1) // Position - 0x31B8 (12728)
{
	if (plParam1 != _INVALID_PLAYER_INDEX())
		if (plParam0 != _INVALID_PLAYER_INDEX())
			if (Global_1888737[plParam0 /*611*/].f_10 != _INVALID_PLAYER_INDEX())
				if (Global_1888737[plParam0 /*611*/].f_10 == plParam0)
					return plParam1 == plParam0;

	return false;
}

BOOL func_95(Player plParam0) // Position - 0x31FD (12797)
{
	return func_38(plParam0, 30);
}

BOOL func_96(Player plParam0) // Position - 0x320D (12813)
{
	if (!func_38(plParam0, 2))
		return true;

	if (func_38(plParam0, 1))
		return true;

	if (func_97(plParam0) > 0)
		return true;

	return false;
}

int func_97(Player plParam0) // Position - 0x3241 (12865)
{
	return Global_1888737[plParam0 /*611*/].f_10.f_23;
}

BOOL func_98(Player plParam0, int iParam1) // Position - 0x3256 (12886)
{
	return IS_BIT_SET(Global_1888737[plParam0 /*611*/].f_10.f_5, iParam1);
}

BOOL func_99(BOOL bParam0) // Position - 0x326E (12910)
{
	return func_91(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_100() // Position - 0x3280 (12928)
{
	int i;
	var string2;
	var string1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_11[i] == _INVALID_PLAYER_INDEX())
		{
			TEXT_LABEL_ASSIGN_STRING(&string1, "", 64);
			string1 = { func_101(func_102(i)) };
		
			if (MISC::ARE_STRINGS_EQUAL(&string1, &string2))
				return false;
		}
	}

	return true;
}

struct<16> func_101(int iParam0) // Position - 0x32DA (13018)
{
	return Global_2685685.f_3081.f_18[iParam0 /*16*/];
}

int func_102(int iParam0) // Position - 0x32F2 (13042)
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

void func_103(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15) // Position - 0x3348 (13128)
{
	hParam0 = -642704387;
	hParam0.f_1 = PLAYER::PLAYER_ID();

	if (!(iParam15 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &hParam0, 15, iParam15, hParam0);

	return;
}

int func_104(BOOL bParam0, BOOL bParam1) // Position - 0x3377 (13175)
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
				else if (!func_63(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_105(Player plParam0) // Position - 0x33DC (13276)
{
	if (!func_66(plParam0))
		return false;

	return IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_260.f_34, 26);
}

void func_106(int iParam0) // Position - 0x3403 (13315)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2740054.f_5271.f_7[num], offset);
	return;
}

void func_107() // Position - 0x342C (13356)
{
	var unk;
	int num;

	unk = { func_127(145, 147, -1) };
	num = 0;

	if (func_99(true))
	{
		unk = { func_127(47, 48, -1) };
		num = 1;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_125(PLAYER::PLAYER_ID(), false), 64);

	func_113(&unk, num, false);

	if (!func_112() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_108(int iParam0) // Position - 0x34A8 (13480)
{
	MISC::SET_BIT(&(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_4), iParam0);
	return;
}

void func_109(int iParam0) // Position - 0x34C5 (13509)
{
	MISC::CLEAR_BIT(&(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_4), iParam0);
	return;
}

BOOL func_110() // Position - 0x34E2 (13538)
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	if (func_111())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (func_112())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return true;

	return false;
}

BOOL func_111() // Position - 0x3553 (13651)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_112() // Position - 0x3569 (13673)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_113(const char* sParam0, int iParam1, BOOL bParam2) // Position - 0x357F (13695)
{
	if (bParam2)
	{
		if (func_99(true) || iParam1 == 1)
		{
			func_122(47, 48, sParam0, -1, true);
			func_121(3, sParam0);
		
			if (func_68() && iParam1 == 1)
				func_120(sParam0, bParam2);
		}
		else
		{
			func_122(145, 147, sParam0, -1, true);
			func_121(1, sParam0);
		
			if (func_272() && iParam1 == 0)
				func_114(sParam0, bParam2);
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_105), sParam0, 64);
	func_121(6, sParam0);
	Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();

	if (!func_112() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_114(const char* sParam0, BOOL bParam1) // Position - 0x364F (13903)
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_122(45, 46, sParam0, -1, true);
			func_121(0, sParam0);
			unk = { func_127(145, 147, -1) };
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
			{
				func_122(145, 147, sParam0, -1, true);
				func_121(1, sParam0);
			}
		
			if (func_119(true))
			{
				unk = { func_127(145, 147, -1) };
				func_115(-1408096250, unk, -81044133);
			}
		}
	}

	if (!func_112() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_341), sParam0, 64);
		func_121(5, sParam0);
	}

	return;
}

void func_115(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17) // Position - 0x371A (14106)
{
	BOOL isBoss;
	int bossType;
	int bossId1;
	int bossId2;
	int textSource;

	if (Global_1984705 == MISC::GET_FRAME_COUNT())
		return;

	Global_1984705 = MISC::GET_FRAME_COUNT();
	isBoss = func_272();
	bossType = 0;

	if (func_119(true))
		if (func_99(true))
			bossType = 1;
		else
			bossType = 2;

	bossId1 = func_117(_GET_BOSS_OF_LOCAL_PLAYER());
	bossId2 = func_116(_GET_BOSS_OF_LOCAL_PLAYER());
	textSource = iParam17;
	STATS::_PLAYSTATS_NAMED_USER_CONTENT(isBoss, bossType, bossId1, bossId2, iParam0, &uParam1, textSource);
	return;
}

int func_116(Player plParam0) // Position - 0x3784 (14212)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1888737[plParam0 /*611*/].f_10.f_8[1];
}

int func_117(Player plParam0) // Position - 0x37A9 (14249)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1888737[plParam0 /*611*/].f_10.f_8[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x37CE (14286)
{
	return Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10;
}

BOOL func_119(BOOL bParam0) // Position - 0x37E3 (14307)
{
	return func_224(PLAYER::PLAYER_ID(), bParam0);
}

void func_120(const char* sParam0, BOOL bParam1) // Position - 0x37F5 (14325)
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_122(49, 50, sParam0, -1, true);
			func_121(2, sParam0);
		
			if (func_119(true))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
				func_115(-1629413369, unk, -81044133);
			}
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_357), sParam0, 64);
		func_121(7, sParam0);
	}

	if (!func_112() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_121(int iParam0, const char* sParam1) // Position - 0x3891 (14481)
{
	Global_1984034[iParam0] = MISC::GET_HASH_KEY(sParam1);
	return;
}

void func_122(int iParam0, int iParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x38A7 (14503)
{
	Hash statName;
	Hash statName2;
	var value;
	var value2;
	int lengthOfLiteralString;
	int length;

	statName = func_123(iParam0, iParam3);
	statName2 = func_123(iParam1, iParam3);

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

Hash func_123(int iParam0, int iParam1) // Position - 0x393A (14650)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_124(iParam1));
}

int func_124(int iParam0) // Position - 0x394F (14671)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_65();
	
		if (num2 > -1)
		{
			Global_2752197 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752197 = 1;
		}
	}

	return num;
}

const char* func_125(Player plParam0, BOOL bParam1) // Position - 0x3983 (14723)
{
	if (!bParam1)
		if (func_91(plParam0, true))
			return func_126();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_126() // Position - 0x39AA (14762)
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

struct<16> func_127(int iParam0, int iParam1, int iParam2) // Position - 0x39BA (14778)
{
	Hash statHash;
	Hash statHash2;
	var unk;
	var unk17;

	statHash = func_123(iParam0, iParam2);
	statHash2 = func_123(iParam1, iParam2);
	TEXT_LABEL_ASSIGN_STRING(&unk, STATS::STAT_GET_STRING(statHash, -1), 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, STATS::STAT_GET_STRING(statHash2, -1), 32);
	TEXT_LABEL_APPEND_STRING(&unk, &unk17, 64);
	return unk;
}

void func_128() // Position - 0x39F7 (14839)
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_2672964.f_2590[i /*80*/].f_2 != 0)
		{
			Global_2672964.f_2590[i /*80*/].f_2 = 5;
			func_129(&(Global_2672964.f_2590[i /*80*/].f_69), 1);
		}
	}

	return;
}

void func_129(var uParam0, int iParam1) // Position - 0x3A42 (14914)
{
	func_130(uParam0, iParam1);
	return;
}

void func_130(var uParam0, int iParam1) // Position - 0x3A52 (14930)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_131(int iParam0) // Position - 0x3A63 (14947)
{
	return Global_2672964.f_2590[0 /*80*/].f_1 == iParam0;
}

void func_132(BOOL bParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3A7A (14970)
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

	if (!func_215())
		return;

	num = 1;

	if (func_105(PLAYER::PLAYER_ID()))
		num = 2;

	if (iParam2 == 1)
		num = 3;

	if (Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			unk6 = { func_213(iParam2) };
			STATS::START_BEING_BOSS(num, &unk6, iParam3);
			func_210(false);
			func_207(false);
			func_109(21);
			func_109(22);
			Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_469 = num;
		}
	
		Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10 = PLAYER::PLAYER_ID();
		Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_431 = iParam2;
		Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_468 = iParam2;
		STATS::GET_BOSS_GOON_UUID(func_65(), &unk22, &unk23);
		func_206(unk22, unk23);
		userid = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &userID);
		TEXT_LABEL_ASSIGN_STRING(&unk24, userid, 64);
		func_205(unk24);
		func_204();
	
		if (func_203(13616, -1) <= 0)
			cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		else
			cloudTimeAsInt = func_203(13616, -1) - 43200;
	
		func_200(cloudTimeAsInt);
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", INT))
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
	
		Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_24 = -1;
		Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_25 = -1;
		Global_2740054.f_5271.f_227 = -1;
		func_194();
		func_186(12, 0, true);
	
		if (bParam0)
			func_106(0);
	
		if (Global_2740054.f_5271.f_263 != _INVALID_PLAYER_INDEX())
			Global_2740054.f_5271.f_263 = _INVALID_PLAYER_INDEX();
	
		if (IS_BIT_SET(Global_2740054.f_1871, 15))
			MISC::CLEAR_BIT(&(Global_2740054.f_1871), 15);
	
		if (func_185(15))
			func_184(15);
	
		if (!func_183() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_182();
			func_181(2);
		}
	
		func_179(13656, 2, -1, true);
		func_109(31);
		func_107();
		func_178();
		func_177();
		func_176();
		func_142();
	
		if (iParam2 != 1)
		{
			if (!func_141(82, 3))
			{
				flag = false;
				address = func_203(13613, -1);
			
				if (!IS_BIT_SET(address, 11))
				{
					MISC::SET_BIT(&address, 11);
					func_179(13613, address, -1, true);
					flag = true;
				}
			
				func_135(82, 3, flag);
			}
		}
	
		if (iParam2 == 1)
			STATS::PLAYSTATS_CHANGE_MC_ROLE(func_117(_GET_BOSS_OF_LOCAL_PLAYER()), func_116(_GET_BOSS_OF_LOCAL_PLAYER()), func_134(), func_133(), Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_432, 4, Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_470);
	
		if (bParam1)
			if (iParam2 == 0)
				func_115(-1408096250, func_213(iParam2), -81044133);
			else
				func_115(-1629413369, func_213(iParam2), -81044133);
	}

	return;
}

int func_133() // Position - 0x3D35 (15669)
{
	if (Global_1943508.f_3 != 0)
		return Global_1943508.f_3;

	return -1;
}

int func_134() // Position - 0x3D51 (15697)
{
	if (Global_1943508.f_2 != 0)
		return Global_1943508.f_2;

	return -1;
}

void func_135(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x3D6D (15725)
{
	int num;

	Global_9778 = echParam0;

	if (Global_120[echParam0 /*10*/].f_8 != 187)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_140(echParam0, 0, 1);
			func_140(echParam0, 1, 1);
			func_140(echParam0, 2, 1);
			func_139(echParam0, 0, 1);
			func_139(echParam0, 1, 1);
			func_139(echParam0, 2, 1);
		}
		else
		{
			if (func_138(echParam0, echParam1) == 1 && func_137(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_140(echParam0, num, 1);
			func_139(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2740054.f_7024, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2740054.f_7024, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2740054.f_7024, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_79744)
			{
				if (echParam1 != 4)
				{
					if (Global_21222 != echParam1)
					{
						Global_9751[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9768[echParam1] = 1;
						Global_9773[echParam1] = echParam0;
					}
					else if (echParam0 == Global_21222)
					{
					}
					else
					{
						Global_9702[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9702[1 /*6*/].f_5 = echParam1;
						func_136();
					}
				}
				else
				{
					Global_9702[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9702[1 /*6*/].f_5 = echParam1;
					func_136();
				}
			}
			else
			{
				Global_9702[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9702[1 /*6*/].f_5 = echParam1;
				func_136();
			}
		}
	}

	return;
}

void func_136() // Position - 0x3EEB (16107)
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[Global_9778 /*29*/].f_7)), 64);

	if (Global_9797 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_9702[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_9702[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_9075, 0);
	return;
}

int func_137(eCharacter echParam0, int iParam1) // Position - 0x3F66 (16230)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2241[echParam0 /*29*/].f_24[iParam1];
}

int func_138(eCharacter echParam0, int iParam1) // Position - 0x3F90 (16272)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2241[echParam0 /*29*/].f_12[iParam1];
}

void func_139(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3FBA (16314)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2241[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114344.f_28055[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_140(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3FFF (16383)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2241[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114344.f_28055[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

BOOL func_141(int iParam0, int iParam1) // Position - 0x4045 (16453)
{
	if (func_138(iParam0, iParam1) == 1)
		return true;

	return false;
}

void func_142() // Position - 0x4061 (16481)
{
	BOOL flag;

	if (func_28())
	{
		if (func_24() || func_175())
		{
			return;
		}
		else
		{
			func_149(false);
		
			if (func_147())
				func_146();
		
			func_145();
			flag = NETWORK::NETWORK_IS_IN_TRANSITION();
		
			if (flag || NETWORK::NETWORK_IS_TRANSITION_STARTED() || NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING() || NETWORK::NETWORK_IS_TRANSITION_LEAVE_POSTPONED())
			{
				if (*Global_262145.f_32986)
					NETWORK::NETWORK_CANCEL_TRANSITION_MATCHMAKING();
			
				if (flag)
					NETWORK::NETWORK_BAIL_TRANSITION(6, 0, 0);
			}
		
			func_144();
			func_143();
			func_145();
		}
	}

	return;
}

void func_143() // Position - 0x40F7 (16631)
{
	Global_1048576.f_10 = 0;
	return;
}

void func_144() // Position - 0x4106 (16646)
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
	Global_2685685.f_6080 = { unk11 };

	for (i = 0; i <= 31; i = i + 1)
	{
		Global_2685685.f_1.f_845[i /*57*/] = { unk11 };
		Global_2685685.f_1.f_845[i /*57*/].f_13 = { unk24 };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2685685.f_1.f_845[i /*57*/].f_29), "", 16);
		Global_2685685.f_1.f_845[i /*57*/].f_44 = unk42;
		Global_2685685.f_1.f_845[i /*57*/].f_45 = unk43;
		Global_2685685.f_1.f_845[i /*57*/].f_46 = 0;
		Global_2685685.f_1.f_845[i /*57*/].f_47 = unk44;
		Global_2685685.f_1.f_845[i /*57*/].f_50 = unk45;
		Global_2685685.f_1.f_845[i /*57*/].f_55 = unk46;
		Global_2685685.f_1.f_845[i /*57*/].f_48 = 0;
		Global_2685685.f_1.f_845[i /*57*/].f_49 = 0;
		Global_2685685.f_1.f_845[i /*57*/].f_54 = 0;
		Global_2685685.f_1.f_845[i /*57*/].f_56 = unk46;
		Global_2685685.f_1.f_845[i /*57*/].f_53 = unk47;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2685685.f_1.f_845[i /*57*/].f_33[j] = unk40;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2685685.f_1.f_845[i /*57*/].f_36[j] = unk41;
		}
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		Global_2685685.f_1.f_2670[i /*57*/] = { unk11 };
		Global_2685685.f_1.f_2670[i /*57*/].f_13 = { unk24 };
		Global_2685685.f_1.f_2670[i /*57*/].f_44 = unk42;
		Global_2685685.f_1.f_2670[i /*57*/].f_45 = unk43;
		Global_2685685.f_1.f_2670[i /*57*/].f_47 = unk44;
		Global_2685685.f_1.f_2670[i /*57*/].f_50 = unk45;
		Global_2685685.f_1.f_2670[i /*57*/].f_55 = unk46;
		Global_2685685.f_1.f_2670[i /*57*/].f_56 = unk46;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2685685.f_1.f_2670[i /*57*/].f_33[j] = unk40;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2685685.f_1.f_2670[i /*57*/].f_36[j] = unk41;
		}
	}

	Global_2685685.f_1.f_2798 = unk;
	Global_2685685.f_1.f_2799 = unk2;
	Global_2685685.f_1.f_2800 = unk3;
	Global_2685685.f_1.f_2802 = unk4;
	Global_2685685.f_1.f_2805 = unk5;
	Global_2685685.f_1.f_2806 = 0;
	Global_2685685.f_1.f_2808 = num;
	Global_2685685.f_1.f_2809 = unk6;
	Global_2685685.f_1.f_2810 = unk6;
	Global_2685685.f_1.f_2811 = num2;
	Global_2685685.f_1.f_2812 = unk7;

	for (k = 0; k < 9; k = k + 1)
	{
		Global_2685685.f_1.f_2813[k] = 0;
	}

	Global_2685685.f_1.f_2826 = num3;
	Global_2685685.f_1.f_2823 = unk8;
	Global_2685685.f_1.f_2824 = unk9;
	Global_2685685.f_1.f_2825 = unk10;
	Global_2684745.f_844 = 0;
	return;
}

void func_145() // Position - 0x443D (17469)
{
	MISC::SET_BIT(&(Global_2684745.f_2), 12);
	return;
}

void func_146() // Position - 0x4451 (17489)
{
	Global_1057440 = -1;
	return;
}

BOOL func_147() // Position - 0x445E (17502)
{
	switch (func_148())
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

	return false;
}

int func_148() // Position - 0x4522 (17698)
{
	return Global_1057440;
}

void func_149(BOOL bParam0) // Position - 0x452E (17710)
{
	BOOL flag;

	if (func_171() && !func_170())
	{
		func_169();
		func_168();
	}
	else
	{
		flag = func_167();
		func_166();
		func_164(true);
		func_163();
		func_162();
		func_161();
	
		if (flag && !bParam0)
			func_160();
	}

	if (Global_2693792.f_8)
		func_159();

	func_158();
	func_157();
	func_156();
	func_154();

	if (!func_153())
	{
		func_152();
		func_151(0);
	}

	func_168();
	func_150(0);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		NETWORK::NETWORK_REMAIN_IN_GAME_CHAT(false);

	return;
}

void func_150(int iParam0) // Position - 0x45C1 (17857)
{
	Global_2684745.f_892 = iParam0;
	return;
}

void func_151(int iParam0) // Position - 0x45D2 (17874)
{
	if (iParam0 == -1)
		Global_2684745.f_893 = Global_2684745.f_893 + 1;
	else
		Global_2684745.f_893 = iParam0;

	return;
}

void func_152() // Position - 0x45FC (17916)
{
	Global_2684745.f_9 = -1;
	return;
}

BOOL func_153() // Position - 0x460B (17931)
{
	return Global_2684745.f_739;
}

void func_154() // Position - 0x461A (17946)
{
	Global_2684745.f_42 = func_155();
	return;
}

int func_155() // Position - 0x462C (17964)
{
	if (Global_2692853)
		return 32;

	return 32 - Global_2692854;
}

void func_156() // Position - 0x4647 (17991)
{
	Global_2684745.f_737 = 0;
	return;
}

void func_157() // Position - 0x4657 (18007)
{
	Global_2684745.f_719 = 0;
	return;
}

void func_158() // Position - 0x4667 (18023)
{
	MISC::CLEAR_BIT(&(Global_1845225[PLAYER::PLAYER_ID() /*874*/].f_36.f_18), 15);
	return;
}

void func_159() // Position - 0x4684 (18052)
{
	Global_2693792.f_8 = 0;
	Global_2693792.f_7 = 0;
	return;
}

void func_160() // Position - 0x469A (18074)
{
	MISC::SET_BIT(&(Global_2684745.f_3), 2);
	return;
}

void func_161() // Position - 0x46AD (18093)
{
	MISC::CLEAR_BIT(&Global_2684745, 7);
	return;
}

void func_162() // Position - 0x46BE (18110)
{
	MISC::CLEAR_BIT(&Global_2684745, 6);
	return;
}

void func_163() // Position - 0x46CF (18127)
{
	Global_2684745 = 0;
	Global_2684745.f_2 = 0;
	Global_2684745.f_3 = 0;
	return;
}

void func_164(BOOL bParam0) // Position - 0x46EA (18154)
{
	int i;
	var unk;
	int j;

	Global_2685685.f_1.f_2798 = 0;
	Global_2685685.f_1.f_2799 = 0;
	Global_2685685.f_1.f_2825 = 0;
	Global_2685685.f_1.f_2805 = 0;
	Global_2685685.f_1.f_2806 = 0;
	Global_2685685.f_1.f_2809 = 0;
	Global_2685685.f_1.f_2810 = 0;
	Global_2685685.f_1.f_2808 = -1;
	Global_2685685.f_1.f_2811 = -1;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_2685685.f_1.f_2813[i] = 0;
	}

	Global_2685685.f_1.f_2826 = -1;

	if (bParam0)
	{
		Global_2685685.f_1.f_2823 = -1;
		Global_2685685.f_1.f_2824 = -1;
	}

	Global_2685685.f_1.f_2845 = 0;
	func_165();
	unk.f_33 = 2;
	unk.f_36 = 7;

	for (j = 0; j <= 31; j = j + 1)
	{
		Global_2685685.f_1.f_845[j /*57*/] = { unk };
	}

	Global_2680866.f_33 = -1;
	Global_2680866.f_34 = -1;
	return;
}

void func_165() // Position - 0x47E6 (18406)
{
	Global_2680866.f_32 = 0;
	return;
}

void func_166() // Position - 0x47F5 (18421)
{
	var unk;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Global_2682498[i /*37*/] = { unk };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682498[i /*37*/].f_13), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682498[i /*37*/].f_29), "", 16);
		Global_2682498[i /*37*/].f_33 = 0;
		Global_2682498[i /*37*/].f_34 = 0;
		Global_2682498[i /*37*/].f_35 = 0;
	}

	Global_2682498.f_1185 = 0;
	Global_2682498.f_1186 = 0;
	return;
}

BOOL func_167() // Position - 0x486F (18543)
{
	return IS_BIT_SET(Global_2684745.f_3, 2);
}

void func_168() // Position - 0x487F (18559)
{
	MISC::CLEAR_BIT(&(Global_1845225[PLAYER::PLAYER_ID() /*874*/].f_36.f_18), 5);
	return;
}

void func_169() // Position - 0x489B (18587)
{
	MISC::CLEAR_BIT(&(Global_2684745.f_2), 11);
	return;
}

BOOL func_170() // Position - 0x48AF (18607)
{
	return IS_BIT_SET(Global_2684745.f_2, 27);
}

BOOL func_171() // Position - 0x48C0 (18624)
{
	if (func_16() || func_174() || func_173() || func_172())
		return true;

	return false;
}

BOOL func_172() // Position - 0x48F2 (18674)
{
	return IS_BIT_SET(Global_2684745, 1);
}

BOOL func_173() // Position - 0x4900 (18688)
{
	return IS_BIT_SET(Global_2684745, 2);
}

BOOL func_174() // Position - 0x490E (18702)
{
	return IS_BIT_SET(Global_2684745, 20);
}

BOOL func_175() // Position - 0x491D (18717)
{
	return IS_BIT_SET(Global_2685685.f_1.f_2810, 3);
}

void func_176() // Position - 0x4930 (18736)
{
	if (!Global_2740054.f_5271.f_342)
		Global_2740054.f_5271.f_342 = 1;

	return;
}

void func_177() // Position - 0x4951 (18769)
{
	var unk;

	unk = { func_127(49, 50, -1) };
	func_120(&unk, false);

	if (!func_112() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_178() // Position - 0x499A (18842)
{
	var unk;

	unk = { func_127(45, 46, -1) };
	func_114(&unk, false);

	if (!func_112() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_179(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x49E3 (18915)
{
	Hash statName;

	if (iParam0 != 15525)
	{
		statName = func_180(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_180(int iParam0, int iParam1) // Position - 0x4A11 (18961)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_124(iParam1));
}

void func_181(int iParam0) // Position - 0x4A26 (18982)
{
	MISC::SET_BIT(&(Global_4598268.f_2), iParam0);

	if (Global_4598268)
		return;

	Global_4598268 = true;
	Global_4598268.f_1 = 0;
	return;
}

void func_182() // Position - 0x4A50 (19024)
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

BOOL func_183() // Position - 0x4AB1 (19121)
{
	return Global_2684745.f_742;
}

void func_184(int iParam0) // Position - 0x4AC0 (19136)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_2740054.f_5271.f_7[num], offset);
	return;
}

BOOL func_185(int iParam0) // Position - 0x4AE9 (19177)
{
	int num;
	int num2;

	num = iParam0 / 32;
	num2 = iParam0 % 32;
	return IS_BIT_SET(Global_2740054.f_5271.f_7[num], num2);
}

void func_186(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4B0F (19215)
{
	if (func_193())
	{
		if (iParam1 == 1)
		{
			if (Global_2740054.f_4534 == -1)
				Global_2740054.f_4534 = Global_262145.f_26733;
		
			func_21(&(Global_2740054.f_4532), false, false);
		
			if (bParam2)
			{
				if (Global_2740054.f_4537 == -1)
					Global_2740054.f_4537 = Global_262145.f_26734;
			
				func_21(&(Global_2740054.f_4535), false, false);
			}
			else
			{
				Global_1574582 = false;
				Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
				func_192(true);
			}
		}
		else
		{
			Global_1574582 = false;
			Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
			func_192(true);
		}
	
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_191() && !func_187(PLAYER::PLAYER_ID()))
			Global_1057439 = 0;
	
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}

	return;
}

BOOL func_187(Player plParam0) // Position - 0x4BD9 (19417)
{
	if (func_188(plParam0, true, false))
		if (Global_1845225[plParam0 /*874*/] != 6)
			return true;

	return false;
}

BOOL func_188(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4BFE (19454)
{
	if (bParam1)
		if (func_189(plParam0))
			return true;

	!bParam2;

	if (Global_1845225[plParam0 /*874*/] == -1)
		return false;

	return true;
}

BOOL func_189(Player plParam0) // Position - 0x4C30 (19504)
{
	return func_190(plParam0);
}

BOOL func_190(Player plParam0) // Position - 0x4C3E (19518)
{
	return IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_11.f_1, 0);
}

BOOL func_191() // Position - 0x4C55 (19541)
{
	return Global_2684745.f_844;
}

void func_192(BOOL bParam0) // Position - 0x4C64 (19556)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_193())
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

BOOL func_193() // Position - 0x4D5D (19805)
{
	return Global_1574582;
}

void func_194() // Position - 0x4D69 (19817)
{
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			func_196(true, player);
		
			if (player != PLAYER::PLAYER_ID())
				func_195(player);
		}
	}

	return;
}

void func_195(Player plParam0) // Position - 0x4DAB (19883)
{
	Ped playerPed;

	if (IS_BIT_SET(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_101, plParam0))
	{
		playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(playerPed, PLAYER::PLAYER_ID(), true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), plParam0, true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(plParam0, PLAYER::PLAYER_ID(), true);
		func_196(true, plParam0);
		MISC::CLEAR_BIT(&(Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_101), plParam0);
	}

	return;
}

void func_196(BOOL bParam0, Player plParam1) // Position - 0x4E0D (19981)
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
				
					if (func_93(plParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
					{
						if (_GET_BOSS_OF_LOCAL_PLAYER() == plParam1)
						{
							if (Global_2740054.f_5271.f_264[3] != vehiclePedIsIn)
								Global_2740054.f_5271.f_264[3] = vehiclePedIsIn;
						}
						else
						{
							num = func_197(_GET_BOSS_OF_LOCAL_PLAYER(), plParam1);
						
							if (num != -1)
								if (Global_2740054.f_5271.f_264[num] != vehiclePedIsIn)
									Global_2740054.f_5271.f_264[num] = vehiclePedIsIn;
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_93(plParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
				{
					if (_GET_BOSS_OF_LOCAL_PLAYER() == plParam1)
					{
						vehiclePedIsIn = Global_2740054.f_5271.f_264[3];
					
						if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
						{
							VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
							Global_2740054.f_5271.f_264[3] = 0;
						}
					}
					else
					{
						num2 = func_197(_GET_BOSS_OF_LOCAL_PLAYER(), plParam1);
					
						if (num2 != -1)
						{
							vehiclePedIsIn = Global_2740054.f_5271.f_264[num2];
						
							if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
							{
								VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
								Global_2740054.f_5271.f_264[num2] = 0;
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_197(Player plParam0, Player plParam1) // Position - 0x4FAE (20398)
{
	int i;

	if (func_281(plParam0))
	{
		if (func_93(plParam1, plParam0, false) || func_199(plParam1, plParam0))
		{
			for (i = 0; i < 7; i = i + 1)
			{
				if (func_198(plParam0, i) == plParam1)
					return i;
			}
		}
	}

	return -1;
}

Player func_198(Player plParam0, int iParam1) // Position - 0x5004 (20484)
{
	if (func_281(plParam0))
		if (iParam1 > -1 && iParam1 < 7)
			return Global_1888737[plParam0 /*611*/].f_10.f_11[iParam1];

	return _INVALID_PLAYER_INDEX();
}

BOOL func_199(Player plParam0, Player plParam1) // Position - 0x5040 (20544)
{
	if (plParam1 != _INVALID_PLAYER_INDEX())
		if (Global_1888737[plParam0 /*611*/].f_10.f_26 != _INVALID_PLAYER_INDEX())
			return plParam1 == Global_1888737[plParam0 /*611*/].f_10.f_26;

	return false;
}

void func_200(int iParam0) // Position - 0x5079 (20601)
{
	if (!func_215())
		return;

	Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_1 = iParam0;

	if (func_203(13616, -1) != func_201(PLAYER::PLAYER_ID()))
		func_179(13616, func_201(PLAYER::PLAYER_ID()), -1, true);

	return;
}

int func_201(Player plParam0) // Position - 0x50C1 (20673)
{
	if (func_202(plParam0) == -1)
		return -1;

	return func_202(plParam0) + 43200;
}

int func_202(Player plParam0) // Position - 0x50E2 (20706)
{
	return Global_1888737[plParam0 /*611*/].f_10.f_1;
}

int func_203(int iParam0, int iParam1) // Position - 0x50F7 (20727)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15525)
	{
		statHash = func_180(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_204() // Position - 0x5126 (20774)
{
	if (MISC::IS_PC_VERSION())
	{
		NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
	
		if (func_99(true))
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
		else
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
	}

	return;
}

void func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x5157 (20823)
{
	Global_2685685.f_3081.f_2 = { uParam0 };
	return;
}

void func_206(var uParam0, var uParam1) // Position - 0x5170 (20848)
{
	Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_8[0] = uParam0;
	Global_1888737[PLAYER::PLAYER_ID() /*611*/].f_10.f_8[1] = uParam1;
	return;
}

void func_207(BOOL bParam0) // Position - 0x51A0 (20896)
{
	func_208(204, bParam0, -1, true);
	return;
}

void func_208(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x51B2 (20914)
{
	Hash statName;

	statName = func_209(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, bParam3);

	return;
}

Hash func_209(int iParam0, int iParam1) // Position - 0x51D5 (20949)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_124(iParam1));
}

void func_210(BOOL bParam0) // Position - 0x51EA (20970)
{
	if (bParam0)
	{
		if (func_212(4))
		{
			func_108(21);
			func_108(22);
		}
	
		func_108(31);
		func_211(bParam0);
	}
	else
	{
		if (func_38(PLAYER::PLAYER_ID(), 21))
		{
			func_109(21);
		
			if (!func_212(3) && func_212(4))
				func_108(22);
		}
	
		func_109(31);
		func_211(bParam0);
	}

	return;
}

void func_211(BOOL bParam0) // Position - 0x5252 (21074)
{
	func_208(432, bParam0, -1, true);
	return;
}

BOOL func_212(int iParam0) // Position - 0x5265 (21093)
{
	return IS_BIT_SET(Global_2740054.f_5271.f_51, iParam0);
}

struct<16> func_213(int iParam0) // Position - 0x5279 (21113)
{
	var unk;

	if (iParam0 == 1)
		unk = { func_127(47, 48, -1) };
	else
		unk = { func_127(145, 147, -1) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_214(iParam0), 64);

	return unk;
}

const char* func_214(int iParam0) // Position - 0x52BC (21180)
{
	switch (iParam0)
	{
		case 1:
			return func_126();
	
		default:
		
	}

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

BOOL func_215() // Position - 0x52E0 (21216)
{
	if (func_217() && func_216(0))
		return true;

	return false;
}

var func_216(int iParam0) // Position - 0x52FE (21246)
{
	return Global_1574538[iParam0];
}

var func_217() // Position - 0x530E (21262)
{
	return func_216(func_65() + 1);
}

BOOL func_218(Player plParam0) // Position - 0x5320 (21280)
{
	return func_219(plParam0) > 0;
}

int func_219(Player plParam0) // Position - 0x5330 (21296)
{
	int num;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (Global_1888737[plParam0 /*611*/].f_10.f_181 != -1)
			num = Global_1888737[plParam0 /*611*/].f_10.f_181;
		else
			num = _MPPLY_STAT_GET_INT(joaat("MPPLY_VIPGAMEPLAYDISABLEDTIMER"));
	
		num2 = (num + func_220()) - NETWORK::GET_CLOUD_TIME_AS_INT();
		return num2;
	}

	return -1;
}

var func_220() // Position - 0x5385 (21381)
{
	return Global_262145.f_15358;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x5394 (21396)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_222() // Position - 0x53B2 (21426)
{
	return Global_262145.f_12821;
}

int func_223() // Position - 0x53C1 (21441)
{
	int i;
	int num;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			if (func_281(player))
				num = num + 1;
	}

	return num;
}

BOOL func_224(Player plParam0, BOOL bParam1) // Position - 0x53FE (21502)
{
	if (!func_66(plParam0))
		return false;

	if (!bParam1)
		if (func_281(plParam0))
			return false;

	return func_66(Global_1888737[plParam0 /*611*/].f_10);
}

void func_225() // Position - 0x5436 (21558)
{
	var unk;
	Vector3 offsetFromEntityInWorldCoords;
	BOOL flag;

	Global_1945778 = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obLocal_147, 0.0328f, -0.8f, 0.3f) };
		flag = false;
		_STOPWATCH_DESTROY(&uLocal_143);
	
		if (func_7(0, &unk))
		{
			while (!flag)
			{
				func_286(0);
			
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_143))
					func_296(&uLocal_143, false, false);
				else if (func_293(&uLocal_143, 4000, false))
					flag = true;
			
				if (!func_229(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0.05f, false) && !func_279(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_147), 5f))
					if (!func_227(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD))
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), offsetFromEntityInWorldCoords, 1f, 5000, ENTITY::GET_ENTITY_HEADING(obLocal_147), 0.25f);
				else
					flag = true;
			
				GRAPHICS::DRAW_DEBUG_SPHERE(offsetFromEntityInWorldCoords, 0.1f, 255, 0, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(offsetFromEntityInWorldCoords, ENTITY::GET_ENTITY_COORDS(obLocal_147, true), 0, 255, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0, 0, 255, 255);
				BUILTIN::WAIT(0);
			}
		
			_STOPWATCH_DESTROY(&uLocal_143);
			iLocal_148 = 0;
		}
	}

	while (iLocal_148 != 3)
	{
		func_226(obLocal_147);
		func_286(0);
		BUILTIN::WAIT(0);
	}

	return;
}

void func_226(Object obParam0) // Position - 0x5587 (21895)
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

	if (!func_295(PLAYER::PLAYER_ID()) && !func_294(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID()))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return;

	func_7(0, &animDict);
	func_7(1, &animDict2);
	func_7(2, &animDict3);
	STREAMING::REQUEST_ANIM_DICT(&animDict3);
	STREAMING::REQUEST_ANIM_DICT(&animDict);
	animnName = "idle_a";
	endRange = 1;

	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_F_Freemode_01"))
		endRange = 1;

	switch (iLocal_148)
	{
		case 0:
			bLocal_140 = false;
			GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD) == 7 && STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_149);
						iLocal_149 = -1;
					}
				
					iLocal_149 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_153, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, false, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
					STREAMING::REMOVE_ANIM_DICT(&animDict);
					iLocal_148 = 1;
				}
			}
			break;
	
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
			STREAMING::REQUEST_ANIM_DICT(&animDict2);
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_149);
		
			if (!bLocal_140)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.93f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
					bLocal_140 = true;
				}
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.96f)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
			
				if (MISC::ARE_STRINGS_EQUAL(&uLocal_156, "idle_a") && randomIntInRange == 0 || MISC::ARE_STRINGS_EQUAL(&uLocal_156, "idle_b") && randomIntInRange == 1 || MISC::ARE_STRINGS_EQUAL(&uLocal_156, "idle_c") && randomIntInRange == 2 || MISC::ARE_STRINGS_EQUAL(&uLocal_156, "idle_d") && randomIntInRange == 3)
				{
					randomIntInRange = randomIntInRange + 1;
				
					if (randomIntInRange >= endRange)
						randomIntInRange = 0;
				}
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_149);
					iLocal_149 = -1;
				}
			
				iLocal_149 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_153, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
			
				switch (randomIntInRange)
				{
					case 0:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict2, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_156, "idle_a", 16);
						iLocal_148 = 3;
						break;
				
					case 1:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict2, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_156, "idle_b", 16);
						iLocal_148 = 3;
						break;
				
					case 2:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict2, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_156, "idle_c", 16);
						iLocal_148 = 3;
						break;
				
					case 3:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict2, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_156, "idle_d", 16);
						iLocal_148 = 3;
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uLocal_156, "idle_XXX", 16);
						break;
				}
			}
			break;
	
		case 3:
			bLocal_140 = false;
		
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
		
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_149);
		
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_149);
					iLocal_149 = -1;
				}
			
				iLocal_149 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_153, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_149);
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
					PED::SET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId, 0f);
			
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
				iLocal_148 = 3;
				return;
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.99f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_149);
					iLocal_149 = -1;
				}
			
				iLocal_149 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_153, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_149, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_149);
				iLocal_148 = 3;
				return;
			}
			break;
	}

	return;
}

BOOL func_227(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x5AD1 (23249)
{
	if (func_228(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_228(Ped pedParam0) // Position - 0x5B04 (23300)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_229(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x5B24 (23332)
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

BOOL func_230() // Position - 0x5B9F (23455)
{
	if (!func_8(Global_2672964.f_4.f_16))
		return false;

	return IS_BIT_SET(Global_1945923.f_739, 30);
}

BOOL func_231() // Position - 0x5BC5 (23493)
{
	if (func_294(Global_2672964.f_4.f_16))
		if (IS_BIT_SET(Global_1945923.f_739, 0) || IS_BIT_SET(Global_1945923.f_739, 2))
			return 1;

	return 0;
}

BOOL func_232() // Position - 0x5BFC (23548)
{
	if (func_295(Global_2672964.f_4.f_16))
		if (IS_BIT_SET(Global_1945923.f_739, 0) || IS_BIT_SET(Global_1945923.f_739, 2))
			return true;

	return false;
}

BOOL func_233() // Position - 0x5C33 (23603)
{
	if (func_218(PLAYER::PLAYER_ID()))
		return false;

	if (func_267())
		return false;

	if (func_264())
		return false;

	if (func_281(PLAYER::PLAYER_ID()))
		return true;
	else if (func_223() < func_222())
		return true;

	return false;
}

BOOL func_234(int iParam0, BOOL bParam1) // Position - 0x5C82 (23682)
{
	int num;

	num = func_235(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_278(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_45139[num /*32*/] == true && Global_45139[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_45139[num /*32*/].f_29)
					return false;
		
			Global_45139[num /*32*/].f_5 = 1;
			Global_45139[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_45139[num /*32*/] == false;
			Global_45139[num /*32*/].f_7;
		}
	}

	return false;
}

int func_235(int iParam0) // Position - 0x5D3A (23866)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45139[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_236(BOOL bParam0) // Position - 0x5D75 (23925)
{
	if (func_230() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1945779)
		_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 2, "ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/, 0, 0, 0, 0);

	return;
}

BOOL func_237() // Position - 0x5DB5 (23989)
{
	return Global_1945923.f_752;
}

void func_238(BOOL bParam0) // Position - 0x5DC4 (24004)
{
	if (func_260(PLAYER::PLAYER_ID()) && func_246(PLAYER::PLAYER_ID()) == func_245(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1945779)
	{
		if (func_242())
		{
			func_241("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_223() >= func_222())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_218(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_69(PLAYER::PLAYER_ID()))
		{
			func_241("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_141) && func_293(&uLocal_141, 10000, true) || !bLocal_138)
		{
			if (func_239(PLAYER::PLAYER_ID()) || Global_1945779 == true)
			{
				bLocal_138 = true;
			
				if (!Global_1945779)
					func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_256())
					HUD::CLEAR_HELP(true);
			
				bLocal_138 = false;
				_STOPWATCH_DESTROY(&uLocal_141);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_138)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_239(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_138 = false;
			}
		}
	}

	return;
}

BOOL func_239(Player plParam0) // Position - 0x5F39 (24377)
{
	return func_240(func_87(plParam0));
}

BOOL func_240(int iParam0) // Position - 0x5F4B (24395)
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

void func_241(char* sParam0) // Position - 0x5F6B (24427)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_242() // Position - 0x5F81 (24449)
{
	if (Global_1945784)
		return false;

	return func_243();
}

BOOL func_243() // Position - 0x5F98 (24472)
{
	if (func_244())
		return 1;

	return Global_2684745.f_746;
}

BOOL func_244() // Position - 0x5FB2 (24498)
{
	return Global_1575039 == 10;
}

int func_245(Player plParam0) // Position - 0x5FC1 (24513)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	return Global_1845225[plParam0 /*874*/].f_260.f_150;
}

int func_246(Player plParam0) // Position - 0x5FE4 (24548)
{
	if (func_260(plParam0))
		return func_247(Global_2658016[plParam0 /*467*/].f_324.f_8);

	return 0;
}

int func_247(int iParam0) // Position - 0x600B (24587)
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

void func_248(BOOL bParam0) // Position - 0x60A0 (24736)
{
	if (func_259(PLAYER::PLAYER_ID()) || func_231() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1945779 && func_279(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_147), 90f))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		}
		else if (func_242())
		{
			if (func_259(PLAYER::PLAYER_ID()))
				func_241("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/);
			else
				func_241("BIKERWHBLCKD" /*Join a public session to manage your Business*/);
		}
		else if (func_69(PLAYER::PLAYER_ID()))
		{
			if (_STOPWATCH_IS_INITIALIZED(&uLocal_141) && func_293(&uLocal_141, 10000, true) || !bLocal_138)
			{
				if (func_249(PLAYER::PLAYER_ID()) || Global_1945779 == true)
				{
					bLocal_138 = true;
				
					if (!Global_1945779)
						func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
				}
				else
				{
					if (func_256())
						HUD::CLEAR_HELP(true);
				
					bLocal_138 = false;
					_STOPWATCH_DESTROY(&uLocal_141);
					_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/, 0, 0, 0, 0);
				}
			}
			else if (bLocal_138)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			
				if (!func_249(PLAYER::PLAYER_ID()))
				{
					bLocal_138 = false;
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (!bParam0 && func_223() < func_222())
		{
			_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/, 0, 0, 0, 0);
		}
		else
		{
			func_241("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/);
		}
	}

	return;
}

BOOL func_249(Player plParam0) // Position - 0x620F (25103)
{
	return func_250(func_87(plParam0));
}

BOOL func_250(int iParam0) // Position - 0x6221 (25121)
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

BOOL func_251() // Position - 0x6247 (25159)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_147))
	{
		if (func_253(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_294(PLAYER::PLAYER_ID()) || func_252(PLAYER::PLAYER_ID()))
			return true;
	}

	return false;
}

BOOL func_252(Player plParam0) // Position - 0x6285 (25221)
{
	if (func_261(Global_1845225[plParam0 /*874*/].f_260.f_36, -1))
		return 1;

	return 0;
}

BOOL func_253(Player plParam0) // Position - 0x62A8 (25256)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658016[plParam0 /*467*/].f_324.f_8 != -1 && Global_2658016[plParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_9(Global_2658016[plParam0 /*467*/].f_324.f_8) == 25;

	return false;
}

void func_254(BOOL bParam0) // Position - 0x6308 (25352)
{
	if (func_232() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1945779)
	{
		if (func_242())
		{
			func_241("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_223() >= func_222())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_218(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_69(PLAYER::PLAYER_ID()))
		{
			func_241("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_141) && func_293(&uLocal_141, 10000, true) || !bLocal_138)
		{
			if (func_298(PLAYER::PLAYER_ID()) || Global_1945779 == true)
			{
				bLocal_138 = true;
			
				if (!Global_1945779)
					func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_256())
					HUD::CLEAR_HELP(true);
			
				bLocal_138 = false;
				_STOPWATCH_DESTROY(&uLocal_141);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_136, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_138)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_298(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_138 = false;
			}
		}
	}

	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x6463 (25699)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_258(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_45139[i /*32*/])
		{
			Global_45139[i /*32*/] = true;
			Global_45139[i /*32*/].f_1 = Global_45340;
			Global_45340 = Global_45340 + 1;
			Global_45139[i /*32*/].f_4 = 0;
			Global_45139[i /*32*/].f_29 = 0;
			Global_45139[i /*32*/].f_5 = 0;
			Global_45139[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_45139[i /*32*/].f_8), sParam2, 16);
			Global_45139[i /*32*/].f_6 = iParam3;
			Global_45139[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45139[i /*32*/].f_7 = 0;
			Global_45139[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45139[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_45139[i /*32*/].f_13), sParam4, 64);
				Global_45139[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45139[i /*32*/].f_12 = 0;
				Global_45139[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_45139[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_256() // Position - 0x658E (25998)
{
	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MP_OFF_LAP_1" /*Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHSECUROBLCK" /*This computer is unavailable during a mission.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKD" /*Join a public session to manage your Business*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/))
		return true;

	return false;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x6632 (26162)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_258(var uParam0) // Position - 0x6645 (26181)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_235(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_45139[num /*32*/])
		{
			Global_45139[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_259(Player plParam0) // Position - 0x669C (26268)
{
	if (func_261(Global_1845225[plParam0 /*874*/].f_260.f_36, -1) && !IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_260.f_34, 1))
		return 1;

	return 0;
}

BOOL func_260(Player plParam0) // Position - 0x66D5 (26325)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658016[plParam0 /*467*/].f_324.f_8 != -1)
				return func_9(Global_2658016[plParam0 /*467*/].f_324.f_8) == 1;

	return false;
}

BOOL func_261(int iParam0, int iParam1) // Position - 0x671B (26395)
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

BOOL func_262(int iParam0) // Position - 0x67F8 (26616)
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

BOOL func_263() // Position - 0x6827 (26663)
{
	return Global_78520;
}

BOOL func_264() // Position - 0x6833 (26675)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && func_224(PLAYER::PLAYER_ID(), true) && func_82(PLAYER::PLAYER_ID(), false) && func_72(PLAYER::PLAYER_ID()))
	{
		if (func_87(PLAYER::PLAYER_ID()) == 256)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, false, true, 0))
				return true;
	
		if (func_87(PLAYER::PLAYER_ID()) == 271)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.8796f, -528.8513f, 75.0839f, -1472.6295f, -526.5934f, 73.3136f, false, true, 0))
				return true;
			else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.4672f, -3167.9465f, -37.5246f, 1006.9028f, -3171.1516f, -39.6192f, false, true, 0))
				return true;
	
		if (func_265(*Global_4718592.f_131616) == 5)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 571.1f, -3123.7f, 19.8f, 567.1f, -3128.7f, 17.8f, false, true, 0))
				return true;
	}

	return false;
}

int func_265(int iParam0) // Position - 0x6961 (26977)
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_266(i))
			return i;
	}

	return -1;
}

int func_266(int iParam0) // Position - 0x698C (27020)
{
	if (iParam0 != -1)
		return Global_262145.f_32987[iParam0];

	return -1;
}

BOOL func_267() // Position - 0x69AB (27051)
{
	return IS_BIT_SET(Global_1945923.f_11, 1);
}

BOOL func_268() // Position - 0x69BB (27067)
{
	if (func_270(PLAYER::PLAYER_ID()) == 150 && func_269(PLAYER::PLAYER_PED_ID(), 3084.5112f, -4686.664f, 26.2522f, 50f, true))
		return true;

	return false;
}

BOOL func_269(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5) // Position - 0x69F8 (27128)
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5), fParam1) <= fParam4 * fParam4;
}

int func_270(Player plParam0) // Position - 0x6A16 (27158)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1888737[player /*611*/];

	return -1;
}

int func_271(Player plParam0) // Position - 0x6A35 (27189)
{
	if (func_87(plParam0) == 243)
		return func_81(plParam0);

	return -1;
}

BOOL func_272() // Position - 0x6A52 (27218)
{
	return func_281(PLAYER::PLAYER_ID());
}

BOOL func_273() // Position - 0x6A62 (27234)
{
	return Global_1845225[PLAYER::PLAYER_ID() /*874*/] == 148;
}

BOOL func_274() // Position - 0x6A78 (27256)
{
	return Global_76839;
}

BOOL func_275() // Position - 0x6A84 (27268)
{
	return Global_1931309;
}

BOOL func_276() // Position - 0x6A90 (27280)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, false) == PLAYER::PLAYER_PED_ID())
			return true;

	return false;
}

BOOL func_277() // Position - 0x6ABE (27326)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_278(int iParam0) // Position - 0x6AD8 (27352)
{
	if (iParam0 == 1)
		if (Global_21222.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21222.f_1 > 3)
		return true;

	return false;
}

BOOL func_279(float fParam0, float fParam1, float fParam2) // Position - 0x6B2F (27439)
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

BOOL func_280() // Position - 0x6BA4 (27556)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_147))
		if (func_295(PLAYER::PLAYER_ID()))
			return 1;

	return 0;
}

BOOL func_281(Player plParam0) // Position - 0x6BC5 (27589)
{
	if (func_66(plParam0))
		if (func_66(Global_1888737[plParam0 /*611*/].f_10))
			return Global_1888737[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

BOOL func_282() // Position - 0x6BFA (27642)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_147) && func_8(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_283() // Position - 0x6C1D (27677)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_147) && func_260(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_284(Player plParam0) // Position - 0x6C40 (27712)
{
	if (func_261(Global_1845225[plParam0 /*874*/].f_260.f_36, -1))
		return 1;

	return 0;
}

BOOL func_285() // Position - 0x6C63 (27747)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_147))
		if (ENTITY::GET_ENTITY_MODEL(obLocal_147) == joaat("ex_prop_monitor_01_ex") || func_295(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

void func_286(int iParam0) // Position - 0x6C96 (27798)
{
	if (func_291())
		return;

	if (!(Global_21222.f_1 == 1))
	{
		if (func_278(0))
			func_287(iParam0);
	
		MISC::SET_BIT(&Global_9076, 2);
	}

	return;
}

void func_287(int iParam0) // Position - 0x6CC9 (27849)
{
	if (func_291())
		return;

	if (Global_21444)
		if (func_290())
			func_289(true, true);
		else
			func_289(false, false);

	if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
		MISC::SET_BIT(&Global_9076, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22585 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9075, 30);
	else
		MISC::CLEAR_BIT(&Global_9075, 30);

	if (!func_288())
		Global_21222.f_1 = 3;

	return;
}

BOOL func_288() // Position - 0x6D53 (27987)
{
	if (Global_21222.f_1 == 1 || Global_21222.f_1 == 0)
		return true;

	return false;
}

void func_289(BOOL bParam0, BOOL bParam1) // Position - 0x6D7A (28026)
{
	if (bParam0)
	{
		if (func_278(0))
		{
			Global_21444 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21159);
		
			Global_21150 = { Global_21168[Global_21167 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
		}
	}
	else if (Global_21444 == true)
	{
		Global_21444 = false;
		Global_21150 = { Global_21175[Global_21167 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21159);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
	}

	return;
}

BOOL func_290() // Position - 0x6DEE (28142)
{
	return IS_BIT_SET(Global_1959772, 5);
}

BOOL func_291() // Position - 0x6DFC (28156)
{
	return IS_BIT_SET(Global_1959772, 19);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x6E0B (28171)
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_293(var uParam0, int iParam1, BOOL bParam2) // Position - 0x6E18 (28184)
{
	if (iParam1 == -1)
		return true;

	func_296(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

BOOL func_294(Player plParam0) // Position - 0x6E76 (28278)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		{
			if (Global_2658016[plParam0 /*467*/].f_324.f_8 != -1)
			{
				num = func_9(Global_2658016[plParam0 /*467*/].f_324.f_8);
				return num == 2 || num == 25;
			}
		}
	}

	return false;
}

BOOL func_295(Player plParam0) // Position - 0x6ECB (28363)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658016[plParam0 /*467*/].f_324.f_8 != -1)
				return func_9(Global_2658016[plParam0 /*467*/].f_324.f_8) == 0;

	return false;
}

void func_296(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6F11 (28433)
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x6F56 (28502)
{
	return uParam0->f_1;
}

BOOL func_298(Player plParam0) // Position - 0x6F62 (28514)
{
	return func_299(func_87(plParam0));
}

BOOL func_299(int iParam0) // Position - 0x6F74 (28532)
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

BOOL func_300(int iParam0) // Position - 0x6F9A (28570)
{
	return Global_44375 == iParam0;
}

void func_301() // Position - 0x6FA8 (28584)
{
	if (iLocal_136 != -1)
		func_258(&iLocal_136);

	if (func_256())
		HUD::CLEAR_HELP(true);

	Global_1945779 = false;
	Global_1945778 = 0;
	return;
}


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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 4;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 4;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 4;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 4;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	float fLocal_106 = 0f;
	var uLocal_107 = 4;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 4;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
#endregion

void main() // Position - 0x0 (0)
{
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
	uLocal_60 = { 0f, 0f, 0f };
	uLocal_63 = { 0f, 0f, 0f };
	iLocal_66 = -1;
	iLocal_69 = 318;
	iLocal_70 = 1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_34();

	BUILTIN::WAIT(0);
	func_22();
	func_21();
	func_17();

	while (iLocal_70 && func_7(1, iLocal_71[0]))
	{
		BUILTIN::WAIT(0);
	
		switch (iLocal_68)
		{
			case 0:
				if (func_6())
					iLocal_68 = 1;
				break;
		
			case 1:
				if (func_2())
					iLocal_68 = 2;
				break;
		
			case 2:
				func_1();
				break;
		}
	}

	func_34();
	return;
}

void func_1() // Position - 0x101 (257)
{
	iLocal_70 = 0;
	return;
}

BOOL func_2() // Position - 0x10C (268)
{
	int i;

	for (i = 0; i < iLocal_71; i = i + 1)
	{
		func_3(iLocal_71[i], i);
	}

	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_103) > 100f)
		return true;

	return false;
}

int func_3(Ped pedParam0, int iParam1) // Position - 0x153 (339)
{
	char* scenarioName;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		switch (iLocal_81[iParam1])
		{
			case 0:
				if (func_5())
					return 0;
			
				if (PED::IS_PED_INJURED(pedParam0))
				{
					iLocal_81[iParam1] = -1;
					return 0;
				}
			
				if (func_4(pedParam0))
				{
					iLocal_81[iParam1] = 2;
					return 0;
				}
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_WANDER_STANDARD) != 1)
				{
					TASK::TASK_WANDER_STANDARD(pedParam0, 1193033728, 0);
					PED::SET_PED_KEEP_TASK(iLocal_71[iParam1], true);
				}
				break;
		
			case 1:
				if (PED::IS_PED_INJURED(pedParam0))
				{
					iLocal_81[iParam1] = -1;
					return 0;
				}
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_86[iParam1 /*4*/]))
				{
					BUILTIN::START_NEW_SCRIPT_WITH_ARGS(&uLocal_86[iParam1 /*4*/], &iLocal_71[iParam1], 1, DEFAULT);
					iLocal_81[iParam1] = 4;
					return 0;
				}
			
				if (func_4(pedParam0))
				{
					iLocal_81[iParam1] = 2;
					return 0;
				}
			
				scenarioName = "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
			
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(pedParam0))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(pedParam0, scenarioName, 0, true);
					PED::SET_PED_KEEP_TASK(iLocal_71[iParam1], true);
				}
				break;
		
			case 2:
				for (i = 0; i < iLocal_81; i = i + 1)
				{
					if (iParam1 != i)
						if (iLocal_81[i] < 2 && iLocal_81[iParam1] >= 0)
							iLocal_81[i] = 2;
				}
			
				iLocal_81[iParam1] = 3;
				return 0;
		
			case 3:
				if (PED::IS_PED_INJURED(pedParam0))
				{
					iLocal_81[iParam1] = -1;
					return 0;
				}
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_SMART_FLEE_PED) != 1)
				{
					TASK::CLEAR_PED_TASKS(pedParam0);
					TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 50f, 20000, true, false);
					return 1;
				}
			
				if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 50f * 50f)
				{
					iLocal_81[iParam1] = 0;
					return 1;
				}
				break;
		
			case 4:
				return 0;
		
			case -1:
				return 0;
		
			default:
				return 0;
		}
	
		return 1;
	}

	return 0;
}

BOOL func_4(Ped pedParam0) // Position - 0x33E (830)
{
	int i;

	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
		return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
		return true;

	if (PED::IS_PED_IN_COMBAT(pedParam0, PLAYER::PLAYER_PED_ID()))
		return true;

	for (i = 0; i < iLocal_71; i = i + 1)
	{
		if (pedParam0 != iLocal_71[i])
			if (iLocal_81[i] < 0)
				return true;
	}

	return false;
}

BOOL func_5() // Position - 0x3A7 (935)
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
		return false;

	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
			return false;
	
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
			if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_DURATION() > 0)
				if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() > 100)
					return false;
	}

	return true;
}

BOOL func_6() // Position - 0x3FC (1020)
{
	int i;

	for (i = 0; i < iLocal_71; i = i + 1)
	{
		func_3(iLocal_71[i], i);
	}

	if (!func_5())
		return true;

	return false;
}

int func_7(int iParam0, Entity eParam1) // Position - 0x431 (1073)
{
	Vector3 entityCoords;
	float num;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
				return 1;

	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_16(14))
			return 0;
	
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
			return 0;
	
		if (!func_9(iParam0, func_10()))
			return 0;
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam1))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam1, false) };
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), entityCoords);
		
			if (num > 250f)
				if (!ENTITY::IS_ENTITY_DEAD(eParam1, false))
					if (!ENTITY::IS_ENTITY_ON_SCREEN(eParam1))
						return 0;
				else if (!CAM::IS_SPHERE_VISIBLE(entityCoords, 1.5f))
					return 0;
		}
		else if (eParam1 == func_8(Global_101434) && eParam1 != 0)
		{
			Global_101434 = 0;
		}
	}

	return 1;
}

Entity func_8(var uParam0) // Position - 0x515 (1301)
{
	return uParam0;
}

BOOL func_9(int iParam0, int iParam1) // Position - 0x51F (1311)
{
	return iParam0 && iParam1 != false;
}

int func_10() // Position - 0x52E (1326)
{
	func_11();

	switch (Global_114162.f_2367.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

void func_11() // Position - 0x574 (1396)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_12(character) && !func_16(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_12(Global_114162.f_2367.f_539.f_4321))
					Global_114162.f_2367.f_539.f_4322 = Global_114162.f_2367.f_539.f_4321;
			
				Global_114162.f_2367.f_539.f_4323 = character;
				Global_114162.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114162.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114162.f_2367.f_539.f_4323 = Global_114162.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114162.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_12(eCharacter echParam0) // Position - 0x671 (1649)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x67D (1661)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x6BA (1722)
{
	if (func_12(character))
		return func_15(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_15(eCharacter echParam0) // Position - 0x6DF (1759)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_16(int iParam0) // Position - 0x6EE (1774)
{
	return Global_44199 == iParam0;
}

void func_17() // Position - 0x6FC (1788)
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
			func_20();
	
		return;
	}

	if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		func_20();
		return;
	}

	func_18();

	if (Global_101436 > 0)
		return;

	STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
	return;
}

void func_18() // Position - 0x73C (1852)
{
	func_19(Global_101436 - 1);
	return;
}

void func_19(int iParam0) // Position - 0x74E (1870)
{
	Global_101436 = iParam0;
	return;
}

void func_20() // Position - 0x75C (1884)
{
	func_19(0);
	return;
}

void func_21() // Position - 0x769 (1897)
{
	int i;
	int num;
	BOOL flag;

	num = 0;
	flag = false;

	while (!flag && num < 400)
	{
		flag = true;
	
		for (i = 0; i < iLocal_76; i = i + 1)
		{
			if (iLocal_76[i] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_76[i]);
			
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_76[i]))
				{
					STREAMING::REQUEST_MODEL(iLocal_76[i]);
					flag = false;
				}
			}
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_86[i /*4*/]))
			{
				SCRIPT::REQUEST_SCRIPT(&uLocal_86[i /*4*/]);
			
				if (!SCRIPT::HAS_SCRIPT_LOADED(&uLocal_86[i /*4*/]))
					flag = false;
			}
		}
	
		if (!flag)
			num = num + 1;
	
		BUILTIN::WAIT(0);
	}

	for (i = 0; i < iLocal_71; i = i + 1)
	{
		if (iLocal_76[i] != 0)
		{
			iLocal_71[i] = PED::CREATE_PED(PED_TYPE_CIVMALE, iLocal_76[i], uLocal_103 + uLocal_107[i /*3*/], 0, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_71[i], fLocal_106 + uLocal_120[i]);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_71[i], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71[i], BF_Aggressive, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71[i], BF_AlwaysFlee, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71[i], true);
			PED::SET_PED_CAN_RAGDOLL(iLocal_71[i], false);
		}
	}

	return;
}

void func_22() // Position - 0x896 (2198)
{
	var unk;
	int num;
	var unk117;

	iLocal_69 = Global_101116;
	func_26(iLocal_69, &uLocal_103, &fLocal_106, &unk);
	num.f_1 = -1;
	num.f_17 = 4;
	num.f_17.f_8 = 4;
	num.f_17.f_13 = 4;
	num.f_17.f_18 = 4;
	num.f_17.f_24 = 4;
	num.f_17.f_29 = 4;
	num.f_17.f_34 = 4;
	num.f_62 = 8;
	num.f_96.f_7 = 21;
	num.f_96.f_8 = 6;
	unk117.f_1 = -1;
	unk117.f_17 = 4;
	unk117.f_17.f_8 = 4;
	unk117.f_17.f_13 = 4;
	unk117.f_17.f_18 = 4;
	unk117.f_17.f_24 = 4;
	unk117.f_17.f_29 = 4;
	unk117.f_17.f_34 = 4;
	unk117.f_62 = 8;
	unk117.f_96.f_7 = 21;
	unk117.f_96.f_8 = 6;
	num = 0;
	num.f_2 = iLocal_69;
	num.f_3 = Global_99166.f_45;
	func_23(num, &unk117);

	switch (iLocal_69)
	{
		case 97:
			uLocal_107[0 /*3*/] = { { 45.5004f, -205.8167f, -1416.5402f } - uLocal_103 };
			uLocal_107[1 /*3*/] = { { 45.5004f, -207.5375f, -1423.8984f } - uLocal_103 };
			uLocal_107[2 /*3*/] = { { 45.5004f, -210.4254f, -1428.5013f } - uLocal_103 };
			uLocal_107[3 /*3*/] = { { 45.5004f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-205.8167f, -210.4254f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1416.5402f, -1428.5013f) } - uLocal_103 };
			uLocal_120[0] = 5.8017f - fLocal_106;
			uLocal_120[1] = 2.582f - fLocal_106;
			uLocal_120[2] = -47.7025f - fLocal_106;
			uLocal_120[3] = 65.2818f - fLocal_106;
			iLocal_76[0] = joaat("A_F_M_Tourist_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[0 /*4*/], "", 16);
			iLocal_76[1] = joaat("A_M_Y_Hipster_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[1 /*4*/], "", 16);
			iLocal_76[2] = joaat("A_M_M_BevHills_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[2 /*4*/], "", 16);
			iLocal_76[3] = joaat("A_M_M_GenFat_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[3 /*4*/], "", 16);
			iLocal_81[0] = 0;
			iLocal_81[1] = 0;
			iLocal_81[2] = 0;
			iLocal_81[3] = 0;
			break;
	
		case 158:
			uLocal_107[0 /*3*/] = { 1.2712f, 6.071f, -0.75f };
			uLocal_107[1 /*3*/] = { 3.8061f, 5.7599f, -0.5f };
			uLocal_107[2 /*3*/] = { 4.541f, 7.8487f, -0.4f };
			uLocal_107[3 /*3*/] = { 3.1051f, 13.7474f, -0.3463f };
			uLocal_120[0] = 123.059f;
			uLocal_120[1] = 134.0498f;
			uLocal_120[2] = 58.663f;
			uLocal_120[3] = 89.5592f;
			iLocal_76[0] = joaat("S_F_Y_Hooker_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[0 /*4*/], "pb_prostitute", 16);
			iLocal_76[1] = joaat("S_F_Y_Hooker_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[1 /*4*/], "pb_prostitute", 16);
			iLocal_76[2] = joaat("S_F_Y_Hooker_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[2 /*4*/], "pb_prostitute", 16);
			iLocal_76[3] = joaat("S_F_Y_Hooker_01");
			TEXT_LABEL_ASSIGN_STRING(&uLocal_86[3 /*4*/], "pb_prostitute", 16);
			iLocal_81[0] = 1;
			iLocal_81[1] = 1;
			iLocal_81[2] = 1;
			iLocal_81[3] = 1;
			break;
	
		default:
			uLocal_107[0 /*3*/] = { 0f, 0f, 0f };
			uLocal_107[1 /*3*/] = { 0f, 0f, 0f };
			uLocal_107[2 /*3*/] = { 0f, 0f, 0f };
			uLocal_107[3 /*3*/] = { 0f, 0f, 0f };
			uLocal_120[0] = 0f;
			uLocal_120[1] = 0f;
			uLocal_120[2] = 0f;
			uLocal_120[3] = 0f;
			iLocal_76[0] = 0;
			iLocal_76[1] = 0;
			iLocal_76[2] = 0;
			iLocal_76[3] = 0;
			break;
	}

	return;
}

int func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109) // Position - 0xBE6 (3046)
{
	uParam109->f_119 = 0;

	switch (uParam0.f_2)
	{
		case 0:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_ANY");
			uParam109->f_110 = joaat("SCRIPT_TASK_ANY");
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 0;
	
		case 1:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
	
		case 2:
			*uParam109 = { Global_99824[0 /*109*/] };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = Global_101412[0];
			return 1;
	
		case 3:
			*uParam109 = { Global_99824[1 /*109*/] };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = Global_101412[1];
			return 1;
	
		case 4:
			*uParam109 = { Global_99824[2 /*109*/] };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = Global_101412[2];
			return 1;
	
		case 5:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = Global_101412[uParam0.f_3];
			return 1;
	
		case 6:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = Global_101412[uParam0.f_3];
			return 1;
	
		case 7:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = Global_101412[uParam0.f_3];
			return 1;
	
		case 8:
		case 9:
		case 10:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			uParam109->f_110 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 11:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 14:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 13:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 15:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 54:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 55:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			uParam109->f_110 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 56:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 57:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 12:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_LEAVE_VEHICLE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_STAND_STILL"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 16:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 17:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 18:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 19:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 20:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 22:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 74:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 67:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 58:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 59:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 60:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 25:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 26:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 27:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 28:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 38:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 40:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER");
			uParam109->f_110 = joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 47:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 49:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 48:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_ENTER_VEHICLE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 50:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 51:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 52:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 66:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 61:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 62:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 63:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 69:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 64:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 65:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 234:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 316:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 315:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 75:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_24(uParam109, 30, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_STAND_STILL"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 76:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 77:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.7035f, -0.0282f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
	
		case 78:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
	
		case 79:
		case 80:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_PLAY_ANIM"), joaat("SCRIPT_TASK_PLAY_ANIM"), { 2.6407f, 8.164f, -14.1564f } + { -1f, 0.03f, -2.16f }, -66f + -56f);
		
			if (uParam0.f_2 == 80)
				func_25(uParam109);
		
			uParam109->f_118 = 1;
			return 1;
	
		case 124:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 82:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 84:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 83:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 85:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 291:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 86:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 87:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 88:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 89:
		case 90:
		case 127:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
		
			if (uParam0.f_2 == 92)
				uParam109->f_118 = 1;
		
			if (uParam0.f_2 == 104)
				uParam109->f_118 = 0;
		
			if (uParam0.f_2 == 81)
			{
				func_25(uParam109);
				uParam109->f_118 = 1;
			}
		
			return 1;
	
		case 94:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
		
			if (uParam0.f_2 == 94)
				func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -1.71f, 1.05f, 0f, -138f);
		
			uParam109->f_118 = 1;
			return 1;
	
		case 95:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 96:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 134:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 108:
		case 109:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 150:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 20, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.98f, 0.8017f, -0.42f, -180f);
			uParam109->f_118 = 1;
			return 1;
	
		case 118:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 119:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 120:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 114:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 105:
		case 106:
		case 107:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 98:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 99:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_24(uParam109, 15, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 100:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_24(uParam109, 15, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 101:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_24(uParam109, 14, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 102:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_24(uParam109, 14, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 103:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 121:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 122:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -2.04f, -0.15f, 0f, 14.4f);
			uParam109->f_118 = 1;
			return 1;
	
		case 125:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 110:
		case 111:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 131:
		case 132:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 126:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 128:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 129:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 130:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 133:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 151:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -1.71f, 1.05f, 0f, -138f);
			uParam109->f_118 = 1;
			return 1;
	
		case 152:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam109->f_118 = 1;
			return 1;
	
		case 153:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 154:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 155:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
	
		case 156:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 14, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam109->f_118 = 1;
			return 1;
	
		case 157:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 158:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
	
		case 159:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 160:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 161:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 163:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
	
		case 164:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 165:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 166:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 167:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 14, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.8472f, 0.155f, 0f, 152.556f);
			uParam109->f_118 = 1;
			return 1;
	
		case 168:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 169:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 14, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam109->f_118 = 1;
			return 1;
	
		case 170:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 171:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 14, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 172:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 15, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
	
		case 173:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 174:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
	}

	switch (uParam0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 177:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 178:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 179:
		case 180:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 181:
		case 182:
		case 183:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 192:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1f, 1f, 0f, 0f);
			uParam109->f_118 = 1;
		
			if (Global_4)
				uParam109->f_118 = 1;
		
			return 1;
	
		case 193:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam109->f_118 = 1;
		
			if (Global_4)
				uParam109->f_118 = 1;
		
			return 1;
	
		case 194:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_25(uParam109);
			uParam109->f_118 = 1;
		
			if (Global_4)
				uParam109->f_118 = 1;
		
			return 1;
	
		case 195:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_25(uParam109);
			uParam109->f_118 = 1;
		
			if (Global_4)
				uParam109->f_118 = 1;
		
			return 1;
	
		case 198:
		case 199:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 200:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 201:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 202:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 184:
		case 185:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 186:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 187:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 188:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 189:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 190:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 191:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 196:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 43, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
	
		case 197:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 3.4381f, -0.8269f, 0f, -87.6612f);
		
			if (uParam0.f_2 != 205)
			{
				uParam109->f_112 = { 3.4381f, -0.8269f, 0f };
				uParam109->f_115 = -87.6612f;
			}
		
			uParam109->f_118 = 1;
			return 1;
	
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 24:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 212:
		case 214:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 215:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam109->f_118 = 1;
			return 1;
	
		case 221:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.7949f, -0.508f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
	
		case 222:
		case 223:
		case 224:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 218:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
	
		case 219:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
	
		case 220:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam109->f_118 = 1;
			return 1;
	
		case 225:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.23f, 0.6f, -1f, 34.56f);
			uParam109->f_118 = 1;
			return 1;
	
		case 231:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
	
		case 232:
		case 233:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 235:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 236:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
	
		case 237:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
	
		case 238:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 239:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 240:
		case 241:
		case 242:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 273:
		case 274:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 245:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 243:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 244:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 271:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 280:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
	
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_118 = 1;
			func_25(uParam109);
		
			if (uParam0.f_2 == 265)
				uParam109->f_118 = 1;
		
			if (uParam0.f_2 == 268)
				uParam109->f_118 = 0;
		
			if (uParam0.f_2 == 267)
				func_24(uParam109, 144, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), -2.4166f, -0.15f, 0f, -148.7555f);
		
			if (uParam0.f_2 == 266)
				func_24(uParam109, 144, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), -5.7915f, -11.0439f, 0.67f, -72.589f);
		
			return 1;
	
		case 246:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 247:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 263:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 278:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 279:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 264:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 255:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 248:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
	
		case 249:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
	
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 275:
		case 276:
		case 277:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	
		case 254:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 285:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 256:
		case 257:
		case 258:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 259:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 260:
		case 261:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 286:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 287:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 288:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 262:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
	
		case 289:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_PLAY_ANIM"), joaat("SCRIPT_TASK_PLAY_ANIM"), -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam109->f_118 = 1;
			return 1;
	
		case 290:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 292:
		case 295:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
	
		case 293:
		case 294:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
	
		case 299:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
	
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
	
		case 296:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.41f, 1.35f, 0f, 168f);
			uParam109->f_118 = 1;
			return 1;
	
		case 297:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.7491f, 0.6423f, 0f, 166.479f);
			uParam109->f_118 = 1;
			return 1;
	
		case 298:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_24(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.72f, -0.69f, 0f, 172.44f);
			uParam109->f_118 = 1;
			return 1;
	
		case 304:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 305:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 306:
		case 307:
		case 308:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 309:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 310:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 311:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
	
		case 312:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY");
			uParam109->f_110 = joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY");
			func_24(uParam109, 144, joaat("SCRIPT_TASK_COWER"), joaat("SCRIPT_TASK_HANDS_UP"), -9.5443f, -3.191f, -0.3f, 180f);
			uParam109->f_118 = 1;
			return 1;
	
		case 313:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
	
		case 314:
			*uParam109 = { uParam0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	}

	*uParam109 = { uParam0 };
	uParam109->f_109 = joaat("SCRIPT_TASK_ANY");
	uParam109->f_110 = joaat("SCRIPT_TASK_ANY");
	func_25(uParam109);
	uParam109->f_118 = 0;
	return 0;
}

void func_24(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x3F60 (16224)
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { fParam4 };
	uParam0->f_115 = fParam7;
	return;
}

void func_25(var uParam0) // Position - 0x3F8A (16266)
{
	func_24(uParam0, 145, joaat("SCRIPT_TASK_ANY"), joaat("SCRIPT_TASK_ANY"), 0f, 0f, 0f, 0f);
	return;
}

int func_26(int iParam0, var uParam1, var uParam2, char* sParam3) // Position - 0x3FA8 (16296)
{
	int num;

	if (func_29(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
		
			case 1:
				func_27(&num);
			
				if (num < 5)
				{
					*uParam1 = { Global_96891[num /*9*/].f_3 };
					*uParam2 = Global_96891[num /*9*/].f_6;
					TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_96891[0 /*9*/].f_3 };
					*uParam2 = Global_96891[0 /*9*/].f_6;
					TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
					return 1;
				}
				break;
		
			case 2:
				*uParam1 = { Global_99824[0 /*109*/].f_4 };
				*uParam2 = Global_99824[0 /*109*/].f_7;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
				return 1;
		
			case 3:
				*uParam1 = { Global_99824[1 /*109*/].f_4 };
				*uParam2 = Global_99824[1 /*109*/].f_7;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
				return 1;
		
			case 4:
				*uParam1 = { Global_99824[2 /*109*/].f_4 };
				*uParam2 = Global_99824[2 /*109*/].f_7;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
				return 1;
		
			case 5:
				*uParam1 = { Global_114162.f_2367.f_539.f_2300[0 /*3*/] + { -1f, 0f, 0f } };
				*uParam2 = Global_114162.f_2367.f_539.f_2310[0];
				TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
				return 1;
		
			case 6:
				*uParam1 = { Global_114162.f_2367.f_539.f_2300[1 /*3*/] + { -1f, 0f, 0f } };
				*uParam2 = Global_114162.f_2367.f_539.f_2310[1];
				TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
				return 1;
		
			case 7:
				*uParam1 = { Global_114162.f_2367.f_539.f_2300[2 /*3*/] + { -1f, 0f, 0f } };
				*uParam2 = Global_114162.f_2367.f_539.f_2310[2];
				TEXT_LABEL_ASSIGN_STRING(sParam3, "", 32);
				return 1;
		}
	
		*uParam1 = { Global_100152[iParam0 /*3*/] };
		return 1;
	}

	return 0;
}

BOOL func_27(var uParam0) // Position - 0x419C (16796)
{
	int num;
	Vector3 entityCoords;
	float num2;
	int i;
	Vector3 vector;
	float num3;

	num = Global_114162.f_2367.f_539.f_4323;
	entityCoords = { Global_114162.f_2367.f_539.f_2300[num /*3*/] };

	if (func_28(entityCoords, 0f, 0f, 0f, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };

	*uParam0 = 5;
	num2 = 9999999f;

	for (i = 0; i < 5; i = i + 1)
	{
		if (IS_BIT_SET(Global_114162.f_7233.f_11[i], 0))
		{
			vector = { Global_96891[i /*9*/].f_3 };
			num3 = BUILTIN::VDIST(entityCoords, vector);
		
			if (num3 > 150f)
			{
				if (num3 < num2)
				{
					*uParam0 = i;
					num2 = num3;
				}
			}
		}
	}

	return *uParam0 != 5;
}

BOOL func_28(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x4254 (16980)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_29(int iParam0, var uParam1, char* sParam2) // Position - 0x429B (17051)
{
	var unk;
	int num;
	var unk4;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;

	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			func_27(&num);
		
			if (num < 5)
			{
				*uParam1 = Global_96891[num /*9*/].f_6;
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			else
			{
				*uParam1 = Global_96891[0 /*9*/].f_6;
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 2:
			*uParam1 = Global_99824[0 /*109*/].f_7;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 3:
			*uParam1 = Global_99824[1 /*109*/].f_7;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 4:
			*uParam1 = Global_99824[2 /*109*/].f_7;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 5:
			*uParam1 = Global_114162.f_2367.f_539.f_2310[0];
			TEXT_LABEL_ASSIGN_STRING(sParam2, func_33(Global_114162.f_2367.f_539.f_2314[0]), 32);
			return true;
	
		case 6:
			*uParam1 = Global_114162.f_2367.f_539.f_2310[1];
			TEXT_LABEL_ASSIGN_STRING(sParam2, func_33(Global_114162.f_2367.f_539.f_2314[1]), 32);
			return true;
	
		case 7:
			*uParam1 = Global_114162.f_2367.f_539.f_2310[2];
			TEXT_LABEL_ASSIGN_STRING(sParam2, func_33(Global_114162.f_2367.f_539.f_2314[2]), 32);
			return true;
	
		case 11:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "v_strip3", 32);
				return true;
			}
			break;
	
		case 8:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 9:
			return func_29(8, uParam1, sParam2);
	
		case 10:
			return func_29(8, uParam1, sParam2);
	
		case 13:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 14:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 15:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 12:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 16:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 17:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 18:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 19:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 20:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 21:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 22:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 74:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 23:
			return func_29(208, uParam1, sParam2);
	
		case 24:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 67:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 25:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 26:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 27:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 28:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 29:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 30:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 31:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 32:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 33:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 34:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 35:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 36:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 37:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 58:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 59:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 60:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 38:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 39:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 40:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
				return true;
			}
			break;
	
		case 41:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 42:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 43:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 44:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 45:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 46:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 47:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 49:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 48:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 124:
			unk = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 50:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 51:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 52:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 66:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 53:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 54:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 55:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 56:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 57:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 61:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 62:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 63:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 68:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 69:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 64:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 65:
			if (func_32(iParam0, &unk, uParam1))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
				return true;
			}
			break;
	
		case 70:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 71:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 72:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 73:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return false;
	
		case 234:
			*uParam1 = 122.69f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 316:
			*uParam1 = -60.31f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 315:
			*uParam1 = 41.654f - 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 75:
			*uParam1 = -172.697f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 76:
			*uParam1 = 181.8927f - 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 77:
			*uParam1 = -158f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 78:
			*uParam1 = -152f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 79:
			*uParam1 = 20.353f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 80:
			*uParam1 = -48.53f + 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 81:
			*uParam1 = -45f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 82:
			*uParam1 = -113.748f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 83:
			*uParam1 = -173.748f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 84:
			*uParam1 = 32.7938f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 85:
			*uParam1 = -56f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 86:
			*uParam1 = 13f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 87:
			*uParam1 = 166.32f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 89:
			*uParam1 = -84.8108f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 90:
			*uParam1 = -90.5046f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 91:
			*uParam1 = 105.0795f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 92:
			*uParam1 = -54.347f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 93:
			*uParam1 = 117f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 94:
			*uParam1 = -36f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 95:
			*uParam1 = 70f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 96:
			*uParam1 = 34.621f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 97:
			*uParam1 = -45f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 98:
			*uParam1 = -150.6148f + 0.0095f;
			*uParam1 = *uParam1 + 0.0004f;
			*uParam1 = *uParam1 + 0.0015f;
			*uParam1 = *uParam1 + 0.0002f;
			*uParam1 = *uParam1 + -0.0009f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 99:
			*uParam1 = -57f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 100:
			*uParam1 = 84.6073f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 101:
			*uParam1 = 249.0753f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 102:
			*uParam1 = 69f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 103:
			*uParam1 = 143.4931f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 104:
			*uParam1 = 123f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 105:
			*uParam1 = 168f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 106:
			*uParam1 = 63.4995f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 107:
			*uParam1 = -159f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 108:
			*uParam1 = -6f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 109:
			*uParam1 = 99f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 110:
			*uParam1 = 133f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 111:
			*uParam1 = 33f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 112:
			*uParam1 = -162.311f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 113:
			*uParam1 = 172f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 135:
			*uParam1 = -59.25f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 136:
			*uParam1 = 82.254f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 137:
			*uParam1 = -152.965f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 138:
			*uParam1 = -10.099f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 139:
			*uParam1 = 158.5974f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 140:
			*uParam1 = 99.18f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 141:
			*uParam1 = 218.4774f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 142:
			*uParam1 = 125.6193f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 143:
			*uParam1 = 142.373f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 144:
			*uParam1 = -34.878f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 145:
			*uParam1 = -172.419f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 146:
			*uParam1 = -107.439f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 147:
			*uParam1 = 157.311f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 148:
			*uParam1 = -68.812f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 149:
			*uParam1 = 4.693f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 150:
			*uParam1 = 78.65f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 114:
			*uParam1 = 8f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 115:
			*uParam1 = 69f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 116:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 117:
			*uParam1 = -74.7818f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 118:
			*uParam1 = -48.36f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 119:
			*uParam1 = 144.178f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 120:
			*uParam1 = 288f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 121:
			*uParam1 = 101.5f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 122:
			*uParam1 = 99.72f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 123:
			*uParam1 = 120f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 125:
			*uParam1 = -3f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 126:
			*uParam1 = -158.0894f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 127:
			*uParam1 = -76.3681f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 128:
			*uParam1 = 30f + 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 129:
			*uParam1 = -80.6f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 130:
			*uParam1 = -9.1673f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 131:
			*uParam1 = -86.0894f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 132:
			*uParam1 = -161.0894f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 133:
			*uParam1 = 226.5579f - 270f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 134:
			*uParam1 = -33.128f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 151:
			*uParam1 = -6f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 152:
			*uParam1 = 72f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 153:
			*uParam1 = -176.25f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 154:
			*uParam1 = -147.192f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 155:
			*uParam1 = 59.082f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 156:
			*uParam1 = 26.087f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 157:
			*uParam1 = 37.27f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 158:
			*uParam1 = -13.8153f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 159:
			*uParam1 = -62.5f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 160:
			*uParam1 = 119f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 161:
			*uParam1 = 86.3776f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 162:
			*uParam1 = 117f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 163:
			*uParam1 = -164f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 164:
			*uParam1 = 88f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 165:
			*uParam1 = -144.622f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 166:
			*uParam1 = -61.2262f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 167:
			*uParam1 = -22.32f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 168:
			if (func_30(0, 25, &unk4, &num2))
			{
				*uParam1 = num2 + 222.8314f;
				TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
				return true;
			}
			break;
	
		case 169:
			*uParam1 = 112.841f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	
		case 170:
			*uParam1 = -103.8158f + 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 171:
			*uParam1 = -28.0926f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 173:
			*uParam1 = -0.0301f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = *uParam1 + 0.003f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 174:
			*uParam1 = 14.98f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_michael", 32);
			return true;
	}

	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklins", 32);
			return true;
	
		case 176:
			*uParam1 = -147f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 177:
			*uParam1 = -81f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 178:
			*uParam1 = -95.4016f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 179:
			*uParam1 = -16.0627f + 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklins", 32);
			return true;
	
		case 180:
			*uParam1 = 129f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 181:
			*uParam1 = -86.613f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklins", 32);
			return true;
	
		case 182:
			*uParam1 = -63f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 183:
			*uParam1 = 111.688f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 184:
			*uParam1 = 143.7974f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 185:
			*uParam1 = 143.792f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 186:
			*uParam1 = 4.6834f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 187:
			*uParam1 = -108f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 188:
			*uParam1 = 69f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 189:
			*uParam1 = -172.2207f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 190:
			*uParam1 = 0f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 191:
			*uParam1 = -12.5158f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 196:
			*uParam1 = -1.5f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklins", 32);
			return true;
	
		case 197:
			*uParam1 = 27f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_franklinshouse", 32);
			return true;
	
		case 192:
			*uParam1 = 107.981f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 193:
			*uParam1 = 172.9187f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 194:
			*uParam1 = -67.608f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 195:
			*uParam1 = 74.1158f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 198:
			*uParam1 = 1.0411f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 199:
			*uParam1 = -152.203f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 200:
			*uParam1 = 310.879f - 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 201:
			*uParam1 = 130.879f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 202:
			*uParam1 = 35.604f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 203:
			*uParam1 = -93f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 204:
			*uParam1 = -119.3944f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 205:
			*uParam1 = 121.9322f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 206:
			*uParam1 = -36f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 207:
			*uParam1 = -95.588f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 208:
			*uParam1 = 168f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 209:
			*uParam1 = 230.78f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 210:
			*uParam1 = 165.7751f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 211:
			*uParam1 = -179f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 212:
			*uParam1 = 1.2709f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 213:
			*uParam1 = 84f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 214:
			*uParam1 = -117.03f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 215:
			*uParam1 = -49.0324f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 216:
			*uParam1 = -45f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 217:
			*uParam1 = 153f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 221:
			*uParam1 = 84.96f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 222:
			*uParam1 = -59.3848f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_chopshop", 32);
			return true;
	
		case 223:
			*uParam1 = 43.82f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_chopshop", 32);
			return true;
	
		case 224:
			return func_29(222, uParam1, sParam2);
	
		case 226:
			*uParam1 = 160f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 227:
			*uParam1 = -14.749f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 228:
			*uParam1 = -150f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 229:
			*uParam1 = 96.0116f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 230:
			*uParam1 = -43.6661f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 218:
			*uParam1 = -70.4124f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 219:
			*uParam1 = -12f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 220:
			*uParam1 = -117.356f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 225:
			*uParam1 = -83.8f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 231:
			*uParam1 = 350.3382f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 232:
			*uParam1 = 109.0206f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 233:
			*uParam1 = 109.0206f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 235:
			*uParam1 = -112f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_strip3", 32);
			return true;
	
		case 236:
			*uParam1 = 114f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_strip3", 32);
			return true;
	
		case 237:
			*uParam1 = 30f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 238:
			*uParam1 = -164f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 239:
			*uParam1 = -122f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 240:
			*uParam1 = -4.124f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 241:
			*uParam1 = 108f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 242:
			*uParam1 = 13.7207f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 245:
			*uParam1 = 27.746f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 243:
			*uParam1 = 18f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 244:
			*uParam1 = -51f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 246:
			*uParam1 = -165f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 247:
			*uParam1 = 133f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 248:
			*uParam1 = 10.77f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 249:
			*uParam1 = 138f - 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 250:
			*uParam1 = 87f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 251:
			*uParam1 = -42.8529f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 252:
			*uParam1 = 2.6497f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 253:
			*uParam1 = 135f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 254:
			*uParam1 = -40f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 255:
			*uParam1 = 30.24f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 264:
			*uParam1 = -90f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 265:
			*uParam1 = -144.274f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 266:
			*uParam1 = 68.8227f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 267:
			*uParam1 = 56.2037f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 268:
			*uParam1 = 33f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 269:
			*uParam1 = -106.6605f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 270:
			*uParam1 = -102f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 271:
			*uParam1 = 26.3597f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 272:
			*uParam1 = -83.3175f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 273:
			*uParam1 = -153f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 274:
			*uParam1 = 9f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 275:
			*uParam1 = 277.613f - 360f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 276:
			*uParam1 = -4.7459f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 277:
			*uParam1 = -98.56f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 278:
			*uParam1 = -33.77f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 279:
			*uParam1 = 155.68f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 280:
			*uParam1 = -49.56f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 281:
			*uParam1 = -5.8739f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 282:
			*uParam1 = 70.1627f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 283:
			*uParam1 = 158.979f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 284:
			*uParam1 = -67.1851f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 285:
			*uParam1 = 47.054f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 256:
			*uParam1 = 120f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 257:
			*uParam1 = 171.253f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 258:
			*uParam1 = 10.247f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 259:
			*uParam1 = -32.488f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 260:
			*uParam1 = -29.093f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 261:
			*uParam1 = 229.6085f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 286:
			*uParam1 = -150f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 287:
			*uParam1 = -81f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 288:
			*uParam1 = 12f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 262:
			*uParam1 = -90f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 263:
			*uParam1 = -171f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 289:
			*uParam1 = -11.5018f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 290:
			*uParam1 = -129f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_strip3", 32);
			return true;
	
		case 291:
			*uParam1 = -147f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 292:
			*uParam1 = 28.7271f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 293:
			*uParam1 = 28.7271f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 294:
			return func_29(293, uParam1, sParam2);
	
		case 295:
			return func_29(292, uParam1, sParam2);
	
		case 299:
			*uParam1 = 34.661f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 300:
			return func_29(303, uParam1, sParam2);
	
		case 301:
			return func_29(303, uParam1, sParam2);
	
		case 302:
			return func_29(303, uParam1, sParam2);
	
		case 303:
			*uParam1 = 32f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 296:
			*uParam1 = 116.742f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 297:
			*uParam1 = 100.46f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 298:
			*uParam1 = 102f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_Trevors", 32);
			return true;
	
		case 304:
			*uParam1 = -152.0894f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 305:
			*uParam1 = 122.5269f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_methlab", 32);
			return true;
	
		case 306:
			num3 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-num3, -num3.f_1);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 307:
			num4 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-num4, -num4.f_1);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 308:
			num5 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-num5, -num5.f_1);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 309:
			num6 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-num6, -num6.f_1);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 310:
			*uParam1 = -87.7215f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 311:
			*uParam1 = -145f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "v_trailer", 32);
			return true;
	
		case 312:
			*uParam1 = (103.2841f + 88.7571f) / 2f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 313:
			*uParam1 = -177f + 180f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	
		case 314:
			*uParam1 = 327.7746f;
			TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
			return true;
	}

	*uParam1 = 0f;
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
	return false;
}

BOOL func_30(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x676B (26475)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return true;
			
				case 1:
					if (func_30(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + { 0f, -1.1731f, 0.809f } };
						*uParam3 = *uParam3 + (456.7661f - 360f);
						return true;
					}
					break;
			
				case 2:
					*uParam2 = { { 71.8356f, 180.5483f, -796.9911f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (16f - 222.8314f) + 360f;
					return true;
			}
		
			return false;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return true;
			
				case 1:
					if (func_30(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + { 0f, 0.25f, -0.6f } };
						*uParam3 = *uParam3 + 0f;
						return true;
					}
					break;
			
				case 2:
					if (func_30(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + { 0f, -0.5f, -1.2f } };
						*uParam3 = *uParam3 + 0f;
						return true;
					}
					break;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { { 71.835f, 180.548f, -796.991f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = ((16f + 90f) - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return true;
			}
			break;
	
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return true;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return true;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return true;
			}
			break;
	
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_30(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + { 0f, 0f, 0f } };
						*uParam3 = *uParam3 + 0f;
						return true;
					}
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, 4.6f + 1f };
					*uParam3 = 318f;
					return true;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return true;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return true;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return true;
			}
			break;
	
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return true;
			}
			break;
	
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return true;
			}
			break;
	
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return true;
			}
			break;
	
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { { 76.89f, 176.176f, -802.702f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (-159.23f - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { { 76.89f, 176.176f, -802.702f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (-159.23f - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return true;
			}
			break;
	
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return true;
			}
			break;
	
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return true;
			}
			break;
	
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { { 0f, -11.0022f, -0.4395f } + { 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f) } };
					*uParam3 = 306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f);
					return true;
			}
			break;
	
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { { 60.2063f, 141.5129f, -863.5425f } - { 71.1531f, 179.5117f, -812.0607f } - { 1f, 0f, 0f } };
					*uParam2 = { *uParam2 * { 0.95f, 0.95f, 0.95f } };
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return true;
			}
			break;
	
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { { 71.8266f, 180.4725f, -796.7593f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (26.087f - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { { 72.6876f, 173.987f, -805.173f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (13f - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { { 72.8447f, 172.4196f, -803.1823f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (-28.7112f - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return true;
			}
			break;
	
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { { 0.6f, -6.5f, 10.3f } + { 0.1f, 0f, 0f } };
					*uParam3 = 78f;
					return true;
			}
			break;
	
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return true;
			}
			break;
	
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return true;
			}
			break;
	
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_30(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + { 0f, 0f, 0f } };
						*uParam3 = *uParam3 + 0f;
						return true;
					}
					break;
			}
			break;
	
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return true;
			}
			break;
	
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, 4.6f + 1f };
					*uParam3 = 310.6696f;
					return true;
			}
			break;
	
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return true;
			}
			break;
	
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return true;
			}
			break;
	
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return true;
			}
			break;
	
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return true;
			}
			break;
	
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return true;
			}
			break;
	
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return true;
			}
			break;
	
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return true;
			}
			break;
	
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return true;
			}
			break;
	
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return true;
			}
			break;
	
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return true;
			}
			break;
	
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return true;
			}
			break;
	
		case 46:
			return func_30(iParam0, 26, uParam2, uParam3);
	
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return true;
			}
			break;
	
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return true;
			}
			break;
	
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return false;
			}
			break;
	
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return true;
			}
			break;
	
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return true;
			}
			break;
	
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return true;
			}
			break;
	
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return true;
			}
			break;
	
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return true;
			}
			break;
	
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { { 1.1936f, -9.0107f, 9.0567f } + { 0.03f - 0.02f, 0f, 0f } };
					*uParam3 = 94.2086f;
					return true;
			}
			break;
	
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { { 5.2891f, 2.0403f, -2.8213f } + { 0.03f - 0.05f, 0f, 0f } };
					*uParam3 = 336f;
					return true;
			}
			break;
	
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return true;
			}
			break;
	
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return true;
			}
			break;
	
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return true;
			}
			break;
	
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return true;
			}
			break;
	
		case 60:
			if (func_30(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + { 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) } };
				*uParam3 = *uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f);
				return true;
			}
			break;
	
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return true;
			}
			break;
	
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { { 75.7407f, 181.264f, -814.246f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (-158f - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { { 76.7233f, 181.114f, -812.896f } - { 71.1531f, 179.5117f, -812.0607f } };
					*uParam3 = (-164f - 222.8314f) + 360f;
					return true;
			}
			break;
	
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return true;
			}
			break;
	
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return true;
			}
			break;
	
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return true;
			}
			break;
	
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return true;
			}
			break;
	
		case 77:
			if (func_30(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + { 0f, 0f, 0f } };
				*uParam3 = *uParam3 + 0f;
				return true;
			}
			break;
	
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return true;
			}
			break;
	
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return true;
			}
			break;
	
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return true;
			}
			break;
	
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return true;
			}
			break;
	
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return true;
			}
			break;
	
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return true;
			}
			break;
	
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return true;
			}
			break;
	
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = 147f + 90f;
					return true;
			}
			break;
	
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return true;
			}
			break;
	
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return true;
			}
			break;
	
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return true;
			}
			break;
	
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return true;
			}
			break;
	
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return true;
			}
			break;
	
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return true;
			}
			break;
	
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return true;
			}
			break;
	
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { { 30.7131f, -1454.6757f, -42.2059f } - { 30.116f, -1435.9974f, -14.3064f } };
					*uParam3 = 84.7009f - 188.5817f;
					return true;
			
				case 7:
					*uParam2 = { { 30.6803f, -1455.8477f, -40.7478f } - { 30.116f, -1435.9974f, -14.3064f } };
					*uParam3 = 90.6417f - 188.5817f;
					return true;
			}
			break;
	
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return true;
			}
			break;
	
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return true;
			}
			break;
	
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return true;
			}
			break;
	
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return true;
			}
			break;
	
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return true;
			}
			break;
	
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return true;
			}
			break;
	
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return true;
			}
			break;
	
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return true;
			}
			break;
	
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return true;
			}
			break;
	
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return true;
			}
			break;
	
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return true;
			}
			break;
	
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return true;
			}
			break;
	
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return true;
			}
			break;
	
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return true;
			}
			break;
	
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return true;
			}
			break;
	
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { { 0.15f, -1.9326f, -6.013f } + { 1f, 0f, 0f } };
					*uParam3 = 121.6591f;
					return true;
			}
			break;
	
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = 170.2796f - 180f;
					return true;
			}
			break;
	
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return true;
			}
			break;
	
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return true;
			}
			break;
	
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return true;
			}
			break;
	
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return true;
			}
			break;
	
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return true;
			}
			break;
	
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return true;
			}
			break;
	
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return true;
			}
			break;
	
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return true;
			}
			break;
	
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return true;
			}
			break;
	
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_114162.f_18537[2] == 299)
					{
						*uParam2 = { { 9.6327f, -1521.394f, -1158.133f } - { 9.6346f, -1517.601f, -1152.5707f } };
						*uParam3 = 34.661f - 90.6729f;
						return true;
					}
					else if (Global_114162.f_18537[2] == 300 || Global_114162.f_18537[2] == 301 || Global_114162.f_18537[2] == 302 || Global_114162.f_18537[2] == 303)
					{
						*uParam2 = { { 9.6327f, -1521.334f, -1157.803f } - { 9.6346f, -1517.601f, -1152.5707f } };
						*uParam3 = 32f - 90.6729f;
						return true;
					}
				
					if (_GET_RANDOM_BOOL())
					{
						*uParam2 = { { 9.6327f, -1521.394f, -1158.133f } - { 9.6346f, -1517.601f, -1152.5707f } };
						*uParam3 = 34.661f - 90.6729f;
						return true;
					}
					else
					{
						*uParam2 = { { 9.6327f, -1521.334f, -1157.803f } - { 9.6346f, -1517.601f, -1152.5707f } };
						*uParam3 = 32f - 90.6729f;
						return true;
					}
					break;
			}
			break;
	
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { { 10.6327f, -1519.561f, -1156.422f } - { 9.6346f, -1517.601f, -1152.5707f } };
					*uParam3 = 102f - 90.6729f;
					return true;
			}
			break;
	
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return true;
			}
			break;
	
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_30(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + { 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) } };
						*uParam3 = *uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f);
						return true;
					}
					break;
			}
			break;
	
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return true;
			}
			break;
	
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { { 9.6327f + 1f, -1518.7363f, -1148.4664f } - { 9.6346f, -1517.601f, -1152.5707f } };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return true;
			}
			break;
	
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return true;
			}
			break;
	
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return true;
			}
			break;
	
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return true;
			
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return true;
			}
			break;
	
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return false;
	
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return false;
	
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return false;
	}

	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return false;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x86C2 (34498)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_32(int iParam0, var uParam1, var uParam2) // Position - 0x86E0 (34528)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
	
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
	
		case 9:
			return func_32(8, uParam1, uParam2);
	
		case 10:
			return func_32(8, uParam1, uParam2);
	
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
	
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
	
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
	
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
	
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return true;
	
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
	
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
	
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
	
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
	
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = 250.4535f - 360f;
			return true;
	
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
	
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
	
		case 24:
			*uParam1 = { 744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f };
			*uParam2 = 51.7279f;
			return true;
	
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
	
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
	
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
	
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
	
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
	
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
	
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
	
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
	
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
	
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
	
		case 42:
			*uParam1 = { { 4.0205f, -2975.3408f, 798.4536f } + { 1f, 0f, 0f } };
			*uParam2 = 90f;
			return true;
	
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
	
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
	
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
	
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
	
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = 42f + 180f;
			return true;
	
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
	
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
	
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
	
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
	
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
	
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
	
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
	
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
	
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
	
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
	
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
	
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		default:
			break;
	}

	return false;
}

char* func_33(int iParam0) // Position - 0x904F (36943)
{
	switch (iParam0)
	{
		case joaat("v_chopshop"):
			return "v_chopshop";
	
		case joaat("v_franklins"):
			return "v_franklins";
	
		case joaat("v_franklinshouse"):
			return "v_franklinshouse";
	
		case joaat("v_methlab"):
			return "v_methlab";
	
		case joaat("v_michael"):
			return "v_michael";
	
		case joaat("v_strip3"):
			return "v_strip3";
	
		case joaat("v_trailer"):
			return "v_trailer";
	
		case joaat("v_trevors"):
			return "v_Trevors";
	}

	return "";
}

void func_34() // Position - 0x90D9 (37081)
{
	int i;

	for (i = 0; i < iLocal_76; i = i + 1)
	{
		if (iLocal_76[i] != 0)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76[i]);
	}

	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


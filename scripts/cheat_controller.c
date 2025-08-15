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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	Hash hLocal_65 = 0;
	Vehicle veLocal_66 = 0;
	Vehicle veLocal_67 = 0;
	char* sLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	var uLocal_78 = 10;
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
	int iLocal_89 = 0;
	BOOL bLocal_90 = 0;
	BOOL bLocal_91 = 0;
	int iLocal_92 = 0;
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
	sLocal_16 = "NULL";
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
	iLocal_44 = 1;
	iLocal_45 = 1;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	hLocal_65 = joaat("bmx");
	iLocal_71 = 300000;
	fLocal_76 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_113();

	Global_33548 = 0;
	Global_33547 = 0;
	Global_33549 = 0;
	Global_33550 = 0;
	Global_33552 = 0;
	Global_33551 = 0;
	func_112();

	while (true)
	{
		func_2();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && !Global_1836524 && Global_33298 == 0)
			func_113();
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x127 (295)
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

void func_2() // Position - 0x187 (391)
{
	func_88();
	func_68();
	func_22();
	func_3(hLocal_65);
	return;
}

void func_3(Hash hParam0) // Position - 0x1A1 (417)
{
	switch (iLocal_44)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			if (INTERIOR::IS_INTERIOR_SCENE())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /*Can't spawn that vehicle here.*/);
				iLocal_44 = 1;
			}
			else
			{
				func_20(hParam0);
			}
			break;
	
		case 4:
			func_4(hParam0);
			break;
	
		default:
			break;
	}

	return;
}

void func_4(Hash hParam0) // Position - 0x1F6 (502)
{
	float entityCoords;
	float entityHeading;
	BOOL flag;

	flag = false;

	if (STREAMING::HAS_MODEL_LOADED(hParam0))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_66))
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_66, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_66, false))
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_66, true) };
						entityHeading = ENTITY::GET_ENTITY_HEADING(veLocal_66);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), entityCoords, entityCoords.f_1, entityCoords.f_2 + 4f, true, false, false, true);
						flag = true;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(&veLocal_66);
			}
		
			if (!flag)
			{
				if (hParam0 == joaat("duster") || hParam0 == joaat("stunt"))
					entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1.5f, 3.5f, 1f) };
				else if (hParam0 == joaat("buzzard"))
					entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 2f) };
				else
					entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 3.5f, 1f) };
			
				entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f;
			}
		
			if (func_18(hParam0, entityCoords, entityHeading))
			{
				veLocal_66 = VEHICLE::CREATE_VEHICLE(hParam0, entityCoords, entityHeading, false, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_66, 1084227584);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_66);
				func_16(sLocal_68);
				func_5(20);
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /*Can't spawn that vehicle here.*/);
			}
		
			iLocal_44 = 1;
		}
	}

	return;
}

void func_5(int iParam0) // Position - 0x339 (825)
{
	if (!func_15(14) && !func_14(""))
	{
		MISC::SET_BIT(&Global_33549, iParam0);
		Global_33552 = 1;
		func_6();
	}

	return;
}

void func_6() // Position - 0x36C (876)
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	switch (character)
	{
		case CHAR_MICHAEL:
			func_7(joaat("SP0_TIMES_CHEATED"), 1);
			break;
	
		case CHAR_FRANKLIN:
			func_7(joaat("SP1_TIMES_CHEATED"), 1);
			break;
	
		case CHAR_TREVOR:
			func_7(joaat("SP2_TIMES_CHEATED"), 1);
			break;
	}

	return;
}

void func_7(Hash hParam0, int iParam1) // Position - 0x3BA (954)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3DD (989)
{
	func_9();
	return Global_114370.f_2367.f_539.f_4321;
}

void func_9() // Position - 0x3F6 (1014)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_10(character) && !func_15(14) || Global_113318)
			{
				if (Global_114370.f_2367.f_539.f_4321 != character && func_10(Global_114370.f_2367.f_539.f_4321))
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

BOOL func_10(eCharacter echParam0) // Position - 0x4F3 (1267)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x4FF (1279)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x53C (1340)
{
	if (func_10(character))
		return func_13(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_13(eCharacter echParam0) // Position - 0x561 (1377)
{
	return Global_2241[echParam0 /*29*/];
}

BOOL func_14(char* sParam0) // Position - 0x570 (1392)
{
	if (iLocal_92 != 0)
	{
		if (func_15(14) && CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP" /*Super jump.*/) && INTERIOR::IS_INTERIOR_SCENE())
				return false;
		
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON" /*Moon gravity.*/) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				return false;
		}
	
		return true;
	}

	return false;
}

BOOL func_15(int iParam0) // Position - 0x5DA (1498)
{
	return Global_44392 == iParam0;
}

void func_16(char* sParam0) // Position - 0x5E8 (1512)
{
	if (func_14(""))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_ACTIVATED" /*Cheat activated:~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
		STATS::PLAYSTATS_CHEAT_APPLIED(sParam0);
	}

	return;
}

void func_17(int iParam0) // Position - 0x61A (1562)
{
	uLocal_78[iLocal_89] = iParam0;
	iLocal_89 = iLocal_89 + 1;

	if (iLocal_89 >= 10)
		iLocal_89 = 0;

	return;
}

BOOL func_18(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x63A (1594)
{
	var unk;
	var minimum;
	float maximum;
	float xOffset;
	var endCoords;
	var surfaceNormal;
	int hit;
	int shapeTestHandle;
	int shapeTestHandle2;
	int shapeTestHandle3;
	int shapeTestHandle4;
	int shapeTestHandle5;
	int shapeTestHandle6;
	int shapeTestHandle7;
	var entityHit;

	unk = 9;
	MISC::GET_MODEL_DIMENSIONS(hParam0, &minimum, &maximum);
	xOffset = MISC::ABSF(maximum - minimum) / 2f;
	xOffset.f_1 = MISC::ABSF(maximum.f_1 - minimum.f_1) / 2f;
	xOffset.f_2 = MISC::ABSF(maximum.f_2 - minimum.f_2) / 2f;
	unk[0 /*3*/] = { vParam1 };
	unk[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, -xOffset.f_1, -xOffset.f_2) };
	unk[2 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, -xOffset.f_1, -xOffset.f_2) };
	unk[3 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, xOffset.f_1, -xOffset.f_2) };
	unk[4 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, xOffset.f_1, -xOffset.f_2) };
	unk[5 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, -xOffset.f_1, xOffset.f_2) };
	unk[6 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, -xOffset.f_1, xOffset.f_2) };
	unk[7 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, xOffset.f_1, xOffset.f_2) };
	unk[8 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, xOffset.f_1, xOffset.f_2) };

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam1))
		return false;

	shapeTestHandle7 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) + { 1f, 0f, 0f }, vParam1, 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle7, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[1 /*3*/], unk[3 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle2 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[2 /*3*/], unk[4 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle2, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle3 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[5 /*3*/], unk[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle3, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle4 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[6 /*3*/], unk[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle4, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle5 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[1 /*3*/], unk[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle5, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle6 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[2 /*3*/], unk[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle6, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	return true;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x8F6 (2294)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_20(Hash hParam0) // Position - 0x909 (2313)
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(hParam0))
	{
		STREAMING::REQUEST_MODEL(hParam0);
	
		if (STREAMING::HAS_MODEL_LOADED(hParam0))
			iLocal_44 = 4;
	}

	return;
}

void func_21(char* sParam0) // Position - 0x92C (2348)
{
	if (!func_15(14))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DENIED" /*Cheat denied:~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}

	return;
}

void func_22() // Position - 0x958 (2392)
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
	return;
}

void func_23() // Position - 0x984 (2436)
{
	switch (iLocal_64)
	{
		case 1:
			break;
	
		case 4:
			func_31(19, true);
			func_30();
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(19))
			{
				iLocal_64 = 9;
				return;
			}
		
			func_25();
			break;
	
		case 9:
			func_24("CHEAT_AIM_SLOW_MO" /*Slow motion aim.*/);
			func_31(19, false);
			MISC::SET_TIME_SCALE(1f);
			iLocal_75 = 0;
			iLocal_64 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_24(char* sParam0) // Position - 0xA23 (2595)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DEACTIVATED" /*Cheat deactivated:~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}

	return;
}

void func_25() // Position - 0xA4E (2638)
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_AIM))
			if (func_26(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && func_26(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))
				MISC::SET_TIME_SCALE(fLocal_76);
			else
				MISC::SET_TIME_SCALE(1f);
		else
			MISC::SET_TIME_SCALE(1f);

	return;
}

int func_26(Ped pedParam0) // Position - 0xAA5 (2725)
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

BOOL func_27(int iParam0) // Position - 0xAB9 (2745)
{
	if (IS_BIT_SET(Global_33547, iParam0))
		return true;

	return false;
}

BOOL func_28() // Position - 0xACF (2767)
{
	if (func_15(0) || func_15(11) || func_15(4) || func_15(9) || func_15(10) || func_15(3) || func_15(2) || func_29(35))
		return true;

	return false;
}

BOOL func_29(int iParam0) // Position - 0xB35 (2869)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114370.f_9089.f_99.f_58[iParam0];
}

void func_30() // Position - 0xB62 (2914)
{
	iLocal_75 = iLocal_75 + 1;

	if (iLocal_75 > 3)
	{
		iLocal_75 = 0;
		iLocal_64 = 9;
		return;
	}

	switch (iLocal_75)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1" /*Slow motion aim level 1.*/);
			fLocal_76 = 0.6f;
			break;
	
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2" /*Slow motion aim level 2.*/);
			fLocal_76 = 0.4f;
			break;
	
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3" /*Slow motion aim level 3.*/);
			fLocal_76 = 0.2f;
			break;
	
		default:
			break;
	}

	iLocal_64 = 5;
	return;
}

void func_31(int iParam0, BOOL bParam1) // Position - 0xBD2 (3026)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_33548, iParam0);
		func_5(iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_33548, iParam0);
	}

	return;
}

void func_32() // Position - 0xBFA (3066)
{
	switch (iLocal_61)
	{
		case 1:
			break;
	
		case 4:
			func_31(16, true);
			func_35();
			break;
	
		case 5:
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
		
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_34() || func_33(true) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SELECT_WEAPON) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL) || func_27(23) || func_27(21) || func_27(16))
				iLocal_61 = 9;
			break;
	
		case 9:
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
			func_24("CHEAT_SLOW_MO" /*Slow Motion.*/);
			func_31(16, false);
			iLocal_74 = 0;
			MISC::SET_TIME_SCALE(1f);
			iLocal_61 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_33(BOOL bParam0) // Position - 0xCE1 (3297)
{
	if (bParam0)
		return Global_24009.f_4 && Global_24009.f_104 == 4;

	return Global_24009.f_4;
}

BOOL func_34() // Position - 0xD0A (3338)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99370.f_44 == 1;

	return false;
}

void func_35() // Position - 0xD26 (3366)
{
	iLocal_74 = iLocal_74 + 1;

	if (iLocal_74 > 3)
	{
		iLocal_61 = 9;
		return;
	}

	switch (iLocal_74)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1" /*Slow motion level 1.*/);
			MISC::SET_TIME_SCALE(0.6f);
			break;
	
		case 2:
			func_16("CHEAT_SLOW_MO2" /*Slow motion level 2.*/);
			MISC::SET_TIME_SCALE(0.4f);
			break;
	
		case 3:
			func_16("CHEAT_SLOW_MO3" /*Slow motion level 3.*/);
			MISC::SET_TIME_SCALE(0.2f);
			break;
	
		default:
			break;
	}

	iLocal_61 = 5;
	return;
}

void func_36() // Position - 0xD99 (3481)
{
	float entityCoords;
	float entityHeading;
	float groundZ;

	switch (iLocal_62)
	{
		case 1:
			break;
	
		case 2:
			func_31(17, true);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, true);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false);
			groundZ = groundZ + 500f;
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), entityCoords, entityCoords.f_1, groundZ, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), entityHeading);
			iLocal_70 = MISC::GET_GAME_TIMER();
			CAM::DO_SCREEN_FADE_OUT(0);
			iLocal_62 = 3;
			break;
	
		case 3:
			if (func_38(1000, iLocal_70))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_70 = MISC::GET_GAME_TIMER();
				iLocal_62 = 4;
			}
			break;
	
		case 4:
			if (func_38(1000, iLocal_70))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PARACHUTE_DEPLOY, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PARACHUTE_PITCH_UD, true);
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TASK, 0, 0, 0);
				else
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, 0, 0, 0);
			
				CAM::DO_SCREEN_FADE_IN(250);
				iLocal_70 = MISC::GET_GAME_TIMER();
				func_16("CHEAT_SKYFALL" /*Skyfall.*/);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				iLocal_62 = 5;
			}
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(17))
			{
				iLocal_62 = 9;
				break;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PARACHUTE_DEPLOY, true);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
		
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, true, false, false, false, true);
			
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
					iLocal_62 = 9;
			}
			else
			{
				iLocal_62 = 9;
			}
			break;
	
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL" /*Skyfall.*/);
			func_31(17, false);
			iLocal_62 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_37() // Position - 0xF99 (3993)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));

	if (iLocal_60 != 5)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
	}

	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	return;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0xFDE (4062)
{
	int gameTimer;
	int num;

	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - iParam0;

	if (num > iParam1)
		return true;

	return false;
}

void func_39() // Position - 0xFFF (4095)
{
	var unk;

	switch (iLocal_60)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_INVINCIBILITY" /*Invincible for 5 minutes.*/);
			func_31(15, true);
			iLocal_60 = 5;
			iLocal_72 = MISC::GET_GAME_TIMER();
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_60 = 9;
				return;
			}
		
			unk = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };
		
			if (func_28() || func_34() || func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
			{
				iLocal_60 = 9;
				return;
			}
		
			iLocal_73 = MISC::GET_GAME_TIMER() - iLocal_72;
		
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) == 0)
				func_40(iLocal_71 - iLocal_73, "CHEAT_INV" /*INVINCIBILITY*/, 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		
			if (iLocal_73 >= iLocal_71 - 1000)
			{
				iLocal_60 = 9;
				return;
			}
		
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			STATS::STAT_SET_CHEAT_IS_ACTIVE();
			break;
	
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF" /*Invincibility*/);
			func_31(15, false);
			iLocal_60 = 1;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x117A (4474)
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_42(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1675455.f_1 = 1;
		func_41(7, num);
		Global_1675455.f_4714[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675455.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1675455.f_4714.f_172[num] = iParam2;
		Global_1675455.f_4714.f_216[num] = iParam3;
		Global_1675455.f_4714.f_183[num] = iParam4;
		Global_1675455.f_4714.f_194[num] = iParam5;
		Global_1675455.f_4714.f_249[num] = iParam6;
		Global_1675455.f_4714.f_260[num] = iParam7;
		Global_1675455.f_4714.f_205[num] = iParam8;
		Global_1675455.f_4714.f_314[num] = iParam9;
		Global_1675455.f_4714.f_325[num] = iParam10;
		Global_1675455.f_4714.f_357[num] = iParam11;
		Global_1675455.f_4714.f_238[num] = iParam12;
		Global_1675455.f_4714.f_271[num] = iParam13;
		Global_1675455.f_4714.f_368[num] = iParam14;
		Global_1675455.f_4714.f_379[num] = iParam15;
		Global_1675455.f_4714.f_390[num] = iParam16;
		Global_1675455.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_41(int iParam0, int iParam1) // Position - 0x12D7 (4823)
{
	MISC::SET_BIT(&Global_1675455.f_7064[iParam0], iParam1);
	return;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x12F0 (4848)
{
	return IS_BIT_SET(Global_1675455.f_7064[iParam0], iParam1);
}

void func_43() // Position - 0x1306 (4870)
{
	switch (iLocal_57)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FLAMING_BULLETS" /*Flaming bullets.*/);
			func_31(12, true);
			iLocal_57 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(12))
			{
				iLocal_57 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_57 = 9;
				return;
			}
		
			MISC::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24("CHEAT_FLAMING_BULLETS" /*Flaming bullets.*/);
			func_31(12, false);
			iLocal_57 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_44() // Position - 0x13AD (5037)
{
	switch (iLocal_58)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE" /*Explosive melee attacks.*/);
			func_31(13, true);
			iLocal_58 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(13) || func_28())
			{
				iLocal_58 = 9;
				return;
			}
		
			MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE" /*Explosive melee attacks.*/);
			func_31(13, false);
			iLocal_58 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_45() // Position - 0x1450 (5200)
{
	switch (iLocal_63)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_DRUNK" /*Drunk mode.*/);
			func_31(18, true);
			func_60(PLAYER::PLAYER_PED_ID());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_63 = 5;
			break;
	
		case 5:
			if (func_28() || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(18))
				iLocal_63 = 9;
			break;
	
		case 9:
			func_24("CHEAT_DRUNK" /*Drunk mode.*/);
			func_31(18, false);
			func_49(PLAYER::PLAYER_PED_ID());
			func_48(1000);
			iLocal_63 = 1;
			break;
	
		case 10:
			func_46(true);
			func_31(18, false);
			iLocal_63 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_46(BOOL bParam0) // Position - 0x152A (5418)
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(true);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_45585))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_45585))
			AUDIO::STOP_AUDIO_SCENE(&Global_45585);

	if (CAM::DOES_CAM_EXIST(Global_45573))
	{
		if (CAM::IS_CAM_SHAKING(Global_45573))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_45573, 0f);
			CAM::STOP_CAM_SHAKING(Global_45573, true);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_45580 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_45581, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_45585, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_45601, "", 16);
	func_47();
	return;
}

void func_47() // Position - 0x1606 (5638)
{
	Global_45572 = false;
	Global_45573 = 0;
	Global_45574 = 0;
	Global_45575 = 30000;
	Global_45576 = 0f;
	Global_45578 = 0f;
	Global_45577 = 0f;
	Global_45579 = 1f;
	Global_45580 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_45581, "", 16);
	return;
}

void func_48(int iParam0) // Position - 0x163C (5692)
{
	int gameTimer;

	if (!Global_45572)
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	Global_45574 = gameTimer + iParam0;
	Global_45575 = iParam0;
	return;
}

void func_49(Ped pedParam0) // Position - 0x1661 (5729)
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_57(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45393[num /*5*/];
		func_52(1, num2, 1);
		return;
	}

	num3 = func_51(pedParam0);

	if (num3 == -1)
		return;

	func_50(num3);
	return;
}

void func_50(int iParam0) // Position - 0x16BA (5818)
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45362[iParam0 /*6*/].f_1 == 0))
		if (Global_45362[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_45605 = 0;

	Global_45362[iParam0 /*6*/] = 13;
	Global_45362[iParam0 /*6*/].f_1 = 0;
	Global_45362[iParam0 /*6*/].f_2 = 0;
	Global_45362[iParam0 /*6*/].f_3 = 0;
	Global_45362[iParam0 /*6*/].f_4 = 0;
	Global_45360 = Global_45360 - 1;

	if (Global_45360 < 0)
		Global_45360 = 0;

	return;
}

int func_51(Ped pedParam0) // Position - 0x173D (5949)
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45362[i /*6*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2) // Position - 0x176E (5998)
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1783 (6019)
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_55(iParam0, iParam1, iParam2))
		return;

	num = func_54();

	if (num == -1)
		return;

	Global_45474[num /*6*/] = iParam0;
	Global_45474[num /*6*/].f_1 = iParam1;
	Global_45474[num /*6*/].f_2 = iParam2;
	Global_45474[num /*6*/].f_3 = iParam3;
	Global_45474[num /*6*/].f_4 = iParam4;
	Global_45474[num /*6*/].f_5 = iParam5;
	return;
}

int func_54() // Position - 0x1805 (6149)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45474[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_55(int iParam0, int iParam1, int iParam2) // Position - 0x1836 (6198)
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1851 (6225)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45474[i /*6*/].f_2)
			if (iParam0 == Global_45474[i /*6*/])
				if (iParam1 == Global_45474[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_57(Ped pedParam0) // Position - 0x189D (6301)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45393[i /*5*/] == -1))
			if (pedParam0 == Global_45393[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_58(int iParam0, int iParam1, int iParam2, Cam caParam3) // Position - 0x18E6 (6374)
{
	func_59(-1, iParam0, iParam1, iParam2, caParam3, true);
	return;
}

void func_59(int iParam0, int iParam1, float fParam2, float fParam3, Cam caParam4, BOOL bParam5) // Position - 0x18FC (6396)
{
	int gameTimer;

	if (Global_4)
		return;

	if (Global_45572)
		return;

	if (!bParam5)
		if (iParam0 < 0)
			return;

	if (fParam2 < 0f || fParam2 > 5f)
		return;

	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);

	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", fParam3 * Global_45571);

	if (CAM::DOES_CAM_EXIST(caParam4))
	{
		CAM::SHAKE_CAM(caParam4, "DRUNK_SHAKE", fParam3);
		Global_45573 = caParam4;
	}
	else
	{
		Global_45573 = 0;
	}

	Global_45572 = true;
	gameTimer = MISC::GET_GAME_TIMER();
	Global_45574 = gameTimer + iParam0;

	if (bParam5)
		if (iParam0 == -1)
			Global_45574 = -1;

	Global_45575 = iParam1;
	Global_45576 = fParam2;
	Global_45578 = fParam3;
	Global_45577 = fParam3;
	return;
}

int func_60(Ped pedParam0) // Position - 0x19B7 (6583)
{
	return func_61(pedParam0, -1, true, -1082130432);
}

int func_61(Ped pedParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x19CC (6604)
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	num = func_63(pedParam0);

	if (!(num == -1))
		return 1;

	num2 = func_51(pedParam0);

	if (!(num2 == -1))
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	num3 = func_62();

	if (num3 == -1)
		return 0;

	Global_45362[num3 /*6*/] = 0;
	Global_45362[num3 /*6*/].f_1 = pedParam0;
	Global_45362[num3 /*6*/].f_2 = iParam1;
	Global_45362[num3 /*6*/].f_3 = iParam1;
	Global_45362[num3 /*6*/].f_4 = 0;
	Global_45362[num3 /*6*/].f_5 = iParam3;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
		Global_45605 = 1;

	Global_45360 = Global_45360 + 1;
	return 1;
}

int func_62() // Position - 0x1A93 (6803)
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45362[i /*6*/] == 13)
			return i;
	}

	return -1;
}

int func_63(Ped pedParam0) // Position - 0x1AC2 (6850)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_45393[i /*5*/].f_1)
			return Global_45393[i /*5*/];
	}

	return -1;
}

void func_64() // Position - 0x1B03 (6915)
{
	switch (iLocal_56)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_BANG_BANG" /*Bang bang!*/);
			func_31(11, true);
			iLocal_56 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(11))
			{
				iLocal_56 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_56 = 9;
				return;
			}
		
			MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24("CHEAT_BANG_BANG" /*Bang bang!*/);
			func_31(11, false);
			iLocal_56 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_65() // Position - 0x1BAA (7082)
{
	switch (iLocal_59)
	{
		case 1:
			break;
	
		case 4:
			func_5(14);
			func_31(14, true);
			func_67();
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(14) || func_66(17) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					iLocal_59 = 9;
			else
				iLocal_59 = 9;
			break;
	
		case 9:
			func_24("CHEAT_GRAVITY_MOON" /*Moon gravity.*/);
			func_31(14, false);
			MISC::SET_GRAVITY_LEVEL(0);
			iLocal_77 = 0;
			iLocal_59 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_66(int iParam0) // Position - 0x1C75 (7285)
{
	if (IS_BIT_SET(Global_33548, iParam0))
		return true;

	return false;
}

void func_67() // Position - 0x1C8B (7307)
{
	iLocal_77 = iLocal_77 + 1;

	if (iLocal_77 > 1)
	{
		iLocal_59 = 9;
		return;
	}

	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON" /*Moon gravity.*/);
			MISC::SET_GRAVITY_LEVEL(1);
			break;
	
		default:
			break;
	}

	iLocal_59 = 5;
	return;
}

void func_68() // Position - 0x1CC8 (7368)
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
	return;
}

void func_69() // Position - 0x1CFC (7420)
{
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
	
		if (func_27(23) || func_27(22) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_GIVE_PARACHUTE" /*Parachute given.*/);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, true, true);
			func_5(10);
		}
	}

	return;
}

BOOL func_70() // Position - 0x1D74 (7540)
{
	if (bLocal_91)
	{
		bLocal_91 = false;
		return false;
	}

	if (func_71(0))
		return true;

	return false;
}

BOOL func_71(int iParam0) // Position - 0x1D95 (7573)
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

void func_72() // Position - 0x1DEC (7660)
{
	int playerWantedLevel;

	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
	
		if (func_27(23) || func_27(22) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
				return;
			}
		
			playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		
			if (playerWantedLevel > 0)
			{
				func_16("CHEAT_WANTED_DOWN" /*Wanted Level down.*/);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), playerWantedLevel - 1, false);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED" /*No Wanted Level active.*/);
			}
		}
	}

	return;
}

void func_73() // Position - 0x1E8F (7823)
{
	int playerWantedLevel;

	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
	
		if (func_27(23) || func_27(22) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
				return;
			}
		
			playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		
			if (playerWantedLevel < PLAYER::GET_MAX_WANTED_LEVEL())
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), playerWantedLevel + 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_16("CHEAT_WANTED_UP" /*Wanted Level up.*/);
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED" /*Current max Wanted Level reached.*/);
			}
		}
	}

	return;
}

void func_74() // Position - 0x1F3E (7998)
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
	
		if (func_27(23) || func_27(22) || func_27(7) || func_15(9) || func_15(10) || !PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(func_75()) || !PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
			func_16("CHEAT_SPECIAL_ABILITY" /*Special ability recharged.*/);
			func_5(7);
		}
	}

	return;
}

Hash func_75() // Position - 0x1FE5 (8165)
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_76() // Position - 0x1FF5 (8181)
{
	Vehicle vehiclePedIsUsing;

	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
	
		if (func_27(23) || func_27(22) || func_27(6) || func_15(9) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_HEALTH_ARMOR" /*Max health and armor.*/);
			func_5(6);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0, 0);
			PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()) - PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()));
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
					if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing, false))
						VEHICLE::SET_VEHICLE_FIXED(vehiclePedIsUsing);
			}
		}
	}

	return;
}

void func_77() // Position - 0x20CE (8398)
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
	
		if (func_27(23) || func_27(22) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		func_5(5);
	
		switch (iLocal_69)
		{
			case 0:
				iLocal_69 = 1;
				[[fallthrough]];
		
			case 1:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY" /*Extra sunny weather.*/);
				iLocal_69 = 2;
				break;
		
			case 2:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR" /*Clear weather.*/);
				iLocal_69 = 3;
				break;
		
			case 3:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY" /*Cloudy weather.*/);
				iLocal_69 = 4;
				break;
		
			case 4:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY" /*Smoggy weather.*/);
				iLocal_69 = 6;
				break;
		
			case 6:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST" /*Overcast weather.*/);
				iLocal_69 = 7;
				break;
		
			case 7:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN" /*Rainy weather.*/);
				func_31(5, true);
				iLocal_69 = 8;
				break;
		
			case 8:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER" /*Thundery weather.*/);
				iLocal_69 = 9;
				break;
		
			case 9:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING" /*Clearing weather.*/);
				iLocal_69 = 11;
				break;
		
			case 11:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW" /*Snowy weather.*/);
				iLocal_69 = 0;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_78() // Position - 0x225D (8797)
{
	if (iLocal_49 == 4)
	{
		iLocal_49 = 1;
	
		if (func_27(23) || func_27(22) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		func_16("CHEAT_GIVE_WEAPONS" /*Give weapons.*/);
		func_5(4);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_KNIFE"), -1, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMG"), 300, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), 300, true);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 150, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), 30, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), 5, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RPG"), 5, false);
		}
	}

	return;
}

void func_79() // Position - 0x2332 (9010)
{
	switch (iLocal_48)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_SWIM" /*Fast swim.*/);
			func_31(3, true);
			iLocal_48 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(3))
			{
				iLocal_48 = 9;
			}
			else
			{
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
	
		case 9:
			PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_SWIM" /*Fast swim.*/);
			func_31(3, false);
			iLocal_48 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_80() // Position - 0x23DA (9178)
{
	switch (iLocal_47)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_RUN" /*Fast run.*/);
			func_31(2, true);
			iLocal_47 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_27(23) || func_27(22) || func_27(2))
			{
				iLocal_47 = 9;
			}
			else
			{
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				else
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
	
		case 9:
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_RUN" /*Fast run.*/);
			func_31(2, false);
			iLocal_47 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_81() // Position - 0x24C3 (9411)
{
	Vehicle vehiclePedIsIn;

	switch (iLocal_46)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SLIDEY_CARS" /*Slidey cars.*/);
			func_31(1, true);
			iLocal_46 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(1))
				iLocal_46 = 9;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (veLocal_67 == 0)
						{
							veLocal_67 = vehiclePedIsIn;
						
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_67, false))
								if (func_82(1))
									VEHICLE::SET_VEHICLE_REDUCE_GRIP(veLocal_67, true);
								else
									veLocal_67 = 0;
						}
						else if (veLocal_67 != vehiclePedIsIn)
						{
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_67, false))
								VEHICLE::SET_VEHICLE_REDUCE_GRIP(veLocal_67, false);
						
							veLocal_67 = 0;
						}
					}
				}
			}
			break;
	
		case 9:
			func_24("CHEAT_SLIDEY_CARS" /*Slidey cars.*/);
			iLocal_46 = 10;
			break;
	
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_67, false))
			{
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(veLocal_67, false);
				veLocal_67 = 0;
			}
		
			func_31(1, false);
			iLocal_46 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_82(int iParam0) // Position - 0x25EA (9706)
{
	Vehicle playersLastVehicle;
	Hash entityModel;
	eCharacter character;
	var script;
	const char* entityScript;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (iParam0 & 1 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(entityModel))
						return false;
			
				if (iParam0 & 2 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
						return false;
			
				if (iParam0 & 4 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(entityModel))
						return false;
			
				if (iParam0 & 8 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(entityModel))
						return false;
			
				if (iParam0 & 16 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_pside_r") != -1)
						return false;
			
				if (iParam0 & 32 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_pside_r") == -1)
						return false;
			
				if (iParam0 & 64 != 0)
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
						if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_r") == -1)
							return false;
					else if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_pside_r") != -1)
						return false;
			
				if (iParam0 & 128 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_pside_r") == -1)
						return false;
			
				if (iParam0 & 256 != 0)
				{
					if (!func_10(character))
						return false;
				
					if (func_85(character, 0) != entityModel)
						return false;
				}
			
				if (iParam0 & 512 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(entityModel) && !VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
						return false;
				
					if (VEHICLE::IS_BIG_VEHICLE(playersLastVehicle))
						return false;
				
					entityScript = ENTITY::GET_ENTITY_SCRIPT(playersLastVehicle, &script);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
						if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("taxiService"))
							return false;
				
					if (func_83(playersLastVehicle, character, false))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_83(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x27EB (10219)
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_84(echParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114370.f_7233[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_84(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x2859 (10329)
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

Hash func_85(eCharacter echParam0, int iParam1) // Position - 0x2931 (10545)
{
	Hash num;

	if (func_10(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_86(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_86(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x2973 (10611)
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_114370.f_9089.f_99.f_58[128] && !Global_114370.f_9089.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114370.f_9089.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_114370.f_9089.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_87() // Position - 0x2BCF (11215)
{
	switch (iLocal_45)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SUPER_JUMP" /*Super jump.*/);
			func_31(0, true);
			iLocal_45 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(0) || INTERIOR::IS_INTERIOR_SCENE())
			{
				iLocal_45 = 9;
				return;
			}
		
			MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, true);
			break;
	
		case 9:
			func_24("CHEAT_SUPER_JUMP" /*Super jump.*/);
			func_31(0, false);
			iLocal_45 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_88() // Position - 0x2C78 (11384)
{
	if (func_111() || iLocal_92 != 0 || func_15(14))
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_ENTER_CHEAT_CODE, true);

	func_110();

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	if (func_34() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return;

	if (func_109())
	{
		if (!bLocal_90)
		{
			func_108();
			bLocal_90 = true;
		}
	
		return;
	}

	bLocal_90 = false;
	bLocal_91 = false;

	if (func_107(988027572, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("buzzoff")) || func_106(20, joaat("buzzard")))
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1" /*Spawn Buzzard.*/);

	if (func_107(-1134279030, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("bandit")) || func_106(20, joaat("bmx")))
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2" /*Spawn BMX.*/);

	if (func_107(971352167, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("holein1")) || func_106(20, joaat("caddy")))
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3" /*Spawn Caddy.*/);

	if (func_107(-269863225, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("comet")) || func_106(20, joaat("comet2")))
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4" /*Spawn Comet.*/);

	if (func_107(458579068, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("flyspray")) || func_106(20, joaat("duster")))
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5" /*Spawn Duster.*/);

	if (func_107(-666513193, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("rocket")) || func_106(20, joaat("pcj")))
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6" /*Spawn PCJ.*/);

	if (func_107(-1245984749, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("rapidgt")) || func_106(20, joaat("rapidgt")))
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7" /*Spawn Rapid GT.*/);

	if (func_107(2076774618, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("offroad")) || func_106(20, joaat("sanchez")))
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8" /*Spawn Sanchez.*/);

	if (func_107(855685457, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("vinewood")) || func_106(20, joaat("stretch")))
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9" /*Spawn Stretch Limo.*/);

	if (func_107(-591395876, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("barnstorm")) || func_106(20, joaat("stunt")))
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10" /*Spawn Stunt Plane.*/);

	if (func_107(-1399217582, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("trashed")) || func_106(20, joaat("trash")))
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11" /*Spawn Trashmaster.*/);

	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (func_107(-375917581, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("extinct")) || func_106(20, joaat("dodo")))
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12" /*Spawn Dodo Sea Plane.*/);
	
		if (func_107(-2124307881, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("deathcar")) || func_106(20, joaat("dukes2")))
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13" /*Spawn Duke O'Death.*/);
	
		if (func_107(1028964594, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("bubbles")) || func_106(20, joaat("submersible2")))
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14" /*Spawn Kraken submersible.*/);
	}

	if (func_107(-393416581, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("hoptoit")) || func_106(0, 0))
		func_101();

	if (func_107(-296509791, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("snowday")) || func_106(1, 0))
		func_100();

	if (func_107(1120820643, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("catchme")) || func_106(2, 0))
		func_99();

	if (func_107(-421458016, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("gotgills")) || func_106(3, 0))
		func_98();

	if (func_107(372390926, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("toolup")) || func_106(4, 0))
		iLocal_49 = 4;

	if (func_107(606506837, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("makeitrain")) || func_106(5, 0))
		iLocal_50 = 4;

	if (func_107(453014206, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("turtle")) || func_106(6, 0))
		iLocal_51 = 4;

	if (func_107(1773187142, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("powerup")) || func_106(7, 0))
		iLocal_52 = 4;

	if (func_107(1173296014, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("fugitive")) || func_106(8, 0))
		iLocal_53 = 4;

	if (func_107(-381269753, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("lawyerup")) || func_106(9, 0))
		iLocal_54 = 4;

	if (func_107(-2023988698, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("skydive")) || func_106(10, 0))
		iLocal_55 = 4;

	if (func_107(-835863906, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("highex")) || func_106(11, 0))
		func_97();

	if (func_107(1958387485, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("incendiary")) || func_106(12, 0))
		func_96();

	if (func_107(-903985180, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("hothands")) || func_106(13, 0))
		func_95();

	if (func_107(2087642905, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("floater")) || func_106(14, 0))
		func_94();

	if (func_107(1257820019, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("painkiller")) || func_106(15, 0))
		func_93();

	if (func_107(1540206179, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("slowmo")) || func_106(16, 0))
		func_92();

	if (func_107(115565392, 16) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("skyfall")) || func_106(17, 0))
		func_91();

	if (func_107(-1276513277, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("liquor")) || func_106(18, 0))
		func_90();

	if (func_107(2040433593, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("deadeye")) || func_106(19, 0))
		func_89();

	return;
}

void func_89() // Position - 0x33DC (13276)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_61 != 1)
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
	else
		iLocal_64 = 4;

	return;
}

void func_90() // Position - 0x3448 (13384)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_63 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_63 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_63 = 1;
		return;
	}

	if (iLocal_63 == 1)
		iLocal_63 = 4;
	else if (iLocal_63 == 5)
		iLocal_63 = 9;

	return;
}

void func_91() // Position - 0x34BF (13503)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_HERE" /*Can't activate that cheat here.*/);
		return;
	}

	if (iLocal_62 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE" /*Cheat already active.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(17) || func_66(0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	iLocal_62 = 2;
	return;
}

void func_92() // Position - 0x3598 (13720)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_64 != 1)
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
	else
		iLocal_61 = 4;

	return;
}

void func_93() // Position - 0x3604 (13828)
{
	var unk;

	unk = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };

	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_60 == 1)
		iLocal_60 = 4;
	else if (iLocal_60 == 5)
		iLocal_60 = 9;

	return;
}

void func_94() // Position - 0x368E (13966)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(14) || func_66(17) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	iLocal_59 = 4;
	return;
}

void func_95() // Position - 0x3703 (14083)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_58 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_58 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_58 = 1;
		return;
	}

	if (iLocal_58 == 1)
		iLocal_58 = 4;
	else if (iLocal_58 == 5)
		iLocal_58 = 9;

	return;
}

void func_96() // Position - 0x377A (14202)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_57 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_57 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_57 = 1;
		return;
	}

	if (iLocal_57 == 1)
		iLocal_57 = 4;
	else if (iLocal_57 == 5)
		iLocal_57 = 9;

	return;
}

void func_97() // Position - 0x37F1 (14321)
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_56 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_56 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_56 = 1;
		return;
	}

	if (iLocal_56 == 1)
		iLocal_56 = 4;
	else if (iLocal_56 == 5)
		iLocal_56 = 9;

	return;
}

void func_98() // Position - 0x3868 (14440)
{
	if (func_27(23) || func_27(22) || func_27(3) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_48 == 1)
		iLocal_48 = 4;
	else if (iLocal_48 == 5)
		iLocal_48 = 9;

	return;
}

void func_99() // Position - 0x38DB (14555)
{
	if (func_27(23) || func_27(22) || func_27(2) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_47 == 1)
		iLocal_47 = 4;
	else if (iLocal_47 == 5)
		iLocal_47 = 9;

	return;
}

void func_100() // Position - 0x394E (14670)
{
	if (func_27(23) || func_27(22) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_46 == 1)
		iLocal_46 = 4;
	else if (iLocal_46 == 5)
		iLocal_46 = 9;

	return;
}

void func_101() // Position - 0x39A9 (14761)
{
	if (func_27(23) || func_27(22) || func_27(0) || INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_45 == 1)
		iLocal_45 = 4;
	else if (iLocal_45 == 5)
		iLocal_45 = 9;

	return;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x3A0E (14862)
{
	int profileSetting;

	if (Global_153251 == 2)
		return true;
	else if (Global_153251 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

void func_103(int iParam0, char* sParam1) // Position - 0x3AC6 (15046)
{
	if (iLocal_44 == 1)
	{
		if (func_15(9) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("barry1")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tennis")) > 0 || func_27(23) || func_27(22) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED" /*Vehicle is not unlocked yet.*/);
			return;
		}
	
		hLocal_65 = iParam0;
		sLocal_68 = sParam1;
		iLocal_44 = 2;
	}

	return;
}

BOOL func_104(int iParam0) // Position - 0x3B60 (15200)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == false)
				return false;
			break;
	
		case joaat("dukes2"):
			if (func_105(64, 0) == false)
				return false;
			break;
	
		case joaat("submersible2"):
			if (func_105(63, 0) == false)
				return false;
			break;
	}

	return true;
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x3BB8 (15288)
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114370.f_32754[iParam0], iParam1);
}

BOOL func_106(int iParam0, int iParam1) // Position - 0x3BD8 (15320)
{
	if (IS_BIT_SET(Global_33550, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_33551)
			{
				MISC::CLEAR_BIT(&Global_33550, iParam0);
				bLocal_91 = true;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_33550, iParam0);
			bLocal_91 = true;
			return true;
		}
	}

	return false;
}

BOOL func_107(Hash hParam0, int iParam1) // Position - 0x3C22 (15394)
{
	if (!func_15(14))
		return MISC::HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(hParam0, iParam1);

	return false;
}

void func_108() // Position - 0x3C40 (15424)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (uLocal_78[i] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(uLocal_78[i]);
			uLocal_78[i] = -1;
		}
	}

	return;
}

BOOL func_109() // Position - 0x3C76 (15478)
{
	if (Global_101917 == 13 || Global_101917 == 10 || Global_101917 == 11 || Global_101917 == 12)
		return false;

	return true;
}

void func_110() // Position - 0x3CB4 (15540)
{
	if (func_15(14) || !CAM::IS_SCREEN_FADED_IN() && iLocal_92 != 0)
		iLocal_92 = MISC::GET_GAME_TIMER();

	if (iLocal_92 != 0)
		if (!func_15(14))
			if (MISC::GET_GAME_TIMER() - iLocal_92 > 1000)
				iLocal_92 = 0;

	return;
}

BOOL func_111() // Position - 0x3CFF (15615)
{
	if (Global_80029)
		return true;
	else if (Global_64517 && !Global_64523)
		return true;

	return false;
}

void func_112() // Position - 0x3D29 (15657)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		uLocal_78[i] = -1;
	}

	bLocal_90 = false;
	iLocal_89 = 0;
	return;
}

void func_113() // Position - 0x3D51 (15697)
{
	MISC::SET_RIOT_MODE_ENABLED(false);

	if (iLocal_62 == 5)
		func_37();

	if (iLocal_63 == 5)
		func_46(true);

	if (iLocal_61 == 5 || iLocal_64 == 5)
		MISC::SET_TIME_SCALE(1f);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_60 == 5)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		}
	
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	}

	MISC::SET_GRAVITY_LEVEL(0);
	Global_33548 = 0;
	Global_33547 = 0;
	Global_33549 = 0;
	Global_33550 = 0;
	Global_33552 = 0;
	Global_33551 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


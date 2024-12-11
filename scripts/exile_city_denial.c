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
	BOOL bLocal_27 = 0;
	BOOL bLocal_28 = 0;
	BOOL bLocal_29 = 0;
	BOOL bLocal_30 = 0;
	int iLocal_31 = 0;
#endregion

void main() // Position - 0x0
{
	int numUnits;
	int num;
	var entityCoords;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Interior interiorFromEntity;

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
	iLocal_26 = -1;
	bLocal_30 = true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1359046210) > 1)
	{
		Global_44146 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_42(18);
	func_41();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	numUnits = 2;
	num = 0;

	while (!bLocal_29)
	{
		bLocal_29 = true;
	
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		{
			Global_44146 = 0;
		
			if (!func_40(130))
			{
				func_39(18);
				func_38();
			}
			else if (func_40(131))
			{
				func_39(18);
				func_38();
			}
		
			switch (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP())
			{
				case 16:
					func_39(18);
					func_38();
					break;
			
				case 2:
					func_38();
					break;
			
				case 1:
					func_25(1628462442);
					func_25(1791324372);
					func_25(-240877892);
					func_25(1806999335);
					func_25(2054503592);
					func_25(-2009081795);
					bLocal_27 = 0;
				
					while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						SYSTEM::WAIT(1000);
					}
				
					bLocal_29 = false;
					break;
			}
		}
	}

	while (true)
	{
		if (num > 0)
		{
			num = num - SYSTEM::TIMERA();
			SYSTEM::SETTIMERA(0);
		
			if (num < 0)
				num = 0;
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		bLocal_27 = func_24(entityCoords, &bLocal_30);
	
		if (Global_79810 || Global_79810.f_1)
			bLocal_27 = 0;
	
		flag = false;
		flag2 = false;
	
		if (func_40(131))
			flag = true;
	
		if (!func_40(130))
			flag = true;
	
		if (flag)
		{
			Global_44146 = 0;
			func_39(18);
			func_38();
		}
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			flag2 = true;
	
		Global_44146 = bLocal_27;
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					bLocal_27 = 0;
	
		if (bLocal_28 != bLocal_27)
		{
			if (!bLocal_27)
				func_20();
		
			if (bLocal_27 && !flag2)
			{
				flag3 = false;
				flag4 = true;
			
				while (flag4)
				{
					switch (func_18(&iLocal_26, 6, 12, false, 0))
					{
						case 0:
							flag4 = false;
							flag3 = false;
							break;
					
						case 1:
							flag4 = false;
							flag3 = true;
							break;
					
						default:
							SYSTEM::WAIT(0);
							break;
					}
				
					if (Global_79539)
						SCRIPT::TERMINATE_THIS_THREAD();
				}
			
				if (flag3)
				{
					PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
				
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					
						while (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
						{
							SYSTEM::WAIT(5000);
							PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
						
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						}
					}
				
					if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) == CHAR_MICHAEL)
						if (!IS_BIT_SET(Global_114135.f_7692.f_923, 0))
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_114135.f_7692.f_923, 1))
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_114135.f_7692.f_923, 2))
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
					else if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) == CHAR_TREVOR)
						if (!IS_BIT_SET(Global_114135.f_7692.f_923, 3))
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_114135.f_7692.f_923, 4))
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_114135.f_7692.f_923, 4))
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
				
					if (num == 0 && !flag2)
					{
						if (!func_9(0) && !func_9(4) && !func_9(3))
						{
							if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(DT_Gangs) < 256)
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										MISC::CREATE_INCIDENT_WITH_ENTITY(DT_Gangs, PLAYER::PLAYER_PED_ID(), numUnits, 0f, &iLocal_31, 0, 0);
						
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (bLocal_30)
									_DISPLAY_HELP_TEXT("CITDENAL" /*Michael and Trevor have been exiled from the city. If they enter the city, Martin's henchmen will track them down.*/, -1);
								else
									_DISPLAY_HELP_TEXT("CITDENAL_R" /*Michael and Trevor have been exiled by Martin. Approaching his ranch will cause his henchmen to attack.*/, -1);
							
								num = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_27 = false;
				}
			}
			else
			{
				func_20();
			}
		}
	
		if (bLocal_27)
			if (!MISC::IS_INCIDENT_VALID(iLocal_31))
				if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(DT_Gangs) < 256)
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							MISC::CREATE_INCIDENT_WITH_ENTITY(DT_Gangs, PLAYER::PLAYER_PED_ID(), numUnits, 0f, &iLocal_31, 0, 0);
	
		if (bLocal_27 && SYSTEM::TIMERB() > 60000)
		{
			SYSTEM::SETTIMERB(0);
			numUnits = numUnits + MISC::GET_RANDOM_INT_IN_RANGE(1, 2);
		
			if (numUnits < 8)
				if (MISC::IS_INCIDENT_VALID(iLocal_31))
					MISC::SET_INCIDENT_REQUESTED_UNITS(iLocal_31, DT_Gangs, numUnits);
				else if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(DT_Gangs) < 256)
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							MISC::CREATE_INCIDENT_WITH_ENTITY(DT_Gangs, PLAYER::PLAYER_PED_ID(), numUnits, 0f, &iLocal_31, 0, 0);
			else
				numUnits = 8;
		}
	
		bLocal_28 = bLocal_27;
	
		if (flag2)
		{
			Global_44146 = 0;
		
			if (bLocal_27)
				func_20();
		
			func_4();
		
			while (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			{
				SYSTEM::WAIT(2000);
			}
		
			func_41();
			flag2 = false;
		}
	
		if (bLocal_27)
			SYSTEM::WAIT(0);
		else
			SYSTEM::WAIT(10000);
	
		if (func_1(12) && !func_9(12))
		{
			if (bLocal_27)
				func_20();
		
			while (func_9(0) || func_9(4))
			{
				SYSTEM::WAIT(8000);
			}
		}
	}

	func_4();
	return;
}

BOOL func_1(int iParam0) // Position - 0x5EE
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x610
{
	return func_3(iParam0, Global_44181);
}

BOOL func_3(int iParam0, int iParam1) // Position - 0x621
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void func_4() // Position - 0x802
{
	func_7(0, true);
	func_7(2, true);
	func_7(1, true);
	func_5(0, true);
	func_5(1, true);
	func_5(3, true);
	func_5(2, true);
	return;
}

void func_5(int iParam0, BOOL bParam1) // Position - 0x834
{
	if (iParam0 == 7)
		return;

	if (bParam1)
		MISC::SET_BIT(&Global_114135.f_7233.f_17[iParam0], 0);
	else
		MISC::CLEAR_BIT(&Global_114135.f_7233.f_17[iParam0], 0);

	MISC::DISABLE_POLICE_RESTART(Global_96802[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_96802[iParam0 /*9*/].f_7, false, false);
	return;
}

void func_6(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x892
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33467[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	
		if (Global_33464 == 1)
			Global_33465 = 1;
	
		Global_33464 = 1;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33467[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

void func_7(int iParam0, BOOL bParam1) // Position - 0x992
{
	if (iParam0 == 5)
		return;

	if (bParam1)
		MISC::SET_BIT(&Global_114135.f_7233.f_11[iParam0], 0);
	else
		MISC::CLEAR_BIT(&Global_114135.f_7233.f_11[iParam0], 0);

	MISC::DISABLE_HOSPITAL_RESTART(Global_96866[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_96866[iParam0 /*9*/].f_7, 0, false);
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_9(int iParam0) // Position - 0xA07
{
	return Global_44181 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xA15
{
	int num;
	int i;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam8 == 76)
		return 0;

	if (iParam9 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam4 < 3)
		if (iParam4 != iParam3)
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_114135.f_7692.f_136 < 9)
	{
		num = iParam0;
	
		if (Global_114135.f_7692.f_911 == num)
			Global_114135.f_7692.f_911 = -1;
	
		num.f_3 = func_13(iParam1);
		num.f_1 = iParam11;
		num.f_2 = iParam2;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		num.f_5 = iParam6;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = iParam7;
		num.f_11 = -1;
		num.f_7 = iParam8;
		num.f_8 = iParam9;
		num.f_9 = iParam10;
		MISC::CLEAR_BIT(&(num.f_1), 1);
		MISC::CLEAR_BIT(&(num.f_1), 0);
	
		if (iParam7 != -1)
			MISC::SET_BIT(&(num.f_1), 11);
		else if (iParam1 == 0)
			MISC::SET_BIT(&(num.f_1), 10);
	
		Global_114135.f_7692[Global_114135.f_7692.f_136 /*15*/] = { num };
		Global_114135.f_7692.f_136 = Global_114135.f_7692.f_136 + 1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (IS_BIT_SET(iParam2, i))
				func_11(i);
		}
	
		return 1;
	}

	return 0;
}

void func_11(int iParam0) // Position - 0xB8F
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_12(iParam0))
		return;

	for (i = 0; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_114135.f_7692[i /*15*/].f_2, iParam0))
			if (Global_114135.f_7692[i /*15*/].f_3 > num)
				num = Global_114135.f_7692[i /*15*/].f_3;
	}

	for (j = 0; j < Global_114135.f_7692.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_114135.f_7692.f_651[j /*14*/].f_2, iParam0))
			if (Global_114135.f_7692.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_114135.f_7692.f_919[iParam0] = num;
	return;
}

BOOL func_12(eCharacter echParam0) // Position - 0xC4D
{
	return echParam0 < CHAR_MULTIPLAYER;
}

int func_13(int iParam0) // Position - 0xC59
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xCC3
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xCEB
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xD28
{
	if (func_12(character))
		return func_17(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_17(eCharacter echParam0) // Position - 0xD4D
{
	return Global_2201[echParam0 /*29*/];
}

int func_18(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xD5C
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99141.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_1(0))
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23831.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44181 = iParam2;
		Global_44143 = *uParam0;
		Global_44144 = iParam4;
		Global_44142 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44142 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44142; i = i + 1)
			{
				if (Global_44148[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44143 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44142 == 8)
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		Global_44148[Global_44142 /*4*/] = Global_44145;
		Global_44148[Global_44142 /*4*/].f_1 = iParam1;
		Global_44148[Global_44142 /*4*/].f_2 = iParam2;
		Global_44148[Global_44142 /*4*/].f_3 = 0;
		Global_44142 = Global_44142 + 1;
	
		if (iParam4 != 0)
			func_19(uParam0, iParam4);
	}

	return 2;
}

void func_19(var uParam0, int iParam1) // Position - 0xE93
{
	int i;

	if (Global_44142 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44142; i = i + 1)
	{
		if (Global_44148[i /*4*/] == *uParam0)
			Global_44148[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

void func_20() // Position - 0xEE2
{
	if (iLocal_26 != -1)
		func_21(&iLocal_26);

	func_25(1628462442);
	func_25(1791324372);
	func_25(-240877892);
	func_25(1806999335);
	func_25(2054503592);
	func_25(-2009081795);
	bLocal_27 = 0;
	bLocal_28 = false;
	Global_44146 = 0;
	MISC::DELETE_INCIDENT(iLocal_31);
	return;
}

void func_21(var uParam0) // Position - 0xF42
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44143))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44142 = 0;
	Global_44144 = 0;
	Global_44181 = 15;
	Global_64305 = 0;
	Global_64306 = 0;
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xF7F
{
	func_23();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_23() // Position - 0xF98
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_12(character) && !func_9(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_12(Global_114135.f_2367.f_539.f_4321))
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
			
				Global_114135.f_2367.f_539.f_4323 = character;
				Global_114135.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114135.f_2367.f_539.f_4321 = 145;
	return;
}

int func_24(float fParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1095
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
		return 0;

	if (fParam0.f_1 < 400f)
	{
		if (fParam0 < 1400f)
		{
			if (fParam0 > -1900f)
			{
				if (fParam0.f_1 > -3500f)
				{
					*uParam3 = 1;
					return 1;
				}
			}
		}
	}

	if (fParam0 < 1536.35f)
	{
		if (fParam0.f_1 > 1016.18f)
		{
			if (fParam0.f_1 < 1213.53f)
			{
				if (fParam0 > 1278.08f)
				{
					*uParam3 = 0;
					return 1;
				}
			}
		}
	}

	return 0;
}

int func_25(int iParam0) // Position - 0x1124
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (Global_114135.f_7692[i /*15*/] == iParam0)
		{
			if (Global_44728 != i)
			{
				func_37(i);
				func_29(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_29(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
		{
			func_28(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_764; i = i + 1)
	{
		if (Global_114135.f_7692.f_651[i /*14*/] == iParam0)
		{
			func_27(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (Global_114135.f_7692.f_765[i /*10*/] == iParam0)
		{
			func_26(i);
			num = 1;
		}
	}

	return num;
}

void func_26(int iParam0) // Position - 0x124B
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114135.f_7692.f_866)
		return;

	if (Global_114135.f_7692.f_866 > 1)
	{
		for (i = iParam0; i <= Global_114135.f_7692.f_866 - 2; i = i + 1)
		{
			Global_114135.f_7692.f_765[i /*10*/] = { Global_114135.f_7692.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_114135.f_7692.f_866 > 0)
	{
		Global_114135.f_7692.f_765[Global_114135.f_7692.f_866 - 1 /*10*/] = { unk };
		Global_114135.f_7692.f_866 = Global_114135.f_7692.f_866 - 1;
	}

	return;
}

void func_27(int iParam0) // Position - 0x1304
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114135.f_7692.f_764)
		return;

	if (Global_114135.f_7692.f_764 > 1)
	{
		for (i = iParam0; i <= Global_114135.f_7692.f_764 - 2; i = i + 1)
		{
			Global_114135.f_7692.f_651[i /*14*/] = { Global_114135.f_7692.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_114135.f_7692.f_764 > 0)
	{
		Global_114135.f_7692.f_651[Global_114135.f_7692.f_764 - 1 /*14*/] = { unk };
		Global_114135.f_7692.f_764 = Global_114135.f_7692.f_764 - 1;
	}

	func_11(0);
	func_11(1);
	func_11(2);
	return;
}

void func_28(int iParam0) // Position - 0x13CC
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_114135.f_7692.f_650 - 2; j = j + 1)
			{
				Global_114135.f_7692.f_199[j /*15*/] = { Global_114135.f_7692.f_199[j + 1 /*15*/] };
			}
		
			Global_114135.f_7692.f_199[Global_114135.f_7692.f_650 - 1 /*15*/] = { unk };
			Global_114135.f_7692.f_650 = Global_114135.f_7692.f_650 - 1;
			return;
		}
	}

	return;
}

void func_29(int iParam0) // Position - 0x1479
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_30(Global_114135.f_7692.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_114135.f_7692.f_198 - 2; j = j + 1)
			{
				Global_114135.f_7692.f_137[j /*15*/] = { Global_114135.f_7692.f_137[j + 1 /*15*/] };
			}
		
			Global_114135.f_7692.f_137[Global_114135.f_7692.f_198 - 1 /*15*/] = { unk };
			Global_114135.f_7692.f_198 = Global_114135.f_7692.f_198 - 1;
			return;
		}
	}

	return;
}

int func_30(int iParam0) // Position - 0x1535
{
	int num;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (func_36(iParam0, Global_21066) == 1)
		{
			func_35(iParam0, Global_21066, 0);
		
			if (func_34(iParam0, Global_21066) == 0)
			{
				num = Global_21066;
				func_31(iParam0, num);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_31(int iParam0, int iParam1) // Position - 0x158B
{
	int num;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			num = iParam1;
			func_33(iParam0, num, 0);
			func_32(iParam0, num, 0);
		}
	}

	return;
}

void func_32(int iParam0, int iParam1, int iParam2) // Position - 0x15C0
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_33(int iParam0, int iParam1, int iParam2) // Position - 0x1605
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

int func_34(int iParam0, int iParam1) // Position - 0x164A
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[iParam0 /*29*/].f_24[iParam1];
}

void func_35(int iParam0, int iParam1, int iParam2) // Position - 0x1674
{
	Global_2201[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_19[iParam1] = iParam2;

	return;
}

int func_36(int iParam0, int iParam1) // Position - 0x16A5
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[iParam0 /*29*/].f_19[iParam1];
}

void func_37(eCharacter echParam0) // Position - 0x16CF
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < 0 || echParam0 >= Global_114135.f_7692.f_136)
		return;

	num = Global_114135.f_7692[echParam0 /*15*/].f_2;

	if (Global_114135.f_7692.f_136 > 1)
	{
		for (i = echParam0; i <= Global_114135.f_7692.f_136 - 2; i = i + 1)
		{
			Global_114135.f_7692[i /*15*/] = { Global_114135.f_7692[i + 1 /*15*/] };
		}
	}

	if (Global_114135.f_7692.f_136 > 0)
	{
		Global_114135.f_7692[Global_114135.f_7692.f_136 - 1 /*15*/] = { unk };
		Global_114135.f_7692.f_136 = Global_114135.f_7692.f_136 - 1;
	}

	for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_11(i);
	}

	return;
}

void func_38() // Position - 0x17A7
{
	func_20();
	func_4();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_39(int iParam0) // Position - 0x17BB
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114135.f_9089.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_114135.f_9089.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

BOOL func_40(int iParam0) // Position - 0x1812
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_99.f_58[iParam0];
}

void func_41() // Position - 0x183F
{
	func_7(0, false);
	func_7(2, false);
	func_7(1, false);
	func_5(0, false);
	func_5(1, false);
	func_5(3, false);
	func_5(2, false);
	return;
}

int func_42(int iParam0) // Position - 0x1871
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114135.f_9089.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_114135.f_9089.f_99.f_219[num], offset);
	return 1;
}


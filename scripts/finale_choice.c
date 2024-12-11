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
	BOOL bLocal_26 = 0;
#endregion

void main() // Position - 0x0
{
	BOOL flag;

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
	bLocal_26 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_47();

	func_46(20);
	func_45();
	func_44(1);
	func_44(0);
	func_44(2);
	func_44(13);
	func_44(12);
	Global_8924 = 1;
	func_43();

	if (!func_42(-1615086084))
		func_41(-1615086084, 2, 2, 2, 1, -1, 5);

	if (!func_42(-1970925435))
		func_41(-1970925435, 2, 0, 0, 1, -1, 5);

	if (!func_42(-1817481777))
		func_41(-1817481777, 2, 12, 3, 1, -1, 5);

	flag = false;

	while (func_40(23) && !func_39(134))
	{
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if (!flag)
						{
							if (!(func_33() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_32()))
								if (func_13())
									flag = true;
						}
						else
						{
							if (bLocal_26)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REENABLE_CONTROL_ON_DEATH | 256);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_DOWN, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_UP, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_LEFT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_RIGHT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_OPTION, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
						
							switch (func_12())
							{
								case -1615086084:
									if (!func_42(-1989308064))
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(-674681309, 2, true);
									break;
							
								case -1970925435:
									if (!func_42(-1060930305))
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1060930305:
									func_7(12, 1);
									func_6(134, true);
									STATS::STAT_SET_INT(-674681309, 1, true);
									break;
							
								case -1817481777:
									func_7(12, 2);
									func_6(134, true);
									STATS::STAT_SET_INT(-674681309, 3, true);
									break;
							
								default:
									if (!func_5(0))
										flag = false;
									else if (bLocal_26)
										if (func_4())
											bLocal_26 = false;
									break;
							}
						}
					}
				}
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_3(20);
	Global_101727 = 0;
	func_1();
	func_47();
	return;
}

int func_1() // Position - 0x2F3
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101727.f_8)
		if (Global_101727.f_10 > 0)
			return 0;
	else if (Global_101727.f_10 > 1)
		return 0;

	Global_101727.f_10 = Global_101727.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x33E
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

int func_3(int iParam0) // Position - 0x366
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

BOOL func_4() // Position - 0x3BD
{
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		return true;

	return false;
}

BOOL func_5(int iParam0) // Position - 0x3E6
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

void func_6(int iParam0, BOOL bParam1) // Position - 0x43D
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114135.f_9089.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114135.f_9089.f_99.f_58[iParam0] = bParam1;
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x482
{
	if (iParam0 == 13 || iParam0 == -1)
		return;

	if (Global_114135.f_9089.f_99.f_205[iParam0] == iParam1)
		return;

	Global_114135.f_9089.f_99.f_205[iParam0] = iParam1;
	return;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x4C7
{
	int num;
	int address;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam7 == 76)
		return 0;

	if (iParam8 == 235)
		return 0;

	if (iParam3 == iParam2)
		return 0;

	if (iParam2 != 144 && iParam2 != 0 && iParam2 != 1 && iParam2 != 2)
		return 0;

	if (Global_114135.f_7692.f_136 < 9)
	{
		num = iParam0;
	
		if (Global_114135.f_7692.f_911 == num)
			Global_114135.f_7692.f_911 = -1;
	
		num.f_3 = func_11(iParam1);
		num.f_5 = iParam6;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		num.f_1 = iParam10;
		address = 0;
		MISC::SET_BIT(&address, iParam2);
		num.f_2 = address;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_7 = iParam7;
		num.f_8 = iParam8;
		num.f_9 = iParam9;
		MISC::SET_BIT(&(num.f_1), 0);
		MISC::CLEAR_BIT(&(num.f_1), 1);
	
		if (iParam1 == 0)
			MISC::SET_BIT(&(num.f_1), 10);
	
		Global_114135.f_7692[Global_114135.f_7692.f_136 /*15*/] = { num };
		Global_114135.f_7692.f_136 = Global_114135.f_7692.f_136 + 1;
		func_9(iParam2);
		return 1;
	}

	return 0;
}

void func_9(int iParam0) // Position - 0x618
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_10(iParam0))
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

BOOL func_10(eCharacter echParam0) // Position - 0x6D6
{
	return echParam0 < CHAR_MULTIPLAYER;
}

int func_11(int iParam0) // Position - 0x6E2
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

int func_12() // Position - 0x74C
{
	return Global_114135.f_7692.f_911;
}

BOOL func_13() // Position - 0x75E
{
	if (Global_21066.f_1 > 3)
	{
		MISC::CLEAR_BIT(&Global_8920, 0);
		func_27(0);
		return false;
	}

	MISC::SET_BIT(&Global_8920, 0);

	if (func_14(0, 0, 1, true))
		return true;

	MISC::CLEAR_BIT(&Global_8920, 0);
	return false;
}

BOOL func_14(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7A3
{
	if (Global_79539)
	{
		if (iParam0 != 17 && iParam0 != 3 && iParam0 != 24 && iParam0 != 1)
			return false;
	
		if (!IS_BIT_SET(Global_4546023, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 16);
			}
		
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 15);
			}
		
			if (iParam0 == 24)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 27);
			}
		
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 29);
			}
		}
	
		if (Global_8926[iParam0 /*15*/].f_9 == 0)
			func_20();
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4546023, 14);
			MISC::CLEAR_BIT(&Global_4546023, 16);
			MISC::CLEAR_BIT(&Global_4546023, 15);
			MISC::CLEAR_BIT(&Global_4546023, 27);
			MISC::CLEAR_BIT(&Global_4546023, 29);
			return true;
		}
		else
		{
			return false;
		}
	}

	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_21066.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_5(0) == true)
			return false;

	if (Global_21032 == 1)
		return false;

	if (Global_21066.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21063))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) == 0)
		{
			if (Global_21066.f_1 < 4)
			{
				func_18("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) == 0)
					Global_21063 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_21048)
	{
		SYSTEM::WAIT(0);
	}

	func_20();
	func_15();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
	{
		Global_9542 = 0;
		Global_21066.f_1 = 7;
		func_18(&(Global_8926[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
				Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
			Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), CELLPHONE);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8926[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_15() // Position - 0x9DE
{
	if (Global_79539 == false)
	{
		Global_8926[14 /*15*/].f_4 = -99;
		Global_8926[4 /*15*/].f_4 = -99;
	
		if (Global_2696411)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xA62
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8926[iParam0 /*15*/], sParam1, 16);
	Global_8926[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8926[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8926[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8926[iParam0 /*15*/].f_10 = iParam4;
	Global_8926[iParam0 /*15*/].f_11 = iParam5;
	Global_8926[iParam0 /*15*/].f_12 = iParam6;
	Global_8926[iParam0 /*15*/].f_13 = iParam7;
	Global_8926[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8926[iParam0 /*15*/].f_12 == 0)
		Global_8926[iParam0 /*15*/].f_12 = 0;

	if (Global_8926[iParam0 /*15*/].f_13 == 0)
		Global_8926[iParam0 /*15*/].f_13 = 0;

	if (Global_8926[iParam0 /*15*/].f_14 == 0)
		Global_8926[iParam0 /*15*/].f_14 = 0;

	return;
}

BOOL func_17(int iParam0) // Position - 0xB18
{
	return Global_44181 == iParam0;
}

void func_18(char* sParam0) // Position - 0xB26
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xB46
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
				Global_21066 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
				Global_21066 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
				Global_21066 = CHAR_TREVOR;
			else
				Global_21066 = CHAR_MICHAEL;
	}
	else
	{
		Global_21066 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21066 == _CHAR_NULL)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_79539)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_21066 > CHAR_MULTIPLAYER)
			Global_21066 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_20() // Position - 0xBE8
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 35; i = i + 1)
	{
		Global_8926[i /*15*/].f_4 = -99;
	}

	if (Global_79539 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_26(num2, Global_21066) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_16(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44181 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8924 == 0)
		{
			func_16(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 0;
			Global_8925 = 255;
		}
		else
		{
			func_16(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 1;
			Global_8925 = 42;
		}
	
		if (num == 1)
			func_16(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_16(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_16(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114135.f_14055.f_89 == 1)
			func_16(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114135.f_14055.f_88 == 1)
			func_16(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_16(26, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (func_22())
			func_16(23, "CELL_HACKER_ROB", 5, "appHackerDen", 62, 1, 1, 0, 0);
		else
			func_16(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
	
		func_16(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546023, 4))
			func_16(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_16(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(24, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(34, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4546023, 4))
			if (Global_1836180)
				func_16(24, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 20))
				func_16(24, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 22))
				func_16(24, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 26))
				if (func_21())
					func_16(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_16(24, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546023, 4) == false && Global_1836180 == false && IS_BIT_SET(Global_4546023, 20) == false && IS_BIT_SET(Global_4546023, 22) == false && IS_BIT_SET(Global_4546023, 26) == false)
			if (func_21())
				func_16(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_16(24, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

BOOL func_21() // Position - 0x1134
{
	if (Global_79539)
		if (Global_1836586 || Global_1836587 == 1)
			return true;

	return false;
}

BOOL func_22() // Position - 0x115B
{
	return func_23() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

BOOL func_23() // Position - 0x1171
{
	return _STAT_GET_PACKED_BOOL(9539, -1);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x1181
{
	if (iParam1 == -1)
		iParam1 = func_25();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_25() // Position - 0x119D
{
	return Global_1574926;
}

int func_26(int iParam0, eCharacter echParam1) // Position - 0x11A9
{
	if (echParam1 < 0 || echParam1 > 4)
		return 0;

	return Global_2201[iParam0 /*29*/].f_19[echParam1];
}

void func_27(int iParam0) // Position - 0x11D3
{
	if (func_31())
		return;

	if (Global_21284)
		if (func_30())
			func_29(true, true);
		else
			func_29(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_28())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_28() // Position - 0x125D
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_29(BOOL bParam0, BOOL bParam1) // Position - 0x1284
{
	if (bParam0)
	{
		if (func_5(0))
		{
			Global_21284 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
		
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == true)
	{
		Global_21284 = false;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	}

	return;
}

BOOL func_30() // Position - 0x12F8
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_31() // Position - 0x1306
{
	return IS_BIT_SET(Global_1957675, 19);
}

BOOL func_32() // Position - 0x1315
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

BOOL func_33() // Position - 0x1331
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x134B
{
	func_35();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_35() // Position - 0x1364
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_10(character) && !func_17(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_10(Global_114135.f_2367.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1461
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x149E
{
	if (func_10(character))
		return func_38(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_38(eCharacter echParam0) // Position - 0x14C3
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_39(int iParam0) // Position - 0x14D2
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_99.f_58[iParam0];
}

BOOL func_40(int iParam0) // Position - 0x14FF
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_330[iParam0 /*6*/];
}

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x152B
{
	int num;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam2 < 3)
		if (IS_BIT_SET(iParam1, iParam2))
			return 0;

	if (iParam1 < 1 || iParam1 > 7)
		return 0;

	if (iParam4 <= 0)
		return 0;

	if (Global_114135.f_7692.f_650 < 30)
	{
		num = iParam0;
	
		if (Global_114135.f_7692.f_911 == num)
			Global_114135.f_7692.f_911 = -1;
	
		num.f_1 = 0;
		num.f_6 = iParam2;
		num.f_2 = iParam1;
		num.f_14 = iParam3;
		num.f_3 = iParam6;
		num.f_7 = -1;
		num.f_8 = 0;
		num.f_9 = -1;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_9 = iParam5;
		num.f_10 = -1;
		num.f_11 = -1;
		MISC::SET_BIT(&(num.f_1), 0);
		MISC::SET_BIT(&(num.f_1), 6);
		Global_114135.f_7692.f_199[Global_114135.f_7692.f_650 /*15*/] = { num };
		Global_114135.f_7692.f_650 = Global_114135.f_7692.f_650 + 1;
		return 1;
	}

	return 0;
}

BOOL func_42(int iParam0) // Position - 0x162E
{
	int i;

	for (i = 0; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (Global_114135.f_7692[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_764; i = i + 1)
	{
		if (Global_114135.f_7692.f_651[i /*14*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (Global_114135.f_7692.f_765[i /*10*/] == iParam0)
			return true;
	}

	return false;
}

void func_43() // Position - 0x172A
{
	Global_101727 = 1;
	return;
}

void func_44(int iParam0) // Position - 0x1737
{
	if (iParam0 == 144 || iParam0 == 145 || iParam0 == 161 || iParam0 == 208 || iParam0 == 207 || iParam0 == 162)
		return;

	Global_44733[iParam0] = MISC::GET_GAME_TIMER();
	return;
}

void func_45() // Position - 0x178C
{
	Global_44732 = MISC::GET_GAME_TIMER();
	return;
}

int func_46(int iParam0) // Position - 0x179B
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

void func_47() // Position - 0x17F2
{
	func_48(-1615086084);
	func_48(-1989308064);
	func_48(-1970925435);
	func_48(-1060930305);
	func_48(-1817481777);
	Global_8924 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_48(int iParam0) // Position - 0x183E
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
				func_59(i);
				func_52(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_52(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
		{
			func_51(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_764; i = i + 1)
	{
		if (Global_114135.f_7692.f_651[i /*14*/] == iParam0)
		{
			func_50(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (Global_114135.f_7692.f_765[i /*10*/] == iParam0)
		{
			func_49(i);
			num = 1;
		}
	}

	return num;
}

void func_49(int iParam0) // Position - 0x1965
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

void func_50(int iParam0) // Position - 0x1A1E
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

	func_9(0);
	func_9(1);
	func_9(2);
	return;
}

void func_51(int iParam0) // Position - 0x1AE6
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

void func_52(int iParam0) // Position - 0x1B93
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_53(Global_114135.f_7692.f_137[i /*15*/].f_6);
		
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

int func_53(int iParam0) // Position - 0x1C4F
{
	eCharacter num;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (func_26(iParam0, Global_21066) == 1)
		{
			func_58(iParam0, Global_21066, 0);
		
			if (func_57(iParam0, Global_21066) == 0)
			{
				num = Global_21066;
				func_54(iParam0, num);
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

void func_54(int iParam0, int iParam1) // Position - 0x1CA5
{
	int num;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (iParam1 > CHAR_MULTIPLAYER)
		{
		}
		else
		{
			num = iParam1;
			func_56(iParam0, num, 0);
			func_55(iParam0, num, 0);
		}
	}

	return;
}

void func_55(int iParam0, int iParam1, int iParam2) // Position - 0x1CDA
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1D1F
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

int func_57(int iParam0, int iParam1) // Position - 0x1D64
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[iParam0 /*29*/].f_24[iParam1];
}

void func_58(int iParam0, int iParam1, int iParam2) // Position - 0x1D8E
{
	Global_2201[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_19[iParam1] = iParam2;

	return;
}

void func_59(eCharacter echParam0) // Position - 0x1DBF
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
			func_9(i);
	}

	return;
}


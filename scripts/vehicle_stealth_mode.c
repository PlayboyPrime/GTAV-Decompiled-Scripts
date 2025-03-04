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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;

	if (func_92(&uLocal_44))
	{
		while (!func_83())
		{
			func_71(&uLocal_44);
		
			if (func_61(&uLocal_44))
				break;
		
			func_17(&uLocal_44);
			SYSTEM::WAIT(0);
		}
	}

	func_1(&uLocal_44);
	return;
}

void func_1(int* piParam0) // Position - 0xA8 (168)
{
	func_16();

	if (func_10(piParam0))
		HUD::CLEAR_HELP(true);

	if (func_8(&uLocal_44))
		func_4(&uLocal_44);

	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
	func_2();
	return;
}

void func_2() // Position - 0xE7 (231)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0xF3 (243)
{
	MISC::CLEAR_BIT(&(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872), 3);
	return;
}

void func_4(int* piParam0) // Position - 0x10E (270)
{
	func_7(false, true);
	func_6(false, -1, true);
	func_5(&(piParam0->f_6), 5);
	return;
}

void func_5(int* piParam0, int iParam1) // Position - 0x12C (300)
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_6(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x13C (316)
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2647040.f_1582) || Global_2647040.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam2)
	{
		if (bParam0)
		{
			Global_2647040.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2647040.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2647040.f_1582 = -1;
		}
	
		Global_2647040.f_1585 = iParam1;
		Global_2647040.f_1587 = bParam0;
	}
	else
	{
		!bParam2;
	}

	return;
}

void func_7(BOOL bParam0, BOOL bParam1) // Position - 0x1AE (430)
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2647040.f_1598) || Global_2647040.f_1598 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam1)
	{
		if (bParam0)
		{
			Global_2647040.f_1598 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_75.f_2), 23);
		}
		else
		{
			Global_2647040.f_1598 = -1;
			MISC::CLEAR_BIT(&(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_75.f_2), 23);
		}
	}
	else
	{
		!bParam1;
	}

	return;
}

BOOL func_8(int* piParam0) // Position - 0x22D (557)
{
	return func_9(&(piParam0->f_6), 5);
}

BOOL func_9(int* piParam0, int iParam1) // Position - 0x23E (574)
{
	return IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_10(int* piParam0) // Position - 0x24C (588)
{
	if (piParam0->f_2 != 0)
		if (func_14("STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/, func_15(piParam0->f_2), func_15(piParam0->f_2)) || func_13("STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/, func_15(piParam0->f_2)))
			return true;

	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_11()) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/);
}

char* func_11() // Position - 0x2B0 (688)
{
	return "STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2BB (699)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_13(char* sParam0, char* sParam1) // Position - 0x2CE (718)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_14(char* sParam0, char* sParam1, char* sParam2) // Position - 0x2E7 (743)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_15(Hash hParam0) // Position - 0x306 (774)
{
	if (hParam0 == joaat("annihilator2"))
		return "ANNIH_2_STEALTH" /*Stealth Annihilator*/;

	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam0);
}

void func_16() // Position - 0x324 (804)
{
	MISC::CLEAR_BIT(&(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872), 1);
	return;
}

void func_17(int* piParam0) // Position - 0x33F (831)
{
	func_58(piParam0);
	func_57(piParam0);

	if (func_56(piParam0))
	{
		if (func_55(piParam0) && !func_54(piParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1) && !func_53())
		{
			func_51(piParam0, true);
			func_50(piParam0);
		}
		else if (func_9(&(piParam0->f_6), 6) && func_54(piParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1) && !func_53())
			{
				func_51(piParam0, false);
				func_5(&(piParam0->f_6), 6);
				func_5(&(piParam0->f_6), 2);
			}
		}
	}

	if (func_49(piParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 1);
		func_48();
		func_47(piParam0);
	
		if (func_46())
			func_45(true);
	}
	else if (func_44(piParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
		func_16();
		func_47(piParam0);
		func_43(piParam0, 5);
	
		if (func_46())
			func_45(false);
	}

	if (func_54(piParam0) && !func_55(piParam0))
	{
		func_41(piParam0);
		func_40();
		func_43(piParam0, 2);
	
		if (func_37(piParam0))
			func_35(piParam0);
	}
	else
	{
		func_18(piParam0);
	}

	func_3();
	MISC::CLEAR_BIT(&(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872), 4);
	return;
}

void func_18(int* piParam0) // Position - 0x48C (1164)
{
	int num;

	if (!func_9(&(piParam0->f_6), 0) && !func_9(&(piParam0->f_6), 2) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_34(piParam0) && !func_33(0) && !func_32() && func_30() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false)))
	{
		func_26(piParam0, 1);
		func_25(&(piParam0->f_6), 3);
		num = piParam0->f_6.f_2 ? 3333 : 10000;
		piParam0->f_6.f_2 = 0;
	
		if (func_56(piParam0))
			func_21(func_22(piParam0), func_15(piParam0->f_2), func_15(piParam0->f_2), num);
		else
			func_20(func_22(piParam0), func_15(piParam0->f_2), num);
	
		func_19(piParam0);
		func_25(&(piParam0->f_6), 0);
	}

	return;
}

void func_19(int* piParam0) // Position - 0x56A (1386)
{
	func_25(&(piParam0->f_6), 2);
	return;
}

void func_20(char* sParam0, char* sParam1, int iParam2) // Position - 0x57B (1403)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
	return;
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x598 (1432)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
	return;
}

char* func_22(int* piParam0) // Position - 0x5BB (1467)
{
	if (func_56(piParam0))
		if (func_23(piParam0->f_2))
			return "STEALTH_OFF_S" /*Press ~INPUT_VEH_ROOF~ to enable Stealth Mode. All weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/;
		else
			return "STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/;

	return "STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/;
}

BOOL func_23(int iParam0) // Position - 0x5EB (1515)
{
	switch (iParam0)
	{
		case 239897677:
			return true;
	}

	return false;
}

var func_24(BOOL bParam0, var uParam1, var uParam2) // Position - 0x608 (1544)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_25(int* piParam0, int iParam1) // Position - 0x61F (1567)
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_26(int* piParam0, int iParam1) // Position - 0x62F (1583)
{
	int num;
	int num2;

	if (func_56(piParam0))
	{
		switch (piParam0->f_2)
		{
			case joaat("akula"):
				num2 = 19004;
				break;
		
			case joaat("annihilator2"):
				num2 = 36624;
				break;
		
			case 239897677:
				num2 = 36625;
				break;
		
			case joaat("terbyte"):
				return;
		}
	
		num = _STAT_GET_PACKED_INT(num2, -1) + iParam1;
	
		if (num >= 0)
			func_27(num2, num, -1);
	}

	return;
}

void func_27(int iParam0, int iParam1, int iParam2) // Position - 0x69C (1692)
{
	if (iParam2 == -1)
		iParam2 = func_28();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int func_28() // Position - 0x6C4 (1732)
{
	return Global_1574926;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0x6D0 (1744)
{
	if (iParam1 == -1)
		iParam1 = func_28();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

BOOL func_30() // Position - 0x6EC (1772)
{
	return !IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872, 4) && !func_31(true);
}

BOOL func_31(BOOL bParam0) // Position - 0x710 (1808)
{
	if (*Global_4718592.f_124993 == 6 || *Global_4718592.f_124993 == 7)
	{
		if (Global_4718592.f_2 == 20)
			return true;
	
		if (bParam0 && Global_4718592.f_2 == 25)
			return true;
	}

	return false;
}

BOOL func_32() // Position - 0x760 (1888)
{
	return Global_76658;
}

BOOL func_33(int iParam0) // Position - 0x76C (1900)
{
	if (iParam0 == 1)
		if (Global_21083.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21083.f_1 > 3)
		return true;

	return false;
}

BOOL func_34(int* piParam0) // Position - 0x7C3 (1987)
{
	if (func_56(piParam0))
	{
		switch (piParam0->f_2)
		{
			case joaat("akula"):
				return _STAT_GET_PACKED_INT(19004, -1) < 3;
		
			case joaat("annihilator2"):
				return _STAT_GET_PACKED_INT(36624, -1) < 3;
		
			case 239897677:
				return _STAT_GET_PACKED_INT(36625, -1) < 3;
		
			case joaat("terbyte"):
				return false;
		
			default:
			
		}
	}

	return true;
}

void func_35(int* piParam0) // Position - 0x823 (2083)
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		if (func_23(piParam0->f_2))
			_DISPLAY_HELP_TEXT("STEALTH_WARN_S" /*All weapons are unavailable while the vehicle is in Stealth Mode.*/, 3000);
		else
			_DISPLAY_HELP_TEXT("STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/, 3000);

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x855 (2133)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_37(int* piParam0) // Position - 0x86C (2156)
{
	int num;

	if (func_33(0) || func_32())
		return false;

	num = func_38(piParam0);

	switch (num)
	{
		case 1:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON))
				return true;
			break;
	
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK))
				return true;
			break;
	
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK))
				return true;
			break;
	
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				return true;
			break;
	}

	return false;
}

int func_38(int* piParam0) // Position - 0x910 (2320)
{
	if (!func_39(piParam0))
		return 4;

	switch (piParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case 239897677:
			switch (piParam0->f_4)
			{
				case -1:
					return 1;
			
				case 0:
					return 2;
			
				default:
				
			}
		
			return 4;
	}

	return 4;
}

BOOL func_39(int* piParam0) // Position - 0x966 (2406)
{
	return ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
}

void func_40() // Position - 0x985 (2437)
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	return;
}

void func_41(int* piParam0) // Position - 0x9ED (2541)
{
	int num;

	if (!func_9(&(piParam0->f_6), 0) && !func_9(&(piParam0->f_6), 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9(&(piParam0->f_6), 3) && !func_33(0) && !func_32() && func_30() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false)))
	{
		num = piParam0->f_6.f_2 ? 3333 : 10000;
		piParam0->f_6.f_2 = 0;
	
		if (func_56(piParam0))
			_DISPLAY_HELP_TEXT(func_42(piParam0), num);
		else
			func_21(func_42(piParam0), func_15(piParam0->f_2), func_15(piParam0->f_2), num);
	
		func_50(piParam0);
		func_25(&(piParam0->f_6), 0);
	}

	return;
}

char* func_42(int* piParam0) // Position - 0xAB6 (2742)
{
	if (func_56(piParam0))
		if (func_23(piParam0->f_2))
			return "STEALTH_ON_S" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/;
		else
			return "STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/;

	return "STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/;
}

void func_43(int* piParam0, int iParam1) // Position - 0xAE7 (2791)
{
	if (func_55(piParam0))
		return;

	if (PLAYER::GET_MAX_WANTED_LEVEL() != iParam1)
		PLAYER::SET_MAX_WANTED_LEVEL(iParam1);

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iParam1)
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam1, false);

	return;
}

BOOL func_44(int* piParam0) // Position - 0xB22 (2850)
{
	return !func_9(piParam0, 0) && func_9(piParam0, 1);
}

void func_45(BOOL bParam0) // Position - 0xB3E (2878)
{
	if (bParam0)
		MISC::SET_BIT(&(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872), 6);
	else
		MISC::CLEAR_BIT(&(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872), 6);

	return;
}

BOOL func_46() // Position - 0xB74 (2932)
{
	if (Global_1845124)
		return false;

	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872, 5);
}

void func_47(int* piParam0) // Position - 0xB97 (2967)
{
	func_5(&(piParam0->f_6), 0);

	if (func_10(piParam0))
		HUD::CLEAR_HELP(true);

	if (!func_56(piParam0))
		if (func_54(piParam0))
			func_5(&(piParam0->f_6), 1);
		else
			func_5(&(piParam0->f_6), 2);

	return;
}

void func_48() // Position - 0xBDE (3038)
{
	MISC::SET_BIT(&(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872), 1);
	return;
}

BOOL func_49(int* piParam0) // Position - 0xBF9 (3065)
{
	return func_9(piParam0, 0) && !func_9(piParam0, 1);
}

void func_50(int* piParam0) // Position - 0xC15 (3093)
{
	func_25(&(piParam0->f_6), 1);
	return;
}

void func_51(int* piParam0, BOOL bParam1) // Position - 0xC26 (3110)
{
	func_52(piParam0->f_1, bParam1);
	return;
}

void func_52(Vehicle veParam0, BOOL bParam1) // Position - 0xC38 (3128)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				VEHICLE::SET_DEPLOY_FOLDING_WINGS(veParam0, !bParam1, false);
				break;
		
			case 239897677:
				VEHICLE::_SET_DEPLOY_MISSILE_BAYS(veParam0, !bParam1);
				break;
		}
	}

	return;
}

BOOL func_53() // Position - 0xC8B (3211)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872, 3);
}

BOOL func_54(int* piParam0) // Position - 0xCA3 (3235)
{
	return func_9(piParam0, 0);
}

BOOL func_55(int* piParam0) // Position - 0xCB2 (3250)
{
	return func_9(piParam0, 2);
}

BOOL func_56(int* piParam0) // Position - 0xCC1 (3265)
{
	return func_39(piParam0) && piParam0->f_3 == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false) == PLAYER::PLAYER_PED_ID();
}

void func_57(int* piParam0) // Position - 0xCF2 (3314)
{
	if (func_10(piParam0) && func_33(0) || func_32())
	{
		piParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(true);
		func_5(&(piParam0->f_6), 0);
	
		if (func_54(piParam0))
		{
			func_5(&(piParam0->f_6), 1);
		}
		else
		{
			func_5(&(piParam0->f_6), 2);
		
			if (func_56(piParam0))
				func_26(piParam0, -1);
		}
	}

	return;
}

void func_58(int* piParam0) // Position - 0xD5A (3418)
{
	if (func_54(piParam0))
		if (func_8(piParam0))
			if (func_60())
				func_4(piParam0);
		else if (!func_60())
			func_59(piParam0);
	else if (func_8(piParam0))
		func_4(piParam0);

	MISC::CLEAR_BIT(&(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872), 2);
	return;
}

void func_59(int* piParam0) // Position - 0xDB7 (3511)
{
	func_7(true, true);
	func_6(true, -1, true);
	func_25(&(piParam0->f_6), 5);
	return;
}

BOOL func_60() // Position - 0xDD5 (3541)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872, 2);
}

BOOL func_61(int* piParam0) // Position - 0xDED (3565)
{
	if (!func_39(piParam0))
		return true;

	if (!func_70(piParam0))
		return true;

	if (!func_69(piParam0->f_2))
		return true;

	if (func_68(PLAYER::PLAYER_ID(), true, true))
		return true;

	if (func_67(PLAYER::PLAYER_ID()))
		return true;

	if (func_64(PLAYER::PLAYER_ID()))
		return true;

	if (func_62(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_62(Player plParam0) // Position - 0xE60 (3680)
{
	if (plParam0 > -1)
	{
		if (Global_2657994[plParam0 /*467*/].f_249 > -1)
			if (func_63(Global_2657994[plParam0 /*467*/].f_249) == 4)
				return true;
	
		if (IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 4))
			return true;
	}

	return false;
}

int func_63(int iParam0) // Position - 0xEA9 (3753)
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	}

	return 6;
}

BOOL func_64(Player plParam0) // Position - 0x11EC (4588)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_324, 3);

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x121D (4637)
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
				if (player == Global_2672942.f_3)
					return Global_2672942.f_2;
				else if (Global_2657994[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x127D (4733)
{
	return -1;
}

BOOL func_67(Player plParam0) // Position - 0x1286 (4742)
{
	if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 14))
		return true;

	if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 11))
		return true;

	return false;
}

BOOL func_68(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12BF (4799)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 1))
			return true;

	if (bParam2)
		if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1)
			return true;

	return false;
}

BOOL func_69(int iParam0) // Position - 0x1323 (4899)
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case 239897677:
		case joaat("terbyte"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_70(int* piParam0) // Position - 0x134F (4943)
{
	return ENTITY::DOES_ENTITY_EXIST(piParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(piParam0->f_1, false);
}

void func_71(int* piParam0) // Position - 0x136D (4973)
{
	BOOL flag;
	BOOL flag2;
	Ped pedInVehicleSeat;

	flag = func_9(piParam0, 4);
	flag2 = func_9(piParam0, 0);
	func_82(piParam0);

	if (flag)
		func_25(piParam0, 3);
	else
		func_5(piParam0, 3);

	if (flag2)
		func_25(piParam0, 1);
	else
		func_5(piParam0, 1);

	if (func_39(piParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			piParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (func_70(piParam0))
			{
				piParam0->f_2 = ENTITY::GET_ENTITY_MODEL(piParam0->f_1);
			
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					func_25(piParam0, 2);
			}
		}
	}

	if (func_70(piParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(piParam0->f_1, -1, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false) && PED::IS_PED_A_PLAYER(pedInVehicleSeat))
			{
				piParam0->f_3 = pedInVehicleSeat;
			
				if (pedInVehicleSeat == PLAYER::PLAYER_PED_ID())
				{
					func_25(piParam0, 4);
				
					if (!func_9(piParam0, 3))
						func_25(&(piParam0->f_6), 6);
				}
			}
		}
	
		if (func_39(piParam0))
			piParam0->f_4 = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_56(piParam0))
			if (func_80() && func_74(piParam0))
				func_25(piParam0, 0);
		else
			func_72(piParam0);
	}

	if (func_49(piParam0))
		piParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_72(int* piParam0) // Position - 0x14C4 (5316)
{
	if (ENTITY::DOES_ENTITY_EXIST(piParam0->f_3) && func_73(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(piParam0->f_3)))
		func_25(piParam0, 0);
	else
		func_5(piParam0, 0);

	return;
}

BOOL func_73(Player plParam0) // Position - 0x14F9 (5369)
{
	return plParam0 != -1 && IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_872, 1);
}

BOOL func_74(int* piParam0) // Position - 0x1518 (5400)
{
	BOOL flag;

	flag = func_79();

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1))
	{
		func_78(piParam0);
	
		switch (piParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				flag = !VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(piParam0->f_1);
				break;
		
			case 239897677:
				flag = !VEHICLE::_ARE_MISSILE_BAYS_DEPLOYED(piParam0->f_1);
				break;
		
			case joaat("terbyte"):
				flag = ENTITY::GET_ENTITY_SPEED(piParam0->f_1) == 0f;
				break;
		}
	}
	else if (func_77(piParam0))
	{
		if (func_76(piParam0))
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(piParam0->f_1);
	}
	else
	{
		func_75(piParam0);
	}

	return flag;
}

void func_75(int* piParam0) // Position - 0x15AC (5548)
{
	func_25(&(piParam0->f_6), 4);
	piParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_76(int* piParam0) // Position - 0x15C7 (5575)
{
	return MISC::GET_GAME_TIMER() - piParam0->f_6.f_1 >= 200;
}

BOOL func_77(int* piParam0) // Position - 0x15DD (5597)
{
	return func_9(&(piParam0->f_6), 4);
}

void func_78(int* piParam0) // Position - 0x15EE (5614)
{
	func_5(&(piParam0->f_6), 4);
	return;
}

BOOL func_79() // Position - 0x15FF (5631)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872, 1);
}

BOOL func_80() // Position - 0x1617 (5655)
{
	return !func_31(true);
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x1625 (5669)
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

void func_82(int* piParam0) // Position - 0x16AA (5802)
{
	*piParam0 = 0;
	piParam0->f_1 = 0;
	piParam0->f_3 = 0;
	piParam0->f_2 = 0;
	piParam0->f_4 = -1;
	return;
}

BOOL func_83() // Position - 0x16CA (5834)
{
	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
		return true;

	return false;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x16DE (5854)
{
	if (Global_1575058 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_91())
		return true;

	if (Global_2699022)
		return true;

	if (func_90())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_88())
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1762 (5986)
{
	switch (func_87())
	{
		case 0:
			return func_86();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_86() // Position - 0x1795 (6037)
{
	switch (Global_2699130)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_87() // Position - 0x17B9 (6073)
{
	return Global_33105;
}

BOOL func_88() // Position - 0x17C4 (6084)
{
	return Global_2684721.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x17D3 (6099)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_90() // Position - 0x17EA (6122)
{
	return Global_2696433;
}

BOOL func_91() // Position - 0x17F6 (6134)
{
	return Global_2684721.f_695;
}

BOOL func_92(int* piParam0) // Position - 0x1805 (6149)
{
	BOOL flag;

	func_71(piParam0);

	if (func_70(piParam0))
	{
		if (func_56(piParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1))
			{
				flag = true;
			
				if (func_53())
				{
					flag = false;
				}
				else if (func_93())
				{
					func_48();
					func_5(&(piParam0->f_6), 6);
					flag = false;
				}
			
				if (flag)
					func_51(piParam0, false);
				else
					func_25(&(piParam0->f_6), 3);
			}
		}
		else
		{
			func_25(&(piParam0->f_6), 3);
		}
	}

	return true;
}

BOOL func_93() // Position - 0x187F (6271)
{
	if (func_46() && func_94())
		return true;

	return false;
}

BOOL func_94() // Position - 0x189C (6300)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_872, 6);
}


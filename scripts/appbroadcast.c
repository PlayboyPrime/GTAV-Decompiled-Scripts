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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
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
	TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "CELL_212" /*YES*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_32, "CELL_213" /*NO*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_36, "CELL_39" /*Broadcast*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_40, "CELL_MP_300" /*Activate?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "CELL_MP_301" /*Deactivate?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_48, "CELL_MP_302" /*Unavailable*/, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_47(&uLocal_26);
	func_38();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_36(true);
			func_35();
		}
	
		if (!(Global_21222.f_1 == 9) && Global_21222.f_1 > 3)
		{
			func_3();
		
			if (Global_21222.f_1 != 8)
				if (func_2())
					func_35();
		}
	
		if (func_1())
			func_35();
	}

	return;
}

BOOL func_1() // Position - 0xDE (222)
{
	if (Global_21222.f_1 == 1 || Global_21222.f_1 == 3 || Global_21222.f_1 == 0 || Global_21166 == 1)
	{
		Global_21209 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x121 (289)
{
	if (Global_9698 == 1 || Global_21222.f_1 < 7)
	{
		Global_21209 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x14A (330)
{
	if (func_31(&uLocal_26))
	{
		if (func_17())
		{
			if (Global_2696477)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
				func_10(1080503477, func_11(true, true));
				Global_2696477 = false;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(true);
				func_10(1793940769, func_11(true, true));
				Global_2696477 = true;
			}
		
			func_4(0);
			return;
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0x1A6 (422)
{
	if (func_9())
		return;

	if (Global_21444)
		if (func_8())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
		MISC::SET_BIT(&Global_9076, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22585 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9075, 30);
	else
		MISC::CLEAR_BIT(&Global_9075, 30);

	if (!func_5())
		Global_21222.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x230 (560)
{
	if (Global_21222.f_1 == 1 || Global_21222.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x257 (599)
{
	if (bParam0)
	{
		if (func_7(0))
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

BOOL func_7(int iParam0) // Position - 0x2CB (715)
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

BOOL func_8() // Position - 0x322 (802)
{
	return IS_BIT_SET(Global_1959772, 5);
}

BOOL func_9() // Position - 0x330 (816)
{
	return IS_BIT_SET(Global_1959772, 19);
}

void func_10(int iParam0, int iParam1) // Position - 0x33F (831)
{
	Hash eventData;

	eventData = 800157557;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = iParam0;
	eventData.f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);

	if (!(iParam1 == 0))
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 5, iParam1, eventData);

	return;
}

int func_11(BOOL bParam0, BOOL bParam1) // Position - 0x386 (902)
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
				else if (!func_12(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_12(Player plParam0, int iParam1) // Position - 0x3EB (1003)
{
	BOOL flag;

	if (!func_15(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_13(-1, false) == 8;
	else
		flag = Global_1845225[plParam0 /*874*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_13(int iParam0, BOOL bParam1) // Position - 0x444 (1092)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_14();

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

int func_14() // Position - 0x485 (1157)
{
	return Global_1574927;
}

BOOL func_15(Player plParam0) // Position - 0x491 (1169)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4B3 (1203)
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

BOOL func_17() // Position - 0x513 (1299)
{
	if (!func_25(PLAYER::PLAYER_ID(), true) && func_18())
		return true;

	return false;
}

BOOL func_18() // Position - 0x536 (1334)
{
	if (!func_19())
		return false;

	return true;
}

BOOL func_19() // Position - 0x54B (1355)
{
	if (Global_1574612)
		return true;

	if (func_24())
		return true;

	if (func_23())
		return true;

	return func_20(120, -1);
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x57B (1403)
{
	Hash statHash;
	int outValue;

	statHash = func_21(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_21(int iParam0, int iParam1) // Position - 0x59F (1439)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_22(iParam1));
}

int func_22(int iParam0) // Position - 0x5B4 (1460)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_14();
	
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

BOOL func_23() // Position - 0x5E8 (1512)
{
	return Global_1575074;
}

BOOL func_24() // Position - 0x5F4 (1524)
{
	return Global_1575076;
}

BOOL func_25(Player plParam0, BOOL bParam1) // Position - 0x600 (1536)
{
	if (func_30() != 0)
		return func_29(plParam0) != 0;

	return func_26(plParam0, bParam1, false);
}

BOOL func_26(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x627 (1575)
{
	if (bParam1)
		if (func_27(plParam0))
			return 1;

	!bParam2;

	if (Global_1845225[plParam0 /*874*/] == -1)
		return 0;

	return 1;
}

BOOL func_27(Player plParam0) // Position - 0x659 (1625)
{
	return func_28(plParam0);
}

BOOL func_28(Player plParam0) // Position - 0x667 (1639)
{
	return IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_11.f_1, 0);
}

int func_29(Player plParam0) // Position - 0x67E (1662)
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return Global_2658016[plParam0 /*467*/].f_1;

	return 0;
}

int func_30() // Position - 0x6A0 (1696)
{
	return Global_33281;
}

BOOL func_31(var uParam0) // Position - 0x6AB (1707)
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_21200)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_21191))
		return false;

	func_32();
	Global_21200 = true;
	return true;
}

void func_32() // Position - 0x6EF (1775)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21211, true);
		func_33();
	}

	return;
}

void func_33() // Position - 0x714 (1812)
{
	if (func_34())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_34() // Position - 0x728 (1832)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;

	if (Global_79744)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		num = 1;

	if (Global_4546888 || num)
		return true;

	return true;
}

void func_35() // Position - 0x76F (1903)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_36(BOOL bParam0) // Position - 0x77B (1915)
{
	if (bParam0)
	{
		func_37();
	
		if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
			MISC::SET_BIT(&Global_9076, 16);
	
		Global_21222.f_1 = 1;
	
		if (func_7(0))
			func_4(0);
	}
	else if (Global_21222.f_1 == 1)
	{
		if (!(Global_21222.f_1 == 0))
			Global_21222.f_1 = 3;
	}

	return;
}

void func_37() // Position - 0x7DE (2014)
{
	if (Global_21222.f_1 == 9 || Global_21222.f_1 == 10)
	{
		Global_22638 = 0;
		Global_22634 = 1;
	}

	return;
}

void func_38() // Position - 0x807 (2055)
{
	if (!(Global_21222.f_1 == 7))
		Global_21222.f_1 = 7;

	func_46(Global_21203, "SET_DATA_SLOT_EMPTY", BUILTIN::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);

	if (func_17())
		if (Global_2696477)
			func_45(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &uLocal_44, 0, 0, 0, 0);
		else
			func_45(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &uLocal_40, 0, 0, 0, 0);
	else
		func_45(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &uLocal_48, 0, 0, 0, 0);

	func_46(Global_21203, "DISPLAY_VIEW", BUILTIN::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_42(&uLocal_36);

	if (func_17())
		func_39(13, &uLocal_28, 1, "", 4, &uLocal_32, &uLocal_26);
	else
		func_39(1, "", 1, "", 4, &uLocal_32, &uLocal_26);

	return;
}

void func_39(int iParam0, const char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int* piParam6) // Position - 0x917 (2327)
{
	func_40(2, iParam0, sParam1, 0, piParam6, -1);
	func_40(1, iParam2, sParam3, 1, piParam6, 17);
	func_40(3, iParam4, sParam5, 2, piParam6, -1);
	return;
}

void func_40(int iParam0, int iParam1, char* sParam2, int iParam3, int* piParam4, int iParam5) // Position - 0x947 (2375)
{
	if (iParam1 == 1)
	{
		func_45(Global_21203, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 0f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(piParam4, iParam3);
		func_41(iParam5, false);
		return;
	}

	if (Global_21210)
	{
		func_45(Global_21203, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(piParam4, iParam3);
		func_41(iParam5, true);
		return;
	}

	func_45(Global_21203, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(piParam4, iParam3);
	func_41(iParam5, true);
	return;
}

void func_41(int iParam0, BOOL bParam1) // Position - 0x9E9 (2537)
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		MISC::SET_BIT(&Global_9075, iParam0);
		return;
	}

	MISC::CLEAR_BIT(&Global_9075, iParam0);
	return;
}

void func_42(const char* sParam0) // Position - 0xA14 (2580)
{
	func_43(Global_21203, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_43(int iParam0, char* sParam1, const char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0xA2C (2604)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_44(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_44(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_44(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_44(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_44(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_44(const char* sParam0) // Position - 0xA87 (2695)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xA99 (2713)
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
		func_44(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_44(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_44(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_44(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_44(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_46(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB4C (2892)
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

void func_47(var uParam0) // Position - 0xBAF (2991)
{
	*uParam0 = 0;
	return;
}


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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
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
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
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
	iLocal_49 = -99;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_50, "TRACKID", 32);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::REQUEST_ADDITIONAL_TEXT(&uLocal_50, 1);

	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}

	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (bLocal_59)
		{
			if (iLocal_61 < 101)
			{
				if (SYSTEM::TIMERA() > 30)
				{
					iLocal_61 = iLocal_61 + 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10("CELL_4005");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_61);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_9(Global_21064, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_9(Global_21064, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				iLocal_60 = 1;
				bLocal_59 = false;
			}
		}
	
		if (Global_21083.f_1 != 9)
		{
			switch (Global_21083.f_1)
			{
				case 7:
					func_8();
				
					if (bLocal_58 == false)
						func_6();
					break;
			
				case 8:
					if (func_5(FRONTEND_CONTROL, Global_21051, 0))
					{
						func_4();
						bLocal_59 = false;
						iLocal_60 = 0;
						Global_21061 = 1;
						func_14();
					
						if (Global_21083.f_1 > 3)
							Global_21083.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_3())
				func_2();
		}
		else
		{
			Global_21085 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x1C6 (454)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 3 || Global_21083.f_1 == 0 || Global_21027 == 1)
	{
		Global_21070 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x209 (521)
{
	bLocal_59 = false;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Position - 0x218 (536)
{
	if (Global_9559 == 1 || Global_21083.f_1 < 7)
	{
		Global_21070 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x241 (577)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21072, true);

	return;
}

BOOL func_5(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x262 (610)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

void func_6() // Position - 0x2D4 (724)
{
	if (SYSTEM::TIMERA() > 2200)
	{
		if (Global_21071)
			func_7(Global_21064, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		else
			func_7(Global_21064, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		bLocal_58 = true;
	}

	return;
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x324 (804)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_10(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_10(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_10(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_10(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_10(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_8() // Position - 0x3D7 (983)
{
	if (Global_21061 == 0)
	{
		if (func_5(FRONTEND_CONTROL, Global_21052, 0))
		{
			if (bLocal_58 && iLocal_60 == 0 && bLocal_59 == false)
			{
				iLocal_61 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_10("CELL_4005");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_61);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_9(Global_21064, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
			
				if (Global_21071)
				{
					func_7(Global_21064, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
					func_7(Global_21064, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_21064, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_21064, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			
				func_7(Global_21064, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
				bLocal_59 = true;
				SYSTEM::SETTIMERA(0);
			}
		}
	}

	return;
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4ED (1261)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_10(const char* sParam0) // Position - 0x550 (1360)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_11() // Position - 0x562 (1378)
{
	int playerRadioStationIndex;

	func_13(134, 1);
	playerRadioStationIndex = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();

	switch (func_12(playerRadioStationIndex))
	{
		case 1:
			func_13(82, 1);
			break;
	
		case 2:
			func_13(81, 1);
			break;
	
		default:
			func_13(83, 1);
			break;
	}

	return;
}

int func_12(int iParam0) // Position - 0x5AC (1452)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
	
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
	
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
	}

	return 0;
}

void func_13(int iParam0, int iParam1) // Position - 0x638 (1592)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60068[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60068[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60068[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60068[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_14() // Position - 0x695 (1685)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_10("CELL_4001");
	func_10(&uLocal_18);
	func_10(&(uLocal_18.f_16));
	func_10("CELL_4002");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uLocal_18.f_24);
	func_10("CELL_4003");
	func_10(&(uLocal_18.f_25));
	func_10("CELL_4004");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_9(Global_21064, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);

	if (Global_21071)
	{
		if (bLocal_58)
			func_7(Global_21064, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		else
			func_7(Global_21064, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
	
		func_7(Global_21064, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		if (bLocal_58)
			func_7(Global_21064, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		else
			func_7(Global_21064, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		func_7(Global_21064, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_7(Global_21064, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8919, 17);
	return;
}

void func_15() // Position - 0x7E5 (2021)
{
	iLocal_49 = AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
	TEXT_LABEL_ASSIGN_STRING(&uLocal_18, "", 64);
	TEXT_LABEL_APPEND_INT(&uLocal_18, iLocal_49, 64);
	TEXT_LABEL_APPEND_STRING(&uLocal_18, "S", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_16), "", 32);
	TEXT_LABEL_APPEND_INT(&(uLocal_18.f_16), iLocal_49, 32);
	TEXT_LABEL_APPEND_STRING(&(uLocal_18.f_16), "A", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_25), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 24);

	if (!HUD::DOES_TEXT_LABEL_EXIST(&uLocal_18))
		TEXT_LABEL_ASSIGN_STRING(&uLocal_18, "CELL_195" /*Unknown*/, 64);

	if (!HUD::DOES_TEXT_LABEL_EXIST(&(uLocal_18.f_16)))
	{
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_16), "CELL_195" /*Unknown*/, 32);
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_25), "CELL_195" /*Unknown*/, 24);
	}

	return;
}


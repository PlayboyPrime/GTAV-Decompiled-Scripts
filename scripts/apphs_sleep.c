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
	var uLocal_16 = 15;
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
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	BOOL bLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	BOOL bLocal_42 = 0;
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	bLocal_37 = true;
	func_27();
	func_26();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21239.f_1 != 9)
		{
			switch (Global_21239.f_1)
			{
				case 7:
					func_21();
				
					if (bLocal_37)
						func_18();
					else
						func_12();
					break;
			
				case 8:
					func_21();
					func_12();
				
					if (func_11(FRONTEND_CONTROL, Global_21207, 0))
					{
						func_10();
						Global_21217 = 1;
						func_9(Global_21220, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
					
						if (Global_21239.f_1 > 3)
							Global_21239.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_8())
				func_2();
		}
		else
		{
			Global_21241 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x113 (275)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 3 || Global_21239.f_1 == 0 || Global_21183 == 1)
	{
		Global_21226 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x156 (342)
{
	func_7();

	if (func_4(0))
		func_3();

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x172 (370)
{
	if (Global_9914[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9914[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9914[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9914[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9914[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9914[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_9075, 25);
	MISC::SET_BIT(&Global_9076, 11);
	return;
}

BOOL func_4(int iParam0) // Position - 0x1EF (495)
{
	if (Global_44392 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x211 (529)
{
	return func_6(iParam0, Global_44392);
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x222 (546)
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

void func_7() // Position - 0x403 (1027)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_9914[Global_21239 /*2811*/][0 /*281*/].f_124[2] = 1;
	return;
}

BOOL func_8() // Position - 0x422 (1058)
{
	if (Global_9715 == 1 || Global_21239.f_1 < 7)
	{
		Global_21226 = 1;
		return true;
	}

	return false;
}

void func_9(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x44B (1099)
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

void func_10() // Position - 0x4AE (1198)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21228, true);

	return;
}

BOOL func_11(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x4CF (1231)
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

void func_12() // Position - 0x541 (1345)
{
	if (Global_21217 == 0)
	{
		if (func_11(FRONTEND_CONTROL, Global_21208, 0))
		{
			func_15();
			Global_21217 = 1;
			_UPDATE_CURRENT_PLAYER_CHARACTER();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21220, "GET_CURRENT_SELECTION");
			iLocal_34 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_34))
			{
				BUILTIN::WAIT(0);
			}
		
			Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_259 = uLocal_16[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_34)];
			func_13(Global_21220, "SET_HEADER", &Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_7[Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (Global_9914[Global_21239 /*2811*/][0 /*281*/].f_259 == 2)
				func_9(Global_21220, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			else
				func_9(Global_21220, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		
			if (func_4(0))
				func_3();
		}
	}

	return;
}

void func_13(int iParam0, char* sParam1, const char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x638 (1592)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_14(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_14(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_14(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_14(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_14(const char* sParam0) // Position - 0x693 (1683)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_15() // Position - 0x6A5 (1701)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21228, true);
		func_16();
	}

	return;
}

void func_16() // Position - 0x6CA (1738)
{
	if (func_17())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_17() // Position - 0x6DE (1758)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;

	if (Global_79768)
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

void func_18() // Position - 0x725 (1829)
{
	Global_21217 = 1;
	iLocal_36 = 0;
	bLocal_37 = false;
	func_19();
	return;
}

void func_19() // Position - 0x73B (1851)
{
	var unk;
	int i;
	int num;
	int num2;

	func_9(Global_21220, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	iLocal_32 = 0;
	unk = 15;

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
		num2 = 9;
		Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_84[num2] = 5000;
	
		while (num < 9)
		{
			if (Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_124[num] == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_84[num] < Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_84[num2])
					{
						num2 = num;
						func_20(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_104[num2]), -1f, -1f, &Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[i] = num2;
		unk[num2] = 1;
	
		if (Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_124[i] == 1)
			iLocal_32 = iLocal_32 + 1;
	}

	func_9(Global_21220, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_21220, "SET_HEADER", &Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_7[Global_9914[Global_21239 /*2811*/][iLocal_36 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_21227)
	{
		func_20(Global_21220, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_20(Global_21220, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_21220, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_21220, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_21220, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9075, 17);
	return;
}

void func_20(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x942 (2370)
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
		func_14(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_14(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_14(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_14(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_14(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_21() // Position - 0x9F5 (2549)
{
	if (bLocal_42)
		if (BUILTIN::TIMERA() > 50)
			bLocal_42 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (func_11(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, 0))
		{
			if (iLocal_33 > 0)
				iLocal_33 = iLocal_33 - 1;
		
			func_24();
		}
	
		if (func_11(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, 0))
		{
			iLocal_33 = iLocal_33 + 1;
		
			if (iLocal_33 == iLocal_32)
				iLocal_33 = 0;
		
			func_22();
		}
	}

	if (bLocal_42 == false)
	{
		if (func_11(FRONTEND_CONTROL, Global_21215, 0))
		{
			if (iLocal_33 > 0)
				iLocal_33 = iLocal_33 - 1;
		
			func_24();
			bLocal_42 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_11(FRONTEND_CONTROL, Global_21216, 0))
		{
			iLocal_33 = iLocal_33 + 1;
		
			if (iLocal_33 == iLocal_32)
				iLocal_33 = 0;
		
			func_22();
			bLocal_42 = true;
			BUILTIN::SETTIMERA(0);
		}
	}

	return;
}

void func_22() // Position - 0xAA2 (2722)
{
	func_9(Global_21220, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21228, true);
	func_23();
	return;
}

void func_23() // Position - 0xADD (2781)
{
	if (func_17())
		if (Global_21466 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_24() // Position - 0xB00 (2816)
{
	func_9(Global_21220, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21228, true);
	func_25();
	return;
}

void func_25() // Position - 0xB3B (2875)
{
	if (func_17())
		if (Global_21466 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

void func_26() // Position - 0xB5E (2910)
{
	var unk;
	int value;
	int num;
	int num2;

	iLocal_32 = 0;
	unk = 15;
	value = 0;
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	while (value < 9)
	{
		num = 0;
		num2 = 9;
		Global_9914[Global_21239 /*2811*/][num2 /*281*/] = 5000;
	
		while (num < 9)
		{
			if (Global_9914[Global_21239 /*2811*/][num /*281*/].f_280 == 1)
			{
				if (unk[num] == 0)
				{
					if (num == 0)
					{
						if (Global_9914[Global_21239 /*2811*/][num /*281*/] < Global_9914[Global_21239 /*2811*/][num2 /*281*/])
						{
							num2 = num;
							func_20(Global_21220, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(2), BUILTIN::TO_FLOAT(value), -1f, -1f, -1f, &(Global_9914[Global_21239 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[value] = num2;
		unk[num2] = 1;
	
		if (Global_9914[Global_21239 /*2811*/][value /*281*/].f_280 == 1)
			iLocal_32 = iLocal_32 + 1;
	
		value = value + 1;
	}

	func_9(Global_21220, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_21220, "SET_HEADER", "CELL_16" /*Settings*/, 0, 0, 0, 0);

	if (Global_21227)
	{
		func_20(Global_21220, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_20(Global_21220, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_21220, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_21220, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_21220, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9075, 17);
	return;
}

void func_27() // Position - 0xCF9 (3321)
{
	if (Global_44392 != 15)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_9914[Global_21239 /*2811*/][0 /*281*/].f_124[2] = 0;
	}

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xD20 (3360)
{
	if (func_35(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xDC2 (3522)
{
	func_30();
	return Global_114370.f_2367.f_539.f_4321;
}

void func_30() // Position - 0xDDB (3547)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_31(character) && !func_35(14) || Global_113318)
			{
				if (Global_114370.f_2367.f_539.f_4321 != character && func_31(Global_114370.f_2367.f_539.f_4321))
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

BOOL func_31(eCharacter echParam0) // Position - 0xED8 (3800)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xEE4 (3812)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xF21 (3873)
{
	if (func_31(character))
		return func_34(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_34(eCharacter echParam0) // Position - 0xF46 (3910)
{
	return Global_2241[echParam0 /*29*/];
}

BOOL func_35(int iParam0) // Position - 0xF55 (3925)
{
	return Global_44392 == iParam0;
}


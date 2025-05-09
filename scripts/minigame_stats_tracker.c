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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	const char* sScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 1132396544;
	var uScriptParam_3 = 1132396544;
	var uScriptParam_4 = 1132396544;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1082130432;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 8;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = -1;
	var uScriptParam_67 = 1092616192;
#endregion

void main() // Position - 0x0 (0)
{
	int i;

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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_19();

	while (true)
	{
		switch (iLocal_43)
		{
			case 0:
				iLocal_44 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mission_complete");
				iLocal_43 = 1;
				break;
		
			case 1:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_44))
					iLocal_43 = 2;
				break;
		
			case 2:
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_44, "SET_MISSION_TITLE", sScriptParam_0, sScriptParam_0.f_1, 0, 0, 0);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_44, "SET_MISSION_TITLE_COLOUR", sScriptParam_0.f_2, sScriptParam_0.f_2, sScriptParam_0.f_2, -1082130432, -1082130432);
			
				if (sScriptParam_0.f_5.f_1 != -1f && !MISC::IS_STRING_NULL(sScriptParam_0.f_5.f_2))
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_44, "SET_TOTAL", BUILTIN::TO_FLOAT(sScriptParam_0.f_5), sScriptParam_0.f_5.f_1, -1f, -1f, -1f, sScriptParam_0.f_5.f_2, 0, 0, 0, 0);
			
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_44, "SET_MEDAL", BUILTIN::TO_FLOAT(sScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_44, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			
				for (i = 0; i < sScriptParam_0.f_66 + 1; i = i + 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_44, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_0.f_9[i /*7*/]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_0.f_9[i /*7*/].f_1);
				
					if (sScriptParam_0.f_9[i /*7*/].f_2 == 4)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(BUILTIN::FLOOR(sScriptParam_0.f_9[i /*7*/].f_3 * 1000f), 6);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					
						if (!MISC::IS_STRING_NULL(sScriptParam_0.f_9[i /*7*/].f_5))
							func_18(sScriptParam_0.f_9[i /*7*/].f_5);
					}
					else if (sScriptParam_0.f_9[i /*7*/].f_2 == 8)
					{
						if (!MISC::IS_STRING_NULL(sScriptParam_0.f_9[i /*7*/].f_5) && !MISC::IS_STRING_NULL(sScriptParam_0.f_9[i /*7*/].f_6))
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sScriptParam_0.f_9[i /*7*/].f_6);
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sScriptParam_0.f_9[i /*7*/].f_5);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_0.f_9[i /*7*/].f_2);
					
						if (sScriptParam_0.f_9[i /*7*/].f_3 % 1f == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(sScriptParam_0.f_9[i /*7*/].f_3);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
							HUD::ADD_TEXT_COMPONENT_FLOAT(sScriptParam_0.f_9[i /*7*/].f_3, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					
						if (sScriptParam_0.f_9[i /*7*/].f_4 % 1f == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(sScriptParam_0.f_9[i /*7*/].f_4);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
							HUD::ADD_TEXT_COMPONENT_FLOAT(sScriptParam_0.f_9[i /*7*/].f_4, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					
						if (!MISC::IS_STRING_NULL(sScriptParam_0.f_9[i /*7*/].f_5))
							func_18(sScriptParam_0.f_9[i /*7*/].f_5);
					
						if (!MISC::IS_STRING_NULL(sScriptParam_0.f_9[i /*7*/].f_6))
							func_18(sScriptParam_0.f_9[i /*7*/].f_6);
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				if (sScriptParam_0.f_5 != 0 && !MISC::IS_STRING_NULL(sScriptParam_0.f_5.f_2))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_44, "SET_TOTAL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_0.f_5);
				
					if (!MISC::IS_STRING_NULL(sScriptParam_0.f_5.f_3))
						func_18(sScriptParam_0.f_5.f_3);
					else
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(sScriptParam_0.f_5.f_1);
				
					func_18(sScriptParam_0.f_5.f_2);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_44, "DRAW_MENU_LIST");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_12(1);
				func_9(&uLocal_45);
			
				if (!func_8(Global_114162.f_19101, 4096))
					func_6(&(Global_114162.f_19101), 4096);
			
				iLocal_43 = 3;
				break;
		
			case 3:
				if (func_2(&uLocal_45) > sScriptParam_0.f_67 && sScriptParam_0.f_67 != -1f || CAM::IS_SCREEN_FADED_OUT() || Global_33250)
				{
					func_19();
				}
				else
				{
					func_1(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_44, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
				
					if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_HELP_TEXT))
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_19();
	return;
}

void func_1(int iParam0) // Position - 0x447 (1095)
{
	Global_79825 = iParam0;
	Global_79826 = iParam0;
	return;
}

float func_2(int* piParam0) // Position - 0x45B (1115)
{
	if (func_5(piParam0))
		if (func_4(piParam0))
			return piParam0->f_2;
		else
			return func_3(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_3(BOOL bParam0) // Position - 0x497 (1175)
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = BUILTIN::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_4(int* piParam0) // Position - 0x4EF (1263)
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_5(int* piParam0) // Position - 0x4FC (1276)
{
	return IS_BIT_SET(*piParam0, 1);
}

void func_6(int iParam0, int iParam1) // Position - 0x509 (1289)
{
	func_7(iParam0, iParam1);
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x519 (1305)
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x52A (1322)
{
	return iParam0 && iParam1 != false;
}

void func_9(int* piParam0) // Position - 0x539 (1337)
{
	if (!func_5(piParam0))
		func_10(piParam0);

	return;
}

void func_10(int* piParam0) // Position - 0x551 (1361)
{
	func_11(piParam0, 0f);
	return;
}

void func_11(int* piParam0, float fParam1) // Position - 0x560 (1376)
{
	piParam0->f_1 = func_3(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_12(int iParam0) // Position - 0x58B (1419)
{
	if (func_17())
		return;

	if (Global_21301)
		if (func_16())
			func_14(true, true);
		else
			func_14(false, false);

	if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22442 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_13())
		Global_21083.f_1 = 3;

	return;
}

BOOL func_13() // Position - 0x615 (1557)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

void func_14(BOOL bParam0, BOOL bParam1) // Position - 0x63C (1596)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_21301 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21020);
		
			Global_21011 = { Global_21029[Global_21028 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21011);
		}
	}
	else if (Global_21301 == true)
	{
		Global_21301 = false;
		Global_21011 = { Global_21036[Global_21028 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21020);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21011);
	}

	return;
}

BOOL func_15(int iParam0) // Position - 0x6B0 (1712)
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

BOOL func_16() // Position - 0x707 (1799)
{
	return IS_BIT_SET(Global_1958240, 5);
}

BOOL func_17() // Position - 0x715 (1813)
{
	return IS_BIT_SET(Global_1958240, 19);
}

void func_18(const char* sParam0) // Position - 0x724 (1828)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_19() // Position - 0x736 (1846)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_44);
	Global_33250 = false;
	func_1(0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


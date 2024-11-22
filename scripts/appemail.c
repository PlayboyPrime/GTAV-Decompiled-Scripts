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
	int iLocal_16 = 0;
	char* sLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	eCharacter echLocal_53 = CHAR_MICHAEL;
	BOOL bLocal_54 = 0;
	BOOL bLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	BOOL bLocal_61 = 0;
	BOOL bLocal_62 = 0;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	char* sLocal_67 = 0;
	float fLocal_68 = 0f;
	BOOL bLocal_69 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_58 = -1;
	iLocal_59 = -1;
	fLocal_68 = 0f;
	bLocal_69 = true;

	if (Global_79389)
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	echLocal_53 = _GET_CURRENT_PLAYER_CHARACTER();
	HUD::REQUEST_ADDITIONAL_TEXT("email", 1);

	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}

	Global_23319 = false;
	Global_23320 = false;
	Global_20930.f_1 = 8;
	Global_23320 = true;
	Global_45259 = 1;

	if (Global_20912)
	{
		func_77(false);
		func_76(true);
		func_74(false);
	}

	SYSTEM::SETTIMERB(0);
	uLocal_45 = { Global_20883[Global_20875 /*3*/] };
	fLocal_48 = { uLocal_45 };
	fLocal_48 = fLocal_48 - 10f;
	fLocal_48.f_1 = fLocal_48.f_1 + 20f;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20930.f_1 != 9)
		{
			if (Global_23320 && !Global_23319)
				func_72();
			else if (Global_23319)
				func_67();
		
			if (!bLocal_54)
			{
				bLocal_54 = true;
			}
			else if (Global_20912)
			{
				if (!bLocal_55)
				{
					bLocal_55 = true;
					func_65(Global_20911, echLocal_53);
					func_64(Global_20911, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_63(Global_20911, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_45260)
					{
						Global_45260 = false;
						bLocal_56 = true;
					}
				
					if (bLocal_56)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
					
						if (iLocal_58 == -1)
						{
							if (bLocal_69)
							{
								bLocal_69 = false;
								fLocal_68 = 0f;
							}
						
							func_63(Global_20911, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							num = func_65(Global_20911, echLocal_53);
							func_64(Global_20911, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							bLocal_57 = false;
						
							if (num > 0)
								func_77(true);
							else
								func_77(false);
						
							func_76(true);
							func_74(false);
							func_63(Global_20911, "DISPLAY_VIEW", 8f, fLocal_68, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_63(Global_20911, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_63(Global_20911, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_76(true);
							func_62();
						
							if (iLocal_59 == -1)
							{
								func_60(echLocal_53, iLocal_58);
								func_55(Global_20911, echLocal_53, iLocal_58);
								Global_23346 = false;
								bLocal_66 = func_53(echLocal_53, iLocal_58);
							
								if (bLocal_66)
								{
									sLocal_67 = func_50(echLocal_53, iLocal_58);
								
									if (!func_49(37))
									{
										switch (func_47("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/))
										{
											case 2:
												func_44("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_43(37);
												break;
										}
									}
									else if (MISC::IS_PC_VERSION())
									{
										if (!IS_BIT_SET(Global_4543084, 17))
										{
											MISC::SET_BIT(&Global_4543084, 17);
											_DISPLAY_HELP_TEXT("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/, -1);
										}
									}
								
									func_74(true);
								}
								else
								{
									if (!func_49(38))
									{
										switch (func_47("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/))
										{
											case 2:
												func_44("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_43(38);
												break;
										}
									}
								
									func_74(false);
								}
							
								func_63(Global_20911, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_63(Global_20911, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_63(Global_20911, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_63(Global_20911, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_39(Global_20911, echLocal_53, iLocal_58);
								func_63(Global_20911, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
					
						bLocal_56 = false;
					}
					else
					{
						func_16();
					}
				}
			}
		
			if (!(echLocal_53 == _GET_CURRENT_PLAYER_CHARACTER()))
			{
				Global_45259 = 0;
				func_4();
			}
		}
	
		if (func_3())
		{
			Global_23319 = false;
			Global_23320 = false;
			Global_45259 = 0;
			func_1(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}

	return;
}

void func_1(int iParam0) // Position - 0x48F
{
	if (func_2())
		if (iParam0 == 1)
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(true);
		else if (Global_20930.f_1 > 3)
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(false);

	return;
}

BOOL func_2() // Position - 0x4BA
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag;

	if (Global_79389)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4543362 || flag)
		return true;

	return true;
}

BOOL func_3() // Position - 0x501
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 3 || Global_20930.f_1 == 0 || Global_20874 == 1)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x544
{
	if (Global_54568 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_15(Global_54568));
		Global_54568 = -1;
	}

	Global_45259 = 0;

	if (Global_20930.f_1 > 4)
	{
		Global_20930.f_1 = 6;
		func_5();
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_5() // Position - 0x57D
{
	int value;
	var unk;

	if (Global_20913 == 1)
		return;

	if (Global_20930.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		if (Global_79389)
			return;
	
		SYSTEM::WAIT(0);
	}

	switch (Global_20930.f_1)
	{
		case 6:
			func_63(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_12(Global_9405);
		
			if (Global_9405 == 1)
			{
				func_63(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_63(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
		
			if (Global_20918)
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21147 == 0)
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
					if (Global_20918)
						func_11(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_11(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20918)
					func_11(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_11(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_8800, 17);
			}
		
			if (Global_79389)
			{
				value = Global_20934;
				func_63(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
				func_63(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_63(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_11(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		
			if (IS_BIT_SET(Global_8800, 20))
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20873)
					func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20929 == 1)
			{
				func_10();
				func_63(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /*CHAR_DEFAULT*/);
					func_9("CELL_217" /*INCOMING CALL*/);
					func_9("CELL_217" /*INCOMING CALL*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_8(Global_8115, Global_20930) == 0)
				{
					func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
			
				func_63(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_63(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
			
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /*CHAR_DEFAULT*/);
					func_9("CELL_219" /*CONNECTED*/);
					func_9("CELL_219" /*CONNECTED*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22544)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_8(Global_8115, Global_20930) == 0)
					{
						func_63(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_63(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &unk, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
			
				func_63(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_6();
			break;
	
		default:
			break;
	}

	return;
}

void func_6() // Position - 0xB4C
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		func_7();
	
		if (Global_20929 == 1)
		{
			if (Global_20918)
				func_11(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_11(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_22333)
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8800, 20))
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20918)
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_11(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			func_11(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_11(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		
			if (IS_BIT_SET(Global_8800, 20))
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20873)
					func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_11(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_7() // Position - 0xCCA
{
	if (Global_79389)
	{
		func_11(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}

	return;
}

int func_8(int iParam0, int iParam1) // Position - 0xCFA
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_9(char* sParam0) // Position - 0xD24
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_10() // Position - 0xD36
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930 == 0)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == 1)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == 2)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == 3)
		{
			switch (Global_4543360)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

void func_11(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xFAD
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
		func_9(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_9(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_9(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_9(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_9(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_12(int iParam0) // Position - 0x1060
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

	Global_23354 = 0;
	Global_9405 = iParam0;
	func_14();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_13(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == 0)
						{
							Global_9333[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value = 42;
									Global_21149 = 1;
								}
								else
								{
									value = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696167)
								if (num == 14)
									func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
						
							Global_9369[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == 0)
						{
							Global_9333[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113969.f_14144[j /*104*/].f_24 != 0)
										if (Global_113969.f_14144[j /*104*/].f_28 == 0)
											if (Global_113969.f_14144[j /*104*/].f_99[Global_20930] == 1)
												Global_23354 = Global_23354 + 1;
								}
							
								func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79389)
								{
									value2 = 0;
									value2 = Global_4541818;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541819[k /*104*/].f_24 != 0)
											if (Global_4541819[k /*104*/].f_28 == 0)
												if (Global_4541819[k /*104*/].f_99[Global_20930] == 1)
													value2 = value2 + 1;
									}
								
									func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											value3 = Global_45261;
											break;
									
										case 1:
											value3 = Global_45262;
											break;
									
										case 2:
											value3 = Global_45263;
											break;
									
										default:
											break;
									}
								
									func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8801, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value5 = 42;
									Global_21149 = 1;
								}
								else
								{
									value5 = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8807[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1882108.f_1;
								func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_11(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9369[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_13(int iParam0) // Position - 0x15D5
{
	return Global_44042 == iParam0;
}

void func_14() // Position - 0x15E3
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9369[i] = 0;
	}

	return;
}

char* func_15(int iParam0) // Position - 0x1606
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
	
		case 1:
			return "Epsilon_Cars";
	
		case 2:
			return "Epsilon_Cars";
	
		case 3:
			return "Epsilon_Cars";
	
		case 4:
			return "Epsilon_Cars";
	
		case 5:
			return "Epsilon_Cars";
	
		case 6:
			return "Epsilon_Cars";
	
		case 12:
			return "Assassinations";
	
		case 13:
			return "Assassinations";
	
		case 14:
			return "Assassinations";
	
		case 15:
			return "Assassinations";
	
		case 64:
			return "BSPBadHacker";
	
		case 65:
			return "BPDGoodHacker";
	
		case 66:
			return "BPSMedHacker";
	
		case 75:
			return "email_quarry_bail_bond";
	
		case 76:
			return "email_abandonedfarm_bail_bond";
	
		case 77:
			return "email_mountain_bail_bond";
	
		case 78:
			return "email_hobocamp_bail_bond";
	
		case 80:
			return "email_quarry_bail_bond";
	
		case 81:
			return "email_abandonedfarm_bail_bond";
	
		case 82:
			return "email_mountain_bail_bond";
	
		case 83:
			return "email_hobocamp_bail_bond";
	
		case 205:
			return "hush_foxymama21";
	
		case 209:
			return "hush_alterego";
	
		case 212:
			return "hush_michael";
	
		case 238:
			return "hush_trevor";
	
		default:
		
	}

	return "NULL";
}

void func_16() // Position - 0x1762
{
	BOOL flag;

	if (Global_23346)
	{
		iLocal_58 = 0;
		fLocal_68 = SYSTEM::TO_FLOAT(iLocal_58);
	
		if (func_38(echLocal_53) == 0)
			iLocal_58 = -1;
	
		if (!(iLocal_58 == -1))
		{
			Global_20930.f_1 = 8;
			bLocal_56 = true;
			SYSTEM::SETTIMERB(0);
			func_36();
		}
	
		return;
	}

	if (func_35())
		return;

	if (Global_23319)
		return;

	if (!bLocal_62)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			bLocal_62 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
			SYSTEM::SETTIMERA(0);
			bLocal_69 = true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_58 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERA(0);
			bLocal_69 = true;
		}
	}
	else
	{
		bLocal_62 = false;
	}

	if (!bLocal_63)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			bLocal_63 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
			SYSTEM::SETTIMERB(0);
			bLocal_69 = true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_58 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERB(0);
			bLocal_69 = true;
		}
	}
	else
	{
		bLocal_63 = false;
	}

	if (!bLocal_64)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
		{
			bLocal_64 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
	{
		bLocal_64 = false;
	}

	if (!bLocal_65)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
		{
			bLocal_65 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
	{
		bLocal_65 = false;
	}

	if (!bLocal_61)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_58 == -1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
				iLocal_51 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_51))
				{
					SYSTEM::WAIT(0);
				}
			
				iLocal_52 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_51);
				iLocal_58 = iLocal_52;
			
				if (func_38(echLocal_53) == 0)
					iLocal_58 = -1;
			
				if (!(iLocal_58 == -1))
				{
					if (bLocal_69 == true)
					{
						fLocal_68 = SYSTEM::TO_FLOAT(iLocal_58);
						bLocal_69 = false;
					}
				
					Global_20930.f_1 = 8;
					bLocal_56 = true;
					SYSTEM::SETTIMERB(0);
					func_36();
				}
			}
			else if (iLocal_59 == -1)
			{
				if (func_33(echLocal_53, iLocal_58) && !bLocal_57)
				{
					iLocal_59 = 0;
					bLocal_56 = true;
					SYSTEM::SETTIMERB(0);
					func_36();
				}
			}
			else
			{
				iLocal_59 = 0;
				func_21(echLocal_53, iLocal_58, iLocal_59);
				bLocal_57 = true;
				iLocal_59 = -1;
				bLocal_56 = true;
				func_36();
				SYSTEM::SETTIMERB(0);
			}
		
			bLocal_61 = true;
		}
	}
	else
	{
		bLocal_61 = false;
	}

	if (SYSTEM::TIMERB() > 100)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL))
		{
			flag = false;
		
			if (iLocal_60 == 0)
			{
				if (!(iLocal_58 == -1))
				{
					if (iLocal_59 == -1)
					{
						iLocal_58 = SYSTEM::ROUND(fLocal_68);
						bLocal_66 = false;
						SYSTEM::SETTIMERB(0);
						flag = true;
						func_20();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_59 = -1;
						func_20();
					}
				
					bLocal_56 = true;
				}
				else
				{
					if (func_47("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/) == 0)
						func_43(37);
				
					if (func_47("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/) == 0)
						func_43(38);
				
					if (Global_23320 == false && !Global_23319)
					{
						func_20();
						Global_23319 = true;
						Global_45259 = 0;
					}
				}
			
				iLocal_60 = 1;
			}
		
			if (flag)
				iLocal_58 = -1;
		}
		else
		{
			iLocal_60 = 0;
		}
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION))
	{
		if (bLocal_66)
		{
			if (func_47("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/) == 0)
				func_43(37);
		
			if (func_47("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/) == 0)
				func_43(38);
		
			TEXT_LABEL_ASSIGN_STRING(&Global_76481, sLocal_67, 64);
			func_17(7, 0);
			bLocal_66 = false;
			func_36();
		}
	}

	return;
}

void func_17(int iParam0, int iParam1) // Position - 0x1B46
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_76612 = iParam0;
	flag = iParam1 == 1;
	flag2 = iParam1 == 2;
	flag3 = iParam1 == 3;

	switch (Global_76612)
	{
		case 3:
			Global_76610 = 0;
			break;
	
		case 4:
			Global_76610 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(632911429) > 0)
	{
		if (flag)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1476056117) > 0)
	{
		if (flag2)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(290327540) > 0)
	{
		if (flag3)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1779901043) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return;
	}

	if (Global_79389 && func_19())
		return;

	if (!Global_79389 && func_18())
		return;

	if (Global_79389)
	{
		Global_76463 = iParam1;
	}
	else if (flag)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (flag2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (flag3)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
			SCRIPT::REQUEST_SCRIPT("appImportExport");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
			SCRIPT::REQUEST_SCRIPT("appInternet");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appInternet", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}

	return;
}

BOOL func_18() // Position - 0x1D3A
{
	return Global_76499;
}

BOOL func_19() // Position - 0x1D46
{
	return Global_1928953;
}

void func_20() // Position - 0x1D52
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);

	return;
}

void func_21(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x1D74
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num < -1 && num > 3)
		return;

	for (i = Global_54207[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;
	num3 = Global_54207[num /*120*/].f_18[num2];
	num4 = Global_54207[num /*120*/].f_1[num2];

	if (num4 < 0 || num3 < 0 || !(num4 < 9) || !(num3 < 122))
		return;

	num5 = Global_48594[num3 /*46*/].f_32[num4];

	if (Global_45269[num5 /*12*/].f_4 == 0)
		return;

	Global_54207[num /*120*/].f_35[num2] = 1;
	Global_54207[num /*120*/].f_52[num2] = iParam2;
	func_22(num3, iParam2);
	return;
}

void func_22(int iParam0, int iParam1) // Position - 0x1E6E
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;
	int num5;
	int i;
	int num6;

	if (!Global_48594[iParam0 /*46*/] && !Global_48594[iParam0 /*46*/].f_1)
		return;

	num = Global_48594[iParam0 /*46*/].f_42 - 1;

	if (num < 0)
		return;

	num2 = Global_48594[iParam0 /*46*/].f_32[num];

	if (!(iParam1 < Global_45269[num2 /*12*/].f_4))
		return;

	num3 = Global_45269[num2 /*12*/].f_5[iParam1 /*4*/].f_1;
	flag = false;

	if (Global_48594[iParam0 /*46*/].f_31 < Global_48594[iParam0 /*46*/].f_30 - 1)
	{
		num4 = Global_48594[iParam0 /*46*/].f_8[Global_48594[iParam0 /*46*/].f_31];
	
		if (num3 == num4)
			flag = true;
	}

	if (!flag)
	{
		if (num3 > -1)
		{
			func_32(iParam0, num3);
			num5 = Global_48594[iParam0 /*46*/].f_2;
			i = 0;
			num6 = Global_45269[num3 /*12*/].f_2;
		
			for (i = 0; i < num5; i = i + 1)
			{
				if (!(i == num6))
					func_26(Global_48594[iParam0 /*46*/].f_3[i], iParam0, false, false, false);
			}
		}
	}

	if (Global_45269[num2 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
		func_23(Global_45269[num2 /*12*/].f_5[iParam1 /*4*/].f_3, false);

	if (Global_45269[num2 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_48594[iParam0 /*46*/].f_1 = 1;
	}
	else if (num3 > -1)
	{
		Global_48594[iParam0 /*46*/].f_45 = Global_45269[num3 /*12*/].f_10;
		Global_48594[iParam0 /*46*/].f_43 = Global_45269[num3 /*12*/].f_11;
	}
	else
	{
		Global_48594[iParam0 /*46*/].f_45 = 0;
	}

	if (Global_48594[iParam0 /*46*/].f_43 < 30000)
		Global_48594[iParam0 /*46*/].f_43 = 30000;

	return;
}

void func_23(int iParam0, BOOL bParam1) // Position - 0x2011
{
	Global_45260 = true;

	if (!Global_48594[iParam0 /*46*/] && !Global_48594[iParam0 /*46*/].f_1)
	{
		Global_48594[iParam0 /*46*/] = true;
		func_25(iParam0, bParam1);
	}
	else
	{
		func_24(iParam0);
		func_23(iParam0, bParam1);
	}

	return;
}

void func_24(int iParam0) // Position - 0x2058
{
	Global_48594[iParam0 /*46*/] = false;
	Global_48594[iParam0 /*46*/].f_31 = 0;
	Global_48594[iParam0 /*46*/].f_42 = 0;
	Global_48594[iParam0 /*46*/].f_45 = 0;
	Global_48594[iParam0 /*46*/].f_43 = 0;
	Global_48594[iParam0 /*46*/].f_1 = 0;
	return;
}

void func_25(int iParam0, BOOL bParam1) // Position - 0x209A
{
	int num;
	int num2;
	int num3;
	int i;

	if (!Global_48594[iParam0 /*46*/] && !Global_48594[iParam0 /*46*/].f_1)
		return;

	if (Global_48594[iParam0 /*46*/].f_31 == Global_48594[iParam0 /*46*/].f_30)
	{
		num = Global_48594[iParam0 /*46*/].f_42 - 1;
	
		if (num < 0)
			return;
	
		if (Global_45269[Global_48594[iParam0 /*46*/].f_32[num] /*12*/].f_4 == 0)
			Global_48594[iParam0 /*46*/].f_1 = 1;
	
		return;
	}

	if (Global_48594[iParam0 /*46*/].f_1)
		return;

	num2 = Global_48594[iParam0 /*46*/].f_8[Global_48594[iParam0 /*46*/].f_31];
	Global_48594[iParam0 /*46*/].f_31 = Global_48594[iParam0 /*46*/].f_31 + 1;
	func_32(iParam0, num2);
	Global_48594[iParam0 /*46*/].f_45 = Global_45269[num2 /*12*/].f_10;
	Global_48594[iParam0 /*46*/].f_43 = Global_45269[num2 /*12*/].f_11;
	num3 = Global_48594[iParam0 /*46*/].f_2;
	func_26(Global_45269[num2 /*12*/].f_3, iParam0, false, false, bParam1);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_48594[iParam0 /*46*/].f_3[i] != Global_45269[num2 /*12*/].f_2 && Global_48594[iParam0 /*46*/].f_3[i] != Global_45269[num2 /*12*/].f_3)
			func_26(Global_48594[iParam0 /*46*/].f_3[i], iParam0, false, false, bParam1);
	}

	if (Global_48594[iParam0 /*46*/].f_31 == Global_48594[iParam0 /*46*/].f_30)
	{
		if (Global_45269[Global_48594[iParam0 /*46*/].f_32[Global_48594[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0)
		{
			Global_48594[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}

	return;
}

void func_26(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2236
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	BOOL i;
	BOOL j;
	int num6;
	int k;
	int num7;
	int num8;

	if (!(iParam0 < 3))
		return;

	num = -1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "UNSET", 64);

	if (!bParam2)
	{
		num4 = Global_48594[iParam1 /*46*/].f_42 - 1;
	
		if (num4 < 0)
			return;
	
		num5 = Global_48594[iParam1 /*46*/].f_32[num4];
		num3 = num5;
		unk = { func_31(Global_45269[num5 /*12*/].f_1) };
	
		if (Global_45269[num5 /*12*/].f_2 == iParam0 && !(Global_45269[num5 /*12*/].f_3 == iParam0))
			return;
	
		num2 = Global_45269[num5 /*12*/].f_2;
		num = Global_54207[iParam0 /*120*/];
	
		for (i = false; num >= 16; i = true)
		{
			num = num - 16;
		}
	
		if (i)
		{
			if (!Global_54207[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_45261 = Global_45261 - 1;
					
						if (Global_45261 < 0)
							Global_45261 = 0;
						break;
				
					case 1:
						Global_45262 = Global_45262 - 1;
					
						if (Global_45262 < 0)
							Global_45262 = 0;
						break;
				
					case 2:
						Global_45263 = Global_45263 - 1;
					
						if (Global_45263 < 0)
							Global_45263 = 0;
						break;
				}
			}
		}
	
		Global_54207[iParam0 /*120*/].f_18[num] = iParam1;
		Global_54207[iParam0 /*120*/].f_1[num] = num4;
		Global_54207[iParam0 /*120*/].f_35[num] = 0;
		Global_54207[iParam0 /*120*/].f_86[num] = false;
		Global_54207[iParam0 /*120*/].f_69[num] = false;
		Global_54207[iParam0 /*120*/] = Global_54207[iParam0 /*120*/] + 1;
	}
	else
	{
		num = Global_54207[iParam0 /*120*/];
	
		for (j = false; num >= 16; j = true)
		{
			num = num - 16;
		}
	
		if (j)
		{
			if (!Global_54207[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_45261 = Global_45261 - 1;
					
						if (Global_45261 < 0)
							Global_45261 = 0;
						break;
				
					case 1:
						Global_45262 = Global_45262 - 1;
					
						if (Global_45262 < 0)
							Global_45262 = 0;
						break;
				
					case 2:
						Global_45263 = Global_45263 - 1;
					
						if (Global_45263 < 0)
							Global_45263 = 0;
						break;
				}
			}
		}
	
		num6 = -1;
		k = 0;
	
		for (k = 0; k < 7; k = k + 1)
		{
			if (Global_54569[k /*203*/].f_1 == iParam1 && Global_54569[k /*203*/].f_9 > 0)
				num6 = k;
		}
	
		if (num6 == -1)
			return;
	
		Global_54207[iParam0 /*120*/].f_18[num] = Global_54569[num6 /*203*/].f_1;
		Global_54207[iParam0 /*120*/].f_1[num] = Global_54569[num6 /*203*/].f_9 - 1;
		Global_54207[iParam0 /*120*/].f_35[num] = 0;
		Global_54207[iParam0 /*120*/].f_86[num] = true;
		Global_54207[iParam0 /*120*/].f_69[num] = false;
		Global_54207[iParam0 /*120*/] = Global_54207[iParam0 /*120*/] + 1;
		num7 = Global_54207[iParam0 /*120*/].f_1[num];
		num8 = Global_54569[num6 /*203*/].f_10[num7 /*48*/];
		num3 = num8;
		num2 = Global_45269[num8 /*12*/].f_2;
	
		if (Global_54569[num6 /*203*/].f_10[Global_54569[num6 /*203*/].f_9 - 1 /*48*/].f_1)
			TEXT_LABEL_COPY(&unk, { Global_54569[num6 /*203*/].f_10[Global_54569[num6 /*203*/].f_9 - 1 /*48*/].f_2 }, 16);
		else
			unk = { func_31(Global_45269[num8 /*12*/].f_1) };
	}

	if (!bParam4)
	{
		if (!Global_54207[iParam0 /*120*/].f_69[num] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_27(0, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 1:
					if (num3 == 249)
						func_27(CHAR_FRANKLIN, num2, num3, "PW_FEED_EM_1" /*You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented...*/, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					else
						func_27(CHAR_FRANKLIN, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 2:
					func_27(CHAR_TREVOR, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}

	return;
}

void func_27(eCharacter echParam0, int iParam1, int iParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11, const char* sParam12, const char* sParam13) // Position - 0x260B
{
	eCharacter character;
	BOOL flag;
	var txdName;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	character = _GET_CURRENT_PLAYER_CHARACTER();
	flag = false;
	TEXT_LABEL_ASSIGN_STRING(&txdName, func_30(iParam1, &flag), 64);

	if (character == echParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /*Dear Mr. De Santa, please find below your weekly income from owned properties:~n~*/);
				break;
		
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /*Dear Mr. Clinton, please find below your weekly income from owned properties:~n~*/);
				break;
		
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /*Dear Mr. Philips, please find below your weekly income from owned properties:~n~*/);
				break;
		
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				break;
		}
	
		if (flag)
			func_28(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)), 0));
		else
			func_28(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)), 0));
	
		switch (Global_20930)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Michael", 24);
				Global_45261 = Global_45261 + 1;
			
				if (Global_45261 > 16)
					Global_45261 = 16;
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Trevor", 24);
				Global_45263 = Global_45263 + 1;
			
				if (Global_45263 > 16)
					Global_45263 = 16;
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Franklin", 24);
				Global_45262 = Global_45262 + 1;
			
				if (Global_45262 > 16)
					Global_45262 = 16;
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Default", 24);
				break;
		}
	
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20919, true);
	}

	return;
}

void func_28(int iParam0) // Position - 0x27F3
{
	Global_45264[Global_45268] = iParam0;
	Global_23344 = 1;
	Global_23343 = iParam0;
	Global_45268 = Global_45268 + 1;

	if (Global_45268 == 3)
		Global_45268 = 0;

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x2821
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /*Mike*/;
	
		case 3:
			return "EMSTR_3" /*Jimmy*/;
	
		case 1:
			return "EMSTR_6" /*Franklin*/;
	
		case 2:
			return "EMSTR_9" /*Trevor*/;
	
		case 4:
			return "EMSTR_12" /*Marnie*/;
	
		case 5:
			return "EMSTR_29" /*Epsilon Store*/;
	
		case 6:
			return "EMSTR_36" /*Maude*/;
	
		case 7:
			return "EMSTR_39" /*Lester*/;
	
		case 8:
			return "EMSTR_52" /*Maze Bank*/;
	
		case 9:
			return "EMSTR_55" /*Fleeca*/;
	
		case 10:
			return "EMSTR_58" /*Bank of Liberty*/;
	
		case 11:
			return "EMSTR_78" /*Legendary Motorsport Sales*/;
	
		case 12:
			return "EMSTR_81" /*Elitas Sales*/;
	
		case 13:
			return "EMSTR_84" /*Cache & Carry*/;
	
		case 14:
			return "EMSTR_87" /*Dock Tease*/;
	
		case 15:
			return "EMSTR_106" /*LSC*/;
	
		case 16:
			return "EMSTR_114" /*AMMU-NATION*/;
	
		case 17:
			return "EMSTR_142" /*Christian Feltz*/;
	
		case 18:
			return "EMSTR_145" /*Paige Harris*/;
	
		case 19:
			return "EMSTR_152" /*Los Santos Tourist Info*/;
	
		case 20:
			return "EMSTR_157" /*Rickie Luckens*/;
	
		case 21:
			return "EMSTR_163" /*Minotaur Property Management*/;
	
		case 22:
			return "EMSTR_182" /*Saeeda Kadam*/;
	
		case 23:
			return "EMSTR_187" /*Vanilla Unicorn*/;
	
		case 24:
			return "EMSTR_190" /*Dr Isiah Friedlander*/;
	
		case 25:
			return "EMSTR_206" /*TRACEYHEARTSTEALER*/;
	
		case 26:
			return "EMSTR_219" /*Dave Norton*/;
	
		case 27:
			return "EMSTR_226" /*Amanda De Santa*/;
	
		case 28:
			return "EMSTR_233" /*Donald Percival*/;
	
		case 29:
			return "EMSTR_242" /*Ron*/;
	
		case 30:
			return "EMSTR_249" /*Tanisha Marks*/;
	
		case 31:
			return "EMSTR_262" /*Denise*/;
	
		case 32:
			return "EMSTR_269" /*Lamar Davis*/;
	
		case 33:
			return "EMSTR_319" /*Brad*/;
	
		case 34:
			return "EMSTR_340" /*Patricia Madrazo*/;
	
		case 35:
			return "EMSTR_348" /*Eileen Haworth*/;
	
		case 36:
			return "EMSTR_182" /*Saeeda Kadam*/;
	
		case 37:
			return "EMSTR_357" /*Gray Nicholson*/;
	
		case 38:
			return "EMSTR_360" /*Nigel*/;
	
		case 39:
			return "EMSTR_369" /*Hookies*/;
	
		case 40:
			return "EMSTR_376" /*Towing Impound*/;
	
		case 41:
			return "EMSTR_379" /*Downtown Cab Co,*/;
	
		case 42:
			return "EMSTR_382" /*McKenzie Field Hangar*/;
	
		case 43:
			return "EMSTR_384" /*Sonar Collections Dock*/;
	
		case 44:
			return "EMSTR_387" /*Los Santos Customs*/;
	
		case 45:
			return "EMSTR_390" /*Cinema Doppler*/;
	
		case 46:
			return "EMSTR_393" /*Ten Cent Theater*/;
	
		case 47:
			return "EMSTR_396" /*Tivoli Cinema*/;
	
		case 48:
			return "EMSTR_399" /*Los Santos Golf Club*/;
	
		case 49:
			return "EMSTR_402" /*Car Scrap Yard*/;
	
		case 50:
			return "EMSTR_405" /*Smoke on the Water*/;
	
		case 51:
			return "EMSTR_408" /*Tequi-la-la*/;
	
		case 52:
			return "EMSTR_411" /*Pitchers*/;
	
		case 53:
			return "EMSTR_414" /*The Hen House*/;
	
		case 54:
			return "EMSTR_465" /*Pedal & Metal Sales*/;
	
		case 55:
			return "EMSTR_468" /*SSA Super Autos Sales*/;
	
		case 56:
			return "EMSTR_489" /*Hush Smush*/;
	
		case 57:
			return "EMSTR_492" /*foxymama21*/;
	
		case 58:
			return "EMSTR_495" /*Altarego12*/;
	
		case 59:
			return "EMSTR_498" /*BadKitty11*/;
	
		case 60:
			return "EMSTR_501" /*7yearbitch*/;
	
		case 61:
			return "EMSTR_504" /*Froggy69*/;
	
		case 62:
			return "EMSTR_507" /*Misscuddles*/;
	
		case 63:
			return "EMSTR_640" /*Offroad Events*/;
	
		case 64:
			return "EMSTR_643" /*Dock Tease*/;
	
		case 65:
			return "EMSTR_652" /*Brother Adrian*/;
	
		default:
		
	}

	return "NULL";
}

const char* func_30(int iParam0, var uParam1) // Position - 0x2B8C
{
	*uParam1 = 1;

	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[0 /*29*/].f_7));
	
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[1 /*29*/].f_7));
	
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[2 /*29*/].f_7));
	
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[12 /*29*/].f_7));
	
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[60 /*29*/].f_7));
	
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[62 /*29*/].f_7));
	
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[14 /*29*/].f_7));
	
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[97 /*29*/].f_7));
	
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[99 /*29*/].f_7));
	
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[96 /*29*/].f_7));
	
		case 63:
			return "CHAR_CARSITE2";
	
		case 64:
			return "CHAR_BOATSITE";
	
		case 8:
			return "CHAR_BANK_MAZE";
	
		case 9:
			return "CHAR_BANK_FLEECA";
	
		case 10:
			return "CHAR_BANK_BOL";
	
		case 21:
			return "CHAR_MINOTAUR";
	
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[15 /*29*/].f_7));
	
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[30 /*29*/].f_7));
	
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[17 /*29*/].f_7));
	
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[20 /*29*/].f_7));
	
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[43 /*29*/].f_7));
	
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[44 /*29*/].f_7));
	
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[19 /*29*/].f_7));
	
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[40 /*29*/].f_7));
	
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /*CHAR_SAEEDA*/);
	
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[64 /*29*/].f_7));
	
		case 5:
			return "CHAR_EPSILON";
	
		case 13:
			return "CHAR_MILSITE";
	
		case 11:
			return "CHAR_CARSITE";
	
		case 14:
			return "CHAR_BOATSITE";
	
		case 12:
			return "CHAR_PLANESITE";
	
		case 24:
			return "CHAR_DR_FRIEDLANDER";
	
		case 55:
			return "CHAR_CARSITE2";
	
		case 54:
			return "CHAR_BIKESITE";
	
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[122 /*29*/].f_7));
	
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[125 /*29*/].f_7));
	
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[113 /*29*/].f_7));
	
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[126 /*29*/].f_7));
	
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[127 /*29*/].f_7));
	
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[124 /*29*/].f_7));
	
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[114 /*29*/].f_7));
	
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[115 /*29*/].f_7));
	
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[116 /*29*/].f_7));
	
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[123 /*29*/].f_7));
	
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[117 /*29*/].f_7));
	
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[118 /*29*/].f_7));
	
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[119 /*29*/].f_7));
	
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[120 /*29*/].f_7));
	
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[121 /*29*/].f_7));
	
		default:
		
	}

	*uParam1 = 0;
	return "ERROR!";
}

struct<16> func_31(int iParam0) // Position - 0x2F57
{
	var unk;
	var unk17;

	if (iParam0 > -1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "EMSTR_", 64);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
		return unk;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk17, "FAIL", 64);
	return unk17;
}

int func_32(int iParam0, int iParam1) // Position - 0x2F88
{
	if (Global_48594[iParam0 /*46*/].f_42 >= 9)
		return 0;

	Global_48594[iParam0 /*46*/].f_32[Global_48594[iParam0 /*46*/].f_42] = iParam1;
	Global_48594[iParam0 /*46*/].f_42 = Global_48594[iParam0 /*46*/].f_42 + 1;
	return 1;
}

BOOL func_33(eCharacter echParam0, int iParam1) // Position - 0x2FCD
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return false;

	for (i = Global_54207[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;

	if (!Global_54207[num /*120*/].f_86[num2])
	{
		num3 = Global_54207[num /*120*/].f_18[num2];
		num4 = Global_54207[num /*120*/].f_1[num2];
		num5 = Global_48594[num3 /*46*/].f_32[num4];
	
		if (Global_45269[num5 /*12*/].f_4 == 0)
			return false;
	
		if (Global_54207[num /*120*/].f_35[num2] == 1)
			return false;
	
		if (!func_34(num, num2))
			return false;
	
		return true;
	}

	return false;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x30AC
{
	int num;
	int num2;
	int num3;

	if (!(iParam0 < 3))
		return false;

	num = Global_54207[iParam0 /*120*/].f_1[iParam1];
	num2 = Global_54207[iParam0 /*120*/].f_18[iParam1];

	if (!(Global_48594[num2 /*46*/] && !Global_48594[num2 /*46*/].f_1))
		return false;

	if (!(num == Global_48594[num2 /*46*/].f_42 - 1))
		return false;

	num3 = Global_48594[num2 /*46*/].f_32[Global_48594[num2 /*46*/].f_42 - 1];

	if (Global_45269[num3 /*12*/].f_4 > 0)
		return true;

	return false;
}

BOOL func_35() // Position - 0x313C
{
	return Global_76498;
}

void func_36() // Position - 0x3148
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_37();
	}

	return;
}

void func_37() // Position - 0x316E
{
	if (func_2())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

int func_38(eCharacter echParam0) // Position - 0x3182
{
	int num;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	return Global_54207[num /*120*/];
}

void func_39(int iParam0, eCharacter echParam1, int iParam2) // Position - 0x31BF
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;
	int j;
	int num6;
	int num7;
	var unk;
	var unk17;

	num = -1;

	switch (echParam1)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	for (i = Global_54207[num /*120*/] - 1 - iParam2; i >= 16; i = i - 16)
	{
	}

	num2 = i;

	if (!Global_54207[num /*120*/].f_86[num2])
	{
		num3 = Global_54207[num /*120*/].f_18[num2];
		num4 = Global_54207[num /*120*/].f_1[num2];
		num5 = Global_48594[num3 /*46*/].f_32[num4];
	
		if (Global_45269[num5 /*12*/].f_4 == 0)
			return;
	
		j = 0;
		num6 = Global_45269[num5 /*12*/].f_4;
	
		if (num6 > 1)
			num6 = 1;
	
		for (j = 0; j < num6; j = j + 1)
		{
			num7 = Global_45269[num5 /*12*/].f_5[j /*4*/].f_1;
			unk = { func_31(Global_45269[num7 /*12*/].f_1) };
			unk17 = { func_31(Global_45269[num7 /*12*/].f_1) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW" /*Response:*/);
			func_9(&unk17);
			func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45269[num7 /*12*/].f_2));
			func_40(num7, Global_45269[num7 /*12*/].f_2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void func_40(int iParam0, int iParam1) // Position - 0x3328
{
	int num;

	num = iParam0;

	switch (num)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 34:
		case 35:
		case 36:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 31:
		case 32:
		case 33:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		default:
		
	}

	switch (iParam1)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 19:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		default:
			return;
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x3442
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2" /*-Michael*/;
	
		case 3:
			return "EMSTR_5" /*J*/;
	
		case 1:
			return "EMSTR_8" /*F*/;
	
		case 2:
			return "EMSTR_11" /*T*/;
	
		case 4:
			return "EMSTR_14" /*M*/;
	
		case 5:
			return "EMSTR_31" /*Praise Kraff*/;
	
		case 6:
			return "EMSTR_38" /*-Maude*/;
	
		case 7:
			return "EMSTR_41" /*-Lester*/;
	
		case 8:
			return "EMSTR_54" /*Maze Online Support*/;
	
		case 9:
			return "EMSTR_57" /*Fleeca Customer Services*/;
	
		case 10:
			return "EMSTR_60" /*BoL Transaction Services*/;
	
		case 11:
			return "EMSTR_80" /*Legendary Motorsport*/;
	
		case 12:
			return "EMSTR_83" /*Elitas Travel*/;
	
		case 13:
			return "EMSTR_86" /*C&C*/;
	
		case 14:
			return "EMSTR_89" /*DT Sales*/;
	
		case 15:
			return "EMSTR_106" /*LSC*/;
	
		case 16:
			return "EMSTR_116" /*~b~<u>www.ammunation.net</u>~s~*/;
	
		case 17:
			return "EMSTR_144" /*C*/;
	
		case 18:
			return "EMSTR_147" /*P*/;
	
		case 19:
			return "EMSTR_154" /*LS Tourist Info*/;
	
		case 20:
			return "EMSTR_159" /*R*/;
	
		case 21:
			return "EMSTR_165" /*Minotaur Finance - navigating the maze that is property ownership*/;
	
		case 22:
			return "EMSTR_184" /*-Saeeda Kadam*/;
	
		case 23:
			return "EMSTR_189" /*-Vanilla Unicorn*/;
	
		case 24:
			return "EMSTR_192" /*Isiah Friedlander*/;
	
		case 25:
			return "EMSTR_208" /*- Tracey*/;
	
		case 26:
			return "EMSTR_221" /*- Davey*/;
	
		case 27:
			return "EMSTR_228" /*- Amanda*/;
	
		case 28:
			return "EMSTR_235" /*- Donald Percival*/;
	
		case 29:
			return "EMSTR_244" /*- Ron*/;
	
		case 30:
			return "EMSTR_251" /*- Tanisha*/;
	
		case 31:
			return "EMSTR_264" /*- Denise*/;
	
		case 32:
			return "EMSTR_271" /*- Lamar*/;
	
		case 33:
			return "EMSTR_321" /*- Brad*/;
	
		case 34:
			return "EMSTR_342" /*- Patricia M*/;
	
		case 35:
			return "EMSTR_350" /*- Eileen Haworth*/;
	
		case 36:
			return "EMSTR_354" /*- Saeeda Kadam*/;
	
		case 37:
			return "EMSTR_359" /*- Gray N*/;
	
		case 38:
			return "EMSTR_362" /*- Nigel*/;
	
		case 39:
			return "EMSTR_371" /*- Hookies*/;
	
		case 40:
			return "EMSTR_378" /*- Towing Impound*/;
	
		case 41:
			return "EMSTR_381" /*- Downtown Cab Co.*/;
	
		case 42:
			return "EMSTR_382" /*McKenzie Field Hangar*/;
	
		case 43:
			return "EMSTR_386" /*- Sonar Collections Dock*/;
	
		case 44:
			return "EMSTR_389" /*- Los Santos Customs*/;
	
		case 45:
			return "EMSTR_392" /*- Cinema Doppler*/;
	
		case 46:
			return "EMSTR_395" /*- Ten Cent Theater*/;
	
		case 47:
			return "EMSTR_398" /*- Tivoli Cinema*/;
	
		case 48:
			return "EMSTR_401" /*- Los Santos Golf Club*/;
	
		case 49:
			return "EMSTR_404" /*- Car Scrap Yard*/;
	
		case 50:
			return "EMSTR_407" /*- Smoke on the Water*/;
	
		case 51:
			return "EMSTR_410" /*- Tequi-la-la*/;
	
		case 52:
			return "EMSTR_413" /*- Pitchers*/;
	
		case 53:
			return "EMSTR_416" /*- The Hen House*/;
	
		case 54:
			return "EMSTR_467" /*Pedal & Metal Cycles*/;
	
		case 55:
			return "EMSTR_470" /*SSA Super Autos*/;
	
		case 56:
			return "EMSTR_491" /*Hush Smush*/;
	
		case 57:
			return "EMSTR_494" /*foxymama21*/;
	
		case 58:
			return "EMSTR_497" /*Altarego12*/;
	
		case 59:
			return "EMSTR_500" /*BadKitty11*/;
	
		case 60:
			return "EMSTR_503" /*7yearbitch*/;
	
		case 61:
			return "EMSTR_506" /*Froggy69*/;
	
		case 62:
			return "EMSTR_509" /*Misscuddles*/;
	
		case 63:
			return "EMSTR_642" /*- Southern San Andreas Super Autos*/;
	
		case 64:
			return "EMSTR_645" /*- Dock Tease Events*/;
	
		case 65:
			return "EMSTR_654" /*Brother Adrian*/;
	
		default:
		
	}

	return "NULL";
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x37AD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_43(int iParam0) // Position - 0x37C4
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113969.f_20413.f_150[i], offset);

	return;
}

void func_44(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x3806
{
	func_45(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_45(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x3828
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113969.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_113969.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113969.f_20413.f_145 = Global_113969.f_20413.f_145 + 1;
		func_46();
	}

	return;
}

void func_46() // Position - 0x39FC
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113969.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 0))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[0])
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 1))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[1])
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 2))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[2])
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[i /*16*/].f_12;
	}

	return;
}

int func_47(char* sParam0) // Position - 0x3B13
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112609))
		return 1;

	if (func_48(sParam0))
		return 0;

	return 2;
}

BOOL func_48(char* sParam0) // Position - 0x3B3A
{
	int i;

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113969.f_20413[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_49(int iParam0) // Position - 0x3B75
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113969.f_20413.f_150[i], num);

	return false;
}

char* func_50(eCharacter echParam0, int iParam1) // Position - 0x3BB5
{
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int i;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return "";

	num4 = func_52(num, iParam1, &num2, &num3, &unk);
	unk = unk;
	num5 = -1;
	flag = Global_54207[num /*120*/].f_86[num4];

	if (!flag)
	{
		num5 = Global_48594[num2 /*46*/].f_32[num3];
	}
	else
	{
		num6 = -1;
		i = 0;
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (Global_54569[i /*203*/].f_1 == num2)
				num6 = i;
		}
	
		num5 = Global_54569[num6 /*203*/].f_10[num3 /*48*/];
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(num5);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x3C75
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
	
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 17:
			return "WWW_MAZE_D_BANK_COM";
	
		case 18:
			return "WWW_FLEECA_COM";
	
		case 19:
			return "WWW_MAZE_D_BANK_COM";
	
		case 20:
			return "WWW_MAZE_D_BANK_COM";
	
		case 21:
			return "WWW_MAZE_D_BANK_COM";
	
		case 22:
			return "WWW_MAZE_D_BANK_COM";
	
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 24:
			return "WWW_FLEECA_COM";
	
		case 25:
			return "WWW_FLEECA_COM";
	
		case 26:
			return "WWW_FLEECA_COM";
	
		case 27:
			return "WWW_FLEECA_COM";
	
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
	
		case 47:
			return "WWW_AMMUNATION_NET";
	
		case 48:
			return "WWW_AMMUNATION_NET";
	
		case 49:
			return "WWW_AMMUNATION_NET";
	
		case 50:
			return "WWW_AMMUNATION_NET";
	
		case 51:
			return "WWW_AMMUNATION_NET";
	
		case 52:
			return "WWW_AMMUNATION_NET";
	
		case 53:
			return "WWW_AMMUNATION_NET";
	
		case 54:
			return "WWW_AMMUNATION_NET";
	
		case 55:
			return "WWW_ELITASTRAVEL_COM";
	
		case 56:
			return "WWW_DOCKTEASE_COM";
	
		case 57:
			return "WWW_ELITASTRAVEL_COM";
	
		case 58:
			return "WWW_ELITASTRAVEL_COM";
	
		case 59:
			return "WWW_ELITASTRAVEL_COM";
	
		case 60:
			return "WWW_DOCKTEASE_COM";
	
		case 61:
			return "WWW_DOCKTEASE_COM";
	
		case 62:
			return "WWW_ELITASTRAVEL_COM";
	
		case 63:
			return "WWW_ELITASTRAVEL_COM";
	
		case 68:
			return "WWW_AMMUNATION_NET";
	
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
	
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 194:
			return "WWW_HUSHSMUSH_COM";
	
		case 195:
			return "WWW_HUSHSMUSH_COM";
	
		case 196:
			return "WWW_HUSHSMUSH_COM";
	
		case 197:
			return "WWW_HUSHSMUSH_COM";
	
		case 198:
			return "WWW_HUSHSMUSH_COM";
	
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
	
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 270:
			return "WWW_AMMUNATION_NET";
	
		case 271:
			return "WWW_AMMUNATION_NET";
	
		case 272:
			return "WWW_AMMUNATION_NET";
	
		case 273:
			return "WWW_AMMUNATION_NET";
	
		case 274:
			return "WWW_AMMUNATION_NET";
	
		case 275:
			return "WWW_AMMUNATION_NET";
	
		case 276:
			return "WWW_AMMUNATION_NET";
	
		default:
		
	}

	return "NULL";
}

int func_52(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3F85
{
	int i;
	int num;

	for (i = Global_54207[iParam0 /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num = i;
	*uParam2 = Global_54207[iParam0 /*120*/].f_18[num];
	*uParam3 = Global_54207[iParam0 /*120*/].f_1[num];
	*uParam4 = Global_54207[iParam0 /*120*/].f_35[num];
	return num;
}

BOOL func_53(eCharacter echParam0, int iParam1) // Position - 0x3FE2
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int i;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return 0;

	num4 = func_52(num, iParam1, &num2, &num3, &unk);
	unk = unk;
	num5 = -1;
	flag = Global_54207[num /*120*/].f_86[num4];

	if (!flag)
	{
		num5 = Global_48594[num2 /*46*/].f_32[num3];
	}
	else
	{
		num6 = -1;
		i = 0;
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (Global_54569[i /*203*/].f_1 == num2)
				num6 = i;
		}
	
		num5 = Global_54569[num6 /*203*/].f_10[num3 /*48*/];
	}

	return func_54(num5);
}

int func_54(int iParam0) // Position - 0x409F
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_55(int iParam0, eCharacter echParam1, int iParam2) // Position - 0x4215
{
	int num;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	int num5;
	var unk;
	var unk17;
	int num6;
	int num7;
	int i;
	int num8;
	int num9;
	int j;
	int num10;
	int num11;
	var unk33;
	var componentType;
	BOOL flag3;
	int k;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = -1;

	switch (echParam1)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	num4 = func_52(num, iParam2, &num2, &num3, &flag);
	flag2 = Global_54207[num /*120*/].f_86[num4];

	if (!Global_54207[num /*120*/].f_69[num4])
		func_59(-1);

	Global_54207[num /*120*/].f_69[num4] = true;

	if (!flag2)
	{
		num5 = Global_48594[num2 /*46*/].f_32[num3];
		unk = { func_31(Global_45269[num5 /*12*/]) };
		unk17 = { func_31(Global_45269[num5 /*12*/].f_1) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[num5 /*12*/].f_3));
		func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[num5 /*12*/].f_2));
		func_9(&unk);
		func_9(&unk17);
		func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45269[num5 /*12*/].f_2));
		func_40(num5, Global_45269[num5 /*12*/].f_2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		if (Global_45269[num5 /*12*/].f_4 == 0)
			func_77(false);
		else if (flag || !func_34(num, num4))
			func_77(false);
		else
			func_77(true);
	
		if (Global_48594[num2 /*46*/].f_42 > 1)
		{
			num6 = num3;
			num7 = num3 - 1;
			i = 0;
		
			for (i = 0; i < num6; i = i + 1)
			{
				num5 = Global_48594[num2 /*46*/].f_32[num7];
				unk = { func_31(Global_45269[num5 /*12*/]) };
				unk17 = { func_31(Global_45269[num5 /*12*/].f_1) };
				num8 = func_57(echParam1, Global_45269[num5 /*12*/].f_3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i + 1);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(num8));
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[num5 /*12*/].f_2));
				func_9(&unk);
				func_9(&unk17);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45269[num5 /*12*/].f_2));
				func_40(num5, Global_45269[num5 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				num7 = num7 - 1;
			}
		}
	}
	else
	{
		num9 = -1;
		j = 0;
	
		for (j = 0; j < 7; j = j + 1)
		{
			if (Global_54569[j /*203*/].f_1 == num2)
				num9 = j;
		}
	
		if (num9 == -1)
		{
			return;
		}
		else
		{
			num10 = Global_54569[num9 /*203*/].f_10[num3 /*48*/];
			num11 = Global_54569[num9 /*203*/].f_10[num3 /*48*/];
			unk33 = { func_31(Global_45269[num10 /*12*/]) };
			componentType = { func_31(Global_45269[num10 /*12*/].f_1) };
		
			if (Global_54569[num9 /*203*/].f_10[num3 /*48*/].f_1)
				TEXT_LABEL_COPY(&componentType, { Global_54569[num9 /*203*/].f_10[num3 /*48*/].f_2 }, 16);
		
			if (Global_45269[num10 /*12*/].f_4 == 0)
				func_77(false);
			else if (flag)
				func_77(false);
			else
				func_77(true);
		
			flag3 = false;
			flag3 = func_56(iParam0, Global_54569[num9 /*203*/].f_1, num3, num11);
		
			if (!flag3)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[num10 /*12*/].f_3));
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[num10 /*12*/].f_2));
				func_9(&unk33);
			
				if (Global_54569[num9 /*203*/].f_10[num3 /*48*/].f_6 > 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
					k = 0;
				
					for (k = 0; k < Global_54569[num9 /*203*/].f_10[num3 /*48*/].f_6; k = k + 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_54569[num9 /*203*/].f_10[num3 /*48*/].f_7[k /*4*/]);
					}
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&componentType);
				}
			
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45269[num10 /*12*/].f_2));
				func_40(num10, Global_45269[num10 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}

	return;
}

BOOL func_56(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4602
{
	int num;
	int num2;
	int value;
	var unk;
	var unk17;
	int i;
	int num3;
	BOOL flag;
	char* labelName;

	num = 0;
	num2 = iParam1;
	num2 = iParam2;
	num2 = num2;
	value = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	unk = { func_31(Global_45269[iParam3 /*12*/]) };

	switch (iParam3)
	{
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk17, "PROPR_INCEMAIL1" /*Dear Mr. De Santa, please find below your weekly income from owned properties:~n~*/, 64);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk17, "PROPR_INCEMAIL3" /*Dear Mr. Clinton, please find below your weekly income from owned properties:~n~*/, 64);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk17, "PROPR_INCEMAIL2" /*Dear Mr. Philips, please find below your weekly income from owned properties:~n~*/, 64);
			break;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
	func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[iParam3 /*12*/].f_3));
	func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[iParam3 /*12*/].f_2));
	func_9(&unk);
	func_9(&unk17);
	func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45269[iParam3 /*12*/].f_2));
	func_9("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	value = value + 1;

	for (i = 0; i < 16; i = i + 1)
	{
		num3 = i;
		flag = false;
	
		switch (iParam3)
		{
			case 72:
				if (Global_113969.f_24907[num3 /*4*/] == 0)
					flag = true;
				break;
		
			case 73:
				if (Global_113969.f_24907[num3 /*4*/] == 1)
					flag = true;
				break;
		
			case 74:
				if (Global_113969.f_24907[num3 /*4*/] == 2)
					flag = true;
				break;
		}
	
		if (flag)
		{
			switch (num3)
			{
				case 0:
					labelName = "ACCNA_TOWING" /*Towing Impound*/;
					break;
			
				case 1:
					labelName = "ACCNA_TAXI_LOT" /*Downtown Cab Co.*/;
					break;
			
				case 2:
					labelName = "ACCNA_ARMS" /*McKenzie Field Hangar*/;
					break;
			
				case 3:
					labelName = "ACCNA_SONAR" /*Sonar Collections Dock*/;
					break;
			
				case 4:
					labelName = "ACCNA_CARMOD" /*Los Santos Customs*/;
					break;
			
				case 5:
					labelName = "ACCNA_VCINEMA" /*Cinema Doppler*/;
					break;
			
				case 6:
					labelName = "ACCNA_DCINEMA" /*Ten Cent Theater*/;
					break;
			
				case 7:
					labelName = "ACCNA_MCINEMA" /*Tivoli Cinema*/;
					break;
			
				case 8:
					labelName = "ACCNA_GOLF" /*Los Santos Golf Club*/;
					break;
			
				case 9:
					labelName = "ACCNA_CSCRAP" /*Car Scrapyard*/;
					break;
			
				case 10:
					labelName = "ACCNA_SMOKE" /*Smoke on the Water*/;
					break;
			
				case 11:
					labelName = "ACCNA_TEQUILA" /*Tequi-la-la*/;
					break;
			
				case 12:
					labelName = "ACCNA_PITCHERS" /*Pitchers*/;
					break;
			
				case 13:
					labelName = "ACCNA_HEN" /*The Hen House*/;
					break;
			
				case 14:
					labelName = "ACCNA_HOOKIES" /*Hookies*/;
					break;
			
				case 15:
					labelName = "ACCNA_STRP" /*Vanilla Unicorn*/;
					break;
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PROPR_INCEMAIL4" /*~a~: $~1~*/);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(labelName);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113969.f_24907[num3 /*4*/].f_3);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			value = value + 1;
			num = 1;
		}
	}

	return num;
}

int func_57(eCharacter echParam0, int iParam1) // Position - 0x489B
{
	if (iParam1 == 0)
		if (echParam0 == CHAR_FRANKLIN)
			return 1;
		else if (echParam0 == CHAR_TREVOR)
			return 2;

	return iParam1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x48C2
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1" /*Mike@eyefind.info*/;
	
		case 3:
			return "EMSTR_4" /*jimmy@eyefind.info*/;
	
		case 1:
			return "EMSTR_7" /*Frankie@eyefind.info*/;
	
		case 2:
			return "EMSTR_10" /*trev@eyefind.info*/;
	
		case 4:
			return "EMSTR_13" /*Marnie@epsilonprogram.com*/;
	
		case 5:
			return "EMSTR_30" /*noreply@epsilonprogram.com*/;
	
		case 6:
			return "EMSTR_37" /*Maude@eyefind.info*/;
	
		case 7:
			return "EMSTR_40" /*t34b4g99@eyefind.info*/;
	
		case 8:
			return "EMSTR_53" /*services@maze-bank.com*/;
	
		case 9:
			return "EMSTR_56" /*services@fleeca.com*/;
	
		case 10:
			return "EMSTR_59" /*transactions@thebankofliberty.com*/;
	
		case 11:
			return "EMSTR_79" /*sales@legendarymotorsport.net*/;
	
		case 12:
			return "EMSTR_82" /*sales@elitastravel.com*/;
	
		case 13:
			return "EMSTR_85" /*CnCsales@warstock-cache-and-carry.com*/;
	
		case 14:
			return "EMSTR_88" /*sales@docktease.com*/;
	
		case 15:
			return "EMSTR_107" /*MODS@lossantoscustoms.com*/;
	
		case 16:
			return "EMSTR_115" /*GUNS@ammunation.net*/;
	
		case 17:
			return "EMSTR_143" /*Feltz@eyefind.info*/;
	
		case 18:
			return "EMSTR_146" /*Paige@eyefind.info*/;
	
		case 19:
			return "EMSTR_153" /*info@LSTouristInfo.com*/;
	
		case 20:
			return "EMSTR_158" /*Rickie@lifeinvader.com*/;
	
		case 21:
			return "EMSTR_164" /*property@minotaurfinance.com*/;
	
		case 22:
			return "EMSTR_183" /*SKadam@eyefind.info*/;
	
		case 23:
			return "EMSTR_188" /*promotions@vanillaunicorn.xxx*/;
	
		case 24:
			return "EMSTR_191" /*DrFriedlander@eyefind.info*/;
	
		case 25:
			return "EMSTR_207" /*tracey@eyefind.info*/;
	
		case 26:
			return "EMSTR_220" /*DaveNorton@eyefind.info*/;
	
		case 27:
			return "EMSTR_227" /*AmandaDS@eyefind.info*/;
	
		case 28:
			return "EMSTR_234" /*Don.Percival@merryweather.com*/;
	
		case 29:
			return "EMSTR_243" /*BigBadRon@eyefind.info*/;
	
		case 30:
			return "EMSTR_250" /*TanishaMarks@eyefind.info*/;
	
		case 31:
			return "EMSTR_263" /*denise@eyefind.info*/;
	
		case 32:
			return "EMSTR_270" /*LamDav@eyefind.info*/;
	
		case 33:
			return "EMSTR_320" /*Bradley@eyefind.info*/;
	
		case 34:
			return "EMSTR_341" /*PatriciaMadrazo@eyefind.info*/;
	
		case 35:
			return "EMSTR_349" /*EileenHaworth@eyefind.info*/;
	
		case 36:
			return "EMSTR_353" /*SaeedaKadam@eyefind.info*/;
	
		case 37:
			return "EMSTR_358" /*GrayNicholson@eyefind.info*/;
	
		case 38:
			return "EMSTR_361" /*Nigel@eyefind.info*/;
	
		case 39:
			return "EMSTR_370" /*Hookies@eyefind.info*/;
	
		case 40:
			return "EMSTR_377" /*TowingImpound@eyefind.info*/;
	
		case 41:
			return "EMSTR_380" /*DowntownCabCo@eyefind.info*/;
	
		case 42:
			return "EMSTR_383" /*McKenzieField@eyefind.info*/;
	
		case 43:
			return "EMSTR_385" /*SonarCollections@eyefind.info*/;
	
		case 44:
			return "EMSTR_388" /*LosSantosCustoms@eyefind.info*/;
	
		case 45:
			return "EMSTR_391" /*CinemaDoppler@eyefind.info*/;
	
		case 46:
			return "EMSTR_394" /*TenCentTheater@eyefind.info*/;
	
		case 47:
			return "EMSTR_397" /*TivoliCinema@eyefind.info*/;
	
		case 48:
			return "EMSTR_400" /*LosSantosGolfClub@eyefind.info*/;
	
		case 49:
			return "EMSTR_403" /*CarScrapYard@eyefind.info*/;
	
		case 50:
			return "EMSTR_406" /*SmokeOnTheWater@eyefind.info*/;
	
		case 51:
			return "EMSTR_409" /*Tequi-la-la@eyefind.info*/;
	
		case 52:
			return "EMSTR_412" /*Pitchers@eyefind.info*/;
	
		case 53:
			return "EMSTR_415" /*TheHenHouse@eyefind.info*/;
	
		case 54:
			return "EMSTR_466" /*sales@pandmcycles.com*/;
	
		case 55:
			return "EMSTR_469" /*sales@southernsanandreassuperautos.com*/;
	
		case 56:
			return "EMSTR_490" /*promotions@hushmush.com*/;
	
		case 57:
			return "EMSTR_493" /*foxymama21@hushmush.com*/;
	
		case 58:
			return "EMSTR_496" /*Altarego12@hushmush.com*/;
	
		case 59:
			return "EMSTR_499" /*BadKitty11@hushmush.com*/;
	
		case 60:
			return "EMSTR_502" /*7yearbitch@hushmush.com*/;
	
		case 61:
			return "EMSTR_505" /*Froggy69@hushmush.com*/;
	
		case 62:
			return "EMSTR_508" /*Misscuddles@hushmush.com*/;
	
		case 63:
			return "EMSTR_641" /*events@SouthernSanAndreasSuperAutos.com*/;
	
		case 64:
			return "EMSTR_644" /*RaceOrganiser@docktease.com*/;
	
		case 65:
			return "EMSTR_653" /*adrian@mydivinewithin.com*/;
	
		default:
		
	}

	return "NULL";
}

void func_59(int iParam0) // Position - 0x4C2D
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			Global_45261 = Global_45261 + iParam0;
		
			if (Global_45261 < 0)
				Global_45261 = 0;
			break;
	
		case CHAR_TREVOR:
			Global_45263 = Global_45263 + iParam0;
		
			if (Global_45263 < 0)
				Global_45263 = 0;
			break;
	
		case CHAR_FRANKLIN:
			Global_45262 = Global_45262 + iParam0;
		
			if (Global_45262 < 0)
				Global_45262 = 0;
			break;
	
		default:
			break;
	}

	return;
}

void func_60(eCharacter echParam0, int iParam1) // Position - 0x4C98
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int j;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	for (i = Global_54207[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;
	num3 = Global_54207[num /*120*/].f_18[num2];
	num4 = Global_54207[num /*120*/].f_1[num2];
	num5 = -1;
	flag = Global_54207[num /*120*/].f_86[num2];

	if (!flag)
	{
		num5 = Global_48594[num3 /*46*/].f_32[num4];
	}
	else
	{
		num6 = -1;
		j = 0;
	
		for (j = 0; j < 7; j = j + 1)
		{
			if (Global_54569[j /*203*/].f_1 == num3)
				num6 = j;
		}
	
		if (num6 == -1)
			return;
	
		num5 = Global_54569[num6 /*203*/].f_10[num4 /*48*/];
	}

	if (!func_61(num5))
		return;

	if (Global_54568 != -1)
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_15(Global_54568));

	Global_54568 = num5;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_15(num5), false);

	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_15(num5)))
	{
		SYSTEM::WAIT(100);
	}

	return;
}

BOOL func_61(int iParam0) // Position - 0x4DCA
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return true;
	
		default:
		
	}

	return false;
}

void func_62() // Position - 0x4E7A
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_45264[i] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_45264[i]);
			Global_45264[i] = -1;
		}
	}

	Global_45268 = 0;
	return;
}

void func_63(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4EB9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_64(int iParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x4F1C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_9(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_9(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_9(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_9(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_65(int iParam0, eCharacter echParam1) // Position - 0x4F77
{
	int num;
	int i;
	int num2;
	int j;
	int num3;
	int num4;
	int num5;
	int value;
	var unk;
	int num6;
	int num7;
	int k;
	int num8;
	int value2;
	int num9;
	var unk5;

	func_66(echParam1);
	num = -1;

	switch (echParam1)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return 0;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (Global_54207[num /*120*/] < 1)
		return 0;

	for (i = Global_54207[num /*120*/] - 1; i >= 16; i = i - 16)
	{
	}

	num2 = Global_54207[num /*120*/];

	if (num2 > 16)
		num2 = 16;

	if (i < 0 || i > 15)
		return 0;

	j = 0;

	for (j = 0; j < num2; j = j + 1)
	{
		if (!Global_54207[num /*120*/].f_86[i])
		{
			num3 = Global_54207[num /*120*/].f_18[i];
			num4 = Global_54207[num /*120*/].f_1[i];
			num5 = Global_48594[num3 /*46*/].f_32[num4];
			value = 0;
		
			if (Global_54207[num /*120*/].f_69[i])
				value = 1;
		
			if (value == 1)
				if (Global_45269[num5 /*12*/].f_4 > 0)
					if (Global_54207[num /*120*/].f_35[i] == 0)
						value = 2;
		
			TEXT_LABEL_COPY(&unk, { func_31(Global_45269[num5 /*12*/]) }, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(j);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[num5 /*12*/].f_2));
			func_9(&unk);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			num6 = Global_54207[num /*120*/].f_18[i];
			num7 = -1;
			k = 0;
		
			for (k = 0; k < 7; k = k + 1)
			{
				if (Global_54569[k /*203*/].f_1 == num6)
					num7 = k;
			}
		
			if (num7 == -1)
			{
				return 1;
			}
			else
			{
				num8 = Global_54207[num /*120*/].f_1[i];
				value2 = 0;
			
				if (Global_54207[num /*120*/].f_69[i])
					value2 = 1;
			
				num9 = Global_54569[num7 /*203*/].f_10[num8 /*48*/];
			
				if (value2 == 1)
					if (Global_45269[num9 /*12*/].f_4 > 0)
						if (Global_54207[num /*120*/].f_35[i] == 0)
							value2 = 2;
			
				unk5 = { func_31(Global_45269[num9 /*12*/]) };
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(j);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45269[num9 /*12*/].f_2));
				func_9(&unk5);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		i = i - 1;
	
		if (i < 0)
			i = 15;
	}

	return num2;
}

void func_66(eCharacter echParam0) // Position - 0x5206
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int j;
	BOOL flag;
	int unk120;
	int num5;
	int k;
	int num6;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	if (Global_54207[num /*120*/] < 1)
		return;

	for (i = Global_54207[num /*120*/] - 1; i >= 16; i = i - 16)
	{
	}

	num2 = Global_54207[num /*120*/];

	if (num2 > 16)
		num2 = 16;

	if (i < 0 || i > 15)
		return;

	num3 = i - num2 - 1;

	if (num3 < 0)
		num3 = 16 + num3;

	num4.f_1 = 16;
	num4.f_18 = 16;
	num4.f_35 = 16;
	num4.f_52 = 16;
	num4.f_69 = 16;
	num4.f_86 = 16;
	num4.f_103 = 16;

	for (j = 0; j < num2; j = j + 1)
	{
		flag = true;
	
		if (Global_54207[num /*120*/].f_103[num3])
			flag = false;
	
		if (Global_54207[num /*120*/].f_86[num3])
		{
			unk120 = Global_54207[num /*120*/].f_18[num3];
			num5 = -1;
			k = 0;
		
			for (k = 0; k < 7; k = k + 1)
			{
				if (Global_54569[k /*203*/].f_1 == unk120)
					num5 = k;
			}
		
			if (num5 == -1)
				flag = false;
		}
	
		if (flag)
		{
			num6 = num4;
			num4.f_1[num6] = Global_54207[num /*120*/].f_1[num3];
			num4.f_18[num6] = Global_54207[num /*120*/].f_18[num3];
			num4.f_35[num6] = Global_54207[num /*120*/].f_35[num3];
			num4.f_52[num6] = Global_54207[num /*120*/].f_52[num3];
			num4.f_69[num6] = Global_54207[num /*120*/].f_69[num3];
			num4.f_86[num6] = Global_54207[num /*120*/].f_86[num3];
			num4 = num4 + 1;
		}
	
		num3 = num3 + 1;
	
		if (num3 == 16)
			num3 = 0;
	}

	Global_54207[num /*120*/] = num4;

	for (j = 0; j < 16; j = j + 1)
	{
		Global_54207[num /*120*/].f_103[j] = false;
		Global_54207[num /*120*/].f_1[j] = num4.f_1[j];
		Global_54207[num /*120*/].f_18[j] = num4.f_18[j];
		Global_54207[num /*120*/].f_35[j] = num4.f_35[j];
		Global_54207[num /*120*/].f_52[j] = num4.f_52[j];
		Global_54207[num /*120*/].f_69[j] = num4.f_69[j];
		Global_54207[num /*120*/].f_86[j] = num4.f_86[j];
	}

	return;
}

void func_67() // Position - 0x54A2
{
	float num;

	num = func_68(fLocal_48, uLocal_45, -90f, 0f, 90f, Global_20890, 350f, false);

	if (Global_9604 == 0)
		MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * (1f - num)));

	if (num >= 1f)
	{
		Global_23319 = false;
		func_1(0);
		func_4();
		iLocal_16 = 0;
	}

	return;
}

float func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0x5500
{
	var position;
	float num;
	float num2;
	float num3;

	if (Global_4543363 == 0)
	{
		if (IS_BIT_SET(Global_8800, 14) && Global_20930.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&position);
		
			if (Global_20883[Global_20875 /*3*/].f_1 == position.f_1)
				Global_4543363 = 1;
		}
	}

	if (func_71() && Global_4543363 == 0)
		return 2f;

	if (iLocal_16 == 0)
		iLocal_16 = MISC::GET_GAME_TIMER();

	num = func_70(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER() - iLocal_16) / fParam12, 0f, 1f);

	if (num < 1f)
	{
		num2 = num;
	
		if (bParam13)
		{
			num2 = num2 - 1f;
			num3 = 0.670158f;
			num2 = (num2 * num2 * (((num3 + 1f) * num2) + num3)) + 1f;
		}
		else
		{
			num2 = SYSTEM::SIN(num * 90f);
		}
	
		Global_20858 = { func_69(uParam0, uParam3, num2) };
		Global_20861 = { func_69(fParam6, fParam9, num2) };
	}
	else
	{
		Global_20858 = { uParam3 };
		Global_20861 = { fParam9 };
	}

	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20861, 0);
	return num;
}

Vector3 func_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x560F
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_70(float fParam0, float fParam1, float fParam2) // Position - 0x5629
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_71() // Position - 0x5650
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
			if (Global_20873 == false)
				if (Global_8115 != 128)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						Global_22286 != 2;
	
		if (func_13(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919896))
			return false;
	
		if (Global_113017)
			return false;
	}

	if (Global_79389)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON && camActiveViewModeContext == ON_FOOT || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
	{
		num = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1030275036 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -616331036 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 782665360 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 771711535 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1066334226 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 1070967343)
					num = 0;
			}
		}
	}

	if (Global_4543362 || num == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(361769742) > 0 || Global_113969.f_14054.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-622120100) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

void func_72() // Position - 0x5899
{
	float num;

	num = func_68(uLocal_45, fLocal_48, Global_20890, -90f, 0f, 90f, 350f, false);

	if (Global_9604 == 0)
		if (MISC::IS_PC_VERSION())
			if (!func_73())
				MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * num));
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * num));

	if (num >= 1f)
	{
		func_1(1);
		Global_23320 = false;
		iLocal_16 = 0;
	}

	return;
}

BOOL func_73() // Position - 0x5915
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;

	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		return true;

	return false;
}

void func_74(BOOL bParam0) // Position - 0x5939
{
	var r;
	var g;
	var b;
	var a;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
		HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &r, &g, &b, &a);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL IS_XBOX_PLATFORM() // Position - 0x59B7
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_76(BOOL bParam0) // Position - 0x59CD
{
	var r;
	var g;
	var b;
	var a;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
		HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &r, &g, &b, &a);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_77(BOOL bParam0) // Position - 0x5A47
{
	var r;
	var g;
	var b;
	var a;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
		HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &r, &g, &b, &a);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5AC3
{
	func_79();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_79() // Position - 0x5ADC
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_80(character) && !func_13(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_80(Global_113969.f_2366.f_539.f_4321))
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
			
				Global_113969.f_2366.f_539.f_4323 = character;
				Global_113969.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113969.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_80(eCharacter echParam0) // Position - 0x5BD9
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x5BE5
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x5C22
{
	if (func_80(character))
		return func_83(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_83(eCharacter echParam0) // Position - 0x5C47
{
	return Global_2169[echParam0 /*29*/];
}


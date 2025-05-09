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
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_45 = 0f;
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
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
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
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	Player plLocal_118 = 0;
	BOOL bLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
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
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = (0.05f + 0.275f) - 0.01f;
	fLocal_63 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_206" /*BACK*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_97, "CELL_214" /*OPTIONS*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_101, "CELL_243" /*ACCEPT JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_105, "CELL_244" /*CANCEL JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_109, "CELL_265" /*INVITATION*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_113, "CELL_300" /*CHAR_DEFAULT*/, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_102(&uLocal_120);
	iLocal_117 = 0;
	func_100();
	func_99(Global_21047, "SET_THEME", BUILTIN::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_89(false);

	while (true)
	{
		BUILTIN::WAIT(0);
		func_88();
		func_87();
	
		if (!(Global_21066.f_1 == 9) && Global_21066.f_1 > 3)
		{
			switch (iLocal_92)
			{
				case 0:
					func_49();
					break;
			
				case 1:
					func_33();
					break;
			
				case 3:
					func_5();
					break;
			
				case 2:
					func_4();
					break;
			
				default:
					break;
			}
		
			if (Global_21066.f_1 != 8)
				if (func_3())
					func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x173 (371)
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 3 || Global_21066.f_1 == 0 || Global_21010 == 1)
	{
		Global_21053 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x1B6 (438)
{
	Global_1882240.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Position - 0x1C9 (457)
{
	if (Global_9542 == 1 || Global_21066.f_1 < 7)
	{
		Global_21053 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x1F2 (498)
{
	return;
}

void func_5() // Position - 0x1FA (506)
{
	int num;

	Global_1882240.f_6 = 1;

	if (bLocal_119)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, Global_21035))
			bLocal_119 = false;
	
		return;
	}

	if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
	{
		iLocal_92 = 1;
		num = func_31(iLocal_117, 0);
		func_6(num);
		return;
	}

	if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
	{
		iLocal_92 = 1;
		return;
	}

	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23" /*Confirm*/, "BA_APP_PASS_W" /*Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard.*/, 36, 0, false, -1, 0, 0, true, 0);
	return;
}

void func_6(int iParam0) // Position - 0x261 (609)
{
	Player player;

	player = Global_1882240.f_7[iParam0 /*8*/].f_2;

	if (Global_1882240.f_7[iParam0 /*8*/].f_1 == 1 && plLocal_118 == player)
	{
		func_27(player, Global_1882240.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}

	Global_1882240.f_6 = 0;
	func_7(0);
	return;
}

void func_7(int iParam0) // Position - 0x2B6 (694)
{
	if (func_12())
		return;

	if (Global_21284)
		if (func_11())
			func_9(true, true);
		else
			func_9(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_8())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_8() // Position - 0x340 (832)
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_9(BOOL bParam0, BOOL bParam1) // Position - 0x367 (871)
{
	if (bParam0)
	{
		if (func_10(0))
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

BOOL func_10(int iParam0) // Position - 0x3DB (987)
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

BOOL func_11() // Position - 0x432 (1074)
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_12() // Position - 0x440 (1088)
{
	return IS_BIT_SET(Global_1957675, 19);
}

void func_13(int iParam0) // Position - 0x44F (1103)
{
	int i;

	if (iParam0 != -1)
	{
		if (Global_1882240.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (IS_BIT_SET(Global_1882240.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_26();
			
				if (Global_1882240.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_26();
				}
				else
				{
					Global_1882240.f_4 = Global_1882240.f_4 - 1;
				
					if (Global_1882240.f_4 < 0)
						Global_1882240.f_4 = 0;
				
					func_18();
				}
			}
		
			MISC::CLEAR_BIT(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_22), Global_1882240.f_7[iParam0 /*8*/].f_2);
			HUD::THEFEED_REMOVE_ITEM(Global_1882240.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
	
		for (i = iParam0; i <= 8; i = i + 1)
		{
			Global_1882240.f_7[i /*8*/] = { Global_1882240.f_7[i + 1 /*8*/] };
		}
	
		Global_1882240.f_7[9 /*8*/].f_1 = 0;
		Global_1882240.f_7[9 /*8*/].f_2 = _INVALID_PLAYER_INDEX();
	}

	return;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x541 (1345)
{
	return -1;
}

void func_15(int iParam0) // Position - 0x54A (1354)
{
	if (!func_16(iParam0))
		MISC::SET_BIT(&(Global_1882240.f_3), iParam0);

	return;
}

BOOL func_16(int iParam0) // Position - 0x568 (1384)
{
	return IS_BIT_SET(Global_1882240.f_3, iParam0);
}

void func_17() // Position - 0x579 (1401)
{
	Global_1882240 = Global_1882240 - 1;
	return;
}

void func_18() // Position - 0x58B (1419)
{
	Global_23488 = Global_23488 - 1;

	if (Global_23488 < 0)
		func_25("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");

	func_19();
	return;
}

void func_19() // Position - 0x5AD (1453)
{
	if (!Global_21285 && !IS_BIT_SET(Global_8921, 9))
	{
		if (Global_21066.f_1 == 6)
		{
			func_99(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_99(Global_21047, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

void func_20(int iParam0) // Position - 0x616 (1558)
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

	Global_23493 = 0;
	Global_9541 = iParam0;
	func_24();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_23(14))
		{
			while (num < 35)
			{
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9504[i] == 0)
						{
							Global_9467[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value = 42;
									Global_21288 = 1;
								}
								else
								{
									value = 255;
									Global_21288 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696411)
								if (num == 14)
									func_21(Global_21047, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_8926[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23488), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
						
							Global_9504[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 35)
			{
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9504[i] == 0)
						{
							Global_9467[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114135.f_14145[j /*104*/].f_24 != 0)
										if (Global_114135.f_14145[j /*104*/].f_28 == 0)
											if (Global_114135.f_14145[j /*104*/].f_99[Global_21066] == 1)
												Global_23493 = Global_23493 + 1;
								}
							
								func_21(Global_21047, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_8926[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23493), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79539)
								{
									value2 = 0;
									value2 = Global_4542452;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4542454[k /*296*/].f_24 != 0)
											if (Global_4542454[k /*296*/].f_28 == 0)
												if (Global_4542454[k /*296*/].f_291[Global_21066] == 1)
													value2 = value2 + 1;
									}
								
									func_21(Global_21047, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_8926[num /*15*/].f_10), BUILTIN::TO_FLOAT(value2), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21066)
									{
										case 0:
											value3 = Global_45403;
											break;
									
										case 1:
											value3 = Global_45404;
											break;
									
										case 2:
											value3 = Global_45405;
											break;
									
										default:
											break;
									}
								
									func_21(Global_21047, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_8926[num /*15*/].f_10), BUILTIN::TO_FLOAT(value3), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_21(Global_21047, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_8926[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23488), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8920, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value5 = 42;
									Global_21288 = 1;
								}
								else
								{
									value5 = 255;
									Global_21288 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 24 && MISC::ARE_STRINGS_EQUAL(&Global_8926[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[num /*15*/].f_10 == 57 && num == 24)
							{
								value6 = 0;
								value6 = Global_1882240.f_1;
								func_21(Global_21047, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_8926[num /*15*/].f_10), BUILTIN::TO_FLOAT(value6), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_21047, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_8926[num /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9504[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xB8F (2959)
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
		func_22(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_22(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_22(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_22(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_22(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_22(const char* sParam0) // Position - 0xC42 (3138)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

BOOL func_23(int iParam0) // Position - 0xC54 (3156)
{
	return Global_44181 == iParam0;
}

void func_24() // Position - 0xC62 (3170)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9504[i] = 0;
	}

	return;
}

void func_25(char* sParam0) // Position - 0xC85 (3205)
{
	if (Global_23488 != 0)
	{
		!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
		Global_23488 = 0;
	}

	return;
}

void func_26() // Position - 0xCA2 (3234)
{
	Global_1882240.f_1 = Global_1882240.f_1 - 1;

	if (Global_1882240.f_1 < 0)
		Global_1882240.f_1 = 0;

	return;
}

void func_27(Player plParam0, var uParam1) // Position - 0xCC9 (3273)
{
	if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_26 == _INVALID_PLAYER_INDEX())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		{
			Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_26 = plParam0;
			Global_2739811.f_5265.f_228 = uParam1;
			func_28(func_29(plParam0));
		}
	}

	return;
}

void func_28(int iParam0) // Position - 0xD19 (3353)
{
	Hash eventData;

	eventData = -627920584;
	eventData.f_1 = PLAYER::PLAYER_ID();

	if (!(iParam0 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 3, iParam0, eventData);

	return;
}

int func_29(Player plParam0) // Position - 0xD47 (3399)
{
	int address;

	if (func_30(plParam0))
		MISC::SET_BIT(&address, plParam0);

	return address;
}

BOOL func_30(Player plParam0) // Position - 0xD62 (3426)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

int func_31(int iParam0, int iParam1) // Position - 0xD84 (3460)
{
	int i;

	for (i = 0; i < func_32(); i = i + 1)
	{
		if (Global_1882240.f_7[i /*8*/].f_7 == iParam1)
		{
			iParam0 = iParam0 - 1;
		
			if (iParam0 < 0)
				return i;
		}
	}

	return 0;
}

int func_32() // Position - 0xDC4 (3524)
{
	return Global_1882240;
}

void func_33() // Position - 0xDD0 (3536)
{
	int num;
	Player player;

	num = func_31(iLocal_117, 0);

	if (iLocal_117 == -1)
	{
		func_89(true);
		return;
	}

	player = Global_1882240.f_7[num /*8*/].f_2;

	if (!_NETWORK_IS_PLAYER_VALID(player, false, true) || plLocal_118 != player)
	{
		func_89(true);
		return;
	}

	func_43(&uLocal_120);

	if (func_41(&uLocal_120))
	{
		func_89(true);
		return;
	}

	if (func_40(&uLocal_120))
	{
		func_13(num);
		func_89(true);
		return;
	}

	if (func_36(&uLocal_120))
	{
		if (func_35())
		{
			bLocal_119 = true;
			iLocal_92 = 3;
		}
		else if (Global_1882240.f_7[num /*8*/] == 0)
		{
			func_6(num);
		}
		else if (Global_1882240.f_7[num /*8*/] == 1)
		{
			func_34(num);
		}
		else
		{
			func_7(0);
		}
	}

	return;
}

void func_34(int iParam0) // Position - 0xE96 (3734)
{
	MISC::SET_BIT(&Global_1836156, 15);
	func_13(iParam0);
	Global_1882240.f_6 = 0;
	func_7(0);
	return;
}

BOOL func_35() // Position - 0xEBA (3770)
{
	return Global_1574582;
}

BOOL func_36(var uParam0) // Position - 0xEC6 (3782)
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_21044)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_21035))
		return false;

	func_37();
	Global_21044 = true;
	return true;
}

void func_37() // Position - 0xF0A (3850)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21055, true);
		func_38();
	}

	return;
}

void func_38() // Position - 0xF2F (3887)
{
	if (func_39())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_39() // Position - 0xF43 (3907)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;

	if (Global_79539)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		num = 1;

	if (Global_4546301 || num)
		return true;

	return true;
}

BOOL func_40(var uParam0) // Position - 0xF8A (3978)
{
	if (!IS_BIT_SET(*uParam0, 1))
		return false;

	if (Global_21044)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_21038))
		return false;

	func_37();
	Global_21044 = true;
	return true;
}

BOOL func_41(var uParam0) // Position - 0xFCE (4046)
{
	if (!IS_BIT_SET(*uParam0, 2))
		return false;

	if (Global_21044)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_21036))
		return false;

	func_42();
	Global_21044 = true;
	return true;
}

void func_42() // Position - 0x1012 (4114)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21055, true);

	return;
}

void func_43(var uParam0) // Position - 0x1034 (4148)
{
	if (MISC::GET_GAME_TIMER() < uParam0->f_1)
		return;

	if (!CAM::IS_SCREEN_FADED_IN())
		return;

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_21042) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
	{
		func_46();
		uParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_21043) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
	{
		func_44();
		uParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}

	return;
}

void func_44() // Position - 0x10A1 (4257)
{
	func_99(Global_21047, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_45();
	return;
}

void func_45() // Position - 0x10DE (4318)
{
	if (func_39())
		if (Global_21289 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_46() // Position - 0x1101 (4353)
{
	func_99(Global_21047, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_47();
	return;
}

void func_47() // Position - 0x113E (4414)
{
	if (func_39())
		if (Global_21289 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1161 (4449)
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
				if (player == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_49() // Position - 0x11C1 (4545)
{
	int methodReturn;
	int num;
	int methodReturn2;
	int num2;

	if (func_32() > 1)
		func_43(&uLocal_120);

	if (func_36(&uLocal_120))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
		methodReturn = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn))
		{
			BUILTIN::WAIT(0);
		}
	
		iLocal_117 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn);
		num = func_31(iLocal_117, 0);
	
		switch (Global_1882240.f_7[num /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_51();
				break;
		
			default:
				return;
		}
	
		Global_21066.f_1 = 8;
		return;
	}

	if (func_40(&uLocal_120))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
		methodReturn2 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn2))
		{
			BUILTIN::WAIT(0);
		}
	
		iLocal_117 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn2);
		num2 = func_31(iLocal_117, 0);
	
		switch (Global_1882240.f_7[num2 /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_13(num2);
				func_89(false);
				return;
		
			default:
				return;
		}
	
		return;
		return;
	}

	if (func_16(0))
	{
		func_50(0);
		func_89(false);
	}

	return;
}

void func_50(int iParam0) // Position - 0x12CD (4813)
{
	if (func_16(iParam0))
		MISC::CLEAR_BIT(&(Global_1882240.f_3), iParam0);

	return;
}

void func_51() // Position - 0x12EA (4842)
{
	BOOL flag;
	const char* pedheadshotTxdString;
	int num;
	int num2;
	Player player;
	var text;
	var unk16;
	BOOL flag2;
	int i;
	int num3;
	var componentType;
	var text2;
	var componentType2;

	if (Global_21066.f_1 != 8)
		Global_21066.f_1 = 8;

	func_99(Global_21047, "SET_DATA_SLOT_EMPTY", BUILTIN::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	flag = false;
	num2 = func_31(iLocal_117, 0);
	plLocal_118 = Global_1882240.f_7[num2 /*8*/].f_2;
	player = Global_1882240.f_7[num2 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (_NETWORK_IS_PLAYER_VALID(player, false, true))
	{
		text = { func_86(player) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_80(player));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		flag = true;
	}
	else
	{
		func_22("");
	}

	if (Global_1882240.f_7[num2 /*8*/] == 0)
	{
		if (Global_262145.f_15367)
		{
			unk16 = 3;
			flag2 = func_79(player);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (num3 < 3)
				{
					if (Global_1887549[player /*611*/].f_10.f_11[i] != _INVALID_PLAYER_INDEX())
					{
						if (_NETWORK_IS_PLAYER_VALID(Global_1887549[player /*611*/].f_10.f_11[i], false, true))
						{
							unk16[num3] = Global_1887549[player /*611*/].f_10.f_11[i];
							num3 = num3 + 1;
						}
					}
				}
			}
		
			if (num3 == 0)
			{
				if (flag2)
					func_22("BA_APP_BODYCTA" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~*/);
				else
					func_22("BA_APP_BODY_TA" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~*/);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T4" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~*/, 16);
			
				if (flag2)
					TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT4" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~*/, 16);
			
				if (num3 == 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT5" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T5" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~*/, 16);
				else if (num3 > 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT6" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T6" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~*/, 16);
			
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
			
				for (i = 0; i < num3; i = i + 1)
				{
					text2 = { func_86(unk16[i]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text2);
				}
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1882240.f_88[num2 /*5*/].f_1)
				if (Global_1882240.f_88[num2 /*5*/].f_2)
					TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T9" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: Yes~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
				else
					TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T8" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: Yes~n~- Office: No ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else if (Global_1882240.f_88[num2 /*5*/].f_2)
				TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T7" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: No~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else
				TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T10" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: No~n~- Office: No~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
		
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType2);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1882240.f_88[num2 /*5*/]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_78(player));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1882240.f_88[num2 /*5*/].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1882240.f_88[num2 /*5*/].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1882240.f_7[num2 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2" /*~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~*/);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_80(Global_1882240.f_7[num2 /*8*/].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_63(Global_1882240.f_7[num2 /*8*/].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	if (flag)
	{
		num = func_57(Global_1882240.f_7[num2 /*8*/].f_2);
	
		if (num == 0)
			flag = false;
		else
			pedheadshotTxdString = PED::GET_PEDHEADSHOT_TXD_STRING(num);
	}

	if (flag)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(pedheadshotTxdString);
	else
		func_22(&uLocal_113);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_99(Global_21047, "DISPLAY_VIEW", BUILTIN::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_55(&uLocal_109);
	func_52(13, &uLocal_101, 12, &uLocal_105, 4, &uLocal_93, &uLocal_120);
	iLocal_92 = 1;
	return;
}

void func_52(int iParam0, const char* sParam1, int iParam2, const char* sParam3, int iParam4, const char* sParam5, int* piParam6) // Position - 0x1639 (5689)
{
	func_53(2, iParam0, sParam1, 0, piParam6, -1);
	func_53(1, iParam2, sParam3, 1, piParam6, 17);
	func_53(3, iParam4, sParam5, 2, piParam6, -1);
	return;
}

void func_53(int iParam0, int iParam1, const char* sParam2, int iParam3, int* piParam4, int iParam5) // Position - 0x1669 (5737)
{
	if (iParam1 == 1)
	{
		func_21(Global_21047, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 0f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(piParam4, iParam3);
		func_54(iParam5, false);
		return;
	}

	if (Global_21054)
	{
		func_21(Global_21047, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(piParam4, iParam3);
		func_54(iParam5, true);
		return;
	}

	func_21(Global_21047, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(piParam4, iParam3);
	func_54(iParam5, true);
	return;
}

void func_54(int iParam0, BOOL bParam1) // Position - 0x170E (5902)
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		MISC::SET_BIT(&Global_8919, iParam0);
		return;
	}

	MISC::CLEAR_BIT(&Global_8919, iParam0);
	return;
}

void func_55(char* sParam0) // Position - 0x1739 (5945)
{
	func_56(Global_21047, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_56(int iParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x1752 (5970)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_22(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_22(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_22(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_22(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_22(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_57(Player plParam0) // Position - 0x17AD (6061)
{
	int num;

	num = func_60(plParam0);

	if (num == -1)
	{
		func_58(plParam0, true);
		return 0;
	}

	Global_1686279[num /*5*/].f_4 = 1;
	return Global_1686279[num /*5*/].f_2;
}

void func_58(Player plParam0, BOOL bParam1) // Position - 0x17E3 (6115)
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_60(plParam0) != -1)
		return;

	if (Global_1686442)
		if (plParam0 == Global_1686442.f_1)
			return;

	if (func_59(plParam0))
		return;

	if (Global_1686480 >= 32)
		return;

	Global_1686447[Global_1686480] = plParam0;
	Global_1686480 = Global_1686480 + 1;
	bParam1;
	return;
}

BOOL func_59(Player plParam0) // Position - 0x184F (6223)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1686480; i = i + 1)
	{
		if (Global_1686447[i] == plParam0)
			return true;
	}

	return false;
}

int func_60(Player plParam0) // Position - 0x1881 (6273)
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1686440 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1686440; i = i + 1)
	{
		if (Global_1686279[i /*5*/].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1686279[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1686279[i /*5*/].f_2))
				return i;
		
			func_61(i);
			return -1;
		}
	}

	return -1;
}

void func_61(int iParam0) // Position - 0x1900 (6400)
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1686440)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1686279[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1686279[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1686279[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1686279[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1686440; i = i + 1)
	{
		Global_1686279[num /*5*/] = { Global_1686279[i /*5*/] };
		num = num + 1;
	}

	func_62(&Global_1686279[num /*5*/]);
	Global_1686440 = Global_1686440 - 1;
	return;
}

void func_62(var uParam0) // Position - 0x19B6 (6582)
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

const char* func_63(Player plParam0) // Position - 0x19E3 (6627)
{
	const char* str;
	Player player;

	if (!func_30(plParam0))
	{
		str = func_73(plParam0, false);
		return str;
	}

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		str = func_72(&(Global_1887549[plParam0 /*611*/].f_10.f_105));
		return str;
	}

	if (Global_1887549[plParam0 /*611*/].f_10.f_121 != Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_121)
	{
		str = func_73(plParam0, false);
		return str;
	}

	if (func_71(plParam0, 28) || func_71(PLAYER::PLAYER_ID(), 28) || func_68(plParam0) && !func_66(plParam0))
		return func_73(plParam0, false);

	player = func_65(plParam0);

	if (player != _INVALID_PLAYER_INDEX())
	{
		if (player != PLAYER::PLAYER_ID())
		{
			if (*Global_262145.f_34983)
				return func_73(player, false);
		
			if (!func_64() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return func_73(player, false);
		}
	}

	if (player != _INVALID_PLAYER_INDEX())
	{
		str = func_72(&(Global_1887549[player /*611*/].f_10.f_105));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return func_73(player, false);
		else
			return str;
	}

	return "";
}

BOOL func_64() // Position - 0x1B19 (6937)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

Player func_65(Player plParam0) // Position - 0x1B2F (6959)
{
	if (func_30(plParam0))
		return Global_1887549[plParam0 /*611*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_66(Player plParam0) // Position - 0x1B52 (6994)
{
	var gamerHandle;

	gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };

	if (func_64())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle) && NETWORK::_NETWORK_CAN_TEXT_FROM_GAMER_BE_VIEWED(&gamerHandle))
				return true;

	return false;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x1B9D (7069)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_68(Player plParam0) // Position - 0x1BB4 (7092)
{
	var gamerHandle;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (_NETWORK_IS_PLAYER_VALID(plParam0, false, false))
		{
			gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };
		
			if (func_70(&gamerHandle))
				return true;
		
			if (!NETWORK::_NETWORK_CAN_TEXT_FROM_GAMER_BE_VIEWED(&gamerHandle))
				return true;
		
			if (MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION() || MISC::IS_PC_VERSION())
				if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
					return false;
			else if (func_64() || MISC::IS_PROSPERO_VERSION())
				if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
					if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
						return false;
		
			if (IS_GAMER_HANDLE_VALID(gamerHandle) && NETWORK::NETWORK_PERMISSIONS_HAS_GAMER_RECORD(&gamerHandle) && !NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
				return true;
		}
	}

	return true;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x1C6E (7278)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL func_70(Any* panParam0) // Position - 0x1C7E (7294)
{
	int i;

	if (!IS_GAMER_HANDLE_VALID(*panParam0))
		return false;

	for (i = 0; i < 31; i = i + 1)
	{
		if (IS_GAMER_HANDLE_VALID(Global_1981365[i /*13*/]))
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Global_1981365[i /*13*/], panParam0))
				return true;
	}

	return false;
}

BOOL func_71(Player plParam0, int iParam1) // Position - 0x1CD2 (7378)
{
	return IS_BIT_SET(Global_1887549[plParam0 /*611*/].f_10.f_4, iParam1);
}

const char* func_72(var uParam0) // Position - 0x1CEA (7402)
{
	return uParam0;
}

const char* func_73(Player plParam0, BOOL bParam1) // Position - 0x1CF4 (7412)
{
	if (!bParam1)
		if (func_75(plParam0, true))
			return func_74();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_74() // Position - 0x1D1B (7451)
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

BOOL func_75(Player plParam0, BOOL bParam1) // Position - 0x1D2B (7467)
{
	return func_76(plParam0, bParam1, 1);
}

BOOL func_76(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x1D3C (7484)
{
	Player player;

	if (!func_30(plParam0))
		return 0;

	if (!bParam1)
		if (func_77(plParam0, iParam2))
			return 0;

	player = Global_1887549[plParam0 /*611*/].f_10;

	if (func_30(player) && Global_1887549[player /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_77(Player plParam0, int iParam1) // Position - 0x1D98 (7576)
{
	if (func_30(plParam0))
		if (func_30(Global_1887549[plParam0 /*611*/].f_10))
			if (Global_1887549[plParam0 /*611*/].f_10 == plParam0 && Global_1887549[plParam0 /*611*/].f_10.f_431 == iParam1)
				return true;

	return false;
}

int func_78(Player plParam0) // Position - 0x1DE7 (7655)
{
	if (func_65(plParam0) == _INVALID_PLAYER_INDEX())
		return 0;

	return Global_1887549[plParam0 /*611*/].f_10.f_19;
}

BOOL func_79(Player plParam0) // Position - 0x1E0D (7693)
{
	if (!func_30(plParam0))
		return false;

	return IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 26);
}

eHudColour func_80(Player plParam0) // Position - 0x1E34 (7732)
{
	int num;

	num = func_83(plParam0);

	if (num != -1)
		return func_81(num);

	return HUD_COLOUR_WHITE;
}

eHudColour func_81(int iParam0) // Position - 0x1E54 (7764)
{
	int num;

	if (iParam0 > -1)
	{
		num = func_82(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

var func_82(int iParam0) // Position - 0x1F17 (7959)
{
	return Global_2648914.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_83(Player plParam0) // Position - 0x1F2E (7982)
{
	if (func_30(plParam0))
		if (func_84(plParam0, true))
			return Global_2648914.f_818.f_11[func_65(plParam0)];

	return -1;
}

BOOL func_84(Player plParam0, BOOL bParam1) // Position - 0x1F5E (8030)
{
	if (!func_30(plParam0))
		return false;

	if (!bParam1)
		if (func_85(plParam0))
			return false;

	return func_30(Global_1887549[plParam0 /*611*/].f_10);
}

BOOL func_85(Player plParam0) // Position - 0x1F96 (8086)
{
	if (func_30(plParam0))
		if (func_30(Global_1887549[plParam0 /*611*/].f_10))
			return Global_1887549[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

struct<16> func_86(Player plParam0) // Position - 0x1FCB (8139)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, PLAYER::GET_PLAYER_NAME(plParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
	return unk;
}

void func_87() // Position - 0x1FF2 (8178)
{
	if (Global_1882240.f_6)
		if (iLocal_92 != 3)
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
				Global_1882240.f_6 = 0;

	return;
}

void func_88() // Position - 0x2018 (8216)
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT);
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL);
	return;
}

void func_89(BOOL bParam0) // Position - 0x202E (8238)
{
	int value;
	int num;
	BOOL flag;

	plLocal_118 = _INVALID_PLAYER_INDEX();

	if (!(Global_21066.f_1 == 7))
		Global_21066.f_1 = 7;

	value = 0;

	if (bParam0)
		value = iLocal_117;

	if (value >= Global_1685085)
		value = 0;

	if (Global_23485)
	{
		func_51();
		Global_23485 = false;
		return;
	}

	num = func_32();
	num = num - func_98();

	if (func_84(PLAYER::PLAYER_ID(), false) && !func_97(true) && num <= 0)
	{
		func_95();
		return;
	}

	func_90();
	func_99(Global_21047, "DISPLAY_VIEW", BUILTIN::TO_FLOAT(25), BUILTIN::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
	func_55("CELL_BOSSAGE" /*SecuroServ*/);
	flag = false;

	if (num > 0)
		flag = true;

	if (flag)
		func_52(13, &uLocal_97, 12, &uLocal_105, 4, &uLocal_93, &uLocal_120);
	else
		func_52(1, "", 1, "", 4, &uLocal_93, &uLocal_120);

	iLocal_92 = 0;
	return;
}

void func_90() // Position - 0x2118 (8472)
{
	int i;
	int num;

	func_99(Global_21047, "SET_DATA_SLOT_EMPTY", BUILTIN::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);

	for (i = 0; i < func_32(); i = i + 1)
	{
		if (Global_1882240.f_7[i /*8*/].f_1 == 1 && Global_1882240.f_7[i /*8*/].f_7 == 0)
		{
			switch (Global_1882240.f_7[i /*8*/])
			{
				case 0:
					if (func_94(i, num))
						num = num + 1;
					break;
			
				case 1:
					if (func_92(i, num))
						num = num + 1;
					break;
			}
		}
	}

	if (num > 0)
		return;

	func_91();
	return;
}

void func_91() // Position - 0x21CD (8653)
{
	BOOL value;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (func_85(PLAYER::PLAYER_ID()))
		func_22("BA_APP_NONEB" /*No Invites*/);
	else
		func_22("BA_APP_NONE" /*No VIP Invites*/);

	func_22("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	value = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x222B (8747)
{
	var unk;
	eHudColour value;
	int num;

	if (Global_1882240.f_7[iParam0 /*8*/].f_2 == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1882240.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	unk = { func_86(Global_1882240.f_7[iParam0 /*8*/].f_2) };
	func_93(&unk);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1" /*Has challenged you to an Executive Deathmatch.*/);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	value = HUD_COLOUR_WHITE;
	num = func_83(Global_1882240.f_7[iParam0 /*8*/].f_2);

	if (num != -1)
		value = func_81(num);

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return true;
}

void func_93(const char* sParam0) // Position - 0x22DA (8922)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_94(int iParam0, int iParam1) // Position - 0x22E8 (8936)
{
	var unk;
	BOOL flag;
	int value;
	eHudColour value2;
	int num;

	if (Global_1882240.f_7[iParam0 /*8*/].f_2 == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1882240.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	unk = { func_86(Global_1882240.f_7[iParam0 /*8*/].f_2) };
	func_93(&unk);
	flag = func_79(Global_1882240.f_7[iParam0 /*8*/].f_2);
	value = func_78(Global_1882240.f_7[iParam0 /*8*/].f_2);

	if (value == 0)
	{
		if (flag)
			func_22("BA_APP_BODYCT" /*Wants you to become an Associate.*/);
		else
			func_22("BA_APP_BODY_T" /*Wants you to become a Bodyguard.*/);
	}
	else if (value == 1)
	{
		if (flag)
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3" /*Wants you to become an Associate.~n~~1~ other in this Organization.*/);
		else
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3" /*Wants you to become a Bodyguard.~n~~1~ other in this Organization.*/);
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(value);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (flag)
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2" /*Wants you to become an Associate.~n~~1~ others in this Organization.*/);
		else
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2" /*Wants you to become a Bodyguard.~n~~1~ others in this Organization.*/);
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(value);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	value2 = HUD_COLOUR_WHITE;
	num = func_83(Global_1882240.f_7[iParam0 /*8*/].f_2);

	if (num != -1)
		value2 = func_81(num);

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return true;
}

void func_95() // Position - 0x241D (9245)
{
	func_99(Global_21047, "SET_DATA_SLOT_EMPTY", BUILTIN::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_80(PLAYER::PLAYER_ID()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_96());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_22("BA_APP_NONEG" /*You are already a member of this Organization.*/);
	func_22("CELL_AGBOSSPIC" /*CHAR_GANGAPP*/);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_99(Global_21047, "DISPLAY_VIEW", BUILTIN::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_55("CELL_BOSSAGE" /*SecuroServ*/);
	func_52(1, "", 1, "", 4, &uLocal_93, &uLocal_120);
	iLocal_92 = 2;
	return;
}

const char* func_96() // Position - 0x24D5 (9429)
{
	Player player;
	const char* str;

	player = func_65(PLAYER::PLAYER_ID());

	if (player != _INVALID_PLAYER_INDEX())
	{
		if (player != PLAYER::PLAYER_ID())
		{
			if (func_71(player, 28) || func_71(PLAYER::PLAYER_ID(), 28) || func_68(player) && !func_66(player))
				return func_73(player, false);
		
			if (*Global_262145.f_34983)
				return func_73(player, false);
		
			if (!func_64() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return func_73(player, false);
		}
	
		str = func_72(&(Global_1887549[player /*611*/].f_10.f_105));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return func_73(player, false);
		else
			return str;
	}

	return "";
}

BOOL func_97(BOOL bParam0) // Position - 0x259E (9630)
{
	return func_75(PLAYER::PLAYER_ID(), bParam0);
}

int func_98() // Position - 0x25B0 (9648)
{
	int i;
	int num;

	for (i = 0; i < func_32(); i = i + 1)
	{
		if (Global_1882240.f_7[i /*8*/].f_7 == 1)
			num = num + 1;
	}

	return num;
}

void func_99(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x25E5 (9701)
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

void func_100() // Position - 0x2648 (9800)
{
	Global_1882240.f_1 = 0;
	func_101();
	return;
}

void func_101() // Position - 0x265B (9819)
{
	Global_1882240.f_5 = 0;
	return;
}

void func_102(var uParam0) // Position - 0x266A (9834)
{
	*uParam0 = 0;
	return;
}


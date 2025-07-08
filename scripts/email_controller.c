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
#endregion

void main() // Position - 0x0 (0)
{
	var unk;
	int num;
	int num2;
	int ms;
	BOOL flag;
	int i;
	int num3;
	int num4;
	int j;
	int num5;
	int num6;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int num7;
	BOOL flag5;
	BOOL flag6;
	int num8;

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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_70();

	unk = 122;
	func_69();
	func_68();
	Global_45598 = 0;
	num = func_61();
	num2 = func_61();
	ms = 2000;
	Global_45600 = 1;
	flag = true;

	while (true)
	{
		i = 0;
	
		if (flag)
		{
			if (IS_BIT_SET(Global_114344.f_24990, 4 - 1))
			{
				func_60(26);
				flag = false;
			}
		}
	
		if (!Global_45599 && MISC::GET_GAME_TIMER() > Global_44926)
		{
			for (i = 0; i < 122; i = i + 1)
			{
				if (Global_48934[i /*46*/] && !Global_48934[i /*46*/].f_1 && !Global_48934[i /*46*/].f_45)
				{
					unk[i] = unk[i] + ms;
				
					if (unk[i] > Global_48934[i /*46*/].f_43)
					{
						if (func_34(7, _CHAR_VIRTUAL_MP, 2, -1, 0))
						{
							func_32(i, false);
							unk[i] = 0;
							Global_45600 = 1;
						}
					}
				}
			
				BUILTIN::WAIT(0);
			}
		
			num = func_61();
			num3 = 0;
			num4 = 0;
			j = 0;
			func_20(num, num2, &num4, &num4, &num3, &num4, &num4, &num4);
		
			if (num3 < 0)
				num3 = num3 * -1;
		
			if (num3 > 0 && Global_21222.f_1 == 3)
			{
				num2 = num;
			
				if (Global_56331 > 0)
				{
					num5 = Global_56331;
					num6 = 0;
				
					while (num5 != 0)
					{
						if (Global_56332[num6 /*53*/].f_52 != 0 && num6 < 8 && Global_56332[num6 /*53*/].f_4)
						{
							Global_56332[num6 /*53*/].f_2 = Global_56332[num6 /*53*/].f_2 - num3;
							flag2 = false;
							flag3 = false;
							flag4 = false;
							num7 = 0;
						
							while (!flag4)
							{
								if (Global_54909[num7 /*203*/].f_1 != Global_56332[num6 /*53*/].f_52)
								{
									num7 = num7 + 1;
								}
								else
								{
									flag3 = true;
									flag4 = true;
								}
							
								if (num7 == 7)
								{
									flag4 = true;
									Global_56332[num6 /*53*/].f_52 = 0;
									flag2 = true;
								}
							}
						
							if (!flag3)
							{
								flag2 = true;
								Global_56332[num6 /*53*/].f_4 = 0;
							}
							else if (Global_56332[num6 /*53*/].f_2 < 1)
							{
								if (func_34(7, _CHAR_NULL, 2, -1, 0))
								{
									flag5 = false;
								
									if (Global_56332[num6 /*53*/].f_5 || Global_56332[num6 /*53*/].f_10 > 0)
										flag5 = true;
								
									if (func_17(Global_56332[num6 /*53*/], Global_56332[num6 /*53*/].f_1, flag5))
									{
										flag6 = true;
									
										if (Global_56332[num6 /*53*/].f_10 > 0)
											flag6 = false;
									
										if (Global_56332[num6 /*53*/].f_5)
											func_16(Global_56332[num6 /*53*/], &(Global_56332[num6 /*53*/].f_6), flag6);
									
										if (Global_56332[num6 /*53*/].f_10 > 0)
										{
											j = 0;
										
											for (j = 0; j < Global_56332[num6 /*53*/].f_10; j = j + 1)
											{
												func_15(Global_56332[num6 /*53*/], &Global_56332[num6 /*53*/].f_11[j /*4*/]);
											}
										}
									
										if (flag5 && !flag6)
											func_1(Global_56332[num6 /*53*/]);
									
										func_60(Global_56332[num6 /*53*/]);
									}
								
									Global_56332[num6 /*53*/].f_52 = 0;
									Global_56332[num6 /*53*/].f_5 = 0;
									Global_56332[num6 /*53*/].f_2 = 0;
									flag2 = true;
									Global_56332[num6 /*53*/].f_4 = 0;
								}
							}
						
							if (flag2)
								Global_56331 = Global_56331 - 1;
						
							num5 = num5 - 1;
						}
					
						num6 = num6 + 1;
					
						if (num6 == 8)
							num5 = 0;
					
						BUILTIN::WAIT(0);
					}
				}
			}
		}
	
		BUILTIN::WAIT(ms);
		Global_45601 = 0;
		Global_45602 = 0;
		Global_45603 = 0;
		num8 = Global_54547[0 /*120*/];
	
		if (num8 > 16)
			num8 = 16;
	
		for (i = 0; i < num8; i = i + 1)
		{
			if (!Global_54547[0 /*120*/].f_69[i])
				Global_45601 = Global_45601 + 1;
		}
	
		num8 = Global_54547[1 /*120*/];
	
		if (num8 > 16)
			num8 = 16;
	
		for (i = 0; i < num8; i = i + 1)
		{
			if (!Global_54547[1 /*120*/].f_69[i])
				Global_45602 = Global_45602 + 1;
		}
	
		num8 = Global_54547[2 /*120*/];
	
		if (num8 > 16)
			num8 = 16;
	
		for (i = 0; i < num8; i = i + 1)
		{
			if (!Global_54547[2 /*120*/].f_69[i])
				Global_45603 = Global_45603 + 1;
		}
	
		BUILTIN::WAIT(ms);
	}

	return;
}

void func_1(int iParam0) // Position - 0x439 (1081)
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	char* str;

	num = func_14(iParam0);

	if (num == -1)
		return;

	if (Global_54909[num /*203*/].f_9 == 0)
		return;

	num2 = Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/];
	num3 = Global_54909[num /*203*/].f_9 - 1;

	if (!Global_54909[num /*203*/].f_10[num3 /*48*/].f_1)
	{
		num4 = Global_54909[num /*203*/].f_10[num3 /*48*/];
		TEXT_LABEL_COPY(&unk, { func_13(Global_45609[num4 /*12*/].f_1) }, 4);
	}
	else
	{
		unk = { Global_54909[num /*203*/].f_10[num3 /*48*/].f_2 };
	}

	if (iParam0 == 28)
	{
		switch (num2)
		{
			case 249:
				str = "PW_FEED_EM_1" /*You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented...*/;
				break;
		
			case 269:
				str = "PW_FEED_EM_3" /*Hello Franklin,~n~The Southern San Andreas Tourist Board Young Amateur Wildlife Photographer of the Year Competition is over.~n~Some of our photographers fell off cli...*/;
				break;
		
			default:
				str = "PW_FEED_EM_2" /*Dear contestant,~n~Thank you for your recent photographic submission. Our image licensing department is already maximizing its profit-making potential. And you're a step clos...*/;
				break;
		}
	
		func_2(CHAR_FRANKLIN, Global_45609[num2 /*12*/].f_2, num2, str, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_45609[num2 /*12*/].f_3)
		{
			case 0:
				func_2(CHAR_MICHAEL, Global_45609[num2 /*12*/].f_2, num2, &unk, &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[0 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[1 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[2 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[3 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[4 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[5 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[6 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[7 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[8 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[9 /*4*/]);
				break;
		
			case 1:
				func_2(CHAR_FRANKLIN, Global_45609[num2 /*12*/].f_2, num2, &unk, &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[0 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[1 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[2 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[3 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[4 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[5 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[6 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[7 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[8 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[9 /*4*/]);
				break;
		
			case 2:
				func_2(CHAR_TREVOR, Global_45609[num2 /*12*/].f_2, num2, &unk, &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[0 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[1 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[2 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[3 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[4 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[5 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[6 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[7 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[8 /*4*/], &Global_54909[num /*203*/].f_10[num3 /*48*/].f_7[9 /*4*/]);
				break;
		}
	}

	return;
}

void func_2(eCharacter echParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13) // Position - 0x7A5 (1957)
{
	eCharacter character;
	BOOL flag;
	var txdName;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	character = _GET_CURRENT_PLAYER_CHARACTER();
	flag = false;
	TEXT_LABEL_ASSIGN_STRING(&txdName, func_5(iParam1, &flag), 64);

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
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_4(iParam1)), 0));
		else
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_4(iParam1)), 0));
	
		switch (Global_21222)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Michael", 24);
				Global_45601 = Global_45601 + 1;
			
				if (Global_45601 > 16)
					Global_45601 = 16;
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Trevor", 24);
				Global_45603 = Global_45603 + 1;
			
				if (Global_45603 > 16)
					Global_45603 = 16;
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Franklin", 24);
				Global_45602 = Global_45602 + 1;
			
				if (Global_45602 > 16)
					Global_45602 = 16;
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Default", 24);
				break;
		}
	
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_21211, true);
	}

	return;
}

void func_3(int iParam0) // Position - 0x983 (2435)
{
	Global_45604[Global_45608] = iParam0;
	Global_23643 = 1;
	Global_23642 = iParam0;
	Global_45608 = Global_45608 + 1;

	if (Global_45608 == 3)
		Global_45608 = 0;

	return;
}

char* func_4(int iParam0) // Position - 0x9B1 (2481)
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
			return "EMSTR_87" /*DockTease*/;
	
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
			return "EMSTR_640" /*Off-Road Events*/;
	
		case 64:
			return "EMSTR_643" /*DockTease*/;
	
		case 65:
			return "EMSTR_652" /*Brother Adrian*/;
	
		default:
		
	}

	return "NULL";
}

const char* func_5(int iParam0, var uParam1) // Position - 0xD17 (3351)
{
	*uParam1 = 1;

	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[0 /*29*/].f_7));
	
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[1 /*29*/].f_7));
	
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[2 /*29*/].f_7));
	
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[12 /*29*/].f_7));
	
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[60 /*29*/].f_7));
	
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[62 /*29*/].f_7));
	
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[14 /*29*/].f_7));
	
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[97 /*29*/].f_7));
	
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[99 /*29*/].f_7));
	
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[96 /*29*/].f_7));
	
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
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[15 /*29*/].f_7));
	
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[30 /*29*/].f_7));
	
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[17 /*29*/].f_7));
	
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[20 /*29*/].f_7));
	
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[43 /*29*/].f_7));
	
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[44 /*29*/].f_7));
	
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[19 /*29*/].f_7));
	
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[40 /*29*/].f_7));
	
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /*CHAR_SAEEDA*/);
	
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[64 /*29*/].f_7));
	
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
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[122 /*29*/].f_7));
	
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[125 /*29*/].f_7));
	
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[113 /*29*/].f_7));
	
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[126 /*29*/].f_7));
	
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[127 /*29*/].f_7));
	
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[124 /*29*/].f_7));
	
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[114 /*29*/].f_7));
	
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[115 /*29*/].f_7));
	
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[116 /*29*/].f_7));
	
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[123 /*29*/].f_7));
	
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[117 /*29*/].f_7));
	
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[118 /*29*/].f_7));
	
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[119 /*29*/].f_7));
	
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[120 /*29*/].f_7));
	
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2241[121 /*29*/].f_7));
	
		default:
		
	}

	*uParam1 = 0;
	return "ERROR!";
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x10E2 (4322)
{
	func_7();
	return Global_114344.f_2367.f_539.f_4321;
}

void func_7() // Position - 0x10FB (4347)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114344.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_9(character) && !func_8(14) || Global_113292)
			{
				if (Global_114344.f_2367.f_539.f_4321 != character && func_9(Global_114344.f_2367.f_539.f_4321))
					Global_114344.f_2367.f_539.f_4322 = Global_114344.f_2367.f_539.f_4321;
			
				Global_114344.f_2367.f_539.f_4323 = character;
				Global_114344.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114344.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114344.f_2367.f_539.f_4323 = Global_114344.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114344.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_8(int iParam0) // Position - 0x11F8 (4600)
{
	return Global_44375 == iParam0;
}

BOOL func_9(eCharacter echParam0) // Position - 0x1206 (4614)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1212 (4626)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x124F (4687)
{
	if (func_9(character))
		return func_12(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_12(eCharacter echParam0) // Position - 0x1274 (4724)
{
	return Global_2241[echParam0 /*29*/];
}

struct<16> func_13(int iParam0) // Position - 0x1283 (4739)
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

int func_14(int iParam0) // Position - 0x12B4 (4788)
{
	int i;
	int num;
	int num2;

	i = 0;
	num = -1;
	num2 = -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_54909[i /*203*/].f_2 == iParam0)
		{
			if (Global_54909[i /*203*/].f_1 > num2)
			{
				num2 = Global_54909[i /*203*/].f_1;
				num = i;
			}
		}
	}

	if (num != -1 && num2 != -1)
		return num;

	return -1;
}

void func_15(int iParam0, char* sParam1) // Position - 0x1318 (4888)
{
	int num;
	int num2;

	num = func_14(iParam0);

	if (num == -1)
		return;

	if (Global_54909[num /*203*/].f_9 == 0)
		return;

	if (Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_6 == 10)
		return;

	num2 = Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_6;
	Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_6 = Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_6 + 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_7[num2 /*4*/], sParam1, 16);
	return;
}

void func_16(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x13CD (5069)
{
	int num;

	num = func_14(iParam0);

	if (num == -1)
		return;

	if (Global_54909[num /*203*/].f_9 == 0)
		return;

	Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_1 = 1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_2), sParam1, 16);
	Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_6 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_7[0 /*4*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_7[1 /*4*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_7[2 /*4*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_7[3 /*4*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 - 1 /*48*/].f_7[4 /*4*/], "", 16);

	if (bParam2)
		func_1(iParam0);

	return;
}

BOOL func_17(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14F4 (5364)
{
	int num;
	int i;
	int num2;
	int num3;

	num = func_19(iParam0, true);

	if (num == -1)
		return false;

	if (Global_54909[num /*203*/].f_9 == 4)
		return false;

	Global_54909[num /*203*/].f_2 = iParam0;
	Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 /*48*/] = iParam1;
	Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 /*48*/].f_1 = 0;
	Global_54909[num /*203*/].f_10[Global_54909[num /*203*/].f_9 /*48*/].f_6 = 0;
	Global_54909[num /*203*/].f_9 = Global_54909[num /*203*/].f_9 + 1;
	i = 0;
	num2 = -1;

	for (i = 0; i < Global_54909[num /*203*/].f_3; i = i + 1)
	{
		if (num2 == -1)
			if (Global_54909[num /*203*/].f_4[i] == Global_45609[iParam1 /*12*/].f_3)
				num2 = i;
	}

	if (num2 == -1)
	{
		if (Global_54909[num /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_54909[num /*203*/].f_4[Global_54909[num /*203*/].f_3] = Global_45609[iParam1 /*12*/].f_3;
			Global_54909[num /*203*/].f_3 = Global_54909[num /*203*/].f_3 + 1;
		}
	}

	i = 0;
	num2 = -1;

	for (i = 0; i < Global_54909[num /*203*/].f_3; i = i + 1)
	{
		if (num2 == -1)
			if (Global_54909[num /*203*/].f_4[i] == Global_45609[iParam1 /*12*/].f_2)
				num2 = i;
	}

	if (num2 == -1)
	{
		if (Global_54909[num /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_54909[num /*203*/].f_4[Global_54909[num /*203*/].f_3] = Global_45609[iParam1 /*12*/].f_2;
			Global_54909[num /*203*/].f_3 = Global_54909[num /*203*/].f_3 + 1;
		}
	}

	i = 0;

	for (i = 0; i < Global_54909[num /*203*/].f_3; i = i + 1)
	{
		num3 = Global_54909[num /*203*/].f_4[i];
	
		if (num3 < 3)
			func_18(Global_54909[num /*203*/].f_4[i], Global_54909[num /*203*/].f_1, true, bParam2, false);
	}

	return true;
}

void func_18(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16F0 (5872)
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
		num4 = Global_48934[iParam1 /*46*/].f_42 - 1;
	
		if (num4 < 0)
			return;
	
		num5 = Global_48934[iParam1 /*46*/].f_32[num4];
		num3 = num5;
		unk = { func_13(Global_45609[num5 /*12*/].f_1) };
	
		if (Global_45609[num5 /*12*/].f_2 == iParam0 && !(Global_45609[num5 /*12*/].f_3 == iParam0))
			return;
	
		num2 = Global_45609[num5 /*12*/].f_2;
		num = Global_54547[iParam0 /*120*/];
	
		for (i = false; num >= 16; i = true)
		{
			num = num - 16;
		}
	
		if (i)
		{
			if (!Global_54547[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_45601 = Global_45601 - 1;
					
						if (Global_45601 < 0)
							Global_45601 = 0;
						break;
				
					case 1:
						Global_45602 = Global_45602 - 1;
					
						if (Global_45602 < 0)
							Global_45602 = 0;
						break;
				
					case 2:
						Global_45603 = Global_45603 - 1;
					
						if (Global_45603 < 0)
							Global_45603 = 0;
						break;
				}
			}
		}
	
		Global_54547[iParam0 /*120*/].f_18[num] = iParam1;
		Global_54547[iParam0 /*120*/].f_1[num] = num4;
		Global_54547[iParam0 /*120*/].f_35[num] = 0;
		Global_54547[iParam0 /*120*/].f_86[num] = false;
		Global_54547[iParam0 /*120*/].f_69[num] = false;
		Global_54547[iParam0 /*120*/] = Global_54547[iParam0 /*120*/] + 1;
	}
	else
	{
		num = Global_54547[iParam0 /*120*/];
	
		for (j = false; num >= 16; j = true)
		{
			num = num - 16;
		}
	
		if (j)
		{
			if (!Global_54547[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_45601 = Global_45601 - 1;
					
						if (Global_45601 < 0)
							Global_45601 = 0;
						break;
				
					case 1:
						Global_45602 = Global_45602 - 1;
					
						if (Global_45602 < 0)
							Global_45602 = 0;
						break;
				
					case 2:
						Global_45603 = Global_45603 - 1;
					
						if (Global_45603 < 0)
							Global_45603 = 0;
						break;
				}
			}
		}
	
		num6 = -1;
		k = 0;
	
		for (k = 0; k < 7; k = k + 1)
		{
			if (Global_54909[k /*203*/].f_1 == iParam1 && Global_54909[k /*203*/].f_9 > 0)
				num6 = k;
		}
	
		if (num6 == -1)
			return;
	
		Global_54547[iParam0 /*120*/].f_18[num] = Global_54909[num6 /*203*/].f_1;
		Global_54547[iParam0 /*120*/].f_1[num] = Global_54909[num6 /*203*/].f_9 - 1;
		Global_54547[iParam0 /*120*/].f_35[num] = 0;
		Global_54547[iParam0 /*120*/].f_86[num] = true;
		Global_54547[iParam0 /*120*/].f_69[num] = false;
		Global_54547[iParam0 /*120*/] = Global_54547[iParam0 /*120*/] + 1;
		num7 = Global_54547[iParam0 /*120*/].f_1[num];
		num8 = Global_54909[num6 /*203*/].f_10[num7 /*48*/];
		num3 = num8;
		num2 = Global_45609[num8 /*12*/].f_2;
	
		if (Global_54909[num6 /*203*/].f_10[Global_54909[num6 /*203*/].f_9 - 1 /*48*/].f_1)
			TEXT_LABEL_COPY(&unk, { Global_54909[num6 /*203*/].f_10[Global_54909[num6 /*203*/].f_9 - 1 /*48*/].f_2 }, 16);
		else
			unk = { func_13(Global_45609[num8 /*12*/].f_1) };
	}

	if (!bParam4)
	{
		if (!Global_54547[iParam0 /*120*/].f_69[num] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 1:
					if (num3 == 249)
						func_2(CHAR_FRANKLIN, num2, num3, "PW_FEED_EM_1" /*You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented...*/, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					else
						func_2(CHAR_FRANKLIN, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 2:
					func_2(CHAR_TREVOR, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}

	return;
}

int func_19(int iParam0, BOOL bParam1) // Position - 0x1AC3 (6851)
{
	int num;
	int i;
	BOOL flag;
	BOOL flag2;
	int num2;
	int num3;
	int j;
	int num4;
	int k;

	num = func_14(iParam0);

	if (num > -1)
		if (Global_54909[num /*203*/].f_9 < 4)
			return num;

	i = 0;
	flag = false;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_54909[i /*203*/] == 0)
			flag = true;
	}

	if (!flag)
		return -1;

	flag2 = true;
	i = 0;
	num2 = -1;
	num3 = -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_54909[i /*203*/] == 0)
		{
			if (flag2)
			{
				num2 = i;
				num3 = Global_54909[i /*203*/].f_1;
				flag2 = false;
			}
			else if (num3 > Global_54909[i /*203*/].f_1)
			{
				num2 = i;
				num3 = Global_54909[i /*203*/].f_1;
			}
		}
	}

	if (Global_54909[num2 /*203*/].f_9 > 0)
	{
		i = 0;
	
		for (i = 0; i < Global_54909[num2 /*203*/].f_9; i = i + 1)
		{
			j = 0;
		
			for (j = 0; j < 3; j = j + 1)
			{
				num4 = Global_54547[j /*120*/];
			
				if (num4 > 16)
					num4 = 16;
			
				k = 0;
			
				for (k = 0; k < num4; k = k + 1)
				{
					if (Global_54547[j /*120*/].f_86[k])
					{
						if (!Global_54547[j /*120*/].f_69[k])
						{
							if (Global_54547[j /*120*/].f_18[k] == Global_54909[num2 /*203*/].f_1)
							{
								if (Global_54547[j /*120*/].f_1[k] == i)
								{
									switch (j)
									{
										case 0:
											Global_45601 = Global_45601 - 1;
											break;
									
										case 1:
											Global_45602 = Global_45602 - 1;
											break;
									
										case 2:
											Global_45603 = Global_45603 - 1;
											break;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	Global_54909[num2 /*203*/].f_2 = iParam0;
	Global_54909[num2 /*203*/].f_3 = 0;

	if (!bParam1)
		Global_54909[num2 /*203*/] = 1;

	Global_114344.f_21041.f_310 = Global_114344.f_21041.f_310 + 1;

	if (Global_114344.f_21041.f_310 == 0)
		Global_114344.f_21041.f_310 = 1;

	Global_54909[num2 /*203*/].f_1 = Global_114344.f_21041.f_310;
	Global_54909[num2 /*203*/].f_9 = 0;
	return num2;
}

void func_20(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x1CDB (7387)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_30(iParam0, iParam1))
	{
		num = func_29(iParam1);
		num2 = func_27(iParam0);
		num3 = func_27(iParam0) - func_27(iParam1);
		num4 = func_29(iParam0) - func_29(iParam1);
		num5 = func_26(iParam0) - func_26(iParam1);
		num6 = func_25(iParam0) - func_25(iParam1);
		num7 = func_24(iParam0) - func_24(iParam1);
		num8 = func_23(iParam0) - func_23(iParam1);
	}
	else
	{
		num = func_29(iParam0);
		num2 = func_27(iParam1);
		num3 = func_27(iParam1) - func_27(iParam0);
		num4 = func_29(iParam1) - func_29(iParam0);
		num5 = func_26(iParam1) - func_26(iParam0);
		num6 = func_25(iParam1) - func_25(iParam0);
		num7 = func_24(iParam1) - func_24(iParam0);
		num8 = func_23(iParam1) - func_23(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_22(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_21(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1EDC (7900)
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_22(int iParam0, int iParam1) // Position - 0x1F1E (7966)
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_23(int iParam0) // Position - 0x1FC0 (8128)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_24(int iParam0) // Position - 0x1FD3 (8147)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_25(int iParam0) // Position - 0x1FE6 (8166)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_26(int iParam0) // Position - 0x1FF9 (8185)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_27(int iParam0) // Position - 0x200B (8203)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_28(BOOL bParam0, var uParam1, var uParam2) // Position - 0x202D (8237)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_29(int iParam0) // Position - 0x2044 (8260)
{
	return iParam0 & 15;
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x2051 (8273)
{
	int num;
	int num2;

	if (!func_31(iParam1) || !func_31(iParam0))
		return true;

	num = func_27(iParam0);
	num2 = func_27(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_29(iParam0);
	num2 = func_29(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_26(iParam0);
	num2 = func_26(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_25(iParam0);
	num2 = func_25(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_24(iParam0);
	num2 = func_24(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_23(iParam0);
	num2 = func_23(iParam1);

	if (num > num2)
		return true;

	return false;
}

BOOL func_31(int iParam0) // Position - 0x215D (8541)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_23(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_24(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_25(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_27(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_29(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_26(iParam0);

	if (num6 < 1 || num6 > func_22(num5, num4))
		return false;

	return true;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0x2239 (8761)
{
	int num;
	int num2;
	int num3;
	int i;

	if (!Global_48934[iParam0 /*46*/] && !Global_48934[iParam0 /*46*/].f_1)
		return;

	if (Global_48934[iParam0 /*46*/].f_31 == Global_48934[iParam0 /*46*/].f_30)
	{
		num = Global_48934[iParam0 /*46*/].f_42 - 1;
	
		if (num < 0)
			return;
	
		if (Global_45609[Global_48934[iParam0 /*46*/].f_32[num] /*12*/].f_4 == 0)
			Global_48934[iParam0 /*46*/].f_1 = 1;
	
		return;
	}

	if (Global_48934[iParam0 /*46*/].f_1)
		return;

	num2 = Global_48934[iParam0 /*46*/].f_8[Global_48934[iParam0 /*46*/].f_31];
	Global_48934[iParam0 /*46*/].f_31 = Global_48934[iParam0 /*46*/].f_31 + 1;
	func_33(iParam0, num2);
	Global_48934[iParam0 /*46*/].f_45 = Global_45609[num2 /*12*/].f_10;
	Global_48934[iParam0 /*46*/].f_43 = Global_45609[num2 /*12*/].f_11;
	num3 = Global_48934[iParam0 /*46*/].f_2;
	func_18(Global_45609[num2 /*12*/].f_3, iParam0, false, false, bParam1);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_48934[iParam0 /*46*/].f_3[i] != Global_45609[num2 /*12*/].f_2 && Global_48934[iParam0 /*46*/].f_3[i] != Global_45609[num2 /*12*/].f_3)
			func_18(Global_48934[iParam0 /*46*/].f_3[i], iParam0, false, false, bParam1);
	}

	if (Global_48934[iParam0 /*46*/].f_31 == Global_48934[iParam0 /*46*/].f_30)
	{
		if (Global_45609[Global_48934[iParam0 /*46*/].f_32[Global_48934[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0)
		{
			Global_48934[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}

	return;
}

int func_33(int iParam0, int iParam1) // Position - 0x23D5 (9173)
{
	if (Global_48934[iParam0 /*46*/].f_42 >= 9)
		return 0;

	Global_48934[iParam0 /*46*/].f_32[Global_48934[iParam0 /*46*/].f_42] = iParam1;
	Global_48934[iParam0 /*46*/].f_42 = Global_48934[iParam0 /*46*/].f_42 + 1;
	return 1;
}

BOOL func_34(int iParam0, eCharacter echParam1, int iParam2, int iParam3, int iParam4) // Position - 0x241A (9242)
{
	int num;
	int num2;
	int num3;
	int num4;
	eCharacter character;
	var sizeAndPeds;
	var unk17;
	int i;
	int j;
	Entity entity;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (func_59())
		return false;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			return false;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return false;

	if (func_58() && iParam2 < 4)
		return false;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (func_56(PLAYER::PLAYER_PED_ID()))
			if (IS_BIT_SET(iParam0, _GET_CURRENT_PLAYER_CHARACTER_0()) && !IS_BIT_SET(iParam4, 19))
				return false;

	if (Global_79742)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (Global_76838)
		return false;

	if (Global_97875)
		return false;

	if (func_54() || Global_23992.f_4 && Global_23992.f_104 == 4 || func_53())
		return false;

	if (IS_BIT_SET(iParam4, 18))
		if (!IS_BIT_SET(iParam0, _GET_CURRENT_PLAYER_CHARACTER_0()))
			return false;

	num = 1;

	if (Global_101893 == 13 || Global_101893 == 10 || Global_101893 == 11 || Global_101893 == 12)
		num = 0;

	if (num == 1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
			return false;
	
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
			return false;
	
		if (Global_98796)
			return false;
	
		if (func_46(50f, true) != -1)
			return false;
	
		if (echParam1 == CHAR_AMANDA || echParam1 == CHAR_LAMAR || echParam1 == CHAR_JIMMY || echParam1 == CHAR_MICHAEL || echParam1 == CHAR_FRANKLIN || echParam1 == CHAR_TREVOR)
		{
			if (IS_BIT_SET(iParam0, _GET_CURRENT_PLAYER_CHARACTER_0()))
			{
				num2 = func_43(_GET_CURRENT_PLAYER_CHARACTER());
				num3 = func_43(echParam1);
				num4 = func_42(num2, num3);
			
				if (num4 < 9)
					if (Global_114344.f_18107.f_175[num4 /*19*/].f_8 == 1 || Global_114344.f_18107.f_175[num4 /*19*/].f_8 == 2)
						if (func_41(&(Global_114344.f_18107.f_175[num4 /*19*/].f_5)))
							if (func_38(&(Global_114344.f_18107.f_175[num4 /*19*/].f_5)) < 30f)
								return false;
			}
		}
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
		return false;

	if (func_37())
		return false;

	if (IS_BIT_SET(iParam4, 3))
	{
		if (Global_113391)
			return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				return false;
	
		if (Global_113051.f_19 != 0)
			return false;
	
		if (Global_44375 == 5)
			return false;
	}

	if (iParam3 != -1)
		if (func_36(PLAYER::PLAYER_PED_ID(), iParam3, 0))
			return false;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (func_9(character))
	{
		sizeAndPeds = 16;
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
		unk17 = 2;
	
		switch (echParam1)
		{
			case CHAR_ALL_PLAYERS_CONF:
				switch (character)
				{
					case CHAR_MICHAEL:
						unk17[0] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
						unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
						break;
				
					case CHAR_FRANKLIN:
						unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
						unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
						break;
				
					case CHAR_TREVOR:
						unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
						unk17[1] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
						break;
				}
				break;
		
			case CHAR_FRANK_TREV_CONF:
				unk17[0] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
				break;
		
			case CHAR_LEST_FRANK_CONF:
				unk17[0] = func_35(CHAR_LESTER);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
				break;
		
			case CHAR_LEST_MIKE_CONF:
				unk17[0] = func_35(CHAR_LESTER);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				break;
		
			case CHAR_MIKE_FRANK_CONF:
				unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
				break;
		
			case CHAR_MIKE_TREV_CONF:
				unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
				break;
		
			case CHAR_STEVE_MIKE_CONF:
				unk17[0] = func_35(CHAR_STEVE);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				break;
		
			case CHAR_STEVE_TREV_CONF:
				unk17[0] = func_35(CHAR_STEVE);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				break;
		
			default:
				if (func_9(echParam1))
					unk17[0] = _GET_CHARACTER_MODEL(echParam1);
				else
					unk17[0] = func_35(echParam1);
			
				unk17[1] = 0;
				break;
		}
	
		for (i = 0; i < 2; i = i + 1)
		{
			if (unk17[i] != 0)
			{
				for (j = 0; j < 16; j = j + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[j]))
						if (ENTITY::GET_ENTITY_MODEL(sizeAndPeds[j]) == unk17[i])
							if (!ENTITY::IS_ENTITY_DEAD(sizeAndPeds[j], false))
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(sizeAndPeds[j], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
										return false;
							else
								return false;
				}
			
				entity = 0;
			
				switch (unk17[i])
				{
					case joaat("Player_Zero"):
						entity = Global_99346[0];
						break;
				
					case joaat("Player_One"):
						entity = Global_99346[1];
						break;
				
					case joaat("Player_Two"):
						entity = Global_99346[2];
						break;
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(entity))
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(entity, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
							return false;
			
				switch (unk17[i])
				{
					case joaat("Player_Zero"):
						entity = Global_101818[0];
						break;
				
					case joaat("Player_One"):
						entity = Global_101818[1];
						break;
				
					case joaat("Player_Two"):
						entity = Global_101818[2];
						break;
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(entity))
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(entity, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
							return false;
			}
		}
	}
	else
	{
		return false;
	}

	return true;
}

Hash func_35(eCharacter echParam0) // Position - 0x2A06 (10758)
{
	if (!func_9(echParam0))
		return func_12(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}

BOOL func_36(Ped pedParam0, int iParam1, int iParam2) // Position - 0x2A2C (10796)
{
	Vector3 vector;
	int num;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vector = { Global_44376[iParam1 /*5*/] };
		num = vector.f_3;
	
		if (iParam2 > 0f)
			num = iParam2;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, true), vector, true) < num)
			return true;
		else if (vector.f_4 != -1)
			return func_36(pedParam0, vector.f_4, iParam2);
	}

	return false;
}

BOOL func_37() // Position - 0x2A92 (10898)
{
	if (Global_80005)
		return true;
	else if (Global_64500 && !Global_64506)
		return true;

	return false;
}

float func_38(var uParam0) // Position - 0x2ABC (10940)
{
	if (func_41(uParam0))
		if (func_40(uParam0))
			return uParam0->f_2;
		else
			return func_39(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_39(BOOL bParam0) // Position - 0x2AF8 (11000)
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

BOOL func_40(var uParam0) // Position - 0x2B50 (11088)
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_41(var uParam0) // Position - 0x2B5D (11101)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_42(int iParam0, int iParam1) // Position - 0x2B6A (11114)
{
	int num;

	if (iParam0 != 0 && iParam0 != 1 && iParam0 != 2)
	{
		if (iParam1 == 0 || iParam1 == 1 || iParam1 == 2)
		{
			num = iParam1;
			iParam1 = iParam0;
			iParam0 = num;
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 10;
			
				case 4:
					return 5;
			
				case 5:
					return 8;
			
				default:
					return 10;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 10;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 6;
			
				case 5:
					return 10;
			
				default:
					return 10;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
			
				case 1:
					return 1;
			
				case 2:
					return 10;
			
				case 3:
					return 4;
			
				case 4:
					return 7;
			
				case 5:
					return 10;
			
				default:
					return 10;
			}
			break;
	}

	return 10;
}

int func_43(eCharacter echParam0) // Position - 0x2CF4 (11508)
{
	if (echParam0 == _CHAR_NULL)
		return 7;

	if (echParam0 < func_45())
		return func_44(echParam0);

	if (echParam0 == _CHAR_VIRTUAL_MP)
		return 7;

	if (echParam0 == func_45())
		return 6;

	if (echParam0 == 212)
		return 6;

	return 6;
}

int func_44(eCharacter echParam0) // Position - 0x2D4C (11596)
{
	return Global_2241[echParam0 /*29*/].f_11;
}

eCharacter func_45() // Position - 0x2D5D (11613)
{
	if (Global_33281 == 0 || Global_33281 == 2)
		return 211;

	return 161;
}

int func_46(float fParam0, BOOL bParam1) // Position - 0x2D7F (11647)
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		num4 = func_52();
		i = 0;
	
		for (i = 0; i < 63; i = i + 1)
		{
			num = i;
		
			if (IS_BIT_SET(Global_114344.f_18578[num /*6*/], 2) && !IS_BIT_SET(Global_114344.f_18578[num /*6*/], 3))
			{
				func_47(num, &unk);
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
			
				if (distanceBetweenCoords < num3)
				{
					flag = true;
				
					if (bParam1)
						if (num4 != unk.f_26)
							flag = false;
				
					if (flag)
					{
						num2 = num;
						num3 = distanceBetweenCoords;
					}
				}
			}
		}
	}

	return num2;
}

void func_47(int iParam0, var uParam1) // Position - 0x2E25 (11813)
{
	switch (iParam0)
	{
		case 0:
			func_48(uParam1, "Abigail1", func_50(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 1:
			func_48(uParam1, "Abigail2", func_50(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 2:
			func_48(uParam1, "Barry1", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 3:
			func_48(uParam1, "Barry2", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 4:
			func_48(uParam1, "Barry3", func_50(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 5:
			func_48(uParam1, "Barry3A", func_50(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 6:
			func_48(uParam1, "Barry3C", func_50(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 7:
			func_48(uParam1, "Barry4", func_50(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_49(iParam0), 0, 0);
			break;
	
		case 8:
			func_48(uParam1, "Dreyfuss1", func_50(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 9:
			func_48(uParam1, "Epsilon1", func_50(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 10:
			func_48(uParam1, "Epsilon2", func_50(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 11:
			func_48(uParam1, "Epsilon3", func_50(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 12:
			func_48(uParam1, "Epsilon4", func_50(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 13:
			func_48(uParam1, "Epsilon5", func_50(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 14:
			func_48(uParam1, "Epsilon6", func_50(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 15:
			func_48(uParam1, "Epsilon7", func_50(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 16:
			func_48(uParam1, "Epsilon8", func_50(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 17:
			func_48(uParam1, "Extreme1", func_50(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 18:
			func_48(uParam1, "Extreme2", func_50(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 19:
			func_48(uParam1, "Extreme3", func_50(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 20:
			func_48(uParam1, "Extreme4", func_50(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 21:
			func_48(uParam1, "Fanatic1", func_50(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_49(iParam0), 1, 0);
			break;
	
		case 22:
			func_48(uParam1, "Fanatic2", func_50(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_49(iParam0), 1, 0);
			break;
	
		case 23:
			func_48(uParam1, "Fanatic3", func_50(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_49(iParam0), 0, 1);
			break;
	
		case 24:
			func_48(uParam1, "Hao1", func_50(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_49(iParam0), 0, 1);
			break;
	
		case 25:
			func_48(uParam1, "Hunting1", func_50(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 26:
			func_48(uParam1, "Hunting2", func_50(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 27:
			func_48(uParam1, "Josh1", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 28:
			func_48(uParam1, "Josh2", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 29:
			func_48(uParam1, "Josh3", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 30:
			func_48(uParam1, "Josh4", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 31:
			func_48(uParam1, "Maude1", func_50(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 32:
			func_48(uParam1, "Minute1", func_50(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 33:
			func_48(uParam1, "Minute2", func_50(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 34:
			func_48(uParam1, "Minute3", func_50(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 35:
			func_48(uParam1, "MrsPhilips1", func_50(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 36:
			func_48(uParam1, "MrsPhilips2", func_50(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 37:
			func_48(uParam1, "Nigel1", func_50(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 38:
			func_48(uParam1, "Nigel1A", func_50(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 39:
			func_48(uParam1, "Nigel1B", func_50(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
	
		case 40:
			func_48(uParam1, "Nigel1C", func_50(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
	
		case 41:
			func_48(uParam1, "Nigel1D", func_50(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
	
		case 42:
			func_48(uParam1, "Nigel2", func_50(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 43:
			func_48(uParam1, "Nigel3", func_50(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 44:
			func_48(uParam1, "Omega1", func_50(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 45:
			func_48(uParam1, "Omega2", func_50(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 46:
			func_48(uParam1, "Paparazzo1", func_50(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 47:
			func_48(uParam1, "Paparazzo2", func_50(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 48:
			func_48(uParam1, "Paparazzo3", func_50(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 49:
			func_48(uParam1, "Paparazzo3A", func_50(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 50:
			func_48(uParam1, "Paparazzo3B", func_50(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 51:
			func_48(uParam1, "Paparazzo4", func_50(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 52:
			func_48(uParam1, "Rampage1", func_50(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 54:
			func_48(uParam1, "Rampage3", func_50(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 55:
			func_48(uParam1, "Rampage4", func_50(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 56:
			func_48(uParam1, "Rampage5", func_50(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 53:
			func_48(uParam1, "Rampage2", func_50(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 57:
			func_48(uParam1, "TheLastOne", func_50(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 58:
			func_48(uParam1, "Tonya1", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 59:
			func_48(uParam1, "Tonya2", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 60:
			func_48(uParam1, "Tonya3", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 61:
			func_48(uParam1, "Tonya4", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 62:
			func_48(uParam1, "Tonya5", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_48(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x406E (16494)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_49(int iParam0) // Position - 0x40FF (16639)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
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
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_50(int iParam0) // Position - 0x4445 (17477)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_51(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_51(int iParam0) // Position - 0x447D (17533)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

int func_52() // Position - 0x48CA (18634)
{
	func_7();

	switch (Global_114344.f_2367.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

BOOL func_53() // Position - 0x4910 (18704)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_54() // Position - 0x492A (18730)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99346.f_44 == 1;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x4946 (18758)
{
	func_7();
	return Global_114344.f_2367.f_539.f_4321;
}

BOOL func_56(Ped pedParam0) // Position - 0x495F (18783)
{
	if (pedParam0 == 0)
		return false;

	if (func_57(pedParam0) == -1)
		return false;

	return true;
}

int func_57(Ped pedParam0) // Position - 0x4980 (18816)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45376[i /*5*/] == -1))
			if (pedParam0 == Global_45376[i /*5*/].f_1)
				return i;
	}

	return -1;
}

BOOL func_58() // Position - 0x49C9 (18889)
{
	if (Global_44375 == 15)
		return false;

	return true;
}

BOOL func_59() // Position - 0x49DE (18910)
{
	if (Global_21222.f_1 == 1)
		return true;

	return false;
}

void func_60(int iParam0) // Position - 0x49F7 (18935)
{
	int num;

	if (iParam0 == 26)
		if (!IS_BIT_SET(Global_114344.f_24990, 4 - 1))
			return;

	num = func_14(iParam0);

	if (num == -1)
		return;

	Global_54909[num /*203*/] = 0;
	return;
}

int func_61() // Position - 0x4A31 (18993)
{
	var unk;

	func_67(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_66(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_65(&unk, CLOCK::GET_CLOCK_HOURS());
	func_64(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_63(&unk, CLOCK::GET_CLOCK_MONTH());
	func_62(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_62(var uParam0, int iParam1) // Position - 0x4A77 (19063)
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_63(var uParam0, int iParam1) // Position - 0x4AFD (19197)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_64(var uParam0, int iParam1) // Position - 0x4B30 (19248)
{
	int num;
	int num2;

	num = func_29(*uParam0);
	num2 = func_27(*uParam0);

	if (iParam1 < 1 || iParam1 > func_22(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_65(var uParam0, int iParam1) // Position - 0x4B81 (19329)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_66(var uParam0, int iParam1) // Position - 0x4BBB (19387)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_67(var uParam0, int iParam1) // Position - 0x4BF6 (19446)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_68() // Position - 0x4C32 (19506)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_54547[i /*120*/] = Global_114344.f_21041[i /*103*/];
	
		for (j = 0; j < 16; j = j + 1)
		{
			Global_54547[i /*120*/].f_1[j] = Global_114344.f_21041[i /*103*/].f_1[j];
			Global_54547[i /*120*/].f_18[j] = Global_114344.f_21041[i /*103*/].f_18[j];
			Global_54547[i /*120*/].f_35[j] = Global_114344.f_21041[i /*103*/].f_35[j];
			Global_54547[i /*120*/].f_52[j] = Global_114344.f_21041[i /*103*/].f_52[j];
			Global_54547[i /*120*/].f_69[j] = Global_114344.f_21041[i /*103*/].f_69[j];
			Global_54547[i /*120*/].f_86[j] = Global_114344.f_21041[i /*103*/].f_86[j];
		}
	}

	for (i = 0; i < 7; i = i + 1)
	{
		Global_54909[i /*203*/].f_2 = Global_114344.f_21041.f_311[i /*203*/];
		Global_54909[i /*203*/] = Global_114344.f_21041.f_311[i /*203*/].f_2;
		Global_54909[i /*203*/].f_3 = Global_114344.f_21041.f_311[i /*203*/].f_3;
		Global_54909[i /*203*/].f_1 = Global_114344.f_21041.f_311[i /*203*/].f_1;
		Global_54909[i /*203*/].f_9 = Global_114344.f_21041.f_311[i /*203*/].f_9;
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_54909[i /*203*/].f_4[j] = Global_114344.f_21041.f_311[i /*203*/].f_4[j];
		}
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_54909[i /*203*/].f_10[j /*48*/] = Global_114344.f_21041.f_311[i /*203*/].f_10[j /*48*/];
			Global_54909[i /*203*/].f_10[j /*48*/].f_1 = Global_114344.f_21041.f_311[i /*203*/].f_10[j /*48*/].f_1;
			Global_54909[i /*203*/].f_10[j /*48*/].f_2 = { Global_114344.f_21041.f_311[i /*203*/].f_10[j /*48*/].f_2 };
			Global_54909[i /*203*/].f_10[j /*48*/].f_6 = Global_114344.f_21041.f_311[i /*203*/].f_10[j /*48*/].f_6;
		
			for (k = 0; k < 10; k = k + 1)
			{
				Global_54909[i /*203*/].f_10[j /*48*/].f_7[k /*4*/] = { Global_114344.f_21041.f_311[i /*203*/].f_10[j /*48*/].f_7[k /*4*/] };
			}
		}
	}

	for (i = 0; i < 122; i = i + 1)
	{
		Global_48934[i /*46*/] = Global_114344.f_21041.f_1733[i /*14*/];
		Global_48934[i /*46*/].f_1 = Global_114344.f_21041.f_1733[i /*14*/].f_1;
		Global_48934[i /*46*/].f_45 = Global_114344.f_21041.f_1733[i /*14*/].f_2;
		Global_48934[i /*46*/].f_31 = Global_114344.f_21041.f_1733[i /*14*/].f_3;
	
		for (j = 0; j < 9; j = j + 1)
		{
			if (Global_114344.f_21041.f_1733[i /*14*/].f_4[j] > 0)
			{
				Global_48934[i /*46*/].f_32[j] = Global_114344.f_21041.f_1733[i /*14*/].f_4[j] - 1;
				Global_48934[i /*46*/].f_42 = Global_48934[i /*46*/].f_42 + 1;
			}
		}
	}

	Global_56331 = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		Global_56332[i /*53*/] = Global_114344.f_21041.f_3442[i /*53*/];
		Global_56332[i /*53*/].f_1 = Global_114344.f_21041.f_3442[i /*53*/].f_1;
		Global_56332[i /*53*/].f_2 = Global_114344.f_21041.f_3442[i /*53*/].f_2;
		Global_56332[i /*53*/].f_5 = Global_114344.f_21041.f_3442[i /*53*/].f_5;
		Global_56332[i /*53*/].f_6 = { Global_114344.f_21041.f_3442[i /*53*/].f_6 };
		Global_56332[i /*53*/].f_10 = Global_114344.f_21041.f_3442[i /*53*/].f_10;
	
		for (j = 0; j < 10; j = j + 1)
		{
			Global_56332[i /*53*/].f_11[j /*4*/] = { Global_114344.f_21041.f_3442[i /*53*/].f_11[j /*4*/] };
		}
	
		Global_56332[i /*53*/].f_52 = Global_114344.f_21041.f_3442[i /*53*/].f_52;
	
		if (Global_56332[i /*53*/].f_52 != 0)
			Global_56331 = Global_56331 + 1;
	}

	return;
}

void func_69() // Position - 0x50B5 (20661)
{
	Global_45609[0 /*12*/] = 15;
	Global_45609[0 /*12*/].f_1 = 16;
	Global_45609[0 /*12*/].f_2 = 4;
	Global_45609[0 /*12*/].f_3 = 0;
	Global_45609[0 /*12*/].f_10 = 1;
	Global_45609[0 /*12*/].f_11 = 0;
	Global_45609[0 /*12*/].f_4 = 0;
	Global_45609[1 /*12*/] = 17;
	Global_45609[1 /*12*/].f_1 = 16;
	Global_45609[1 /*12*/].f_2 = 4;
	Global_45609[1 /*12*/].f_3 = 0;
	Global_45609[1 /*12*/].f_10 = 1;
	Global_45609[1 /*12*/].f_11 = 0;
	Global_45609[1 /*12*/].f_4 = 0;
	Global_45609[2 /*12*/] = 18;
	Global_45609[2 /*12*/].f_1 = 16;
	Global_45609[2 /*12*/].f_2 = 4;
	Global_45609[2 /*12*/].f_3 = 0;
	Global_45609[2 /*12*/].f_10 = 1;
	Global_45609[2 /*12*/].f_11 = 0;
	Global_45609[2 /*12*/].f_4 = 0;
	Global_45609[3 /*12*/] = 19;
	Global_45609[3 /*12*/].f_1 = 16;
	Global_45609[3 /*12*/].f_2 = 4;
	Global_45609[3 /*12*/].f_3 = 0;
	Global_45609[3 /*12*/].f_10 = 1;
	Global_45609[3 /*12*/].f_11 = 0;
	Global_45609[3 /*12*/].f_4 = 0;
	Global_45609[4 /*12*/] = 20;
	Global_45609[4 /*12*/].f_1 = 16;
	Global_45609[4 /*12*/].f_2 = 4;
	Global_45609[4 /*12*/].f_3 = 0;
	Global_45609[4 /*12*/].f_10 = 1;
	Global_45609[4 /*12*/].f_11 = 0;
	Global_45609[4 /*12*/].f_4 = 0;
	Global_45609[5 /*12*/] = 21;
	Global_45609[5 /*12*/].f_1 = 16;
	Global_45609[5 /*12*/].f_2 = 4;
	Global_45609[5 /*12*/].f_3 = 0;
	Global_45609[5 /*12*/].f_10 = 1;
	Global_45609[5 /*12*/].f_11 = 0;
	Global_45609[5 /*12*/].f_4 = 0;
	Global_45609[6 /*12*/] = 22;
	Global_45609[6 /*12*/].f_1 = 16;
	Global_45609[6 /*12*/].f_2 = 4;
	Global_45609[6 /*12*/].f_3 = 0;
	Global_45609[6 /*12*/].f_10 = 0;
	Global_45609[6 /*12*/].f_11 = 0;
	Global_45609[6 /*12*/].f_4 = 0;
	Global_45609[7 /*12*/] = 23;
	Global_45609[7 /*12*/].f_1 = 24;
	Global_45609[7 /*12*/].f_2 = 4;
	Global_45609[7 /*12*/].f_3 = 0;
	Global_45609[7 /*12*/].f_10 = 0;
	Global_45609[7 /*12*/].f_11 = 0;
	Global_45609[7 /*12*/].f_4 = 0;
	Global_45609[8 /*12*/] = 25;
	Global_45609[8 /*12*/].f_1 = 26;
	Global_45609[8 /*12*/].f_2 = 4;
	Global_45609[8 /*12*/].f_3 = 0;
	Global_45609[8 /*12*/].f_10 = 0;
	Global_45609[8 /*12*/].f_11 = 0;
	Global_45609[8 /*12*/].f_4 = 0;
	Global_45609[9 /*12*/] = 27;
	Global_45609[9 /*12*/].f_1 = 28;
	Global_45609[9 /*12*/].f_2 = 4;
	Global_45609[9 /*12*/].f_3 = 0;
	Global_45609[9 /*12*/].f_10 = 0;
	Global_45609[9 /*12*/].f_11 = 0;
	Global_45609[9 /*12*/].f_4 = 0;
	Global_45609[10 /*12*/] = 32;
	Global_45609[10 /*12*/].f_1 = 33;
	Global_45609[10 /*12*/].f_2 = 5;
	Global_45609[10 /*12*/].f_3 = 0;
	Global_45609[10 /*12*/].f_10 = 0;
	Global_45609[10 /*12*/].f_11 = 0;
	Global_45609[10 /*12*/].f_4 = 0;
	Global_45609[11 /*12*/] = 34;
	Global_45609[11 /*12*/].f_1 = 35;
	Global_45609[11 /*12*/].f_2 = 5;
	Global_45609[11 /*12*/].f_3 = 0;
	Global_45609[11 /*12*/].f_10 = 0;
	Global_45609[11 /*12*/].f_11 = 0;
	Global_45609[11 /*12*/].f_4 = 0;
	Global_45609[12 /*12*/] = 42;
	Global_45609[12 /*12*/].f_1 = 43;
	Global_45609[12 /*12*/].f_2 = 7;
	Global_45609[12 /*12*/].f_3 = 1;
	Global_45609[12 /*12*/].f_10 = 0;
	Global_45609[12 /*12*/].f_11 = 0;
	Global_45609[12 /*12*/].f_4 = 0;
	Global_45609[13 /*12*/] = 44;
	Global_45609[13 /*12*/].f_1 = 45;
	Global_45609[13 /*12*/].f_2 = 7;
	Global_45609[13 /*12*/].f_3 = 1;
	Global_45609[13 /*12*/].f_10 = 0;
	Global_45609[13 /*12*/].f_11 = 0;
	Global_45609[13 /*12*/].f_4 = 0;
	Global_45609[14 /*12*/] = 46;
	Global_45609[14 /*12*/].f_1 = 47;
	Global_45609[14 /*12*/].f_2 = 7;
	Global_45609[14 /*12*/].f_3 = 1;
	Global_45609[14 /*12*/].f_10 = 0;
	Global_45609[14 /*12*/].f_11 = 0;
	Global_45609[14 /*12*/].f_4 = 0;
	Global_45609[15 /*12*/] = 48;
	Global_45609[15 /*12*/].f_1 = 49;
	Global_45609[15 /*12*/].f_2 = 7;
	Global_45609[15 /*12*/].f_3 = 1;
	Global_45609[15 /*12*/].f_10 = 0;
	Global_45609[15 /*12*/].f_11 = 0;
	Global_45609[15 /*12*/].f_4 = 0;
	Global_45609[16 /*12*/] = 50;
	Global_45609[16 /*12*/].f_1 = 51;
	Global_45609[16 /*12*/].f_2 = 4;
	Global_45609[16 /*12*/].f_3 = 0;
	Global_45609[16 /*12*/].f_10 = 0;
	Global_45609[16 /*12*/].f_11 = 0;
	Global_45609[16 /*12*/].f_4 = 0;
	Global_45609[17 /*12*/] = 61;
	Global_45609[17 /*12*/].f_1 = 62;
	Global_45609[17 /*12*/].f_2 = 8;
	Global_45609[17 /*12*/].f_3 = 0;
	Global_45609[17 /*12*/].f_10 = 1;
	Global_45609[17 /*12*/].f_11 = 0;
	Global_45609[17 /*12*/].f_4 = 0;
	Global_45609[18 /*12*/] = 63;
	Global_45609[18 /*12*/].f_1 = 64;
	Global_45609[18 /*12*/].f_2 = 9;
	Global_45609[18 /*12*/].f_3 = 1;
	Global_45609[18 /*12*/].f_10 = 1;
	Global_45609[18 /*12*/].f_11 = 0;
	Global_45609[18 /*12*/].f_4 = 0;
	Global_45609[19 /*12*/] = 61;
	Global_45609[19 /*12*/].f_1 = 65;
	Global_45609[19 /*12*/].f_2 = 8;
	Global_45609[19 /*12*/].f_3 = 0;
	Global_45609[19 /*12*/].f_10 = 1;
	Global_45609[19 /*12*/].f_11 = 0;
	Global_45609[19 /*12*/].f_4 = 0;
	Global_45609[20 /*12*/] = 61;
	Global_45609[20 /*12*/].f_1 = 66;
	Global_45609[20 /*12*/].f_2 = 8;
	Global_45609[20 /*12*/].f_3 = 0;
	Global_45609[20 /*12*/].f_10 = 1;
	Global_45609[20 /*12*/].f_11 = 0;
	Global_45609[20 /*12*/].f_4 = 0;
	Global_45609[21 /*12*/] = 61;
	Global_45609[21 /*12*/].f_1 = 67;
	Global_45609[21 /*12*/].f_2 = 8;
	Global_45609[21 /*12*/].f_3 = 0;
	Global_45609[21 /*12*/].f_10 = 1;
	Global_45609[21 /*12*/].f_11 = 0;
	Global_45609[21 /*12*/].f_4 = 0;
	Global_45609[22 /*12*/] = 61;
	Global_45609[22 /*12*/].f_1 = 68;
	Global_45609[22 /*12*/].f_2 = 8;
	Global_45609[22 /*12*/].f_3 = 0;
	Global_45609[22 /*12*/].f_10 = 0;
	Global_45609[22 /*12*/].f_11 = 0;
	Global_45609[22 /*12*/].f_4 = 0;
	Global_45609[23 /*12*/] = 69;
	Global_45609[23 /*12*/].f_1 = 70;
	Global_45609[23 /*12*/].f_2 = 10;
	Global_45609[23 /*12*/].f_3 = 2;
	Global_45609[23 /*12*/].f_10 = 1;
	Global_45609[23 /*12*/].f_11 = 0;
	Global_45609[23 /*12*/].f_4 = 0;
	Global_45609[24 /*12*/] = 63;
	Global_45609[24 /*12*/].f_1 = 74;
	Global_45609[24 /*12*/].f_2 = 9;
	Global_45609[24 /*12*/].f_3 = 1;
	Global_45609[24 /*12*/].f_10 = 1;
	Global_45609[24 /*12*/].f_11 = 0;
	Global_45609[24 /*12*/].f_4 = 0;
	Global_45609[25 /*12*/] = 63;
	Global_45609[25 /*12*/].f_1 = 75;
	Global_45609[25 /*12*/].f_2 = 9;
	Global_45609[25 /*12*/].f_3 = 1;
	Global_45609[25 /*12*/].f_10 = 1;
	Global_45609[25 /*12*/].f_11 = 0;
	Global_45609[25 /*12*/].f_4 = 0;
	Global_45609[26 /*12*/] = 63;
	Global_45609[26 /*12*/].f_1 = 76;
	Global_45609[26 /*12*/].f_2 = 9;
	Global_45609[26 /*12*/].f_3 = 1;
	Global_45609[26 /*12*/].f_10 = 1;
	Global_45609[26 /*12*/].f_11 = 0;
	Global_45609[26 /*12*/].f_4 = 0;
	Global_45609[27 /*12*/] = 63;
	Global_45609[27 /*12*/].f_1 = 77;
	Global_45609[27 /*12*/].f_2 = 9;
	Global_45609[27 /*12*/].f_3 = 1;
	Global_45609[27 /*12*/].f_10 = 0;
	Global_45609[27 /*12*/].f_11 = 0;
	Global_45609[27 /*12*/].f_4 = 0;
	Global_45609[28 /*12*/] = 69;
	Global_45609[28 /*12*/].f_1 = 73;
	Global_45609[28 /*12*/].f_2 = 10;
	Global_45609[28 /*12*/].f_3 = 2;
	Global_45609[28 /*12*/].f_10 = 1;
	Global_45609[28 /*12*/].f_11 = 0;
	Global_45609[28 /*12*/].f_4 = 0;
	Global_45609[29 /*12*/] = 69;
	Global_45609[29 /*12*/].f_1 = 72;
	Global_45609[29 /*12*/].f_2 = 10;
	Global_45609[29 /*12*/].f_3 = 2;
	Global_45609[29 /*12*/].f_10 = 1;
	Global_45609[29 /*12*/].f_11 = 0;
	Global_45609[29 /*12*/].f_4 = 0;
	Global_45609[30 /*12*/] = 69;
	Global_45609[30 /*12*/].f_1 = 71;
	Global_45609[30 /*12*/].f_2 = 10;
	Global_45609[30 /*12*/].f_3 = 2;
	Global_45609[30 /*12*/].f_10 = 0;
	Global_45609[30 /*12*/].f_11 = 0;
	Global_45609[30 /*12*/].f_4 = 0;
	Global_45609[31 /*12*/] = 90;
	Global_45609[31 /*12*/].f_1 = 91;
	Global_45609[31 /*12*/].f_2 = 11;
	Global_45609[31 /*12*/].f_3 = 1;
	Global_45609[31 /*12*/].f_10 = 0;
	Global_45609[31 /*12*/].f_11 = 0;
	Global_45609[31 /*12*/].f_4 = 0;
	Global_45609[32 /*12*/] = 90;
	Global_45609[32 /*12*/].f_1 = 92;
	Global_45609[32 /*12*/].f_2 = 11;
	Global_45609[32 /*12*/].f_3 = 0;
	Global_45609[32 /*12*/].f_10 = 0;
	Global_45609[32 /*12*/].f_11 = 0;
	Global_45609[32 /*12*/].f_4 = 0;
	Global_45609[33 /*12*/] = 90;
	Global_45609[33 /*12*/].f_1 = 93;
	Global_45609[33 /*12*/].f_2 = 11;
	Global_45609[33 /*12*/].f_3 = 2;
	Global_45609[33 /*12*/].f_10 = 0;
	Global_45609[33 /*12*/].f_11 = 0;
	Global_45609[33 /*12*/].f_4 = 0;
	Global_45609[34 /*12*/] = 94;
	Global_45609[34 /*12*/].f_1 = 95;
	Global_45609[34 /*12*/].f_2 = 13;
	Global_45609[34 /*12*/].f_3 = 0;
	Global_45609[34 /*12*/].f_10 = 0;
	Global_45609[34 /*12*/].f_11 = 0;
	Global_45609[34 /*12*/].f_4 = 0;
	Global_45609[35 /*12*/] = 94;
	Global_45609[35 /*12*/].f_1 = 96;
	Global_45609[35 /*12*/].f_2 = 13;
	Global_45609[35 /*12*/].f_3 = 1;
	Global_45609[35 /*12*/].f_10 = 0;
	Global_45609[35 /*12*/].f_11 = 0;
	Global_45609[35 /*12*/].f_4 = 0;
	Global_45609[36 /*12*/] = 94;
	Global_45609[36 /*12*/].f_1 = 97;
	Global_45609[36 /*12*/].f_2 = 13;
	Global_45609[36 /*12*/].f_3 = 2;
	Global_45609[36 /*12*/].f_10 = 0;
	Global_45609[36 /*12*/].f_11 = 0;
	Global_45609[36 /*12*/].f_4 = 0;
	Global_45609[37 /*12*/] = 94;
	Global_45609[37 /*12*/].f_1 = 98;
	Global_45609[37 /*12*/].f_2 = 14;
	Global_45609[37 /*12*/].f_3 = 0;
	Global_45609[37 /*12*/].f_10 = 0;
	Global_45609[37 /*12*/].f_11 = 0;
	Global_45609[37 /*12*/].f_4 = 0;
	Global_45609[38 /*12*/] = 94;
	Global_45609[38 /*12*/].f_1 = 99;
	Global_45609[38 /*12*/].f_2 = 14;
	Global_45609[38 /*12*/].f_3 = 1;
	Global_45609[38 /*12*/].f_10 = 0;
	Global_45609[38 /*12*/].f_11 = 0;
	Global_45609[38 /*12*/].f_4 = 0;
	Global_45609[39 /*12*/] = 94;
	Global_45609[39 /*12*/].f_1 = 100;
	Global_45609[39 /*12*/].f_2 = 14;
	Global_45609[39 /*12*/].f_3 = 2;
	Global_45609[39 /*12*/].f_10 = 0;
	Global_45609[39 /*12*/].f_11 = 0;
	Global_45609[39 /*12*/].f_4 = 0;
	Global_45609[40 /*12*/] = 94;
	Global_45609[40 /*12*/].f_1 = 101;
	Global_45609[40 /*12*/].f_2 = 12;
	Global_45609[40 /*12*/].f_3 = 0;
	Global_45609[40 /*12*/].f_10 = 0;
	Global_45609[40 /*12*/].f_11 = 0;
	Global_45609[40 /*12*/].f_4 = 0;
	Global_45609[41 /*12*/] = 94;
	Global_45609[41 /*12*/].f_1 = 102;
	Global_45609[41 /*12*/].f_2 = 12;
	Global_45609[41 /*12*/].f_3 = 1;
	Global_45609[41 /*12*/].f_10 = 0;
	Global_45609[41 /*12*/].f_11 = 0;
	Global_45609[41 /*12*/].f_4 = 0;
	Global_45609[42 /*12*/] = 94;
	Global_45609[42 /*12*/].f_1 = 103;
	Global_45609[42 /*12*/].f_2 = 12;
	Global_45609[42 /*12*/].f_3 = 2;
	Global_45609[42 /*12*/].f_10 = 0;
	Global_45609[42 /*12*/].f_11 = 0;
	Global_45609[42 /*12*/].f_4 = 0;
	Global_45609[43 /*12*/] = 104;
	Global_45609[43 /*12*/].f_1 = 105;
	Global_45609[43 /*12*/].f_2 = 7;
	Global_45609[43 /*12*/].f_3 = 0;
	Global_45609[43 /*12*/].f_10 = 1;
	Global_45609[43 /*12*/].f_11 = 0;
	Global_45609[43 /*12*/].f_4 = 0;
	Global_45609[44 /*12*/] = 108;
	Global_45609[44 /*12*/].f_1 = 109;
	Global_45609[44 /*12*/].f_2 = 15;
	Global_45609[44 /*12*/].f_3 = 0;
	Global_45609[44 /*12*/].f_10 = 1;
	Global_45609[44 /*12*/].f_11 = 0;
	Global_45609[44 /*12*/].f_4 = 0;
	Global_45609[45 /*12*/] = 110;
	Global_45609[45 /*12*/].f_1 = 111;
	Global_45609[45 /*12*/].f_2 = 15;
	Global_45609[45 /*12*/].f_3 = 0;
	Global_45609[45 /*12*/].f_10 = 1;
	Global_45609[45 /*12*/].f_11 = 0;
	Global_45609[45 /*12*/].f_4 = 0;
	Global_45609[46 /*12*/] = 112;
	Global_45609[46 /*12*/].f_1 = 113;
	Global_45609[46 /*12*/].f_2 = 15;
	Global_45609[46 /*12*/].f_3 = 0;
	Global_45609[46 /*12*/].f_10 = 1;
	Global_45609[46 /*12*/].f_11 = 0;
	Global_45609[46 /*12*/].f_4 = 0;
	Global_45609[47 /*12*/] = 117;
	Global_45609[47 /*12*/].f_1 = 118;
	Global_45609[47 /*12*/].f_2 = 16;
	Global_45609[47 /*12*/].f_3 = 0;
	Global_45609[47 /*12*/].f_10 = 1;
	Global_45609[47 /*12*/].f_11 = 0;
	Global_45609[47 /*12*/].f_4 = 0;
	Global_45609[48 /*12*/] = 119;
	Global_45609[48 /*12*/].f_1 = 120;
	Global_45609[48 /*12*/].f_2 = 16;
	Global_45609[48 /*12*/].f_3 = 0;
	Global_45609[48 /*12*/].f_10 = 1;
	Global_45609[48 /*12*/].f_11 = 0;
	Global_45609[48 /*12*/].f_4 = 0;
	Global_45609[49 /*12*/] = 131;
	Global_45609[49 /*12*/].f_1 = 132;
	Global_45609[49 /*12*/].f_2 = 16;
	Global_45609[49 /*12*/].f_3 = 0;
	Global_45609[49 /*12*/].f_10 = 1;
	Global_45609[49 /*12*/].f_11 = 0;
	Global_45609[49 /*12*/].f_4 = 0;
	Global_45609[50 /*12*/] = 129;
	Global_45609[50 /*12*/].f_1 = 130;
	Global_45609[50 /*12*/].f_2 = 16;
	Global_45609[50 /*12*/].f_3 = 0;
	Global_45609[50 /*12*/].f_10 = 0;
	Global_45609[50 /*12*/].f_11 = 0;
	Global_45609[50 /*12*/].f_4 = 0;
	Global_45609[51 /*12*/] = 127;
	Global_45609[51 /*12*/].f_1 = 128;
	Global_45609[51 /*12*/].f_2 = 16;
	Global_45609[51 /*12*/].f_3 = 0;
	Global_45609[51 /*12*/].f_10 = 1;
	Global_45609[51 /*12*/].f_11 = 0;
	Global_45609[51 /*12*/].f_4 = 0;
	Global_45609[52 /*12*/] = 125;
	Global_45609[52 /*12*/].f_1 = 126;
	Global_45609[52 /*12*/].f_2 = 16;
	Global_45609[52 /*12*/].f_3 = 0;
	Global_45609[52 /*12*/].f_10 = 1;
	Global_45609[52 /*12*/].f_11 = 0;
	Global_45609[52 /*12*/].f_4 = 0;
	Global_45609[53 /*12*/] = 123;
	Global_45609[53 /*12*/].f_1 = 124;
	Global_45609[53 /*12*/].f_2 = 16;
	Global_45609[53 /*12*/].f_3 = 0;
	Global_45609[53 /*12*/].f_10 = 1;
	Global_45609[53 /*12*/].f_11 = 0;
	Global_45609[53 /*12*/].f_4 = 0;
	Global_45609[54 /*12*/] = 121;
	Global_45609[54 /*12*/].f_1 = 122;
	Global_45609[54 /*12*/].f_2 = 16;
	Global_45609[54 /*12*/].f_3 = 0;
	Global_45609[54 /*12*/].f_10 = 1;
	Global_45609[54 /*12*/].f_11 = 0;
	Global_45609[54 /*12*/].f_4 = 0;
	Global_45609[55 /*12*/] = 133;
	Global_45609[55 /*12*/].f_1 = 134;
	Global_45609[55 /*12*/].f_2 = 12;
	Global_45609[55 /*12*/].f_3 = 0;
	Global_45609[55 /*12*/].f_10 = 0;
	Global_45609[55 /*12*/].f_11 = 0;
	Global_45609[55 /*12*/].f_4 = 0;
	Global_45609[56 /*12*/] = 135;
	Global_45609[56 /*12*/].f_1 = 136;
	Global_45609[56 /*12*/].f_2 = 14;
	Global_45609[56 /*12*/].f_3 = 0;
	Global_45609[56 /*12*/].f_10 = 0;
	Global_45609[56 /*12*/].f_11 = 0;
	Global_45609[56 /*12*/].f_4 = 0;
	Global_45609[57 /*12*/] = 137;
	Global_45609[57 /*12*/].f_1 = 138;
	Global_45609[57 /*12*/].f_2 = 12;
	Global_45609[57 /*12*/].f_3 = 0;
	Global_45609[57 /*12*/].f_10 = 0;
	Global_45609[57 /*12*/].f_11 = 0;
	Global_45609[57 /*12*/].f_4 = 0;
	Global_45609[58 /*12*/] = 133;
	Global_45609[58 /*12*/].f_1 = 139;
	Global_45609[58 /*12*/].f_2 = 12;
	Global_45609[58 /*12*/].f_3 = 1;
	Global_45609[58 /*12*/].f_10 = 0;
	Global_45609[58 /*12*/].f_11 = 0;
	Global_45609[58 /*12*/].f_4 = 0;
	Global_45609[59 /*12*/] = 133;
	Global_45609[59 /*12*/].f_1 = 140;
	Global_45609[59 /*12*/].f_2 = 12;
	Global_45609[59 /*12*/].f_3 = 2;
	Global_45609[59 /*12*/].f_10 = 0;
	Global_45609[59 /*12*/].f_11 = 0;
	Global_45609[59 /*12*/].f_4 = 0;
	Global_45609[60 /*12*/] = 135;
	Global_45609[60 /*12*/].f_1 = 136;
	Global_45609[60 /*12*/].f_2 = 14;
	Global_45609[60 /*12*/].f_3 = 1;
	Global_45609[60 /*12*/].f_10 = 0;
	Global_45609[60 /*12*/].f_11 = 0;
	Global_45609[60 /*12*/].f_4 = 0;
	Global_45609[61 /*12*/] = 135;
	Global_45609[61 /*12*/].f_1 = 136;
	Global_45609[61 /*12*/].f_2 = 14;
	Global_45609[61 /*12*/].f_3 = 2;
	Global_45609[61 /*12*/].f_10 = 0;
	Global_45609[61 /*12*/].f_11 = 0;
	Global_45609[61 /*12*/].f_4 = 0;
	Global_45609[62 /*12*/] = 137;
	Global_45609[62 /*12*/].f_1 = 141;
	Global_45609[62 /*12*/].f_2 = 12;
	Global_45609[62 /*12*/].f_3 = 1;
	Global_45609[62 /*12*/].f_10 = 0;
	Global_45609[62 /*12*/].f_11 = 0;
	Global_45609[62 /*12*/].f_4 = 0;
	Global_45609[63 /*12*/] = 137;
	Global_45609[63 /*12*/].f_1 = 138;
	Global_45609[63 /*12*/].f_2 = 12;
	Global_45609[63 /*12*/].f_3 = 2;
	Global_45609[63 /*12*/].f_10 = 0;
	Global_45609[63 /*12*/].f_11 = 0;
	Global_45609[63 /*12*/].f_4 = 0;
	Global_45609[64 /*12*/] = 148;
	Global_45609[64 /*12*/].f_1 = 149;
	Global_45609[64 /*12*/].f_2 = 7;
	Global_45609[64 /*12*/].f_3 = 0;
	Global_45609[64 /*12*/].f_10 = 0;
	Global_45609[64 /*12*/].f_11 = 0;
	Global_45609[64 /*12*/].f_4 = 0;
	Global_45609[65 /*12*/] = 148;
	Global_45609[65 /*12*/].f_1 = 151;
	Global_45609[65 /*12*/].f_2 = 7;
	Global_45609[65 /*12*/].f_3 = 0;
	Global_45609[65 /*12*/].f_10 = 0;
	Global_45609[65 /*12*/].f_11 = 0;
	Global_45609[65 /*12*/].f_4 = 0;
	Global_45609[66 /*12*/] = 148;
	Global_45609[66 /*12*/].f_1 = 150;
	Global_45609[66 /*12*/].f_2 = 7;
	Global_45609[66 /*12*/].f_3 = 0;
	Global_45609[66 /*12*/].f_10 = 0;
	Global_45609[66 /*12*/].f_11 = 0;
	Global_45609[66 /*12*/].f_4 = 0;
	Global_45609[67 /*12*/] = 155;
	Global_45609[67 /*12*/].f_1 = 156;
	Global_45609[67 /*12*/].f_2 = 63;
	Global_45609[67 /*12*/].f_3 = 2;
	Global_45609[67 /*12*/].f_10 = 0;
	Global_45609[67 /*12*/].f_11 = 0;
	Global_45609[67 /*12*/].f_4 = 0;
	Global_45609[68 /*12*/] = 125;
	Global_45609[68 /*12*/].f_1 = 160;
	Global_45609[68 /*12*/].f_2 = 16;
	Global_45609[68 /*12*/].f_3 = 0;
	Global_45609[68 /*12*/].f_10 = 1;
	Global_45609[68 /*12*/].f_11 = 0;
	Global_45609[68 /*12*/].f_4 = 0;
	Global_45609[69 /*12*/] = 161;
	Global_45609[69 /*12*/].f_1 = 162;
	Global_45609[69 /*12*/].f_2 = 64;
	Global_45609[69 /*12*/].f_3 = 2;
	Global_45609[69 /*12*/].f_10 = 0;
	Global_45609[69 /*12*/].f_11 = 0;
	Global_45609[69 /*12*/].f_4 = 0;
	Global_45609[70 /*12*/] = 161;
	Global_45609[70 /*12*/].f_1 = 162;
	Global_45609[70 /*12*/].f_2 = 64;
	Global_45609[70 /*12*/].f_3 = 1;
	Global_45609[70 /*12*/].f_10 = 0;
	Global_45609[70 /*12*/].f_11 = 0;
	Global_45609[70 /*12*/].f_4 = 0;
	Global_45609[71 /*12*/] = 161;
	Global_45609[71 /*12*/].f_1 = 162;
	Global_45609[71 /*12*/].f_2 = 64;
	Global_45609[71 /*12*/].f_3 = 2;
	Global_45609[71 /*12*/].f_10 = 0;
	Global_45609[71 /*12*/].f_11 = 0;
	Global_45609[71 /*12*/].f_4 = 0;
	Global_45609[72 /*12*/] = 166;
	Global_45609[72 /*12*/].f_1 = 16;
	Global_45609[72 /*12*/].f_2 = 21;
	Global_45609[72 /*12*/].f_3 = 0;
	Global_45609[72 /*12*/].f_10 = 0;
	Global_45609[72 /*12*/].f_11 = 0;
	Global_45609[72 /*12*/].f_4 = 0;
	Global_45609[73 /*12*/] = 166;
	Global_45609[73 /*12*/].f_1 = 16;
	Global_45609[73 /*12*/].f_2 = 21;
	Global_45609[73 /*12*/].f_3 = 1;
	Global_45609[73 /*12*/].f_10 = 0;
	Global_45609[73 /*12*/].f_11 = 0;
	Global_45609[73 /*12*/].f_4 = 0;
	Global_45609[74 /*12*/] = 166;
	Global_45609[74 /*12*/].f_1 = 16;
	Global_45609[74 /*12*/].f_2 = 21;
	Global_45609[74 /*12*/].f_3 = 2;
	Global_45609[74 /*12*/].f_10 = 0;
	Global_45609[74 /*12*/].f_11 = 0;
	Global_45609[74 /*12*/].f_4 = 0;
	Global_45609[75 /*12*/] = 167;
	Global_45609[75 /*12*/].f_1 = 16;
	Global_45609[75 /*12*/].f_2 = 6;
	Global_45609[75 /*12*/].f_3 = 2;
	Global_45609[75 /*12*/].f_10 = 0;
	Global_45609[75 /*12*/].f_11 = 0;
	Global_45609[75 /*12*/].f_4 = 0;
	Global_45609[76 /*12*/] = 168;
	Global_45609[76 /*12*/].f_1 = 16;
	Global_45609[76 /*12*/].f_2 = 6;
	Global_45609[76 /*12*/].f_3 = 2;
	Global_45609[76 /*12*/].f_10 = 0;
	Global_45609[76 /*12*/].f_11 = 0;
	Global_45609[76 /*12*/].f_4 = 0;
	Global_45609[77 /*12*/] = 169;
	Global_45609[77 /*12*/].f_1 = 16;
	Global_45609[77 /*12*/].f_2 = 6;
	Global_45609[77 /*12*/].f_3 = 2;
	Global_45609[77 /*12*/].f_10 = 0;
	Global_45609[77 /*12*/].f_11 = 0;
	Global_45609[77 /*12*/].f_4 = 0;
	Global_45609[78 /*12*/] = 170;
	Global_45609[78 /*12*/].f_1 = 16;
	Global_45609[78 /*12*/].f_2 = 6;
	Global_45609[78 /*12*/].f_3 = 2;
	Global_45609[78 /*12*/].f_10 = 0;
	Global_45609[78 /*12*/].f_11 = 0;
	Global_45609[78 /*12*/].f_4 = 0;
	Global_45609[79 /*12*/] = 171;
	Global_45609[79 /*12*/].f_1 = 16;
	Global_45609[79 /*12*/].f_2 = 6;
	Global_45609[79 /*12*/].f_3 = 2;
	Global_45609[79 /*12*/].f_10 = 0;
	Global_45609[79 /*12*/].f_11 = 0;
	Global_45609[79 /*12*/].f_4 = 0;
	Global_45609[80 /*12*/] = 172;
	Global_45609[80 /*12*/].f_1 = 173;
	Global_45609[80 /*12*/].f_2 = 6;
	Global_45609[80 /*12*/].f_3 = 2;
	Global_45609[80 /*12*/].f_10 = 0;
	Global_45609[80 /*12*/].f_11 = 0;
	Global_45609[80 /*12*/].f_4 = 0;
	Global_45609[81 /*12*/] = 174;
	Global_45609[81 /*12*/].f_1 = 175;
	Global_45609[81 /*12*/].f_2 = 6;
	Global_45609[81 /*12*/].f_3 = 2;
	Global_45609[81 /*12*/].f_10 = 0;
	Global_45609[81 /*12*/].f_11 = 0;
	Global_45609[81 /*12*/].f_4 = 0;
	Global_45609[82 /*12*/] = 176;
	Global_45609[82 /*12*/].f_1 = 177;
	Global_45609[82 /*12*/].f_2 = 6;
	Global_45609[82 /*12*/].f_3 = 2;
	Global_45609[82 /*12*/].f_10 = 0;
	Global_45609[82 /*12*/].f_11 = 0;
	Global_45609[82 /*12*/].f_4 = 0;
	Global_45609[83 /*12*/] = 178;
	Global_45609[83 /*12*/].f_1 = 179;
	Global_45609[83 /*12*/].f_2 = 6;
	Global_45609[83 /*12*/].f_3 = 2;
	Global_45609[83 /*12*/].f_10 = 0;
	Global_45609[83 /*12*/].f_11 = 0;
	Global_45609[83 /*12*/].f_4 = 0;
	Global_45609[84 /*12*/] = 180;
	Global_45609[84 /*12*/].f_1 = 181;
	Global_45609[84 /*12*/].f_2 = 4;
	Global_45609[84 /*12*/].f_3 = 0;
	Global_45609[84 /*12*/].f_10 = 0;
	Global_45609[84 /*12*/].f_11 = 3000;
	Global_45609[84 /*12*/].f_4 = 0;
	Global_45609[85 /*12*/] = 185;
	Global_45609[85 /*12*/].f_1 = 186;
	Global_45609[85 /*12*/].f_2 = 22;
	Global_45609[85 /*12*/].f_3 = 0;
	Global_45609[85 /*12*/].f_10 = 0;
	Global_45609[85 /*12*/].f_11 = 0;
	Global_45609[85 /*12*/].f_4 = 0;
	Global_45609[86 /*12*/] = 193;
	Global_45609[86 /*12*/].f_1 = 194;
	Global_45609[86 /*12*/].f_2 = 24;
	Global_45609[86 /*12*/].f_3 = 0;
	Global_45609[86 /*12*/].f_10 = 1;
	Global_45609[86 /*12*/].f_11 = 0;
	Global_45609[86 /*12*/].f_4 = 1;
	Global_45609[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_45609[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[87 /*12*/] = 195;
	Global_45609[87 /*12*/].f_1 = 196;
	Global_45609[87 /*12*/].f_2 = 0;
	Global_45609[87 /*12*/].f_3 = 24;
	Global_45609[87 /*12*/].f_10 = 0;
	Global_45609[87 /*12*/].f_11 = 0;
	Global_45609[87 /*12*/].f_4 = 1;
	Global_45609[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_45609[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[88 /*12*/] = 197;
	Global_45609[88 /*12*/].f_1 = 198;
	Global_45609[88 /*12*/].f_2 = 24;
	Global_45609[88 /*12*/].f_3 = 0;
	Global_45609[88 /*12*/].f_10 = 0;
	Global_45609[88 /*12*/].f_11 = 120000;
	Global_45609[88 /*12*/].f_4 = 0;
	Global_45609[89 /*12*/] = 200;
	Global_45609[89 /*12*/].f_1 = 201;
	Global_45609[89 /*12*/].f_2 = 24;
	Global_45609[89 /*12*/].f_3 = 0;
	Global_45609[89 /*12*/].f_10 = 1;
	Global_45609[89 /*12*/].f_11 = 0;
	Global_45609[89 /*12*/].f_4 = 1;
	Global_45609[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_45609[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[90 /*12*/] = 202;
	Global_45609[90 /*12*/].f_1 = 203;
	Global_45609[90 /*12*/].f_2 = 0;
	Global_45609[90 /*12*/].f_3 = 24;
	Global_45609[90 /*12*/].f_10 = 0;
	Global_45609[90 /*12*/].f_11 = 0;
	Global_45609[90 /*12*/].f_4 = 1;
	Global_45609[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_45609[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[91 /*12*/] = 204;
	Global_45609[91 /*12*/].f_1 = 205;
	Global_45609[91 /*12*/].f_2 = 24;
	Global_45609[91 /*12*/].f_3 = 0;
	Global_45609[91 /*12*/].f_10 = 0;
	Global_45609[91 /*12*/].f_11 = 120000;
	Global_45609[91 /*12*/].f_4 = 0;
	Global_45609[92 /*12*/] = 209;
	Global_45609[92 /*12*/].f_1 = 210;
	Global_45609[92 /*12*/].f_2 = 25;
	Global_45609[92 /*12*/].f_3 = 0;
	Global_45609[92 /*12*/].f_10 = 1;
	Global_45609[92 /*12*/].f_11 = 0;
	Global_45609[92 /*12*/].f_4 = 1;
	Global_45609[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_45609[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[93 /*12*/] = 211;
	Global_45609[93 /*12*/].f_1 = 212;
	Global_45609[93 /*12*/].f_2 = 0;
	Global_45609[93 /*12*/].f_3 = 25;
	Global_45609[93 /*12*/].f_10 = 0;
	Global_45609[93 /*12*/].f_11 = 0;
	Global_45609[93 /*12*/].f_4 = 1;
	Global_45609[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_45609[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[94 /*12*/] = 213;
	Global_45609[94 /*12*/].f_1 = 214;
	Global_45609[94 /*12*/].f_2 = 25;
	Global_45609[94 /*12*/].f_3 = 0;
	Global_45609[94 /*12*/].f_10 = 1;
	Global_45609[94 /*12*/].f_11 = 60000;
	Global_45609[94 /*12*/].f_4 = 1;
	Global_45609[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_45609[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[95 /*12*/] = 215;
	Global_45609[95 /*12*/].f_1 = 216;
	Global_45609[95 /*12*/].f_2 = 0;
	Global_45609[95 /*12*/].f_3 = 25;
	Global_45609[95 /*12*/].f_10 = 0;
	Global_45609[95 /*12*/].f_11 = 0;
	Global_45609[95 /*12*/].f_4 = 1;
	Global_45609[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_45609[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[96 /*12*/] = 217;
	Global_45609[96 /*12*/].f_1 = 218;
	Global_45609[96 /*12*/].f_2 = 25;
	Global_45609[96 /*12*/].f_3 = 0;
	Global_45609[96 /*12*/].f_10 = 0;
	Global_45609[96 /*12*/].f_11 = 60000;
	Global_45609[96 /*12*/].f_4 = 0;
	Global_45609[97 /*12*/] = 222;
	Global_45609[97 /*12*/].f_1 = 223;
	Global_45609[97 /*12*/].f_2 = 26;
	Global_45609[97 /*12*/].f_3 = 0;
	Global_45609[97 /*12*/].f_10 = 1;
	Global_45609[97 /*12*/].f_11 = 0;
	Global_45609[97 /*12*/].f_4 = 1;
	Global_45609[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_45609[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[98 /*12*/] = 224;
	Global_45609[98 /*12*/].f_1 = 225;
	Global_45609[98 /*12*/].f_2 = 0;
	Global_45609[98 /*12*/].f_3 = 26;
	Global_45609[98 /*12*/].f_10 = 0;
	Global_45609[98 /*12*/].f_11 = 0;
	Global_45609[98 /*12*/].f_4 = 0;
	Global_45609[99 /*12*/] = 229;
	Global_45609[99 /*12*/].f_1 = 230;
	Global_45609[99 /*12*/].f_2 = 27;
	Global_45609[99 /*12*/].f_3 = 0;
	Global_45609[99 /*12*/].f_10 = 1;
	Global_45609[99 /*12*/].f_11 = 0;
	Global_45609[99 /*12*/].f_4 = 1;
	Global_45609[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_45609[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[100 /*12*/] = 231;
	Global_45609[100 /*12*/].f_1 = 232;
	Global_45609[100 /*12*/].f_2 = 0;
	Global_45609[100 /*12*/].f_3 = 27;
	Global_45609[100 /*12*/].f_10 = 0;
	Global_45609[100 /*12*/].f_11 = 0;
	Global_45609[100 /*12*/].f_4 = 0;
	Global_45609[101 /*12*/] = 236;
	Global_45609[101 /*12*/].f_1 = 237;
	Global_45609[101 /*12*/].f_2 = 28;
	Global_45609[101 /*12*/].f_3 = 0;
	Global_45609[101 /*12*/].f_10 = 0;
	Global_45609[101 /*12*/].f_11 = 0;
	Global_45609[101 /*12*/].f_4 = 0;
	Global_45609[102 /*12*/] = 238;
	Global_45609[102 /*12*/].f_1 = 239;
	Global_45609[102 /*12*/].f_2 = 26;
	Global_45609[102 /*12*/].f_3 = 0;
	Global_45609[102 /*12*/].f_10 = 1;
	Global_45609[102 /*12*/].f_11 = 0;
	Global_45609[102 /*12*/].f_4 = 1;
	Global_45609[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_45609[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[103 /*12*/] = 240;
	Global_45609[103 /*12*/].f_1 = 241;
	Global_45609[103 /*12*/].f_2 = 0;
	Global_45609[103 /*12*/].f_3 = 26;
	Global_45609[103 /*12*/].f_10 = 0;
	Global_45609[103 /*12*/].f_11 = 0;
	Global_45609[103 /*12*/].f_4 = 0;
	Global_45609[104 /*12*/] = 245;
	Global_45609[104 /*12*/].f_1 = 246;
	Global_45609[104 /*12*/].f_2 = 29;
	Global_45609[104 /*12*/].f_3 = 0;
	Global_45609[104 /*12*/].f_10 = 1;
	Global_45609[104 /*12*/].f_11 = 0;
	Global_45609[104 /*12*/].f_4 = 1;
	Global_45609[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_45609[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[105 /*12*/] = 247;
	Global_45609[105 /*12*/].f_1 = 248;
	Global_45609[105 /*12*/].f_2 = 0;
	Global_45609[105 /*12*/].f_3 = 29;
	Global_45609[105 /*12*/].f_10 = 0;
	Global_45609[105 /*12*/].f_11 = 0;
	Global_45609[105 /*12*/].f_4 = 0;
	Global_45609[106 /*12*/] = 252;
	Global_45609[106 /*12*/].f_1 = 253;
	Global_45609[106 /*12*/].f_2 = 30;
	Global_45609[106 /*12*/].f_3 = 1;
	Global_45609[106 /*12*/].f_10 = 1;
	Global_45609[106 /*12*/].f_11 = 120000;
	Global_45609[106 /*12*/].f_4 = 1;
	Global_45609[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_45609[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[107 /*12*/] = 254;
	Global_45609[107 /*12*/].f_1 = 255;
	Global_45609[107 /*12*/].f_2 = 1;
	Global_45609[107 /*12*/].f_3 = 30;
	Global_45609[107 /*12*/].f_10 = 0;
	Global_45609[107 /*12*/].f_11 = 0;
	Global_45609[107 /*12*/].f_4 = 1;
	Global_45609[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_45609[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[108 /*12*/] = 256;
	Global_45609[108 /*12*/].f_1 = 257;
	Global_45609[108 /*12*/].f_2 = 30;
	Global_45609[108 /*12*/].f_3 = 1;
	Global_45609[108 /*12*/].f_10 = 1;
	Global_45609[108 /*12*/].f_11 = 120000;
	Global_45609[108 /*12*/].f_4 = 1;
	Global_45609[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_45609[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[109 /*12*/] = 258;
	Global_45609[109 /*12*/].f_1 = 259;
	Global_45609[109 /*12*/].f_2 = 1;
	Global_45609[109 /*12*/].f_3 = 30;
	Global_45609[109 /*12*/].f_10 = 0;
	Global_45609[109 /*12*/].f_11 = 0;
	Global_45609[109 /*12*/].f_4 = 1;
	Global_45609[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_45609[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[110 /*12*/] = 260;
	Global_45609[110 /*12*/].f_1 = 261;
	Global_45609[110 /*12*/].f_2 = 30;
	Global_45609[110 /*12*/].f_3 = 1;
	Global_45609[110 /*12*/].f_10 = 0;
	Global_45609[110 /*12*/].f_11 = 60000;
	Global_45609[110 /*12*/].f_4 = 0;
	Global_45609[111 /*12*/] = 265;
	Global_45609[111 /*12*/].f_1 = 266;
	Global_45609[111 /*12*/].f_2 = 31;
	Global_45609[111 /*12*/].f_3 = 1;
	Global_45609[111 /*12*/].f_10 = 1;
	Global_45609[111 /*12*/].f_11 = 0;
	Global_45609[111 /*12*/].f_4 = 1;
	Global_45609[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_45609[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[112 /*12*/] = 267;
	Global_45609[112 /*12*/].f_1 = 268;
	Global_45609[112 /*12*/].f_2 = 1;
	Global_45609[112 /*12*/].f_3 = 31;
	Global_45609[112 /*12*/].f_10 = 0;
	Global_45609[112 /*12*/].f_11 = 0;
	Global_45609[112 /*12*/].f_4 = 0;
	Global_45609[113 /*12*/] = 272;
	Global_45609[113 /*12*/].f_1 = 273;
	Global_45609[113 /*12*/].f_2 = 32;
	Global_45609[113 /*12*/].f_3 = 1;
	Global_45609[113 /*12*/].f_10 = 1;
	Global_45609[113 /*12*/].f_11 = 0;
	Global_45609[113 /*12*/].f_4 = 1;
	Global_45609[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_45609[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[114 /*12*/] = 274;
	Global_45609[114 /*12*/].f_1 = 275;
	Global_45609[114 /*12*/].f_2 = 1;
	Global_45609[114 /*12*/].f_3 = 32;
	Global_45609[114 /*12*/].f_10 = 0;
	Global_45609[114 /*12*/].f_11 = 0;
	Global_45609[114 /*12*/].f_4 = 1;
	Global_45609[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_45609[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[115 /*12*/] = 276;
	Global_45609[115 /*12*/].f_1 = 277;
	Global_45609[115 /*12*/].f_2 = 32;
	Global_45609[115 /*12*/].f_3 = 1;
	Global_45609[115 /*12*/].f_10 = 0;
	Global_45609[115 /*12*/].f_11 = 30000;
	Global_45609[115 /*12*/].f_4 = 0;
	Global_45609[116 /*12*/] = 278;
	Global_45609[116 /*12*/].f_1 = 279;
	Global_45609[116 /*12*/].f_2 = 32;
	Global_45609[116 /*12*/].f_3 = 1;
	Global_45609[116 /*12*/].f_10 = 1;
	Global_45609[116 /*12*/].f_11 = 0;
	Global_45609[116 /*12*/].f_4 = 1;
	Global_45609[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_45609[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_45609[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[117 /*12*/] = 280;
	Global_45609[117 /*12*/].f_1 = 281;
	Global_45609[117 /*12*/].f_2 = 1;
	Global_45609[117 /*12*/].f_3 = 32;
	Global_45609[117 /*12*/].f_10 = 0;
	Global_45609[117 /*12*/].f_11 = 0;
	Global_45609[117 /*12*/].f_4 = 0;
	Global_45609[118 /*12*/] = 283;
	Global_45609[118 /*12*/].f_1 = 284;
	Global_45609[118 /*12*/].f_2 = 32;
	Global_45609[118 /*12*/].f_3 = 1;
	Global_45609[118 /*12*/].f_10 = 1;
	Global_45609[118 /*12*/].f_11 = 0;
	Global_45609[118 /*12*/].f_4 = 1;
	Global_45609[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_45609[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[119 /*12*/] = 285;
	Global_45609[119 /*12*/].f_1 = 286;
	Global_45609[119 /*12*/].f_2 = 1;
	Global_45609[119 /*12*/].f_3 = 32;
	Global_45609[119 /*12*/].f_10 = 0;
	Global_45609[119 /*12*/].f_11 = 0;
	Global_45609[119 /*12*/].f_4 = 0;
	Global_45609[120 /*12*/] = 287;
	Global_45609[120 /*12*/].f_1 = 288;
	Global_45609[120 /*12*/].f_2 = 32;
	Global_45609[120 /*12*/].f_3 = 1;
	Global_45609[120 /*12*/].f_10 = 1;
	Global_45609[120 /*12*/].f_11 = 0;
	Global_45609[120 /*12*/].f_4 = 1;
	Global_45609[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_45609[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[121 /*12*/] = 289;
	Global_45609[121 /*12*/].f_1 = 290;
	Global_45609[121 /*12*/].f_2 = 1;
	Global_45609[121 /*12*/].f_3 = 32;
	Global_45609[121 /*12*/].f_10 = 0;
	Global_45609[121 /*12*/].f_11 = 0;
	Global_45609[121 /*12*/].f_4 = 1;
	Global_45609[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_45609[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[122 /*12*/] = 291;
	Global_45609[122 /*12*/].f_1 = 292;
	Global_45609[122 /*12*/].f_2 = 32;
	Global_45609[122 /*12*/].f_3 = 1;
	Global_45609[122 /*12*/].f_10 = 1;
	Global_45609[122 /*12*/].f_11 = 30000;
	Global_45609[122 /*12*/].f_4 = 1;
	Global_45609[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_45609[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[123 /*12*/] = 293;
	Global_45609[123 /*12*/].f_1 = 294;
	Global_45609[123 /*12*/].f_2 = 1;
	Global_45609[123 /*12*/].f_3 = 32;
	Global_45609[123 /*12*/].f_10 = 0;
	Global_45609[123 /*12*/].f_11 = 0;
	Global_45609[123 /*12*/].f_4 = 0;
	Global_45609[124 /*12*/] = 295;
	Global_45609[124 /*12*/].f_1 = 296;
	Global_45609[124 /*12*/].f_2 = 27;
	Global_45609[124 /*12*/].f_3 = 1;
	Global_45609[124 /*12*/].f_10 = 1;
	Global_45609[124 /*12*/].f_11 = 0;
	Global_45609[124 /*12*/].f_4 = 1;
	Global_45609[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_45609[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[125 /*12*/] = 297;
	Global_45609[125 /*12*/].f_1 = 298;
	Global_45609[125 /*12*/].f_2 = 1;
	Global_45609[125 /*12*/].f_3 = 27;
	Global_45609[125 /*12*/].f_10 = 0;
	Global_45609[125 /*12*/].f_11 = 0;
	Global_45609[125 /*12*/].f_4 = 0;
	Global_45609[126 /*12*/] = 299;
	Global_45609[126 /*12*/].f_1 = 300;
	Global_45609[126 /*12*/].f_2 = 2;
	Global_45609[126 /*12*/].f_3 = 1;
	Global_45609[126 /*12*/].f_10 = 1;
	Global_45609[126 /*12*/].f_11 = 0;
	Global_45609[126 /*12*/].f_4 = 1;
	Global_45609[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_45609[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[127 /*12*/] = 301;
	Global_45609[127 /*12*/].f_1 = 302;
	Global_45609[127 /*12*/].f_2 = 1;
	Global_45609[127 /*12*/].f_3 = 2;
	Global_45609[127 /*12*/].f_10 = 0;
	Global_45609[127 /*12*/].f_11 = 0;
	Global_45609[127 /*12*/].f_4 = 1;
	Global_45609[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_45609[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[128 /*12*/] = 303;
	Global_45609[128 /*12*/].f_1 = 304;
	Global_45609[128 /*12*/].f_2 = 2;
	Global_45609[128 /*12*/].f_3 = 1;
	Global_45609[128 /*12*/].f_10 = 1;
	Global_45609[128 /*12*/].f_11 = 60000;
	Global_45609[128 /*12*/].f_4 = 1;
	Global_45609[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_45609[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[129 /*12*/] = 305;
	Global_45609[129 /*12*/].f_1 = 306;
	Global_45609[129 /*12*/].f_2 = 1;
	Global_45609[129 /*12*/].f_3 = 2;
	Global_45609[129 /*12*/].f_10 = 0;
	Global_45609[129 /*12*/].f_11 = 0;
	Global_45609[129 /*12*/].f_4 = 1;
	Global_45609[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_45609[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[130 /*12*/] = 307;
	Global_45609[130 /*12*/].f_1 = 308;
	Global_45609[130 /*12*/].f_2 = 2;
	Global_45609[130 /*12*/].f_3 = 1;
	Global_45609[130 /*12*/].f_10 = 0;
	Global_45609[130 /*12*/].f_11 = 30000;
	Global_45609[130 /*12*/].f_4 = 0;
	Global_45609[131 /*12*/] = 309;
	Global_45609[131 /*12*/].f_1 = 310;
	Global_45609[131 /*12*/].f_2 = 0;
	Global_45609[131 /*12*/].f_3 = 1;
	Global_45609[131 /*12*/].f_10 = 1;
	Global_45609[131 /*12*/].f_11 = 0;
	Global_45609[131 /*12*/].f_4 = 1;
	Global_45609[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_45609[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[132 /*12*/] = 311;
	Global_45609[132 /*12*/].f_1 = 312;
	Global_45609[132 /*12*/].f_2 = 1;
	Global_45609[132 /*12*/].f_3 = 0;
	Global_45609[132 /*12*/].f_10 = 0;
	Global_45609[132 /*12*/].f_11 = 0;
	Global_45609[132 /*12*/].f_4 = 1;
	Global_45609[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_45609[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[133 /*12*/] = 313;
	Global_45609[133 /*12*/].f_1 = 314;
	Global_45609[133 /*12*/].f_2 = 0;
	Global_45609[133 /*12*/].f_3 = 1;
	Global_45609[133 /*12*/].f_10 = 0;
	Global_45609[133 /*12*/].f_11 = 25000;
	Global_45609[133 /*12*/].f_4 = 0;
	Global_45609[134 /*12*/] = 315;
	Global_45609[134 /*12*/].f_1 = 316;
	Global_45609[134 /*12*/].f_2 = 0;
	Global_45609[134 /*12*/].f_3 = 1;
	Global_45609[134 /*12*/].f_10 = 1;
	Global_45609[134 /*12*/].f_11 = 0;
	Global_45609[134 /*12*/].f_4 = 1;
	Global_45609[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_45609[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[135 /*12*/] = 317;
	Global_45609[135 /*12*/].f_1 = 318;
	Global_45609[135 /*12*/].f_2 = 1;
	Global_45609[135 /*12*/].f_3 = 0;
	Global_45609[135 /*12*/].f_10 = 0;
	Global_45609[135 /*12*/].f_11 = 0;
	Global_45609[135 /*12*/].f_4 = 0;
	Global_45609[136 /*12*/] = 322;
	Global_45609[136 /*12*/].f_1 = 323;
	Global_45609[136 /*12*/].f_2 = 33;
	Global_45609[136 /*12*/].f_3 = 2;
	Global_45609[136 /*12*/].f_10 = 1;
	Global_45609[136 /*12*/].f_11 = 0;
	Global_45609[136 /*12*/].f_4 = 1;
	Global_45609[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_45609[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[137 /*12*/] = 324;
	Global_45609[137 /*12*/].f_1 = 325;
	Global_45609[137 /*12*/].f_2 = 2;
	Global_45609[137 /*12*/].f_3 = 33;
	Global_45609[137 /*12*/].f_10 = 0;
	Global_45609[137 /*12*/].f_11 = 0;
	Global_45609[137 /*12*/].f_4 = 0;
	Global_45609[138 /*12*/] = 326;
	Global_45609[138 /*12*/].f_1 = 327;
	Global_45609[138 /*12*/].f_2 = 33;
	Global_45609[138 /*12*/].f_3 = 2;
	Global_45609[138 /*12*/].f_10 = 1;
	Global_45609[138 /*12*/].f_11 = 0;
	Global_45609[138 /*12*/].f_4 = 1;
	Global_45609[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_45609[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[139 /*12*/] = 328;
	Global_45609[139 /*12*/].f_1 = 329;
	Global_45609[139 /*12*/].f_2 = 2;
	Global_45609[139 /*12*/].f_3 = 33;
	Global_45609[139 /*12*/].f_10 = 0;
	Global_45609[139 /*12*/].f_11 = 0;
	Global_45609[139 /*12*/].f_4 = 1;
	Global_45609[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_45609[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[140 /*12*/] = 330;
	Global_45609[140 /*12*/].f_1 = 331;
	Global_45609[140 /*12*/].f_2 = 2;
	Global_45609[140 /*12*/].f_3 = 33;
	Global_45609[140 /*12*/].f_10 = 0;
	Global_45609[140 /*12*/].f_11 = 0;
	Global_45609[140 /*12*/].f_4 = 0;
	Global_45609[141 /*12*/] = 332;
	Global_45609[141 /*12*/].f_1 = 333;
	Global_45609[141 /*12*/].f_2 = 29;
	Global_45609[141 /*12*/].f_3 = 2;
	Global_45609[141 /*12*/].f_10 = 0;
	Global_45609[141 /*12*/].f_11 = 0;
	Global_45609[141 /*12*/].f_4 = 1;
	Global_45609[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_45609[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[142 /*12*/] = 334;
	Global_45609[142 /*12*/].f_1 = 335;
	Global_45609[142 /*12*/].f_2 = 2;
	Global_45609[142 /*12*/].f_3 = 29;
	Global_45609[142 /*12*/].f_10 = 0;
	Global_45609[142 /*12*/].f_11 = 0;
	Global_45609[142 /*12*/].f_4 = 0;
	Global_45609[143 /*12*/] = 336;
	Global_45609[143 /*12*/].f_1 = 337;
	Global_45609[143 /*12*/].f_2 = 3;
	Global_45609[143 /*12*/].f_3 = 2;
	Global_45609[143 /*12*/].f_10 = 0;
	Global_45609[143 /*12*/].f_11 = 0;
	Global_45609[143 /*12*/].f_4 = 1;
	Global_45609[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_45609[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[144 /*12*/] = 338;
	Global_45609[144 /*12*/].f_1 = 339;
	Global_45609[144 /*12*/].f_2 = 2;
	Global_45609[144 /*12*/].f_3 = 3;
	Global_45609[144 /*12*/].f_10 = 0;
	Global_45609[144 /*12*/].f_11 = 0;
	Global_45609[144 /*12*/].f_4 = 0;
	Global_45609[145 /*12*/] = 343;
	Global_45609[145 /*12*/].f_1 = 344;
	Global_45609[145 /*12*/].f_2 = 34;
	Global_45609[145 /*12*/].f_3 = 2;
	Global_45609[145 /*12*/].f_10 = 0;
	Global_45609[145 /*12*/].f_11 = 0;
	Global_45609[145 /*12*/].f_4 = 1;
	Global_45609[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_45609[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_45609[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[146 /*12*/] = 345;
	Global_45609[146 /*12*/].f_1 = 346;
	Global_45609[146 /*12*/].f_2 = 2;
	Global_45609[146 /*12*/].f_3 = 34;
	Global_45609[146 /*12*/].f_10 = 0;
	Global_45609[146 /*12*/].f_11 = 0;
	Global_45609[146 /*12*/].f_4 = 0;
	Global_45609[147 /*12*/] = 319;
	Global_45609[147 /*12*/].f_1 = 347;
	Global_45609[147 /*12*/].f_2 = 26;
	Global_45609[147 /*12*/].f_3 = 2;
	Global_45609[147 /*12*/].f_10 = 0;
	Global_45609[147 /*12*/].f_11 = 0;
	Global_45609[147 /*12*/].f_4 = 0;
	Global_45609[148 /*12*/] = 351;
	Global_45609[148 /*12*/].f_1 = 352;
	Global_45609[148 /*12*/].f_2 = 35;
	Global_45609[148 /*12*/].f_3 = 2;
	Global_45609[148 /*12*/].f_10 = 0;
	Global_45609[148 /*12*/].f_11 = 0;
	Global_45609[148 /*12*/].f_4 = 0;
	Global_45609[149 /*12*/] = 351;
	Global_45609[149 /*12*/].f_1 = 352;
	Global_45609[149 /*12*/].f_2 = 35;
	Global_45609[149 /*12*/].f_3 = 0;
	Global_45609[149 /*12*/].f_10 = 0;
	Global_45609[149 /*12*/].f_11 = 0;
	Global_45609[149 /*12*/].f_4 = 0;
	Global_45609[150 /*12*/] = 351;
	Global_45609[150 /*12*/].f_1 = 352;
	Global_45609[150 /*12*/].f_2 = 35;
	Global_45609[150 /*12*/].f_3 = 1;
	Global_45609[150 /*12*/].f_10 = 0;
	Global_45609[150 /*12*/].f_11 = 0;
	Global_45609[150 /*12*/].f_4 = 0;
	Global_45609[151 /*12*/] = 355;
	Global_45609[151 /*12*/].f_1 = 356;
	Global_45609[151 /*12*/].f_2 = 36;
	Global_45609[151 /*12*/].f_3 = 2;
	Global_45609[151 /*12*/].f_10 = 0;
	Global_45609[151 /*12*/].f_11 = 0;
	Global_45609[151 /*12*/].f_4 = 0;
	Global_45609[152 /*12*/] = 355;
	Global_45609[152 /*12*/].f_1 = 356;
	Global_45609[152 /*12*/].f_2 = 36;
	Global_45609[152 /*12*/].f_3 = 0;
	Global_45609[152 /*12*/].f_10 = 0;
	Global_45609[152 /*12*/].f_11 = 0;
	Global_45609[152 /*12*/].f_4 = 0;
	Global_45609[153 /*12*/] = 355;
	Global_45609[153 /*12*/].f_1 = 356;
	Global_45609[153 /*12*/].f_2 = 36;
	Global_45609[153 /*12*/].f_3 = 1;
	Global_45609[153 /*12*/].f_10 = 0;
	Global_45609[153 /*12*/].f_11 = 0;
	Global_45609[153 /*12*/].f_4 = 0;
	Global_45609[154 /*12*/] = 363;
	Global_45609[154 /*12*/].f_1 = 364;
	Global_45609[154 /*12*/].f_2 = 38;
	Global_45609[154 /*12*/].f_3 = 2;
	Global_45609[154 /*12*/].f_10 = 0;
	Global_45609[154 /*12*/].f_11 = 0;
	Global_45609[154 /*12*/].f_4 = 0;
	Global_45609[155 /*12*/] = 365;
	Global_45609[155 /*12*/].f_1 = 366;
	Global_45609[155 /*12*/].f_2 = 11;
	Global_45609[155 /*12*/].f_3 = 0;
	Global_45609[155 /*12*/].f_10 = 0;
	Global_45609[155 /*12*/].f_11 = 0;
	Global_45609[155 /*12*/].f_4 = 0;
	Global_45609[156 /*12*/] = 365;
	Global_45609[156 /*12*/].f_1 = 366;
	Global_45609[156 /*12*/].f_2 = 11;
	Global_45609[156 /*12*/].f_3 = 1;
	Global_45609[156 /*12*/].f_10 = 0;
	Global_45609[156 /*12*/].f_11 = 0;
	Global_45609[156 /*12*/].f_4 = 0;
	Global_45609[157 /*12*/] = 365;
	Global_45609[157 /*12*/].f_1 = 366;
	Global_45609[157 /*12*/].f_2 = 11;
	Global_45609[157 /*12*/].f_3 = 2;
	Global_45609[157 /*12*/].f_10 = 0;
	Global_45609[157 /*12*/].f_11 = 0;
	Global_45609[157 /*12*/].f_4 = 0;
	Global_45609[158 /*12*/] = 367;
	Global_45609[158 /*12*/].f_1 = 368;
	Global_45609[158 /*12*/].f_2 = 29;
	Global_45609[158 /*12*/].f_3 = 2;
	Global_45609[158 /*12*/].f_10 = 0;
	Global_45609[158 /*12*/].f_11 = 0;
	Global_45609[158 /*12*/].f_4 = 0;
	Global_45609[159 /*12*/] = 372;
	Global_45609[159 /*12*/].f_1 = 373;
	Global_45609[159 /*12*/].f_2 = 39;
	Global_45609[159 /*12*/].f_3 = 0;
	Global_45609[159 /*12*/].f_10 = 0;
	Global_45609[159 /*12*/].f_11 = 0;
	Global_45609[159 /*12*/].f_4 = 0;
	Global_45609[160 /*12*/] = 374;
	Global_45609[160 /*12*/].f_1 = 375;
	Global_45609[160 /*12*/].f_2 = 39;
	Global_45609[160 /*12*/].f_3 = 1;
	Global_45609[160 /*12*/].f_10 = 0;
	Global_45609[160 /*12*/].f_11 = 0;
	Global_45609[160 /*12*/].f_4 = 0;
	Global_45609[161 /*12*/] = 417;
	Global_45609[161 /*12*/].f_1 = 418;
	Global_45609[161 /*12*/].f_2 = 40;
	Global_45609[161 /*12*/].f_3 = 1;
	Global_45609[161 /*12*/].f_10 = 0;
	Global_45609[161 /*12*/].f_11 = 0;
	Global_45609[161 /*12*/].f_4 = 0;
	Global_45609[162 /*12*/] = 419;
	Global_45609[162 /*12*/].f_1 = 420;
	Global_45609[162 /*12*/].f_2 = 43;
	Global_45609[162 /*12*/].f_3 = 0;
	Global_45609[162 /*12*/].f_10 = 0;
	Global_45609[162 /*12*/].f_11 = 0;
	Global_45609[162 /*12*/].f_4 = 0;
	Global_45609[163 /*12*/] = 421;
	Global_45609[163 /*12*/].f_1 = 422;
	Global_45609[163 /*12*/].f_2 = 43;
	Global_45609[163 /*12*/].f_3 = 2;
	Global_45609[163 /*12*/].f_10 = 0;
	Global_45609[163 /*12*/].f_11 = 0;
	Global_45609[163 /*12*/].f_4 = 0;
	Global_45609[164 /*12*/] = 423;
	Global_45609[164 /*12*/].f_1 = 424;
	Global_45609[164 /*12*/].f_2 = 43;
	Global_45609[164 /*12*/].f_3 = 1;
	Global_45609[164 /*12*/].f_10 = 0;
	Global_45609[164 /*12*/].f_11 = 0;
	Global_45609[164 /*12*/].f_4 = 0;
	Global_45609[165 /*12*/] = 425;
	Global_45609[165 /*12*/].f_1 = 426;
	Global_45609[165 /*12*/].f_2 = 44;
	Global_45609[165 /*12*/].f_3 = 1;
	Global_45609[165 /*12*/].f_10 = 0;
	Global_45609[165 /*12*/].f_11 = 0;
	Global_45609[165 /*12*/].f_4 = 0;
	Global_45609[166 /*12*/] = 427;
	Global_45609[166 /*12*/].f_1 = 428;
	Global_45609[166 /*12*/].f_2 = 45;
	Global_45609[166 /*12*/].f_3 = 0;
	Global_45609[166 /*12*/].f_10 = 0;
	Global_45609[166 /*12*/].f_11 = 0;
	Global_45609[166 /*12*/].f_4 = 0;
	Global_45609[167 /*12*/] = 429;
	Global_45609[167 /*12*/].f_1 = 430;
	Global_45609[167 /*12*/].f_2 = 46;
	Global_45609[167 /*12*/].f_3 = 0;
	Global_45609[167 /*12*/].f_10 = 0;
	Global_45609[167 /*12*/].f_11 = 0;
	Global_45609[167 /*12*/].f_4 = 0;
	Global_45609[168 /*12*/] = 431;
	Global_45609[168 /*12*/].f_1 = 432;
	Global_45609[168 /*12*/].f_2 = 49;
	Global_45609[168 /*12*/].f_3 = 0;
	Global_45609[168 /*12*/].f_10 = 0;
	Global_45609[168 /*12*/].f_11 = 0;
	Global_45609[168 /*12*/].f_4 = 0;
	Global_45609[169 /*12*/] = 433;
	Global_45609[169 /*12*/].f_1 = 434;
	Global_45609[169 /*12*/].f_2 = 49;
	Global_45609[169 /*12*/].f_3 = 2;
	Global_45609[169 /*12*/].f_10 = 0;
	Global_45609[169 /*12*/].f_11 = 0;
	Global_45609[169 /*12*/].f_4 = 0;
	Global_45609[170 /*12*/] = 435;
	Global_45609[170 /*12*/].f_1 = 436;
	Global_45609[170 /*12*/].f_2 = 49;
	Global_45609[170 /*12*/].f_3 = 1;
	Global_45609[170 /*12*/].f_10 = 0;
	Global_45609[170 /*12*/].f_11 = 0;
	Global_45609[170 /*12*/].f_4 = 0;
	Global_45609[171 /*12*/] = 437;
	Global_45609[171 /*12*/].f_1 = 438;
	Global_45609[171 /*12*/].f_2 = 50;
	Global_45609[171 /*12*/].f_3 = 1;
	Global_45609[171 /*12*/].f_10 = 0;
	Global_45609[171 /*12*/].f_11 = 0;
	Global_45609[171 /*12*/].f_4 = 0;
	Global_45609[172 /*12*/] = 439;
	Global_45609[172 /*12*/].f_1 = 440;
	Global_45609[172 /*12*/].f_2 = 51;
	Global_45609[172 /*12*/].f_3 = 0;
	Global_45609[172 /*12*/].f_10 = 0;
	Global_45609[172 /*12*/].f_11 = 0;
	Global_45609[172 /*12*/].f_4 = 0;
	Global_45609[173 /*12*/] = 441;
	Global_45609[173 /*12*/].f_1 = 442;
	Global_45609[173 /*12*/].f_2 = 51;
	Global_45609[173 /*12*/].f_3 = 2;
	Global_45609[173 /*12*/].f_10 = 0;
	Global_45609[173 /*12*/].f_11 = 0;
	Global_45609[173 /*12*/].f_4 = 0;
	Global_45609[174 /*12*/] = 443;
	Global_45609[174 /*12*/].f_1 = 444;
	Global_45609[174 /*12*/].f_2 = 51;
	Global_45609[174 /*12*/].f_3 = 1;
	Global_45609[174 /*12*/].f_10 = 0;
	Global_45609[174 /*12*/].f_11 = 0;
	Global_45609[174 /*12*/].f_4 = 0;
	Global_45609[175 /*12*/] = 445;
	Global_45609[175 /*12*/].f_1 = 446;
	Global_45609[175 /*12*/].f_2 = 52;
	Global_45609[175 /*12*/].f_3 = 0;
	Global_45609[175 /*12*/].f_10 = 0;
	Global_45609[175 /*12*/].f_11 = 0;
	Global_45609[175 /*12*/].f_4 = 0;
	Global_45609[176 /*12*/] = 447;
	Global_45609[176 /*12*/].f_1 = 448;
	Global_45609[176 /*12*/].f_2 = 52;
	Global_45609[176 /*12*/].f_3 = 2;
	Global_45609[176 /*12*/].f_10 = 0;
	Global_45609[176 /*12*/].f_11 = 0;
	Global_45609[176 /*12*/].f_4 = 0;
	Global_45609[177 /*12*/] = 449;
	Global_45609[177 /*12*/].f_1 = 450;
	Global_45609[177 /*12*/].f_2 = 52;
	Global_45609[177 /*12*/].f_3 = 1;
	Global_45609[177 /*12*/].f_10 = 0;
	Global_45609[177 /*12*/].f_11 = 0;
	Global_45609[177 /*12*/].f_4 = 0;
	Global_45609[178 /*12*/] = 451;
	Global_45609[178 /*12*/].f_1 = 452;
	Global_45609[178 /*12*/].f_2 = 53;
	Global_45609[178 /*12*/].f_3 = 2;
	Global_45609[178 /*12*/].f_10 = 0;
	Global_45609[178 /*12*/].f_11 = 0;
	Global_45609[178 /*12*/].f_4 = 0;
	Global_45609[179 /*12*/] = 453;
	Global_45609[179 /*12*/].f_1 = 454;
	Global_45609[179 /*12*/].f_2 = 53;
	Global_45609[179 /*12*/].f_3 = 0;
	Global_45609[179 /*12*/].f_10 = 0;
	Global_45609[179 /*12*/].f_11 = 0;
	Global_45609[179 /*12*/].f_4 = 0;
	Global_45609[180 /*12*/] = 455;
	Global_45609[180 /*12*/].f_1 = 456;
	Global_45609[180 /*12*/].f_2 = 53;
	Global_45609[180 /*12*/].f_3 = 1;
	Global_45609[180 /*12*/].f_10 = 0;
	Global_45609[180 /*12*/].f_11 = 0;
	Global_45609[180 /*12*/].f_4 = 0;
	Global_45609[181 /*12*/] = 457;
	Global_45609[181 /*12*/].f_1 = 458;
	Global_45609[181 /*12*/].f_2 = 4;
	Global_45609[181 /*12*/].f_3 = 0;
	Global_45609[181 /*12*/].f_10 = 0;
	Global_45609[181 /*12*/].f_11 = 0;
	Global_45609[181 /*12*/].f_4 = 0;
	Global_45609[182 /*12*/] = 459;
	Global_45609[182 /*12*/].f_1 = 460;
	Global_45609[182 /*12*/].f_2 = 37;
	Global_45609[182 /*12*/].f_3 = 0;
	Global_45609[182 /*12*/].f_10 = 0;
	Global_45609[182 /*12*/].f_11 = 0;
	Global_45609[182 /*12*/].f_4 = 0;
	Global_45609[183 /*12*/] = 461;
	Global_45609[183 /*12*/].f_1 = 462;
	Global_45609[183 /*12*/].f_2 = 37;
	Global_45609[183 /*12*/].f_3 = 2;
	Global_45609[183 /*12*/].f_10 = 0;
	Global_45609[183 /*12*/].f_11 = 0;
	Global_45609[183 /*12*/].f_4 = 0;
	Global_45609[184 /*12*/] = 463;
	Global_45609[184 /*12*/].f_1 = 464;
	Global_45609[184 /*12*/].f_2 = 37;
	Global_45609[184 /*12*/].f_3 = 1;
	Global_45609[184 /*12*/].f_10 = 0;
	Global_45609[184 /*12*/].f_11 = 0;
	Global_45609[184 /*12*/].f_4 = 0;
	Global_45609[185 /*12*/] = 471;
	Global_45609[185 /*12*/].f_1 = 472;
	Global_45609[185 /*12*/].f_2 = 54;
	Global_45609[185 /*12*/].f_3 = 1;
	Global_45609[185 /*12*/].f_10 = 0;
	Global_45609[185 /*12*/].f_11 = 0;
	Global_45609[185 /*12*/].f_4 = 0;
	Global_45609[186 /*12*/] = 473;
	Global_45609[186 /*12*/].f_1 = 474;
	Global_45609[186 /*12*/].f_2 = 54;
	Global_45609[186 /*12*/].f_3 = 0;
	Global_45609[186 /*12*/].f_10 = 0;
	Global_45609[186 /*12*/].f_11 = 0;
	Global_45609[186 /*12*/].f_4 = 0;
	Global_45609[187 /*12*/] = 475;
	Global_45609[187 /*12*/].f_1 = 476;
	Global_45609[187 /*12*/].f_2 = 55;
	Global_45609[187 /*12*/].f_3 = 1;
	Global_45609[187 /*12*/].f_10 = 0;
	Global_45609[187 /*12*/].f_11 = 0;
	Global_45609[187 /*12*/].f_4 = 0;
	Global_45609[188 /*12*/] = 477;
	Global_45609[188 /*12*/].f_1 = 478;
	Global_45609[188 /*12*/].f_2 = 54;
	Global_45609[188 /*12*/].f_3 = 2;
	Global_45609[188 /*12*/].f_10 = 0;
	Global_45609[188 /*12*/].f_11 = 0;
	Global_45609[188 /*12*/].f_4 = 0;
	Global_45609[189 /*12*/] = 479;
	Global_45609[189 /*12*/].f_1 = 480;
	Global_45609[189 /*12*/].f_2 = 55;
	Global_45609[189 /*12*/].f_3 = 0;
	Global_45609[189 /*12*/].f_10 = 0;
	Global_45609[189 /*12*/].f_11 = 0;
	Global_45609[189 /*12*/].f_4 = 0;
	Global_45609[190 /*12*/] = 481;
	Global_45609[190 /*12*/].f_1 = 482;
	Global_45609[190 /*12*/].f_2 = 55;
	Global_45609[190 /*12*/].f_3 = 2;
	Global_45609[190 /*12*/].f_10 = 0;
	Global_45609[190 /*12*/].f_11 = 0;
	Global_45609[190 /*12*/].f_4 = 0;
	Global_45609[191 /*12*/] = 483;
	Global_45609[191 /*12*/].f_1 = 484;
	Global_45609[191 /*12*/].f_2 = 12;
	Global_45609[191 /*12*/].f_3 = 0;
	Global_45609[191 /*12*/].f_10 = 0;
	Global_45609[191 /*12*/].f_11 = 0;
	Global_45609[191 /*12*/].f_4 = 0;
	Global_45609[192 /*12*/] = 485;
	Global_45609[192 /*12*/].f_1 = 486;
	Global_45609[192 /*12*/].f_2 = 12;
	Global_45609[192 /*12*/].f_3 = 1;
	Global_45609[192 /*12*/].f_10 = 0;
	Global_45609[192 /*12*/].f_11 = 0;
	Global_45609[192 /*12*/].f_4 = 0;
	Global_45609[193 /*12*/] = 487;
	Global_45609[193 /*12*/].f_1 = 488;
	Global_45609[193 /*12*/].f_2 = 12;
	Global_45609[193 /*12*/].f_3 = 2;
	Global_45609[193 /*12*/].f_10 = 0;
	Global_45609[193 /*12*/].f_11 = 0;
	Global_45609[193 /*12*/].f_4 = 0;
	Global_45609[194 /*12*/] = 510;
	Global_45609[194 /*12*/].f_1 = 511;
	Global_45609[194 /*12*/].f_2 = 56;
	Global_45609[194 /*12*/].f_3 = 0;
	Global_45609[194 /*12*/].f_10 = 0;
	Global_45609[194 /*12*/].f_11 = 0;
	Global_45609[194 /*12*/].f_4 = 0;
	Global_45609[195 /*12*/] = 512;
	Global_45609[195 /*12*/].f_1 = 513;
	Global_45609[195 /*12*/].f_2 = 56;
	Global_45609[195 /*12*/].f_3 = 0;
	Global_45609[195 /*12*/].f_10 = 0;
	Global_45609[195 /*12*/].f_11 = 0;
	Global_45609[195 /*12*/].f_4 = 0;
	Global_45609[196 /*12*/] = 514;
	Global_45609[196 /*12*/].f_1 = 515;
	Global_45609[196 /*12*/].f_2 = 56;
	Global_45609[196 /*12*/].f_3 = 0;
	Global_45609[196 /*12*/].f_10 = 0;
	Global_45609[196 /*12*/].f_11 = 0;
	Global_45609[196 /*12*/].f_4 = 0;
	Global_45609[197 /*12*/] = 516;
	Global_45609[197 /*12*/].f_1 = 517;
	Global_45609[197 /*12*/].f_2 = 56;
	Global_45609[197 /*12*/].f_3 = 0;
	Global_45609[197 /*12*/].f_10 = 0;
	Global_45609[197 /*12*/].f_11 = 0;
	Global_45609[197 /*12*/].f_4 = 0;
	Global_45609[198 /*12*/] = 518;
	Global_45609[198 /*12*/].f_1 = 519;
	Global_45609[198 /*12*/].f_2 = 56;
	Global_45609[198 /*12*/].f_3 = 0;
	Global_45609[198 /*12*/].f_10 = 0;
	Global_45609[198 /*12*/].f_11 = 0;
	Global_45609[198 /*12*/].f_4 = 0;
	Global_45609[199 /*12*/] = 520;
	Global_45609[199 /*12*/].f_1 = 521;
	Global_45609[199 /*12*/].f_2 = 57;
	Global_45609[199 /*12*/].f_3 = 0;
	Global_45609[199 /*12*/].f_10 = 1;
	Global_45609[199 /*12*/].f_11 = 60000;
	Global_45609[199 /*12*/].f_4 = 1;
	Global_45609[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_45609[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_45609[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[200 /*12*/] = 522;
	Global_45609[200 /*12*/].f_1 = 523;
	Global_45609[200 /*12*/].f_2 = 0;
	Global_45609[200 /*12*/].f_3 = 57;
	Global_45609[200 /*12*/].f_10 = 0;
	Global_45609[200 /*12*/].f_11 = 0;
	Global_45609[200 /*12*/].f_4 = 1;
	Global_45609[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_45609[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_45609[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[201 /*12*/] = 524;
	Global_45609[201 /*12*/].f_1 = 525;
	Global_45609[201 /*12*/].f_2 = 57;
	Global_45609[201 /*12*/].f_3 = 0;
	Global_45609[201 /*12*/].f_10 = 1;
	Global_45609[201 /*12*/].f_11 = 60000;
	Global_45609[201 /*12*/].f_4 = 1;
	Global_45609[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_45609[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_45609[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[202 /*12*/] = 526;
	Global_45609[202 /*12*/].f_1 = 527;
	Global_45609[202 /*12*/].f_2 = 0;
	Global_45609[202 /*12*/].f_3 = 57;
	Global_45609[202 /*12*/].f_10 = 0;
	Global_45609[202 /*12*/].f_11 = 0;
	Global_45609[202 /*12*/].f_4 = 1;
	Global_45609[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_45609[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_45609[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[203 /*12*/] = 528;
	Global_45609[203 /*12*/].f_1 = 529;
	Global_45609[203 /*12*/].f_2 = 57;
	Global_45609[203 /*12*/].f_3 = 0;
	Global_45609[203 /*12*/].f_10 = 1;
	Global_45609[203 /*12*/].f_11 = 60000;
	Global_45609[203 /*12*/].f_4 = 1;
	Global_45609[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_45609[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_45609[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[204 /*12*/] = 530;
	Global_45609[204 /*12*/].f_1 = 531;
	Global_45609[204 /*12*/].f_2 = 0;
	Global_45609[204 /*12*/].f_3 = 57;
	Global_45609[204 /*12*/].f_10 = 0;
	Global_45609[204 /*12*/].f_11 = 0;
	Global_45609[204 /*12*/].f_4 = 1;
	Global_45609[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_45609[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_45609[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[205 /*12*/] = 532;
	Global_45609[205 /*12*/].f_1 = 533;
	Global_45609[205 /*12*/].f_2 = 57;
	Global_45609[205 /*12*/].f_3 = 0;
	Global_45609[205 /*12*/].f_10 = 1;
	Global_45609[205 /*12*/].f_11 = 60000;
	Global_45609[205 /*12*/].f_4 = 1;
	Global_45609[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_45609[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_45609[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[206 /*12*/] = 534;
	Global_45609[206 /*12*/].f_1 = 535;
	Global_45609[206 /*12*/].f_2 = 0;
	Global_45609[206 /*12*/].f_3 = 57;
	Global_45609[206 /*12*/].f_10 = 0;
	Global_45609[206 /*12*/].f_11 = 0;
	Global_45609[206 /*12*/].f_4 = 0;
	Global_45609[207 /*12*/] = 543;
	Global_45609[207 /*12*/].f_1 = 544;
	Global_45609[207 /*12*/].f_2 = 58;
	Global_45609[207 /*12*/].f_3 = 0;
	Global_45609[207 /*12*/].f_10 = 1;
	Global_45609[207 /*12*/].f_11 = 60000;
	Global_45609[207 /*12*/].f_4 = 1;
	Global_45609[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_45609[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_45609[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[208 /*12*/] = 545;
	Global_45609[208 /*12*/].f_1 = 546;
	Global_45609[208 /*12*/].f_2 = 0;
	Global_45609[208 /*12*/].f_3 = 58;
	Global_45609[208 /*12*/].f_10 = 0;
	Global_45609[208 /*12*/].f_11 = 0;
	Global_45609[208 /*12*/].f_4 = 1;
	Global_45609[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_45609[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_45609[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[209 /*12*/] = 547;
	Global_45609[209 /*12*/].f_1 = 548;
	Global_45609[209 /*12*/].f_2 = 58;
	Global_45609[209 /*12*/].f_3 = 0;
	Global_45609[209 /*12*/].f_10 = 1;
	Global_45609[209 /*12*/].f_11 = 60000;
	Global_45609[209 /*12*/].f_4 = 1;
	Global_45609[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_45609[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_45609[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[210 /*12*/] = 549;
	Global_45609[210 /*12*/].f_1 = 550;
	Global_45609[210 /*12*/].f_2 = 0;
	Global_45609[210 /*12*/].f_3 = 58;
	Global_45609[210 /*12*/].f_10 = 0;
	Global_45609[210 /*12*/].f_11 = 0;
	Global_45609[210 /*12*/].f_4 = 1;
	Global_45609[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_45609[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_45609[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[211 /*12*/] = 551;
	Global_45609[211 /*12*/].f_1 = 552;
	Global_45609[211 /*12*/].f_2 = 58;
	Global_45609[211 /*12*/].f_3 = 0;
	Global_45609[211 /*12*/].f_10 = 1;
	Global_45609[211 /*12*/].f_11 = 60000;
	Global_45609[211 /*12*/].f_4 = 1;
	Global_45609[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_45609[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_45609[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[212 /*12*/] = 553;
	Global_45609[212 /*12*/].f_1 = 554;
	Global_45609[212 /*12*/].f_2 = 0;
	Global_45609[212 /*12*/].f_3 = 58;
	Global_45609[212 /*12*/].f_10 = 0;
	Global_45609[212 /*12*/].f_11 = 0;
	Global_45609[212 /*12*/].f_4 = 1;
	Global_45609[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_45609[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_45609[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[213 /*12*/] = 555;
	Global_45609[213 /*12*/].f_1 = 556;
	Global_45609[213 /*12*/].f_2 = 58;
	Global_45609[213 /*12*/].f_3 = 0;
	Global_45609[213 /*12*/].f_10 = 1;
	Global_45609[213 /*12*/].f_11 = 60000;
	Global_45609[213 /*12*/].f_4 = 0;
	Global_45609[214 /*12*/] = 563;
	Global_45609[214 /*12*/].f_1 = 564;
	Global_45609[214 /*12*/].f_2 = 59;
	Global_45609[214 /*12*/].f_3 = 0;
	Global_45609[214 /*12*/].f_10 = 1;
	Global_45609[214 /*12*/].f_11 = 60000;
	Global_45609[214 /*12*/].f_4 = 1;
	Global_45609[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_45609[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_45609[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[215 /*12*/] = 565;
	Global_45609[215 /*12*/].f_1 = 566;
	Global_45609[215 /*12*/].f_2 = 0;
	Global_45609[215 /*12*/].f_3 = 59;
	Global_45609[215 /*12*/].f_10 = 0;
	Global_45609[215 /*12*/].f_11 = 0;
	Global_45609[215 /*12*/].f_4 = 1;
	Global_45609[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_45609[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_45609[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[216 /*12*/] = 567;
	Global_45609[216 /*12*/].f_1 = 568;
	Global_45609[216 /*12*/].f_2 = 59;
	Global_45609[216 /*12*/].f_3 = 0;
	Global_45609[216 /*12*/].f_10 = 1;
	Global_45609[216 /*12*/].f_11 = 60000;
	Global_45609[216 /*12*/].f_4 = 1;
	Global_45609[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_45609[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_45609[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[217 /*12*/] = 569;
	Global_45609[217 /*12*/].f_1 = 570;
	Global_45609[217 /*12*/].f_2 = 0;
	Global_45609[217 /*12*/].f_3 = 59;
	Global_45609[217 /*12*/].f_10 = 0;
	Global_45609[217 /*12*/].f_11 = 0;
	Global_45609[217 /*12*/].f_4 = 1;
	Global_45609[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_45609[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_45609[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[218 /*12*/] = 571;
	Global_45609[218 /*12*/].f_1 = 572;
	Global_45609[218 /*12*/].f_2 = 59;
	Global_45609[218 /*12*/].f_3 = 0;
	Global_45609[218 /*12*/].f_10 = 1;
	Global_45609[218 /*12*/].f_11 = 60000;
	Global_45609[218 /*12*/].f_4 = 1;
	Global_45609[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_45609[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_45609[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[219 /*12*/] = 573;
	Global_45609[219 /*12*/].f_1 = 574;
	Global_45609[219 /*12*/].f_2 = 0;
	Global_45609[219 /*12*/].f_3 = 59;
	Global_45609[219 /*12*/].f_10 = 0;
	Global_45609[219 /*12*/].f_11 = 0;
	Global_45609[219 /*12*/].f_4 = 1;
	Global_45609[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_45609[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_45609[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[220 /*12*/] = 575;
	Global_45609[220 /*12*/].f_1 = 576;
	Global_45609[220 /*12*/].f_2 = 59;
	Global_45609[220 /*12*/].f_3 = 0;
	Global_45609[220 /*12*/].f_10 = 1;
	Global_45609[220 /*12*/].f_11 = 60000;
	Global_45609[220 /*12*/].f_4 = 1;
	Global_45609[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_45609[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_45609[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[221 /*12*/] = 577;
	Global_45609[221 /*12*/].f_1 = 578;
	Global_45609[221 /*12*/].f_2 = 0;
	Global_45609[221 /*12*/].f_3 = 59;
	Global_45609[221 /*12*/].f_10 = 0;
	Global_45609[221 /*12*/].f_11 = 0;
	Global_45609[221 /*12*/].f_4 = 0;
	Global_45609[222 /*12*/] = 586;
	Global_45609[222 /*12*/].f_1 = 587;
	Global_45609[222 /*12*/].f_2 = 60;
	Global_45609[222 /*12*/].f_3 = 2;
	Global_45609[222 /*12*/].f_10 = 1;
	Global_45609[222 /*12*/].f_11 = 60000;
	Global_45609[222 /*12*/].f_4 = 1;
	Global_45609[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_45609[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_45609[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[223 /*12*/] = 588;
	Global_45609[223 /*12*/].f_1 = 589;
	Global_45609[223 /*12*/].f_2 = 2;
	Global_45609[223 /*12*/].f_3 = 60;
	Global_45609[223 /*12*/].f_10 = 0;
	Global_45609[223 /*12*/].f_11 = 0;
	Global_45609[223 /*12*/].f_4 = 1;
	Global_45609[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_45609[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_45609[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[224 /*12*/] = 590;
	Global_45609[224 /*12*/].f_1 = 591;
	Global_45609[224 /*12*/].f_2 = 60;
	Global_45609[224 /*12*/].f_3 = 2;
	Global_45609[224 /*12*/].f_10 = 1;
	Global_45609[224 /*12*/].f_11 = 60000;
	Global_45609[224 /*12*/].f_4 = 1;
	Global_45609[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_45609[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_45609[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[225 /*12*/] = 592;
	Global_45609[225 /*12*/].f_1 = 593;
	Global_45609[225 /*12*/].f_2 = 2;
	Global_45609[225 /*12*/].f_3 = 60;
	Global_45609[225 /*12*/].f_10 = 0;
	Global_45609[225 /*12*/].f_11 = 0;
	Global_45609[225 /*12*/].f_4 = 1;
	Global_45609[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_45609[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_45609[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[226 /*12*/] = 594;
	Global_45609[226 /*12*/].f_1 = 595;
	Global_45609[226 /*12*/].f_2 = 60;
	Global_45609[226 /*12*/].f_3 = 2;
	Global_45609[226 /*12*/].f_10 = 1;
	Global_45609[226 /*12*/].f_11 = 60000;
	Global_45609[226 /*12*/].f_4 = 1;
	Global_45609[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_45609[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_45609[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[227 /*12*/] = 596;
	Global_45609[227 /*12*/].f_1 = 597;
	Global_45609[227 /*12*/].f_2 = 2;
	Global_45609[227 /*12*/].f_3 = 60;
	Global_45609[227 /*12*/].f_10 = 1;
	Global_45609[227 /*12*/].f_11 = 60000;
	Global_45609[227 /*12*/].f_4 = 1;
	Global_45609[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_45609[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_45609[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[228 /*12*/] = 598;
	Global_45609[228 /*12*/].f_1 = 599;
	Global_45609[228 /*12*/].f_2 = 2;
	Global_45609[228 /*12*/].f_3 = 60;
	Global_45609[228 /*12*/].f_10 = 0;
	Global_45609[228 /*12*/].f_11 = 0;
	Global_45609[228 /*12*/].f_4 = 0;
	Global_45609[229 /*12*/] = 606;
	Global_45609[229 /*12*/].f_1 = 607;
	Global_45609[229 /*12*/].f_2 = 61;
	Global_45609[229 /*12*/].f_3 = 2;
	Global_45609[229 /*12*/].f_10 = 1;
	Global_45609[229 /*12*/].f_11 = 60000;
	Global_45609[229 /*12*/].f_4 = 1;
	Global_45609[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_45609[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_45609[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[230 /*12*/] = 608;
	Global_45609[230 /*12*/].f_1 = 609;
	Global_45609[230 /*12*/].f_2 = 2;
	Global_45609[230 /*12*/].f_3 = 61;
	Global_45609[230 /*12*/].f_10 = 0;
	Global_45609[230 /*12*/].f_11 = 0;
	Global_45609[230 /*12*/].f_4 = 1;
	Global_45609[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_45609[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_45609[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[231 /*12*/] = 611;
	Global_45609[231 /*12*/].f_1 = 612;
	Global_45609[231 /*12*/].f_2 = 61;
	Global_45609[231 /*12*/].f_3 = 2;
	Global_45609[231 /*12*/].f_10 = 1;
	Global_45609[231 /*12*/].f_11 = 60000;
	Global_45609[231 /*12*/].f_4 = 1;
	Global_45609[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_45609[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_45609[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[232 /*12*/] = 613;
	Global_45609[232 /*12*/].f_1 = 614;
	Global_45609[232 /*12*/].f_2 = 2;
	Global_45609[232 /*12*/].f_3 = 61;
	Global_45609[232 /*12*/].f_10 = 0;
	Global_45609[232 /*12*/].f_11 = 0;
	Global_45609[232 /*12*/].f_4 = 1;
	Global_45609[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_45609[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_45609[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[233 /*12*/] = 615;
	Global_45609[233 /*12*/].f_1 = 616;
	Global_45609[233 /*12*/].f_2 = 61;
	Global_45609[233 /*12*/].f_3 = 2;
	Global_45609[233 /*12*/].f_10 = 1;
	Global_45609[233 /*12*/].f_11 = 60000;
	Global_45609[233 /*12*/].f_4 = 1;
	Global_45609[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_45609[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_45609[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[234 /*12*/] = 620;
	Global_45609[234 /*12*/].f_1 = 621;
	Global_45609[234 /*12*/].f_2 = 2;
	Global_45609[234 /*12*/].f_3 = 61;
	Global_45609[234 /*12*/].f_10 = 0;
	Global_45609[234 /*12*/].f_11 = 0;
	Global_45609[234 /*12*/].f_4 = 0;
	Global_45609[235 /*12*/] = 623;
	Global_45609[235 /*12*/].f_1 = 624;
	Global_45609[235 /*12*/].f_2 = 62;
	Global_45609[235 /*12*/].f_3 = 2;
	Global_45609[235 /*12*/].f_10 = 1;
	Global_45609[235 /*12*/].f_11 = 60000;
	Global_45609[235 /*12*/].f_4 = 1;
	Global_45609[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_45609[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_45609[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[236 /*12*/] = 625;
	Global_45609[236 /*12*/].f_1 = 626;
	Global_45609[236 /*12*/].f_2 = 2;
	Global_45609[236 /*12*/].f_3 = 62;
	Global_45609[236 /*12*/].f_10 = 0;
	Global_45609[236 /*12*/].f_11 = 0;
	Global_45609[236 /*12*/].f_4 = 1;
	Global_45609[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_45609[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_45609[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[237 /*12*/] = 627;
	Global_45609[237 /*12*/].f_1 = 628;
	Global_45609[237 /*12*/].f_2 = 62;
	Global_45609[237 /*12*/].f_3 = 2;
	Global_45609[237 /*12*/].f_10 = 1;
	Global_45609[237 /*12*/].f_11 = 60000;
	Global_45609[237 /*12*/].f_4 = 1;
	Global_45609[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_45609[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_45609[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[238 /*12*/] = 629;
	Global_45609[238 /*12*/].f_1 = 630;
	Global_45609[238 /*12*/].f_2 = 2;
	Global_45609[238 /*12*/].f_3 = 62;
	Global_45609[238 /*12*/].f_10 = 0;
	Global_45609[238 /*12*/].f_11 = 0;
	Global_45609[238 /*12*/].f_4 = 1;
	Global_45609[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_45609[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_45609[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[239 /*12*/] = 631;
	Global_45609[239 /*12*/].f_1 = 632;
	Global_45609[239 /*12*/].f_2 = 62;
	Global_45609[239 /*12*/].f_3 = 2;
	Global_45609[239 /*12*/].f_10 = 1;
	Global_45609[239 /*12*/].f_11 = 60000;
	Global_45609[239 /*12*/].f_4 = 1;
	Global_45609[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_45609[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_45609[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45609[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45609[240 /*12*/] = 633;
	Global_45609[240 /*12*/].f_1 = 634;
	Global_45609[240 /*12*/].f_2 = 2;
	Global_45609[240 /*12*/].f_3 = 62;
	Global_45609[240 /*12*/].f_10 = 0;
	Global_45609[240 /*12*/].f_11 = 0;
	Global_45609[240 /*12*/].f_4 = 0;
	Global_45609[241 /*12*/] = 646;
	Global_45609[241 /*12*/].f_1 = 647;
	Global_45609[241 /*12*/].f_2 = 36;
	Global_45609[241 /*12*/].f_3 = 2;
	Global_45609[241 /*12*/].f_10 = 0;
	Global_45609[241 /*12*/].f_11 = 0;
	Global_45609[241 /*12*/].f_4 = 0;
	Global_45609[242 /*12*/] = 648;
	Global_45609[242 /*12*/].f_1 = 649;
	Global_45609[242 /*12*/].f_2 = 36;
	Global_45609[242 /*12*/].f_3 = 0;
	Global_45609[242 /*12*/].f_10 = 0;
	Global_45609[242 /*12*/].f_11 = 0;
	Global_45609[242 /*12*/].f_4 = 0;
	Global_45609[243 /*12*/] = 650;
	Global_45609[243 /*12*/].f_1 = 651;
	Global_45609[243 /*12*/].f_2 = 36;
	Global_45609[243 /*12*/].f_3 = 1;
	Global_45609[243 /*12*/].f_10 = 0;
	Global_45609[243 /*12*/].f_11 = 0;
	Global_45609[243 /*12*/].f_4 = 0;
	Global_45609[244 /*12*/] = 655;
	Global_45609[244 /*12*/].f_1 = 656;
	Global_45609[244 /*12*/].f_2 = 65;
	Global_45609[244 /*12*/].f_3 = 1;
	Global_45609[244 /*12*/].f_10 = 0;
	Global_45609[244 /*12*/].f_11 = 0;
	Global_45609[244 /*12*/].f_4 = 0;
	Global_45609[245 /*12*/] = 657;
	Global_45609[245 /*12*/].f_1 = 658;
	Global_45609[245 /*12*/].f_2 = 65;
	Global_45609[245 /*12*/].f_3 = 1;
	Global_45609[245 /*12*/].f_10 = 0;
	Global_45609[245 /*12*/].f_11 = 0;
	Global_45609[245 /*12*/].f_4 = 0;
	Global_45609[246 /*12*/] = 659;
	Global_45609[246 /*12*/].f_1 = 660;
	Global_45609[246 /*12*/].f_2 = 65;
	Global_45609[246 /*12*/].f_3 = 1;
	Global_45609[246 /*12*/].f_10 = 0;
	Global_45609[246 /*12*/].f_11 = 0;
	Global_45609[246 /*12*/].f_4 = 0;
	Global_45609[247 /*12*/] = 661;
	Global_45609[247 /*12*/].f_1 = 662;
	Global_45609[247 /*12*/].f_2 = 65;
	Global_45609[247 /*12*/].f_3 = 1;
	Global_45609[247 /*12*/].f_10 = 0;
	Global_45609[247 /*12*/].f_11 = 0;
	Global_45609[247 /*12*/].f_4 = 0;
	Global_45609[248 /*12*/] = 663;
	Global_45609[248 /*12*/].f_1 = 664;
	Global_45609[248 /*12*/].f_2 = 33;
	Global_45609[248 /*12*/].f_3 = 2;
	Global_45609[248 /*12*/].f_10 = 0;
	Global_45609[248 /*12*/].f_11 = 40000;
	Global_45609[248 /*12*/].f_4 = 0;
	Global_45609[249 /*12*/] = 665;
	Global_45609[249 /*12*/].f_1 = 666;
	Global_45609[249 /*12*/].f_2 = 19;
	Global_45609[249 /*12*/].f_3 = 1;
	Global_45609[249 /*12*/].f_10 = 1;
	Global_45609[249 /*12*/].f_11 = 0;
	Global_45609[249 /*12*/].f_4 = 0;
	Global_45609[250 /*12*/] = 667;
	Global_45609[250 /*12*/].f_1 = 668;
	Global_45609[250 /*12*/].f_2 = 19;
	Global_45609[250 /*12*/].f_3 = 1;
	Global_45609[250 /*12*/].f_10 = 1;
	Global_45609[250 /*12*/].f_11 = 0;
	Global_45609[250 /*12*/].f_4 = 0;
	Global_45609[251 /*12*/] = 669;
	Global_45609[251 /*12*/].f_1 = 670;
	Global_45609[251 /*12*/].f_2 = 19;
	Global_45609[251 /*12*/].f_3 = 1;
	Global_45609[251 /*12*/].f_10 = 1;
	Global_45609[251 /*12*/].f_11 = 0;
	Global_45609[251 /*12*/].f_4 = 0;
	Global_45609[252 /*12*/] = 671;
	Global_45609[252 /*12*/].f_1 = 672;
	Global_45609[252 /*12*/].f_2 = 19;
	Global_45609[252 /*12*/].f_3 = 1;
	Global_45609[252 /*12*/].f_10 = 1;
	Global_45609[252 /*12*/].f_11 = 0;
	Global_45609[252 /*12*/].f_4 = 0;
	Global_45609[253 /*12*/] = 673;
	Global_45609[253 /*12*/].f_1 = 674;
	Global_45609[253 /*12*/].f_2 = 19;
	Global_45609[253 /*12*/].f_3 = 1;
	Global_45609[253 /*12*/].f_10 = 1;
	Global_45609[253 /*12*/].f_11 = 0;
	Global_45609[253 /*12*/].f_4 = 0;
	Global_45609[254 /*12*/] = 675;
	Global_45609[254 /*12*/].f_1 = 676;
	Global_45609[254 /*12*/].f_2 = 19;
	Global_45609[254 /*12*/].f_3 = 1;
	Global_45609[254 /*12*/].f_10 = 1;
	Global_45609[254 /*12*/].f_11 = 0;
	Global_45609[254 /*12*/].f_4 = 0;
	Global_45609[255 /*12*/] = 679;
	Global_45609[255 /*12*/].f_1 = 680;
	Global_45609[255 /*12*/].f_2 = 19;
	Global_45609[255 /*12*/].f_3 = 1;
	Global_45609[255 /*12*/].f_10 = 1;
	Global_45609[255 /*12*/].f_11 = 0;
	Global_45609[255 /*12*/].f_4 = 0;
	Global_45609[256 /*12*/] = 677;
	Global_45609[256 /*12*/].f_1 = 678;
	Global_45609[256 /*12*/].f_2 = 19;
	Global_45609[256 /*12*/].f_3 = 1;
	Global_45609[256 /*12*/].f_10 = 1;
	Global_45609[256 /*12*/].f_11 = 0;
	Global_45609[256 /*12*/].f_4 = 0;
	Global_45609[257 /*12*/] = 681;
	Global_45609[257 /*12*/].f_1 = 682;
	Global_45609[257 /*12*/].f_2 = 19;
	Global_45609[257 /*12*/].f_3 = 1;
	Global_45609[257 /*12*/].f_10 = 1;
	Global_45609[257 /*12*/].f_11 = 0;
	Global_45609[257 /*12*/].f_4 = 0;
	Global_45609[258 /*12*/] = 683;
	Global_45609[258 /*12*/].f_1 = 684;
	Global_45609[258 /*12*/].f_2 = 19;
	Global_45609[258 /*12*/].f_3 = 1;
	Global_45609[258 /*12*/].f_10 = 1;
	Global_45609[258 /*12*/].f_11 = 0;
	Global_45609[258 /*12*/].f_4 = 0;
	Global_45609[259 /*12*/] = 685;
	Global_45609[259 /*12*/].f_1 = 686;
	Global_45609[259 /*12*/].f_2 = 19;
	Global_45609[259 /*12*/].f_3 = 1;
	Global_45609[259 /*12*/].f_10 = 1;
	Global_45609[259 /*12*/].f_11 = 0;
	Global_45609[259 /*12*/].f_4 = 0;
	Global_45609[260 /*12*/] = 687;
	Global_45609[260 /*12*/].f_1 = 688;
	Global_45609[260 /*12*/].f_2 = 19;
	Global_45609[260 /*12*/].f_3 = 1;
	Global_45609[260 /*12*/].f_10 = 1;
	Global_45609[260 /*12*/].f_11 = 0;
	Global_45609[260 /*12*/].f_4 = 0;
	Global_45609[261 /*12*/] = 691;
	Global_45609[261 /*12*/].f_1 = 692;
	Global_45609[261 /*12*/].f_2 = 19;
	Global_45609[261 /*12*/].f_3 = 1;
	Global_45609[261 /*12*/].f_10 = 1;
	Global_45609[261 /*12*/].f_11 = 0;
	Global_45609[261 /*12*/].f_4 = 0;
	Global_45609[262 /*12*/] = 689;
	Global_45609[262 /*12*/].f_1 = 690;
	Global_45609[262 /*12*/].f_2 = 19;
	Global_45609[262 /*12*/].f_3 = 1;
	Global_45609[262 /*12*/].f_10 = 1;
	Global_45609[262 /*12*/].f_11 = 0;
	Global_45609[262 /*12*/].f_4 = 0;
	Global_45609[263 /*12*/] = 693;
	Global_45609[263 /*12*/].f_1 = 694;
	Global_45609[263 /*12*/].f_2 = 19;
	Global_45609[263 /*12*/].f_3 = 1;
	Global_45609[263 /*12*/].f_10 = 1;
	Global_45609[263 /*12*/].f_11 = 0;
	Global_45609[263 /*12*/].f_4 = 0;
	Global_45609[264 /*12*/] = 695;
	Global_45609[264 /*12*/].f_1 = 696;
	Global_45609[264 /*12*/].f_2 = 19;
	Global_45609[264 /*12*/].f_3 = 1;
	Global_45609[264 /*12*/].f_10 = 1;
	Global_45609[264 /*12*/].f_11 = 0;
	Global_45609[264 /*12*/].f_4 = 0;
	Global_45609[265 /*12*/] = 697;
	Global_45609[265 /*12*/].f_1 = 698;
	Global_45609[265 /*12*/].f_2 = 19;
	Global_45609[265 /*12*/].f_3 = 1;
	Global_45609[265 /*12*/].f_10 = 1;
	Global_45609[265 /*12*/].f_11 = 0;
	Global_45609[265 /*12*/].f_4 = 0;
	Global_45609[266 /*12*/] = 699;
	Global_45609[266 /*12*/].f_1 = 700;
	Global_45609[266 /*12*/].f_2 = 19;
	Global_45609[266 /*12*/].f_3 = 1;
	Global_45609[266 /*12*/].f_10 = 1;
	Global_45609[266 /*12*/].f_11 = 0;
	Global_45609[266 /*12*/].f_4 = 0;
	Global_45609[267 /*12*/] = 701;
	Global_45609[267 /*12*/].f_1 = 702;
	Global_45609[267 /*12*/].f_2 = 19;
	Global_45609[267 /*12*/].f_3 = 1;
	Global_45609[267 /*12*/].f_10 = 1;
	Global_45609[267 /*12*/].f_11 = 0;
	Global_45609[267 /*12*/].f_4 = 0;
	Global_45609[268 /*12*/] = 703;
	Global_45609[268 /*12*/].f_1 = 704;
	Global_45609[268 /*12*/].f_2 = 19;
	Global_45609[268 /*12*/].f_3 = 1;
	Global_45609[268 /*12*/].f_10 = 1;
	Global_45609[268 /*12*/].f_11 = 0;
	Global_45609[268 /*12*/].f_4 = 0;
	Global_45609[269 /*12*/] = 705;
	Global_45609[269 /*12*/].f_1 = 706;
	Global_45609[269 /*12*/].f_2 = 19;
	Global_45609[269 /*12*/].f_3 = 1;
	Global_45609[269 /*12*/].f_10 = 1;
	Global_45609[269 /*12*/].f_11 = 0;
	Global_45609[269 /*12*/].f_4 = 0;
	Global_45609[270 /*12*/] = 707;
	Global_45609[270 /*12*/].f_1 = 708;
	Global_45609[270 /*12*/].f_2 = 16;
	Global_45609[270 /*12*/].f_3 = 0;
	Global_45609[270 /*12*/].f_10 = 1;
	Global_45609[270 /*12*/].f_11 = 0;
	Global_45609[270 /*12*/].f_4 = 0;
	Global_45609[271 /*12*/] = 709;
	Global_45609[271 /*12*/].f_1 = 710;
	Global_45609[271 /*12*/].f_2 = 16;
	Global_45609[271 /*12*/].f_3 = 0;
	Global_45609[271 /*12*/].f_10 = 1;
	Global_45609[271 /*12*/].f_11 = 0;
	Global_45609[271 /*12*/].f_4 = 0;
	Global_45609[272 /*12*/] = 711;
	Global_45609[272 /*12*/].f_1 = 712;
	Global_45609[272 /*12*/].f_2 = 16;
	Global_45609[272 /*12*/].f_3 = 0;
	Global_45609[272 /*12*/].f_10 = 1;
	Global_45609[272 /*12*/].f_11 = 0;
	Global_45609[272 /*12*/].f_4 = 0;
	Global_45609[273 /*12*/] = 713;
	Global_45609[273 /*12*/].f_1 = 714;
	Global_45609[273 /*12*/].f_2 = 16;
	Global_45609[273 /*12*/].f_3 = 0;
	Global_45609[273 /*12*/].f_10 = 1;
	Global_45609[273 /*12*/].f_11 = 0;
	Global_45609[273 /*12*/].f_4 = 0;
	Global_45609[274 /*12*/] = 715;
	Global_45609[274 /*12*/].f_1 = 716;
	Global_45609[274 /*12*/].f_2 = 16;
	Global_45609[274 /*12*/].f_3 = 0;
	Global_45609[274 /*12*/].f_10 = 1;
	Global_45609[274 /*12*/].f_11 = 0;
	Global_45609[274 /*12*/].f_4 = 0;
	Global_45609[275 /*12*/] = 717;
	Global_45609[275 /*12*/].f_1 = 718;
	Global_45609[275 /*12*/].f_2 = 16;
	Global_45609[275 /*12*/].f_3 = 0;
	Global_45609[275 /*12*/].f_10 = 1;
	Global_45609[275 /*12*/].f_11 = 0;
	Global_45609[275 /*12*/].f_4 = 0;
	Global_45609[276 /*12*/] = 719;
	Global_45609[276 /*12*/].f_1 = 720;
	Global_45609[276 /*12*/].f_2 = 16;
	Global_45609[276 /*12*/].f_3 = 0;
	Global_45609[276 /*12*/].f_10 = 1;
	Global_45609[276 /*12*/].f_11 = 0;
	Global_45609[276 /*12*/].f_4 = 0;
	Global_48934[0 /*46*/].f_45 = 0;
	Global_48934[0 /*46*/].f_31 = 0;
	Global_48934[0 /*46*/].f_42 = 0;
	Global_48934[0 /*46*/].f_43 = 0;
	Global_48934[0 /*46*/].f_2 = 2;
	Global_48934[0 /*46*/].f_3[0] = 0;
	Global_48934[0 /*46*/].f_3[1] = 4;
	Global_48934[0 /*46*/].f_30 = 8;
	Global_48934[0 /*46*/].f_8[0] = 0;
	Global_48934[0 /*46*/].f_8[1] = 1;
	Global_48934[0 /*46*/].f_8[2] = 2;
	Global_48934[0 /*46*/].f_8[3] = 3;
	Global_48934[0 /*46*/].f_8[4] = 4;
	Global_48934[0 /*46*/].f_8[5] = 5;
	Global_48934[0 /*46*/].f_8[6] = 6;
	Global_48934[0 /*46*/].f_8[7] = 9;
	Global_48934[1 /*46*/].f_45 = 0;
	Global_48934[1 /*46*/].f_31 = 0;
	Global_48934[1 /*46*/].f_42 = 0;
	Global_48934[1 /*46*/].f_43 = 0;
	Global_48934[1 /*46*/].f_2 = 3;
	Global_48934[1 /*46*/].f_3[0] = 5;
	Global_48934[1 /*46*/].f_3[1] = 0;
	Global_48934[1 /*46*/].f_3[2] = 4;
	Global_48934[1 /*46*/].f_30 = 3;
	Global_48934[1 /*46*/].f_8[0] = 10;
	Global_48934[1 /*46*/].f_8[1] = 11;
	Global_48934[1 /*46*/].f_8[2] = 16;
	Global_48934[2 /*46*/].f_45 = 0;
	Global_48934[2 /*46*/].f_31 = 0;
	Global_48934[2 /*46*/].f_42 = 0;
	Global_48934[2 /*46*/].f_43 = 0;
	Global_48934[2 /*46*/].f_2 = 2;
	Global_48934[2 /*46*/].f_3[0] = 7;
	Global_48934[2 /*46*/].f_3[1] = 1;
	Global_48934[2 /*46*/].f_30 = 1;
	Global_48934[2 /*46*/].f_8[0] = 12;
	Global_48934[3 /*46*/].f_45 = 0;
	Global_48934[3 /*46*/].f_31 = 0;
	Global_48934[3 /*46*/].f_42 = 0;
	Global_48934[3 /*46*/].f_43 = 0;
	Global_48934[3 /*46*/].f_2 = 2;
	Global_48934[3 /*46*/].f_3[0] = 7;
	Global_48934[3 /*46*/].f_3[1] = 1;
	Global_48934[3 /*46*/].f_30 = 1;
	Global_48934[3 /*46*/].f_8[0] = 14;
	Global_48934[4 /*46*/].f_45 = 0;
	Global_48934[4 /*46*/].f_31 = 0;
	Global_48934[4 /*46*/].f_42 = 0;
	Global_48934[4 /*46*/].f_43 = 0;
	Global_48934[4 /*46*/].f_2 = 2;
	Global_48934[4 /*46*/].f_3[0] = 7;
	Global_48934[4 /*46*/].f_3[1] = 1;
	Global_48934[4 /*46*/].f_30 = 1;
	Global_48934[4 /*46*/].f_8[0] = 13;
	Global_48934[5 /*46*/].f_45 = 0;
	Global_48934[5 /*46*/].f_31 = 0;
	Global_48934[5 /*46*/].f_42 = 0;
	Global_48934[5 /*46*/].f_43 = 0;
	Global_48934[5 /*46*/].f_2 = 2;
	Global_48934[5 /*46*/].f_3[0] = 7;
	Global_48934[5 /*46*/].f_3[1] = 1;
	Global_48934[5 /*46*/].f_30 = 1;
	Global_48934[5 /*46*/].f_8[0] = 15;
	Global_48934[6 /*46*/].f_45 = 0;
	Global_48934[6 /*46*/].f_31 = 0;
	Global_48934[6 /*46*/].f_42 = 0;
	Global_48934[6 /*46*/].f_43 = 0;
	Global_48934[6 /*46*/].f_2 = 2;
	Global_48934[6 /*46*/].f_3[0] = 0;
	Global_48934[6 /*46*/].f_3[1] = 8;
	Global_48934[6 /*46*/].f_30 = 5;
	Global_48934[6 /*46*/].f_8[0] = 17;
	Global_48934[6 /*46*/].f_8[1] = 19;
	Global_48934[6 /*46*/].f_8[2] = 20;
	Global_48934[6 /*46*/].f_8[3] = 21;
	Global_48934[6 /*46*/].f_8[4] = 22;
	Global_48934[7 /*46*/].f_45 = 0;
	Global_48934[7 /*46*/].f_31 = 0;
	Global_48934[7 /*46*/].f_42 = 0;
	Global_48934[7 /*46*/].f_43 = 0;
	Global_48934[7 /*46*/].f_2 = 2;
	Global_48934[7 /*46*/].f_3[0] = 1;
	Global_48934[7 /*46*/].f_3[1] = 9;
	Global_48934[7 /*46*/].f_30 = 5;
	Global_48934[7 /*46*/].f_8[0] = 18;
	Global_48934[7 /*46*/].f_8[1] = 24;
	Global_48934[7 /*46*/].f_8[2] = 25;
	Global_48934[7 /*46*/].f_8[3] = 26;
	Global_48934[7 /*46*/].f_8[4] = 27;
	Global_48934[8 /*46*/].f_45 = 0;
	Global_48934[8 /*46*/].f_31 = 0;
	Global_48934[8 /*46*/].f_42 = 0;
	Global_48934[8 /*46*/].f_43 = 0;
	Global_48934[8 /*46*/].f_2 = 2;
	Global_48934[8 /*46*/].f_3[0] = 2;
	Global_48934[8 /*46*/].f_3[1] = 10;
	Global_48934[8 /*46*/].f_30 = 4;
	Global_48934[8 /*46*/].f_8[0] = 23;
	Global_48934[8 /*46*/].f_8[1] = 28;
	Global_48934[8 /*46*/].f_8[2] = 29;
	Global_48934[8 /*46*/].f_8[3] = 30;
	Global_48934[9 /*46*/].f_45 = 0;
	Global_48934[9 /*46*/].f_31 = 0;
	Global_48934[9 /*46*/].f_42 = 0;
	Global_48934[9 /*46*/].f_43 = 0;
	Global_48934[9 /*46*/].f_2 = 1;
	Global_48934[9 /*46*/].f_3[0] = 11;
	Global_48934[9 /*46*/].f_30 = 3;
	Global_48934[9 /*46*/].f_8[0] = 31;
	Global_48934[9 /*46*/].f_8[1] = 32;
	Global_48934[9 /*46*/].f_8[2] = 33;
	Global_48934[10 /*46*/].f_45 = 0;
	Global_48934[10 /*46*/].f_31 = 0;
	Global_48934[10 /*46*/].f_42 = 0;
	Global_48934[10 /*46*/].f_43 = 0;
	Global_48934[10 /*46*/].f_2 = 1;
	Global_48934[10 /*46*/].f_3[0] = 13;
	Global_48934[10 /*46*/].f_30 = 3;
	Global_48934[10 /*46*/].f_8[0] = 34;
	Global_48934[10 /*46*/].f_8[1] = 35;
	Global_48934[10 /*46*/].f_8[2] = 36;
	Global_48934[11 /*46*/].f_45 = 0;
	Global_48934[11 /*46*/].f_31 = 0;
	Global_48934[11 /*46*/].f_42 = 0;
	Global_48934[11 /*46*/].f_43 = 0;
	Global_48934[11 /*46*/].f_2 = 1;
	Global_48934[11 /*46*/].f_3[0] = 14;
	Global_48934[11 /*46*/].f_30 = 3;
	Global_48934[11 /*46*/].f_8[0] = 37;
	Global_48934[11 /*46*/].f_8[1] = 38;
	Global_48934[11 /*46*/].f_8[2] = 39;
	Global_48934[12 /*46*/].f_45 = 0;
	Global_48934[12 /*46*/].f_31 = 0;
	Global_48934[12 /*46*/].f_42 = 0;
	Global_48934[12 /*46*/].f_43 = 0;
	Global_48934[12 /*46*/].f_2 = 1;
	Global_48934[12 /*46*/].f_3[0] = 12;
	Global_48934[12 /*46*/].f_30 = 6;
	Global_48934[12 /*46*/].f_8[0] = 40;
	Global_48934[12 /*46*/].f_8[1] = 41;
	Global_48934[12 /*46*/].f_8[2] = 42;
	Global_48934[12 /*46*/].f_8[3] = 191;
	Global_48934[12 /*46*/].f_8[4] = 192;
	Global_48934[12 /*46*/].f_8[5] = 193;
	Global_48934[13 /*46*/].f_45 = 0;
	Global_48934[13 /*46*/].f_31 = 0;
	Global_48934[13 /*46*/].f_42 = 0;
	Global_48934[13 /*46*/].f_43 = 0;
	Global_48934[13 /*46*/].f_2 = 2;
	Global_48934[13 /*46*/].f_3[0] = 7;
	Global_48934[13 /*46*/].f_3[1] = 0;
	Global_48934[13 /*46*/].f_30 = 1;
	Global_48934[13 /*46*/].f_8[0] = 43;
	Global_48934[14 /*46*/].f_45 = 0;
	Global_48934[14 /*46*/].f_31 = 0;
	Global_48934[14 /*46*/].f_42 = 0;
	Global_48934[14 /*46*/].f_43 = 0;
	Global_48934[14 /*46*/].f_2 = 4;
	Global_48934[14 /*46*/].f_3[0] = 15;
	Global_48934[14 /*46*/].f_3[1] = 0;
	Global_48934[14 /*46*/].f_3[2] = 1;
	Global_48934[14 /*46*/].f_3[3] = 2;
	Global_48934[14 /*46*/].f_30 = 3;
	Global_48934[14 /*46*/].f_8[0] = 44;
	Global_48934[14 /*46*/].f_8[1] = 45;
	Global_48934[14 /*46*/].f_8[2] = 46;
	Global_48934[15 /*46*/].f_45 = 0;
	Global_48934[15 /*46*/].f_31 = 0;
	Global_48934[15 /*46*/].f_42 = 0;
	Global_48934[15 /*46*/].f_43 = 0;
	Global_48934[15 /*46*/].f_2 = 4;
	Global_48934[15 /*46*/].f_3[0] = 16;
	Global_48934[15 /*46*/].f_3[1] = 0;
	Global_48934[15 /*46*/].f_3[2] = 1;
	Global_48934[15 /*46*/].f_3[3] = 2;
	Global_48934[15 /*46*/].f_30 = 1;
	Global_48934[15 /*46*/].f_8[0] = 47;
	Global_48934[16 /*46*/].f_45 = 0;
	Global_48934[16 /*46*/].f_31 = 0;
	Global_48934[16 /*46*/].f_42 = 0;
	Global_48934[16 /*46*/].f_43 = 0;
	Global_48934[16 /*46*/].f_2 = 4;
	Global_48934[16 /*46*/].f_3[0] = 16;
	Global_48934[16 /*46*/].f_3[1] = 0;
	Global_48934[16 /*46*/].f_3[2] = 1;
	Global_48934[16 /*46*/].f_3[3] = 2;
	Global_48934[16 /*46*/].f_30 = 1;
	Global_48934[16 /*46*/].f_8[0] = 48;
	Global_48934[17 /*46*/].f_45 = 0;
	Global_48934[17 /*46*/].f_31 = 0;
	Global_48934[17 /*46*/].f_42 = 0;
	Global_48934[17 /*46*/].f_43 = 0;
	Global_48934[17 /*46*/].f_2 = 4;
	Global_48934[17 /*46*/].f_3[0] = 0;
	Global_48934[17 /*46*/].f_3[1] = 1;
	Global_48934[17 /*46*/].f_3[2] = 2;
	Global_48934[17 /*46*/].f_3[3] = 16;
	Global_48934[17 /*46*/].f_30 = 1;
	Global_48934[17 /*46*/].f_8[0] = 49;
	Global_48934[18 /*46*/].f_45 = 0;
	Global_48934[18 /*46*/].f_31 = 0;
	Global_48934[18 /*46*/].f_42 = 0;
	Global_48934[18 /*46*/].f_43 = 0;
	Global_48934[18 /*46*/].f_2 = 4;
	Global_48934[18 /*46*/].f_3[0] = 0;
	Global_48934[18 /*46*/].f_3[1] = 1;
	Global_48934[18 /*46*/].f_3[2] = 2;
	Global_48934[18 /*46*/].f_3[3] = 16;
	Global_48934[18 /*46*/].f_30 = 1;
	Global_48934[18 /*46*/].f_8[0] = 50;
	Global_48934[19 /*46*/].f_45 = 0;
	Global_48934[19 /*46*/].f_31 = 0;
	Global_48934[19 /*46*/].f_42 = 0;
	Global_48934[19 /*46*/].f_43 = 0;
	Global_48934[19 /*46*/].f_2 = 4;
	Global_48934[19 /*46*/].f_3[0] = 0;
	Global_48934[19 /*46*/].f_3[1] = 1;
	Global_48934[19 /*46*/].f_3[2] = 2;
	Global_48934[19 /*46*/].f_3[3] = 16;
	Global_48934[19 /*46*/].f_30 = 1;
	Global_48934[19 /*46*/].f_8[0] = 51;
	Global_48934[20 /*46*/].f_45 = 0;
	Global_48934[20 /*46*/].f_31 = 0;
	Global_48934[20 /*46*/].f_42 = 0;
	Global_48934[20 /*46*/].f_43 = 0;
	Global_48934[20 /*46*/].f_2 = 4;
	Global_48934[20 /*46*/].f_3[0] = 0;
	Global_48934[20 /*46*/].f_3[1] = 1;
	Global_48934[20 /*46*/].f_3[2] = 2;
	Global_48934[20 /*46*/].f_3[3] = 16;
	Global_48934[20 /*46*/].f_30 = 1;
	Global_48934[20 /*46*/].f_8[0] = 52;
	Global_48934[21 /*46*/].f_45 = 0;
	Global_48934[21 /*46*/].f_31 = 0;
	Global_48934[21 /*46*/].f_42 = 0;
	Global_48934[21 /*46*/].f_43 = 0;
	Global_48934[21 /*46*/].f_2 = 4;
	Global_48934[21 /*46*/].f_3[0] = 16;
	Global_48934[21 /*46*/].f_3[1] = 0;
	Global_48934[21 /*46*/].f_3[2] = 1;
	Global_48934[21 /*46*/].f_3[3] = 2;
	Global_48934[21 /*46*/].f_30 = 1;
	Global_48934[21 /*46*/].f_8[0] = 53;
	Global_48934[22 /*46*/].f_45 = 0;
	Global_48934[22 /*46*/].f_31 = 0;
	Global_48934[22 /*46*/].f_42 = 0;
	Global_48934[22 /*46*/].f_43 = 0;
	Global_48934[22 /*46*/].f_2 = 4;
	Global_48934[22 /*46*/].f_3[0] = 0;
	Global_48934[22 /*46*/].f_3[1] = 1;
	Global_48934[22 /*46*/].f_3[2] = 2;
	Global_48934[22 /*46*/].f_3[3] = 16;
	Global_48934[22 /*46*/].f_30 = 1;
	Global_48934[22 /*46*/].f_8[0] = 54;
	Global_48934[23 /*46*/].f_45 = 0;
	Global_48934[23 /*46*/].f_31 = 0;
	Global_48934[23 /*46*/].f_42 = 0;
	Global_48934[23 /*46*/].f_43 = 0;
	Global_48934[23 /*46*/].f_2 = 1;
	Global_48934[23 /*46*/].f_3[0] = 12;
	Global_48934[23 /*46*/].f_30 = 3;
	Global_48934[23 /*46*/].f_8[0] = 55;
	Global_48934[23 /*46*/].f_8[1] = 58;
	Global_48934[23 /*46*/].f_8[2] = 59;
	Global_48934[24 /*46*/].f_45 = 0;
	Global_48934[24 /*46*/].f_31 = 0;
	Global_48934[24 /*46*/].f_42 = 0;
	Global_48934[24 /*46*/].f_43 = 0;
	Global_48934[24 /*46*/].f_2 = 1;
	Global_48934[24 /*46*/].f_3[0] = 14;
	Global_48934[24 /*46*/].f_30 = 3;
	Global_48934[24 /*46*/].f_8[0] = 56;
	Global_48934[24 /*46*/].f_8[1] = 60;
	Global_48934[24 /*46*/].f_8[2] = 61;
	Global_48934[25 /*46*/].f_45 = 0;
	Global_48934[25 /*46*/].f_31 = 0;
	Global_48934[25 /*46*/].f_42 = 0;
	Global_48934[25 /*46*/].f_43 = 0;
	Global_48934[25 /*46*/].f_2 = 1;
	Global_48934[25 /*46*/].f_3[0] = 12;
	Global_48934[25 /*46*/].f_30 = 3;
	Global_48934[25 /*46*/].f_8[0] = 57;
	Global_48934[25 /*46*/].f_8[1] = 62;
	Global_48934[25 /*46*/].f_8[2] = 63;
	Global_48934[26 /*46*/].f_45 = 0;
	Global_48934[26 /*46*/].f_31 = 0;
	Global_48934[26 /*46*/].f_42 = 0;
	Global_48934[26 /*46*/].f_43 = 0;
	Global_48934[26 /*46*/].f_2 = 4;
	Global_48934[26 /*46*/].f_3[0] = 1;
	Global_48934[26 /*46*/].f_3[1] = 0;
	Global_48934[26 /*46*/].f_3[2] = 2;
	Global_48934[26 /*46*/].f_3[3] = 20;
	Global_48934[26 /*46*/].f_30 = 1;
	Global_48934[26 /*46*/].f_8[0] = 64;
	Global_48934[27 /*46*/].f_45 = 0;
	Global_48934[27 /*46*/].f_31 = 0;
	Global_48934[27 /*46*/].f_42 = 0;
	Global_48934[27 /*46*/].f_43 = 0;
	Global_48934[27 /*46*/].f_2 = 4;
	Global_48934[27 /*46*/].f_3[0] = 17;
	Global_48934[27 /*46*/].f_3[1] = 0;
	Global_48934[27 /*46*/].f_3[2] = 1;
	Global_48934[27 /*46*/].f_3[3] = 2;
	Global_48934[27 /*46*/].f_30 = 1;
	Global_48934[27 /*46*/].f_8[0] = 66;
	Global_48934[28 /*46*/].f_45 = 0;
	Global_48934[28 /*46*/].f_31 = 0;
	Global_48934[28 /*46*/].f_42 = 0;
	Global_48934[28 /*46*/].f_43 = 0;
	Global_48934[28 /*46*/].f_2 = 4;
	Global_48934[28 /*46*/].f_3[0] = 18;
	Global_48934[28 /*46*/].f_3[1] = 0;
	Global_48934[28 /*46*/].f_3[2] = 1;
	Global_48934[28 /*46*/].f_3[3] = 2;
	Global_48934[28 /*46*/].f_30 = 1;
	Global_48934[28 /*46*/].f_8[0] = 65;
	Global_48934[29 /*46*/].f_45 = 0;
	Global_48934[29 /*46*/].f_31 = 0;
	Global_48934[29 /*46*/].f_42 = 0;
	Global_48934[29 /*46*/].f_43 = 0;
	Global_48934[29 /*46*/].f_2 = 2;
	Global_48934[29 /*46*/].f_3[0] = 2;
	Global_48934[29 /*46*/].f_3[1] = 63;
	Global_48934[29 /*46*/].f_30 = 1;
	Global_48934[29 /*46*/].f_8[0] = 67;
	Global_48934[30 /*46*/].f_45 = 0;
	Global_48934[30 /*46*/].f_31 = 0;
	Global_48934[30 /*46*/].f_42 = 0;
	Global_48934[30 /*46*/].f_43 = 0;
	Global_48934[30 /*46*/].f_2 = 3;
	Global_48934[30 /*46*/].f_3[0] = 0;
	Global_48934[30 /*46*/].f_3[1] = 1;
	Global_48934[30 /*46*/].f_3[2] = 2;
	Global_48934[30 /*46*/].f_30 = 1;
	Global_48934[30 /*46*/].f_8[0] = 68;
	Global_48934[31 /*46*/].f_45 = 0;
	Global_48934[31 /*46*/].f_31 = 0;
	Global_48934[31 /*46*/].f_42 = 0;
	Global_48934[31 /*46*/].f_43 = 0;
	Global_48934[31 /*46*/].f_2 = 2;
	Global_48934[31 /*46*/].f_3[0] = 0;
	Global_48934[31 /*46*/].f_3[1] = 64;
	Global_48934[31 /*46*/].f_30 = 1;
	Global_48934[31 /*46*/].f_8[0] = 69;
	Global_48934[32 /*46*/].f_45 = 0;
	Global_48934[32 /*46*/].f_31 = 0;
	Global_48934[32 /*46*/].f_42 = 0;
	Global_48934[32 /*46*/].f_43 = 0;
	Global_48934[32 /*46*/].f_2 = 2;
	Global_48934[32 /*46*/].f_3[0] = 1;
	Global_48934[32 /*46*/].f_3[1] = 64;
	Global_48934[32 /*46*/].f_30 = 1;
	Global_48934[32 /*46*/].f_8[0] = 70;
	Global_48934[33 /*46*/].f_45 = 0;
	Global_48934[33 /*46*/].f_31 = 0;
	Global_48934[33 /*46*/].f_42 = 0;
	Global_48934[33 /*46*/].f_43 = 0;
	Global_48934[33 /*46*/].f_2 = 2;
	Global_48934[33 /*46*/].f_3[0] = 2;
	Global_48934[33 /*46*/].f_3[1] = 64;
	Global_48934[33 /*46*/].f_30 = 1;
	Global_48934[33 /*46*/].f_8[0] = 71;
	Global_48934[34 /*46*/].f_45 = 0;
	Global_48934[34 /*46*/].f_31 = 0;
	Global_48934[34 /*46*/].f_42 = 0;
	Global_48934[34 /*46*/].f_43 = 0;
	Global_48934[34 /*46*/].f_2 = 1;
	Global_48934[34 /*46*/].f_3[0] = 21;
	Global_48934[34 /*46*/].f_30 = 1;
	Global_48934[34 /*46*/].f_8[0] = 72;
	Global_48934[35 /*46*/].f_45 = 0;
	Global_48934[35 /*46*/].f_31 = 0;
	Global_48934[35 /*46*/].f_42 = 0;
	Global_48934[35 /*46*/].f_43 = 0;
	Global_48934[35 /*46*/].f_2 = 1;
	Global_48934[35 /*46*/].f_3[0] = 21;
	Global_48934[35 /*46*/].f_30 = 1;
	Global_48934[35 /*46*/].f_8[0] = 73;
	Global_48934[36 /*46*/].f_45 = 0;
	Global_48934[36 /*46*/].f_31 = 0;
	Global_48934[36 /*46*/].f_42 = 0;
	Global_48934[36 /*46*/].f_43 = 0;
	Global_48934[36 /*46*/].f_2 = 1;
	Global_48934[36 /*46*/].f_3[0] = 21;
	Global_48934[36 /*46*/].f_30 = 1;
	Global_48934[36 /*46*/].f_8[0] = 74;
	Global_48934[37 /*46*/].f_45 = 0;
	Global_48934[37 /*46*/].f_31 = 0;
	Global_48934[37 /*46*/].f_42 = 0;
	Global_48934[37 /*46*/].f_43 = 0;
	Global_48934[37 /*46*/].f_2 = 2;
	Global_48934[37 /*46*/].f_3[0] = 6;
	Global_48934[37 /*46*/].f_3[1] = 2;
	Global_48934[37 /*46*/].f_30 = 9;
	Global_48934[37 /*46*/].f_8[0] = 75;
	Global_48934[37 /*46*/].f_8[1] = 76;
	Global_48934[37 /*46*/].f_8[2] = 77;
	Global_48934[37 /*46*/].f_8[3] = 78;
	Global_48934[37 /*46*/].f_8[4] = 79;
	Global_48934[37 /*46*/].f_8[5] = 80;
	Global_48934[37 /*46*/].f_8[6] = 81;
	Global_48934[37 /*46*/].f_8[7] = 82;
	Global_48934[37 /*46*/].f_8[8] = 83;
	Global_48934[38 /*46*/].f_45 = 0;
	Global_48934[38 /*46*/].f_31 = 0;
	Global_48934[38 /*46*/].f_42 = 0;
	Global_48934[38 /*46*/].f_43 = 0;
	Global_48934[38 /*46*/].f_2 = 2;
	Global_48934[38 /*46*/].f_3[0] = 0;
	Global_48934[38 /*46*/].f_3[1] = 4;
	Global_48934[38 /*46*/].f_30 = 1;
	Global_48934[38 /*46*/].f_8[0] = 84;
	Global_48934[39 /*46*/].f_45 = 0;
	Global_48934[39 /*46*/].f_31 = 0;
	Global_48934[39 /*46*/].f_42 = 0;
	Global_48934[39 /*46*/].f_43 = 0;
	Global_48934[39 /*46*/].f_2 = 4;
	Global_48934[39 /*46*/].f_3[0] = 22;
	Global_48934[39 /*46*/].f_3[1] = 0;
	Global_48934[39 /*46*/].f_3[2] = 1;
	Global_48934[39 /*46*/].f_3[3] = 2;
	Global_48934[39 /*46*/].f_30 = 1;
	Global_48934[39 /*46*/].f_8[0] = 85;
	Global_48934[40 /*46*/].f_45 = 0;
	Global_48934[40 /*46*/].f_31 = 0;
	Global_48934[40 /*46*/].f_42 = 0;
	Global_48934[40 /*46*/].f_43 = 0;
	Global_48934[40 /*46*/].f_2 = 2;
	Global_48934[40 /*46*/].f_3[0] = 0;
	Global_48934[40 /*46*/].f_3[1] = 24;
	Global_48934[40 /*46*/].f_30 = 3;
	Global_48934[40 /*46*/].f_8[0] = 86;
	Global_48934[40 /*46*/].f_8[1] = 87;
	Global_48934[40 /*46*/].f_8[2] = 88;
	Global_48934[41 /*46*/].f_45 = 0;
	Global_48934[41 /*46*/].f_31 = 0;
	Global_48934[41 /*46*/].f_42 = 0;
	Global_48934[41 /*46*/].f_43 = 0;
	Global_48934[41 /*46*/].f_2 = 2;
	Global_48934[41 /*46*/].f_3[0] = 0;
	Global_48934[41 /*46*/].f_3[1] = 24;
	Global_48934[41 /*46*/].f_30 = 3;
	Global_48934[41 /*46*/].f_8[0] = 89;
	Global_48934[41 /*46*/].f_8[1] = 90;
	Global_48934[41 /*46*/].f_8[2] = 91;
	Global_48934[42 /*46*/].f_45 = 0;
	Global_48934[42 /*46*/].f_31 = 0;
	Global_48934[42 /*46*/].f_42 = 0;
	Global_48934[42 /*46*/].f_43 = 0;
	Global_48934[42 /*46*/].f_2 = 2;
	Global_48934[42 /*46*/].f_3[0] = 0;
	Global_48934[42 /*46*/].f_3[1] = 25;
	Global_48934[42 /*46*/].f_30 = 5;
	Global_48934[42 /*46*/].f_8[0] = 92;
	Global_48934[42 /*46*/].f_8[1] = 93;
	Global_48934[42 /*46*/].f_8[2] = 94;
	Global_48934[42 /*46*/].f_8[3] = 95;
	Global_48934[42 /*46*/].f_8[4] = 96;
	Global_48934[43 /*46*/].f_45 = 0;
	Global_48934[43 /*46*/].f_31 = 0;
	Global_48934[43 /*46*/].f_42 = 0;
	Global_48934[43 /*46*/].f_43 = 0;
	Global_48934[43 /*46*/].f_2 = 2;
	Global_48934[43 /*46*/].f_3[0] = 26;
	Global_48934[43 /*46*/].f_3[1] = 0;
	Global_48934[43 /*46*/].f_30 = 2;
	Global_48934[43 /*46*/].f_8[0] = 97;
	Global_48934[43 /*46*/].f_8[1] = 98;
	Global_48934[44 /*46*/].f_45 = 0;
	Global_48934[44 /*46*/].f_31 = 0;
	Global_48934[44 /*46*/].f_42 = 0;
	Global_48934[44 /*46*/].f_43 = 0;
	Global_48934[44 /*46*/].f_2 = 2;
	Global_48934[44 /*46*/].f_3[0] = 27;
	Global_48934[44 /*46*/].f_3[1] = 0;
	Global_48934[44 /*46*/].f_30 = 2;
	Global_48934[44 /*46*/].f_8[0] = 99;
	Global_48934[44 /*46*/].f_8[1] = 100;
	Global_48934[45 /*46*/].f_45 = 0;
	Global_48934[45 /*46*/].f_31 = 0;
	Global_48934[45 /*46*/].f_42 = 0;
	Global_48934[45 /*46*/].f_43 = 0;
	Global_48934[45 /*46*/].f_2 = 3;
	Global_48934[45 /*46*/].f_3[0] = 0;
	Global_48934[45 /*46*/].f_3[1] = 2;
	Global_48934[45 /*46*/].f_3[2] = 28;
	Global_48934[45 /*46*/].f_30 = 1;
	Global_48934[45 /*46*/].f_8[0] = 101;
	Global_48934[46 /*46*/].f_45 = 0;
	Global_48934[46 /*46*/].f_31 = 0;
	Global_48934[46 /*46*/].f_42 = 0;
	Global_48934[46 /*46*/].f_43 = 0;
	Global_48934[46 /*46*/].f_2 = 2;
	Global_48934[46 /*46*/].f_3[0] = 0;
	Global_48934[46 /*46*/].f_3[1] = 26;
	Global_48934[46 /*46*/].f_30 = 2;
	Global_48934[46 /*46*/].f_8[0] = 102;
	Global_48934[46 /*46*/].f_8[1] = 103;
	Global_48934[47 /*46*/].f_45 = 0;
	Global_48934[47 /*46*/].f_31 = 0;
	Global_48934[47 /*46*/].f_42 = 0;
	Global_48934[47 /*46*/].f_43 = 0;
	Global_48934[47 /*46*/].f_2 = 2;
	Global_48934[47 /*46*/].f_3[0] = 0;
	Global_48934[47 /*46*/].f_3[1] = 29;
	Global_48934[47 /*46*/].f_30 = 2;
	Global_48934[47 /*46*/].f_8[0] = 104;
	Global_48934[47 /*46*/].f_8[1] = 105;
	Global_48934[48 /*46*/].f_45 = 0;
	Global_48934[48 /*46*/].f_31 = 0;
	Global_48934[48 /*46*/].f_42 = 0;
	Global_48934[48 /*46*/].f_43 = 0;
	Global_48934[48 /*46*/].f_2 = 2;
	Global_48934[48 /*46*/].f_3[0] = 1;
	Global_48934[48 /*46*/].f_3[1] = 30;
	Global_48934[48 /*46*/].f_30 = 5;
	Global_48934[48 /*46*/].f_8[0] = 106;
	Global_48934[48 /*46*/].f_8[1] = 107;
	Global_48934[48 /*46*/].f_8[2] = 108;
	Global_48934[48 /*46*/].f_8[3] = 109;
	Global_48934[48 /*46*/].f_8[4] = 110;
	Global_48934[49 /*46*/].f_45 = 0;
	Global_48934[49 /*46*/].f_31 = 0;
	Global_48934[49 /*46*/].f_42 = 0;
	Global_48934[49 /*46*/].f_43 = 0;
	Global_48934[49 /*46*/].f_2 = 2;
	Global_48934[49 /*46*/].f_3[0] = 1;
	Global_48934[49 /*46*/].f_3[1] = 31;
	Global_48934[49 /*46*/].f_30 = 2;
	Global_48934[49 /*46*/].f_8[0] = 111;
	Global_48934[49 /*46*/].f_8[1] = 112;
	Global_48934[50 /*46*/].f_45 = 0;
	Global_48934[50 /*46*/].f_31 = 0;
	Global_48934[50 /*46*/].f_42 = 0;
	Global_48934[50 /*46*/].f_43 = 0;
	Global_48934[50 /*46*/].f_2 = 2;
	Global_48934[50 /*46*/].f_3[0] = 1;
	Global_48934[50 /*46*/].f_3[1] = 32;
	Global_48934[50 /*46*/].f_30 = 3;
	Global_48934[50 /*46*/].f_8[0] = 113;
	Global_48934[50 /*46*/].f_8[1] = 114;
	Global_48934[50 /*46*/].f_8[2] = 115;
	Global_48934[51 /*46*/].f_45 = 0;
	Global_48934[51 /*46*/].f_31 = 0;
	Global_48934[51 /*46*/].f_42 = 0;
	Global_48934[51 /*46*/].f_43 = 0;
	Global_48934[51 /*46*/].f_2 = 2;
	Global_48934[51 /*46*/].f_3[0] = 1;
	Global_48934[51 /*46*/].f_3[1] = 32;
	Global_48934[51 /*46*/].f_30 = 2;
	Global_48934[51 /*46*/].f_8[0] = 116;
	Global_48934[51 /*46*/].f_8[1] = 117;
	Global_48934[52 /*46*/].f_45 = 0;
	Global_48934[52 /*46*/].f_31 = 0;
	Global_48934[52 /*46*/].f_42 = 0;
	Global_48934[52 /*46*/].f_43 = 0;
	Global_48934[52 /*46*/].f_2 = 2;
	Global_48934[52 /*46*/].f_3[0] = 1;
	Global_48934[52 /*46*/].f_3[1] = 32;
	Global_48934[52 /*46*/].f_30 = 2;
	Global_48934[52 /*46*/].f_8[0] = 118;
	Global_48934[52 /*46*/].f_8[1] = 119;
	Global_48934[53 /*46*/].f_45 = 0;
	Global_48934[53 /*46*/].f_31 = 0;
	Global_48934[53 /*46*/].f_42 = 0;
	Global_48934[53 /*46*/].f_43 = 0;
	Global_48934[53 /*46*/].f_2 = 2;
	Global_48934[53 /*46*/].f_3[0] = 1;
	Global_48934[53 /*46*/].f_3[1] = 32;
	Global_48934[53 /*46*/].f_30 = 4;
	Global_48934[53 /*46*/].f_8[0] = 120;
	Global_48934[53 /*46*/].f_8[1] = 121;
	Global_48934[53 /*46*/].f_8[2] = 122;
	Global_48934[53 /*46*/].f_8[3] = 123;
	Global_48934[54 /*46*/].f_45 = 0;
	Global_48934[54 /*46*/].f_31 = 0;
	Global_48934[54 /*46*/].f_42 = 0;
	Global_48934[54 /*46*/].f_43 = 0;
	Global_48934[54 /*46*/].f_2 = 2;
	Global_48934[54 /*46*/].f_3[0] = 1;
	Global_48934[54 /*46*/].f_3[1] = 27;
	Global_48934[54 /*46*/].f_30 = 2;
	Global_48934[54 /*46*/].f_8[0] = 124;
	Global_48934[54 /*46*/].f_8[1] = 125;
	Global_48934[55 /*46*/].f_45 = 0;
	Global_48934[55 /*46*/].f_31 = 0;
	Global_48934[55 /*46*/].f_42 = 0;
	Global_48934[55 /*46*/].f_43 = 0;
	Global_48934[55 /*46*/].f_2 = 2;
	Global_48934[55 /*46*/].f_3[0] = 1;
	Global_48934[55 /*46*/].f_3[1] = 2;
	Global_48934[55 /*46*/].f_30 = 5;
	Global_48934[55 /*46*/].f_8[0] = 126;
	Global_48934[55 /*46*/].f_8[1] = 127;
	Global_48934[55 /*46*/].f_8[2] = 128;
	Global_48934[55 /*46*/].f_8[3] = 129;
	Global_48934[55 /*46*/].f_8[4] = 130;
	Global_48934[56 /*46*/].f_45 = 0;
	Global_48934[56 /*46*/].f_31 = 0;
	Global_48934[56 /*46*/].f_42 = 0;
	Global_48934[56 /*46*/].f_43 = 0;
	Global_48934[56 /*46*/].f_2 = 2;
	Global_48934[56 /*46*/].f_3[0] = 1;
	Global_48934[56 /*46*/].f_3[1] = 0;
	Global_48934[56 /*46*/].f_30 = 3;
	Global_48934[56 /*46*/].f_8[0] = 131;
	Global_48934[56 /*46*/].f_8[1] = 132;
	Global_48934[56 /*46*/].f_8[2] = 133;
	Global_48934[57 /*46*/].f_45 = 0;
	Global_48934[57 /*46*/].f_31 = 0;
	Global_48934[57 /*46*/].f_42 = 0;
	Global_48934[57 /*46*/].f_43 = 0;
	Global_48934[57 /*46*/].f_2 = 2;
	Global_48934[57 /*46*/].f_3[0] = 0;
	Global_48934[57 /*46*/].f_3[1] = 1;
	Global_48934[57 /*46*/].f_30 = 2;
	Global_48934[57 /*46*/].f_8[0] = 134;
	Global_48934[57 /*46*/].f_8[1] = 135;
	Global_48934[58 /*46*/].f_45 = 0;
	Global_48934[58 /*46*/].f_31 = 0;
	Global_48934[58 /*46*/].f_42 = 0;
	Global_48934[58 /*46*/].f_43 = 0;
	Global_48934[58 /*46*/].f_2 = 2;
	Global_48934[58 /*46*/].f_3[0] = 2;
	Global_48934[58 /*46*/].f_3[1] = 33;
	Global_48934[58 /*46*/].f_30 = 2;
	Global_48934[58 /*46*/].f_8[0] = 136;
	Global_48934[58 /*46*/].f_8[1] = 137;
	Global_48934[59 /*46*/].f_45 = 0;
	Global_48934[59 /*46*/].f_31 = 0;
	Global_48934[59 /*46*/].f_42 = 0;
	Global_48934[59 /*46*/].f_43 = 0;
	Global_48934[59 /*46*/].f_2 = 2;
	Global_48934[59 /*46*/].f_3[0] = 2;
	Global_48934[59 /*46*/].f_3[1] = 33;
	Global_48934[59 /*46*/].f_30 = 3;
	Global_48934[59 /*46*/].f_8[0] = 138;
	Global_48934[59 /*46*/].f_8[1] = 139;
	Global_48934[59 /*46*/].f_8[2] = 248;
	Global_48934[60 /*46*/].f_45 = 0;
	Global_48934[60 /*46*/].f_31 = 0;
	Global_48934[60 /*46*/].f_42 = 0;
	Global_48934[60 /*46*/].f_43 = 0;
	Global_48934[60 /*46*/].f_2 = 2;
	Global_48934[60 /*46*/].f_3[0] = 2;
	Global_48934[60 /*46*/].f_3[1] = 33;
	Global_48934[60 /*46*/].f_30 = 1;
	Global_48934[60 /*46*/].f_8[0] = 140;
	Global_48934[61 /*46*/].f_45 = 0;
	Global_48934[61 /*46*/].f_31 = 0;
	Global_48934[61 /*46*/].f_42 = 0;
	Global_48934[61 /*46*/].f_43 = 0;
	Global_48934[61 /*46*/].f_2 = 2;
	Global_48934[61 /*46*/].f_3[0] = 2;
	Global_48934[61 /*46*/].f_3[1] = 29;
	Global_48934[61 /*46*/].f_30 = 2;
	Global_48934[61 /*46*/].f_8[0] = 141;
	Global_48934[61 /*46*/].f_8[1] = 142;
	Global_48934[62 /*46*/].f_45 = 0;
	Global_48934[62 /*46*/].f_31 = 0;
	Global_48934[62 /*46*/].f_42 = 0;
	Global_48934[62 /*46*/].f_43 = 0;
	Global_48934[62 /*46*/].f_2 = 2;
	Global_48934[62 /*46*/].f_3[0] = 3;
	Global_48934[62 /*46*/].f_3[1] = 2;
	Global_48934[62 /*46*/].f_30 = 2;
	Global_48934[62 /*46*/].f_8[0] = 143;
	Global_48934[62 /*46*/].f_8[1] = 144;
	Global_48934[63 /*46*/].f_45 = 0;
	Global_48934[63 /*46*/].f_31 = 0;
	Global_48934[63 /*46*/].f_42 = 0;
	Global_48934[63 /*46*/].f_43 = 0;
	Global_48934[63 /*46*/].f_2 = 2;
	Global_48934[63 /*46*/].f_3[0] = 2;
	Global_48934[63 /*46*/].f_3[1] = 34;
	Global_48934[63 /*46*/].f_30 = 2;
	Global_48934[63 /*46*/].f_8[0] = 145;
	Global_48934[63 /*46*/].f_8[1] = 146;
	Global_48934[64 /*46*/].f_45 = 0;
	Global_48934[64 /*46*/].f_31 = 0;
	Global_48934[64 /*46*/].f_42 = 0;
	Global_48934[64 /*46*/].f_43 = 0;
	Global_48934[64 /*46*/].f_2 = 2;
	Global_48934[64 /*46*/].f_3[0] = 2;
	Global_48934[64 /*46*/].f_3[1] = 26;
	Global_48934[64 /*46*/].f_30 = 1;
	Global_48934[64 /*46*/].f_8[0] = 147;
	Global_48934[65 /*46*/].f_45 = 0;
	Global_48934[65 /*46*/].f_31 = 0;
	Global_48934[65 /*46*/].f_42 = 0;
	Global_48934[65 /*46*/].f_43 = 0;
	Global_48934[65 /*46*/].f_2 = 1;
	Global_48934[65 /*46*/].f_3[0] = 35;
	Global_48934[65 /*46*/].f_30 = 3;
	Global_48934[65 /*46*/].f_8[0] = 148;
	Global_48934[65 /*46*/].f_8[1] = 149;
	Global_48934[65 /*46*/].f_8[2] = 150;
	Global_48934[66 /*46*/].f_45 = 0;
	Global_48934[66 /*46*/].f_31 = 0;
	Global_48934[66 /*46*/].f_42 = 0;
	Global_48934[66 /*46*/].f_43 = 0;
	Global_48934[66 /*46*/].f_2 = 1;
	Global_48934[66 /*46*/].f_3[0] = 36;
	Global_48934[66 /*46*/].f_30 = 3;
	Global_48934[66 /*46*/].f_8[0] = 151;
	Global_48934[66 /*46*/].f_8[1] = 152;
	Global_48934[66 /*46*/].f_8[2] = 153;
	Global_48934[67 /*46*/].f_45 = 0;
	Global_48934[67 /*46*/].f_31 = 0;
	Global_48934[67 /*46*/].f_42 = 0;
	Global_48934[67 /*46*/].f_43 = 0;
	Global_48934[67 /*46*/].f_2 = 2;
	Global_48934[67 /*46*/].f_3[0] = 4;
	Global_48934[67 /*46*/].f_3[1] = 0;
	Global_48934[67 /*46*/].f_30 = 1;
	Global_48934[67 /*46*/].f_8[0] = 7;
	Global_48934[68 /*46*/].f_45 = 0;
	Global_48934[68 /*46*/].f_31 = 0;
	Global_48934[68 /*46*/].f_42 = 0;
	Global_48934[68 /*46*/].f_43 = 0;
	Global_48934[68 /*46*/].f_2 = 2;
	Global_48934[68 /*46*/].f_3[0] = 4;
	Global_48934[68 /*46*/].f_3[1] = 0;
	Global_48934[68 /*46*/].f_30 = 1;
	Global_48934[68 /*46*/].f_8[0] = 8;
	Global_48934[69 /*46*/].f_45 = 0;
	Global_48934[69 /*46*/].f_31 = 0;
	Global_48934[69 /*46*/].f_42 = 0;
	Global_48934[69 /*46*/].f_43 = 0;
	Global_48934[69 /*46*/].f_2 = 2;
	Global_48934[69 /*46*/].f_3[0] = 2;
	Global_48934[69 /*46*/].f_3[1] = 38;
	Global_48934[69 /*46*/].f_30 = 1;
	Global_48934[69 /*46*/].f_8[0] = 154;
	Global_48934[70 /*46*/].f_45 = 0;
	Global_48934[70 /*46*/].f_31 = 0;
	Global_48934[70 /*46*/].f_42 = 0;
	Global_48934[70 /*46*/].f_43 = 0;
	Global_48934[70 /*46*/].f_2 = 1;
	Global_48934[70 /*46*/].f_3[0] = 11;
	Global_48934[70 /*46*/].f_30 = 3;
	Global_48934[70 /*46*/].f_8[0] = 155;
	Global_48934[70 /*46*/].f_8[1] = 156;
	Global_48934[70 /*46*/].f_8[2] = 157;
	Global_48934[71 /*46*/].f_45 = 0;
	Global_48934[71 /*46*/].f_31 = 0;
	Global_48934[71 /*46*/].f_42 = 0;
	Global_48934[71 /*46*/].f_43 = 0;
	Global_48934[71 /*46*/].f_2 = 2;
	Global_48934[71 /*46*/].f_3[0] = 2;
	Global_48934[71 /*46*/].f_3[1] = 29;
	Global_48934[71 /*46*/].f_30 = 1;
	Global_48934[71 /*46*/].f_8[0] = 158;
	Global_48934[72 /*46*/].f_45 = 0;
	Global_48934[72 /*46*/].f_31 = 0;
	Global_48934[72 /*46*/].f_42 = 0;
	Global_48934[72 /*46*/].f_43 = 0;
	Global_48934[72 /*46*/].f_2 = 1;
	Global_48934[72 /*46*/].f_3[0] = 0;
	Global_48934[72 /*46*/].f_30 = 1;
	Global_48934[72 /*46*/].f_8[0] = 159;
	Global_48934[73 /*46*/].f_45 = 0;
	Global_48934[73 /*46*/].f_31 = 0;
	Global_48934[73 /*46*/].f_42 = 0;
	Global_48934[73 /*46*/].f_43 = 0;
	Global_48934[73 /*46*/].f_2 = 1;
	Global_48934[73 /*46*/].f_3[0] = 1;
	Global_48934[73 /*46*/].f_30 = 1;
	Global_48934[73 /*46*/].f_8[0] = 160;
	Global_48934[74 /*46*/].f_45 = 0;
	Global_48934[74 /*46*/].f_31 = 0;
	Global_48934[74 /*46*/].f_42 = 0;
	Global_48934[74 /*46*/].f_43 = 0;
	Global_48934[74 /*46*/].f_2 = 1;
	Global_48934[74 /*46*/].f_3[0] = 1;
	Global_48934[74 /*46*/].f_30 = 1;
	Global_48934[74 /*46*/].f_8[0] = 161;
	Global_48934[75 /*46*/].f_45 = 0;
	Global_48934[75 /*46*/].f_31 = 0;
	Global_48934[75 /*46*/].f_42 = 0;
	Global_48934[75 /*46*/].f_43 = 0;
	Global_48934[75 /*46*/].f_2 = 1;
	Global_48934[75 /*46*/].f_3[0] = 0;
	Global_48934[75 /*46*/].f_30 = 1;
	Global_48934[75 /*46*/].f_8[0] = 162;
	Global_48934[76 /*46*/].f_45 = 0;
	Global_48934[76 /*46*/].f_31 = 0;
	Global_48934[76 /*46*/].f_42 = 0;
	Global_48934[76 /*46*/].f_43 = 0;
	Global_48934[76 /*46*/].f_2 = 1;
	Global_48934[76 /*46*/].f_3[0] = 2;
	Global_48934[76 /*46*/].f_30 = 1;
	Global_48934[76 /*46*/].f_8[0] = 163;
	Global_48934[77 /*46*/].f_45 = 0;
	Global_48934[77 /*46*/].f_31 = 0;
	Global_48934[77 /*46*/].f_42 = 0;
	Global_48934[77 /*46*/].f_43 = 0;
	Global_48934[77 /*46*/].f_2 = 1;
	Global_48934[77 /*46*/].f_3[0] = 1;
	Global_48934[77 /*46*/].f_30 = 1;
	Global_48934[77 /*46*/].f_8[0] = 164;
	Global_48934[78 /*46*/].f_45 = 0;
	Global_48934[78 /*46*/].f_31 = 0;
	Global_48934[78 /*46*/].f_42 = 0;
	Global_48934[78 /*46*/].f_43 = 0;
	Global_48934[78 /*46*/].f_2 = 1;
	Global_48934[78 /*46*/].f_3[0] = 1;
	Global_48934[78 /*46*/].f_30 = 1;
	Global_48934[78 /*46*/].f_8[0] = 165;
	Global_48934[79 /*46*/].f_45 = 0;
	Global_48934[79 /*46*/].f_31 = 0;
	Global_48934[79 /*46*/].f_42 = 0;
	Global_48934[79 /*46*/].f_43 = 0;
	Global_48934[79 /*46*/].f_2 = 1;
	Global_48934[79 /*46*/].f_3[0] = 0;
	Global_48934[79 /*46*/].f_30 = 1;
	Global_48934[79 /*46*/].f_8[0] = 166;
	Global_48934[80 /*46*/].f_45 = 0;
	Global_48934[80 /*46*/].f_31 = 0;
	Global_48934[80 /*46*/].f_42 = 0;
	Global_48934[80 /*46*/].f_43 = 0;
	Global_48934[80 /*46*/].f_2 = 1;
	Global_48934[80 /*46*/].f_3[0] = 0;
	Global_48934[80 /*46*/].f_30 = 1;
	Global_48934[80 /*46*/].f_8[0] = 167;
	Global_48934[81 /*46*/].f_45 = 0;
	Global_48934[81 /*46*/].f_31 = 0;
	Global_48934[81 /*46*/].f_42 = 0;
	Global_48934[81 /*46*/].f_43 = 0;
	Global_48934[81 /*46*/].f_2 = 1;
	Global_48934[81 /*46*/].f_3[0] = 0;
	Global_48934[81 /*46*/].f_30 = 1;
	Global_48934[81 /*46*/].f_8[0] = 168;
	Global_48934[82 /*46*/].f_45 = 0;
	Global_48934[82 /*46*/].f_31 = 0;
	Global_48934[82 /*46*/].f_42 = 0;
	Global_48934[82 /*46*/].f_43 = 0;
	Global_48934[82 /*46*/].f_2 = 1;
	Global_48934[82 /*46*/].f_3[0] = 2;
	Global_48934[82 /*46*/].f_30 = 1;
	Global_48934[82 /*46*/].f_8[0] = 169;
	Global_48934[83 /*46*/].f_45 = 0;
	Global_48934[83 /*46*/].f_31 = 0;
	Global_48934[83 /*46*/].f_42 = 0;
	Global_48934[83 /*46*/].f_43 = 0;
	Global_48934[83 /*46*/].f_2 = 1;
	Global_48934[83 /*46*/].f_3[0] = 1;
	Global_48934[83 /*46*/].f_30 = 1;
	Global_48934[83 /*46*/].f_8[0] = 170;
	Global_48934[84 /*46*/].f_45 = 0;
	Global_48934[84 /*46*/].f_31 = 0;
	Global_48934[84 /*46*/].f_42 = 0;
	Global_48934[84 /*46*/].f_43 = 0;
	Global_48934[84 /*46*/].f_2 = 1;
	Global_48934[84 /*46*/].f_3[0] = 1;
	Global_48934[84 /*46*/].f_30 = 1;
	Global_48934[84 /*46*/].f_8[0] = 171;
	Global_48934[85 /*46*/].f_45 = 0;
	Global_48934[85 /*46*/].f_31 = 0;
	Global_48934[85 /*46*/].f_42 = 0;
	Global_48934[85 /*46*/].f_43 = 0;
	Global_48934[85 /*46*/].f_2 = 1;
	Global_48934[85 /*46*/].f_3[0] = 0;
	Global_48934[85 /*46*/].f_30 = 1;
	Global_48934[85 /*46*/].f_8[0] = 172;
	Global_48934[86 /*46*/].f_45 = 0;
	Global_48934[86 /*46*/].f_31 = 0;
	Global_48934[86 /*46*/].f_42 = 0;
	Global_48934[86 /*46*/].f_43 = 0;
	Global_48934[86 /*46*/].f_2 = 1;
	Global_48934[86 /*46*/].f_3[0] = 2;
	Global_48934[86 /*46*/].f_30 = 1;
	Global_48934[86 /*46*/].f_8[0] = 173;
	Global_48934[87 /*46*/].f_45 = 0;
	Global_48934[87 /*46*/].f_31 = 0;
	Global_48934[87 /*46*/].f_42 = 0;
	Global_48934[87 /*46*/].f_43 = 0;
	Global_48934[87 /*46*/].f_2 = 1;
	Global_48934[87 /*46*/].f_3[0] = 1;
	Global_48934[87 /*46*/].f_30 = 1;
	Global_48934[87 /*46*/].f_8[0] = 174;
	Global_48934[88 /*46*/].f_45 = 0;
	Global_48934[88 /*46*/].f_31 = 0;
	Global_48934[88 /*46*/].f_42 = 0;
	Global_48934[88 /*46*/].f_43 = 0;
	Global_48934[88 /*46*/].f_2 = 1;
	Global_48934[88 /*46*/].f_3[0] = 0;
	Global_48934[88 /*46*/].f_30 = 1;
	Global_48934[88 /*46*/].f_8[0] = 175;
	Global_48934[89 /*46*/].f_45 = 0;
	Global_48934[89 /*46*/].f_31 = 0;
	Global_48934[89 /*46*/].f_42 = 0;
	Global_48934[89 /*46*/].f_43 = 0;
	Global_48934[89 /*46*/].f_2 = 1;
	Global_48934[89 /*46*/].f_3[0] = 2;
	Global_48934[89 /*46*/].f_30 = 1;
	Global_48934[89 /*46*/].f_8[0] = 176;
	Global_48934[90 /*46*/].f_45 = 0;
	Global_48934[90 /*46*/].f_31 = 0;
	Global_48934[90 /*46*/].f_42 = 0;
	Global_48934[90 /*46*/].f_43 = 0;
	Global_48934[90 /*46*/].f_2 = 1;
	Global_48934[90 /*46*/].f_3[0] = 1;
	Global_48934[90 /*46*/].f_30 = 1;
	Global_48934[90 /*46*/].f_8[0] = 177;
	Global_48934[91 /*46*/].f_45 = 0;
	Global_48934[91 /*46*/].f_31 = 0;
	Global_48934[91 /*46*/].f_42 = 0;
	Global_48934[91 /*46*/].f_43 = 0;
	Global_48934[91 /*46*/].f_2 = 1;
	Global_48934[91 /*46*/].f_3[0] = 0;
	Global_48934[91 /*46*/].f_30 = 1;
	Global_48934[91 /*46*/].f_8[0] = 179;
	Global_48934[92 /*46*/].f_45 = 0;
	Global_48934[92 /*46*/].f_31 = 0;
	Global_48934[92 /*46*/].f_42 = 0;
	Global_48934[92 /*46*/].f_43 = 0;
	Global_48934[92 /*46*/].f_2 = 1;
	Global_48934[92 /*46*/].f_3[0] = 2;
	Global_48934[92 /*46*/].f_30 = 1;
	Global_48934[92 /*46*/].f_8[0] = 178;
	Global_48934[93 /*46*/].f_45 = 0;
	Global_48934[93 /*46*/].f_31 = 0;
	Global_48934[93 /*46*/].f_42 = 0;
	Global_48934[93 /*46*/].f_43 = 0;
	Global_48934[93 /*46*/].f_2 = 1;
	Global_48934[93 /*46*/].f_3[0] = 1;
	Global_48934[93 /*46*/].f_30 = 1;
	Global_48934[93 /*46*/].f_8[0] = 180;
	Global_48934[94 /*46*/].f_45 = 0;
	Global_48934[94 /*46*/].f_31 = 0;
	Global_48934[94 /*46*/].f_42 = 0;
	Global_48934[94 /*46*/].f_43 = 0;
	Global_48934[94 /*46*/].f_2 = 2;
	Global_48934[94 /*46*/].f_3[0] = 4;
	Global_48934[94 /*46*/].f_3[1] = 0;
	Global_48934[94 /*46*/].f_30 = 1;
	Global_48934[94 /*46*/].f_8[0] = 181;
	Global_48934[95 /*46*/].f_45 = 0;
	Global_48934[95 /*46*/].f_31 = 0;
	Global_48934[95 /*46*/].f_42 = 0;
	Global_48934[95 /*46*/].f_43 = 0;
	Global_48934[95 /*46*/].f_2 = 1;
	Global_48934[95 /*46*/].f_3[0] = 37;
	Global_48934[95 /*46*/].f_30 = 1;
	Global_48934[95 /*46*/].f_8[0] = 182;
	Global_48934[96 /*46*/].f_45 = 0;
	Global_48934[96 /*46*/].f_31 = 0;
	Global_48934[96 /*46*/].f_42 = 0;
	Global_48934[96 /*46*/].f_43 = 0;
	Global_48934[96 /*46*/].f_2 = 1;
	Global_48934[96 /*46*/].f_3[0] = 37;
	Global_48934[96 /*46*/].f_30 = 1;
	Global_48934[96 /*46*/].f_8[0] = 183;
	Global_48934[97 /*46*/].f_45 = 0;
	Global_48934[97 /*46*/].f_31 = 0;
	Global_48934[97 /*46*/].f_42 = 0;
	Global_48934[97 /*46*/].f_43 = 0;
	Global_48934[97 /*46*/].f_2 = 1;
	Global_48934[97 /*46*/].f_3[0] = 37;
	Global_48934[97 /*46*/].f_30 = 1;
	Global_48934[97 /*46*/].f_8[0] = 184;
	Global_48934[98 /*46*/].f_45 = 0;
	Global_48934[98 /*46*/].f_31 = 0;
	Global_48934[98 /*46*/].f_42 = 0;
	Global_48934[98 /*46*/].f_43 = 0;
	Global_48934[98 /*46*/].f_2 = 1;
	Global_48934[98 /*46*/].f_3[0] = 54;
	Global_48934[98 /*46*/].f_30 = 3;
	Global_48934[98 /*46*/].f_8[0] = 185;
	Global_48934[98 /*46*/].f_8[1] = 186;
	Global_48934[98 /*46*/].f_8[2] = 188;
	Global_48934[99 /*46*/].f_45 = 0;
	Global_48934[99 /*46*/].f_31 = 0;
	Global_48934[99 /*46*/].f_42 = 0;
	Global_48934[99 /*46*/].f_43 = 0;
	Global_48934[99 /*46*/].f_2 = 1;
	Global_48934[99 /*46*/].f_3[0] = 55;
	Global_48934[99 /*46*/].f_30 = 3;
	Global_48934[99 /*46*/].f_8[0] = 187;
	Global_48934[99 /*46*/].f_8[1] = 189;
	Global_48934[99 /*46*/].f_8[2] = 190;
	Global_48934[100 /*46*/].f_45 = 0;
	Global_48934[100 /*46*/].f_31 = 0;
	Global_48934[100 /*46*/].f_42 = 0;
	Global_48934[100 /*46*/].f_43 = 0;
	Global_48934[100 /*46*/].f_2 = 3;
	Global_48934[100 /*46*/].f_3[0] = 56;
	Global_48934[100 /*46*/].f_3[1] = 0;
	Global_48934[100 /*46*/].f_3[2] = 2;
	Global_48934[100 /*46*/].f_30 = 5;
	Global_48934[100 /*46*/].f_8[0] = 194;
	Global_48934[100 /*46*/].f_8[1] = 195;
	Global_48934[100 /*46*/].f_8[2] = 196;
	Global_48934[100 /*46*/].f_8[3] = 197;
	Global_48934[100 /*46*/].f_8[4] = 198;
	Global_48934[101 /*46*/].f_45 = 0;
	Global_48934[101 /*46*/].f_31 = 0;
	Global_48934[101 /*46*/].f_42 = 0;
	Global_48934[101 /*46*/].f_43 = 0;
	Global_48934[101 /*46*/].f_2 = 2;
	Global_48934[101 /*46*/].f_3[0] = 57;
	Global_48934[101 /*46*/].f_3[1] = 0;
	Global_48934[101 /*46*/].f_30 = 8;
	Global_48934[101 /*46*/].f_8[0] = 199;
	Global_48934[101 /*46*/].f_8[1] = 200;
	Global_48934[101 /*46*/].f_8[2] = 201;
	Global_48934[101 /*46*/].f_8[3] = 202;
	Global_48934[101 /*46*/].f_8[4] = 203;
	Global_48934[101 /*46*/].f_8[5] = 204;
	Global_48934[101 /*46*/].f_8[6] = 205;
	Global_48934[101 /*46*/].f_8[7] = 206;
	Global_48934[102 /*46*/].f_45 = 0;
	Global_48934[102 /*46*/].f_31 = 0;
	Global_48934[102 /*46*/].f_42 = 0;
	Global_48934[102 /*46*/].f_43 = 0;
	Global_48934[102 /*46*/].f_2 = 2;
	Global_48934[102 /*46*/].f_3[0] = 58;
	Global_48934[102 /*46*/].f_3[1] = 0;
	Global_48934[102 /*46*/].f_30 = 7;
	Global_48934[102 /*46*/].f_8[0] = 207;
	Global_48934[102 /*46*/].f_8[1] = 208;
	Global_48934[102 /*46*/].f_8[2] = 209;
	Global_48934[102 /*46*/].f_8[3] = 210;
	Global_48934[102 /*46*/].f_8[4] = 211;
	Global_48934[102 /*46*/].f_8[5] = 212;
	Global_48934[102 /*46*/].f_8[6] = 213;
	Global_48934[103 /*46*/].f_45 = 0;
	Global_48934[103 /*46*/].f_31 = 0;
	Global_48934[103 /*46*/].f_42 = 0;
	Global_48934[103 /*46*/].f_43 = 0;
	Global_48934[103 /*46*/].f_2 = 2;
	Global_48934[103 /*46*/].f_3[0] = 59;
	Global_48934[103 /*46*/].f_3[1] = 0;
	Global_48934[103 /*46*/].f_30 = 8;
	Global_48934[103 /*46*/].f_8[0] = 214;
	Global_48934[103 /*46*/].f_8[1] = 215;
	Global_48934[103 /*46*/].f_8[2] = 216;
	Global_48934[103 /*46*/].f_8[3] = 217;
	Global_48934[103 /*46*/].f_8[4] = 218;
	Global_48934[103 /*46*/].f_8[5] = 219;
	Global_48934[103 /*46*/].f_8[6] = 220;
	Global_48934[103 /*46*/].f_8[7] = 221;
	Global_48934[104 /*46*/].f_45 = 0;
	Global_48934[104 /*46*/].f_31 = 0;
	Global_48934[104 /*46*/].f_42 = 0;
	Global_48934[104 /*46*/].f_43 = 0;
	Global_48934[104 /*46*/].f_2 = 2;
	Global_48934[104 /*46*/].f_3[0] = 60;
	Global_48934[104 /*46*/].f_3[1] = 2;
	Global_48934[104 /*46*/].f_30 = 7;
	Global_48934[104 /*46*/].f_8[0] = 222;
	Global_48934[104 /*46*/].f_8[1] = 223;
	Global_48934[104 /*46*/].f_8[2] = 224;
	Global_48934[104 /*46*/].f_8[3] = 225;
	Global_48934[104 /*46*/].f_8[4] = 226;
	Global_48934[104 /*46*/].f_8[5] = 227;
	Global_48934[104 /*46*/].f_8[6] = 228;
	Global_48934[105 /*46*/].f_45 = 0;
	Global_48934[105 /*46*/].f_31 = 0;
	Global_48934[105 /*46*/].f_42 = 0;
	Global_48934[105 /*46*/].f_43 = 0;
	Global_48934[105 /*46*/].f_2 = 2;
	Global_48934[105 /*46*/].f_3[0] = 61;
	Global_48934[105 /*46*/].f_3[1] = 2;
	Global_48934[105 /*46*/].f_30 = 6;
	Global_48934[105 /*46*/].f_8[0] = 229;
	Global_48934[105 /*46*/].f_8[1] = 230;
	Global_48934[105 /*46*/].f_8[2] = 231;
	Global_48934[105 /*46*/].f_8[3] = 232;
	Global_48934[105 /*46*/].f_8[4] = 233;
	Global_48934[105 /*46*/].f_8[5] = 234;
	Global_48934[106 /*46*/].f_45 = 0;
	Global_48934[106 /*46*/].f_31 = 0;
	Global_48934[106 /*46*/].f_42 = 0;
	Global_48934[106 /*46*/].f_43 = 0;
	Global_48934[106 /*46*/].f_2 = 2;
	Global_48934[106 /*46*/].f_3[0] = 62;
	Global_48934[106 /*46*/].f_3[1] = 2;
	Global_48934[106 /*46*/].f_30 = 6;
	Global_48934[106 /*46*/].f_8[0] = 235;
	Global_48934[106 /*46*/].f_8[1] = 236;
	Global_48934[106 /*46*/].f_8[2] = 237;
	Global_48934[106 /*46*/].f_8[3] = 238;
	Global_48934[106 /*46*/].f_8[4] = 239;
	Global_48934[106 /*46*/].f_8[5] = 240;
	Global_48934[107 /*46*/].f_45 = 0;
	Global_48934[107 /*46*/].f_31 = 0;
	Global_48934[107 /*46*/].f_42 = 0;
	Global_48934[107 /*46*/].f_43 = 0;
	Global_48934[107 /*46*/].f_2 = 1;
	Global_48934[107 /*46*/].f_3[0] = 36;
	Global_48934[107 /*46*/].f_30 = 1;
	Global_48934[107 /*46*/].f_8[0] = 241;
	Global_48934[108 /*46*/].f_45 = 0;
	Global_48934[108 /*46*/].f_31 = 0;
	Global_48934[108 /*46*/].f_42 = 0;
	Global_48934[108 /*46*/].f_43 = 0;
	Global_48934[108 /*46*/].f_2 = 1;
	Global_48934[108 /*46*/].f_3[0] = 36;
	Global_48934[108 /*46*/].f_30 = 1;
	Global_48934[108 /*46*/].f_8[0] = 242;
	Global_48934[109 /*46*/].f_45 = 0;
	Global_48934[109 /*46*/].f_31 = 0;
	Global_48934[109 /*46*/].f_42 = 0;
	Global_48934[109 /*46*/].f_43 = 0;
	Global_48934[109 /*46*/].f_2 = 1;
	Global_48934[109 /*46*/].f_3[0] = 36;
	Global_48934[109 /*46*/].f_30 = 1;
	Global_48934[109 /*46*/].f_8[0] = 243;
	Global_48934[110 /*46*/].f_45 = 0;
	Global_48934[110 /*46*/].f_31 = 0;
	Global_48934[110 /*46*/].f_42 = 0;
	Global_48934[110 /*46*/].f_43 = 0;
	Global_48934[110 /*46*/].f_2 = 1;
	Global_48934[110 /*46*/].f_3[0] = 65;
	Global_48934[110 /*46*/].f_30 = 1;
	Global_48934[110 /*46*/].f_8[0] = 244;
	Global_48934[111 /*46*/].f_45 = 0;
	Global_48934[111 /*46*/].f_31 = 0;
	Global_48934[111 /*46*/].f_42 = 0;
	Global_48934[111 /*46*/].f_43 = 0;
	Global_48934[111 /*46*/].f_2 = 1;
	Global_48934[111 /*46*/].f_3[0] = 65;
	Global_48934[111 /*46*/].f_30 = 1;
	Global_48934[111 /*46*/].f_8[0] = 245;
	Global_48934[112 /*46*/].f_45 = 0;
	Global_48934[112 /*46*/].f_31 = 0;
	Global_48934[112 /*46*/].f_42 = 0;
	Global_48934[112 /*46*/].f_43 = 0;
	Global_48934[112 /*46*/].f_2 = 1;
	Global_48934[112 /*46*/].f_3[0] = 65;
	Global_48934[112 /*46*/].f_30 = 1;
	Global_48934[112 /*46*/].f_8[0] = 246;
	Global_48934[113 /*46*/].f_45 = 0;
	Global_48934[113 /*46*/].f_31 = 0;
	Global_48934[113 /*46*/].f_42 = 0;
	Global_48934[113 /*46*/].f_43 = 0;
	Global_48934[113 /*46*/].f_2 = 1;
	Global_48934[113 /*46*/].f_3[0] = 65;
	Global_48934[113 /*46*/].f_30 = 1;
	Global_48934[113 /*46*/].f_8[0] = 247;
	Global_48934[114 /*46*/].f_45 = 0;
	Global_48934[114 /*46*/].f_31 = 0;
	Global_48934[114 /*46*/].f_42 = 0;
	Global_48934[114 /*46*/].f_43 = 0;
	Global_48934[114 /*46*/].f_2 = 2;
	Global_48934[114 /*46*/].f_3[0] = 19;
	Global_48934[114 /*46*/].f_3[1] = 1;
	Global_48934[114 /*46*/].f_30 = 21;
	Global_48934[114 /*46*/].f_8[0] = 249;
	Global_48934[114 /*46*/].f_8[1] = 250;
	Global_48934[114 /*46*/].f_8[2] = 251;
	Global_48934[114 /*46*/].f_8[3] = 252;
	Global_48934[114 /*46*/].f_8[4] = 253;
	Global_48934[114 /*46*/].f_8[5] = 254;
	Global_48934[114 /*46*/].f_8[6] = 255;
	Global_48934[114 /*46*/].f_8[7] = 256;
	Global_48934[114 /*46*/].f_8[8] = 257;
	Global_48934[114 /*46*/].f_8[9] = 258;
	Global_48934[114 /*46*/].f_8[10] = 259;
	Global_48934[114 /*46*/].f_8[11] = 260;
	Global_48934[114 /*46*/].f_8[12] = 261;
	Global_48934[114 /*46*/].f_8[13] = 262;
	Global_48934[114 /*46*/].f_8[14] = 263;
	Global_48934[114 /*46*/].f_8[15] = 264;
	Global_48934[114 /*46*/].f_8[16] = 265;
	Global_48934[114 /*46*/].f_8[17] = 266;
	Global_48934[114 /*46*/].f_8[18] = 267;
	Global_48934[114 /*46*/].f_8[19] = 268;
	Global_48934[114 /*46*/].f_8[20] = 269;
	Global_48934[115 /*46*/].f_45 = 0;
	Global_48934[115 /*46*/].f_31 = 0;
	Global_48934[115 /*46*/].f_42 = 0;
	Global_48934[115 /*46*/].f_43 = 0;
	Global_48934[115 /*46*/].f_2 = 4;
	Global_48934[115 /*46*/].f_3[0] = 0;
	Global_48934[115 /*46*/].f_3[1] = 1;
	Global_48934[115 /*46*/].f_3[2] = 2;
	Global_48934[115 /*46*/].f_3[3] = 16;
	Global_48934[115 /*46*/].f_30 = 1;
	Global_48934[115 /*46*/].f_8[0] = 270;
	Global_48934[116 /*46*/].f_45 = 0;
	Global_48934[116 /*46*/].f_31 = 0;
	Global_48934[116 /*46*/].f_42 = 0;
	Global_48934[116 /*46*/].f_43 = 0;
	Global_48934[116 /*46*/].f_2 = 4;
	Global_48934[116 /*46*/].f_3[0] = 0;
	Global_48934[116 /*46*/].f_3[1] = 1;
	Global_48934[116 /*46*/].f_3[2] = 2;
	Global_48934[116 /*46*/].f_3[3] = 16;
	Global_48934[116 /*46*/].f_30 = 1;
	Global_48934[116 /*46*/].f_8[0] = 271;
	Global_48934[117 /*46*/].f_45 = 0;
	Global_48934[117 /*46*/].f_31 = 0;
	Global_48934[117 /*46*/].f_42 = 0;
	Global_48934[117 /*46*/].f_43 = 0;
	Global_48934[117 /*46*/].f_2 = 4;
	Global_48934[117 /*46*/].f_3[0] = 0;
	Global_48934[117 /*46*/].f_3[1] = 1;
	Global_48934[117 /*46*/].f_3[2] = 2;
	Global_48934[117 /*46*/].f_3[3] = 16;
	Global_48934[117 /*46*/].f_30 = 1;
	Global_48934[117 /*46*/].f_8[0] = 272;
	Global_48934[118 /*46*/].f_45 = 0;
	Global_48934[118 /*46*/].f_31 = 0;
	Global_48934[118 /*46*/].f_42 = 0;
	Global_48934[118 /*46*/].f_43 = 0;
	Global_48934[118 /*46*/].f_2 = 4;
	Global_48934[118 /*46*/].f_3[0] = 0;
	Global_48934[118 /*46*/].f_3[1] = 1;
	Global_48934[118 /*46*/].f_3[2] = 2;
	Global_48934[118 /*46*/].f_3[3] = 16;
	Global_48934[118 /*46*/].f_30 = 1;
	Global_48934[118 /*46*/].f_8[0] = 273;
	Global_48934[119 /*46*/].f_45 = 0;
	Global_48934[119 /*46*/].f_31 = 0;
	Global_48934[119 /*46*/].f_42 = 0;
	Global_48934[119 /*46*/].f_43 = 0;
	Global_48934[119 /*46*/].f_2 = 4;
	Global_48934[119 /*46*/].f_3[0] = 0;
	Global_48934[119 /*46*/].f_3[1] = 1;
	Global_48934[119 /*46*/].f_3[2] = 2;
	Global_48934[119 /*46*/].f_3[3] = 16;
	Global_48934[119 /*46*/].f_30 = 1;
	Global_48934[119 /*46*/].f_8[0] = 274;
	Global_48934[120 /*46*/].f_45 = 0;
	Global_48934[120 /*46*/].f_31 = 0;
	Global_48934[120 /*46*/].f_42 = 0;
	Global_48934[120 /*46*/].f_43 = 0;
	Global_48934[120 /*46*/].f_2 = 4;
	Global_48934[120 /*46*/].f_3[0] = 0;
	Global_48934[120 /*46*/].f_3[1] = 1;
	Global_48934[120 /*46*/].f_3[2] = 2;
	Global_48934[120 /*46*/].f_3[3] = 16;
	Global_48934[120 /*46*/].f_30 = 1;
	Global_48934[120 /*46*/].f_8[0] = 275;
	Global_48934[121 /*46*/].f_45 = 0;
	Global_48934[121 /*46*/].f_31 = 0;
	Global_48934[121 /*46*/].f_42 = 0;
	Global_48934[121 /*46*/].f_43 = 0;
	Global_48934[121 /*46*/].f_2 = 4;
	Global_48934[121 /*46*/].f_3[0] = 0;
	Global_48934[121 /*46*/].f_3[1] = 1;
	Global_48934[121 /*46*/].f_3[2] = 2;
	Global_48934[121 /*46*/].f_3[3] = 16;
	Global_48934[121 /*46*/].f_30 = 1;
	Global_48934[121 /*46*/].f_8[0] = 276;
	return;
}

void func_70() // Position - 0xE75A (59226)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


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
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	eCharacter echLocal_57 = CHAR_MICHAEL;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	eCharacter echLocal_61 = CHAR_MICHAEL;
	int iLocal_62 = 0;
	BOOL bLocal_63 = 0;
	int iLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	BOOL bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
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
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_52 = 2;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		func_107();
	
		switch (iLocal_53)
		{
			case 0:
				func_102();
				break;
		
			case 1:
				func_93();
				func_2();
				Global_98947 = false;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xCC (204)
{
	iLocal_53 = 0;
	return;
}

void func_2() // Position - 0xD7 (215)
{
	eCharacter character;
	BOOL flag;
	int i;
	int outValue;
	int value;
	int num;
	Hash statHash;
	int num2;
	int num3;
	Hash statName;
	int outValue2;
	int num4;
	int j;
	BOOL flag2;
	int num5;
	int num6;
	BOOL flag3;

	if (bLocal_59)
		bLocal_59 = false;
	else
		iLocal_54 = iLocal_54 + 1;

	bLocal_58 = false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		character = CHAR_MULTIPLAYER;
	else
		character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character != echLocal_57)
	{
		echLocal_57 = character;
		bLocal_58 = true;
		bLocal_65 = false;
		bLocal_66 = false;
		bLocal_73 = false;
		bLocal_79 = false;
	}

	if (echLocal_57 == _CHAR_NULL)
		return;

	flag = false;

	if (iLocal_54 == 6 && func_87(64) || iLocal_54 == 5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pilot_school")) > 0)
	{
		flag = true;
		bLocal_59 = true;
	}

	func_81();

	if (Global_98945 || Global_98946 && !func_78(0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				func_77(echLocal_57, i);
			}
		
			Global_98945 = false;
		}
	}

	if (!flag)
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_76(echLocal_57) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_75() || CUTSCENE::IS_CUTSCENE_PLAYING() || CAM::IS_SCREEN_FADED_OUT() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || Global_79537 || Global_98947 || bLocal_60)
		{
			bLocal_81 = true;
			iLocal_82 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_83 = NETWORK::GET_NETWORK_TIME();
		
			return;
		}
	
		if (bLocal_81)
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_82 > 3000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_83, 3000)))
				bLocal_81 = false;
			else
				return;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_55 > 2000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_56, 2000)) || bLocal_58)
	{
		if (iLocal_54 >= 8)
		{
			iLocal_54 = 0;
			iLocal_55 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_56 = NETWORK::GET_NETWORK_TIME();
		}
	
		num4 = 1;
	
		if (bLocal_58)
			num4 = 8;
	
		for (j = 0; j < num4; j = j + 1)
		{
			flag2 = true;
		
			if (bLocal_58)
				num3 = j;
			else
				num3 = iLocal_54;
		
			func_74(echLocal_57, num3, &statHash, &num2);
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				outValue = func_73(num2, -1);
			else if (num3 == 0)
				outValue = Global_114135.f_2367.f_539.f_2387[echLocal_57];
			else
				STATS::STAT_GET_INT(statHash, &outValue, -1);
		
			num = outValue;
			outValue = func_72(outValue, 0, 100);
		
			if (func_59(echLocal_57, num3, outValue, &value))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_57(num2, value, -1, true);
				}
				else if (num3 == 0)
				{
					if (Global_114135.f_2367.f_539.f_2387[echLocal_57] == 0)
						flag2 = false;
				
					Global_114135.f_2367.f_539.f_2387[echLocal_57] = value;
				}
				else
				{
					STATS::STAT_SET_INT(statHash, value, true);
				}
			
				if (value > func_55(echLocal_57, num3, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_39, 19))
							flag2 = false;
					else if (!Global_114135.f_9089 && !_IS_MISSION_REPEAT_ACTIVE(false) || !IS_BIT_SET(Global_114135.f_9089.f_2[27 /*3*/], 2))
						flag2 = false;
				
					num5 = value;
					num6 = num5 - (num5 % func_53(echLocal_57, num3));
				
					if (num5 % func_53(echLocal_57, num3) >= 0)
						num6 = num6 + func_53(echLocal_57, num3);
				
					if (num5 >= num6)
						num5 = num6;
					else
						num5 = num6 - func_53(echLocal_57, num3);
				
					if (value > num5)
						flag2 = false;
				
					if (func_47())
						flag2 = false;
				
					if (flag2)
					{
						if (!bLocal_58)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (func_46(117, -1) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										_DISPLAY_HELP_TEXT("STAT_HELP2" /*~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game.*/, -1);
										func_4(117, true, -1, true);
									}
								}
							}
						
							bLocal_60 = true;
							bLocal_63 = value - outValue;
							bLocal_63 = bLocal_63 + (outValue % func_53(echLocal_57, num3));
							iLocal_64 = value;
							echLocal_61 = echLocal_57;
							iLocal_62 = num3;
						}
					}
				
					if (value >= 100)
					{
						if (func_3(echLocal_57, num3, &statName))
						{
							if (echLocal_57 == CHAR_MICHAEL)
							{
								STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &outValue2, -1);
								STATS::STAT_SET_INT(statName, outValue2, true);
							}
							else if (echLocal_57 == CHAR_FRANKLIN)
							{
								STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &outValue2, -1);
								STATS::STAT_SET_INT(statName, outValue2, true);
							}
							else if (echLocal_57 == CHAR_TREVOR)
							{
								STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &outValue2, -1);
								STATS::STAT_SET_INT(statName, outValue2, true);
							}
							else
							{
								echLocal_57 == CHAR_MULTIPLAYER;
							}
						}
					}
				}
			
				func_77(echLocal_57, num3);
			}
			else if (value < num)
			{
				flag3 = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_57(num2, value, -1, true);
				}
				else if (num3 == 0)
				{
					Global_114135.f_2367.f_539.f_2387[echLocal_57] = value;
					flag3 = false;
				}
				else
				{
					STATS::STAT_SET_INT(statHash, value, true);
				}
			
				if (flag3)
					func_77(echLocal_57, num3);
			}
		}
	}
	else
	{
		bLocal_59 = true;
	}

	return;
}

BOOL func_3(eCharacter echParam0, int iParam1, var uParam2) // Position - 0x5CA (1482)
{
	*uParam2 = joaat("LAST_PLAYING_TIME");

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}

	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x7B2 (1970)
{
	Hash statName;

	statName = func_5(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, bParam3);

	return;
}

Hash func_5(int iParam0, int iParam1) // Position - 0x7D5 (2005)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_6(iParam1));
}

int func_6(int iParam0) // Position - 0x7EA (2026)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
		if (num2 > -1)
		{
			Global_2751934 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2751934 = 1;
		}
	}

	return num;
}

int func_7() // Position - 0x81E (2078)
{
	return Global_1574926;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x82A (2090)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_9() // Position - 0x841 (2113)
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1928988 == frameCount)
	{
		return Global_1928989;
	}
	else
	{
		Global_1928988 = frameCount;
		Global_1928989 = false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_39, 19) || func_45(*Global_4718592.f_187633, true))
			return false;

	if (HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN() && !func_44(PLAYER::PLAYER_ID()))
		return false;

	if (Global_1928990 == 1)
		return false;

	if (Global_1928799 == 1)
		return false;

	if (func_43())
		return false;

	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
		return false;

	if (Global_1836677 == 1)
		return false;

	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
		return false;

	if (Global_1057441)
		return false;

	if (IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 16))
		return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (func_41())
		return false;

	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2699084, 300000, false) == 1)
				{
					_STOPWATCH_DESTROY(&Global_2699082);
					func_34(3, -1);
				}
				else if (func_37(&Global_2699082, 7000, false) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (func_33())
		return false;

	if (func_32())
		return false;

	if (func_30())
		return false;

	if (func_29())
		return false;

	if (func_28())
		return false;

	if (func_27())
		return false;

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		if (func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_SNIPERRIFLE") || func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_HEAVYSNIPER"))
			return false;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (func_25(8, -1))
		return false;

	if (func_24(12, -1))
		return false;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL))
		return false;

	if (func_23())
		return false;

	if (func_22())
		return false;

	if (IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2))
		return false;

	if (Global_1836461)
		return false;

	if (Global_1836465)
		return false;

	if (Global_1836467)
		return false;

	if (Global_2672939.f_3770.f_39)
		return false;

	if (func_21(0))
		return false;

	if (func_20())
		return false;

	if (Global_2739811.f_4100)
		return false;

	if (Global_2672939.f_3636)
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
		return false;

	if (func_18(PLAYER::PLAYER_ID()))
		return false;

	if (Global_2672939.f_3770.f_39 == true)
		return false;

	if (Global_2685658.f_2847.f_26 == 1)
		return false;

	if (func_17(true))
		return false;

	if (func_15())
		return false;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_RADIO_STATIONS))
		return false;

	if (func_14())
		return false;

	if (func_13())
		return false;

	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FHU_HELP3" /*Shout through your headset to make the store clerk fill the bag with cash faster.*/))
			return false;

	if (IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 6))
		return false;

	if (func_10(PLAYER::PLAYER_ID()))
		return false;

	Global_1928989 = true;
	return true;
}

BOOL func_10(Player plParam0) // Position - 0xBA6 (2982)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_372, 26);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xBCD (3021)
{
	return -1;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xBD6 (3030)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_13() // Position - 0xBE9 (3049)
{
	return Global_2672939.f_1761.f_701 != 0;
}

BOOL func_14() // Position - 0xBFD (3069)
{
	return Global_2672939.f_2914.f_582;
}

BOOL func_15() // Position - 0xC0F (3087)
{
	return func_16();
}

BOOL func_16() // Position - 0xC1B (3099)
{
	return Global_1668409.f_40 == 3;
}

BOOL func_17(BOOL bParam0) // Position - 0xC2B (3115)
{
	if (bParam0)
		return Global_23831.f_4 && Global_23831.f_104 == 4;

	return Global_23831.f_4;
}

BOOL func_18(Player plParam0) // Position - 0xC54 (3156)
{
	return IS_BIT_SET(Global_1882780[plParam0 /*149*/].f_17, 0);
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xC68 (3176)
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

BOOL func_20() // Position - 0xCC8 (3272)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_21(int iParam0) // Position - 0xCE5 (3301)
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

BOOL func_22() // Position - 0xD3C (3388)
{
	return Global_1673654.f_112;
}

BOOL func_23() // Position - 0xD4A (3402)
{
	return Global_2672939.f_2590[0 /*80*/].f_1 != 0;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xD60 (3424)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1673654.f_137[iParam1])
					return true;
			
				if (Global_1673654.f_170[iParam1])
					return true;
			}
			break;
	
		default:
			if (IS_BIT_SET(Global_1673654.f_1046, iParam0))
				return true;
		
			if (IS_BIT_SET(Global_1673654.f_1047, iParam0))
				return true;
			break;
	}

	return false;
}

BOOL func_25(int iParam0, int iParam1) // Position - 0xDC6 (3526)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673654.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673654.f_1048, iParam0);
}

int func_26(Ped pedParam0) // Position - 0xDFE (3582)
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

BOOL func_27() // Position - 0xE12 (3602)
{
	return Global_2684718.f_694;
}

BOOL func_28() // Position - 0xE21 (3617)
{
	return IS_BIT_SET(Global_1048576.f_10, 13);
}

BOOL func_29() // Position - 0xE32 (3634)
{
	return Global_2684718.f_693;
}

BOOL func_30() // Position - 0xE41 (3649)
{
	if (func_31() == 1 || func_31() == 4)
		return true;

	return false;
}

int func_31() // Position - 0xE63 (3683)
{
	return Global_1574633.f_18;
}

BOOL func_32() // Position - 0xE71 (3697)
{
	if (func_31() == 3 || func_31() == 2)
		return true;

	return false;
}

BOOL func_33() // Position - 0xE93 (3731)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0)
		return true;

	return false;
}

void func_34(int iParam0, int iParam1) // Position - 0xEAD (3757)
{
	int profileSetting;
	int profileSetting2;

	if (iParam1 == -1)
		iParam1 = func_7();

	if (MISC::ARE_PROFILE_SETTINGS_VALID() == false)
		return;

	switch (iParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			profileSetting2 = func_35(iParam1);
			profileSetting = MISC::GET_PROFILE_SETTING(profileSetting2);
			break;
	
		default:
			profileSetting2 = func_35(iParam1);
			profileSetting = MISC::GET_PROFILE_SETTING(profileSetting2);
		
			if (!IS_BIT_SET(profileSetting, iParam0))
			{
				MISC::SET_BIT(&profileSetting, iParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(profileSetting, iParam1);
			}
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_4(120, false, iParam1, true);
			func_4(124, false, iParam1, true);
			func_4(115, false, iParam1, true);
			func_4(119, false, iParam1, true);
			func_4(121, false, iParam1, true);
			func_4(122, false, iParam1, true);
			func_4(125, false, iParam1, true);
			func_57(1304, 0, iParam1, true);
			func_57(7236, 0, iParam1, true);
			break;
	}

	return;
}

int func_35(int iParam0) // Position - 0xF8E (3982)
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_7();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xFF1 (4081)
{
	uParam0->f_1 = 0;
	return;
}

int func_37(var uParam0, int iParam1, BOOL bParam2) // Position - 0xFFE (4094)
{
	if (iParam1 == -1)
		return 1;

	_STOPWATCH_INITIALIZE(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return 1;
	}

	return 0;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1068 (4200)
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x10AD (4269)
{
	int profileSetting;
	int profileSetting2;

	if (iParam1 == -1)
		iParam1 = func_7();

	profileSetting = func_35(iParam1);
	profileSetting2 = MISC::GET_PROFILE_SETTING(profileSetting);
	return IS_BIT_SET(profileSetting2, iParam0);
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x10D6 (4310)
{
	int profileSetting;

	if (Global_153015 == 2)
		return true;
	else if (Global_153015 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_41() // Position - 0x118E (4494)
{
	return Global_1575084;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x119A (4506)
{
	return Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_193 != 0;
}

BOOL func_43() // Position - 0x11B1 (4529)
{
	return Global_2708409;
}

BOOL func_44(Player plParam0) // Position - 0x11BD (4541)
{
	return IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_324.f_3, 13);
}

BOOL func_45(int iParam0, BOOL bParam1) // Position - 0x11D6 (4566)
{
	if (iParam0 == 93)
		if (bParam1)
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
				return true;
		else
			return true;

	return false;
}

int func_46(int iParam0, int iParam1) // Position - 0x1202 (4610)
{
	Hash statHash;
	int outValue;

	statHash = func_5(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

BOOL func_47() // Position - 0x1226 (4646)
{
	if (!func_51(true))
		return false;

	if (func_48())
		return false;

	return Global_1941489;
}

BOOL func_48() // Position - 0x124A (4682)
{
	return func_49(PLAYER::PLAYER_ID());
}

BOOL func_49(Player plParam0) // Position - 0x125A (4698)
{
	if (func_50(plParam0))
		if (func_50(Global_1887549[plParam0 /*611*/].f_10))
			return Global_1887549[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

BOOL func_50(Player plParam0) // Position - 0x128F (4751)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_51(BOOL bParam0) // Position - 0x12B1 (4785)
{
	return func_52(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_52(Player plParam0, BOOL bParam1) // Position - 0x12C3 (4803)
{
	if (!func_50(plParam0))
		return false;

	if (!bParam1)
		if (func_49(plParam0))
			return false;

	return func_50(Global_1887549[plParam0 /*611*/].f_10);
}

int func_53(eCharacter echParam0, int iParam1) // Position - 0x12FB (4859)
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	}

	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x150B (5387)
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

int func_55(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x1533 (5427)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_56(14))
			return 100;

	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 47;
			
				case 3:
					return 22;
			
				case 2:
					return 21;
			
				case 4:
					return 54;
			
				case 5:
					return 31;
			
				case 6:
					return 79;
			
				case 7:
					return 81;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 51;
			
				case 3:
					return 46;
			
				case 2:
					return 49;
			
				case 4:
					return 71;
			
				case 5:
					return 19;
			
				case 6:
					return 24;
			
				case 7:
					return 21;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 23;
			
				case 3:
					return 28;
			
				case 2:
					return 79;
			
				case 4:
					return 31;
			
				case 5:
					return 82;
			
				case 6:
					return 69;
			
				case 7:
					return 49;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_73(1225, iParam2);
			
				case 3:
					return func_73(1231, iParam2);
			
				case 2:
					return func_73(1227, iParam2);
			
				case 4:
					return func_73(1230, iParam2);
			
				case 5:
					return func_73(1229, iParam2);
			
				case 6:
					return func_73(1226, iParam2);
			
				case 7:
					return func_73(1228, iParam2);
			}
			break;
	}

	return 0;
}

BOOL func_56(int iParam0) // Position - 0x1779 (6009)
{
	return Global_44181 == iParam0;
}

void func_57(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1787 (6023)
{
	Hash statName;

	if (iParam0 != 15468)
	{
		statName = func_58(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_58(int iParam0, int iParam1) // Position - 0x17B5 (6069)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(iParam1));
}

BOOL func_59(eCharacter echParam0, int iParam1, int iParam2, var uParam3) // Position - 0x17CA (6090)
{
	*uParam3 = func_60(echParam0, iParam1, false, -1);

	if (*uParam3 > iParam2)
		return true;

	return false;
}

int func_60(eCharacter echParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x17EC (6124)
{
	float value;
	float outValue;
	int num;
	int outValue2;
	int num2;
	int outValue3;
	int outValue4;
	int i;
	int num3;
	int num4;
	int num5;
	int num6;
	float num7;

	num = 0;

	switch (iParam1)
	{
		case 0:
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_73(64, iParam3));
			}
			break;
	
		case 1:
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &outValue, -1);
				value = (outValue - Global_114135.f_2367.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &outValue, -1);
				value = (outValue - Global_114135.f_2367.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &outValue, -1);
				value = (outValue - Global_114135.f_2367.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_70(20, iParam3) / 175f;
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(func_58(50, iParam3)));
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(func_58(47, iParam3)));
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (4f * Global_262145.f_23918 * (float)func_73(7237, -1));
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value * 0.25f;
			break;
	
		case 3:
			if (echParam0 == CHAR_MICHAEL)
			{
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_65(func_58(52, iParam3))) / 30f;
				func_67(&value);
			}
			break;
	
		case 2:
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_73(1500, iParam3)) / 20f;
				func_67(&value);
			}
			break;
	
		case 4:
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &outValue2, -1);
				value = value + (SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &outValue2, -1);
				value = value + (SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &outValue2, -1);
				value = value + (SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_73(113, iParam3) / 50;
				func_67(&value);
			}
			break;
	
		case 5:
			if (echParam0 == CHAR_MICHAEL)
				value = SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_FRANKLIN)
				value = SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_TREVOR)
				value = SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = SYSTEM::TO_FLOAT(func_66(func_58(43, iParam3))) / 10f;
		
			if (echParam0 == CHAR_MICHAEL)
				value = value + (SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_FRANKLIN)
				value = value + (SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_TREVOR)
				value = value + (SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (SYSTEM::TO_FLOAT(func_66(func_58(45, iParam3))) / 10f);
		
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_INT(joaat("SP0_PLANE_LANDINGS"), &outValue2, -1);
				value = value + SYSTEM::TO_FLOAT(outValue2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_INT(joaat("SP1_PLANE_LANDINGS"), &outValue2, -1);
				value = value + SYSTEM::TO_FLOAT(outValue2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_INT(joaat("SP2_PLANE_LANDINGS"), &outValue2, -1);
				value = value + SYSTEM::TO_FLOAT(outValue2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_73(61, iParam3);
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MULTIPLAYER)
				if (IS_BIT_SET(Global_1575009, 15))
					value = 100f;
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				num2 = func_64(echParam0, 0);
			
				if (echParam0 == CHAR_TREVOR)
					if (num2 == 3)
						value = value + 10f;
					else if (num2 == 2)
						value = value + 7f;
					else if (num2 == 1)
						value = value + 5f;
				else if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 1);
			
				if (echParam0 == CHAR_TREVOR)
					if (num2 == 3)
						value = value + 10f;
					else if (num2 == 2)
						value = value + 7f;
					else if (num2 == 1)
						value = value + 5f;
				else if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 2);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 3);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 6);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 4);
			
				if (num2 == 3)
					value = value + 5f;
				else if (num2 == 2)
					value = value + 3f;
				else if (num2 == 1)
					value = value + 2f;
			
				num2 = func_64(echParam0, 5);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 7);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 8);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_64(echParam0, 11);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			}
			break;
	
		case 7:
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &outValue, -1);
				value = (outValue - Global_114135.f_2367.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &outValue, -1);
				value = (outValue - Global_114135.f_2367.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &outValue, -1);
				value = (outValue - Global_114135.f_2367.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_70(19, iParam3) / 45f;
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &outValue2, -1);
				value = value + ((SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &outValue2, -1);
				value = value + ((SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &outValue2, -1);
				value = value + ((SYSTEM::TO_FLOAT(outValue2 - Global_114135.f_2367.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				outValue2 = func_73(34, iParam3);
				value = value + ((SYSTEM::TO_FLOAT(outValue2) / 2f) * 1.5f);
				func_67(&value);
			}
			break;
	
		case 6:
			if (echParam0 == CHAR_MICHAEL)
			{
				STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &outValue3, -1);
				STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &outValue4, -1);
				outValue4 = outValue4 - outValue3;
				value = SYSTEM::TO_FLOAT(outValue3 - Global_114135.f_2367.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(outValue4 - Global_114135.f_2367.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &outValue3, -1);
				STATS::STAT_GET_INT(joaat("SP1_HITS_PEDS_VEHICLES"), &outValue4, -1);
				outValue4 = outValue4 - outValue3;
				value = SYSTEM::TO_FLOAT(outValue3 - Global_114135.f_2367.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(outValue4 - Global_114135.f_2367.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &outValue3, -1);
				STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &outValue4, -1);
				outValue4 = outValue4 - outValue3;
				value = SYSTEM::TO_FLOAT(outValue3 - Global_114135.f_2367.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(outValue4 - Global_114135.f_2367.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				outValue4 = func_73(172, iParam3);
				value = value + (SYSTEM::TO_FLOAT(outValue4) / 80f);
			}
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				for (i = 0; i < 22; i = i + 1)
				{
					switch (func_63(i, echParam0))
					{
						case 3:
							num3 = num3 + 1;
							break;
					
						case 2:
							num4 = num4 + 1;
							break;
					
						case 1:
							num5 = num5 + 1;
							break;
					}
				}
			
				value = value + (float)num3 * 3;
				value = value + (float)num4 * 2;
				value = value + (float)num5 * 1;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)_MPPLY_STAT_GET_INT(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
				func_67(&value);
			}
			break;
	}

	if (iParam1 != 0)
	{
		num6 = func_55(echParam0, iParam1, iParam3);
		value = value + (float)num6;
		value = value + (float)func_61(echParam0, iParam1, iParam3);
	}

	if (bParam2)
	{
		num7 = value - (value % (float)func_53(echParam0, iParam1));
	
		if (value % (float)func_53(echParam0, iParam1) >= 0f)
			num7 = num7 + (float)func_53(echParam0, iParam1);
	
		if (value >= num7)
			value = num7;
		else
			value = num7 - (float)func_53(echParam0, iParam1);
	}

	num = SYSTEM::FLOOR(value);
	num = func_72(num, 0, 100);
	return num;
}

int func_61(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x250F (9487)
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0];
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 1:
					return func_73(72, iParam2);
			
				case 3:
					return func_73(74, iParam2);
			
				case 2:
					return func_73(73, iParam2);
			
				case 4:
					return func_73(75, iParam2);
			
				case 5:
					return func_73(76, iParam2);
			
				case 6:
					return func_73(77, iParam2);
			
				case 7:
					return func_73(78, iParam2);
			}
			break;
	}

	return 0;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x261C (9756)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_63(int iParam0, eCharacter echParam1) // Position - 0x263A (9786)
{
	return Global_114135.f_19151[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_64(eCharacter echParam0, int iParam1) // Position - 0x2656 (9814)
{
	if (echParam0 < CHAR_MICHAEL || echParam0 > CHAR_TREVOR)
		return 0;

	return Global_114135.f_1992[echParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_65(Hash hParam0) // Position - 0x2684 (9860)
{
	int num;

	num = 0;
	num = num + (STATS::STAT_GET_NUMBER_OF_DAYS(hParam0) * 86400);
	num = num + (STATS::STAT_GET_NUMBER_OF_HOURS(hParam0) * 3600);
	num = num + (STATS::STAT_GET_NUMBER_OF_MINUTES(hParam0) * 60);
	num = num + STATS::STAT_GET_NUMBER_OF_SECONDS(hParam0);
	return num;
}

int func_66(Hash hParam0) // Position - 0x26C7 (9927)
{
	int num;

	num = 0;
	num = num + (STATS::STAT_GET_NUMBER_OF_DAYS(hParam0) * 1440);
	num = num + (STATS::STAT_GET_NUMBER_OF_HOURS(hParam0) * 60);
	num = num + STATS::STAT_GET_NUMBER_OF_MINUTES(hParam0);
	return num;
}

var func_67(var uParam0) // Position - 0x26FA (9978)
{
	if (func_47())
	{
		if (func_68() < Global_262145.f_13138)
			if (*uParam0 + ((float)func_68() * Global_262145.f_13137) <= (float)Global_262145.f_13147)
				*uParam0 = *uParam0 + ((float)func_68() * Global_262145.f_13137);
	
		return *uParam0;
	}

	return *uParam0;
}

int func_68() // Position - 0x2754 (10068)
{
	if (func_51(true))
		return Global_1845221[_GET_BOSS_OF_LOCAL_PLAYER() /*889*/].f_206.f_6;

	return 0;
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x277A (10106)
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
}

float func_70(int iParam0, int iParam1) // Position - 0x278F (10127)
{
	Hash statHash;
	float outValue;

	statHash = func_71(iParam0, iParam1);

	if (STATS::STAT_GET_FLOAT(statHash, &outValue, -1))
		return outValue;

	return 0f;
}

Hash func_71(int iParam0, int iParam1) // Position - 0x27B3 (10163)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(1, iParam0, func_6(iParam1));
}

int func_72(int iParam0, int iParam1, int iParam2) // Position - 0x27C8 (10184)
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_73(int iParam0, int iParam1) // Position - 0x27ED (10221)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_58(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_74(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x281C (10268)
{
	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

BOOL func_75() // Position - 0x2A73 (10867)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

BOOL func_76(eCharacter echParam0) // Position - 0x2A8F (10895)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_77(eCharacter echParam0, int iParam1) // Position - 0x2A9B (10907)
{
	int outValue;
	float modifier;
	Hash statHash;
	int num;

	if (echParam0 != CHAR_MICHAEL || echParam0 != CHAR_FRANKLIN || echParam0 != CHAR_TREVOR || echParam0 != CHAR_MULTIPLAYER)
		return;

	func_74(echParam0, iParam1, &statHash, &num);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		outValue = func_73(num, -1);
	else
		STATS::STAT_GET_INT(statHash, &outValue, -1);

	switch (iParam1)
	{
		case 2:
			modifier = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(outValue) / 100f));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), modifier, true);
			break;
	
		case 7:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian3")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor3")) != 0)
			{
				Global_98946 = true;
			}
			else
			{
				modifier = 1f - (SYSTEM::TO_FLOAT(outValue) / 100f);
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), modifier);
			}
			break;
	}

	return;
}

BOOL func_78(int iParam0) // Position - 0x2B87 (11143)
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2BA9 (11177)
{
	return func_80(iParam0, Global_44181);
}

BOOL func_80(int iParam0, int iParam1) // Position - 0x2BBA (11194)
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

void func_81() // Position - 0x2D9B (11675)
{
	Vehicle vehiclePedIsIn;
	int num;

	num = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID() && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)))
			num = 1;
	}

	func_86(&vehiclePedIsIn, &num);
	func_85(&vehiclePedIsIn, &num);
	func_82();
	return;
}

void func_82() // Position - 0x2E3A (11834)
{
	int num;
	int value;
	int num2;

	if (!bLocal_79)
	{
		if (echLocal_57 == CHAR_MULTIPLAYER)
		{
			if (Global_2359296[func_84() /*5571*/].f_681.f_7)
			{
				iLocal_76 = func_65(func_58(148, -1));
				Global_2359296[func_84() /*5571*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_76 = Global_2359296[func_84() /*5571*/].f_681.f_6;
			}
		
			if (Global_2359296[func_84() /*5571*/].f_681.f_4 == 0)
				Global_2359296[func_84() /*5571*/].f_681.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		
			iLocal_78 = Global_2359296[func_84() /*5571*/].f_681.f_4;
			iLocal_77 = Global_2359296[func_84() /*5571*/].f_681.f_5;
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_2292[echLocal_57])
			{
				switch (echLocal_57)
				{
					case CHAR_MICHAEL:
						iLocal_76 = func_65(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_FRANKLIN:
						iLocal_76 = func_65(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_TREVOR:
						iLocal_76 = func_65(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
			
				Global_114135.f_2367.f_539.f_2292[echLocal_57] = false;
			}
			else
			{
				iLocal_76 = Global_114135.f_2367.f_539.f_2288[echLocal_57];
			}
		
			if (Global_114135.f_2367.f_539.f_2280[echLocal_57] == 0)
				Global_114135.f_2367.f_539.f_2280[echLocal_57] = NETWORK::GET_CLOUD_TIME_AS_INT();
		
			iLocal_78 = Global_114135.f_2367.f_539.f_2280[echLocal_57];
			iLocal_77 = Global_114135.f_2367.f_539.f_2284[echLocal_57];
		}
	
		bLocal_79 = true;
		bLocal_80 = true;
	}
	else if (NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_78 > 86400)
	{
		bLocal_79 = false;
		bLocal_80 = false;
		iLocal_78 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iLocal_77 = 0;
	
		if (echLocal_57 == CHAR_MULTIPLAYER)
			Global_2359296[func_84() /*5571*/].f_681.f_7 = 1;
		else
			Global_114135.f_2367.f_539.f_2292[echLocal_57] = true;
	}

	if (bLocal_80)
	{
		switch (echLocal_57)
		{
			case CHAR_MICHAEL:
				num = func_65(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_FRANKLIN:
				num = func_65(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_TREVOR:
				num = func_65(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_65(func_58(148, -1));
				break;
		}
	
		value = num - iLocal_76;
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 15f) - iLocal_77;
	
		if (num2 > 0)
		{
			func_83(echLocal_57, 4, num2);
			iLocal_77 = iLocal_77 + num2;
		}
	
		if (num > iLocal_76 + ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
			bLocal_80 = false;
	}

	if (echLocal_57 == CHAR_MULTIPLAYER)
	{
		Global_2359296[func_84() /*5571*/].f_681.f_4 = iLocal_78;
		Global_2359296[func_84() /*5571*/].f_681.f_5 = iLocal_77;
	}
	else
	{
		Global_114135.f_2367.f_539.f_2280[echLocal_57] = iLocal_78;
		Global_114135.f_2367.f_539.f_2284[echLocal_57] = iLocal_77;
	}

	return;
}

void func_83(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x30FC (12540)
{
	int num;
	int num2;

	switch (echParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] = Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
			break;
	
		case 3:
			num2 = 15468;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 15468)
			{
				num = func_73(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_57(num2, num, -1, true);
			}
			break;
	}

	return;
}

int func_84() // Position - 0x31EA (12778)
{
	int num;

	num = 0;
	return num;
}

void func_85(var uParam0, var uParam1) // Position - 0x31F7 (12791)
{
	BOOL flag;

	if (bLocal_73)
	{
		flag = true;
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && !ENTITY::IS_ENTITY_IN_AIR(*uParam0))
		{
			flag = false;
		
			if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 53f)
			{
				func_83(echLocal_57, 4, 2);
				flag = true;
			}
		}
	
		if (flag)
		{
			bLocal_73 = false;
			iLocal_74 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_75 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && ENTITY::GET_ENTITY_SPEED(*uParam0) < 20f && !ENTITY::IS_ENTITY_IN_AIR(*uParam0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_74 > 10000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_75, 10000)))
			bLocal_73 = true;
	}

	return;
}

void func_86(var uParam0, var uParam1) // Position - 0x32D2 (13010)
{
	BOOL flag;
	var unk;

	flag = false;

	if (*uParam1)
	{
		if (bLocal_65)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_67 > 1500 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_68, 1500)))
				{
					iLocal_69 = MISC::GET_GAME_TIMER();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						iLocal_70 = NETWORK::GET_NETWORK_TIME();
				
					bLocal_66 = true;
				}
			
				bLocal_65 = false;
			}
		}
	
		if (bLocal_66)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*uParam0))
				{
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_69 > 20 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_69 == 0 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_70, 20)) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), iLocal_70))
					{
					}
					else
					{
						func_83(echLocal_57, 4, 1);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&unk, "Player landed on all wheels in ", 64);
					TEXT_LABEL_APPEND_INT(&unk, MISC::GET_GAME_TIMER() - iLocal_69, 64);
					TEXT_LABEL_APPEND_STRING(&unk, "ms", 64);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		}
	
		if (!bLocal_65 && !bLocal_66)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_71 > 1000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_72, 1000)))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
				{
					if (!bLocal_65)
					{
						iLocal_67 = MISC::GET_GAME_TIMER();
					
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							iLocal_68 = NETWORK::GET_NETWORK_TIME();
					
						bLocal_65 = true;
					}
				}
			}
		}
	}
	else if (bLocal_65 || bLocal_66)
	{
		flag = true;
	}

	if (flag)
	{
		iLocal_71 = MISC::GET_GAME_TIMER();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_72 = NETWORK::GET_NETWORK_TIME();
	
		bLocal_65 = false;
		bLocal_66 = false;
	}

	return;
}

BOOL func_87(int iParam0) // Position - 0x3490 (13456)
{
	return Global_113220 && iParam0 != false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x34A1 (13473)
{
	func_89();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_89() // Position - 0x34BA (13498)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_76(character) && !func_56(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_76(Global_114135.f_2367.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x35B7 (13751)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x35F4 (13812)
{
	if (func_76(character))
		return func_92(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_92(eCharacter echParam0) // Position - 0x3619 (13849)
{
	return Global_2201[echParam0 /*29*/];
}

void func_93() // Position - 0x3628 (13864)
{
	char* pedheadshotTxdString;
	int num;

	if (bLocal_60)
	{
		if (echLocal_61 != echLocal_57)
		{
			bLocal_60 = false;
			return;
		}
	
		pedheadshotTxdString = "CHAR_DEFAULT";
	
		switch (echLocal_61)
		{
			case 0:
				pedheadshotTxdString = "CHAR_MICHAEL";
				break;
		
			case 1:
				pedheadshotTxdString = "CHAR_FRANKLIN";
				break;
		
			case 2:
				pedheadshotTxdString = "CHAR_TREVOR";
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_96(PLAYER::PLAYER_ID());
			
				if (num == 0)
					return;
				else
					pedheadshotTxdString = PED::GET_PEDHEADSHOT_TXD_STRING(num);
				break;
		}
	
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE" /*~1~/100*/);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_64);
		HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_95(iLocal_62), func_94(iLocal_62), bLocal_63, iLocal_64 - bLocal_63, false, pedheadshotTxdString, pedheadshotTxdString);
		bLocal_81 = true;
		iLocal_82 = MISC::GET_GAME_TIMER() + 5000;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_83 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
	
		bLocal_60 = false;
	}

	return;
}

int func_94(int iParam0) // Position - 0x36EC (14060)
{
	switch (iParam0)
	{
		case 0:
			return 23;
	
		case 1:
			return 2;
	
		case 3:
			return 24;
	
		case 2:
			return 25;
	
		case 4:
			return 14;
	
		case 5:
			return 27;
	
		case 6:
			return 17;
	
		case 7:
			return 28;
	}

	return -1;
}

char* func_95(int iParam0) // Position - 0x376B (14187)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /*Special capacity +*/;
	
		case 1:
			return "PSF_STAMINA" /*Stamina +*/;
	
		case 3:
			return "PSF_LUNG" /*Lung Capacity +*/;
	
		case 2:
			return "PSF_STRENGTH" /*Strength +*/;
	
		case 4:
			return "PSF_DRIVING" /*Driving +*/;
	
		case 5:
			return "PSF_FLYING" /*Flying +*/;
	
		case 6:
			return "PSF_SHOOTING" /*Shooting +*/;
	
		case 7:
			return "PSF_STEALTH" /*Stealth +*/;
	}

	return "ERROR";
}

int func_96(Player plParam0) // Position - 0x37F5 (14325)
{
	int num;

	num = func_99(plParam0);

	if (num == -1)
	{
		func_97(plParam0, true);
		return 0;
	}

	Global_1686278[num /*5*/].f_4 = 1;
	return Global_1686278[num /*5*/].f_2;
}

void func_97(Player plParam0, BOOL bParam1) // Position - 0x382B (14379)
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_99(plParam0) != -1)
		return;

	if (Global_1686441)
		if (plParam0 == Global_1686441.f_1)
			return;

	if (func_98(plParam0))
		return;

	if (Global_1686479 >= 32)
		return;

	Global_1686446[Global_1686479] = plParam0;
	Global_1686479 = Global_1686479 + 1;
	bParam1;
	return;
}

BOOL func_98(Player plParam0) // Position - 0x3897 (14487)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1686479; i = i + 1)
	{
		if (Global_1686446[i] == plParam0)
			return true;
	}

	return false;
}

int func_99(Player plParam0) // Position - 0x38C9 (14537)
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1686439 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1686439; i = i + 1)
	{
		if (Global_1686278[i /*5*/].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1686278[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1686278[i /*5*/].f_2))
				return i;
		
			func_100(i);
			return -1;
		}
	}

	return -1;
}

void func_100(int iParam0) // Position - 0x3948 (14664)
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1686439)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1686278[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1686278[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1686278[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1686278[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1686439; i = i + 1)
	{
		Global_1686278[num /*5*/] = { Global_1686278[i /*5*/] };
		num = num + 1;
	}

	func_101(&Global_1686278[num /*5*/]);
	Global_1686439 = Global_1686439 - 1;
	return;
}

void func_101(var uParam0) // Position - 0x39FD (14845)
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_102() // Position - 0x3A2A (14890)
{
	float value;
	int num;

	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != LEVEL_GTA5)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_106(PLAYER::PLAYER_ID()))
			return;
	
		if (func_105() != 0)
			return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_105() == 0)
			iLocal_52 = 1;
	else
		iLocal_52 = 0;

	if (!func_104())
		func_103();

	iLocal_54 = 0;
	iLocal_55 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_56 = NETWORK::GET_NETWORK_TIME();

	iLocal_71 = MISC::GET_GAME_TIMER();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_72 = NETWORK::GET_NETWORK_TIME();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!IS_BIT_SET(Global_2359296[func_84() /*5571*/].f_681.f_1274, 2))
		{
			value = SYSTEM::TO_FLOAT(func_73(193, -1)) / 20f;
			num = SYSTEM::FLOOR(value);
			num = func_72(num, 0, 100);
			func_83(3, 2, num);
			MISC::SET_BIT(&(Global_2359296[func_84() /*5571*/].f_681.f_1274), 2);
		}
	}

	bLocal_58 = true;
	iLocal_53 = 1;
	return;
}

void func_103() // Position - 0x3B10 (15120)
{
	int i;
	var unk;
	int num;
	int j;
	int k;
	Hash statName;
	var unk2;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (i != 0)
			{
				func_74(3, i, &unk, &num);
				func_57(num, func_55(3, i, -1), -1, true);
			}
		}
	
		func_4(0, true, -1, true);
		Global_98945 = true;
	}
	else
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (k = 0; k < 8; k = k + 1)
			{
				if (k != 0)
				{
					func_74(j, k, &statName, &unk2);
					STATS::STAT_SET_INT(statName, func_55(j, k, -1), true);
				}
			}
		}
	
		Global_114135.f_2367.f_539.f_2387[0] = func_55(0, 0, -1);
		Global_114135.f_2367.f_539.f_2387[1] = func_55(1, 0, -1);
		Global_114135.f_2367.f_539.f_2387[2] = func_55(2, 0, -1);
		Global_114135.f_2367.f_539.f_2354 = 1;
		Global_98945 = true;
	}

	return;
}

BOOL func_104() // Position - 0x3C03 (15363)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	return Global_114135.f_2367.f_539.f_2354;
}

int func_105() // Position - 0x3C26 (15398)
{
	return Global_33087;
}

BOOL func_106(Player plParam0) // Position - 0x3C31 (15409)
{
	if (!func_50(plParam0))
		return false;

	return IS_BIT_SET(Global_2672939.f_1, plParam0);
}

void func_107() // Position - 0x3C50 (15440)
{
	if (iLocal_53 != 0 && iLocal_52 != 2)
	{
		if (iLocal_52 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_52 = 2;
		
			if (!func_104())
				iLocal_52 = 2;
		}
		else if (iLocal_52 == 1)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_106(PLAYER::PLAYER_ID()) || func_105() != 0)
				iLocal_52 = 2;
		}
	
		if (iLocal_52 == 2)
			iLocal_53 = 2;
	}

	return;
}


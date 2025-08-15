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
	var uLocal_45 = 0;
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
	float fLocal_61 = 0f;
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
	var uLocal_92 = 0;
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
	BOOL bLocal_104 = 0;
	BOOL bLocal_105 = 0;
	BOOL bLocal_106 = 0;
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
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	BOOL bLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num5;
	BOOL flag4;

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
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	fLocal_63 = 0f;
	iLocal_130 = -1;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	num = 0;
	num2 = num;
	BUILTIN::SETTIMERA(0);
	Global_45350 = false;
	func_41();
	TEXT_LABEL_ASSIGN_STRING(&Global_45351, "CC_SUBSTR" /*~INPUT_CONTEXT~*/, 16);
	num3 = -1;
	num4 = -1;
	flag = false;
	flag2 = false;
	flag3 = false;
	num5 = -1;
	flag4 = Global_79768;

	while (true)
	{
		if (Global_79768)
			func_35();
		else
			func_33();
	
		func_26();
	
		if (Global_79768 != flag4)
		{
			func_25();
			func_41();
			num3 = -1;
			flag4 = Global_79768;
		
			while (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				BUILTIN::WAIT(2000);
			}
		}
	
		if (Global_45356)
			if (Global_45358 > -1)
				if (!Global_45156[Global_45358 /*32*/].f_6)
					if (!_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(Global_45358, 1))
						Global_45358 = -1;
	
		if (func_19())
		{
			num3 = -1;
			func_25();
		}
	
		if (num3 > -1)
		{
			if (!Global_45356)
			{
				if (Global_45358 != num3)
				{
					if (func_18(Global_45358))
					{
						func_25();
					
						if (!Global_45156[num3 /*32*/].f_5 && Global_45156[num3 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_45156[num3 /*32*/].f_7)
								{
									if (!Global_45156[num3 /*32*/].f_6)
									{
										if (!Global_45156[num3 /*32*/].f_12)
											func_17(Global_45156[num3 /*32*/].f_8, Global_45156[num3 /*32*/].f_3);
										else
											func_16(Global_45156[num3 /*32*/].f_8, Global_45156[num3 /*32*/].f_13, Global_45156[num3 /*32*/].f_3, Global_45156[num3 /*32*/].f_30);
									
										Global_45358 = num3;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	
		switch (num)
		{
			case 0:
				num3 = func_15();
			
				if (PAD::IS_CONTROL_RELEASED(FRONTEND_CONTROL, INPUT_CONTEXT))
					flag3 = true;
			
				if (!func_19())
				{
					if (num3 > -1 && flag3)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT))
						{
							Global_45156[num3 /*32*/].f_4 = 1;
							Global_45156[num3 /*32*/].f_29 = 0;
							num5 = Global_45156[num3 /*32*/].f_1;
							num = 1;
							Global_45349 = false;
						}
					}
				}
				else
				{
					num3 = -1;
				}
			
				if (num4 != num3)
				{
					if (num3 != -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
							{
								if (PAD::IS_CONTROL_ENABLED(PLAYER_CONTROL, INPUT_VEH_ROOF))
								{
									flag2 = true;
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
								}
							
								if (PAD::IS_CONTROL_ENABLED(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT))
								{
									flag = true;
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
								}
							}
						}
					}
					else
					{
						if (flag2)
						{
							PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
							flag2 = false;
						}
					
						if (flag)
						{
							PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
							flag = false;
						}
					}
				
					num4 = num3;
				}
				break;
		
			case 1:
				if (num3 < 0 || func_14() == 0)
				{
					num = 0;
				}
				else
				{
					if (BUILTIN::TIMERA() > 5000)
					{
						Global_45156[num3 /*32*/].f_7 = 1;
						num = 0;
					}
					else if (func_13(num3))
					{
						num = 2;
					}
				
					if (!(num5 == Global_45156[num3 /*32*/].f_1))
						num = 0;
				
					if (Global_45156[num3 /*32*/].f_7 || Global_45156[num3 /*32*/] == false)
						num = 0;
				}
				break;
		
			case 2:
				if (Global_45349)
					func_25();
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT))
					if (num3 > -1)
						Global_45156[num3 /*32*/].f_29 = 0;
			
				if (Global_45350)
				{
					Global_45350 = false;
					num = 0;
				}
				else if (num3 > -1)
				{
					if (!(Global_45156[num3 /*32*/].f_4 || Global_45156[num3 /*32*/].f_7))
					{
						Global_45350 = false;
						num3 = -1;
					}
				}
			
				if (num3 > -1)
					if (Global_45156[num3 /*32*/].f_7 || Global_45156[num3 /*32*/] == false)
						num3 = -1;
			
				if (num3 == -1)
				{
					num = 0;
					flag3 = false;
				}
				break;
		}
	
		if (num3 > -1)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_TALK, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_SPECIAL_TWO, true);
		}
	
		if (num != num2)
		{
			num2 = num;
			BUILTIN::SETTIMERA(0);
			flag3 = false;
		}
	
		func_12();
		func_10(&num3);
		Global_45355 = false;
		Global_45356 = false;
		func_1();
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x45A (1114)
{
	BOOL beep;

	if (!bLocal_104)
		return;

	beep = true;

	if (iLocal_127 == 1)
		beep = false;

	if (bLocal_105)
	{
		if (bLocal_106)
			HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
	
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&uLocal_107);
	
		if (bLocal_106)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uLocal_111);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45351);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uLocal_111);
		}
	
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, beep, 50);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&uLocal_107);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45351);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, beep, 50);
	}

	switch (iLocal_127)
	{
		case 0:
			break;
	
		case 1:
			func_9(false);
			break;
	
		case 2:
			func_2(false);
			break;
	}

	return;
}

void func_2(BOOL bParam0) // Position - 0x4F7 (1271)
{
	char* audioRef;

	audioRef = "GTAO_Boss_Goons_FM_Soundset";

	if (func_4(true))
		audioRef = "GTAO_Biker_FM_Soundset";

	if (bParam0 && !func_3())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", audioRef, false);

	return;
}

BOOL func_3() // Position - 0x52B (1323)
{
	return Global_2672967.f_2590[0 /*80*/].f_1 != 0;
}

BOOL func_4(BOOL bParam0) // Position - 0x541 (1345)
{
	return func_5(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_5(Player plParam0, BOOL bParam1) // Position - 0x553 (1363)
{
	return func_6(plParam0, bParam1, 1);
}

int func_6(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x564 (1380)
{
	Player player;

	if (!func_8(plParam0))
		return 0;

	if (!bParam1)
		if (func_7(plParam0, iParam2))
			return 0;

	player = Global_1888882[plParam0 /*611*/].f_10;

	if (func_8(player) && Global_1888882[player /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_7(Player plParam0, int iParam1) // Position - 0x5C0 (1472)
{
	if (func_8(plParam0))
		if (func_8(Global_1888882[plParam0 /*611*/].f_10))
			if (Global_1888882[plParam0 /*611*/].f_10 == plParam0 && Global_1888882[plParam0 /*611*/].f_10.f_431 == iParam1)
				return true;

	return false;
}

BOOL func_8(Player plParam0) // Position - 0x60F (1551)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_9(BOOL bParam0) // Position - 0x631 (1585)
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);

	if (bParam0 && !func_3())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);

	return;
}

void func_10(var uParam0) // Position - 0x65E (1630)
{
	int i;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45156[i /*32*/] && Global_45156[i /*32*/].f_4)
		{
			if (Global_45156[i /*32*/].f_31 != 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_45156[i /*32*/].f_31))
				{
					if (*uParam0 > -1)
						func_11();
				
					Global_45156[i /*32*/] = false;
					Global_45156[i /*32*/].f_31 = 0;
					Global_45156[i /*32*/] = false;
					Global_45156[i /*32*/].f_4 = 0;
					Global_45156[i /*32*/].f_5 = 0;
					Global_45156[i /*32*/].f_2 = 0;
					Global_45156[i /*32*/].f_7 = 0;
					Global_45156[i /*32*/].f_6 = 0;
					Global_45156[i /*32*/].f_3 = 0;
					*uParam0 = -1;
				}
			}
		}
	}

	return;
}

void func_11() // Position - 0x716 (1814)
{
	if (Global_45358 != -1 || bLocal_104)
	{
		bLocal_104 = false;
		Global_45358 = -1;
	}

	return;
}

void func_12() // Position - 0x735 (1845)
{
	int i;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45156[i /*32*/].f_7)
		{
			if (i == Global_45358)
				func_25();
		
			Global_45156[i /*32*/].f_31 = 0;
			Global_45156[i /*32*/] = false;
			Global_45156[i /*32*/].f_4 = 0;
			Global_45156[i /*32*/].f_5 = 0;
			Global_45156[i /*32*/].f_2 = 0;
			Global_45156[i /*32*/].f_7 = 0;
			Global_45156[i /*32*/].f_6 = 0;
			Global_45156[i /*32*/].f_1 = -1;
			Global_45156[i /*32*/].f_3 = 0;
		}
	}

	return;
}

BOOL func_13(int iParam0) // Position - 0x7C2 (1986)
{
	if (iParam0 < 0)
		return false;

	if (Global_45156[iParam0 /*32*/].f_5)
		return true;

	return false;
}

int func_14() // Position - 0x7E5 (2021)
{
	int i;
	int num;

	i = 0;
	num = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45156[i /*32*/] == true)
			if (Global_45156[i /*32*/].f_4 == false)
				num = num + 1;
	}

	if (num == 0)
		func_25();

	return num;
}

int func_15() // Position - 0x82F (2095)
{
	int i;
	int num;
	int num2;

	i = 0;
	num = -1;
	num2 = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45156[i /*32*/])
		{
			if (Global_45156[i /*32*/].f_2 > num)
			{
				num2 = i;
				num = Global_45156[i /*32*/].f_2;
			}
		}
	}

	return num2;
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, BOOL bParam21) // Position - 0x87B (2171)
{
	uLocal_107 = { uParam0 };
	uLocal_111 = { uParam4 };
	bLocal_104 = true;
	bLocal_105 = true;
	iLocal_127 = iParam20;
	bLocal_106 = bParam21;
	return;
}

void func_17(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x8A3 (2211)
{
	uLocal_107 = { uParam0 };
	bLocal_104 = true;
	bLocal_105 = false;
	iLocal_127 = iParam4;
	return;
}

BOOL func_18(int iParam0) // Position - 0x8BD (2237)
{
	int i;

	if (Global_98821 && Global_98820)
		return false;

	if (iParam0 > 0)
		if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(iParam0, 1) || bLocal_104)
			return true;

	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME())
	{
		for (i = 0; i < 6; i = i + 1)
		{
			if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(i, 1))
				return true;
		}
	
		return false;
	}

	return true;
}

BOOL func_19() // Position - 0x92B (2347)
{
	if (Global_76855)
		return true;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return true;

	if (func_22(0))
		return true;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return true;

	if (Global_45355)
		return true;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL))
		return true;

	if (func_21(true))
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return true;

	if (func_20(8, -1))
		return true;

	return false;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x9A2 (2466)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673898.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673898.f_1048, iParam0);
}

BOOL func_21(BOOL bParam0) // Position - 0x9DA (2522)
{
	if (bParam0)
		return Global_24009.f_4 && Global_24009.f_104 == 4;

	return Global_24009.f_4;
}

BOOL func_22(int iParam0) // Position - 0xA03 (2563)
{
	if (iParam0 == 1)
		if (Global_21239.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21239.f_1 > 3)
		return true;

	return false;
}

BOOL _CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(int iParam0, int iParam1) // Position - 0xA5A (2650)
{
	int num;
	BOOL flag;

	num = func_24(iParam0);

	if (iParam1 == 0)
		if (num == -1)
			return false;
	else
		num = iParam0;

	if (num < 0)
		return false;

	if (Global_45156[num /*32*/].f_6)
		return false;

	flag = false;

	if (!Global_45156[num /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_45156[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45351);
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_45156[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45351);
	
		if (Global_45156[num /*32*/].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_45156[num /*32*/].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_45156[num /*32*/].f_13));
	
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return flag;
}

int func_24(int iParam0) // Position - 0xB0F (2831)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45156[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_25() // Position - 0xB4A (2890)
{
	func_11();
	Global_45358 = -1;
	return;
}

void func_26() // Position - 0xB5A (2906)
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_32())
	{
		if (func_31(false))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2684748.f_789.f_12)))
			{
				func_30();
				func_27(6, 0);
			}
		}
	}

	return;
}

void func_27(int iParam0, int iParam1) // Position - 0xB97 (2967)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_76969 = iParam0;
	flag = iParam1 == 1;
	flag2 = iParam1 == 2;
	flag3 = iParam1 == 3;

	switch (Global_76969)
	{
		case 3:
			Global_76967 = 0;
			break;
	
		case 4:
			Global_76967 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0)
	{
		if (flag)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (flag2)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0)
	{
		if (flag3)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return;
	}

	if (Global_79768 && func_29())
		return;

	if (!Global_79768 && func_28())
		return;

	if (Global_79768)
	{
		Global_76820 = iParam1;
	}
	else if (flag)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (flag2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (flag3)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
			SCRIPT::REQUEST_SCRIPT("appImportExport");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
			SCRIPT::REQUEST_SCRIPT("appInternet");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appInternet", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}

	return;
}

BOOL func_28() // Position - 0xD77 (3447)
{
	return Global_76856;
}

BOOL func_29() // Position - 0xD83 (3459)
{
	return Global_1931786;
}

void func_30() // Position - 0xD8F (3471)
{
	Global_2684748.f_789.f_28 = 0;
	return;
}

BOOL func_31(BOOL bParam0) // Position - 0xDA1 (3489)
{
	if (bParam0)
		return Global_2684748.f_789.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2684748.f_789.f_31;

	return Global_2684748.f_789.f_28;
}

BOOL func_32() // Position - 0xDDD (3549)
{
	return Global_76855;
}

void func_33() // Position - 0xDE9 (3561)
{
	BOOL flag;
	int i;

	flag = false;
	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_61697[i] < 0)
		{
			Global_61697[i] = 0;
			flag = true;
		}
	}

	if (flag)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}

	return;
}

void func_34(int iParam0) // Position - 0xE33 (3635)
{
	int value;

	value = Global_61697[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_35() // Position - 0xE8D (3725)
{
	var unk;
	var unk15;
	int displaynamesFromHandles;

	if (Global_1835511 != -1)
	{
		unk = 1;
		unk[0 /*13*/] = Global_1835512[0];
		unk[0 /*13*/].f_1 = Global_1835512[1];
		unk[0 /*13*/].f_2 = Global_1835512[2];
		unk[0 /*13*/].f_3 = Global_1835512[3];
		unk[0 /*13*/].f_4 = Global_1835512[4];
		unk[0 /*13*/].f_5 = Global_1835512[5];
		unk[0 /*13*/].f_6 = Global_1835512[6];
		unk[0 /*13*/].f_7 = Global_1835512[7];
		unk[0 /*13*/].f_8 = Global_1835512[8];
		unk[0 /*13*/].f_9 = Global_1835512[9];
		unk[0 /*13*/].f_10 = Global_1835512[10];
		unk[0 /*13*/].f_11 = Global_1835512[11];
		unk[0 /*13*/].f_12 = Global_1835512[12];
	
		if (MISC::IS_XBOX360_VERSION() || func_40())
		{
			if (!bLocal_128)
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&unk[0 /*13*/]))
					bLocal_128 = true;
		
			if (bLocal_128)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
						TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_39() /*5571*/].f_5394.f_18[Global_1835511 /*6*/], NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&unk[0 /*13*/]), 24);
				
					func_38();
				}
			}
		}
		else if (MISC::IS_PS3_VERSION() || func_37())
		{
			if (IS_GAMER_HANDLE_VALID(unk[0 /*13*/]))
			{
				unk15 = 1;
			
				switch (iLocal_129)
				{
					case 0:
						iLocal_130 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&unk, 1);
					
						if (iLocal_130 >= 0)
							iLocal_129 = iLocal_129 + 1;
						break;
				
					case 1:
						displaynamesFromHandles = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(iLocal_130, &unk15, 1);
					
						switch (displaynamesFromHandles)
						{
							case -1:
								func_38();
								break;
						
							case 0:
								TEXT_LABEL_COPY(&Global_2359296[func_39() /*5571*/].f_5394.f_18[Global_1835511 /*6*/], { unk15[0 /*16*/] }, 6);
								func_38();
								break;
						
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_38();
			}
		}
		else
		{
			if (IS_GAMER_HANDLE_VALID(unk[0 /*13*/]))
				TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_39() /*5571*/].f_5394.f_18[Global_1835511 /*6*/], NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&unk[0 /*13*/]), 24);
		
			func_38();
		}
	}

	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x10A7 (4263)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL func_37() // Position - 0x10B7 (4279)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_38() // Position - 0x10CD (4301)
{
	Global_1835511 = -1;
	bLocal_128 = false;
	iLocal_130 = -1;
	iLocal_129 = 0;
	return;
}

int func_39() // Position - 0x10E3 (4323)
{
	int num;

	num = 0;
	return num;
}

BOOL func_40() // Position - 0x10F0 (4336)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_41() // Position - 0x1106 (4358)
{
	int i;

	Global_45349 = false;
	Global_45355 = false;
	Global_45356 = false;
	Global_45357 = 1;
	Global_45358 = -1;
	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		Global_45156[i /*32*/] = false;
	}

	return;
}


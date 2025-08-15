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
	var uLocal_17 = 2;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	BOOL bLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_58();

	while (true)
	{
		BUILTIN::WAIT(250);
	
		switch (iLocal_16)
		{
			case 0:
				if (uLocal_17[0])
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_23722[3 /*42*/].f_27[0] = _GET_PLAYER_CASH(CHAR_TREVOR);
						func_56(2, 32, Global_23722[3 /*42*/].f_27[0]);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[3 /*42*/], "PA_TREV1" /*Earn one million dollars.*/, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_23722[3 /*42*/].f_4), "PA_TREV1" /*Earn one million dollars.*/, 16);
					Global_23722[3 /*42*/].f_8 = 0;
					Global_23722[3 /*42*/].f_9 = 1;
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[3 /*42*/].f_10[1 /*4*/], "PA_TREV1A" /*Current wealth $~1~.*/, 16);
					Global_23722[3 /*42*/].f_37[1] = 0;
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						Global_23722[3 /*42*/].f_27[1] = _GET_PLAYER_CASH(CHAR_TREVOR);
				
					func_49(2, 3, true, 1);
					func_46("PA_TREV1A" /*Current wealth $~1~.*/, Global_23722[3 /*42*/].f_27[1]);
					iLocal_16 = 1;
				}
				break;
		
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					Global_23722[3 /*42*/].f_27[1] = _GET_PLAYER_CASH(CHAR_TREVOR);
				
					if (func_45(CHAR_TREVOR, 999999))
					{
						func_44("PA_COMPLETE" /*Goal achieved ~a~*/, "PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
						Global_23722[3 /*42*/].f_37[1] = 1;
						Global_23722[3 /*42*/].f_8 = 1;
						iLocal_22 = MISC::GET_GAME_TIMER();
						iLocal_16 = 2;
					}
					else if (func_45(CHAR_TREVOR, 499999))
					{
						if (!bLocal_20)
						{
							_SHOW_SUBTITLE("PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
							bLocal_20 = true;
						}
					}
				
					if (uLocal_17[1])
					{
						func_1(2, 32, 500000, false, false);
						uLocal_17[1] = 0;
					}
				}
				break;
		
			case 2:
				iLocal_21 = MISC::GET_GAME_TIMER();
			
				if (iLocal_21 - iLocal_22 < 5000)
					func_46("PA_TREV1A" /*Current wealth $~1~.*/, Global_23722[3 /*42*/].f_27[1]);
				break;
		}
	}

	return;
}

void func_1(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D5 (469)
{
	int outValue;
	Hash statHash;

	if (func_42(iParam0) == 3)
		return;

	if (func_42(iParam0) == 4)
		return;

	func_2(func_42(iParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 1:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 2:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 1:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 2:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2A7 (679)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_41();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_40(99, 1);
					func_39(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_39(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_39(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_23(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_20(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_20(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_20(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_19(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_40(95, iParam3);
					break;
			
				case 1:
					func_40(97, iParam3);
					break;
			
				case 2:
					func_40(96, iParam3);
					break;
			}
		
			func_40(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_5(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_5(num2);
	}

	num6 = Global_61697[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61697[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61697[num3] = 2147483647;
				else
					Global_61697[num3] = Global_61697[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_39(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_39(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_39(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61697[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61697[num3];
			Global_61697[num3] = Global_61697[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_114370.f_20568.f_233[num3 /*69*/].f_2[Global_114370.f_20568.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114370.f_20568.f_233[num3 /*69*/].f_2[Global_114370.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114370.f_20568.f_233[num3 /*69*/].f_2[Global_114370.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114370.f_20568.f_233[num3 /*69*/] = Global_114370.f_20568.f_233[num3 /*69*/] + 1;
		Global_114370.f_20568.f_233[num3 /*69*/].f_1 = Global_114370.f_20568.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114370.f_20568.f_233[num3 /*69*/].f_1 > 10)
			Global_114370.f_20568.f_233[num3 /*69*/].f_1 = 0;
	}

	func_4(iParam0);

	if (Global_44392 == 15)
		func_3(false);

	return 1;
}

void func_3(BOOL bParam0) // Position - 0x8A6 (2214)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114370.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114370.f_20568.f_233[i /*69*/].f_2[j /*6*/];
			Global_114370.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114370.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114370.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114370.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61705[i /*3*/][0] = Global_114370.f_20568[i];
		Global_61705.f_31[i /*3*/][0] = Global_114370.f_20568.f_11[i];
		Global_61705.f_62[i /*3*/][0] = Global_114370.f_20568.f_22[i];
		Global_61705.f_93[i /*3*/][0] = Global_114370.f_20568.f_33[i];
		Global_61705.f_124[i /*3*/][0] = Global_114370.f_20568.f_44[i];
		Global_61705.f_155[i /*3*/][0] = Global_114370.f_20568.f_55[i];
		Global_61705.f_186[i /*3*/][0] = Global_114370.f_20568.f_66[i];
		Global_61705.f_217[i /*3*/][0] = Global_114370.f_20568.f_77[i];
		Global_61705.f_248[i /*3*/][0] = Global_114370.f_20568.f_88[i];
	
		if (!bParam0)
		{
			Global_61705[i /*3*/][1] = Global_114370.f_20568[i];
			Global_61705.f_31[i /*3*/][1] = Global_114370.f_20568.f_11[i];
			Global_61705.f_62[i /*3*/][1] = Global_114370.f_20568.f_22[i];
			Global_61705.f_93[i /*3*/][1] = Global_114370.f_20568.f_33[i];
			Global_61705.f_124[i /*3*/][1] = Global_114370.f_20568.f_44[i];
			Global_61705.f_155[i /*3*/][1] = Global_114370.f_20568.f_55[i];
			Global_61705.f_186[i /*3*/][1] = Global_114370.f_20568.f_66[i];
			Global_61705.f_217[i /*3*/][1] = Global_114370.f_20568.f_77[i];
			Global_61705.f_248[i /*3*/][1] = Global_114370.f_20568.f_88[i];
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0xB28 (2856)
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

void func_5(int iParam0) // Position - 0xB82 (2946)
{
	int num;
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		_STAT_SET_PACKED_BOOL(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		_STAT_SET_PACKED_BOOL(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		_STAT_SET_PACKED_BOOL(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		_STAT_SET_PACKED_BOOL(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_14(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_14(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_14(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_14(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_14(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_14(8277, 0, -1, true);
		return;
	}

	if (func_13(iParam0))
	{
		func_14(func_12(iParam0), 0, -1, true);
		return;
	}

	if (func_11(iParam0))
	{
		num = _MPPLY_STAT_GET_INT(func_10(iParam0));
		_MPPLY_STAT_SET_INT(func_10(iParam0), num - 1);
		return;
	}

	if (iParam0 == 39)
	{
		_STAT_SET_PACKED_BOOL(7332, false, -1);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114370.f_20568.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114370.f_20568.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114370.f_20568.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_7() /*5571*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114370.f_20568.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_7() /*5571*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_6(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_6(int iParam0) // Position - 0xD4B (3403)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /*one free haircut.*/;
	
		case 1:
			return "COUP_TATTOO" /*one free tattoo.*/;
	
		case 2:
			return "COUP_WARSTOCK" /*10% off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 3:
			return "COUP_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 4:
			return "COUP_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 5:
			return "COUP_MEDSPENS" /*10 percent off your next medical expenses.*/;
	
		case 6:
			return "COUP_SPRUNK" /*one free can of Sprunk.*/;
	
		case 7:
			return "COUP_RESPRAY" /*one free respray.*/;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /*10 percent off your next purchase at DockTease.com.*/;
	
		case 14:
			return "COUP_CAS_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 15:
			return "COUP_CAS_SSASA" /*10 percent off your next purchase at southernsanandreassuperautos.com.*/;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /*10 percent off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 17:
			return "COUP_CAS_PANDM" /*10 percent off your next purchase at pandmcycles.com.*/;
	
		case 39:
			return "COUPON_CAR_GEN9_MIGRATION";
	
		default:
			if (func_13(iParam0))
				return "HSW_COUP" /*One free respray, livery or spoiler.*/;
		
			if (func_11(iParam0))
				return "HSWU_COUP" /*One free Hao's Special Works upgrade.*/;
			break;
	}

	return "";
}

int func_7() // Position - 0xE6F (3695)
{
	int num;

	num = 0;
	return num;
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0xE7C (3708)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0xE98 (3736)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_10(int iParam0) // Position - 0xEB6 (3766)
{
	switch (iParam0)
	{
		case 38:
			return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
	
		default:
		
	}

	return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
}

BOOL func_11(int iParam0) // Position - 0xED8 (3800)
{
	switch (iParam0)
	{
		case 38:
			return true;
	}

	return false;
}

int func_12(int iParam0) // Position - 0xEF5 (3829)
{
	switch (iParam0)
	{
		case 18:
			return 15528;
	
		case 19:
			return 15529;
	
		case 20:
			return 15530;
	
		case 21:
			return 15531;
	
		case 22:
			return 15532;
	
		case 23:
			return 15533;
	
		case 24:
			return 15534;
	
		case 25:
			return 15535;
	
		case 26:
			return 15536;
	
		case 27:
			return 15537;
	
		case 28:
			return 15538;
	
		case 29:
			return 15539;
	
		case 30:
			return 15540;
	
		case 31:
			return 15541;
	
		case 32:
			return 15542;
	
		case 33:
			return 15543;
	
		case 34:
			return 15544;
	
		case 35:
			return 15545;
	
		case 36:
			return 15546;
	
		case 37:
			return 15547;
	}

	return 15528;
}

BOOL func_13(int iParam0) // Position - 0xFFA (4090)
{
	switch (iParam0)
	{
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
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
			return true;
	}

	return false;
}

void func_14(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1089 (4233)
{
	Hash statName;

	if (iParam0 != 17296)
	{
		statName = func_15(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_15(int iParam0, int iParam1) // Position - 0x10B7 (4279)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_16(iParam1));
}

int func_16(int iParam0) // Position - 0x10CC (4300)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_17();
	
		if (num2 > -1)
		{
			Global_2752424 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752424 = 1;
		}
	}

	return num;
}

int func_17() // Position - 0x1100 (4352)
{
	return Global_1574927;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x110C (4364)
{
	if (iParam2 == -1)
		iParam2 = func_17();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_19(int iParam0) // Position - 0x112A (4394)
{
	func_40(93, iParam0);
	func_40(29, iParam0);
	func_40(30, iParam0);
	return;
}

BOOL func_20(int iParam0) // Position - 0x114A (4426)
{
	int cloudTimeAsInt;
	int num;
	int cloudTimeAsInt2;
	int num2;
	int cloudTimeAsInt3;
	int num3;
	int cloudTimeAsInt4;
	int num4;
	int cloudTimeAsInt5;
	int num5;
	int cloudTimeAsInt6;
	int num6;
	int cloudTimeAsInt7;
	int num7;
	int num8;

	if (iParam0 == 8)
		return _STAT_GET_PACKED_BOOL(129, -1);

	if (iParam0 == 9)
		return _STAT_GET_PACKED_BOOL(135, -1);

	if (iParam0 == 10)
		return _STAT_GET_PACKED_BOOL(136, -1);

	if (iParam0 == 11)
		return _STAT_GET_PACKED_BOOL(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_21(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_21(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_21(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_21(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_21(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_21(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (func_13(iParam0))
	{
		cloudTimeAsInt7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num7 = func_21(func_12(iParam0), -1);
	
		if (num7 == 0 || cloudTimeAsInt7 >= num7)
			return false;
	
		return true;
	}

	if (func_11(iParam0))
	{
		num8 = _MPPLY_STAT_GET_INT(func_10(iParam0));
	
		if (num8 <= 0)
			return false;
	
		return true;
	}

	if (iParam0 == 39)
		return _STAT_GET_PACKED_BOOL(7332, -1);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114370.f_20568.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_7() /*5571*/].f_681.f_10, iParam0);
}

int func_21(int iParam0, int iParam1) // Position - 0x1355 (4949)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17296)
	{
		statHash = func_15(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x1384 (4996)
{
	if (iParam1 == -1)
		iParam1 = func_17();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_23(BOOL bParam0) // Position - 0x13A0 (5024)
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_38(27, value);
	}

	if (value < 200000000)
		return 0;

	func_24(27, 1);
	return 1;
}

int func_24(int iParam0, int iParam1) // Position - 0x1457 (5207)
{
	if (iParam0 >= 78)
		return 0;

	return func_25(iParam0, iParam1);
}

int func_25(int iParam0, int iParam1) // Position - 0x1472 (5234)
{
	if (func_37(14) && !func_36(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33549 != 0 && !Global_79768)
		return 0;

	if (func_35(&Global_4546910))
	{
		if (func_33(&Global_4546910, iParam0))
			return 0;
	
		if (func_26(&Global_4546910, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_26(var uParam0, int iParam1) // Position - 0x150F (5391)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_37(14) && !func_36(iParam1))
		return false;

	if (func_33(uParam0, iParam1))
		return false;

	if (func_32(uParam0) < 0f)
		func_31(uParam0, 0);

	func_29(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_27(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_27(var uParam0, int iParam1) // Position - 0x15C0 (5568)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_37(14) && !func_36(iParam1))
		return 0;

	if (func_33(uParam0, iParam1))
		return 0;

	if (func_32(uParam0) < 0f)
		func_31(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_28(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_28(var uParam0, int iParam1) // Position - 0x163B (5691)
{
	return uParam0->[iParam1] == 78;
}

void func_29(var uParam0) // Position - 0x164C (5708)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_30(uParam0, i);
	}

	func_31(uParam0, Global_4546909 - 0.5f);
	return;
}

void func_30(var uParam0, int iParam1) // Position - 0x1680 (5760)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_31(var uParam0, int iParam1) // Position - 0x1690 (5776)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_32(var uParam0) // Position - 0x16AD (5805)
{
	return uParam0->f_80;
}

BOOL func_33(var uParam0, int iParam1) // Position - 0x16B9 (5817)
{
	return func_34(uParam0, iParam1) != -1;
}

int func_34(var uParam0, int iParam1) // Position - 0x16CB (5835)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_35(var uParam0) // Position - 0x16F8 (5880)
{
	return uParam0->f_79 == 1;
}

BOOL func_36(int iParam0) // Position - 0x1706 (5894)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_37(int iParam0) // Position - 0x1756 (5974)
{
	return Global_44392 == iParam0;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0x1764 (5988)
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void func_39(Hash hParam0, int iParam1) // Position - 0x17B5 (6069)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_40(int iParam0, int iParam1) // Position - 0x17D8 (6104)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60265[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60265[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60265[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60265[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_41() // Position - 0x1835 (6197)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61697[0] == outValue))
			Global_61697[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61697[1] == outValue))
			Global_61697[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61697[2] == outValue))
			Global_61697[2] = outValue;
	}

	return;
}

int func_42(int iParam0) // Position - 0x18AA (6314)
{
	return Global_2241[iParam0 /*29*/].f_17;
}

void _SHOW_SUBTITLE(char* sParam0, int iParam1, int iParam2) // Position - 0x18BB (6331)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
	return;
}

void func_44(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x18D4 (6356)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
	return;
}

BOOL func_45(eCharacter echParam0, int iParam1) // Position - 0x18F3 (6387)
{
	if (_GET_PLAYER_CASH(echParam0) > iParam1)
		return true;

	return false;
}

void func_46(char* sParam0, int iParam1) // Position - 0x190E (6414)
{
	GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, false);
	func_48(255, 255, 255, 255);
	func_47(0.81f, 0.8f, sParam0, iParam1, 0);
	return;
}

void func_47(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1951 (6481)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
	return;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x196F (6511)
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_49(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x19AE (6574)
{
	if (func_55())
		return 0;

	if (func_50(iParam0, iParam1, bParam2, iParam3) == 1)
		return 1;

	return 0;
}

int func_50(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x19D9 (6617)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsidetask")) > 0)
		return 0;

	if (func_53() == 0)
	{
		func_52();
		return 0;
	}

	func_51(Global_23721);
	Global_23891[Global_23721 /*9*/].f_1 = iParam1;
	Global_23891[Global_23721 /*9*/] = iParam0;

	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23891[Global_23721 /*9*/].f_8 = iParam3;
	}

	bParam2;
	return 1;
}

void func_51(int iParam0) // Position - 0x1A3D (6717)
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_23891[iParam0 /*9*/].f_2 = clockSeconds;
	Global_23891[iParam0 /*9*/].f_2.f_1 = clockMinutes;
	Global_23891[iParam0 /*9*/].f_2.f_2 = clockHours;
	Global_23891[iParam0 /*9*/].f_2.f_3 = clockDayOfMonth;
	Global_23891[iParam0 /*9*/].f_2.f_4 = num;
	Global_23891[iParam0 /*9*/].f_2.f_5 = clockYear;
	return;
}

void func_52() // Position - 0x1AB7 (6839)
{
	return;
}

int func_53() // Position - 0x1ABF (6847)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_23891[i /*9*/].f_8 == 0)
		{
			Global_23721 = i;
			return 1;
		}
	}

	i = 0;
	Global_23721 = 3;
	Global_23891[Global_23721 /*9*/].f_2 = -1;
	Global_23891[Global_23721 /*9*/].f_2.f_1 = 0;
	Global_23891[Global_23721 /*9*/].f_2.f_2 = 0;
	Global_23891[Global_23721 /*9*/].f_2.f_3 = 0;
	Global_23891[Global_23721 /*9*/].f_2.f_5 = 99999;

	while (i < 2)
	{
		if (Global_23891[i /*9*/].f_8 == 0 || Global_23891[i /*9*/].f_8 == 1)
			if (!func_54(Global_23891[i /*9*/].f_2, Global_23891[Global_23721 /*9*/].f_2))
				Global_23721 = i;
	
		i = i + 1;
	}

	if (Global_23721 == 3)
		return 0;

	return 1;
}

BOOL func_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x1B99 (7065)
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

BOOL func_55() // Position - 0x1C84 (7300)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 0)
		return true;

	return false;
}

int func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1CAB (7339)
{
	if (func_42(iParam0) == 3)
		return 0;

	if (func_42(iParam0) == 4)
		return 0;

	return func_2(func_42(iParam0), 0, iParam1, iParam2, false);
}

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x1CDF (7391)
{
	int outValue;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_FRANKLIN:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_TREVOR:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

void func_58() // Position - 0x1D37 (7479)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


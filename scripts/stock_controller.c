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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	Vehicle veLocal_31 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int i;
	float outValue;
	int j;
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
	iLocal_18 = -15;
	iLocal_19 = -15;
	iLocal_20 = -1;
	iLocal_24 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_99();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stock_controller")) > 1)
		func_99();

	Global_64490 = 1;
	iLocal_20 = BUILTIN::ROUND(BUILTIN::TO_FLOAT(480) / 16f);
	func_98();
	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_60248[i /*7*/])
		{
			if (Global_60248[i /*7*/].f_2)
			{
				if (!Global_60248[i /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_60248[i /*7*/].f_3, &(Global_60248[i /*7*/].f_5), -1);
				}
				else
				{
					outValue = 0f;
					STATS::STAT_GET_FLOAT(Global_60248[i /*7*/].f_3, &outValue, -1);
					Global_60248[i /*7*/].f_5 = BUILTIN::FLOOR(outValue);
				}
			}
		}
	}

	func_97();
	func_95();
	func_94();
	func_91();
	Global_64490 = 0;
	func_90(true);
	func_87();
	func_84();

	while (true)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			if (!(Global_114344.f_20568.f_233[j /*69*/].f_1 < 11))
				Global_114344.f_20568.f_233[j /*69*/].f_1 = 0;
		}
	
		func_80();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_79(14))
		{
			func_68();
			num = 16;
		
			while (func_67() && num >= 0)
			{
				num = num - 1;
				func_47();
				Global_61684 = 1;
				func_41();
				Global_64492 = 1;
				func_39();
				func_38();
			}
		
			if (func_30())
			{
				func_28(false);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
		
			while (Global_61677 > 0)
			{
				func_11(&iLocal_18, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_19, 0, 480, 0, 0, 0, 0);
				Global_61677 = Global_61677 - 1;
			}
		}
	
		func_4();
		func_1();
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x201 (513)
{
	Ped playerPed;
	Ped ped;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());

	if (ENTITY::IS_ENTITY_DEAD(playerPed, false))
		return;

	ped = func_3(playerPed);

	if (FIRE::IS_ENTITY_ON_FIRE(ped))
	{
		func_2(89, 1);
	
		if (ENTITY::GET_ENTITY_SPEED(ped) > 5f)
			func_2(90, 1);
	}

	return;
}

void func_2(int iParam0, int iParam1) // Position - 0x24A (586)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60248[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60248[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60248[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60248[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

Ped func_3(Ped pedParam0) // Position - 0x2A7 (679)
{
	return pedParam0;
}

void func_4() // Position - 0x2B1 (689)
{
	int num;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_61678)
		{
			Global_61678 = false;
			Global_61679 = MISC::GET_GAME_TIMER();
			Global_64491 = 1;
		}
	
		return;
	}

	if (Global_61678)
	{
		if (!STATS::STAT_COMMUNITY_SYNCH_IS_PENDING())
		{
			num = func_5();
			Global_61678 = false;
		
			if (num < 5)
				Global_64491 = 0;
		}
	}

	return;
}

int func_5() // Position - 0x2FE (766)
{
	int i;
	int num;
	Hash statHash;
	float num2;
	int j;
	float outValue;
	float num3;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		return 1;

	i = 0;
	num = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (Global_56805[i /*36*/].f_8)
		{
			if (Global_56805[i /*36*/].f_35 > -1)
			{
				statHash = Global_59686[Global_56805[i /*36*/].f_35 /*7*/];
				STATS::STAT_GET_FLOAT(statHash, &(Global_56805[i /*36*/].f_9), -1);
			
				if (Global_56805[i /*36*/].f_9 > 0f)
				{
					num2 = 0f;
					STATS::STAT_COMMUNITY_GET_HISTORY(statHash, 0, &(Global_56805[i /*36*/].f_33));
					Global_56805[i /*36*/].f_31 = Global_56805[i /*36*/].f_9;
					Global_56805[i /*36*/].f_32 = Global_56805[i /*36*/].f_9;
					num2 = num2 + Global_56805[i /*36*/].f_33;
				
					for (j = 0; j < 4; j = j + 1)
					{
						outValue = 0f;
						STATS::STAT_COMMUNITY_GET_HISTORY(statHash, j + 1, &outValue);
					
						if (outValue > Global_56805[i /*36*/].f_31)
							Global_56805[i /*36*/].f_31 = outValue;
					
						if (outValue < Global_56805[i /*36*/].f_32)
							Global_56805[i /*36*/].f_32 = outValue;
					
						num2 = num2 + outValue;
					}
				
					num2 = num2 / 5f;
					num3 = func_6(i);
				
					if (num3 > Global_56805[i /*36*/].f_31)
						Global_56805[i /*36*/].f_31 = num3;
				
					if (num3 < Global_56805[i /*36*/].f_32)
						Global_56805[i /*36*/].f_32 = num3;
				
					Global_56805[i /*36*/].f_33 = num3 - num2;
					Global_56805[i /*36*/].f_34 = (Global_56805[i /*36*/].f_33 / num2) * 100f;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return num;
}

float func_6(int iParam0) // Position - 0x497 (1175)
{
	int num;
	float num2;

	num = iParam0;
	num2 = Global_56805[iParam0 /*36*/].f_9 * func_7(num);
	return BUILTIN::TO_FLOAT(BUILTIN::FLOOR(num2 * 100f)) / 100f;
}

float func_7(int iParam0) // Position - 0x4CB (1227)
{
	float num;
	int num2;
	int i;
	float num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	float num11;
	float num12;

	num = 1f;

	switch (iParam0)
	{
		case 61:
			if (Global_114344.f_9089.f_99.f_58[131])
				num = 0.5f;
			break;
	
		case 73:
			if (func_10(25))
			{
				num = num * 3f;
			}
			else
			{
				if (func_10(74) || func_10(75))
					num = num * 0.95f;
			
				if (func_10(14))
					num = num * 0.98f;
			
				if (func_10(16))
					num = num * 0.98f;
			
				if (func_10(48))
					num = num * 0.98f;
			
				if (func_10(24))
					num = num * 0.98f;
			
				if (func_10(27))
					num = num * 0.5f;
			}
			break;
	
		case 66:
			if (func_10(49))
				num = num * 0.5f;
		
			if (func_10(10))
				num = num * 0.95f;
			break;
	
		case 59:
			if (func_10(93))
				if (!func_10(47))
					num = num * 0.9f;
		
			if (func_10(38))
				if (!func_10(28))
					num = num * 0.9f;
		
			if (func_10(84))
				if (!func_10(28))
					num = num * 0.9f;
			break;
	
		case 69:
			if (func_10(90))
				if (!func_10(14))
					num = num * 0.7f;
			break;
	
		case 16:
			if (func_10(28))
				num = num * 2f;
			break;
	
		case 52:
			if (func_10(93))
				if (!func_10(28))
					num = num * 0.6f;
			break;
	
		case 56:
			if (func_10(61))
				if (!func_10(49))
					num = num * 0.5f;
			break;
	}

	if (Global_114344.f_20568.f_442 < 1)
		return num;

	num2 = -1;
	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_114344.f_20568.f_443[i] == iParam0)
			num2 = i;
	}

	if (num2 > -1)
		num = func_9(Global_114344.f_20568.f_452[num2], Global_114344.f_20568.f_461[num2]);

	if (num > 1f)
	{
		num3 = num - 1f;
		num4 = iParam0;
		num5 = func_8(0, num4);
		num6 = func_8(1, num4);
		num7 = func_8(2, num4);
	
		if (num5 + num6 + num7 > 0)
		{
			num8 = Global_61680[0] + Global_61680[1] + Global_61680[2];
		
			for (i = 0; i < 10; i = i + 1)
			{
				if (Global_114344.f_20568.f_22[i] > 0)
					num8 = num8 + BUILTIN::FLOOR(Global_114344.f_20568.f_11[i]);
			
				if (Global_114344.f_20568.f_55[i] > 0)
					num8 = num8 + BUILTIN::FLOOR(Global_114344.f_20568.f_44[i]);
			
				if (Global_114344.f_20568.f_88[i] > 0)
					num8 = num8 + BUILTIN::FLOOR(Global_114344.f_20568.f_77[i]);
			}
		
			num9 = 700000000;
			num10 = 1000000000;
		
			if (num8 > num10)
			{
				num3 = 0f;
			}
			else if (num8 < num9)
			{
				num3 = 1f;
			}
			else
			{
				num11 = BUILTIN::TO_FLOAT(num8 - num9);
				num12 = BUILTIN::TO_FLOAT(num10 - num9);
				num3 = num3 * (1f - (num11 / num12));
			}
		}
	
		num = 1f + num3;
	}

	return num;
}

int func_8(int iParam0, int iParam1) // Position - 0x844 (2116)
{
	if (iParam1 < 0 || iParam1 > 9)
		return 0;

	switch (iParam0)
	{
		case 0:
			return Global_114344.f_20568.f_22[iParam1];
	
		case 1:
			return Global_114344.f_20568.f_55[iParam1];
	
		case 2:
			return Global_114344.f_20568.f_88[iParam1];
	}

	return 0;
}

float func_9(int iParam0, int iParam1) // Position - 0x8B5 (2229)
{
	float num;
	BOOL flag;
	float num2;
	int num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;

	num = 0f;

	if (iParam0 < 1)
		return 1f;

	flag = IS_BIT_SET(iParam1, 0);
	num2 = BUILTIN::TO_FLOAT(iParam0);
	num3 = 0;

	if (IS_BIT_SET(iParam1, 3))
		num3 = num3 + 1;

	if (IS_BIT_SET(iParam1, 4))
		num3 = num3 + 2;

	if (IS_BIT_SET(iParam1, 5))
		num3 = num3 + 4;

	if (IS_BIT_SET(iParam1, 20))
		num3 = num3 + 8;

	num4 = BUILTIN::TO_FLOAT(3 * num3);

	if (IS_BIT_SET(iParam1, 2))
		num4 = num4 * 7f;

	if (IS_BIT_SET(iParam1, 1))
		if (func_10(21))
			return 1f;
	else if (num4 < 1f)
		return 1f;

	num5 = 1f - (num2 / num4);

	if (IS_BIT_SET(iParam1, 16))
		num = num - 0.5f;

	if (IS_BIT_SET(iParam1, 17))
		num = num - 0.25f;

	if (IS_BIT_SET(iParam1, 18))
		num = num - 0.1f;

	if (IS_BIT_SET(iParam1, 19))
		num = num - 0.33f;

	if (flag)
		num = -num;

	if (!IS_BIT_SET(iParam1, 1))
	{
		if (IS_BIT_SET(iParam1, 6))
		{
			num6 = 0f;
		
			if (IS_BIT_SET(iParam1, 8))
				num6 = num6 + 0.5f;
		
			if (IS_BIT_SET(iParam1, 9))
				num6 = num6 + 0.25f;
		
			if (IS_BIT_SET(iParam1, 10))
				num6 = num6 + 0.125f;
		
			if (num5 < num6)
			{
				num7 = num5 / num6;
			
				if (IS_BIT_SET(iParam1, 7))
				{
					num7 = 1f - num7;
					num7 = num7 * num7;
					num7 = 1f - num7;
				}
			
				num = num * num7;
			}
		}
	
		if (IS_BIT_SET(iParam1, 11))
		{
			num8 = 0f;
		
			if (IS_BIT_SET(iParam1, 13))
				num8 = num8 + 0.5f;
		
			if (IS_BIT_SET(iParam1, 14))
				num8 = num8 + 0.25f;
		
			if (IS_BIT_SET(iParam1, 15))
				num8 = num8 + 0.125f;
		
			num9 = 1f - num8;
		
			if (num5 > num9)
			{
				num10 = (num5 - num9) / num8;
			
				if (IS_BIT_SET(iParam1, 12))
					num10 = num10 * num10;
			
				num = num * (1f - num10);
			}
		}
	}

	num = 1f + num;
	return num;
}

BOOL func_10(int iParam0) // Position - 0xA95 (2709)
{
	return Global_114344.f_9089.f_330[iParam0 /*6*/];
}

void func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAAB (2731)
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;
	int num4;
	int num5;

	num = func_25(*uParam0);
	i = func_24(*uParam0);
	j = func_23(*uParam0);
	k = func_22(*uParam0);
	l = func_21(*uParam0);
	m = func_20(*uParam0);

	if (iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num5)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
		num3 = num;
	
		if (num2 < 0)
		{
			num2 = 11;
			num3 = num3 - 1;
		}
	
		num4 = num2;
		num5 = func_19(num4, num3);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_12(uParam0, m, l, k, j, i, num);
	return;
}

void func_12(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xC00 (3072)
{
	func_18(uParam0, iParam1);
	func_17(uParam0, iParam2);
	func_16(uParam0, iParam3);
	func_15(uParam0, iParam5);
	func_14(uParam0, iParam4);
	func_13(uParam0, iParam6);
	return;
}

void func_13(var uParam0, int iParam1) // Position - 0xC38 (3128)
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

void func_14(var uParam0, int iParam1) // Position - 0xCBE (3262)
{
	int num;
	int num2;

	num = func_24(*uParam0);
	num2 = func_25(*uParam0);

	if (iParam1 < 1 || iParam1 > func_19(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_15(var uParam0, int iParam1) // Position - 0xD0F (3343)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_16(var uParam0, int iParam1) // Position - 0xD42 (3394)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_17(var uParam0, int iParam1) // Position - 0xD7C (3452)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0xDB7 (3511)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_19(int iParam0, int iParam1) // Position - 0xDF3 (3571)
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

int func_20(int iParam0) // Position - 0xE95 (3733)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_21(int iParam0) // Position - 0xEA8 (3752)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_22(int iParam0) // Position - 0xEBB (3771)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_23(int iParam0) // Position - 0xECE (3790)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_24(int iParam0) // Position - 0xEE0 (3808)
{
	return iParam0 & 15;
}

int func_25(int iParam0) // Position - 0xEED (3821)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_26(BOOL bParam0, var uParam1, var uParam2) // Position - 0xF0F (3855)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_27() // Position - 0xF26 (3878)
{
	int i;

	if (Global_114344.f_20568.f_442 < 1)
		return;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!IS_BIT_SET(Global_114344.f_20568.f_461[i], 1))
		{
			if (Global_114344.f_20568.f_452[i] > 0)
			{
				Global_114344.f_20568.f_452[i] = Global_114344.f_20568.f_452[i] - 1;
			
				if (Global_114344.f_20568.f_452[i] < 1)
				{
					Global_114344.f_20568.f_452[i] = 0;
					Global_114344.f_20568.f_442 = Global_114344.f_20568.f_442 - 1;
				}
			}
		}
	}

	return;
}

void func_28(BOOL bParam0) // Position - 0xFCD (4045)
{
	int i;

	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		func_29(i, bParam0);
		BUILTIN::WAIT(0);
	
		if (!bParam0)
			func_68();
	}

	return;
}

void func_29(int iParam0, BOOL bParam1) // Position - 0x1002 (4098)
{
	float num;
	float num2;
	int i;

	if (Global_56805[iParam0 /*36*/].f_8)
		return;

	num = Global_56805[iParam0 /*36*/].f_9;

	if (!bParam1)
		num = func_6(iParam0);

	if (num == 0f)
		return;

	Global_56805[iParam0 /*36*/].f_14[Global_56805[iParam0 /*36*/].f_13] = num;

	if (num > Global_56805[iParam0 /*36*/].f_31)
		Global_56805[iParam0 /*36*/].f_31 = num;

	if (num < Global_56805[iParam0 /*36*/].f_32)
		Global_56805[iParam0 /*36*/].f_32 = num;

	Global_56805[iParam0 /*36*/].f_13 = Global_56805[iParam0 /*36*/].f_13 + 1;

	if (Global_56805[iParam0 /*36*/].f_13 >= 16)
		Global_56805[iParam0 /*36*/].f_13 = 0;

	num2 = 0f;

	for (i = 0; i < 16; i = i + 1)
	{
		num2 = num2 + Global_56805[iParam0 /*36*/].f_14[i];
	}

	num2 = num2 / BUILTIN::TO_FLOAT(16);
	Global_56805[iParam0 /*36*/].f_33 = num - num2;
	Global_56805[iParam0 /*36*/].f_34 = (Global_56805[iParam0 /*36*/].f_33 / num2) * 100f;
	return;
}

BOOL func_30() // Position - 0x110E (4366)
{
	int num;

	if (iLocal_18 == -15)
	{
		iLocal_18 = func_37();
		num = func_22(iLocal_18);
	
		if (num == 24)
			num = 0;
	
		if (func_36(num, 0, 8))
		{
			func_16(&iLocal_18, 8);
		}
		else if (func_36(num, 8, 16))
		{
			func_16(&iLocal_18, 16);
		}
		else if (func_36(num, 16, 24))
		{
			func_16(&iLocal_18, 0);
			func_35(&iLocal_18, 0, 0, 0, 1, 0, 0);
		}
	
		func_17(&iLocal_18, 0);
		func_18(&iLocal_18, 0);
		iLocal_19 = iLocal_18;
		return false;
	}

	if (func_34(iLocal_18))
	{
		if (func_31(&iLocal_18, true, 8))
			return false;
	
		func_35(&iLocal_18, 0, 480, 0, 0, 0, 0);
		return true;
	}

	return false;
}

BOOL func_31(var uParam0, BOOL bParam1, int iParam2) // Position - 0x11C8 (4552)
{
	int num;
	int num2;
	int num3;
	int i;

	if (func_33(Global_1574631))
	{
		if (bParam1)
		{
			num = func_37();
			num2 = func_22(Global_1574631);
			num3 = func_21(Global_1574631);
			func_16(&num, num2);
			func_17(&num, num3);
			func_18(&num, 0);
		
			if (func_32(func_37(), num))
				func_35(&num, 0, 0, 0, 1, 0, 0);
		
			for (i = 0; func_32(num, *uParam0) && i < 24; i = i + iParam2)
			{
				func_35(uParam0, 0, 0, iParam2, 0, 0, 0);
			}
		}
	
		return true;
	}

	return false;
}

BOOL func_32(int iParam0, int iParam1) // Position - 0x125F (4703)
{
	int num;
	int num2;

	if (!func_33(iParam1) || !func_33(iParam0))
		return 1;

	num = func_25(iParam0);
	num2 = func_25(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_24(iParam0);
	num2 = func_24(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_23(iParam0);
	num2 = func_23(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_22(iParam0);
	num2 = func_22(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_21(iParam0);
	num2 = func_21(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_20(iParam0);
	num2 = func_20(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_33(int iParam0) // Position - 0x136B (4971)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_20(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_21(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_22(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_25(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_24(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_23(iParam0);

	if (num6 < 1 || num6 > func_19(num5, num4))
		return false;

	return true;
}

BOOL func_34(int iParam0) // Position - 0x1447 (5191)
{
	return func_32(func_37(), iParam0);
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1459 (5209)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_25(*uParam0);
	i = func_24(*uParam0);
	num2 = func_23(*uParam0);
	j = func_22(*uParam0);
	k = func_21(*uParam0);
	l = func_20(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_19(i, num); num2 > m; m = func_19(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_12(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_36(int iParam0, int iParam1, int iParam2) // Position - 0x15DB (5595)
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

int func_37() // Position - 0x1684 (5764)
{
	int unk;

	func_18(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_17(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_16(&unk, CLOCK::GET_CLOCK_HOURS());
	func_14(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_15(&unk, CLOCK::GET_CLOCK_MONTH());
	func_13(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_38() // Position - 0x16CA (5834)
{
	BUILTIN::WAIT(0);
	func_68();
	return;
}

void func_39() // Position - 0x16DB (5851)
{
	int playerRadioStationIndex;

	playerRadioStationIndex = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();

	if (iLocal_24 != playerRadioStationIndex)
	{
		if (iLocal_23 > 48)
		{
			switch (func_40(iLocal_24))
			{
				case 1:
					func_2(85, 1);
					break;
			
				case 2:
					func_2(84, 1);
					break;
			
				case 3:
					func_2(86, 1);
					break;
			
				case 4:
					func_2(87, 1);
					break;
			}
		}
	
		iLocal_23 = 0;
		iLocal_24 = playerRadioStationIndex;
	}

	switch (func_40(playerRadioStationIndex))
	{
		case 1:
			func_2(77, 1);
			break;
	
		case 2:
			func_2(76, 1);
			break;
	
		case 3:
			func_2(79, 1);
			break;
	
		case 4:
			func_2(80, 1);
			break;
	
		case 0:
			break;
	}

	func_2(78, 1);
	iLocal_23 = iLocal_23 + 1;
	return;
}

int func_40(int iParam0) // Position - 0x17AA (6058)
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

void func_41() // Position - 0x1836 (6198)
{
	int i;
	int outValue;
	float outValue2;
	int num;
	int num2;
	float num3;
	int num4;
	float num5;
	float num6;
	float num7;

	func_68();

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_60248[i /*7*/])
		{
			if (Global_60248[i /*7*/].f_2)
			{
				outValue = 0;
			
				if (!Global_60248[i /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_60248[i /*7*/].f_3, &outValue, -1);
				}
				else
				{
					outValue2 = 0f;
					STATS::STAT_GET_FLOAT(Global_60248[i /*7*/].f_3, &outValue2, -1);
					num = BUILTIN::FLOOR(outValue2);
				
					if (Global_60248[i /*7*/].f_5 < num)
						outValue = num;
					else
						outValue = Global_60248[i /*7*/].f_5;
				}
			
				Global_60248[i /*7*/].f_6 = outValue - Global_60248[i /*7*/].f_5;
			}
		}
	
		if (i % 20 == 0)
		{
			BUILTIN::WAIT(0);
			func_68();
		}
	}

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_56805[i /*36*/].f_8)
			if (!(Global_56805[i /*36*/].f_10 == 0f))
				Global_56805[i /*36*/].f_11 = Global_56805[i /*36*/].f_10;
	
		if (i % 40 == 0)
		{
			BUILTIN::WAIT(0);
			func_68();
		}
	}

	num2 = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_56805[i /*36*/].f_8)
		{
			num3 = 0f;
		
			if (Global_56805[i /*36*/].f_10 != 0f)
				num3 = num3 + ((0.02f * Global_56805[i /*36*/].f_9 * Global_56805[i /*36*/].f_10) - Global_56805[i /*36*/].f_9);
		
			num3 = num3 + (MISC::GET_RANDOM_FLOAT_IN_RANGE(-Global_59960[num2 /*7*/].f_6, Global_59960[num2 /*7*/].f_6) * 0.1f * Global_56805[i /*36*/].f_9);
			Global_59960[num2 /*7*/] = Global_59960[num2 /*7*/] * 0.995f;
		
			if (num3 < 0f)
				num3 = num3 * Global_59960[num2 /*7*/].f_2;
			else if (num3 > 0f)
				num3 = num3 * Global_59960[num2 /*7*/].f_1;
		
			num3 = func_46(num3, -Global_59960[num2 /*7*/].f_5, Global_59960[num2 /*7*/].f_5);
			num4 = 61;
		
			if (i == num4 && func_45(44) && !func_45(64) && num3 > 0f)
			{
				Global_56805[i /*36*/].f_9 = Global_56805[i /*36*/].f_9 - num3;
			}
			else
			{
				if (num3 > 0f)
				{
					num5 = func_43(i);
					num3 = num3 * num5;
				}
			
				Global_56805[i /*36*/].f_9 = Global_56805[i /*36*/].f_9 + num3;
			}
		
			if (Global_56805[i /*36*/].f_9 > Global_59960[num2 /*7*/].f_3)
			{
				num6 = Global_56805[i /*36*/].f_9 - Global_59960[num2 /*7*/].f_3;
				num6 = num6 * 0.5f;
				Global_56805[i /*36*/].f_9 = Global_56805[i /*36*/].f_9 - num6;
			}
			else if (Global_56805[i /*36*/].f_9 < Global_59960[num2 /*7*/].f_4)
			{
				num7 = Global_59960[num2 /*7*/].f_4 - Global_56805[i /*36*/].f_9;
				num7 = num7 * 0.5f;
				Global_56805[i /*36*/].f_9 = Global_56805[i /*36*/].f_9 + num7;
			}
		
			Global_59960[num2 /*7*/] = Global_59960[num2 /*7*/] - (((num3 * 0.66f) + (Global_59960[num2 /*7*/] * 0.33f)) * 0.02f);
		
			if (!(Global_56805[i /*36*/].f_9 > 0f))
			{
				Global_56805[i /*36*/].f_9 = -1f * Global_56805[i /*36*/].f_9;
				Global_56805[i /*36*/].f_9 = Global_56805[i /*36*/].f_9 + 0.02f;
			}
		}
	
		if (i % 20 == 0)
		{
			BUILTIN::WAIT(0);
			func_68();
		}
	}

	func_42();
	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_60248[i /*7*/])
			if (Global_60248[i /*7*/].f_2)
				Global_60248[i /*7*/].f_5 = Global_60248[i /*7*/].f_5 + Global_60248[i /*7*/].f_6;
	}

	return;
}

void func_42() // Position - 0x1BF5 (7157)
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_56805[i /*36*/].f_8)
		{
			if (num < 42)
			{
				Global_114344.f_20568.f_103[num] = Global_56805[i /*36*/].f_9;
			
				if (Global_56805[i /*36*/].f_31 > Global_114344.f_20568.f_146[num])
					Global_114344.f_20568.f_146[num] = Global_56805[i /*36*/].f_31;
			
				if (Global_114344.f_20568.f_189[num] == 0f)
					Global_114344.f_20568.f_189[num] = Global_56805[i /*36*/].f_32;
				else if (Global_56805[i /*36*/].f_32 < Global_114344.f_20568.f_189[num])
					Global_114344.f_20568.f_189[num] = Global_56805[i /*36*/].f_32;
			
				num = num + 1;
			}
		}
	}

	return;
}

float func_43(int iParam0) // Position - 0x1CD1 (7377)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	float value;
	int i;
	int num6;
	int num7;
	int num8;
	float num9;
	float num10;

	if (Global_56805[iParam0 /*36*/].f_8)
		return 1f;

	num = func_8(0, iParam0);
	num2 = func_8(1, iParam0);
	num3 = func_8(2, iParam0);

	if (num + num2 + num3 < 1)
		return 1f;

	num4 = 1000000000;
	num5 = Global_61680[0] + Global_61680[1] + Global_61680[2];

	if (Global_61680[0] > num4)
		return 0f;

	if (Global_61680[1] > num4)
		return 0f;

	if (Global_61680[2] > num4)
		return 0f;

	value = 0f;

	for (i = 0; i < 10; i = i + 1)
	{
		num6 = func_8(0, i);
	
		if (num6 > 0)
			value = value + (func_6(func_44(0, i)) * (float)num6);
	
		if (func_8(1, i) > 0)
			value = value + (func_6(func_44(1, i)) * (float)num6);
	
		if (func_8(2, i) > 0)
			value = value + (func_6(func_44(2, i)) * (float)num6);
	}

	num7 = BUILTIN::FLOOR(value) + num5;
	num8 = 700000000;

	if (num7 > num4)
		return 0f;

	if (num7 < num8)
		return 1f;

	num9 = BUILTIN::TO_FLOAT(num7 - num8);
	num10 = BUILTIN::TO_FLOAT(num4 - num8);

	if (!(num10 > 0f))
		return 1f;

	return 1f - (num9 / num10);
}

int func_44(int iParam0, int iParam1) // Position - 0x1E26 (7718)
{
	if (iParam1 < 0 || iParam1 > 9)
		return 31;

	switch (iParam0)
	{
		case 0:
			return Global_114344.f_20568[iParam1];
	
		case 1:
			return Global_114344.f_20568.f_33[iParam1];
	
		case 2:
			return Global_114344.f_20568.f_66[iParam1];
	
		default:
		
	}

	return 31;
}

BOOL func_45(int iParam0) // Position - 0x1E8E (7822)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114344.f_9089.f_330[iParam0 /*6*/];
}

float func_46(float fParam0, float fParam1, float fParam2) // Position - 0x1EBA (7866)
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_47() // Position - 0x1EE1 (7905)
{
	int playerWantedLevel;
	Ped playerPed;
	Vehicle vehiclePedIsIn;
	Hash entityModel;
	Hash selectedPedWeapon;

	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	
		if (playerWantedLevel == 0)
			func_2(75, 1);
	
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			if (vehiclePedIsIn != 0)
			{
				if (func_58(vehiclePedIsIn))
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
					func_56(entityModel);
				}
			}
		}
	
		BUILTIN::WAIT(0);
	
		if (!ENTITY::IS_ENTITY_DEAD(playerPed, false))
		{
			selectedPedWeapon = WEAPON::GET_SELECTED_PED_WEAPON(playerPed);
			func_54(selectedPedWeapon);
		
			switch (selectedPedWeapon)
			{
				case joaat("WEAPON_MOLOTOV"):
				case joaat("WEAPON_PETROLCAN"):
					switch (_GET_CURRENT_PLAYER_CHARACTER())
					{
						case CHAR_MICHAEL:
							func_2(147, 1);
							break;
					
						case CHAR_FRANKLIN:
							func_2(148, 1);
							break;
					
						case CHAR_TREVOR:
							func_2(149, 1);
							break;
					}
					break;
			}
		}
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1FB3 (8115)
{
	func_49();
	return Global_114344.f_2367.f_539.f_4321;
}

void func_49() // Position - 0x1FCC (8140)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114344.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_50(character) && !func_79(14) || Global_113292)
			{
				if (Global_114344.f_2367.f_539.f_4321 != character && func_50(Global_114344.f_2367.f_539.f_4321))
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

BOOL func_50(eCharacter echParam0) // Position - 0x20C9 (8393)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x20D5 (8405)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2112 (8466)
{
	if (func_50(character))
		return func_53(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_53(eCharacter echParam0) // Position - 0x2137 (8503)
{
	return Global_2241[echParam0 /*29*/];
}

void func_54(Hash hParam0) // Position - 0x2146 (8518)
{
	int num;

	num = func_55(hParam0);

	switch (num)
	{
		case 0:
			func_2(51, 1);
			break;
	
		case 1:
			func_2(52, 1);
			break;
	
		case 2:
			func_2(53, 1);
			break;
	}

	return;
}

int func_55(Hash hParam0) // Position - 0x218D (8589)
{
	switch (hParam0)
	{
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_APPISTOL"):
			return 0;
	
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		default:
			return 3;
	}

	return 3;
}

void func_56(Hash hParam0) // Position - 0x2249 (8777)
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(39, 1);
			break;
	
		case 1:
			func_2(35, 1);
			break;
	
		case 2:
			func_2(32, 1);
			break;
	
		case 3:
			func_2(38, 1);
			break;
	
		case 4:
			func_2(31, 1);
			break;
	
		case 5:
			func_2(33, 1);
			break;
	
		case 6:
			func_2(36, 1);
			break;
	
		case 7:
			func_2(37, 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			func_2(34, 1);
			break;
	}

	return;
}

int func_57(Hash hParam0) // Position - 0x231D (8989)
{
	switch (hParam0)
	{
		case joaat("benson"):
		case joaat("bobcatxl"):
		case joaat("bullet"):
		case joaat("dominator"):
		case joaat("minivan"):
		case joaat("peyote"):
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("stanier"):
			return 3;
	
		case joaat("boxville"):
		case joaat("camper"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("tiptruck"):
			return 2;
	
		case joaat("fusilade"):
			return 6;
	
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
			return 1;
	
		case joaat("bfinjection"):
		case joaat("dune"):
		case joaat("surfer"):
		case joaat("surfer2"):
			return 4;
	
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("bulldozer"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("forklift"):
		case joaat("mixer"):
		case joaat("mixer2"):
			return 0;
	
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
			return 7;
	}

	return 8;
}

BOOL func_58(Vehicle veParam0) // Position - 0x246D (9325)
{
	var unk;

	if (Global_79744)
		return VEHICLE::IS_VEHICLE_STOLEN(veParam0);

	if (func_61(veParam0, &unk))
		return false;

	if (func_60(veParam0))
		return false;

	if (func_59(veParam0))
		return false;

	return true;
}

BOOL func_59(Vehicle veParam0) // Position - 0x24AF (9391)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99229[i]))
			if (Global_99229[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_60(Vehicle veParam0) // Position - 0x24EA (9450)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_99199[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_99199[i], false))
				if (Global_99199[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_99199[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_61(Vehicle veParam0, var uParam1) // Position - 0x2566 (9574)
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (Global_78534.f_484[i] == veParam0)
		{
			if (func_62(&Global_78534.f_555[0 /*21*/], i))
			{
				if (IS_BIT_SET(Global_78534.f_555[0 /*21*/].f_9, 10) && Global_78534.f_555[0 /*21*/].f_4 == ENTITY::GET_ENTITY_MODEL(veParam0))
				{
					*uParam1 = i;
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_62(var uParam0, int iParam1) // Position - 0x25D8 (9688)
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_65(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_114344.f_32754.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") || uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_63(Global_114344.f_32754.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_114344.f_32754.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_114344.f_32754.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_114344.f_32754.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_63(Global_114344.f_2367.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114344.f_2367.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114344.f_2367.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_63(Global_114344.f_2367.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114344.f_2367.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114344.f_2367.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

BOOL func_63(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x3CC5 (15557)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x3D0C (15628)
{
	int profileSetting;

	if (Global_153224 == 2)
		return true;
	else if (Global_153224 == 3)
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

int func_65(eCharacter echParam0, int iParam1) // Position - 0x3DC4 (15812)
{
	int num;

	if (func_50(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_66(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_66(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x3E06 (15878)
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_114344.f_9089.f_99.f_58[128] && !Global_114344.f_9089.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114344.f_9089.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_114344.f_9089.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_67() // Position - 0x405E (16478)
{
	if (iLocal_19 == -15)
		return false;

	if (func_34(iLocal_19))
	{
		if (func_31(&iLocal_19, true, 8))
			return false;
	
		func_35(&iLocal_19, 0, iLocal_20, 0, 0, 0, 0);
		return true;
	}

	return false;
}

void func_68() // Position - 0x409D (16541)
{
	int i;
	Entity eventData;
	eEventType eventAtIndex;
	Ped pedIndexFromEntityIndex;
	BOOL flag;

	if (Global_61685)
	{
		Global_61685 = false;
	
		switch (func_57(Global_61686))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
		
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
		}
	}

	i = 0;
	flag = true;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i);
	
		switch (eventAtIndex)
		{
			case EVENT_ENTITY_DESTROYED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
				func_78(eventData);
				flag = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eventData))
							flag = false;
					else
						flag = false;
			
				if (flag)
				{
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
					{
						if (ENTITY::IS_ENTITY_A_PED(eventData))
						{
							func_74(eventData);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
						{
							if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(eventData)))
								func_2(3, 1);
						
							func_72(ENTITY::GET_ENTITY_MODEL(eventData));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(eventData))
						{
							switch (ENTITY::GET_ENTITY_MODEL(eventData))
							{
								case joaat("prop_news_disp_01a"):
								case joaat("prop_news_disp_02a"):
								case joaat("prop_news_disp_02a_s"):
								case joaat("prop_news_disp_02b"):
								case joaat("prop_news_disp_02c"):
								case joaat("prop_news_disp_02d"):
								case joaat("prop_news_disp_02e"):
								case joaat("prop_news_disp_03a"):
								case joaat("prop_news_disp_03c"):
								case joaat("prop_news_disp_05a"):
								case -1389481633:
								case 1301918910:
								case joaat("prop_news_disp_06a"):
								case -1406224059:
									func_2(68, 1);
									break;
							
								case -959573699:
								case joaat("prop_postbox_01a"):
								case 1147034058:
								case 1444740423:
								case joaat("prop_postbox_ss_01a"):
									func_2(128, 1);
									break;
							}
						}
					}
				}
				break;
		
			case EVENT_ENTITY_DAMAGED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
				func_78(eventData);
				flag = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eventData))
							flag = false;
					else
						flag = false;
			
				if (flag)
				{
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
					{
						if (ENTITY::IS_ENTITY_A_PED(eventData))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
						
							if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL && pedIndexFromEntityIndex != PLAYER::PLAYER_PED_ID())
								if (ENTITY::IS_ENTITY_DEAD(eventData, false) || (float)ENTITY::GET_ENTITY_HEALTH(eventData) < 0.5f * (float)PED::GET_PED_MAX_HEALTH(pedIndexFromEntityIndex))
									if (ENTITY::IS_ENTITY_A_PED(eventData) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData)))
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											func_70(3);
						
							func_2(111, 1);
							func_2(124, 1);
						
							if (FIRE::IS_ENTITY_ON_FIRE(eventData))
								func_2(130, 1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
						{
							func_69(ENTITY::GET_ENTITY_MODEL(eventData));
							func_2(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(eventData))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
	}

	return;
}

void func_69(Hash hParam0) // Position - 0x435E (17246)
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(47, 1);
			break;
	
		case 1:
			func_2(43, 1);
			break;
	
		case 2:
			func_2(41, 1);
			break;
	
		case 3:
			func_2(46, 1);
			break;
	
		case 4:
			func_2(40, 1);
			break;
	
		case 5:
			func_2(42, 1);
			break;
	
		case 6:
			func_2(44, 1);
			break;
	
		case 7:
			func_2(45, 1);
			break;
	}

	return;
}

void func_70(int iParam0) // Position - 0x43F1 (17393)
{
	switch (iParam0)
	{
		case 0:
			func_71(&Global_98336, 1);
			break;
	
		case 1:
			func_71(&Global_98338, 3);
			break;
	
		case 2:
			func_71(&Global_98342, 1);
			break;
	
		case 3:
			func_71(&Global_98344, 1);
			break;
	
		case 4:
			func_71(&Global_98346, 1);
			break;
	
		case 5:
			func_71(&Global_98348, 1);
			break;
	
		case 6:
			func_71(&Global_98350, 1);
			break;
	
		case 7:
			func_71(&Global_98352, 2);
			break;
	
		case 8:
			func_71(&Global_98355, 1);
			break;
	
		case 9:
			func_71(&Global_98357, 1);
			break;
	}

	return;
}

void func_71(var uParam0, int iParam1) // Position - 0x44B4 (17588)
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (i < iParam1 - 1)
			uParam0->[i] = uParam0->[i + 1];
		else
			uParam0->[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_72(Hash hParam0) // Position - 0x44F3 (17651)
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(11, 1);
			break;
	
		case 1:
			func_2(6, 1);
			break;
	
		case 2:
			func_2(1, 1);
			break;
	
		case 3:
			func_2(10, 1);
			break;
	
		case 4:
			func_2(0, 1);
			break;
	
		case 5:
			func_2(2, 1);
			break;
	
		case 6:
			func_2(8, 1);
			break;
	
		case 7:
			func_2(9, 1);
			break;
	}

	if (hParam0 == joaat("taxi"))
		func_2(100, 1);

	func_2(111, 1);
	return;
}

BOOL func_73(Vehicle veParam0) // Position - 0x459A (17818)
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 3) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 4) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 6) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 11) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 12) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 13) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 14) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 15) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 16) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 23) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 24) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 1) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 2) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 8) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 9) != -1)
			return true;
	
		if (VEHICLE::IS_TOGGLE_MOD_ON(veParam0, 18))
			return true;
	
		if (VEHICLE::IS_TOGGLE_MOD_ON(veParam0, 22))
			return true;
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			return true;
	}

	return false;
}

void func_74(Entity eParam0) // Position - 0x4701 (18177)
{
	Ped pedIndexFromEntityIndex;
	Entity pedSourceOfDeath;
	Hash entityModel;
	Hash pedCauseOfDeath;
	Hash entityModel2;
	int gameTimer;
	int num;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(eParam0))
	{
		pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedIndexFromEntityIndex);
	
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedSourceOfDeath))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(pedSourceOfDeath);
			func_77(entityModel, PED::GET_PED_TYPE(pedIndexFromEntityIndex));
		}
		else
		{
			pedCauseOfDeath = PED::GET_PED_CAUSE_OF_DEATH(pedIndexFromEntityIndex);
			entityModel2 = ENTITY::GET_ENTITY_MODEL(eParam0);
			func_76(pedCauseOfDeath, PED::GET_PED_TYPE(pedIndexFromEntityIndex), entityModel2);
		}
	}

	if (FIRE::IS_ENTITY_ON_FIRE(eParam0))
		func_2(129, 1);

	if (!func_75(eParam0))
		return;

	func_2(111, 1);
	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - iLocal_21;
	iLocal_21 = gameTimer;

	if (num > 2000)
	{
		iLocal_22 = 0;
	}
	else
	{
		iLocal_22 = iLocal_22 + 1;
	
		if (iLocal_22 == 3)
			func_2(127, 1);
	}

	return;
}

BOOL func_75(Entity eParam0) // Position - 0x47B6 (18358)
{
	Ped pedSourceOfDeath;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
		return false;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0));

	if (func_3(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == pedSourceOfDeath)
		return true;

	return false;
}

void func_76(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x47EE (18414)
{
	int num;

	num = func_55(hParam0);

	if (num == 0)
		func_2(108, 1);

	switch (iParam1)
	{
		case 4:
		case 5:
			switch (num)
			{
				case 0:
					func_2(63, 1);
					break;
			
				case 1:
					func_2(64, 1);
					break;
			
				case 2:
					func_2(65, 1);
					break;
			}
			break;
	
		case 22:
			switch (num)
			{
				case 0:
					func_2(57, 1);
					break;
			
				case 1:
					func_2(58, 1);
					break;
			
				case 2:
					func_2(59, 1);
					break;
			}
			break;
	
		case 27:
		case 6:
			switch (num)
			{
				case 0:
					func_2(54, 1);
					break;
			
				case 1:
					func_2(55, 1);
					break;
			
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}

	switch (hParam2)
	{
		case joaat("S_F_Y_Hooker_01"):
			func_2(121, 1);
			break;
	
		case joaat("A_F_M_BodyBuild_01"):
		case joaat("A_M_M_Beach_02"):
		case joaat("A_M_Y_MusclBeac_02"):
		case joaat("A_M_Y_Runner_01"):
		case joaat("A_M_Y_RoadCyc_01"):
		case joaat("A_M_Y_Skater_01"):
		case joaat("A_M_Y_Skater_02"):
		case joaat("A_M_Y_Sunbathe_01"):
		case joaat("A_M_Y_Surfer_01"):
		case joaat("A_M_Y_Yoga_01"):
		case joaat("S_M_Y_BayWatch_01"):
		case joaat("S_M_Y_Marine_02"):
			func_2(69, 1);
			break;
	
		case joaat("S_M_Y_Dealer_01"):
			func_2(125, 1);
			break;
	}

	return;
}

void func_77(Hash hParam0, int iParam1) // Position - 0x4957 (18775)
{
	func_2(48, 1);

	switch (hParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(4, 1);
			break;
	
		case joaat("tanker"):
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
	
		case joaat("packer"):
			func_2(7, 1);
			break;
	
		case joaat("phantom"):
			func_2(5, 1);
			break;
	}

	switch (func_57(hParam0))
	{
		case 0:
			func_2(109, 1);
			break;
	
		case 1:
			func_2(104, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
	
		case 2:
			func_2(102, 1);
			break;
	
		case 3:
			func_2(107, 1);
			break;
	
		case 4:
			func_2(101, 1);
			break;
	
		case 5:
			func_2(103, 1);
			break;
	
		case 6:
			func_2(105, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
	
		case 7:
			func_2(106, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}

	return;
}

void func_78(Entity eParam0) // Position - 0x4A9E (19102)
{
	ENTITY::DOES_ENTITY_EXIST(eParam0);
	ENTITY::IS_ENTITY_DEAD(eParam0, false);
	return;
}

BOOL func_79(int iParam0) // Position - 0x4AB5 (19125)
{
	return Global_44375 == iParam0;
}

void func_80() // Position - 0x4AC3 (19139)
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		veLocal_31 = 0;
		return;
	}

	if (_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		veLocal_31 = 0;
		return;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false);
	
		if (veLocal_31 != vehiclePedIsIn)
		{
			uLocal_25 = { uLocal_28 };
			veLocal_31 = vehiclePedIsIn;
		}
	
		if (vehiclePedIsIn == 0)
			return;
	
		uLocal_25 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
	
		if (veLocal_31 == 0)
		{
			uLocal_28 = { uLocal_25 };
			veLocal_31 = vehiclePedIsIn;
			return;
		}
	
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
	
		if (func_81(entityModel, MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_25, uLocal_28, false)))
			uLocal_28 = { uLocal_25 };
	}

	return;
}

BOOL func_81(Hash hParam0, float fParam1) // Position - 0x4B70 (19312)
{
	if (fParam1 < 10f)
		return false;

	switch (func_57(hParam0))
	{
		case 0:
			func_2(28, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case 1:
			func_2(24, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case 2:
			func_2(21, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case 3:
			func_2(27, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case 4:
			func_2(20, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case 5:
			func_2(22, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case 6:
			func_2(25, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case 7:
			func_2(26, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	}

	switch (hParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(23, BUILTIN::FLOOR(fParam1 / 10f));
			break;
	
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					func_2(141, BUILTIN::FLOOR(fParam1 / 10f));
					break;
			
				case CHAR_FRANKLIN:
					func_2(142, BUILTIN::FLOOR(fParam1 / 10f));
					break;
			
				case CHAR_TREVOR:
					func_2(143, BUILTIN::FLOOR(fParam1 / 10f));
					break;
			}
			break;
	}

	return true;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0x4D14 (19732)
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4D61 (19809)
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

void func_84() // Position - 0x4DC1 (19905)
{
	func_85(0);
	func_85(1);
	func_85(2);
	return;
}

void func_85(int iParam0) // Position - 0x4DD8 (19928)
{
	int i;
	int num;
	int value;

	for (i = 0; i < 80; i = i + 1)
	{
		if (Global_56805[i /*36*/].f_8)
		{
			num = Global_56805[i /*36*/].f_35;
		
			if (num > -1)
			{
				value = func_86(iParam0, i);
			
				if (Global_56805[i /*36*/].f_9 <= 0f)
					value = 0;
			
				STATS::STAT_SET_INT(Global_59686[num /*7*/].f_3[iParam0], value, true);
			}
		}
	}

	return;
}

int func_86(int iParam0, int iParam1) // Position - 0x4E40 (20032)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_114344.f_20568[i] == iParam1)
					if (Global_114344.f_20568.f_22[i] > 0)
						return Global_114344.f_20568.f_22[i];
				break;
		
			case 1:
				if (Global_114344.f_20568.f_33[i] == iParam1)
					if (Global_114344.f_20568.f_55[i] > 0)
						return Global_114344.f_20568.f_55[i];
				break;
		
			case 2:
				if (Global_114344.f_20568.f_66[i] == iParam1)
					if (Global_114344.f_20568.f_88[i] > 0)
						return Global_114344.f_20568.f_88[i];
				break;
		}
	}

	return 0;
}

void func_87() // Position - 0x4F15 (20245)
{
	int i;
	int num;

	num = Global_61967;

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_61970[i /*14*/].f_13 > 0)
		{
			Global_61970[i /*14*/].f_13 = Global_61970[i /*14*/].f_13 - 1;
		}
		else if (func_89(i))
		{
			func_88(&Global_61970[i /*14*/], -1);
			Global_61970[i /*14*/].f_13 = 60000;
		}
	
		BUILTIN::WAIT(0);
		func_68();
	}

	return;
}

BOOL func_88(int iParam0, int iParam1) // Position - 0x4F85 (20357)
{
	int num;
	int i;
	float num2;
	int num3;

	num = *iParam0;

	if (iParam1 != -1)
		num = iParam1;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_64352[num /*34*/][i /*11*/].f_9 == iParam0->f_9)
		{
			iParam0->f_10 = iParam0->f_10 + 0.05f;
			return false;
		}
	}

	i = 0;
	num2 = 0f;
	num3 = -1;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_64352[num /*34*/][i /*11*/].f_10 > num2)
		{
			num3 = i;
			num2 = Global_64352[num /*34*/][i /*11*/].f_10;
		}
	}

	if (num3 == -1)
		return false;

	if (iParam0->f_10 <= Global_64352[num /*34*/][num3 /*11*/].f_10)
	{
		iParam0->f_10 = iParam0->f_10 + 1f;
		Global_64352[num /*34*/][num3 /*11*/].f_10 = iParam0->f_10;
		Global_64352[num /*34*/][num3 /*11*/].f_1 = { iParam0->f_1 };
		Global_64352[num /*34*/][num3 /*11*/].f_5 = { iParam0->f_5 };
		Global_64352[num /*34*/][num3 /*11*/].f_9 = iParam0->f_9;
		Global_64352[num /*34*/][num3 /*11*/] = *iParam0;
		return true;
	}

	return false;
}

BOOL func_89(int iParam0) // Position - 0x50A0 (20640)
{
	int num;
	float num2;
	int i;
	int j;
	float num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int k;
	int num8;
	int num9;
	int num10;
	float num11;
	float num12;
	float num13;

	num = Global_61970[iParam0 /*14*/].f_12;
	num2 = Global_56805[num /*36*/].f_9;

	for (i = Global_56805[num /*36*/].f_13; i > 15; i = i - 16)
	{
	}

	for (j = i - 10; j < 0; j = 16 + j)
	{
	}

	num3 = Global_56805[num /*36*/].f_14[j];
	Global_56805[num /*36*/].f_14[Global_56805[num /*36*/].f_13] = func_6(num);
	num4 = 0;
	num5 = 0;
	num6 = 0;
	num7 = j + 1;

	if (num7 == 16)
		num7 = 0;

	k = 0;
	num8 = num7;
	num9 = 0;
	num10 = 0;

	for (k = 0; k < 8; k = k + 1)
	{
		num9 = num8 + 1;
	
		if (num9 == 16)
			num9 = 0;
	
		num10 = num9 + 1;
	
		if (num10 == 16)
			num10 = 0;
	
		if (Global_56805[num /*36*/].f_14[num8] < Global_56805[num /*36*/].f_14[num9])
		{
			num5 = num5 + 1;
			num11 = num11 + (Global_56805[num /*36*/].f_14[num9] - Global_56805[num /*36*/].f_14[num8]);
		}
		else
		{
			num6 = num6 + 1;
			num12 = num12 + (Global_56805[num /*36*/].f_14[num8] - Global_56805[num /*36*/].f_14[num9]);
		}
	
		if (Global_56805[num /*36*/].f_14[num8] < Global_56805[num /*36*/].f_14[num9] && Global_56805[num /*36*/].f_14[num10] < Global_56805[num /*36*/].f_14[num9])
			num4 = num4 + 1;
	
		if (Global_56805[num /*36*/].f_14[num8] > Global_56805[num /*36*/].f_14[num9] && Global_56805[num /*36*/].f_14[num10] > Global_56805[num /*36*/].f_14[num9])
			num4 = num4 + 1;
	
		num8 = num8 + 1;
	
		if (num8 == 16)
			num8 = 0;
	}

	if (num5 < 0)
		num11 = num11 / (float)num5;

	if (num6 > 0)
		num12 = num12 / (float)num6;

	num13 = num2 - num3;

	if (num13 < 0f)
		num13 = num13 * -1f;

	switch (Global_61970[iParam0 /*14*/].f_11)
	{
		case 0:
			if (num5 < 6)
				return false;
		
			if (num11 < num3 * 0.04f)
				return false;
		
			return true;
	
		case 1:
			if (num6 < 6)
				return false;
		
			if (num12 < num3 * 0.04f)
				return false;
		
			return true;
	
		case 2:
			if (num4 < 7)
				return false;
		
			if (num13 > num3 * 0.01f)
				return false;
		
			return true;
	}

	return false;
}

void func_90(BOOL bParam0) // Position - 0x5332 (21298)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/];
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61688[i /*3*/][0] = Global_114344.f_20568[i];
		Global_61688.f_31[i /*3*/][0] = Global_114344.f_20568.f_11[i];
		Global_61688.f_62[i /*3*/][0] = Global_114344.f_20568.f_22[i];
		Global_61688.f_93[i /*3*/][0] = Global_114344.f_20568.f_33[i];
		Global_61688.f_124[i /*3*/][0] = Global_114344.f_20568.f_44[i];
		Global_61688.f_155[i /*3*/][0] = Global_114344.f_20568.f_55[i];
		Global_61688.f_186[i /*3*/][0] = Global_114344.f_20568.f_66[i];
		Global_61688.f_217[i /*3*/][0] = Global_114344.f_20568.f_77[i];
		Global_61688.f_248[i /*3*/][0] = Global_114344.f_20568.f_88[i];
	
		if (!bParam0)
		{
			Global_61688[i /*3*/][1] = Global_114344.f_20568[i];
			Global_61688.f_31[i /*3*/][1] = Global_114344.f_20568.f_11[i];
			Global_61688.f_62[i /*3*/][1] = Global_114344.f_20568.f_22[i];
			Global_61688.f_93[i /*3*/][1] = Global_114344.f_20568.f_33[i];
			Global_61688.f_124[i /*3*/][1] = Global_114344.f_20568.f_44[i];
			Global_61688.f_155[i /*3*/][1] = Global_114344.f_20568.f_55[i];
			Global_61688.f_186[i /*3*/][1] = Global_114344.f_20568.f_66[i];
			Global_61688.f_217[i /*3*/][1] = Global_114344.f_20568.f_77[i];
			Global_61688.f_248[i /*3*/][1] = Global_114344.f_20568.f_88[i];
		}
	}

	return;
}

void func_91() // Position - 0x55B4 (21940)
{
	int num;
	int i;
	float num2;
	int j;
	float num3;
	float num4;
	float num5;
	float randomFloatInRange;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;
	float num13;
	float num14;
	float num15;
	float num16;

	num = 0;
	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (num < 42)
		{
			if (!Global_56805[i /*36*/].f_8)
			{
				if (Global_114344.f_20568.f_103[num] > 0f)
					Global_56805[i /*36*/].f_9 = Global_114344.f_20568.f_103[num];
			
				if (Global_114344.f_20568.f_146[num] > 0f)
					Global_56805[i /*36*/].f_31 = Global_114344.f_20568.f_146[num];
			
				if (Global_114344.f_20568.f_189[num] > 0f)
					Global_56805[i /*36*/].f_32 = Global_114344.f_20568.f_189[num];
			
				num = num + 1;
			}
		
			if (Global_56805[i /*36*/].f_32 > 0f && Global_56805[i /*36*/].f_31 > 0f && Global_56805[i /*36*/].f_9 > 0f)
			{
				num2 = Global_56805[i /*36*/].f_9;
			
				if (num2 > Global_56805[i /*36*/].f_31)
					Global_56805[i /*36*/].f_31 = num2;
			
				if (num2 < Global_56805[i /*36*/].f_32)
					Global_56805[i /*36*/].f_32 = num2;
			
				j = 0;
				num3 = Global_56805[i /*36*/].f_31 - Global_56805[i /*36*/].f_32;
				num4 = 0f;
				num8 = 2.1474836E+09f;
				num9 = -2.1474836E+09f;
			
				for (j = 15; j >= 0; j = j + -1)
				{
					num5 = num3 * MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f) * 0.01f;
					num6 = 1f;
					num7 = 1f;
				
					if (j == 15)
					{
						num10 = (Global_56805[i /*36*/].f_31 - Global_56805[i /*36*/].f_9) / num3;
					
						if (num10 < 0.2f)
							num6 = num10 / 0.2f;
					
						num11 = (Global_56805[i /*36*/].f_9 - Global_56805[i /*36*/].f_32) / num3;
					
						if (num11 < 0.2f)
							num7 = num11 / 0.2f;
					
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-num5 * num7, num5 * num6);
						Global_56805[i /*36*/].f_14[j] = Global_56805[i /*36*/].f_9;
					}
					else
					{
						num12 = (Global_56805[i /*36*/].f_31 - Global_56805[i /*36*/].f_14[j + 1]) / num3;
					
						if (num12 < 0.2f)
							num6 = num12 / 0.2f;
					
						num13 = (Global_56805[i /*36*/].f_14[j + 1] - Global_56805[i /*36*/].f_32) / num3;
					
						if (num13 < 0.2f)
							num7 = num13 / 0.2f;
					
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-num5 * num7, num5 * num6);
						Global_56805[i /*36*/].f_14[j] = Global_56805[i /*36*/].f_14[j + 1] + randomFloatInRange;
					}
				
					num8 = func_93(num8, Global_56805[i /*36*/].f_14[j]);
					num9 = func_92(num9, Global_56805[i /*36*/].f_14[j]);
					num4 = num4 + Global_56805[i /*36*/].f_14[j];
				}
			
				Global_56805[i /*36*/].f_32 = num8;
				Global_56805[i /*36*/].f_31 = num9;
				num4 = num4 / 16f;
				Global_56805[i /*36*/].f_33 = Global_56805[i /*36*/].f_9 - num4;
				Global_56805[i /*36*/].f_34 = (Global_56805[i /*36*/].f_33 / num4) * 100f;
				num14 = func_7(i);
			
				if (num14 != 1f)
				{
					num4 = 0f;
					num15 = num14 - 1f;
				
					for (j = 0; j <= 15; j = j + 1)
					{
						num16 = BUILTIN::TO_FLOAT(j) / 16f;
						Global_56805[i /*36*/].f_14[j] = Global_56805[i /*36*/].f_14[j] * (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (num16 * num15));
					
						if (j == 15)
							Global_56805[i /*36*/].f_14[j] = Global_56805[i /*36*/].f_9 * num14;
					
						num4 = num4 + Global_56805[i /*36*/].f_14[j];
						Global_56805[i /*36*/].f_32 = func_93(Global_56805[i /*36*/].f_32, Global_56805[i /*36*/].f_14[j]);
						Global_56805[i /*36*/].f_31 = func_92(Global_56805[i /*36*/].f_31, Global_56805[i /*36*/].f_14[j]);
					}
				
					num4 = num4 / 16f;
					Global_56805[i /*36*/].f_33 = Global_56805[i /*36*/].f_9 - num4;
					Global_56805[i /*36*/].f_34 = (Global_56805[i /*36*/].f_33 / num4) * 100f;
				}
			}
		}
	}

	return;
}

float func_92(float fParam0, float fParam1) // Position - 0x59F1 (23025)
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

float func_93(float fParam0, float fParam1) // Position - 0x5A08 (23048)
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

void func_94() // Position - 0x5A1F (23071)
{
	int i;
	int j;
	float startRange;
	float endRange;

	if (!Global_114344.f_20568.f_101)
	{
		for (i = 0; i < 80; i = i + 1)
		{
			if (!Global_56805[i /*36*/].f_8)
				Global_56805[i /*36*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
		}
	
		i = 0;
		j = 0;
	
		for (j = 0; j <= 15; j = j + 1)
		{
			func_28(true);
		
			for (i = 0; i < 80; i = i + 1)
			{
				startRange = 0.85f;
				endRange = 1.15f;
			
				if (Global_56805[i /*36*/].f_9 < 5f)
					startRange = 1.1f;
				else if (Global_56805[i /*36*/].f_9 < 10f)
					startRange = 0.95f;
				else if (Global_56805[i /*36*/].f_9 > 285f)
					endRange = 0.97f;
				else if (Global_56805[i /*36*/].f_9 > 270f)
					endRange = 1.05f;
			
				Global_56805[i /*36*/].f_9 = Global_56805[i /*36*/].f_9 * MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange);
				Global_56805[i /*36*/].f_9 = func_93(func_92(MISC::ABSF(Global_56805[i /*36*/].f_9), 3.5f), 290f);
			}
		}
	
		func_42();
		Global_114344.f_20568.f_101 = 1;
	}

	return;
}

void func_95() // Position - 0x5B64 (23396)
{
	int i;
	int j;
	int randomIntInRange;

	Global_61967 = 0;
	Global_61969 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&(Global_64352[i /*34*/][j /*11*/].f_1), "BSNEWS_DEFAULT" /*BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME*/, 16);
			TEXT_LABEL_ASSIGN_STRING(&(Global_64352[i /*34*/][j /*11*/].f_5), "BSNEWS_DEFAULT" /*BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME*/, 16);
		}
	}

	func_96(55, "ECL_P_SR_H" /*World gulping eCola in record volume, stocks up.*/, "ECL_P_SR_C", 0, 0);
	func_96(55, "ECL_P_SF_H" /*Ecola 'sugar water' losing favour among investors.*/, "ECL_P_SF_C", 1, 0);
	func_96(55, "ECL_P_RF_H" /*eCola stocks all over the place, sticky*/, "ECL_P_RF_C", 2, 0);
	func_96(51, "BGR_P_SR_H" /*Burgershot stocks shoot up like cholesterol.*/, "BGR_P_SR_C", 0, 0);
	func_96(51, "BGR_P_SF_H" /*Burgershot junk food stocks down.*/, "BGR_P_SF_C", 1, 0);
	func_96(52, "CLK_P_SR_H" /*Cluckin' Bell stocks up on "Free Range is for Fairies" campaign.*/, "CLK_P_SR_C", 0, 0);
	func_96(52, "CLK_P_SF_H" /*Cluckin' Bell chicken cruelty video brings stocks down.*/, "CLK_P_SF_C", 1, 0);
	func_96(52, "CLK_P_RF_H" /*Investors don't know what to do with Cluckin' Bell fast food stocks.*/, "CLK_P_RF_C", 2, 0);
	func_96(48, "BEN_P_SR_H" /*Bean Machine uses tax loopholes to win big.  Stocks rise.*/, "BEN_P_SR_C", 0, 0);
	func_96(48, "BEN_P_SF_H" /*Fair trade coffee killing Bean Machine profits.  Stocks down.*/, "BEN_P_SF_C", 1, 0);
	func_96(48, "BEN_P_RF_H" /*Coffee giant Bean Machine sees stocks moody, edgy.*/, "BEN_P_RF_C", 2, 0);
	func_96(13, "FLC_P_SR_H" /*Credit card fees rack up huge profits says Fleeca.*/, "FLC_P_SR_C", 0, 0);
	func_96(13, "FLC_P_SF_H" /*Cash is king - under the table deals killing Fleeca stock.*/, "FLC_P_SF_C", 1, 0);
	func_96(13, "FLC_P_RF_H" /*Fleeca stock unsteady as market flails aimlessly.*/, "FLC_P_RF_C", 2, 0);
	func_96(64, "PRO_P_SR_H" /*Prolaps shares up despite Bangladesh factory fire.*/, "PRO_P_SR_C", 0, 0);
	func_96(64, "PRO_P_SF_H" /*Prolaps shares down as America goes more hipster.*/, "PRO_P_SF_C", 1, 0);
	func_96(64, "PRO_P_RF_H" /*Prolaps unsteady after football player rampage.*/, "PRO_P_RF_C", 2, 0);
	func_96(70, "UNI_P_SR_H" /*Vanilla Unicorn Strip Clubs are packed, stocks are up.*/, "UNI_P_SR_C", 0, 0);
	func_96(70, "UNI_P_SF_H" /*Vanilla Unicorn strippers cry as stocks drop.*/, "UNI_P_SF_C", 1, 0);
	func_96(70, "UNI_P_RF_H" /*Vanilla Unicorn Strip club stocks and clientele unpredictable.*/, "UNI_P_RF_C", 2, 0);
	func_96(60, "KRP_P_SR_H" /*Krapea CEO announces new tax avoidance plan.  Stocks up.*/, "KRP_P_SR_C", 0, 0);
	func_96(60, "KRP_P_SF_H" /*Krapea particle board furniture falling out of favour.*/, "KRP_P_SF_C", 1, 0);
	func_96(60, "KRP_P_RF_H" /*Directions confusing for Krapea.*/, "KRP_P_RF_C", 2, 0);
	func_96(56, "FUS_P_SR_H" /*No Strike! FlyUS stocks surge.*/, "FUS_P_SR_C", 0, 0);
	func_96(56, "FUS_P_SF_H" /*Food poisoning on 154 FlyUS flights brings stock down.*/, "FUS_P_SF_C", 1, 0);
	func_96(56, "FUS_P_RF_H" /*FlyUS stock hitting turbulence, bad headline.*/, "FUS_P_RF_C", 2, 0);
	func_96(58, "GOP_P_SR_H" /*60% of shipments contain drugs says Go Postal CEO - stocks rise.*/, "GOP_P_SR_C", 0, 0);
	func_96(58, "GOP_P_SF_H" /*Go Postal going profitless.*/, "GOP_P_SF_C", 1, 0);
	func_96(58, "GOP_P_RF_H" /*Go Postal stocks unsteady as America ships less.*/, "GOP_P_RF_C", 2, 0);
	func_96(53, "BAN_P_SR_H" /*Snotty coffee house Cool Beans stocks surge.*/, "BAN_P_SR_C", 0, 0);
	func_96(53, "BAN_P_SF_H" /*Prices cool off for Cool Beans.*/, "BAN_P_SF_C", 1, 0);
	func_96(53, "BAN_P_RF_H" /*Cool Beans stocks up, then down, then up.*/, "BAN_P_RF_C", 2, 0);
	func_96(62, "MAX_P_SR_H" /*Female insecurity sends Max Renda stocks up.*/, "MAX_P_SR_C", 0, 0);
	func_96(62, "MAX_P_SF_H" /*Max Renda stocks runny.*/, "MAX_P_SF_C", 1, 0);
	func_96(62, "MAX_P_RF_H" /*Max Renda stocks bipolar.*/, "MAX_P_RF_C", 2, 0);
	func_96(57, "GAS_P_SR_H" /*Surgery soars price of Gastro Band stock.*/, "GAS_P_SR_C", 0, 0);
	func_96(57, "GAS_P_SF_H" /*Another Gastro Band stock brings price down.*/, "GAS_P_SF_C", 1, 0);
	func_96(57, "GAS_P_RF_H" /*Gastro Band stock - feast then famine.*/, "GAS_P_RF_C", 2, 0);
	func_96(59, "GRU_P_SR_H" /*GruppeSechs not all it's cracked up to be.*/, "GRU_P_SR_C", 0, 0);
	func_96(59, "GRU_P_SF_H" /*GruppeSechs down after heist.*/, "GRU_P_SF_C", 1, 0);
	func_96(59, "GRU_P_RF_H" /*GruppeSechs unsteady if investors decide whether to join in.*/, "GRU_P_RF_C", 2, 0);
	func_96(44, "PMP_P_SR_H" /*Pump and Run franchise sees stock rise as abs harden.*/, "PMP_P_SR_C", 0, 0);
	func_96(44, "PMP_P_SF_H" /*Americans not going to gym. Prefer binge eating. Pump and Run shares drop.*/, "PMP_P_SF_C", 1, 0);
	func_96(44, "PMP_P_RF_H" /*PMP shares volatile as gym attendance murky.*/, "PMP_P_RF_C", 2, 0);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_61967 - 1);

	for (i = 0; i < 4; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			Global_64352[i /*34*/][j /*11*/].f_10 = 5000f;
		
			while (!func_88(&Global_61970[randomIntInRange /*14*/], i))
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_61967 - 1);
				BUILTIN::WAIT(2000);
			}
		
			Global_61970[randomIntInRange /*14*/].f_10 = 0f;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_61967 - 1);
		}
	}

	return;
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x5EDE (24286)
{
	if (Global_61967 == 150)
		return;

	Global_61970[Global_61967 /*14*/].f_11 = iParam3;
	Global_61970[Global_61967 /*14*/] = iParam4;
	TEXT_LABEL_ASSIGN_STRING(&(Global_61970[Global_61967 /*14*/].f_1), sParam1, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_61970[Global_61967 /*14*/].f_5), sParam2, 16);
	Global_61970[Global_61967 /*14*/].f_9 = Global_61969;
	Global_61970[Global_61967 /*14*/].f_12 = iParam0;
	Global_61967 = Global_61967 + 1;
	Global_61969 = Global_61969 + 1;
	return;
}

void func_97() // Position - 0x5F4C (24396)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	return;
}

void func_98() // Position - 0x5F5F (24415)
{
	int i;
	int j;

	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		Global_56805[i /*36*/].f_33 = 0f;
		Global_56805[i /*36*/].f_13 = 0;
		Global_56805[i /*36*/].f_12 = 0;
		Global_56805[i /*36*/].f_31 = 0f;
		Global_56805[i /*36*/].f_32 = 3.402823E+38f;
		j = 0;
	
		for (j = 0; j < 16; j = j + 1)
		{
			Global_56805[i /*36*/].f_14[j] = 0f;
		}
	}

	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		Global_60248[i /*7*/].f_2 = 0;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_56805[0 /*36*/], "BSS_BSTR_0" /*Ammu-Nation*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[0 /*36*/].f_4), "BSS_BSTR_1" /*AMU*/, 16);
	Global_56805[0 /*36*/].f_8 = 1;
	Global_56805[0 /*36*/].f_35 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[1 /*36*/], "BSS_BSTR_2" /*Badger*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[1 /*36*/].f_4), "BSS_BSTR_3" /*BDG*/, 16);
	Global_56805[1 /*36*/].f_8 = 1;
	Global_56805[1 /*36*/].f_35 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[2 /*36*/], "BSS_BSTR_4" /*BankOfLiberty*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[2 /*36*/].f_4), "BSS_BSTR_5" /*BOL*/, 16);
	Global_56805[2 /*36*/].f_8 = 0;
	Global_56805[2 /*36*/].f_35 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[3 /*36*/], "BSS_BSTR_6" /*BF*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[3 /*36*/].f_4), "BSS_BSTR_7" /*BFA*/, 16);
	Global_56805[3 /*36*/].f_8 = 1;
	Global_56805[3 /*36*/].f_35 = 2;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[4 /*36*/], "BSS_BSTR_8" /*Binco*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[4 /*36*/].f_4), "BSS_BSTR_9" /*BIN*/, 16);
	Global_56805[4 /*36*/].f_8 = 1;
	Global_56805[4 /*36*/].f_35 = 3;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[5 /*36*/], "BSS_BSTR_10" /*BitterSweet*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[5 /*36*/].f_4), "BSS_BSTR_11" /*BTR*/, 16);
	Global_56805[5 /*36*/].f_8 = 1;
	Global_56805[5 /*36*/].f_35 = 4;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[6 /*36*/], "BSS_BSTR_12" /*Bleeter*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[6 /*36*/].f_4), "BSS_BSTR_13" /*BLE*/, 16);
	Global_56805[6 /*36*/].f_8 = 1;
	Global_56805[6 /*36*/].f_35 = 5;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[7 /*36*/], "BSS_BSTR_14" /*Brute*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[7 /*36*/].f_4), "BSS_BSTR_15" /*BRU*/, 16);
	Global_56805[7 /*36*/].f_8 = 1;
	Global_56805[7 /*36*/].f_35 = 6;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[8 /*36*/], "BSS_BSTR_16" /*CNT*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[8 /*36*/].f_4), "BSS_BSTR_16" /*CNT*/, 16);
	Global_56805[8 /*36*/].f_8 = 1;
	Global_56805[8 /*36*/].f_35 = 7;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[9 /*36*/], "BSS_BSTR_17" /*Crevis*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[9 /*36*/].f_4), "BSS_BSTR_18" /*CRE*/, 16);
	Global_56805[9 /*36*/].f_8 = 1;
	Global_56805[9 /*36*/].f_35 = 8;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[10 /*36*/], "BSS_BSTR_19" /*DailyGlobe*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[10 /*36*/].f_4), "BSS_BSTR_20" /*DGP*/, 16);
	Global_56805[10 /*36*/].f_8 = 1;
	Global_56805[10 /*36*/].f_35 = 9;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[11 /*36*/], "BSS_BSTR_21" /*Dept.WaterandPower*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[11 /*36*/].f_4), "BSS_BSTR_22" /*WAP*/, 16);
	Global_56805[11 /*36*/].f_8 = 1;
	Global_56805[11 /*36*/].f_35 = 10;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[12 /*36*/], "BSS_BSTR_23" /*Facade*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[12 /*36*/].f_4), "BSS_BSTR_24" /*FAC*/, 16);
	Global_56805[12 /*36*/].f_8 = 1;
	Global_56805[12 /*36*/].f_35 = 11;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[13 /*36*/], "BSS_BSTR_25" /*Fleeca*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[13 /*36*/].f_4), "BSS_BSTR_26" /*FLC*/, 16);
	Global_56805[13 /*36*/].f_8 = 0;
	Global_56805[13 /*36*/].f_35 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[14 /*36*/], "BSS_BSTR_27" /*Hijak*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[14 /*36*/].f_4), "BSS_BSTR_28" /*HJK*/, 16);
	Global_56805[14 /*36*/].f_8 = 0;
	Global_56805[14 /*36*/].f_35 = 2;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[15 /*36*/], "BSS_BSTR_29" /*Fruit*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[15 /*36*/].f_4), "BSS_BSTR_30" /*FRT*/, 16);
	Global_56805[15 /*36*/].f_8 = 1;
	Global_56805[15 /*36*/].f_35 = 12;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[16 /*36*/], "BSS_BSTR_31" /*AuguryInsurance*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[16 /*36*/].f_4), "BSS_BSTR_32" /*AUG*/, 16);
	Global_56805[16 /*36*/].f_8 = 0;
	Global_56805[16 /*36*/].f_35 = 3;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[17 /*36*/], "BSS_BSTR_33" /*Bullhead*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[17 /*36*/].f_4), "BSS_BSTR_34" /*BUL*/, 16);
	Global_56805[17 /*36*/].f_8 = 0;
	Global_56805[17 /*36*/].f_35 = 4;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[18 /*36*/], "BSS_BSTR_35" /*Hammerstein&Faust*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[18 /*36*/].f_4), "BSS_BSTR_36" /*HAF*/, 16);
	Global_56805[18 /*36*/].f_8 = 0;
	Global_56805[18 /*36*/].f_35 = 5;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[19 /*36*/], "BSS_BSTR_37" /*Slaughter,Slaughter&Slaughter*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[19 /*36*/].f_4), "BSS_BSTR_38" /*SSS*/, 16);
	Global_56805[19 /*36*/].f_8 = 0;
	Global_56805[19 /*36*/].f_35 = 6;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[20 /*36*/], "BSS_BSTR_39" /*LosSantosCustoms*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[20 /*36*/].f_4), "BSS_BSTR_40" /*LSC*/, 16);
	Global_56805[20 /*36*/].f_8 = 1;
	Global_56805[20 /*36*/].f_35 = 13;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[21 /*36*/], "BSS_BSTR_41" /*LSTransport*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[21 /*36*/].f_4), "BSS_BSTR_42" /*LST*/, 16);
	Global_56805[21 /*36*/].f_8 = 1;
	Global_56805[21 /*36*/].f_35 = 14;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[22 /*36*/], "BSS_BSTR_43" /*LTDOil*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[22 /*36*/].f_4), "BSS_BSTR_44" /*LTD*/, 16);
	Global_56805[22 /*36*/].f_8 = 1;
	Global_56805[22 /*36*/].f_35 = 15;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[23 /*36*/], "BSS_BSTR_45" /*Maibatsu*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[23 /*36*/].f_4), "BSS_BSTR_46" /*MAI*/, 16);
	Global_56805[23 /*36*/].f_8 = 1;
	Global_56805[23 /*36*/].f_35 = 16;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[24 /*36*/], "BSS_BSTR_47" /*MazeBank*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[24 /*36*/].f_4), "BSS_BSTR_48" /*MAZ*/, 16);
	Global_56805[24 /*36*/].f_8 = 0;
	Global_56805[24 /*36*/].f_35 = 7;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[25 /*36*/], "BSS_BSTR_49" /*Suburban*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[25 /*36*/].f_4), "BSS_BSTR_50" /*SUB*/, 16);
	Global_56805[25 /*36*/].f_8 = 1;
	Global_56805[25 /*36*/].f_35 = 17;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[26 /*36*/], "BSS_BSTR_51" /*AnimalArk*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[26 /*36*/].f_4), "BSS_BSTR_52" /*ARK*/, 16);
	Global_56805[26 /*36*/].f_8 = 0;
	Global_56805[26 /*36*/].f_35 = 8;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[27 /*36*/], "BSS_BSTR_53" /*Pisswasser*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[27 /*36*/].f_4), "BSS_BSTR_54" /*PIS*/, 16);
	Global_56805[27 /*36*/].f_8 = 1;
	Global_56805[27 /*36*/].f_35 = 18;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[28 /*36*/], "BSS_BSTR_55" /*Ponsonbys*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[28 /*36*/].f_4), "BSS_BSTR_56" /*PON*/, 16);
	Global_56805[28 /*36*/].f_8 = 1;
	Global_56805[28 /*36*/].f_35 = 19;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[29 /*36*/], "BSS_BSTR_57" /*Raine*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[29 /*36*/].f_4), "BSS_BSTR_58" /*RAI*/, 16);
	Global_56805[29 /*36*/].f_8 = 0;
	Global_56805[29 /*36*/].f_35 = 9;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[30 /*36*/], "BSS_BSTR_59" /*RonOil*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[30 /*36*/].f_4), "BSS_BSTR_60" /*RON*/, 16);
	Global_56805[30 /*36*/].f_8 = 1;
	Global_56805[30 /*36*/].f_35 = 20;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[31 /*36*/], "BSS_BSTR_61" /*Schyster*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[31 /*36*/].f_4), "BSS_BSTR_62" /*SHT*/, 16);
	Global_56805[31 /*36*/].f_8 = 1;
	Global_56805[31 /*36*/].f_35 = 21;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[32 /*36*/], "BSS_BSTR_63" /*Sprunk*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[32 /*36*/].f_4), "BSS_BSTR_64" /*SPU*/, 16);
	Global_56805[32 /*36*/].f_8 = 1;
	Global_56805[32 /*36*/].f_35 = 22;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[33 /*36*/], "BSS_BSTR_65" /*Tinkle*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[33 /*36*/].f_4), "BSS_BSTR_66" /*TNK*/, 16);
	Global_56805[33 /*36*/].f_8 = 1;
	Global_56805[33 /*36*/].f_35 = 23;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[34 /*36*/], "BSS_BSTR_67" /*WIWANG*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[34 /*36*/].f_4), "BSS_BSTR_68" /*WIW*/, 16);
	Global_56805[34 /*36*/].f_8 = 1;
	Global_56805[34 /*36*/].f_35 = 24;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[35 /*36*/], "BSS_BSTR_69" /*Ubermacht*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[35 /*36*/].f_4), "BSS_BSTR_70" /*UMA*/, 16);
	Global_56805[35 /*36*/].f_8 = 1;
	Global_56805[35 /*36*/].f_35 = 25;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[36 /*36*/], "BSS_BSTR_71" /*Vapid*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[36 /*36*/].f_4), "BSS_BSTR_72" /*VAP*/, 16);
	Global_56805[36 /*36*/].f_8 = 1;
	Global_56805[36 /*36*/].f_35 = 26;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[37 /*36*/], "BSS_BSTR_73" /*VomFeuer*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[37 /*36*/].f_4), "BSS_BSTR_74" /*VOM*/, 16);
	Global_56805[37 /*36*/].f_8 = 1;
	Global_56805[37 /*36*/].f_35 = 27;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[38 /*36*/], "BSS_BSTR_75" /*Weazel*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[38 /*36*/].f_4), "BSS_BSTR_76" /*WZL*/, 16);
	Global_56805[38 /*36*/].f_8 = 1;
	Global_56805[38 /*36*/].f_35 = 28;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[39 /*36*/], "BSS_BSTR_77" /*Whiz*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[39 /*36*/].f_4), "BSS_BSTR_78" /*WIZ*/, 16);
	Global_56805[39 /*36*/].f_8 = 1;
	Global_56805[39 /*36*/].f_35 = 29;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[40 /*36*/], "BSS_BSTR_79" /*Debonaire*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[40 /*36*/].f_4), "BSS_BSTR_80" /*DEB*/, 16);
	Global_56805[40 /*36*/].f_8 = 0;
	Global_56805[40 /*36*/].f_35 = 10;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[41 /*36*/], "BSS_BSTR_81" /*Zit*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[41 /*36*/].f_4), "BSS_BSTR_82" /*ZIT*/, 16);
	Global_56805[41 /*36*/].f_8 = 1;
	Global_56805[41 /*36*/].f_35 = 30;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[42 /*36*/], "BSS_BSTR_83" /*Shark*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[42 /*36*/].f_4), "BSS_BSTR_84" /*SHK*/, 16);
	Global_56805[42 /*36*/].f_8 = 1;
	Global_56805[42 /*36*/].f_35 = 31;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[43 /*36*/], "BSS_BSTR_85" /*BettaPharmaceuticals*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[43 /*36*/].f_4), "BSS_BSTR_86" /*BET*/, 16);
	Global_56805[43 /*36*/].f_8 = 1;
	Global_56805[43 /*36*/].f_35 = 32;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[44 /*36*/], "BSS_BSTR_87" /*PumpnRun*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[44 /*36*/].f_4), "BSS_BSTR_88" /*PMP*/, 16);
	Global_56805[44 /*36*/].f_8 = 1;
	Global_56805[44 /*36*/].f_35 = 33;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[45 /*36*/], "BSS_BSTR_89" /*GrainOfTruth*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[45 /*36*/].f_4), "BSS_BSTR_90" /*GOT*/, 16);
	Global_56805[45 /*36*/].f_8 = 1;
	Global_56805[45 /*36*/].f_35 = 34;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[46 /*36*/], "BSS_BSTR_91" /*Eyefind*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[46 /*36*/].f_4), "BSS_BSTR_92" /*EYE*/, 16);
	Global_56805[46 /*36*/].f_8 = 1;
	Global_56805[46 /*36*/].f_35 = 35;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[47 /*36*/], "BSS_BSTR_93" /*AirEmu*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[47 /*36*/].f_4), "BSS_BSTR_94" /*EMU*/, 16);
	Global_56805[47 /*36*/].f_8 = 0;
	Global_56805[47 /*36*/].f_35 = 11;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[48 /*36*/], "BSS_BSTR_95" /*BeanMachine*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[48 /*36*/].f_4), "BSS_BSTR_96" /*BEN*/, 16);
	Global_56805[48 /*36*/].f_8 = 0;
	Global_56805[48 /*36*/].f_35 = 12;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[49 /*36*/], "BSS_BSTR_97" /*GoldCoast*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[49 /*36*/].f_4), "BSS_BSTR_98" /*GCD*/, 16);
	Global_56805[49 /*36*/].f_8 = 0;
	Global_56805[49 /*36*/].f_35 = 13;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[50 /*36*/], "BSS_BSTR_99" /*BobMulét*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[50 /*36*/].f_4), "BSS_BSTR_100" /*BOM*/, 16);
	Global_56805[50 /*36*/].f_8 = 0;
	Global_56805[50 /*36*/].f_35 = 14;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[51 /*36*/], "BSS_BSTR_101" /*BurgerShot*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[51 /*36*/].f_4), "BSS_BSTR_102" /*BGR*/, 16);
	Global_56805[51 /*36*/].f_8 = 0;
	Global_56805[51 /*36*/].f_35 = 15;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[52 /*36*/], "BSS_BSTR_103" /*CluckinBell*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[52 /*36*/].f_4), "BSS_BSTR_104" /*CLK*/, 16);
	Global_56805[52 /*36*/].f_8 = 0;
	Global_56805[52 /*36*/].f_35 = 16;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[53 /*36*/], "BSS_BSTR_105" /*CoolBeans*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[53 /*36*/].f_4), "BSS_BSTR_106" /*BAN*/, 16);
	Global_56805[53 /*36*/].f_8 = 0;
	Global_56805[53 /*36*/].f_35 = 17;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[54 /*36*/], "BSS_BSTR_107" /*DollarPills*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[54 /*36*/].f_4), "BSS_BSTR_108" /*DOP*/, 16);
	Global_56805[54 /*36*/].f_8 = 0;
	Global_56805[54 /*36*/].f_35 = 18;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[55 /*36*/], "BSS_BSTR_109" /*eCola*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[55 /*36*/].f_4), "BSS_BSTR_110" /*ECL*/, 16);
	Global_56805[55 /*36*/].f_8 = 0;
	Global_56805[55 /*36*/].f_35 = 19;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[56 /*36*/], "BSS_BSTR_111" /*FlyUS*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[56 /*36*/].f_4), "BSS_BSTR_112" /*FUS*/, 16);
	Global_56805[56 /*36*/].f_8 = 0;
	Global_56805[56 /*36*/].f_35 = 20;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[57 /*36*/], "BSS_BSTR_113" /*GastroBand*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[57 /*36*/].f_4), "BSS_BSTR_114" /*GAS*/, 16);
	Global_56805[57 /*36*/].f_8 = 0;
	Global_56805[57 /*36*/].f_35 = 21;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[58 /*36*/], "BSS_BSTR_115" /*GoPostal*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[58 /*36*/].f_4), "BSS_BSTR_116" /*GOP*/, 16);
	Global_56805[58 /*36*/].f_8 = 0;
	Global_56805[58 /*36*/].f_35 = 22;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[59 /*36*/], "BSS_BSTR_117" /*GruppeSechs*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[59 /*36*/].f_4), "BSS_BSTR_118" /*GRU*/, 16);
	Global_56805[59 /*36*/].f_8 = 0;
	Global_56805[59 /*36*/].f_35 = 23;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[60 /*36*/], "BSS_BSTR_119" /*Krapea*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[60 /*36*/].f_4), "BSS_BSTR_120" /*KRP*/, 16);
	Global_56805[60 /*36*/].f_8 = 0;
	Global_56805[60 /*36*/].f_35 = 24;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[61 /*36*/], "BSS_BSTR_121" /*Lifeinvader*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[61 /*36*/].f_4), "BSS_BSTR_122" /*LFI*/, 16);
	Global_56805[61 /*36*/].f_8 = 0;
	Global_56805[61 /*36*/].f_35 = 25;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[62 /*36*/], "BSS_BSTR_123" /*MaxRenda*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[62 /*36*/].f_4), "BSS_BSTR_124" /*MAX*/, 16);
	Global_56805[62 /*36*/].f_8 = 0;
	Global_56805[62 /*36*/].f_35 = 26;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[63 /*36*/], "BSS_BSTR_125" /*PostOP*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[63 /*36*/].f_4), "BSS_BSTR_126" /*POP*/, 16);
	Global_56805[63 /*36*/].f_8 = 0;
	Global_56805[63 /*36*/].f_35 = 27;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[64 /*36*/], "BSS_BSTR_127" /*ProLaps*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[64 /*36*/].f_4), "BSS_BSTR_128" /*PRO*/, 16);
	Global_56805[64 /*36*/].f_8 = 0;
	Global_56805[64 /*36*/].f_35 = 28;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[65 /*36*/], "BSS_BSTR_129" /*Redwood*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[65 /*36*/].f_4), "BSS_BSTR_130" /*RWC*/, 16);
	Global_56805[65 /*36*/].f_8 = 0;
	Global_56805[65 /*36*/].f_35 = 29;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[66 /*36*/], "BSS_BSTR_131" /*RichardsMajestic*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[66 /*36*/].f_4), "BSS_BSTR_132" /*RIM*/, 16);
	Global_56805[66 /*36*/].f_8 = 0;
	Global_56805[66 /*36*/].f_35 = 30;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[67 /*36*/], "BSS_BSTR_133" /*TacoBomb*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[67 /*36*/].f_4), "BSS_BSTR_134" /*TBO*/, 16);
	Global_56805[67 /*36*/].f_8 = 0;
	Global_56805[67 /*36*/].f_35 = 31;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[68 /*36*/], "BSS_BSTR_135" /*Up-n-Atom*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[68 /*36*/].f_4), "BSS_BSTR_136" /*UPA*/, 16);
	Global_56805[68 /*36*/].f_8 = 0;
	Global_56805[68 /*36*/].f_35 = 32;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[69 /*36*/], "BSS_BSTR_137" /*Vangelico*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[69 /*36*/].f_4), "BSS_BSTR_138" /*VAG*/, 16);
	Global_56805[69 /*36*/].f_8 = 0;
	Global_56805[69 /*36*/].f_35 = 33;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[70 /*36*/], "BSS_BSTR_139" /*VanillaUnicorn*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[70 /*36*/].f_4), "BSS_BSTR_140" /*UNI*/, 16);
	Global_56805[70 /*36*/].f_8 = 0;
	Global_56805[70 /*36*/].f_35 = 34;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[71 /*36*/], "BSS_BSTR_141" /*HVYIndustries*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[71 /*36*/].f_4), "BSS_BSTR_142" /*HVY*/, 16);
	Global_56805[71 /*36*/].f_8 = 1;
	Global_56805[71 /*36*/].f_35 = 36;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[72 /*36*/], "BSS_BSTR_143" /*Logger*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[72 /*36*/].f_4), "BSS_BSTR_144" /*LOG*/, 16);
	Global_56805[72 /*36*/].f_8 = 0;
	Global_56805[72 /*36*/].f_35 = 35;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[73 /*36*/], "BSS_BSTR_145" /*Merryweather*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[73 /*36*/].f_4), "BSS_BSTR_146" /*MER*/, 16);
	Global_56805[73 /*36*/].f_8 = 0;
	Global_56805[73 /*36*/].f_35 = 36;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[74 /*36*/], "BSS_BSTR_147" /*WorldwideFM*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[74 /*36*/].f_4), "BSS_BSTR_148" /*WFM*/, 16);
	Global_56805[74 /*36*/].f_8 = 0;
	Global_56805[74 /*36*/].f_35 = 37;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[75 /*36*/], "BSS_BSTR_149" /*RadioLosSantos*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[75 /*36*/].f_4), "BSS_BSTR_150" /*RLS*/, 16);
	Global_56805[75 /*36*/].f_8 = 0;
	Global_56805[75 /*36*/].f_35 = 38;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[76 /*36*/], "BSS_BSTR_151" /*Shrewsbury*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[76 /*36*/].f_4), "BSS_BSTR_152" /*SHR*/, 16);
	Global_56805[76 /*36*/].f_8 = 1;
	Global_56805[76 /*36*/].f_35 = 37;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[77 /*36*/], "BSS_BSTR_153" /*HawkAndLittle*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[77 /*36*/].f_4), "BSS_BSTR_154" /*HAL*/, 16);
	Global_56805[77 /*36*/].f_8 = 1;
	Global_56805[77 /*36*/].f_35 = 38;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[78 /*36*/], "BSS_BSTR_155" /*MorsMutualInsurance*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[78 /*36*/].f_4), "BSS_BSTR_156" /*MOR*/, 16);
	Global_56805[78 /*36*/].f_8 = 0;
	Global_56805[78 /*36*/].f_35 = 39;
	TEXT_LABEL_ASSIGN_STRING(&Global_56805[79 /*36*/], "BSS_BSTR_157" /*Bilkinton*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_56805[79 /*36*/].f_4), "BSS_BSTR_158" /*BIL*/, 16);
	Global_56805[79 /*36*/].f_8 = 0;
	Global_56805[79 /*36*/].f_35 = 40;
	Global_59960[0 /*7*/].f_2 = 1f;
	Global_59960[0 /*7*/].f_1 = 1f;
	Global_59960[0 /*7*/].f_3 = 1000f;
	Global_59960[0 /*7*/].f_4 = 3.5f;
	Global_59960[0 /*7*/].f_5 = 3.5f;
	Global_59960[0 /*7*/].f_6 = 0.1f;
	Global_59960[1 /*7*/].f_2 = 1f;
	Global_59960[1 /*7*/].f_1 = 1f;
	Global_59960[1 /*7*/].f_3 = 1000f;
	Global_59960[1 /*7*/].f_4 = 3.5f;
	Global_59960[1 /*7*/].f_5 = 3.5f;
	Global_59960[1 /*7*/].f_6 = 0.1f;
	Global_59960[2 /*7*/].f_2 = 1f;
	Global_59960[2 /*7*/].f_1 = 1f;
	Global_59960[2 /*7*/].f_3 = 1000f;
	Global_59960[2 /*7*/].f_4 = 3.5f;
	Global_59960[2 /*7*/].f_5 = 3.5f;
	Global_59960[2 /*7*/].f_6 = 0.1f;
	Global_59960[3 /*7*/].f_2 = 1f;
	Global_59960[3 /*7*/].f_1 = 1f;
	Global_59960[3 /*7*/].f_3 = 1000f;
	Global_59960[3 /*7*/].f_4 = 3.5f;
	Global_59960[3 /*7*/].f_5 = 3.5f;
	Global_59960[3 /*7*/].f_6 = 0.1f;
	Global_59960[4 /*7*/].f_2 = 1f;
	Global_59960[4 /*7*/].f_1 = 1f;
	Global_59960[4 /*7*/].f_3 = 1000f;
	Global_59960[4 /*7*/].f_4 = 3.5f;
	Global_59960[4 /*7*/].f_5 = 3.5f;
	Global_59960[4 /*7*/].f_6 = 0.1f;
	Global_59960[5 /*7*/].f_2 = 1f;
	Global_59960[5 /*7*/].f_1 = 1f;
	Global_59960[5 /*7*/].f_3 = 1000f;
	Global_59960[5 /*7*/].f_4 = 3.5f;
	Global_59960[5 /*7*/].f_5 = 3.5f;
	Global_59960[5 /*7*/].f_6 = 0.1f;
	Global_59960[6 /*7*/].f_2 = 1f;
	Global_59960[6 /*7*/].f_1 = 1f;
	Global_59960[6 /*7*/].f_3 = 1000f;
	Global_59960[6 /*7*/].f_4 = 3.5f;
	Global_59960[6 /*7*/].f_5 = 3.5f;
	Global_59960[6 /*7*/].f_6 = 0.1f;
	Global_59960[7 /*7*/].f_2 = 1f;
	Global_59960[7 /*7*/].f_1 = 1f;
	Global_59960[7 /*7*/].f_3 = 1000f;
	Global_59960[7 /*7*/].f_4 = 3.5f;
	Global_59960[7 /*7*/].f_5 = 3.5f;
	Global_59960[7 /*7*/].f_6 = 0.1f;
	Global_59960[8 /*7*/].f_2 = 1f;
	Global_59960[8 /*7*/].f_1 = 1f;
	Global_59960[8 /*7*/].f_3 = 1000f;
	Global_59960[8 /*7*/].f_4 = 3.5f;
	Global_59960[8 /*7*/].f_5 = 3.5f;
	Global_59960[8 /*7*/].f_6 = 0.1f;
	Global_59960[9 /*7*/].f_2 = 1f;
	Global_59960[9 /*7*/].f_1 = 1f;
	Global_59960[9 /*7*/].f_3 = 1000f;
	Global_59960[9 /*7*/].f_4 = 3.5f;
	Global_59960[9 /*7*/].f_5 = 3.5f;
	Global_59960[9 /*7*/].f_6 = 0.1f;
	Global_59960[10 /*7*/].f_2 = 1f;
	Global_59960[10 /*7*/].f_1 = 1f;
	Global_59960[10 /*7*/].f_3 = 1000f;
	Global_59960[10 /*7*/].f_4 = 3.5f;
	Global_59960[10 /*7*/].f_5 = 3.5f;
	Global_59960[10 /*7*/].f_6 = 0.1f;
	Global_59960[11 /*7*/].f_2 = 1f;
	Global_59960[11 /*7*/].f_1 = 1f;
	Global_59960[11 /*7*/].f_3 = 1000f;
	Global_59960[11 /*7*/].f_4 = 3.5f;
	Global_59960[11 /*7*/].f_5 = 3.5f;
	Global_59960[11 /*7*/].f_6 = 0.1f;
	Global_59960[12 /*7*/].f_2 = 1f;
	Global_59960[12 /*7*/].f_1 = 1f;
	Global_59960[12 /*7*/].f_3 = 1000f;
	Global_59960[12 /*7*/].f_4 = 3.5f;
	Global_59960[12 /*7*/].f_5 = 3.5f;
	Global_59960[12 /*7*/].f_6 = 0.1f;
	Global_59960[13 /*7*/].f_2 = 1f;
	Global_59960[13 /*7*/].f_1 = 1f;
	Global_59960[13 /*7*/].f_3 = 1000f;
	Global_59960[13 /*7*/].f_4 = 3.5f;
	Global_59960[13 /*7*/].f_5 = 3.5f;
	Global_59960[13 /*7*/].f_6 = 0.1f;
	Global_59960[14 /*7*/].f_2 = 1f;
	Global_59960[14 /*7*/].f_1 = 1f;
	Global_59960[14 /*7*/].f_3 = 1000f;
	Global_59960[14 /*7*/].f_4 = 3.5f;
	Global_59960[14 /*7*/].f_5 = 3.5f;
	Global_59960[14 /*7*/].f_6 = 0.1f;
	Global_59960[15 /*7*/].f_2 = 1f;
	Global_59960[15 /*7*/].f_1 = 1f;
	Global_59960[15 /*7*/].f_3 = 1000f;
	Global_59960[15 /*7*/].f_4 = 3.5f;
	Global_59960[15 /*7*/].f_5 = 3.5f;
	Global_59960[15 /*7*/].f_6 = 0.1f;
	Global_59960[16 /*7*/].f_2 = 1f;
	Global_59960[16 /*7*/].f_1 = 1f;
	Global_59960[16 /*7*/].f_3 = 1000f;
	Global_59960[16 /*7*/].f_4 = 3.5f;
	Global_59960[16 /*7*/].f_5 = 3.5f;
	Global_59960[16 /*7*/].f_6 = 0.1f;
	Global_59960[17 /*7*/].f_2 = 1f;
	Global_59960[17 /*7*/].f_1 = 1f;
	Global_59960[17 /*7*/].f_3 = 1000f;
	Global_59960[17 /*7*/].f_4 = 3.5f;
	Global_59960[17 /*7*/].f_5 = 3.5f;
	Global_59960[17 /*7*/].f_6 = 0.1f;
	Global_59960[18 /*7*/].f_2 = 1f;
	Global_59960[18 /*7*/].f_1 = 1f;
	Global_59960[18 /*7*/].f_3 = 1000f;
	Global_59960[18 /*7*/].f_4 = 3.5f;
	Global_59960[18 /*7*/].f_5 = 3.5f;
	Global_59960[18 /*7*/].f_6 = 0.1f;
	Global_59960[19 /*7*/].f_2 = 1f;
	Global_59960[19 /*7*/].f_1 = 1f;
	Global_59960[19 /*7*/].f_3 = 1000f;
	Global_59960[19 /*7*/].f_4 = 3.5f;
	Global_59960[19 /*7*/].f_5 = 3.5f;
	Global_59960[19 /*7*/].f_6 = 0.1f;
	Global_59960[20 /*7*/].f_2 = 1f;
	Global_59960[20 /*7*/].f_1 = 1f;
	Global_59960[20 /*7*/].f_3 = 1000f;
	Global_59960[20 /*7*/].f_4 = 3.5f;
	Global_59960[20 /*7*/].f_5 = 3.5f;
	Global_59960[20 /*7*/].f_6 = 0.1f;
	Global_59960[21 /*7*/].f_2 = 1f;
	Global_59960[21 /*7*/].f_1 = 1f;
	Global_59960[21 /*7*/].f_3 = 1000f;
	Global_59960[21 /*7*/].f_4 = 3.5f;
	Global_59960[21 /*7*/].f_5 = 3.5f;
	Global_59960[21 /*7*/].f_6 = 0.1f;
	Global_59960[22 /*7*/].f_2 = 1f;
	Global_59960[22 /*7*/].f_1 = 1f;
	Global_59960[22 /*7*/].f_3 = 1000f;
	Global_59960[22 /*7*/].f_4 = 3.5f;
	Global_59960[22 /*7*/].f_5 = 3.5f;
	Global_59960[22 /*7*/].f_6 = 0.1f;
	Global_59960[23 /*7*/].f_2 = 1f;
	Global_59960[23 /*7*/].f_1 = 1f;
	Global_59960[23 /*7*/].f_3 = 1000f;
	Global_59960[23 /*7*/].f_4 = 3.5f;
	Global_59960[23 /*7*/].f_5 = 3.5f;
	Global_59960[23 /*7*/].f_6 = 0.1f;
	Global_59960[24 /*7*/].f_2 = 1f;
	Global_59960[24 /*7*/].f_1 = 1f;
	Global_59960[24 /*7*/].f_3 = 1000f;
	Global_59960[24 /*7*/].f_4 = 3.5f;
	Global_59960[24 /*7*/].f_5 = 3.5f;
	Global_59960[24 /*7*/].f_6 = 0.1f;
	Global_59960[25 /*7*/].f_2 = 1f;
	Global_59960[25 /*7*/].f_1 = 1f;
	Global_59960[25 /*7*/].f_3 = 1000f;
	Global_59960[25 /*7*/].f_4 = 3.5f;
	Global_59960[25 /*7*/].f_5 = 3.5f;
	Global_59960[25 /*7*/].f_6 = 0.1f;
	Global_59960[26 /*7*/].f_2 = 1f;
	Global_59960[26 /*7*/].f_1 = 1f;
	Global_59960[26 /*7*/].f_3 = 1000f;
	Global_59960[26 /*7*/].f_4 = 3.5f;
	Global_59960[26 /*7*/].f_5 = 3.5f;
	Global_59960[26 /*7*/].f_6 = 0.1f;
	Global_59960[27 /*7*/].f_2 = 1f;
	Global_59960[27 /*7*/].f_1 = 1f;
	Global_59960[27 /*7*/].f_3 = 1000f;
	Global_59960[27 /*7*/].f_4 = 3.5f;
	Global_59960[27 /*7*/].f_5 = 3.5f;
	Global_59960[27 /*7*/].f_6 = 0.1f;
	Global_59960[28 /*7*/].f_2 = 1f;
	Global_59960[28 /*7*/].f_1 = 1f;
	Global_59960[28 /*7*/].f_3 = 1000f;
	Global_59960[28 /*7*/].f_4 = 3.5f;
	Global_59960[28 /*7*/].f_5 = 3.5f;
	Global_59960[28 /*7*/].f_6 = 0.1f;
	Global_59960[29 /*7*/].f_2 = 1f;
	Global_59960[29 /*7*/].f_1 = 1f;
	Global_59960[29 /*7*/].f_3 = 1000f;
	Global_59960[29 /*7*/].f_4 = 3.5f;
	Global_59960[29 /*7*/].f_5 = 3.5f;
	Global_59960[29 /*7*/].f_6 = 0.1f;
	Global_59960[30 /*7*/].f_2 = 1f;
	Global_59960[30 /*7*/].f_1 = 1f;
	Global_59960[30 /*7*/].f_3 = 1000f;
	Global_59960[30 /*7*/].f_4 = 3.5f;
	Global_59960[30 /*7*/].f_5 = 3.5f;
	Global_59960[30 /*7*/].f_6 = 0.1f;
	Global_59960[31 /*7*/].f_2 = 1f;
	Global_59960[31 /*7*/].f_1 = 1f;
	Global_59960[31 /*7*/].f_3 = 1000f;
	Global_59960[31 /*7*/].f_4 = 3.5f;
	Global_59960[31 /*7*/].f_5 = 3.5f;
	Global_59960[31 /*7*/].f_6 = 0.1f;
	Global_59960[32 /*7*/].f_2 = 1f;
	Global_59960[32 /*7*/].f_1 = 1f;
	Global_59960[32 /*7*/].f_3 = 1000f;
	Global_59960[32 /*7*/].f_4 = 3.5f;
	Global_59960[32 /*7*/].f_5 = 3.5f;
	Global_59960[32 /*7*/].f_6 = 0.1f;
	Global_59960[33 /*7*/].f_2 = 1f;
	Global_59960[33 /*7*/].f_1 = 1f;
	Global_59960[33 /*7*/].f_3 = 1000f;
	Global_59960[33 /*7*/].f_4 = 3.5f;
	Global_59960[33 /*7*/].f_5 = 3.5f;
	Global_59960[33 /*7*/].f_6 = 0.1f;
	Global_59960[34 /*7*/].f_2 = 1f;
	Global_59960[34 /*7*/].f_1 = 1f;
	Global_59960[34 /*7*/].f_3 = 1000f;
	Global_59960[34 /*7*/].f_4 = 3.5f;
	Global_59960[34 /*7*/].f_5 = 3.5f;
	Global_59960[34 /*7*/].f_6 = 0.1f;
	Global_59960[35 /*7*/].f_2 = 1f;
	Global_59960[35 /*7*/].f_1 = 1f;
	Global_59960[35 /*7*/].f_3 = 1000f;
	Global_59960[35 /*7*/].f_4 = 3.5f;
	Global_59960[35 /*7*/].f_5 = 3.5f;
	Global_59960[35 /*7*/].f_6 = 0.1f;
	Global_59960[36 /*7*/].f_2 = 1f;
	Global_59960[36 /*7*/].f_1 = 1f;
	Global_59960[36 /*7*/].f_3 = 1000f;
	Global_59960[36 /*7*/].f_4 = 3.5f;
	Global_59960[36 /*7*/].f_5 = 3.5f;
	Global_59960[36 /*7*/].f_6 = 0.1f;
	Global_59960[37 /*7*/].f_2 = 1f;
	Global_59960[37 /*7*/].f_1 = 1f;
	Global_59960[37 /*7*/].f_3 = 1000f;
	Global_59960[37 /*7*/].f_4 = 3.5f;
	Global_59960[37 /*7*/].f_5 = 3.5f;
	Global_59960[37 /*7*/].f_6 = 0.1f;
	Global_59960[38 /*7*/].f_2 = 1f;
	Global_59960[38 /*7*/].f_1 = 1f;
	Global_59960[38 /*7*/].f_3 = 1000f;
	Global_59960[38 /*7*/].f_4 = 3.5f;
	Global_59960[38 /*7*/].f_5 = 3.5f;
	Global_59960[38 /*7*/].f_6 = 0.1f;
	Global_59960[39 /*7*/].f_2 = 1f;
	Global_59960[39 /*7*/].f_1 = 1f;
	Global_59960[39 /*7*/].f_3 = 1000f;
	Global_59960[39 /*7*/].f_4 = 3.5f;
	Global_59960[39 /*7*/].f_5 = 3.5f;
	Global_59960[39 /*7*/].f_6 = 0.1f;
	Global_59960[40 /*7*/].f_2 = 1f;
	Global_59960[40 /*7*/].f_1 = 1f;
	Global_59960[40 /*7*/].f_3 = 1000f;
	Global_59960[40 /*7*/].f_4 = 3.5f;
	Global_59960[40 /*7*/].f_5 = 3.5f;
	Global_59960[40 /*7*/].f_6 = 0.1f;
	Global_60248[0 /*7*/].f_1 = joaat("SM_BRVECDESBFA");
	Global_60248[0 /*7*/] = true;
	Global_60248[1 /*7*/].f_1 = joaat("SM_BRVECDESBRU");
	Global_60248[1 /*7*/] = true;
	Global_60248[3 /*7*/].f_1 = joaat("SM_BRVECDESLSC");
	Global_60248[3 /*7*/] = true;
	Global_60248[4 /*7*/].f_1 = joaat("SM_BRVECDESLST");
	Global_60248[4 /*7*/] = true;
	Global_60248[5 /*7*/].f_1 = joaat("SM_BRVECDESLTD");
	Global_60248[5 /*7*/] = true;
	Global_60248[6 /*7*/].f_1 = joaat("SM_BRVECDESMAI");
	Global_60248[6 /*7*/] = true;
	Global_60248[7 /*7*/].f_1 = joaat("SM_BRVECDESRON");
	Global_60248[7 /*7*/] = true;
	Global_60248[8 /*7*/].f_1 = joaat("SM_BRVECDESSHT");
	Global_60248[8 /*7*/] = true;
	Global_60248[9 /*7*/].f_1 = joaat("SM_BRVECDESUMA");
	Global_60248[9 /*7*/] = true;
	Global_60248[10 /*7*/].f_1 = joaat("SM_BRVECDESVAP");
	Global_60248[10 /*7*/] = true;
	Global_60248[11 /*7*/].f_1 = joaat("SM_BRVECDESHVY");
	Global_60248[11 /*7*/] = true;
	Global_60248[12 /*7*/].f_1 = joaat("SM_VECBUYBFA");
	Global_60248[12 /*7*/] = true;
	Global_60248[13 /*7*/].f_1 = joaat("SM_VECBUYBRU");
	Global_60248[13 /*7*/] = true;
	Global_60248[15 /*7*/].f_1 = joaat("SM_VECBUYMAI");
	Global_60248[15 /*7*/] = true;
	Global_60248[16 /*7*/].f_1 = joaat("SM_VECBUYSHT");
	Global_60248[16 /*7*/] = true;
	Global_60248[17 /*7*/].f_1 = joaat("SM_VECBUYUMA");
	Global_60248[17 /*7*/] = true;
	Global_60248[18 /*7*/].f_1 = joaat("SM_VECBUYVAP");
	Global_60248[18 /*7*/] = true;
	Global_60248[19 /*7*/].f_1 = joaat("SM_VECBUYHVY");
	Global_60248[19 /*7*/] = true;
	Global_60248[20 /*7*/].f_1 = joaat("SM_DISDRIVBFA");
	Global_60248[20 /*7*/] = true;
	Global_60248[21 /*7*/].f_1 = joaat("SM_DISDRIVBRU");
	Global_60248[21 /*7*/] = true;
	Global_60248[23 /*7*/].f_1 = joaat("SM_DISDRIVLST");
	Global_60248[23 /*7*/] = true;
	Global_60248[24 /*7*/].f_1 = joaat("SM_DISDRIVMAI");
	Global_60248[24 /*7*/] = true;
	Global_60248[25 /*7*/].f_1 = joaat("SM_DISDRIVSHT");
	Global_60248[25 /*7*/] = true;
	Global_60248[26 /*7*/].f_1 = joaat("SM_DISDRIVUMA");
	Global_60248[26 /*7*/] = true;
	Global_60248[27 /*7*/].f_1 = joaat("SM_DISDRIVVAP");
	Global_60248[27 /*7*/] = true;
	Global_60248[28 /*7*/].f_1 = joaat("SM_DISDRIVHVY");
	Global_60248[28 /*7*/] = true;
	Global_60248[30 /*7*/].f_1 = joaat("SM_VECMODLSC");
	Global_60248[30 /*7*/] = true;
	Global_60248[31 /*7*/].f_1 = joaat("SM_VECSTOLBFA");
	Global_60248[31 /*7*/] = true;
	Global_60248[32 /*7*/].f_1 = joaat("SM_VECSTOLBRU");
	Global_60248[32 /*7*/] = true;
	Global_60248[34 /*7*/].f_1 = joaat("SM_VECSTOLLST");
	Global_60248[34 /*7*/] = true;
	Global_60248[35 /*7*/].f_1 = joaat("SM_VECSTOLMAI");
	Global_60248[35 /*7*/] = true;
	Global_60248[36 /*7*/].f_1 = joaat("SM_VECSTOLSHT");
	Global_60248[36 /*7*/] = true;
	Global_60248[37 /*7*/].f_1 = joaat("SM_VECSTOLUMA");
	Global_60248[37 /*7*/] = true;
	Global_60248[38 /*7*/].f_1 = joaat("SM_VECSTOLVAP");
	Global_60248[38 /*7*/] = true;
	Global_60248[39 /*7*/].f_1 = joaat("SM_VECSTOLHVY");
	Global_60248[39 /*7*/] = true;
	Global_60248[40 /*7*/].f_1 = joaat("SM_VECDMGBFA");
	Global_60248[40 /*7*/] = true;
	Global_60248[41 /*7*/].f_1 = joaat("SM_VECDMGBRU");
	Global_60248[41 /*7*/] = true;
	Global_60248[43 /*7*/].f_1 = joaat("SM_VECDMGMAI");
	Global_60248[43 /*7*/] = true;
	Global_60248[44 /*7*/].f_1 = joaat("SM_VECDMGSHT");
	Global_60248[44 /*7*/] = true;
	Global_60248[45 /*7*/].f_1 = joaat("SM_VECDMGUMA");
	Global_60248[45 /*7*/] = true;
	Global_60248[46 /*7*/].f_1 = joaat("SM_VECDMGVAP");
	Global_60248[46 /*7*/] = true;
	Global_60248[47 /*7*/].f_1 = joaat("SM_VECDMGHVY");
	Global_60248[47 /*7*/] = true;
	Global_60248[48 /*7*/].f_1 = joaat("SM_VECPEDKIL");
	Global_60248[48 /*7*/] = true;
	Global_60248[49 /*7*/].f_1 = joaat("SM_WEPBUYSHR");
	Global_60248[49 /*7*/] = true;
	Global_60248[50 /*7*/].f_1 = joaat("SM_WEPBUYHAL");
	Global_60248[50 /*7*/] = true;
	Global_60248[51 /*7*/].f_1 = joaat("SM_WEPTAKEVOM");
	Global_60248[51 /*7*/] = true;
	Global_60248[52 /*7*/].f_1 = joaat("SM_WEPTAKESHR");
	Global_60248[52 /*7*/] = true;
	Global_60248[53 /*7*/].f_1 = joaat("SM_WEPTAKEHAL");
	Global_60248[53 /*7*/] = true;
	Global_60248[54 /*7*/].f_1 = joaat("SM_KILCOPVOM");
	Global_60248[54 /*7*/] = true;
	Global_60248[55 /*7*/].f_1 = joaat("SM_KILCOPSHR");
	Global_60248[55 /*7*/] = true;
	Global_60248[56 /*7*/].f_1 = joaat("SM_KILCOPHAL");
	Global_60248[56 /*7*/] = true;
	Global_60248[57 /*7*/].f_1 = joaat("SM_KILCRIMVOM");
	Global_60248[57 /*7*/] = true;
	Global_60248[58 /*7*/].f_1 = joaat("SM_KILCRIMSHR");
	Global_60248[58 /*7*/] = true;
	Global_60248[59 /*7*/].f_1 = joaat("SM_KILCRIMHAL");
	Global_60248[59 /*7*/] = true;
	Global_60248[60 /*7*/].f_1 = joaat("SM_KILCIVMAI");
	Global_60248[60 /*7*/] = true;
	Global_60248[61 /*7*/].f_1 = joaat("SM_KILCIVSHT");
	Global_60248[61 /*7*/] = true;
	Global_60248[62 /*7*/].f_1 = joaat("SM_KILCIVUMA");
	Global_60248[62 /*7*/] = true;
	Global_60248[63 /*7*/].f_1 = joaat("SM_KILCIVVOM");
	Global_60248[63 /*7*/] = true;
	Global_60248[64 /*7*/].f_1 = joaat("SM_KILCIVSHR");
	Global_60248[64 /*7*/] = true;
	Global_60248[65 /*7*/].f_1 = joaat("SM_KILCIVHAL");
	Global_60248[65 /*7*/] = true;
	Global_60248[67 /*7*/].f_1 = joaat("SM_VENUSESPU");
	Global_60248[67 /*7*/] = true;
	Global_60248[68 /*7*/].f_1 = joaat("SM_NEWDAM");
	Global_60248[68 /*7*/] = true;
	Global_60248[69 /*7*/].f_1 = joaat("SM_HPKIL");
	Global_60248[69 /*7*/] = true;
	Global_60248[70 /*7*/].f_1 = joaat("SM_PUBCLUB");
	Global_60248[70 /*7*/] = true;
	Global_60248[71 /*7*/].f_1 = joaat("SM_TDRNK");
	Global_60248[71 /*7*/] = true;
	Global_60248[72 /*7*/].f_1 = joaat("SM_FRNPUB");
	Global_60248[72 /*7*/] = true;
	Global_60248[73 /*7*/].f_1 = joaat("SM_DRNKCRM");
	Global_60248[73 /*7*/] = true;
	Global_60248[74 /*7*/].f_1 = joaat("SM_RAMCOM");
	Global_60248[74 /*7*/] = true;
	Global_60248[76 /*7*/].f_1 = joaat("SM_RADCNT");
	Global_60248[76 /*7*/] = true;
	Global_60248[77 /*7*/].f_1 = joaat("SM_RADWZL");
	Global_60248[77 /*7*/] = true;
	Global_60248[78 /*7*/].f_1 = joaat("SM_RADZIT");
	Global_60248[78 /*7*/] = true;
	Global_60248[81 /*7*/].f_1 = joaat("SM_ZITITCNT");
	Global_60248[81 /*7*/] = true;
	Global_60248[82 /*7*/].f_1 = joaat("SM_ZITITWZL");
	Global_60248[82 /*7*/] = true;
	Global_60248[83 /*7*/].f_1 = joaat("SM_ZITITZIT");
	Global_60248[83 /*7*/] = true;
	Global_60248[84 /*7*/].f_1 = joaat("SM_RADCHACNT");
	Global_60248[84 /*7*/] = true;
	Global_60248[85 /*7*/].f_1 = joaat("SM_RADCHAWZL");
	Global_60248[85 /*7*/] = true;
	Global_60248[88 /*7*/].f_1 = joaat("SM_PARA");
	Global_60248[88 /*7*/] = true;
	Global_60248[89 /*7*/].f_1 = joaat("SM_TKFIRE");
	Global_60248[89 /*7*/] = true;
	Global_60248[90 /*7*/].f_1 = joaat("SM_FIBAI");
	Global_60248[90 /*7*/] = true;
	Global_60248[91 /*7*/].f_1 = joaat("SM_TANDES");
	Global_60248[91 /*7*/] = true;
	Global_60248[92 /*7*/].f_1 = joaat("SM_GAREP");
	Global_60248[92 /*7*/] = true;
	Global_60248[93 /*7*/].f_1 = joaat("SM_GAMONSP");
	Global_60248[93 /*7*/] = true;
	Global_60248[94 /*7*/].f_1 = joaat("SM_MONB");
	Global_60248[94 /*7*/] = true;
	Global_60248[98 /*7*/].f_1 = joaat("SM_MONUPSHK");
	Global_60248[98 /*7*/] = true;
	Global_60248[100 /*7*/].f_1 = joaat("SM_TAXDEST");
	Global_60248[100 /*7*/] = true;
	Global_60248[101 /*7*/].f_1 = joaat("SM_KILWBFA");
	Global_60248[101 /*7*/] = true;
	Global_60248[102 /*7*/].f_1 = joaat("SM_KILWBRU");
	Global_60248[102 /*7*/] = true;
	Global_60248[104 /*7*/].f_1 = joaat("SM_KILWMAI");
	Global_60248[104 /*7*/] = true;
	Global_60248[105 /*7*/].f_1 = joaat("SM_KILWSHT");
	Global_60248[105 /*7*/] = true;
	Global_60248[106 /*7*/].f_1 = joaat("SM_KILWUMA");
	Global_60248[106 /*7*/] = true;
	Global_60248[107 /*7*/].f_1 = joaat("SM_KILWVAP");
	Global_60248[107 /*7*/] = true;
	Global_60248[108 /*7*/].f_1 = joaat("SM_KILWVOM");
	Global_60248[108 /*7*/] = true;
	Global_60248[109 /*7*/].f_1 = joaat("SM_KILWHVY");
	Global_60248[109 /*7*/] = true;
	Global_60248[112 /*7*/].f_1 = joaat("SM_CLOBOFBIN");
	Global_60248[112 /*7*/] = true;
	Global_60248[113 /*7*/].f_1 = joaat("SM_CLOBOFPKW");
	Global_60248[113 /*7*/] = true;
	Global_60248[114 /*7*/].f_1 = joaat("SM_CLOBOFPON");
	Global_60248[114 /*7*/] = true;
	Global_60248[117 /*7*/].f_1 = joaat("SM_YOGA");
	Global_60248[117 /*7*/] = true;
	Global_60248[118 /*7*/].f_1 = joaat("SM_TRI");
	Global_60248[118 /*7*/] = true;
	Global_60248[119 /*7*/].f_1 = joaat("SM_GYM");
	Global_60248[119 /*7*/] = true;
	Global_60248[120 /*7*/].f_1 = joaat("SM_STRIP");
	Global_60248[120 /*7*/] = true;
	Global_60248[121 /*7*/].f_1 = joaat("SM_UGHOK");
	Global_60248[121 /*7*/] = true;
	Global_60248[122 /*7*/].f_1 = joaat("SM_STRTRO");
	Global_60248[122 /*7*/] = true;
	Global_60248[123 /*7*/].f_1 = joaat("SM_PISCO");
	Global_60248[123 /*7*/] = true;
	Global_60248[124 /*7*/].f_1 = joaat("SM_TOTINJ");
	Global_60248[124 /*7*/] = true;
	Global_60248[125 /*7*/].f_1 = joaat("SM_DRUGKIL");
	Global_60248[125 /*7*/] = true;
	Global_60248[126 /*7*/].f_1 = joaat("SM_HANGOVR");
	Global_60248[126 /*7*/] = true;
	Global_60248[127 /*7*/].f_1 = joaat("SM_KILLSPR");
	Global_60248[127 /*7*/] = true;
	Global_60248[129 /*7*/].f_1 = joaat("SM_PEDFIREKILL");
	Global_60248[129 /*7*/] = true;
	Global_60248[130 /*7*/].f_1 = joaat("SM_PEDFIRETICK");
	Global_60248[130 /*7*/] = true;
	Global_60248[131 /*7*/].f_1 = joaat("SM_TVTICKWAP");
	Global_60248[131 /*7*/] = true;
	Global_60248[132 /*7*/].f_1 = joaat("SM_TVTICKWIW");
	Global_60248[132 /*7*/] = true;
	Global_60248[134 /*7*/].f_1 = joaat("SM_ZITPOPZIT");
	Global_60248[134 /*7*/] = true;
	Global_60248[135 /*7*/].f_1 = joaat("SM_CARAPP");
	Global_60248[135 /*7*/] = true;
	Global_60248[137 /*7*/].f_1 = joaat("SM_STOROB");
	Global_60248[137 /*7*/] = true;
	Global_60248[162 /*7*/].f_1 = joaat("SM_PHONCALBDG");
	Global_60248[162 /*7*/] = true;
	Global_60248[163 /*7*/].f_1 = joaat("SM_PHONCALTNK");
	Global_60248[163 /*7*/] = true;
	Global_60248[164 /*7*/].f_1 = joaat("SM_PHONCALWIZ");
	Global_60248[164 /*7*/] = true;
	Global_60248[165 /*7*/].f_1 = joaat("SM_PHONTXTBDG");
	Global_60248[165 /*7*/] = true;
	Global_60248[166 /*7*/].f_1 = joaat("SM_PHONTXTTNK");
	Global_60248[166 /*7*/] = true;
	Global_60248[167 /*7*/].f_1 = joaat("SM_PHONTXTWIZ");
	Global_60248[167 /*7*/] = true;
	Global_60248[168 /*7*/].f_1 = joaat("SM_CHTICKBDG");
	Global_60248[168 /*7*/] = true;
	Global_60248[169 /*7*/].f_1 = joaat("SM_CHTICKTNK");
	Global_60248[169 /*7*/] = true;
	Global_60248[170 /*7*/].f_1 = joaat("SM_CHTICKWIZ");
	Global_60248[170 /*7*/] = true;
	Global_60248[171 /*7*/].f_1 = joaat("SM_CALCANBDG");
	Global_60248[171 /*7*/] = true;
	Global_60248[172 /*7*/].f_1 = joaat("SM_CALCANTNK");
	Global_60248[172 /*7*/] = true;
	Global_60248[173 /*7*/].f_1 = joaat("SM_CALCANWIZ");
	Global_60248[173 /*7*/] = true;
	Global_60248[138 /*7*/].f_2 = 1;
	Global_60248[138 /*7*/].f_3 = joaat("SP0_DIST_WALKING");
	Global_60248[138 /*7*/].f_4 = 1;
	Global_60248[139 /*7*/].f_2 = 1;
	Global_60248[139 /*7*/].f_3 = joaat("SP1_DIST_WALKING");
	Global_60248[139 /*7*/].f_4 = 1;
	Global_60248[140 /*7*/].f_2 = 1;
	Global_60248[140 /*7*/].f_3 = joaat("SP2_DIST_WALKING");
	Global_60248[140 /*7*/].f_4 = 1;
	Global_60248[141 /*7*/].f_2 = 1;
	Global_60248[141 /*7*/].f_3 = joaat("SP0_DIST_DRIVING_BICYCLE");
	Global_60248[141 /*7*/].f_4 = 1;
	Global_60248[142 /*7*/].f_2 = 1;
	Global_60248[142 /*7*/].f_3 = joaat("SP1_DIST_DRIVING_BICYCLE");
	Global_60248[142 /*7*/].f_4 = 1;
	Global_60248[143 /*7*/].f_2 = 1;
	Global_60248[143 /*7*/].f_3 = joaat("SP2_DIST_DRIVING_BICYCLE");
	Global_60248[143 /*7*/].f_4 = 1;
	Global_60248[144 /*7*/].f_2 = 1;
	Global_60248[144 /*7*/].f_3 = joaat("SP0_BAILED_FROM_VEHICLE");
	Global_60248[144 /*7*/].f_4 = 0;
	Global_60248[145 /*7*/].f_2 = 1;
	Global_60248[145 /*7*/].f_3 = joaat("SP1_BAILED_FROM_VEHICLE");
	Global_60248[145 /*7*/].f_4 = 0;
	Global_60248[146 /*7*/].f_2 = 1;
	Global_60248[146 /*7*/].f_3 = joaat("SP2_BAILED_FROM_VEHICLE");
	Global_60248[146 /*7*/].f_4 = 0;
	Global_60248[150 /*7*/].f_2 = 1;
	Global_60248[150 /*7*/].f_3 = joaat("SP0_LARGE_ACCIDENTS");
	Global_60248[150 /*7*/].f_4 = 0;
	Global_60248[151 /*7*/].f_2 = 1;
	Global_60248[151 /*7*/].f_3 = joaat("SP1_LARGE_ACCIDENTS");
	Global_60248[151 /*7*/].f_4 = 0;
	Global_60248[152 /*7*/].f_2 = 1;
	Global_60248[152 /*7*/].f_3 = joaat("SP2_LARGE_ACCIDENTS");
	Global_60248[152 /*7*/].f_4 = 0;
	Global_60248[153 /*7*/].f_2 = 1;
	Global_60248[153 /*7*/].f_3 = joaat("SP0_TOTAL_LEGITIMATE_KILLS");
	Global_60248[153 /*7*/].f_4 = 0;
	Global_60248[154 /*7*/].f_2 = 1;
	Global_60248[154 /*7*/].f_3 = joaat("SP1_TOTAL_LEGITIMATE_KILLS");
	Global_60248[154 /*7*/].f_4 = 0;
	Global_60248[155 /*7*/].f_2 = 1;
	Global_60248[155 /*7*/].f_3 = joaat("SP2_TOTAL_LEGITIMATE_KILLS");
	Global_60248[155 /*7*/].f_4 = 0;
	Global_60248[156 /*7*/].f_2 = 1;
	Global_60248[156 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_TAXIS");
	Global_60248[156 /*7*/].f_4 = 0;
	Global_60248[157 /*7*/].f_2 = 1;
	Global_60248[157 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_TAXIS");
	Global_60248[157 /*7*/].f_4 = 0;
	Global_60248[158 /*7*/].f_2 = 1;
	Global_60248[158 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_TAXIS");
	Global_60248[158 /*7*/].f_4 = 0;
	Global_60248[159 /*7*/].f_2 = 1;
	Global_60248[159 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_HEALTHCARE");
	Global_60248[159 /*7*/].f_4 = 0;
	Global_60248[160 /*7*/].f_2 = 1;
	Global_60248[160 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_HEALTHCARE");
	Global_60248[160 /*7*/].f_4 = 0;
	Global_60248[161 /*7*/].f_2 = 1;
	Global_60248[161 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_HEALTHCARE");
	Global_60248[161 /*7*/].f_4 = 0;
	Global_60248[174 /*7*/].f_2 = 1;
	Global_60248[174 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_IN_COP_BRIBES");
	Global_60248[174 /*7*/].f_4 = 0;
	Global_60248[175 /*7*/].f_2 = 1;
	Global_60248[175 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_IN_COP_BRIBES");
	Global_60248[175 /*7*/].f_4 = 0;
	Global_60248[176 /*7*/].f_2 = 1;
	Global_60248[176 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_IN_COP_BRIBES");
	Global_60248[176 /*7*/].f_4 = 0;
	Global_60248[177 /*7*/].f_2 = 1;
	Global_60248[177 /*7*/].f_3 = joaat("SP0_BUSTED");
	Global_60248[177 /*7*/].f_4 = 0;
	Global_60248[178 /*7*/].f_2 = 1;
	Global_60248[178 /*7*/].f_3 = joaat("SP1_BUSTED");
	Global_60248[178 /*7*/].f_4 = 0;
	Global_60248[179 /*7*/].f_2 = 1;
	Global_60248[179 /*7*/].f_3 = joaat("SP2_BUSTED");
	Global_60248[179 /*7*/].f_4 = 0;
	Global_60248[180 /*7*/].f_2 = 1;
	Global_60248[180 /*7*/].f_3 = joaat("SP0_DIED_IN_FALL");
	Global_60248[180 /*7*/].f_4 = 0;
	Global_60248[181 /*7*/].f_2 = 1;
	Global_60248[181 /*7*/].f_3 = joaat("SP1_DIED_IN_FALL");
	Global_60248[181 /*7*/].f_4 = 0;
	Global_60248[182 /*7*/].f_2 = 1;
	Global_60248[182 /*7*/].f_3 = joaat("SP2_DIED_IN_FALL");
	Global_60248[182 /*7*/].f_4 = 0;
	Global_60248[183 /*7*/].f_2 = 1;
	Global_60248[183 /*7*/].f_3 = joaat("SP0_STARS_ATTAINED");
	Global_60248[183 /*7*/].f_4 = 0;
	Global_60248[184 /*7*/].f_2 = 1;
	Global_60248[184 /*7*/].f_3 = joaat("SP1_STARS_ATTAINED");
	Global_60248[184 /*7*/].f_4 = 0;
	Global_60248[185 /*7*/].f_2 = 1;
	Global_60248[185 /*7*/].f_3 = joaat("SP2_STARS_ATTAINED");
	Global_60248[185 /*7*/].f_4 = 0;
	Global_60248[186 /*7*/].f_2 = 1;
	Global_60248[186 /*7*/].f_3 = joaat("SP0_STARS_EVADED");
	Global_60248[186 /*7*/].f_4 = 0;
	Global_60248[187 /*7*/].f_2 = 1;
	Global_60248[187 /*7*/].f_3 = joaat("SP1_STARS_EVADED");
	Global_60248[187 /*7*/].f_4 = 0;
	Global_60248[188 /*7*/].f_2 = 1;
	Global_60248[188 /*7*/].f_3 = joaat("SP2_STARS_EVADED");
	Global_60248[188 /*7*/].f_4 = 0;
	Global_60248[189 /*7*/].f_2 = 1;
	Global_60248[189 /*7*/].f_3 = joaat("SP0_MANUAL_SAVED");
	Global_60248[189 /*7*/].f_4 = 0;
	Global_60248[190 /*7*/].f_2 = 1;
	Global_60248[190 /*7*/].f_3 = joaat("SP1_MANUAL_SAVED");
	Global_60248[190 /*7*/].f_4 = 0;
	Global_60248[191 /*7*/].f_2 = 1;
	Global_60248[191 /*7*/].f_3 = joaat("SP2_MANUAL_SAVED");
	Global_60248[191 /*7*/].f_4 = 0;
	Global_60248[192 /*7*/].f_2 = 1;
	Global_60248[192 /*7*/].f_3 = joaat("SP0_KILLS_COP");
	Global_60248[192 /*7*/].f_4 = 0;
	Global_60248[193 /*7*/].f_2 = 1;
	Global_60248[193 /*7*/].f_3 = joaat("SP1_KILLS_COP");
	Global_60248[193 /*7*/].f_4 = 0;
	Global_60248[194 /*7*/].f_2 = 1;
	Global_60248[194 /*7*/].f_3 = joaat("SP2_KILLS_COP");
	Global_60248[194 /*7*/].f_4 = 0;
	Global_60248[195 /*7*/].f_2 = 1;
	Global_60248[195 /*7*/].f_3 = joaat("SP0_KILLS_SWAT");
	Global_60248[195 /*7*/].f_4 = 0;
	Global_60248[196 /*7*/].f_2 = 1;
	Global_60248[196 /*7*/].f_3 = joaat("SP1_KILLS_SWAT");
	Global_60248[196 /*7*/].f_4 = 0;
	Global_60248[197 /*7*/].f_2 = 1;
	Global_60248[197 /*7*/].f_3 = joaat("SP2_KILLS_SWAT");
	Global_60248[197 /*7*/].f_4 = 0;
	Global_60248[198 /*7*/].f_2 = 1;
	Global_60248[198 /*7*/].f_3 = joaat("SP0_TIME_IN_COVER");
	Global_60248[198 /*7*/].f_4 = 0;
	Global_60248[199 /*7*/].f_2 = 1;
	Global_60248[199 /*7*/].f_3 = joaat("SP1_TIME_IN_COVER");
	Global_60248[199 /*7*/].f_4 = 0;
	Global_60248[200 /*7*/].f_2 = 1;
	Global_60248[200 /*7*/].f_3 = joaat("SP2_TIME_IN_COVER");
	Global_60248[200 /*7*/].f_4 = 0;
	Global_59686[0 /*7*/] = joaat("SM_PRICE_AMU");
	Global_59686[0 /*7*/].f_3[0] = joaat("AMU_OW0");
	Global_59686[0 /*7*/].f_3[1] = joaat("AMU_OW1");
	Global_59686[0 /*7*/].f_3[2] = joaat("AMU_OW2");
	Global_59686[1 /*7*/] = joaat("SM_PRICE_BDG");
	Global_59686[1 /*7*/].f_3[0] = joaat("BDG_OW0");
	Global_59686[1 /*7*/].f_3[1] = joaat("BDG_OW1");
	Global_59686[1 /*7*/].f_3[2] = joaat("BDG_OW2");
	Global_59686[2 /*7*/] = joaat("SM_PRICE_BFA");
	Global_59686[2 /*7*/].f_3[0] = joaat("BFA_OW0");
	Global_59686[2 /*7*/].f_3[1] = joaat("BFA_OW1");
	Global_59686[2 /*7*/].f_3[2] = joaat("BFA_OW2");
	Global_59686[3 /*7*/] = joaat("SM_PRICE_BIN");
	Global_59686[3 /*7*/].f_3[0] = joaat("BIN_OW0");
	Global_59686[3 /*7*/].f_3[1] = joaat("BIN_OW1");
	Global_59686[3 /*7*/].f_3[2] = joaat("BIN_OW2");
	Global_59686[4 /*7*/] = joaat("SM_PRICE_BTR");
	Global_59686[4 /*7*/].f_3[0] = joaat("BTR_OW0");
	Global_59686[4 /*7*/].f_3[1] = joaat("BTR_OW1");
	Global_59686[4 /*7*/].f_3[2] = joaat("BTR_OW2");
	Global_59686[5 /*7*/] = joaat("SM_PRICE_BLE");
	Global_59686[5 /*7*/].f_3[0] = joaat("BLE_OW0");
	Global_59686[5 /*7*/].f_3[1] = joaat("BLE_OW1");
	Global_59686[5 /*7*/].f_3[2] = joaat("BLE_OW2");
	Global_59686[6 /*7*/] = joaat("SM_PRICE_BRU");
	Global_59686[6 /*7*/].f_3[0] = joaat("BRU_OW0");
	Global_59686[6 /*7*/].f_3[1] = joaat("BRU_OW1");
	Global_59686[6 /*7*/].f_3[2] = joaat("BRU_OW2");
	Global_59686[7 /*7*/] = joaat("SM_PRICE_CNT");
	Global_59686[7 /*7*/].f_3[0] = joaat("CNT_OW0");
	Global_59686[7 /*7*/].f_3[1] = joaat("CNT_OW1");
	Global_59686[7 /*7*/].f_3[2] = joaat("CNT_OW2");
	Global_59686[8 /*7*/] = joaat("SM_PRICE_CRE");
	Global_59686[8 /*7*/].f_3[0] = joaat("CRE_OW0");
	Global_59686[8 /*7*/].f_3[1] = joaat("CRE_OW1");
	Global_59686[8 /*7*/].f_3[2] = joaat("CRE_OW2");
	Global_59686[9 /*7*/] = joaat("SM_PRICE_DGP");
	Global_59686[9 /*7*/].f_3[0] = joaat("DGP_OW0");
	Global_59686[9 /*7*/].f_3[1] = joaat("DGP_OW1");
	Global_59686[9 /*7*/].f_3[2] = joaat("DGP_OW2");
	Global_59686[10 /*7*/] = joaat("SM_PRICE_WAP");
	Global_59686[10 /*7*/].f_3[0] = joaat("WAP_OW0");
	Global_59686[10 /*7*/].f_3[1] = joaat("WAP_OW1");
	Global_59686[10 /*7*/].f_3[2] = joaat("WAP_OW2");
	Global_59686[11 /*7*/] = joaat("SM_PRICE_FAC");
	Global_59686[11 /*7*/].f_3[0] = joaat("FAC_OW0");
	Global_59686[11 /*7*/].f_3[1] = joaat("FAC_OW1");
	Global_59686[11 /*7*/].f_3[2] = joaat("FAC_OW2");
	Global_59686[12 /*7*/] = joaat("SM_PRICE_FRT");
	Global_59686[12 /*7*/].f_3[0] = joaat("FRT_OW0");
	Global_59686[12 /*7*/].f_3[1] = joaat("FRT_OW1");
	Global_59686[12 /*7*/].f_3[2] = joaat("FRT_OW2");
	Global_59686[13 /*7*/] = joaat("SM_PRICE_LSC");
	Global_59686[13 /*7*/].f_3[0] = joaat("LSC_OW0");
	Global_59686[13 /*7*/].f_3[1] = joaat("LSC_OW1");
	Global_59686[13 /*7*/].f_3[2] = joaat("LSC_OW2");
	Global_59686[14 /*7*/] = joaat("SM_PRICE_LST");
	Global_59686[14 /*7*/].f_3[0] = joaat("LST_OW0");
	Global_59686[14 /*7*/].f_3[1] = joaat("LST_OW1");
	Global_59686[14 /*7*/].f_3[2] = joaat("LST_OW2");
	Global_59686[15 /*7*/] = joaat("SM_PRICE_LTD");
	Global_59686[15 /*7*/].f_3[0] = joaat("LTD_OW0");
	Global_59686[15 /*7*/].f_3[1] = joaat("LTD_OW1");
	Global_59686[15 /*7*/].f_3[2] = joaat("LTD_OW2");
	Global_59686[16 /*7*/] = joaat("SM_PRICE_MAI");
	Global_59686[16 /*7*/].f_3[0] = joaat("MAI_OW0");
	Global_59686[16 /*7*/].f_3[1] = joaat("MAI_OW1");
	Global_59686[16 /*7*/].f_3[2] = joaat("MAI_OW2");
	Global_59686[17 /*7*/] = joaat("SM_PRICE_PKW");
	Global_59686[17 /*7*/].f_3[0] = joaat("PKW_OW0");
	Global_59686[17 /*7*/].f_3[1] = joaat("PKW_OW1");
	Global_59686[17 /*7*/].f_3[2] = joaat("PKW_OW2");
	Global_59686[18 /*7*/] = joaat("SM_PRICE_PIS");
	Global_59686[18 /*7*/].f_3[0] = joaat("PIS_OW0");
	Global_59686[18 /*7*/].f_3[1] = joaat("PIS_OW1");
	Global_59686[18 /*7*/].f_3[2] = joaat("PIS_OW2");
	Global_59686[19 /*7*/] = joaat("SM_PRICE_PON");
	Global_59686[19 /*7*/].f_3[0] = joaat("PON_OW0");
	Global_59686[19 /*7*/].f_3[1] = joaat("PON_OW1");
	Global_59686[19 /*7*/].f_3[2] = joaat("PON_OW2");
	Global_59686[20 /*7*/] = joaat("SM_PRICE_RON");
	Global_59686[20 /*7*/].f_3[0] = joaat("RON_OW0");
	Global_59686[20 /*7*/].f_3[1] = joaat("RON_OW1");
	Global_59686[20 /*7*/].f_3[2] = joaat("RON_OW2");
	Global_59686[21 /*7*/] = joaat("SM_PRICE_SHT");
	Global_59686[21 /*7*/].f_3[0] = joaat("SHT_OW0");
	Global_59686[21 /*7*/].f_3[1] = joaat("SHT_OW1");
	Global_59686[21 /*7*/].f_3[2] = joaat("SHT_OW2");
	Global_59686[22 /*7*/] = joaat("SM_PRICE_SPU");
	Global_59686[22 /*7*/].f_3[0] = joaat("SPU_OW0");
	Global_59686[22 /*7*/].f_3[1] = joaat("SPU_OW1");
	Global_59686[22 /*7*/].f_3[2] = joaat("SPU_OW2");
	Global_59686[23 /*7*/] = joaat("SM_PRICE_TNK");
	Global_59686[23 /*7*/].f_3[0] = joaat("TNK_OW0");
	Global_59686[23 /*7*/].f_3[1] = joaat("TNK_OW1");
	Global_59686[23 /*7*/].f_3[2] = joaat("TNK_OW2");
	Global_59686[24 /*7*/] = joaat("SM_PRICE_WIW");
	Global_59686[24 /*7*/].f_3[0] = joaat("WIW_OW0");
	Global_59686[24 /*7*/].f_3[1] = joaat("WIW_OW1");
	Global_59686[24 /*7*/].f_3[2] = joaat("WIW_OW2");
	Global_59686[25 /*7*/] = joaat("SM_PRICE_UMA");
	Global_59686[25 /*7*/].f_3[0] = joaat("UMA_OW0");
	Global_59686[25 /*7*/].f_3[1] = joaat("UMA_OW1");
	Global_59686[25 /*7*/].f_3[2] = joaat("UMA_OW2");
	Global_59686[26 /*7*/] = joaat("SM_PRICE_VAP");
	Global_59686[26 /*7*/].f_3[0] = joaat("VAP_OW0");
	Global_59686[26 /*7*/].f_3[1] = joaat("VAP_OW1");
	Global_59686[26 /*7*/].f_3[2] = joaat("VAP_OW2");
	Global_59686[27 /*7*/] = joaat("SM_PRICE_VOM");
	Global_59686[27 /*7*/].f_3[0] = joaat("VOM_OW0");
	Global_59686[27 /*7*/].f_3[1] = joaat("VOM_OW1");
	Global_59686[27 /*7*/].f_3[2] = joaat("VOM_OW2");
	Global_59686[28 /*7*/] = joaat("SM_PRICE_WZL");
	Global_59686[28 /*7*/].f_3[0] = joaat("WZL_OW0");
	Global_59686[28 /*7*/].f_3[1] = joaat("WZL_OW1");
	Global_59686[28 /*7*/].f_3[2] = joaat("WZL_OW2");
	Global_59686[29 /*7*/] = joaat("SM_PRICE_WIZ");
	Global_59686[29 /*7*/].f_3[0] = joaat("WIZ_OW0");
	Global_59686[29 /*7*/].f_3[1] = joaat("WIZ_OW1");
	Global_59686[29 /*7*/].f_3[2] = joaat("WIZ_OW2");
	Global_59686[30 /*7*/] = joaat("SM_PRICE_ZIT");
	Global_59686[30 /*7*/].f_3[0] = joaat("ZIT_OW0");
	Global_59686[30 /*7*/].f_3[1] = joaat("ZIT_OW1");
	Global_59686[30 /*7*/].f_3[2] = joaat("ZIT_OW2");
	Global_59686[31 /*7*/] = joaat("SM_PRICE_SHK");
	Global_59686[31 /*7*/].f_3[0] = joaat("SHK_OW0");
	Global_59686[31 /*7*/].f_3[1] = joaat("SHK_OW1");
	Global_59686[31 /*7*/].f_3[2] = joaat("SHK_OW2");
	Global_59686[32 /*7*/] = joaat("SM_PRICE_MOL");
	Global_59686[32 /*7*/].f_3[0] = joaat("MOL_OW0");
	Global_59686[32 /*7*/].f_3[1] = joaat("MOL_OW1");
	Global_59686[32 /*7*/].f_3[2] = joaat("MOL_OW2");
	Global_59686[33 /*7*/] = joaat("SM_PRICE_PMP");
	Global_59686[33 /*7*/].f_3[0] = joaat("PMP_OW0");
	Global_59686[33 /*7*/].f_3[1] = joaat("PMP_OW1");
	Global_59686[33 /*7*/].f_3[2] = joaat("PMP_OW2");
	Global_59686[34 /*7*/] = joaat("SM_PRICE_GOT");
	Global_59686[34 /*7*/].f_3[0] = joaat("GOT_OW0");
	Global_59686[34 /*7*/].f_3[1] = joaat("GOT_OW1");
	Global_59686[34 /*7*/].f_3[2] = joaat("GOT_OW2");
	Global_59686[35 /*7*/] = joaat("SM_PRICE_EYE");
	Global_59686[35 /*7*/].f_3[0] = joaat("EYE_OW0");
	Global_59686[35 /*7*/].f_3[1] = joaat("EYE_OW1");
	Global_59686[35 /*7*/].f_3[2] = joaat("EYE_OW2");
	Global_59686[36 /*7*/] = joaat("SM_PRICE_HVY");
	Global_59686[36 /*7*/].f_3[0] = joaat("HVY_OW0");
	Global_59686[36 /*7*/].f_3[1] = joaat("HVY_OW1");
	Global_59686[36 /*7*/].f_3[2] = joaat("HVY_OW2");
	Global_59686[37 /*7*/] = joaat("SM_PRICE_SHR");
	Global_59686[37 /*7*/].f_3[0] = joaat("SHR_OW0");
	Global_59686[37 /*7*/].f_3[1] = joaat("SHR_OW1");
	Global_59686[37 /*7*/].f_3[2] = joaat("SHR_OW2");
	Global_59686[38 /*7*/] = joaat("SM_PRICE_HAL");
	Global_59686[38 /*7*/].f_3[0] = joaat("HAL_OW0");
	Global_59686[38 /*7*/].f_3[1] = joaat("HAL_OW1");
	Global_59686[38 /*7*/].f_3[2] = joaat("HAL_OW2");
	return;
}

void func_99() // Position - 0x9572 (38258)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


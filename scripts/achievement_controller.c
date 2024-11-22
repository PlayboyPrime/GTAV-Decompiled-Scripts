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
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
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
	var uLocal_52 = 0;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	BOOL bLocal_70 = 0;
	int iLocal_71 = 0;
	BOOL bLocal_72 = 0;
#endregion

void main() // Position - 0x0
{
	int value;

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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_53 = 0f;
	iLocal_61 = 1000;
	iLocal_62 = 3333;
	fLocal_63 = 0f;
	bLocal_70 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	iLocal_56 = MISC::GET_GAME_TIMER();
	iLocal_65 = 0;
	func_158(iLocal_66);
	func_157();
	func_155(&Global_4543384);
	func_154(&Global_4543384, 1);
	func_152(&uLocal_67);

	while (true)
	{
		if (Global_33199 != iLocal_65)
		{
			if (iLocal_65 == 0 && Global_33199 != 0)
				if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
					_DISPLAY_HELP_TEXT("CHEAT_TROPHIE" /*Cheats have been activated. Trophies will not be awarded for the duration of this session.*/, -1);
				else
					_DISPLAY_HELP_TEXT("CHEAT_ACHIEVE" /*Cheats have been activated. Achievements will not be awarded for the duration of this session.*/, -1);
		
			iLocal_65 != 0 && Global_33199 == 0;
		}
	
		iLocal_65 = Global_33199;
	
		if (!func_149(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
				func_140();
		
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
				func_138();
		
			if (Global_32958)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					value = func_123(true);
				
					if (value > 0)
					{
						func_122(12, value);
						STATS::STAT_SET_INT(2105240537, value, true);
					}
				
					if (value >= 70)
						func_116(12, 1);
				}
			
				Global_32958 = false;
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_66 = iLocal_66 + 1;
				
					if (MISC::GET_GAME_TIMER() > iLocal_56)
					{
						func_105(false);
						iLocal_56 = MISC::GET_GAME_TIMER() + iLocal_61;
					}
				
					if (MISC::GET_GAME_TIMER() > iLocal_57)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || iLocal_64 == 1)
							if (func_104(53))
								func_103();
					
						iLocal_57 = MISC::GET_GAME_TIMER() + iLocal_62;
					}
				}
			}
		
			func_95(&Global_4543384);
			func_1();
		}
		else
		{
			func_95(&Global_4543384);
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x20D
{
	BOOL flag;
	int num;

	if (!func_94(&Global_4543384))
		return;

	if (!Global_79389)
	{
		if (bLocal_72)
			bLocal_72 = false;
	
		return;
	}

	if (!func_91())
		return;

	if (bLocal_70)
	{
		if (!func_89(3, -1))
			return;
	
		if (!func_89(5, -1))
			return;
	}

	if (bLocal_72)
		return;

	flag = SOCIALCLUB::SC_ACHIEVEMENT_INFO_STATUS(&num);
	num == -1 && iLocal_71 == 0;

	if (flag && num == 0)
	{
		func_88();
		bLocal_72 = true;
	}
	else
	{
		func_2();
	}

	return;
}

void func_2() // Position - 0x29D
{
	int num;

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
		if (func_85())
			func_116(33, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_81(&uLocal_67) > 5f)
		{
			func_22(PLAYER::PLAYER_PED_ID());
			func_152(&uLocal_67);
		}
	}

	num = func_19(func_21(-1), 0);

	if (num >= 100)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
			func_116(36, 1);

	if (num >= 50)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
			func_116(35, 1);

	if (num >= 25)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
			func_116(34, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		func_16(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
		if (_MPPLY_STAT_GET_INT(-1302220678) >= 5)
			func_116(38, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
		if (func_13(48, -1) >= 10)
			func_116(39, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
		if (func_13(52, -1) > 0)
			func_116(40, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
		if (IS_BIT_SET(Global_2738935.f_2342.f_18, 1))
			func_116(41, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
		if (func_11(756, -1) >= 30)
			func_116(43, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
		if (func_13(14, -1) >= 20)
			func_116(44, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		func_9(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
		if (_STAT_GET_PACKED_BOOL(11, -1))
			func_116(48, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		func_3(false);

	return;
}

int func_3(BOOL bParam0) // Position - 0x43B
{
	if (!func_91())
		return 0;

	if (!Global_79389)
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		return 0;

	bParam0 == true;

	if (!func_4(100, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(102, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(101, -1))
	{
		bParam0 == true;
		return 0;
	}

	func_116(49, 1);
	return 1;
}

BOOL func_4(int iParam0, int iParam1) // Position - 0x4B6
{
	Hash statHash;
	BOOL outValue;

	statHash = func_5(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_5(int iParam0, int iParam1) // Position - 0x4DA
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_6(iParam1));
}

int func_6(int iParam0) // Position - 0x4EF
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
		if (num2 > -1)
		{
			Global_2750950 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750950 = 1;
		}
	}

	return num;
}

int func_7() // Position - 0x523
{
	return Global_1574926;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x52F
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_9(BOOL bParam0) // Position - 0x54B
{
	int i;
	int num;
	int num2;

	if (!func_91())
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		return 0;

	if (!Global_79389)
		return 0;

	num2 = func_11(757, -1);

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_10(num2, i, bParam0))
			num = num + 1;
	}

	if (num == 9)
	{
		func_116(45, 1);
		return 1;
	}

	return 0;
}

BOOL func_10(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5BC
{
	BOOL flag;

	flag = IS_BIT_SET(iParam0, iParam1);

	if (!bParam2)
		return flag;

	switch (iParam1)
	{
		case 0:
			return flag;
	
		case 1:
			return flag;
	
		case 2:
			return flag;
	
		case 3:
			return flag;
	
		case 4:
			return flag;
	
		case 5:
			return flag;
	
		case 6:
			return flag;
	
		case 7:
			return flag;
	
		case 8:
			return flag;
	
		default:
		
	}

	return false;
}

int func_11(int iParam0, int iParam1) // Position - 0x641
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_12(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_12(int iParam0, int iParam1) // Position - 0x670
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(iParam1));
}

int func_13(int iParam0, int iParam1) // Position - 0x685
{
	Hash statHash;
	int outValue;

	statHash = func_14(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_14(int iParam0, int iParam1) // Position - 0x6A9
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_6(iParam1));
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x6BF
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_16(BOOL bParam0) // Position - 0x6DD
{
	int num;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		return 0;

	if (!func_91())
		return 0;

	if (!Global_79389)
		return 0;

	if (bParam0)
	{
		num = func_13(21, -1);
		num = num - func_13(58, -1);
		num = num - func_13(57, -1);
	}

	if (func_17(8, -1))
	{
		func_116(37, 1);
		return 1;
	}

	return 0;
}

BOOL func_17(int iParam0, int iParam1) // Position - 0x747
{
	Hash statHash;
	BOOL outValue;

	statHash = func_18(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_18(int iParam0, int iParam1) // Position - 0x76B
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_6(iParam1));
}

int func_19(int iParam0, int iParam1) // Position - 0x781
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (func_20(num) == iParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_20(num) < iParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

// Unhandled jump detected. Output should be considered invalid
int func_20(int iParam0) // Position - 0x83C
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
		
			case 2:
				return 800;
		
			case 3:
				return 2100;
		
			case 4:
				return 3800;
		
			case 5:
				return 6100;
		
			case 6:
				return 9500;
		
			case 7:
				return 12500;
		
			case 8:
				return 16000;
		
			case 9:
				return 19800;
		
			case 10:
				return 24000;
		
			case 11:
				return 28500;
		
			case 12:
				return 33400;
		
			case 13:
				return 38700;
		
			case 14:
				return 44200;
		
			case 15:
				return &func_53;
		
			case 16:
				return 56400;
		
			case 17:
				return 63000;
		
			case 18:
				return 69900;
		
			case 19:
				return 77100;
		
			case 20:
				return 84700;
		
			case 21:
				return 92500;
		
			case 22:
				return 100700;
		
			case 23:
				return 109200;
		
			case 24:
				return 118000;
		
			case 25:
				return 127100;
		
			case 26:
				return 136500;
		
			case 27:
				return 146200;
		
			case 28:
				return 156200;
		
			case 29:
				return 166500;
		
			case 30:
				return 177100;
		
			case 31:
				return 188000;
		
			case 32:
				return 199200;
		
			case 33:
				return 210700;
		
			case 34:
				return 222400;
		
			case 35:
				return 234500;
		
			case 36:
				return 246800;
		
			case 37:
				return 259400;
		
			case 38:
				return 272300;
		
			case 39:
				return 285500;
		
			case 40:
				return 299000;
		
			case 41:
				return 312700;
		
			case 42:
				return 326800;
		
			case 43:
				return 341000;
		
			case 44:
				return 355600;
		
			case 45:
				return 370500;
		
			case 46:
				return 385600;
		
			case 47:
				return 401000;
		
			case 48:
				return 416600;
		
			case 49:
				return 432600;
		
			case 50:
				return 448800;
		
			case 51:
				return 465200;
		
			case 52:
				return 482000;
		
			case 53:
				return 499000;
		
			case 54:
				return 516300;
		
			case 55:
				return 533800;
		
			case 56:
				return 551600;
		
			case 57:
				return 569600;
		
			case 58:
				return 588000;
		
			case 59:
				return 606500;
		
			case 60:
				return 625400;
		
			case 61:
				return 644500;
		
			case 62:
				return 663800;
		
			case 63:
				return 683400;
		
			case 64:
				return 703300;
		
			case 65:
				return 723400;
		
			case 66:
				return 743800;
		
			case 67:
				return 764500;
		
			case 68:
				return 785400;
		
			case 69:
				return 806500;
		
			case 70:
				return 827900;
		
			case 71:
				return 849600;
		
			case 72:
				return 871500;
		
			case 73:
				return 893600;
		
			case 74:
				return 916000;
		
			case 75:
				return 938700;
		
			case 76:
				return 961600;
		
			case 77:
				return 984700;
		
			case 78:
				return 1008100;
		
			case 79:
				return 1031800;
		
			case 80:
				return 1055700;
		
			case 81:
				return 1079800;
		
			case 82:
				return 1104200;
		
			case 83:
				return 1128800;
		
			case 84:
				return 1153700;
		
			case 85:
				return 1178800;
		
			case 86:
				return 1204200;
		
			case 87:
				return 1229800;
		
			case 88:
				return 1255600;
		
			case 89:
				return 1281700;
		
			case 90:
				return 1308100;
		
			case 91:
				return 1334600;
		
			case 92:
				return 1361400;
		
			case 93:
				return 1388500;
		
			case 94:
				return 1415800;
		
			case 95:
				return 1443300;
		
			case 96:
				return 1471100;
		
			case 97:
				return 1499100;
		
			case 98:
				return 1527300;
		
			case 99:
				return 1555800;
		
			default:
				goto 0x534;
		}
	}
	else
	{
		num = iParam0 - 99;
		num2 = (num * (num + 1)) / 2;
		return 1555800 + (num * 28500) + (num2 * 50);
	}

	return 1555800;
}

int func_21(int iParam0) // Position - 0xD77
{
	return func_11(640, iParam0);
}

void func_22(Ped pedParam0) // Position - 0xD88
{
	int i;
	int num;

	num = 44;
	num.f_221 = 51;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
		return;

	func_77(pedParam0, &num);
	i = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_23(pedParam0, num[i /*5*/]))
		{
			func_116(29, 1);
			return;
		}
	}

	i = 0;

	for (i = 0; i < num.f_221; i = i + 1)
	{
		if (func_23(pedParam0, num.f_221[i /*5*/]))
		{
			func_116(29, 1);
			return;
		}
	}

	return;
}

BOOL func_23(Ped pedParam0, Hash hParam1) // Position - 0xE17
{
	var unk;
	int dlcWeaponIndex;
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	Hash hash;

	if (hParam1 == -61829581)
		return false;

	if (hParam1 == -656458692)
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, hParam1, false))
		return false;

	dlcWeaponIndex = func_76(hParam1, &unk);

	if (hParam1 != 453432689 && hParam1 != 584646201 && hParam1 != 1593441988 && hParam1 != 324215364 && hParam1 != 736523883 && hParam1 != 487013001 && hParam1 != -494615257 && hParam1 != 2017895192 && hParam1 != -1074790547 && hParam1 != -2084633992 && hParam1 != -1357824103 && hParam1 != 100416529 && hParam1 != 205991906 && hParam1 != -1660422300 && hParam1 != 2144741730 && hParam1 != -1568386805 && hParam1 != -572349828 && hParam1 != -270015777 && hParam1 != 392730790 && hParam1 != -1654528753 && hParam1 != -1716589765 && dlcWeaponIndex == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex) < 3)
		return false;

	num = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;

	for (i = 0; func_26(&hash, hParam1, i, false); i = i + 1)
	{
		if (hash.f_4 == -571619404)
			num2 = num2 + 1;
	
		if (hash.f_4 == 196630833)
			num = num + 1;
	
		if (func_24(pedParam0, hParam1, hash))
		{
			if (hash.f_4 == -571619404)
				num4 = hash.f_6;
			else if (hash.f_4 == 196630833)
				num3 = hash.f_6;
		}
		else if (hash.f_4 == -571619404 || hash.f_4 == 196630833 || hash.f_4 == -1843287667 || hash.f_4 == 962500902 || hash.f_4 == -31573710)
		{
		}
		else
		{
			return false;
		}
	}

	if (num > num3)
		return false;

	if (num2 > num4)
		return false;

	if (WEAPON::GET_WEAPON_TINT_COUNT(hParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, hParam1) == 0)
		return false;

	return true;
}

BOOL func_24(Ped pedParam0, Hash hParam1, Hash hParam2) // Position - 0x1097
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		return WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, hParam1, hParam2);

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x10B6
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_26(var uParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x10D7
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int dlcWeaponIndex;
	int i;
	int num15;
	var unk38;
	int ComponentDataPtr;

	num = 37;
	func_75(uParam0, 0, 989182658, 0, 0);

	switch (hParam1)
	{
		case 453432689:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, 453432689, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -19858063, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -316253668, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 899381934, 679107254, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, 1709866683, 1863181664, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -684126074, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -19858063, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, -316253668, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, 899381934, 679107254, 1, 0);
							break;
					
						case 3:
							func_75(uParam0, 1709866683, 1863181664, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -19858063, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -316253668, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, 1709866683, 1863181664, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -684126074, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 1593441988:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 119648377, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -696561875, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -966439566, 962500902, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, 1400690398, 962500902, 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 119648377, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -696561875, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -966439566, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 584646201:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 834974250, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 614078421, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -1686714580, 962500902, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, 1657753414, 962500902, 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 834974250, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 614078421, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -1686714580, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 324215364:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -884429072, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 283556395, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1657815255, 196630833, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, 1215999497, 962500902, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, 2012362801, 962500902, 2, 0);
						break;
				
					case 7:
						func_75(uParam0, -1566778158, 962500902, 3, 0);
						break;
				
					case 8:
						func_75(uParam0, 1694268374, 962500902, 4, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -884429072, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 283556395, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1657815255, 196630833, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, 1215999497, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 736523883:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, 736523883, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, 643254679, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, 889808635, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 2043113590, -571619404, 3, 0);
							break;
					
						case 4:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, 1019656791, 196630833, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, -1023114086, 1863181664, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 663170192, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 643254679, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, 889808635, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, 2043113590, -571619404, 3, 0);
							break;
					
						case 3:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, 1019656791, 196630833, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -1023114086, 1863181664, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 643254679, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 889808635, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 2043113590, -571619404, 3, 0);
						break;
				
					case 3:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, 1019656791, 196630833, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, 663170192, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1074790547:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, -1074790547, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -1101075946, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -1323216997, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, -604986051, -571619404, 3, 0);
							break;
					
						case 4:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, -1657815255, 196630833, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 8:
							func_75(uParam0, 1319990579, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -1101075946, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, -1323216997, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, -604986051, -571619404, 3, 0);
							break;
					
						case 3:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -1657815255, 196630833, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -1101075946, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -1323216997, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, -604986051, -571619404, 3, 0);
						break;
				
					case 3:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -1657815255, 196630833, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 7:
						func_75(uParam0, 1319990579, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -2084633992:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, -2084633992, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -1614924820, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -1861183855, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, -1167922891, -571619404, 3, 0);
							break;
					
						case 4:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 8:
							func_75(uParam0, -660892072, 962500902, 1, 0);
							break;
					
						case 9:
							func_75(uParam0, 1605520746, 962500902, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -1614924820, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, -1861183855, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, -1167922891, -571619404, 3, 0);
							break;
					
						case 3:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -1614924820, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -1861183855, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, -1167922891, -571619404, 3, 0);
						break;
				
					case 3:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 7:
						func_75(uParam0, -660892072, 962500902, 1, 0);
						break;
				
					case 8:
						func_75(uParam0, 1605520746, 962500902, 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -1614924820, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -1861183855, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, -1167922891, -571619404, 3, 0);
						break;
				
					case 3:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 7:
						func_75(uParam0, -660892072, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1357824103:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -91250417, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -1899902599, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 3:
					func_75(uParam0, -1439939148, 196630833, 1, 0);
					break;
			
				case 4:
					func_75(uParam0, -2089531990, 1863181664, 1, 0);
					break;
			
				case 5:
					func_75(uParam0, 930927479, 962500902, 1, 0);
					break;
			}
			break;
	
		case -1660422300:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -197857404, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -2112517305, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 1006677997, 196630833, 1, 0);
					break;
			
				case 3:
					func_75(uParam0, -690308418, 962500902, 1, 0);
					break;
			}
			break;
	
		case 2144741730:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, 2144741730, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -503336118, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -691692330, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -1828795171, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -503336118, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, -691692330, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 3:
							func_75(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -503336118, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -691692330, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -1828795171, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -494615257:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1796727865, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -2034401422, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 202788691, -1322016827, 1, 0);
					break;
			
				case 3:
					func_75(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 4:
					func_75(uParam0, -2089531990, 1863181664, 1, 0);
					break;
			}
			break;
	
		case 100416529:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1681506167, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 2:
					func_75(uParam0, -767279652, 196630833, 1, 1);
					break;
			
				case 3:
					func_75(uParam0, -1135289737, 196630833, 2, 0);
					break;
			
				case 4:
					func_75(uParam0, 1077065191, 962500902, 1, 0);
					break;
			}
			break;
	
		case 205991906:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, 205991906, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, 1198478068, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -767279652, 196630833, 1, 1);
							break;
					
						case 3:
							func_75(uParam0, -1135289737, 196630833, 2, 0);
							break;
					
						case 4:
							func_75(uParam0, 221907180, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1198478068, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, -767279652, 196630833, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -1135289737, 196630833, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 1198478068, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -767279652, 196630833, 1, 1);
						break;
				
					case 2:
						func_75(uParam0, -1135289737, 196630833, 2, 0);
						break;
				
					case 3:
						func_75(uParam0, 221907180, 962500902, 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 1198478068, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -767279652, 196630833, 1, 1);
						break;
				
					case 2:
						func_75(uParam0, -1135289737, 196630833, 2, 0);
						break;
				}
			}
			break;
	
		case -1568386805:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 202788691, -1322016827, 1, 0);
					break;
			
				case 1:
					func_75(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 2:
					func_75(uParam0, -1439939148, 196630833, 1, 0);
					break;
			}
			break;
	
		case 1119849093:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -924946682, -571619404, 1, 1);
					break;
			}
			break;
	
		case -270015777:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1928132688, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -1152981993, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 3:
					func_75(uParam0, -1657815255, 196630833, 1, 0);
					break;
			
				case 4:
					func_75(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 5:
					func_75(uParam0, 663517359, 962500902, 1, 0);
					break;
			}
			break;
	
		case -1654528753:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 202788691, -1322016827, 1, 0);
					break;
			
				case 1:
					func_75(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 2:
					func_75(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			}
			break;
	
		case -1716589765:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 580369945, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -640439150, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 899381934, 679107254, 1, 0);
					break;
			
				case 3:
					func_75(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 4:
					func_75(uParam0, 2008591151, 962500902, 1, 0);
					break;
			}
			break;
	
		case 2017895192:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -2052698631, 962500902, 1, 0);
					break;
			}
			break;
	
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -2045758401, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -785724817, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -282298175, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, -76490669, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, -1478681000, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 1675665560, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, -1322016827, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, -1654288262, -1322016827, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 2076495324, -1572840598, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, 0, 1684637069, 1, 1);
					break;
			
				case 11:
					func_75(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 12:
					func_75(uParam0, 77277509, 1684637069, 3, 0);
					break;
			
				case 13:
					func_75(uParam0, -966040254, 1684637069, 4, 0);
					break;
			
				case 14:
					func_75(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 15:
					func_75(uParam0, -1489156508, 945598191, 2, 0);
					break;
			
				case 16:
					func_75(uParam0, -1181482284, 945598191, 3, 0);
					break;
			
				case 17:
					func_75(uParam0, -932732805, 945598191, 4, 0);
					break;
			
				case 18:
					func_75(uParam0, -569259057, 945598191, 5, 0);
					break;
			
				case 19:
					func_75(uParam0, -326080308, 945598191, 6, 0);
					break;
			
				case 20:
					func_75(uParam0, 48731514, 945598191, 7, 0);
					break;
			
				case 21:
					func_75(uParam0, 880736428, 945598191, 8, 0);
					break;
			
				case 22:
					func_75(uParam0, 1303784126, 945598191, 9, 0);
					break;
			
				case 23:
					func_75(uParam0, 1134861606, -1312077031, 1, 1);
					break;
			
				case 24:
					func_75(uParam0, 1447477866, -1312077031, 2, 0);
					break;
			
				case 25:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_75(uParam0, -1860492113, 962500902, 2, 0);
					break;
			
				case 27:
					func_75(uParam0, 937772107, 962500902, 3, 0);
					break;
			
				case 28:
					func_75(uParam0, 1401650071, 962500902, 4, 0);
					break;
			
				case 29:
					func_75(uParam0, 628662130, 962500902, 5, 0);
					break;
			
				case 30:
					func_75(uParam0, -985047251, 962500902, 6, 0);
					break;
			
				case 31:
					func_75(uParam0, -812944463, 962500902, 7, 0);
					break;
			
				case 32:
					func_75(uParam0, -1447352303, 962500902, 8, 0);
					break;
			
				case 33:
					func_75(uParam0, -60338860, 962500902, 9, 0);
					break;
			
				case 34:
					func_75(uParam0, 2088750491, 962500902, 10, 0);
					break;
			
				case 35:
					func_75(uParam0, -1513913454, 962500902, 11, 0);
					break;
			
				case 36:
					func_75(uParam0, -1179558480, 962500902, 12, 0);
					break;
			}
			break;
	
		case -86904375:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 1283078430, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, 1574296533, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 391640422, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, 1025884839, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, 626875735, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 1141059345, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, -546751811, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, -1654288262, -546751811, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 11:
					func_75(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 12:
					func_75(uParam0, 77277509, 196630833, 3, 0);
					break;
			
				case 13:
					func_75(uParam0, -966040254, 196630833, 4, 0);
					break;
			
				case 14:
					func_75(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 15:
					func_75(uParam0, -2089531990, 945598191, 2, 0);
					break;
			
				case 16:
					func_75(uParam0, -1181482284, 945598191, 3, 0);
					break;
			
				case 17:
					func_75(uParam0, -932732805, 945598191, 4, 0);
					break;
			
				case 18:
					func_75(uParam0, -569259057, 945598191, 5, 0);
					break;
			
				case 19:
					func_75(uParam0, -326080308, 945598191, 6, 0);
					break;
			
				case 20:
					func_75(uParam0, 48731514, 945598191, 7, 0);
					break;
			
				case 21:
					func_75(uParam0, 880736428, 945598191, 8, 0);
					break;
			
				case 22:
					func_75(uParam0, 1303784126, 945598191, 9, 0);
					break;
			
				case 23:
					func_75(uParam0, -2093598721, -1312077031, 1, 1);
					break;
			
				case 24:
					func_75(uParam0, -1958983669, -1312077031, 2, 0);
					break;
			
				case 25:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_75(uParam0, 1272803094, 962500902, 2, 0);
					break;
			
				case 27:
					func_75(uParam0, 1080719624, 962500902, 3, 0);
					break;
			
				case 28:
					func_75(uParam0, 792221348, 962500902, 4, 0);
					break;
			
				case 29:
					func_75(uParam0, -452181427, 962500902, 5, 0);
					break;
			
				case 30:
					func_75(uParam0, -746774737, 962500902, 6, 0);
					break;
			
				case 31:
					func_75(uParam0, -2044296061, 962500902, 7, 0);
					break;
			
				case 32:
					func_75(uParam0, -199171978, 962500902, 8, 0);
					break;
			
				case 33:
					func_75(uParam0, -1428075016, 962500902, 9, 0);
					break;
			
				case 34:
					func_75(uParam0, -1735153315, 962500902, 10, 0);
					break;
			
				case 35:
					func_75(uParam0, 1796459838, 962500902, 11, 0);
					break;
			
				case 36:
					func_75(uParam0, -631911105, 962500902, 12, 0);
					break;
			}
			break;
	
		case -608341376:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 1227564412, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, 400507625, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -161179835, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, -1020871238, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, 696788003, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 1475288264, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, -546751811, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, -1654288262, -546751811, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, 1060929921, 196630833, 3, 0);
					break;
			
				case 11:
					func_75(uParam0, -966040254, 196630833, 4, 0);
					break;
			
				case 12:
					func_75(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 13:
					func_75(uParam0, -1181482284, 1863181664, 2, 0);
					break;
			
				case 14:
					func_75(uParam0, -932732805, 1863181664, 3, 0);
					break;
			
				case 15:
					func_75(uParam0, -569259057, 1863181664, 4, 0);
					break;
			
				case 16:
					func_75(uParam0, -326080308, 1863181664, 5, 0);
					break;
			
				case 17:
					func_75(uParam0, 48731514, 1863181664, 6, 0);
					break;
			
				case 18:
					func_75(uParam0, 880736428, 1863181664, 7, 0);
					break;
			
				case 19:
					func_75(uParam0, 1303784126, 1863181664, 8, 0);
					break;
			
				case 20:
					func_75(uParam0, -1018236364, -1312077031, 1, 1);
					break;
			
				case 21:
					func_75(uParam0, -1243457701, -1312077031, 2, 0);
					break;
			
				case 22:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 23:
					func_75(uParam0, 1249283253, 962500902, 2, 0);
					break;
			
				case 24:
					func_75(uParam0, -857707587, 962500902, 3, 0);
					break;
			
				case 25:
					func_75(uParam0, -1097543898, 962500902, 4, 0);
					break;
			
				case 26:
					func_75(uParam0, 1980349969, 962500902, 5, 0);
					break;
			
				case 27:
					func_75(uParam0, 1219453777, 962500902, 6, 0);
					break;
			
				case 28:
					func_75(uParam0, -1853459190, 962500902, 7, 0);
					break;
			
				case 29:
					func_75(uParam0, -2074781016, 962500902, 8, 0);
					break;
			
				case 30:
					func_75(uParam0, 457967755, 962500902, 9, 0);
					break;
			
				case 31:
					func_75(uParam0, 235171324, 962500902, 10, 0);
					break;
			
				case 32:
					func_75(uParam0, 42685294, 962500902, 11, 0);
					break;
			
				case 33:
					func_75(uParam0, -687617715, 962500902, 12, 0);
					break;
			}
			break;
	
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -98690520, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, 752418717, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 247526935, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, -130689324, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, 1005144310, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, -1981031769, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, -2101279869, 196630833, 1, 0);
					break;
			
				case 7:
					func_75(uParam0, -1135289737, 196630833, 2, 1);
					break;
			
				case 8:
					func_75(uParam0, -1233121104, 196630833, 3, 0);
					break;
			
				case 9:
					func_75(uParam0, 776198721, 196630833, 4, 0);
					break;
			
				case 10:
					func_75(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 11:
					func_75(uParam0, -1404903567, 1863181664, 2, 0);
					break;
			
				case 12:
					func_75(uParam0, 1602080333, 1863181664, 3, 0);
					break;
			
				case 13:
					func_75(uParam0, 1764221345, 1863181664, 4, 0);
					break;
			
				case 14:
					func_75(uParam0, -1869205321, -1312077031, 1, 1);
					break;
			
				case 15:
					func_75(uParam0, 277524638, -1312077031, 2, 0);
					break;
			
				case 16:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 17:
					func_75(uParam0, -130843390, 962500902, 2, 0);
					break;
			
				case 18:
					func_75(uParam0, -977347227, 962500902, 3, 0);
					break;
			
				case 19:
					func_75(uParam0, -378461067, 962500902, 4, 0);
					break;
			
				case 20:
					func_75(uParam0, 329939175, 962500902, 5, 0);
					break;
			
				case 21:
					func_75(uParam0, 643374672, 962500902, 6, 0);
					break;
			
				case 22:
					func_75(uParam0, 807875052, 962500902, 7, 0);
					break;
			
				case 23:
					func_75(uParam0, -1401804168, 962500902, 8, 0);
					break;
			
				case 24:
					func_75(uParam0, -1096495395, 962500902, 9, 0);
					break;
			
				case 25:
					func_75(uParam0, -847811454, 962500902, 10, 0);
					break;
			
				case 26:
					func_75(uParam0, -1413108537, 962500902, 11, 0);
					break;
			
				case 27:
					func_75(uParam0, 1815270123, 962500902, 12, 0);
					break;
			}
			break;
	
		case -1075685676:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1795936926, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, 1591132456, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 634039983, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, 733837882, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, -2046910199, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 1329061674, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, -1898661008, 196630833, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 1140676955, 679107254, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 11:
					func_75(uParam0, 1709866683, 1863181664, 2, 0);
					break;
			
				case 12:
					func_75(uParam0, 568543123, 1863181664, 3, 0);
					break;
			
				case 13:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 14:
					func_75(uParam0, 1550611612, 962500902, 2, 0);
					break;
			
				case 15:
					func_75(uParam0, 368550800, 962500902, 3, 0);
					break;
			
				case 16:
					func_75(uParam0, -1769069349, 962500902, 4, 0);
					break;
			
				case 17:
					func_75(uParam0, 24902297, 962500902, 5, 0);
					break;
			
				case 18:
					func_75(uParam0, -228041614, 962500902, 6, 0);
					break;
			
				case 19:
					func_75(uParam0, -584961562, 962500902, 7, 0);
					break;
			
				case 20:
					func_75(uParam0, -1153175946, 962500902, 8, 0);
					break;
			
				case 21:
					func_75(uParam0, 1301287696, 962500902, 9, 0);
					break;
			
				case 22:
					func_75(uParam0, 1597093459, 962500902, 10, 0);
					break;
			
				case 23:
					func_75(uParam0, 1769871776, 962500902, 11, 0);
					break;
			
				case 24:
					func_75(uParam0, -1827882671, 962500902, 12, 0);
					break;
			
				case 25:
					func_75(uParam0, 1141184690, 962500902, 13, 0);
					break;
			}
			break;
	
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 1277460590, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -1182573778, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 2146055916, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, -644734235, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, 974903034, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 190476639, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, 2076495324, -1572840598, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, -1613015470, 196630833, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, -452809877, 196630833, 3, 0);
					break;
			
				case 11:
					func_75(uParam0, 1038927834, 196630833, 4, 0);
					break;
			
				case 12:
					func_75(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 13:
					func_75(uParam0, -1023114086, 945598191, 1, 0);
					break;
			
				case 14:
					func_75(uParam0, -1181482284, 945598191, 2, 0);
					break;
			
				case 15:
					func_75(uParam0, -932732805, 945598191, 3, 0);
					break;
			
				case 16:
					func_75(uParam0, -569259057, 945598191, 4, 0);
					break;
			
				case 17:
					func_75(uParam0, -326080308, 945598191, 5, 0);
					break;
			
				case 18:
					func_75(uParam0, 48731514, 945598191, 6, 0);
					break;
			
				case 19:
					func_75(uParam0, 880736428, 945598191, 7, 0);
					break;
			
				case 20:
					func_75(uParam0, 1303784126, 945598191, 8, 0);
					break;
			
				case 21:
					func_75(uParam0, -653246751, -1312077031, 1, 1);
					break;
			
				case 22:
					func_75(uParam0, -1520117877, -1312077031, 2, 0);
					break;
			
				case 23:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 24:
					func_75(uParam0, -996700057, 962500902, 2, 0);
					break;
			
				case 25:
					func_75(uParam0, 940943685, 962500902, 3, 0);
					break;
			
				case 26:
					func_75(uParam0, 1263226800, 962500902, 4, 0);
					break;
			
				case 27:
					func_75(uParam0, -328035840, 962500902, 5, 0);
					break;
			
				case 28:
					func_75(uParam0, 1224100642, 962500902, 6, 0);
					break;
			
				case 29:
					func_75(uParam0, 899228776, 962500902, 7, 0);
					break;
			
				case 30:
					func_75(uParam0, 616006309, 962500902, 8, 0);
					break;
			
				case 31:
					func_75(uParam0, -1561952511, 962500902, 9, 0);
					break;
			
				case 32:
					func_75(uParam0, 572063080, 962500902, 10, 0);
					break;
			
				case 33:
					func_75(uParam0, 1170588613, 962500902, 11, 0);
					break;
			
				case 34:
					func_75(uParam0, 966612367, 962500902, 12, 0);
					break;
			}
			break;
	
		case 487013001:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, 487013001, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 2:
							func_75(uParam0, -435637410, 1863181664, 1, 0);
							break;
					
						case 3:
							func_75(uParam0, -1562927653, 962500902, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, -242322891, 962500902, 2, 0);
							break;
					
						case 5:
							func_75(uParam0, 330905451, 962500902, 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -435637410, 1863181664, 1, 0);
							break;
					
						case 2:
							func_75(uParam0, -1562927653, 962500902, 1, 0);
							break;
					
						case 3:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 1:
						func_75(uParam0, -435637410, 1863181664, 1, 0);
						break;
				
					case 2:
						func_75(uParam0, -1562927653, 962500902, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -242322891, 962500902, 2, 0);
						break;
				
					case 4:
						func_75(uParam0, 330905451, 962500902, 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 1:
						func_75(uParam0, -435637410, 1863181664, 1, 0);
						break;
				
					case 2:
						func_75(uParam0, -1562927653, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1063057011:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, -1063057011, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -959978111, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, 2089537806, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 1801039530, -571619404, 3, 0);
							break;
					
						case 4:
							func_75(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 8:
							func_75(uParam0, 1929467122, 962500902, 1, 0);
							break;
					
						case 9:
							func_75(uParam0, 302671608, 962500902, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -959978111, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, 2089537806, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, 1801039530, -571619404, 3, 0);
							break;
					
						case 3:
							func_75(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 1929467122, 962500902, 1, 0);
							break;
					
						case 8:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -959978111, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 2089537806, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 1801039530, -571619404, 3, 0);
						break;
				
					case 3:
						func_75(uParam0, 2076495324, 953267555, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 7:
						func_75(uParam0, 1929467122, 962500902, 1, 0);
						break;
				
					case 8:
						func_75(uParam0, 302671608, 962500902, 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -959978111, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 2089537806, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 1801039530, -571619404, 3, 0);
						break;
				
					case 3:
						func_75(uParam0, 2076495324, 953267555, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 7:
						func_75(uParam0, 1929467122, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1076751822:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, -1076751822, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -125817127, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, 2063610803, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, -2144080721, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -125817127, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, 2063610803, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, -2144080721, 962500902, 1, 0);
							break;
					
						case 3:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -125817127, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 2063610803, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, -2144080721, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -952879014:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, -952879014, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -667205311, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -855823675, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 471997210, 196630833, 1, 1);
							break;
					
						case 4:
							func_75(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 371102273, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -667205311, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, -855823675, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, 471997210, 196630833, 1, 1);
							break;
					
						case 3:
							func_75(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, 371102273, 962500902, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -667205311, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -855823675, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 471997210, 196630833, 1, 1);
						break;
				
					case 3:
						func_75(uParam0, 2076495324, 953267555, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, 371102273, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1045183535:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, -1045183535, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -377062173, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, 384708672, 962500902, 1, 0);
							break;
					
						case 3:
							func_75(uParam0, -1802258419, 962500902, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -377062173, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, 384708672, 962500902, 1, 0);
							break;
					
						case 2:
							func_75(uParam0, -1802258419, 962500902, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -377062173, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 384708672, 962500902, 1, 0);
						break;
				
					case 2:
						func_75(uParam0, -1802258419, 962500902, 2, 0);
						break;
				}
			}
			break;
	
		case 2132975508:
			if (func_74(iLocal_54))
			{
				if (!func_71(1623028892, 2132975508, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_75(uParam0, -979292288, -571619404, 1, 1);
							break;
					
						case 2:
							func_75(uParam0, -1284994289, -571619404, 2, 0);
							break;
					
						case 3:
							func_75(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, -1439939148, 196630833, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, -1470645128, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, -979292288, -571619404, 1, 1);
							break;
					
						case 1:
							func_75(uParam0, -1284994289, -571619404, 2, 0);
							break;
					
						case 2:
							func_75(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 3:
							func_75(uParam0, -1439939148, 196630833, 1, 0);
							break;
					
						case 4:
							func_75(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 5:
							func_75(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 6:
							func_75(uParam0, -1470645128, 962500902, 1, 0);
							break;
					
						case 7:
							func_75(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -979292288, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, -1284994289, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, 2076495324, 953267555, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1439939148, 196630833, 1, 0);
						break;
				
					case 4:
						func_75(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, -1470645128, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -845938367, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -1618338827, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -380098265, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, 1315288101, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, 1004815965, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 6:
					func_75(uParam0, 2076495324, -1572840598, 2, 0);
					break;
			
				case 7:
					func_75(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 8:
					func_75(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 9:
					func_75(uParam0, 77277509, 196630833, 3, 0);
					break;
			
				case 10:
					func_75(uParam0, 1060929921, 196630833, 4, 0);
					break;
			
				case 11:
					func_75(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 12:
					func_75(uParam0, -1404903567, 1863181664, 2, 0);
					break;
			
				case 13:
					func_75(uParam0, 1602080333, 1863181664, 3, 0);
					break;
			
				case 14:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 15:
					func_75(uParam0, -474112444, 962500902, 2, 0);
					break;
			
				case 16:
					func_75(uParam0, 387223451, 962500902, 3, 0);
					break;
			
				case 17:
					func_75(uParam0, 617753366, 962500902, 4, 0);
					break;
			
				case 18:
					func_75(uParam0, -222378256, 962500902, 5, 0);
					break;
			
				case 19:
					func_75(uParam0, 8741501, 962500902, 6, 0);
					break;
			
				case 20:
					func_75(uParam0, -601286203, 962500902, 7, 0);
					break;
			
				case 21:
					func_75(uParam0, -511433605, 962500902, 8, 0);
					break;
			
				case 22:
					func_75(uParam0, -655387818, 962500902, 9, 0);
					break;
			
				case 23:
					func_75(uParam0, -282476598, 962500902, 10, 0);
					break;
			
				case 24:
					func_75(uParam0, 1739501925, 962500902, 11, 0);
					break;
			
				case 25:
					func_75(uParam0, 1178671645, 962500902, 12, 0);
					break;
			}
			break;
	
		case -1768145561:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 382112385, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -568352468, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -2023373174, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, -570355066, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, 1362433589, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 1346235024, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 1684637069, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, 77277509, 1684637069, 3, 0);
					break;
			
				case 11:
					func_75(uParam0, -966040254, 1684637069, 4, 0);
					break;
			
				case 12:
					func_75(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 13:
					func_75(uParam0, -1489156508, 1863181664, 2, 0);
					break;
			
				case 14:
					func_75(uParam0, -1181482284, 1863181664, 3, 0);
					break;
			
				case 15:
					func_75(uParam0, -932732805, 1863181664, 4, 0);
					break;
			
				case 16:
					func_75(uParam0, -569259057, 1863181664, 5, 0);
					break;
			
				case 17:
					func_75(uParam0, -326080308, 1863181664, 6, 0);
					break;
			
				case 18:
					func_75(uParam0, 48731514, 1863181664, 7, 0);
					break;
			
				case 19:
					func_75(uParam0, 880736428, 1863181664, 8, 0);
					break;
			
				case 20:
					func_75(uParam0, 1303784126, 1863181664, 9, 0);
					break;
			
				case 21:
					func_75(uParam0, 0, -1322016827, 1, 1);
					break;
			
				case 22:
					func_75(uParam0, -1654288262, -1322016827, 2, 0);
					break;
			
				case 23:
					func_75(uParam0, -415870039, -1312077031, 1, 1);
					break;
			
				case 24:
					func_75(uParam0, -109086661, -1312077031, 2, 0);
					break;
			
				case 25:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_75(uParam0, -737430213, 962500902, 2, 0);
					break;
			
				case 27:
					func_75(uParam0, 1125852043, 962500902, 3, 0);
					break;
			
				case 28:
					func_75(uParam0, 886015732, 962500902, 4, 0);
					break;
			
				case 29:
					func_75(uParam0, -1262287139, 962500902, 5, 0);
					break;
			
				case 30:
					func_75(uParam0, -295208411, 962500902, 6, 0);
					break;
			
				case 31:
					func_75(uParam0, -544154504, 962500902, 7, 0);
					break;
			
				case 32:
					func_75(uParam0, 172765678, 962500902, 8, 0);
					break;
			
				case 33:
					func_75(uParam0, -1982877449, 962500902, 9, 0);
					break;
			
				case 34:
					func_75(uParam0, 2072122460, 962500902, 10, 0);
					break;
			
				case 35:
					func_75(uParam0, -1986220171, 962500902, 11, 0);
					break;
			
				case 36:
					func_75(uParam0, 1377355801, 962500902, 12, 0);
					break;
			}
			break;
	
		case -2009644972:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 21392614, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -829683854, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -1876057490, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, -424845447, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, -1928301566, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, -1055790298, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, 1246324211, -1572840598, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 1205768792, 196630833, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 11:
					func_75(uParam0, 1709866683, 945598191, 2, 0);
					break;
			
				case 12:
					func_75(uParam0, -1434287169, 945598191, 3, 0);
					break;
			
				case 13:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 14:
					func_75(uParam0, 259780317, 962500902, 2, 0);
					break;
			
				case 15:
					func_75(uParam0, -1973342474, 962500902, 3, 0);
					break;
			
				case 16:
					func_75(uParam0, 1996130345, 962500902, 4, 0);
					break;
			
				case 17:
					func_75(uParam0, -1455657812, 962500902, 5, 0);
					break;
			
				case 18:
					func_75(uParam0, -1668263084, 962500902, 6, 0);
					break;
			
				case 19:
					func_75(uParam0, 1308243489, 962500902, 7, 0);
					break;
			
				case 20:
					func_75(uParam0, 1122574335, 962500902, 8, 0);
					break;
			
				case 21:
					func_75(uParam0, 1420313469, 962500902, 9, 0);
					break;
			
				case 22:
					func_75(uParam0, 109848390, 962500902, 10, 0);
					break;
			
				case 23:
					func_75(uParam0, 593945703, 962500902, 11, 0);
					break;
			
				case 24:
					func_75(uParam0, 1142457062, 962500902, 12, 0);
					break;
			}
			break;
	
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1797182002, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -422587990, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -679861550, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, 1842849902, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, -193998727, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, -515203373, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 9:
					func_75(uParam0, -966040254, 1684637069, 3, 0);
					break;
			
				case 10:
					func_75(uParam0, 1528590652, 1684637069, 4, 1);
					break;
			
				case 11:
					func_75(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 12:
					func_75(uParam0, -2089531990, 945598191, 2, 0);
					break;
			
				case 13:
					func_75(uParam0, -1181482284, 945598191, 3, 0);
					break;
			
				case 14:
					func_75(uParam0, -932732805, 945598191, 4, 0);
					break;
			
				case 15:
					func_75(uParam0, -569259057, 945598191, 5, 0);
					break;
			
				case 16:
					func_75(uParam0, -326080308, 945598191, 6, 0);
					break;
			
				case 17:
					func_75(uParam0, 48731514, 945598191, 7, 0);
					break;
			
				case 18:
					func_75(uParam0, 880736428, 945598191, 8, 0);
					break;
			
				case 19:
					func_75(uParam0, 1303784126, 945598191, 9, 0);
					break;
			
				case 20:
					func_75(uParam0, 0, -546751811, 1, 1);
					break;
			
				case 21:
					func_75(uParam0, -1654288262, -546751811, 2, 0);
					break;
			
				case 22:
					func_75(uParam0, 941317513, -1312077031, 1, 1);
					break;
			
				case 23:
					func_75(uParam0, 1748450780, -1312077031, 2, 0);
					break;
			
				case 24:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 25:
					func_75(uParam0, -1869284448, 962500902, 2, 0);
					break;
			
				case 26:
					func_75(uParam0, 1931539634, 962500902, 3, 0);
					break;
			
				case 27:
					func_75(uParam0, 1624199183, 962500902, 4, 0);
					break;
			
				case 28:
					func_75(uParam0, -26834113, 962500902, 5, 0);
					break;
			
				case 29:
					func_75(uParam0, -210406055, 962500902, 6, 0);
					break;
			
				case 30:
					func_75(uParam0, 423313640, 962500902, 7, 0);
					break;
			
				case 31:
					func_75(uParam0, 276639596, 962500902, 8, 0);
					break;
			
				case 32:
					func_75(uParam0, -991356863, 962500902, 9, 0);
					break;
			
				case 33:
					func_75(uParam0, -1682848301, 962500902, 10, 0);
					break;
			
				case 34:
					func_75(uParam0, 996213771, 962500902, 11, 0);
					break;
			
				case 35:
					func_75(uParam0, -1214048550, 962500902, 12, 0);
					break;
			}
			break;
	
		case -879347409:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1172055874, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -958864266, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, 15712037, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, 284438159, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, 231258687, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 6:
					func_75(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 7:
					func_75(uParam0, 77277509, 196630833, 3, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 899381934, 679107254, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 11:
					func_75(uParam0, 654802123, 1863181664, 2, 0);
					break;
			
				case 12:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 13:
					func_75(uParam0, -1069552225, 962500902, 2, 0);
					break;
			
				case 14:
					func_75(uParam0, 11918884, 962500902, 3, 0);
					break;
			
				case 15:
					func_75(uParam0, 176157112, 962500902, 4, 0);
					break;
			
				case 16:
					func_75(uParam0, -220052855, 962500902, 5, 0);
					break;
			
				case 17:
					func_75(uParam0, 288456487, 962500902, 6, 0);
					break;
			
				case 18:
					func_75(uParam0, 398658626, 962500902, 7, 0);
					break;
			
				case 19:
					func_75(uParam0, 628697006, 962500902, 8, 0);
					break;
			
				case 20:
					func_75(uParam0, 925911836, 962500902, 9, 0);
					break;
			
				case 21:
					func_75(uParam0, 1222307441, 962500902, 10, 0);
					break;
			
				case 22:
					func_75(uParam0, 552442715, 962500902, 11, 0);
					break;
			
				case 23:
					func_75(uParam0, -648943513, 962500902, 12, 0);
					break;
			}
			break;
	
		case -2066285827:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 25766362, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -273676760, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -2111807319, -571619404, 3, 0);
					break;
			
				case 3:
					func_75(uParam0, -1449330342, -571619404, 4, 0);
					break;
			
				case 4:
					func_75(uParam0, -89655827, -571619404, 5, 0);
					break;
			
				case 5:
					func_75(uParam0, 1130501904, -571619404, 6, 0);
					break;
			
				case 6:
					func_75(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 7:
					func_75(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 8:
					func_75(uParam0, 0, 1684637069, 1, 1);
					break;
			
				case 9:
					func_75(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 10:
					func_75(uParam0, -944910075, 1684637069, 3, 0);
					break;
			
				case 11:
					func_75(uParam0, 1060929921, 1684637069, 4, 0);
					break;
			
				case 12:
					func_75(uParam0, 1704640795, -1312077031, 1, 1);
					break;
			
				case 13:
					func_75(uParam0, 1005743559, -1312077031, 2, 0);
					break;
			
				case 14:
					func_75(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 15:
					func_75(uParam0, -2089531990, 1863181664, 2, 0);
					break;
			
				case 16:
					func_75(uParam0, -1181482284, 1863181664, 3, 0);
					break;
			
				case 17:
					func_75(uParam0, -932732805, 1863181664, 4, 0);
					break;
			
				case 18:
					func_75(uParam0, -569259057, 1863181664, 5, 0);
					break;
			
				case 19:
					func_75(uParam0, -326080308, 1863181664, 6, 0);
					break;
			
				case 20:
					func_75(uParam0, 48731514, 1863181664, 7, 0);
					break;
			
				case 21:
					func_75(uParam0, 880736428, 1863181664, 8, 0);
					break;
			
				case 22:
					func_75(uParam0, 1303784126, 1863181664, 9, 0);
					break;
			
				case 23:
					func_75(uParam0, 0, -1322016827, 1, 1);
					break;
			
				case 24:
					func_75(uParam0, -1654288262, -1322016827, 2, 0);
					break;
			
				case 25:
					func_75(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_75(uParam0, -1371515465, 962500902, 2, 0);
					break;
			
				case 27:
					func_75(uParam0, -1190793877, 962500902, 3, 0);
					break;
			
				case 28:
					func_75(uParam0, -1497085720, 962500902, 4, 0);
					break;
			
				case 29:
					func_75(uParam0, -1803148180, 962500902, 5, 0);
					break;
			
				case 30:
					func_75(uParam0, -1975971886, 962500902, 6, 0);
					break;
			
				case 31:
					func_75(uParam0, 36929477, 962500902, 7, 0);
					break;
			
				case 32:
					func_75(uParam0, -268444834, 962500902, 8, 0);
					break;
			
				case 33:
					func_75(uParam0, -574769446, 962500902, 9, 0);
					break;
			
				case 34:
					func_75(uParam0, -882699739, 962500902, 10, 0);
					break;
			
				case 35:
					func_75(uParam0, -1468181474, 962500902, 11, 0);
					break;
			
				case 36:
					func_75(uParam0, -974541230, 962500902, 12, 0);
					break;
			}
			break;
	
		case -1355376991:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -673450233, 962500902, 1, 0);
					break;
			}
			break;
	
		case 727643628:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 1423184737, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -2122814295, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -1828202758, 1863181664, 1, 0);
					break;
			}
			break;
	
		case -947031628:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 1525977990, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 1824470811, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, -1277049774, 196630833, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1596416958, 196630833, 2, 0);
						break;
				
					case 4:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 7:
						func_75(uParam0, -325063463, 962500902, 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, 1525977990, -571619404, 1, 1);
						break;
				
					case 1:
						func_75(uParam0, 1824470811, -571619404, 2, 0);
						break;
				
					case 2:
						func_75(uParam0, -1277049774, 196630833, 1, 0);
						break;
				
					case 3:
						func_75(uParam0, -1596416958, 196630833, 2, 0);
						break;
				
					case 4:
						func_75(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_75(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 6:
						func_75(uParam0, 202788691, -1322016827, 1, 0);
						break;
				}
			}
			break;
	
		case -774507221:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, 927578299, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, -2053876401, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -1649287133, 679107254, 1, 0);
					break;
			
				case 3:
					func_75(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 4:
					func_75(uParam0, 202788691, -1322016827, 1, 0);
					break;
			}
			break;
	
		case -1716189206:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				num2 = func_58(hParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 370527443:
							func_75(uParam0, num[iParam2], 962500902, 1, 0);
							break;
					
						case 1109907117:
							func_75(uParam0, num[iParam2], 962500902, 2, 0);
							break;
					
						case 2055456612:
							func_75(uParam0, num[iParam2], 962500902, 3, 0);
							break;
					
						case 1690606566:
							func_75(uParam0, num[iParam2], 962500902, 4, 0);
							break;
					
						case -1633316949:
							func_75(uParam0, num[iParam2], 962500902, 5, 0);
							break;
					
						case -1461476313:
							func_75(uParam0, num[iParam2], 962500902, 6, 0);
							break;
					
						case -1770422457:
							func_75(uParam0, num[iParam2], 962500902, 7, 0);
							break;
					
						case -2059739958:
							func_75(uParam0, num[iParam2], 962500902, 8, 0);
							break;
					
						case -1280001599:
							func_75(uParam0, num[iParam2], 962500902, 9, 0);
							break;
					
						case -922885037:
							func_75(uParam0, num[iParam2], 962500902, 10, 0);
							break;
					}
				}
			}
			break;
	
		case -1786099057:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				num2 = func_58(hParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 716207715:
							func_75(uParam0, num[iParam2], 962500902, 1, 0);
							break;
					
						case 446271089:
							func_75(uParam0, num[iParam2], 962500902, 2, 0);
							break;
					
						case 1045616099:
							func_75(uParam0, num[iParam2], 962500902, 3, 0);
							break;
					
						case 1336277129:
							func_75(uParam0, num[iParam2], 962500902, 4, 0);
							break;
					
						case -513369076:
							func_75(uParam0, num[iParam2], 962500902, 5, 0);
							break;
					
						case -447700000:
							func_75(uParam0, num[iParam2], 962500902, 6, 0);
							break;
					
						case -149207179:
							func_75(uParam0, num[iParam2], 962500902, 7, 0);
							break;
					
						case 166784288:
							func_75(uParam0, num[iParam2], 962500902, 8, 0);
							break;
					
						case 2068729789:
							func_75(uParam0, num[iParam2], 962500902, 9, 0);
							break;
					
						case 1761389338:
							func_75(uParam0, num[iParam2], 962500902, 10, 0);
							break;
					}
				}
			}
			break;
	
		case -1312131151:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -1240142720, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 1924557585:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -292433650, -571619404, 1, 1);
					break;
			
				case 1:
					func_75(uParam0, 494808810, -571619404, 2, 0);
					break;
			
				case 2:
					func_75(uParam0, -2089531990, 1863181664, 3, 0);
					break;
			}
			break;
	
		case 1171102963:
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1675905033, 962500902, 1, 0);
					break;
			}
			break;
	
		default:
			dlcWeaponIndex = func_76(hParam1, &unk38);
		
			if (dlcWeaponIndex != -1)
			{
				for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
					{
						if (!func_57(ComponentDataPtr.f_3))
						{
							if (ComponentDataPtr == -571619404 || ComponentDataPtr == 291640902)
								num4 = num4 + 1;
							else if (ComponentDataPtr == 679107254 || ComponentDataPtr == -1572840598)
								num5 = num5 + 1;
							else if (ComponentDataPtr == 196630833 || ComponentDataPtr == 1684637069)
								num6 = num6 + 1;
							else if (ComponentDataPtr == -1843287667 || ComponentDataPtr == 497110245)
								num7 = num7 + 1;
							else if (ComponentDataPtr == -1322016827 || ComponentDataPtr == -546751811)
								num8 = num8 + 1;
							else if (ComponentDataPtr == 1863181664 || ComponentDataPtr == 945598191)
								num9 = num9 + 1;
							else if (ComponentDataPtr == 1731751835)
								num10 = num10 + 1;
							else if (ComponentDataPtr == 962500902)
								num11 = num11 + 1;
							else if (ComponentDataPtr == -31573710)
								num12 = num12 + 1;
							else if (ComponentDataPtr == -1312077031)
								num13 = num13 + 1;
							else
								num14 = num14 + 1;
						
							if (num15 == iParam2)
							{
								if (ComponentDataPtr == -571619404 || ComponentDataPtr == 291640902)
									num3 = num4;
								else if (ComponentDataPtr == 679107254 || ComponentDataPtr == -1572840598)
									num3 = num5;
								else if (ComponentDataPtr == 196630833 || ComponentDataPtr == 1684637069)
									num3 = num6;
								else if (ComponentDataPtr == -1843287667 || ComponentDataPtr == 497110245)
									num3 = num7;
								else if (ComponentDataPtr == -1322016827 || ComponentDataPtr == -546751811)
									num3 = num8;
								else if (ComponentDataPtr == 1863181664 || ComponentDataPtr == 945598191)
									num3 = num9;
								else if (ComponentDataPtr == 1731751835)
									num3 = num10;
								else if (ComponentDataPtr == 962500902)
									num3 = num11;
								else if (ComponentDataPtr == -31573710)
									num3 = num12;
								else if (ComponentDataPtr == -1312077031)
									num3 = num13;
								else
									num3 = num14;
							
								func_75(uParam0, ComponentDataPtr.f_3, ComponentDataPtr, num3, ComponentDataPtr.f_1);
							}
						
							num15 = num15 + 1;
						}
					}
				}
			}
			break;
	}

	if (bParam3)
		uParam0->f_2 = func_27(hParam1, *uParam0);

	return uParam0->f_4 != 989182658;
}

int func_27(Hash hParam0, int iParam1) // Position - 0x6952
{
	int price;
	float num;
	int dlcWeaponIndex;
	int i;
	var unk;
	var ComponentDataPtr;
	int dlcWeaponIndex2;
	int j;
	var unk61;
	var ComponentDataPtr2;
	var name;
	var unk136;
	float num2;

	price = 0;
	num = 2.5f;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		num = 2.5f;
	
		switch (hParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						price = 120;
						break;
				
					case -316253668:
						price = 155;
						break;
				
					case 899381934:
						price = 189;
						break;
				
					case 1709866683:
						price = 729;
						break;
				
					case -684126074:
						price = 18600;
						break;
				}
				break;
		
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						price = 136;
						break;
				
					case -696561875:
						price = 159;
						break;
				
					case 899381934:
						price = 189;
						break;
				
					case -1023114086:
						price = 735;
						break;
				
					case -966439566:
						price = 14500;
						break;
				}
				break;
		
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						price = 145;
						break;
				
					case 614078421:
						price = 165;
						break;
				
					case 899381934:
						price = 185;
						break;
				
					case -1023114086:
						price = 730;
						break;
				
					case -1686714580:
						price = 15800;
						break;
				}
				break;
		
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						price = 120;
						break;
				
					case 283556395:
						price = 137;
						break;
				
					case 899381934:
						price = 190;
						break;
				
					case -1657815255:
						price = 549;
						break;
				
					case -1489156508:
						price = 775;
						break;
				
					case 1215999497:
						price = 15100;
						break;
				}
				break;
		
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						price = 119;
						break;
				
					case 889808635:
						price = 134;
						break;
				
					case 2043113590:
						price = -1;
						break;
				
					case 2076495324:
						price = 210;
						break;
				
					case 1019656791:
						price = 549;
						break;
				
					case -1023114086:
						price = 815;
						break;
				
					case 663170192:
						price = 19300;
						break;
				}
				break;
		
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						price = 120;
						break;
				
					case -1323216997:
						price = 129;
						break;
				
					case -604986051:
						price = -1;
						break;
				
					case 202788691:
						price = 159;
						break;
				
					case 2076495324:
						price = 189;
						break;
				
					case -1657815255:
						price = 565;
						break;
				
					case -1489156508:
						price = 810;
						break;
				
					case 1319990579:
						price = 14400;
						break;
				}
				break;
		
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						price = 99;
						break;
				
					case -1861183855:
						price = 105;
						break;
				
					case -1167922891:
						price = -1;
						break;
				
					case 202788691:
						price = 132;
						break;
				
					case 2076495324:
						price = 150;
						break;
				
					case -1596416958:
						price = 450;
						break;
				
					case -2089531990:
						price = 815;
						break;
				
					case -660892072:
						price = 17900;
						break;
				}
				break;
		
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						price = 110;
						break;
				
					case -1899902599:
						price = 124;
						break;
				
					case 2076495324:
						price = 159;
						break;
				
					case -1439939148:
						price = 450;
						break;
				
					case -2089531990:
						price = 812;
						break;
				
					case 930927479:
						price = 16500;
						break;
				}
				break;
		
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						price = 135;
						break;
				
					case -2112517305:
						price = 145;
						break;
				
					case 1006677997:
						price = 450;
						break;
				
					case -690308418:
						price = 15600;
						break;
				}
				break;
		
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						price = 119;
						break;
				
					case -691692330:
						price = 126;
						break;
				
					case 202788691:
						price = 129;
						break;
				
					case -1596416958:
						price = 559;
						break;
				
					case -1828795171:
						price = 14000;
						break;
				}
				break;
		
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						price = 189;
						break;
				
					case -435637410:
						price = 975;
						break;
				
					case -1562927653:
						price = 16900;
						break;
				}
				break;
		
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						price = 129;
						break;
				
					case -2034401422:
						price = 139;
						break;
				
					case 202788691:
						price = 150;
						break;
				
					case 2076495324:
						price = 225;
						break;
				
					case -2089531990:
						price = 899;
						break;
				}
				break;
		
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						price = -1;
						break;
				
					case -767279652:
						price = 559;
						break;
				
					case -1135289737:
						price = 975;
						break;
				
					case -1489156508:
						price = 920;
						break;
				
					case 1077065191:
						price = 13000;
						break;
				}
				break;
		
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						price = -1;
						break;
				
					case -767279652:
						price = 575;
						break;
				
					case -1135289737:
						price = 999;
						break;
				}
				break;
		
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						price = 128;
						break;
				
					case 2076495324:
						price = 185;
						break;
				
					case -1439939148:
						price = &func_1;
						break;
				}
				break;
		
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						price = -1;
						break;
				}
				break;
		
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						price = 110;
						break;
				
					case -1152981993:
						price = 9700;
						break;
				
					case 2076495324:
						price = 2275;
						break;
				
					case -1657815255:
						price = 10875;
						break;
				
					case -1489156508:
						price = 12400;
						break;
				
					case 663517359:
						price = 17600;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_55() || func_54())
					price = 0;
				break;
		
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						price = 4100;
						break;
				
					case 2076495324:
						price = 2300;
						break;
				
					case -1489156508:
						price = 12450;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_55() || func_54())
					price = 0;
				break;
		
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						price = 0;
						break;
				
					case -640439150:
						price = 9500;
						break;
				
					case 899381934:
						price = 2000;
						break;
				
					case -1489156508:
						price = 12250;
						break;
				
					case 2008591151:
						price = 20000;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_55() || func_54())
					price = 0;
				break;
		
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						price = 13700;
						break;
				}
				break;
		
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						price = 0;
						break;
				
					case -855823675:
						price = 3612;
						break;
				
					case 471997210:
						price = 0;
						break;
				
					case 2076495324:
						price = 1020;
						break;
				
					case -2089531990:
						price = 5000;
						break;
				
					case 202788691:
						price = 1760;
						break;
				
					case 371102273:
						price = 17200;
						break;
				}
				break;
		
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						price = 0;
						break;
				
					case 1694090795:
						price = 3680;
						break;
				
					case 899381934:
						price = 710;
						break;
				
					case -1023114086:
						price = 4800;
						break;
				
					case 2053798779:
						price = 12000;
						break;
				}
				break;
		
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						price = 4900;
						break;
				
					case -287703709:
						price = 5600;
						break;
				
					case 1351683121:
						price = 5500;
						break;
				
					case -1755194916:
						price = 5200;
						break;
				
					case 2112683568:
						price = 4600;
						break;
				
					case 1062111910:
						price = 4700;
						break;
				
					case 146278587:
						price = 4800;
						break;
				
					case -494162961:
						price = 4300;
						break;
				
					case 2062808965:
						price = 4000;
						break;
				}
				break;
		
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						price = 108;
						break;
				
					case -1284994289:
						price = 9950;
						break;
				
					case 2076495324:
						price = 2575;
						break;
				
					case -1657815255:
						price = 11350;
						break;
				
					case -1489156508:
						price = 12500;
						break;
				
					case 202788691:
						price = 4275;
						break;
				
					case -1470645128:
						price = 16600;
						break;
				}
				break;
		
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						price = 29;
						break;
				
					case 2063610803:
						price = 9150;
						break;
				
					case -2144080721:
						price = 13900;
						break;
				}
				break;
		
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						price = 108;
						break;
				
					case 2089537806:
						price = 9975;
						break;
				
					case 1801039530:
						price = -1;
						break;
				
					case 2076495324:
						price = 2525;
						break;
				
					case -1596416958:
						price = 11550;
						break;
				
					case -1489156508:
						price = 12500;
						break;
				
					case 1929467122:
						price = 18000;
						break;
				}
				break;
		
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						price = 0;
						break;
				
					case -1188271751:
						price = 3680;
						break;
				
					case -1444295948:
						price = -1;
						break;
				
					case -1023114086:
						price = 4840;
						break;
				}
				break;
		
			default:
				dlcWeaponIndex = func_76(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_57(ComponentDataPtr.f_3))
							{
								if (ComponentDataPtr.f_3 == iParam1)
								{
									num = 1f;
								
									if (!func_52(iParam1))
										ComponentDataPtr.f_5 = -1;
								
									if (ComponentDataPtr.f_5 == -1)
										price = -1;
									else
										price = ComponentDataPtr.f_5;
								
									if (hParam0 == 1317494643)
										if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_55() || func_54())
											price = 0;
								}
							}
						}
					}
				}
				break;
		}
	}
	else
	{
		num = 2.5f;
	
		switch (hParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						price = 120;
						break;
				
					case -316253668:
						price = 9175;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2812);
						break;
				
					case 899381934:
						price = 1675;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4030);
						break;
				
					case 1709866683:
						price = 12050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4031);
						break;
				
					case -684126074:
						price = Global_262145.f_11067;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4092);
						break;
				
					case 1623028892:
						price = Global_262145.f_20916;
						break;
				}
				break;
		
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						price = 136;
						break;
				
					case -696561875:
						price = Global_262145.f_20814;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2813);
						break;
				
					case 899381934:
						price = 1825;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4032);
						break;
				
					case -1023114086:
						price = Global_262145.f_20815;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4033);
						break;
				
					case -966439566:
						price = Global_262145.f_12415;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4089);
						break;
				
					case 1400690398:
						price = 0;
						break;
				}
				break;
		
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						price = 145;
						break;
				
					case 614078421:
						price = 9400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2815);
						break;
				
					case 899381934:
						price = 1975;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4034);
						break;
				
					case -1023114086:
						price = 12200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4035);
						break;
				
					case -1686714580:
						price = Global_262145.f_11066;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4085);
						break;
				
					case 1657753414:
						price = Global_262145.f_31329;
						break;
				}
				break;
		
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						price = 120;
						break;
				
					case 283556395:
						price = 9325;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2816);
						break;
				
					case 899381934:
						price = 1900;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4038);
						break;
				
					case -1657815255:
						price = 10800;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4040);
						break;
				
					case -1489156508:
						price = 12150;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4039);
						break;
				
					case 1215999497:
						price = Global_262145.f_11070;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4091);
						break;
				
					case 2012362801:
						price = Global_262145.f_31328;
						break;
				
					case -1566778158:
						price = 0;
						break;
				
					case 1694268374:
						price = 0;
						break;
				}
				break;
		
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						price = 119;
						break;
				
					case 889808635:
						price = 9475;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2817);
						break;
				
					case 2043113590:
						price = Global_262145.f_16527;
						break;
				
					case 2076495324:
						price = 2050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4041);
						break;
				
					case 1019656791:
						price = 10825;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4043);
						break;
				
					case -1023114086:
						price = 12250;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4042);
						break;
				
					case 663170192:
						price = Global_262145.f_11069;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4096);
						break;
				
					case 1623028892:
						price = Global_262145.f_20917;
						break;
				}
				break;
		
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						price = 120;
						break;
				
					case -1323216997:
						price = 9550;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2819);
						break;
				
					case -604986051:
						price = Global_262145.f_16522;
						break;
				
					case 202788691:
						price = 4200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4051);
						break;
				
					case 2076495324:
						price = 2125;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4048);
						break;
				
					case -1657815255:
						price = 10850;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4050);
						break;
				
					case -1489156508:
						price = 12300;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4049);
						break;
				
					case 1319990579:
						price = Global_262145.f_11063;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4086);
						break;
				
					case 1623028892:
						price = Global_262145.f_20919;
						break;
				}
				break;
		
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						price = 99;
						break;
				
					case -1861183855:
						price = 9775;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2820);
						break;
				
					case -1167922891:
						price = Global_262145.f_16521;
						break;
				
					case 202788691:
						price = 4350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4055);
						break;
				
					case 2076495324:
						price = 2350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4052);
						break;
				
					case -1596416958:
						price = 10900;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4054);
						break;
				
					case -2089531990:
						price = 12450;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4053);
						break;
				
					case -660892072:
						price = Global_262145.f_11065;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4087);
						break;
				
					case 1623028892:
						price = Global_262145.f_20920;
						break;
				
					case 1605520746:
						price = 0;
						break;
				}
				break;
		
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						price = 110;
						break;
				
					case -1899902599:
						price = 9925;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2821);
						break;
				
					case 2076495324:
						price = 2425;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4056);
						break;
				
					case -1439939148:
						price = 10950;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4058);
						break;
				
					case -2089531990:
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4057);
						break;
				
					case 930927479:
						price = Global_262145.f_11064;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4084);
						break;
				}
				break;
		
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						price = 135;
						break;
				
					case -2112517305:
						price = 9850;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2822);
						break;
				
					case 1006677997:
						price = 10925;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4059);
						break;
				
					case -690308418:
						price = Global_262145.f_12416;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4090);
						break;
				}
				break;
		
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						price = 119;
						break;
				
					case -691692330:
						price = 10000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2823);
						break;
				
					case 202788691:
						price = 4425;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4074);
						break;
				
					case -1596416958:
						price = 10975;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4075);
						break;
				
					case -1828795171:
						price = Global_262145.f_12417;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4088);
						break;
				
					case 1623028892:
						price = Global_262145.f_20918;
						break;
				}
				break;
		
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						price = 1750;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4060);
						break;
				
					case -435637410:
						price = 12350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4061);
						break;
				
					case -1562927653:
						price = Global_262145.f_12412;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4094);
						break;
				
					case 1623028892:
						price = Global_262145.f_22583;
						break;
				
					case -242322891:
						price = Global_262145.f_31326;
						break;
				
					case 330905451:
						price = 0;
						break;
				}
				break;
		
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						price = 129;
						break;
				
					case -2034401422:
						price = 9625;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2824);
						break;
				
					case 202788691:
						price = 4275;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4064);
						break;
				
					case 2076495324:
						price = 2200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4065);
						break;
				
					case -2089531990:
						price = 12350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4066);
						break;
				}
				break;
		
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						price = -1;
						break;
				
					case -767279652:
						price = 12400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4067);
						break;
				
					case -1135289737:
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4068);
						break;
				
					case -1489156508:
						price = 12050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4069);
						break;
				
					case 1077065191:
						price = Global_262145.f_11072;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4097);
						break;
				}
				break;
		
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						price = -1;
						break;
				
					case -767279652:
						price = 99;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4070);
						break;
				
					case -1135289737:
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4071);
						break;
				
					case 1623028892:
						price = Global_262145.f_20921;
						break;
				
					case 221907180:
						price = 0;
						break;
				}
				break;
		
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						price = 4500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4076);
						break;
				
					case 2076495324:
						price = 2500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4072);
						break;
				
					case -1439939148:
						price = 11000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4073);
						break;
				}
				break;
		
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						price = -1;
						break;
				}
				break;
		
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						price = 110;
						break;
				
					case -1152981993:
						price = 9700;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2818);
						break;
				
					case 2076495324:
						price = 2275;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4044);
						break;
				
					case -1657815255:
						price = 10875;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4047);
						break;
				
					case -1489156508:
						price = 12400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4045);
						break;
				
					case 663517359:
						price = Global_262145.f_12413;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4046);
						break;
				}
				break;
		
			case 1627465347:
				switch (iParam1)
				{
					case 484812453:
						price = 0;
						break;
				
					case -355941776:
						price = Global_262145.f_7136;
						break;
				}
				break;
		
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						price = 0;
						break;
				
					case 2063610803:
						price = Global_262145.f_7834;
						break;
				
					case -2144080721:
						price = Global_262145.f_12414;
						break;
				
					case 1623028892:
						price = Global_262145.f_22588;
						break;
				}
				break;
		
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						price = 0;
						break;
				
					case 2089537806:
						price = Global_262145.f_7838;
						break;
				
					case 1801039530:
						price = Global_262145.f_16524;
						break;
				
					case 2076495324:
						price = Global_262145.f_7841;
						break;
				
					case -1596416958:
						price = Global_262145.f_7837;
						break;
				
					case -1489156508:
						price = Global_262145.f_7835;
						break;
				
					case 202788691:
						price = Global_262145.f_7840;
						break;
				
					case 1929467122:
						price = Global_262145.f_12418;
						break;
				
					case 1623028892:
						price = Global_262145.f_22584;
						break;
				
					case 302671608:
						price = 0;
						break;
				}
				break;
		
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						price = 0;
						break;
				
					case 1694090795:
						price = Global_262145.f_7839;
						break;
				
					case 899381934:
						price = Global_262145.f_7842;
						break;
				
					case -1023114086:
						price = Global_262145.f_7836;
						break;
				
					case 2053798779:
						price = Global_262145.f_7861;
						break;
				}
				break;
		
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						price = 0;
						break;
				
					case -1284994289:
						price = Global_262145.f_7845;
						break;
				
					case 2076495324:
						price = Global_262145.f_7847;
						break;
				
					case -2089531990:
						price = Global_262145.f_7843;
						break;
				
					case -1439939148:
						price = Global_262145.f_7844;
						break;
				
					case 202788691:
						price = Global_262145.f_7846;
						break;
				
					case -1470645128:
						price = Global_262145.f_12419;
						break;
				
					case 1623028892:
						price = Global_262145.f_22587;
						break;
				}
				break;
		
			case 137902532:
				switch (iParam1)
				{
					case 1168357051:
						price = 0;
						break;
				
					case 867832552:
						price = Global_262145.f_8319;
						break;
				
					case -1023114086:
						price = Global_262145.f_8320;
						break;
				}
				break;
		
			case 984333226:
				switch (iParam1)
				{
					case 844049759:
						price = 0;
						break;
				
					case -1759709443:
						price = Global_262145.f_8904;
						break;
				
					case -2000168365:
						price = Global_262145.f_16528;
						break;
				
					case 2076495324:
						price = Global_262145.f_8905;
						break;
				
					case -1489156508:
						price = Global_262145.f_8906;
						break;
				
					case 202788691:
						price = Global_262145.f_8907;
						break;
				}
				break;
		
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						price = 0;
						break;
				
					case -855823675:
						price = Global_262145.f_8910;
						break;
				
					case 2076495324:
						price = Global_262145.f_8911;
						break;
				
					case -2089531990:
						price = Global_262145.f_8913;
						break;
				
					case 202788691:
						price = Global_262145.f_8914;
						break;
				
					case 371102273:
						price = Global_262145.f_8915;
						break;
				
					case 1623028892:
						price = Global_262145.f_22585;
						break;
				}
				break;
		
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						price = 4100;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_15085);
						break;
				
					case 2076495324:
						price = 2300;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4062);
						break;
				
					case -1489156508:
						price = 12450;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4063);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_55() || func_54())
					price = 0;
				break;
		
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						price = 0;
						break;
				
					case -640439150:
						price = 9500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2814);
						break;
				
					case 899381934:
						price = 2000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4036);
						break;
				
					case -1489156508:
						price = 12250;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4037);
						break;
				
					case 2008591151:
						price = Global_262145.f_11068;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4093);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_55() || func_54())
					price = 0;
				break;
		
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						price = Global_262145.f_11071;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4095);
						break;
				}
				break;
		
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						price = Global_262145.f_11392;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4098);
						break;
				
					case -287703709:
						price = Global_262145.f_11393;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4099);
						break;
				
					case 1351683121:
						price = Global_262145.f_11394;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4100);
						break;
				
					case -1755194916:
						price = Global_262145.f_11395;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4101);
						break;
				
					case 2112683568:
						price = Global_262145.f_11396;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4102);
						break;
				
					case 1062111910:
						price = Global_262145.f_11397;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4103);
						break;
				
					case 146278587:
						price = Global_262145.f_11398;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4104);
						break;
				
					case -494162961:
						price = Global_262145.f_11399;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4105);
						break;
				
					case 2062808965:
						price = Global_262145.f_11400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4106);
						break;
				}
				break;
		
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						price = 0;
						break;
				
					case -1188271751:
						price = Global_262145.f_11416;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4107);
						break;
				
					case -1444295948:
						price = Global_262145.f_16526;
						break;
				
					case -1023114086:
						price = Global_262145.f_11417;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4108);
						break;
				}
				break;
		
			case -538741184:
				switch (iParam1)
				{
					case -1858624256:
						price = 0;
						break;
				
					case 1530822070:
						price = Global_262145.f_13243;
						break;
				
					case -409758110:
						price = Global_262145.f_13244;
						break;
				}
				break;
		
			case -1045183535:
				switch (iParam1)
				{
					case -377062173:
						price = 0;
						break;
				
					case 384708672:
						price = Global_262145.f_13301;
						break;
				
					case -1802258419:
						price = Global_262145.f_13242;
						break;
				
					case 1623028892:
						price = Global_262145.f_22586;
						break;
				}
				break;
		
			case 1649403952:
				switch (iParam1)
				{
					case 1363085923:
						price = 0;
						break;
				
					case 1509923832:
						price = Global_262145.f_15022;
						break;
				
					case -972590066:
						price = Global_262145.f_16523;
						break;
				}
				break;
		
			case -275439685:
				switch (iParam1)
				{
					case 703231006:
						price = 0;
						break;
				}
				break;
		
			case -1121678507:
				switch (iParam1)
				{
					case -2067221805:
						price = 0;
						break;
				
					case -1820405577:
						price = Global_262145.f_18852;
						break;
				}
				break;
		
			case 171789620:
				switch (iParam1)
				{
					case 1125642654:
						price = 0;
						break;
				
					case 860508675:
						price = Global_262145.f_20810;
						break;
				
					case 1857603803:
						price = Global_262145.f_16525;
						break;
				
					case 2076495324:
						price = Global_262145.f_20811;
						break;
				
					case -1439939148:
						price = Global_262145.f_20813;
						break;
				
					case 202788691:
						price = Global_262145.f_20812;
						break;
				}
				break;
		
			case 961495388:
				switch (iParam1)
				{
					case -2045758401:
						price = 0;
						break;
				
					case -785724817:
						price = Global_262145.f_20922;
						break;
				
					case -1478681000:
						price = Global_262145.f_20923;
						break;
				
					case 1675665560:
						price = Global_262145.f_20924;
						break;
				
					case -76490669:
						price = Global_262145.f_20925;
						break;
				
					case -282298175:
						price = Global_262145.f_20926;
						break;
				
					case 2076495324:
						price = Global_262145.f_20927;
						break;
				
					case 1108334355:
						price = Global_262145.f_20928;
						break;
				
					case 77277509:
						price = Global_262145.f_20929;
						break;
				
					case 1060929921:
						price = Global_262145.f_20930;
						break;
				
					case -966040254:
						price = Global_262145.f_20931;
						break;
				
					case -1489156508:
						price = Global_262145.f_20932;
						break;
				
					case -1181482284:
						price = Global_262145.f_20933;
						break;
				
					case -932732805:
						price = Global_262145.f_20934;
						break;
				
					case -569259057:
						price = Global_262145.f_20935;
						break;
				
					case -326080308:
						price = Global_262145.f_20936;
						break;
				
					case 48731514:
						price = Global_262145.f_20937;
						break;
				
					case 880736428:
						price = Global_262145.f_20938;
						break;
				
					case 1303784126:
						price = Global_262145.f_20939;
						break;
				
					case -1654288262:
						price = Global_262145.f_20940;
						break;
				
					case 1134861606:
						price = 0;
						break;
				
					case 1447477866:
						price = Global_262145.f_20941;
						break;
				
					case -1860492113:
						price = Global_262145.f_21050;
						break;
				
					case 937772107:
						price = Global_262145.f_21051;
						break;
				
					case 1401650071:
						price = Global_262145.f_21052;
						break;
				
					case 628662130:
						price = Global_262145.f_21053;
						break;
				
					case -985047251:
						price = Global_262145.f_21054;
						break;
				
					case -812944463:
						price = Global_262145.f_21055;
						break;
				
					case -1447352303:
						price = Global_262145.f_21056;
						break;
				
					case -60338860:
						price = Global_262145.f_21057;
						break;
				
					case 2088750491:
						price = Global_262145.f_21058;
						break;
				
					case -1513913454:
						price = Global_262145.f_21059;
						break;
				
					case -1179558480:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -86904375:
				switch (iParam1)
				{
					case 1283078430:
						price = 0;
						break;
				
					case 1574296533:
						price = Global_262145.f_20942;
						break;
				
					case 626875735:
						price = Global_262145.f_20943;
						break;
				
					case 1141059345:
						price = Global_262145.f_20944;
						break;
				
					case 1025884839:
						price = Global_262145.f_20945;
						break;
				
					case 391640422:
						price = Global_262145.f_20946;
						break;
				
					case 2076495324:
						price = Global_262145.f_20947;
						break;
				
					case 1108334355:
						price = Global_262145.f_20948;
						break;
				
					case 77277509:
						price = Global_262145.f_20949;
						break;
				
					case 1060929921:
						price = Global_262145.f_20950;
						break;
				
					case -966040254:
						price = Global_262145.f_20951;
						break;
				
					case -2089531990:
						price = Global_262145.f_20952;
						break;
				
					case -1181482284:
						price = Global_262145.f_20953;
						break;
				
					case -932732805:
						price = Global_262145.f_20954;
						break;
				
					case -569259057:
						price = Global_262145.f_20955;
						break;
				
					case -326080308:
						price = Global_262145.f_20956;
						break;
				
					case 48731514:
						price = Global_262145.f_20957;
						break;
				
					case 880736428:
						price = Global_262145.f_20958;
						break;
				
					case 1303784126:
						price = Global_262145.f_20959;
						break;
				
					case -1654288262:
						price = Global_262145.f_20960;
						break;
				
					case -2093598721:
						price = 0;
						break;
				
					case -1958983669:
						price = Global_262145.f_20961;
						break;
				
					case 1272803094:
						price = Global_262145.f_21050;
						break;
				
					case 1080719624:
						price = Global_262145.f_21051;
						break;
				
					case 792221348:
						price = Global_262145.f_21052;
						break;
				
					case -452181427:
						price = Global_262145.f_21053;
						break;
				
					case -746774737:
						price = Global_262145.f_21054;
						break;
				
					case -2044296061:
						price = Global_262145.f_21055;
						break;
				
					case -199171978:
						price = Global_262145.f_21056;
						break;
				
					case -1428075016:
						price = Global_262145.f_21057;
						break;
				
					case -1735153315:
						price = Global_262145.f_21058;
						break;
				
					case 1796459838:
						price = Global_262145.f_21059;
						break;
				
					case -631911105:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -608341376:
				switch (iParam1)
				{
					case 1227564412:
						price = 0;
						break;
				
					case 400507625:
						price = Global_262145.f_20962;
						break;
				
					case 696788003:
						price = Global_262145.f_20963;
						break;
				
					case 1475288264:
						price = Global_262145.f_20964;
						break;
				
					case -1020871238:
						price = Global_262145.f_20965;
						break;
				
					case -161179835:
						price = Global_262145.f_20966;
						break;
				
					case 1108334355:
						price = Global_262145.f_20967;
						break;
				
					case 77277509:
						price = Global_262145.f_20968;
						break;
				
					case 1060929921:
						price = Global_262145.f_20969;
						break;
				
					case -966040254:
						price = Global_262145.f_20970;
						break;
				
					case -1181482284:
						price = Global_262145.f_20971;
						break;
				
					case -932732805:
						price = Global_262145.f_20972;
						break;
				
					case -569259057:
						price = Global_262145.f_20973;
						break;
				
					case -326080308:
						price = Global_262145.f_20974;
						break;
				
					case 48731514:
						price = Global_262145.f_20975;
						break;
				
					case 880736428:
						price = Global_262145.f_20976;
						break;
				
					case 1303784126:
						price = Global_262145.f_20977;
						break;
				
					case -1654288262:
						price = Global_262145.f_20978;
						break;
				
					case -1018236364:
						price = 0;
						break;
				
					case -1243457701:
						price = Global_262145.f_20979;
						break;
				
					case 1249283253:
						price = Global_262145.f_21050;
						break;
				
					case -857707587:
						price = Global_262145.f_21051;
						break;
				
					case -1097543898:
						price = Global_262145.f_21052;
						break;
				
					case 1980349969:
						price = Global_262145.f_21053;
						break;
				
					case 1219453777:
						price = Global_262145.f_21054;
						break;
				
					case -1853459190:
						price = Global_262145.f_21055;
						break;
				
					case -2074781016:
						price = Global_262145.f_21056;
						break;
				
					case 457967755:
						price = Global_262145.f_21057;
						break;
				
					case 235171324:
						price = Global_262145.f_21058;
						break;
				
					case 42685294:
						price = Global_262145.f_21059;
						break;
				
					case -687617715:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case 177293209:
				switch (iParam1)
				{
					case -98690520:
						price = 0;
						break;
				
					case 752418717:
						price = Global_262145.f_20980;
						break;
				
					case -130689324:
						price = Global_262145.f_20981;
						break;
				
					case 1005144310:
						price = Global_262145.f_20983;
						break;
				
					case 247526935:
						price = Global_262145.f_20984;
						break;
				
					case -1981031769:
						price = Global_262145.f_20982;
						break;
				
					case -2101279869:
						price = Global_262145.f_20985;
						break;
				
					case -1135289737:
						price = 0;
						break;
				
					case -1233121104:
						price = Global_262145.f_20986;
						break;
				
					case 776198721:
						price = Global_262145.f_20987;
						break;
				
					case -1404903567:
						price = Global_262145.f_20988;
						break;
				
					case 1602080333:
						price = Global_262145.f_20989;
						break;
				
					case 1764221345:
						price = Global_262145.f_20990;
						break;
				
					case -1869205321:
						price = 0;
						break;
				
					case 277524638:
						price = Global_262145.f_20991;
						break;
				
					case -130843390:
						price = Global_262145.f_21050;
						break;
				
					case -977347227:
						price = Global_262145.f_21051;
						break;
				
					case -378461067:
						price = Global_262145.f_21052;
						break;
				
					case 329939175:
						price = Global_262145.f_21053;
						break;
				
					case 643374672:
						price = Global_262145.f_21054;
						break;
				
					case 807875052:
						price = Global_262145.f_21055;
						break;
				
					case -1401804168:
						price = Global_262145.f_21056;
						break;
				
					case -1096495395:
						price = Global_262145.f_21057;
						break;
				
					case -847811454:
						price = Global_262145.f_21058;
						break;
				
					case -1413108537:
						price = Global_262145.f_21059;
						break;
				
					case 1815270123:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -1075685676:
				switch (iParam1)
				{
					case -1795936926:
						price = 0;
						break;
				
					case 1591132456:
						price = Global_262145.f_20992;
						break;
				
					case -2046910199:
						price = Global_262145.f_20994;
						break;
				
					case 1329061674:
						price = Global_262145.f_20993;
						break;
				
					case 733837882:
						price = Global_262145.f_20995;
						break;
				
					case 634039983:
						price = Global_262145.f_20996;
						break;
				
					case 1140676955:
						price = Global_262145.f_20997;
						break;
				
					case -1898661008:
						price = Global_262145.f_20998;
						break;
				
					case 1709866683:
						price = Global_262145.f_20999;
						break;
				
					case 568543123:
						price = Global_262145.f_21000;
						break;
				
					case 1550611612:
						price = Global_262145.f_21050;
						break;
				
					case 368550800:
						price = Global_262145.f_21051;
						break;
				
					case -1769069349:
						price = Global_262145.f_21052;
						break;
				
					case 24902297:
						price = Global_262145.f_21053;
						break;
				
					case -228041614:
						price = Global_262145.f_21054;
						break;
				
					case -584961562:
						price = Global_262145.f_21055;
						break;
				
					case -1153175946:
						price = Global_262145.f_21056;
						break;
				
					case 1301287696:
						price = Global_262145.f_21057;
						break;
				
					case 1597093459:
						price = Global_262145.f_21058;
						break;
				
					case 1769871776:
						price = Global_262145.f_21059;
						break;
				
					case -1827882671:
						price = Global_262145.f_21060;
						break;
				
					case 1141184690:
						price = 0;
						break;
				}
				break;
		
			case 2024373456:
				switch (iParam1)
				{
					case 1277460590:
						price = 0;
						break;
				
					case -1182573778:
						price = Global_262145.f_21001;
						break;
				
					case 974903034:
						price = Global_262145.f_21003;
						break;
				
					case 190476639:
						price = Global_262145.f_21002;
						break;
				
					case -644734235:
						price = Global_262145.f_21004;
						break;
				
					case 2146055916:
						price = Global_262145.f_21005;
						break;
				
					case 2076495324:
						price = Global_262145.f_21006;
						break;
				
					case -1613015470:
						price = Global_262145.f_21007;
						break;
				
					case -452809877:
						price = Global_262145.f_21008;
						break;
				
					case 1038927834:
						price = Global_262145.f_21009;
						break;
				
					case -1023114086:
						price = Global_262145.f_21010;
						break;
				
					case -1181482284:
						price = Global_262145.f_21011;
						break;
				
					case -932732805:
						price = Global_262145.f_21012;
						break;
				
					case -569259057:
						price = Global_262145.f_21013;
						break;
				
					case -326080308:
						price = Global_262145.f_21014;
						break;
				
					case 48731514:
						price = Global_262145.f_21015;
						break;
				
					case 880736428:
						price = Global_262145.f_21016;
						break;
				
					case 1303784126:
						price = Global_262145.f_21017;
						break;
				
					case -653246751:
						price = 0;
						break;
				
					case -1520117877:
						price = Global_262145.f_21018;
						break;
				
					case -996700057:
						price = Global_262145.f_21050;
						break;
				
					case 940943685:
						price = Global_262145.f_21051;
						break;
				
					case 1263226800:
						price = Global_262145.f_21052;
						break;
				
					case -328035840:
						price = Global_262145.f_21053;
						break;
				
					case 1224100642:
						price = Global_262145.f_21054;
						break;
				
					case 899228776:
						price = Global_262145.f_21055;
						break;
				
					case 616006309:
						price = Global_262145.f_21056;
						break;
				
					case -1561952511:
						price = Global_262145.f_21057;
						break;
				
					case 572063080:
						price = Global_262145.f_21058;
						break;
				
					case 1170588613:
						price = Global_262145.f_21059;
						break;
				
					case 966612367:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case 1432025498:
				switch (iParam1)
				{
					case -845938367:
						price = 0;
						break;
				
					case 1315288101:
						price = Global_262145.f_22615;
						break;
				
					case 1004815965:
						price = Global_262145.f_22616;
						break;
				
					case -380098265:
						price = Global_262145.f_22614;
						break;
				
					case -1618338827:
						price = Global_262145.f_22613;
						break;
				
					case 2076495324:
						price = Global_262145.f_22642;
						break;
				
					case 1108334355:
						price = Global_262145.f_22643;
						break;
				
					case 77277509:
						price = Global_262145.f_22644;
						break;
				
					case 1060929921:
						price = Global_262145.f_22645;
						break;
				
					case -1404903567:
						price = Global_262145.f_22646;
						break;
				
					case 1602080333:
						price = Global_262145.f_22647;
						break;
				
					case -474112444:
						price = Global_262145.f_21050;
						break;
				
					case 387223451:
						price = Global_262145.f_21051;
						break;
				
					case 617753366:
						price = Global_262145.f_21052;
						break;
				
					case -222378256:
						price = Global_262145.f_21053;
						break;
				
					case 8741501:
						price = Global_262145.f_21054;
						break;
				
					case -601286203:
						price = Global_262145.f_21055;
						break;
				
					case -511433605:
						price = Global_262145.f_21056;
						break;
				
					case -655387818:
						price = Global_262145.f_21057;
						break;
				
					case -282476598:
						price = Global_262145.f_21058;
						break;
				
					case 1739501925:
						price = Global_262145.f_21059;
						break;
				
					case 1178671645:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -1768145561:
				switch (iParam1)
				{
					case 382112385:
						price = 0;
						break;
				
					case -568352468:
						price = Global_262145.f_22617;
						break;
				
					case 1362433589:
						price = Global_262145.f_22621;
						break;
				
					case 1346235024:
						price = Global_262145.f_22619;
						break;
				
					case -570355066:
						price = Global_262145.f_22620;
						break;
				
					case -2023373174:
						price = Global_262145.f_22618;
						break;
				
					case 2076495324:
						price = Global_262145.f_22648;
						break;
				
					case 1108334355:
						price = Global_262145.f_22649;
						break;
				
					case 77277509:
						price = Global_262145.f_22650;
						break;
				
					case -966040254:
						price = Global_262145.f_22651;
						break;
				
					case -1489156508:
						price = Global_262145.f_22652;
						break;
				
					case -1181482284:
						price = Global_262145.f_22653;
						break;
				
					case -932732805:
						price = Global_262145.f_22654;
						break;
				
					case -569259057:
						price = Global_262145.f_22655;
						break;
				
					case -326080308:
						price = Global_262145.f_22656;
						break;
				
					case 48731514:
						price = Global_262145.f_22657;
						break;
				
					case 880736428:
						price = Global_262145.f_22658;
						break;
				
					case 1303784126:
						price = Global_262145.f_22659;
						break;
				
					case -1654288262:
						price = Global_262145.f_22660;
						break;
				
					case -415870039:
						price = 0;
						break;
				
					case -109086661:
						price = Global_262145.f_22661;
						break;
				
					case -737430213:
						price = Global_262145.f_21050;
						break;
				
					case 1125852043:
						price = Global_262145.f_21051;
						break;
				
					case 886015732:
						price = Global_262145.f_21052;
						break;
				
					case -1262287139:
						price = Global_262145.f_21053;
						break;
				
					case -295208411:
						price = Global_262145.f_21054;
						break;
				
					case -544154504:
						price = Global_262145.f_21055;
						break;
				
					case 172765678:
						price = Global_262145.f_21056;
						break;
				
					case -1982877449:
						price = Global_262145.f_21057;
						break;
				
					case 2072122460:
						price = Global_262145.f_21058;
						break;
				
					case -1986220171:
						price = Global_262145.f_21059;
						break;
				
					case 1377355801:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -2009644972:
				switch (iParam1)
				{
					case 21392614:
						price = 0;
						break;
				
					case -829683854:
						price = Global_262145.f_23525;
						break;
				
					case -1055790298:
						price = Global_262145.f_22637;
						break;
				
					case -1928301566:
						price = Global_262145.f_22639;
						break;
				
					case -424845447:
						price = Global_262145.f_22638;
						break;
				
					case -1876057490:
						price = Global_262145.f_22636;
						break;
				
					case 1246324211:
						price = Global_262145.f_22693;
						break;
				
					case 1205768792:
						price = Global_262145.f_22694;
						break;
				
					case 1709866683:
						price = Global_262145.f_22695;
						break;
				
					case -1434287169:
						price = Global_262145.f_22696;
						break;
				
					case 259780317:
						price = Global_262145.f_21050;
						break;
				
					case -1973342474:
						price = Global_262145.f_21051;
						break;
				
					case 1996130345:
						price = Global_262145.f_21052;
						break;
				
					case -1455657812:
						price = Global_262145.f_21053;
						break;
				
					case -1668263084:
						price = Global_262145.f_21054;
						break;
				
					case 1308243489:
						price = Global_262145.f_21055;
						break;
				
					case 1122574335:
						price = Global_262145.f_21056;
						break;
				
					case 1420313469:
						price = Global_262145.f_21057;
						break;
				
					case 109848390:
						price = Global_262145.f_21058;
						break;
				
					case 593945703:
						price = Global_262145.f_21059;
						break;
				
					case 1142457062:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case 1785463520:
				switch (iParam1)
				{
					case -1797182002:
						price = 0;
						break;
				
					case -422587990:
						price = Global_262145.f_22622;
						break;
				
					case -193998727:
						price = Global_262145.f_22626;
						break;
				
					case -515203373:
						price = Global_262145.f_22624;
						break;
				
					case 1842849902:
						price = Global_262145.f_22625;
						break;
				
					case -679861550:
						price = Global_262145.f_22623;
						break;
				
					case 2076495324:
						price = Global_262145.f_22662;
						break;
				
					case 1108334355:
						price = Global_262145.f_22663;
						break;
				
					case -966040254:
						price = Global_262145.f_22664;
						break;
				
					case 1528590652:
						price = 0;
						break;
				
					case -2089531990:
						price = Global_262145.f_22665;
						break;
				
					case -1181482284:
						price = Global_262145.f_22666;
						break;
				
					case -932732805:
						price = Global_262145.f_22667;
						break;
				
					case -569259057:
						price = Global_262145.f_22668;
						break;
				
					case -326080308:
						price = Global_262145.f_22669;
						break;
				
					case 48731514:
						price = Global_262145.f_22670;
						break;
				
					case 880736428:
						price = Global_262145.f_22671;
						break;
				
					case 1303784126:
						price = Global_262145.f_22672;
						break;
				
					case -1654288262:
						price = Global_262145.f_22673;
						break;
				
					case 941317513:
						price = 0;
						break;
				
					case 1748450780:
						price = Global_262145.f_22674;
						break;
				
					case -1869284448:
						price = Global_262145.f_21050;
						break;
				
					case 1931539634:
						price = Global_262145.f_21051;
						break;
				
					case 1624199183:
						price = Global_262145.f_21052;
						break;
				
					case -26834113:
						price = Global_262145.f_21053;
						break;
				
					case -210406055:
						price = Global_262145.f_21054;
						break;
				
					case 423313640:
						price = Global_262145.f_21055;
						break;
				
					case 276639596:
						price = Global_262145.f_21056;
						break;
				
					case -991356863:
						price = Global_262145.f_21057;
						break;
				
					case -1682848301:
						price = Global_262145.f_21058;
						break;
				
					case 996213771:
						price = Global_262145.f_21059;
						break;
				
					case -1214048550:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -879347409:
				switch (iParam1)
				{
					case -1172055874:
						price = 0;
						break;
				
					case -958864266:
						price = Global_262145.f_22627;
						break;
				
					case 231258687:
						price = Global_262145.f_22628;
						break;
				
					case 284438159:
						price = Global_262145.f_22630;
						break;
				
					case 15712037:
						price = Global_262145.f_22629;
						break;
				
					case 1108334355:
						price = Global_262145.f_22675;
						break;
				
					case 77277509:
						price = Global_262145.f_22676;
						break;
				
					case 899381934:
						price = Global_262145.f_22677;
						break;
				
					case 654802123:
						price = Global_262145.f_22678;
						break;
				
					case -1069552225:
						price = Global_262145.f_21050;
						break;
				
					case 11918884:
						price = Global_262145.f_21051;
						break;
				
					case 176157112:
						price = Global_262145.f_21052;
						break;
				
					case -220052855:
						price = Global_262145.f_21053;
						break;
				
					case 288456487:
						price = Global_262145.f_21054;
						break;
				
					case 398658626:
						price = Global_262145.f_21055;
						break;
				
					case 628697006:
						price = Global_262145.f_21056;
						break;
				
					case 925911836:
						price = Global_262145.f_21057;
						break;
				
					case 1222307441:
						price = Global_262145.f_21058;
						break;
				
					case 552442715:
						price = Global_262145.f_21059;
						break;
				
					case -648943513:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -2066285827:
				switch (iParam1)
				{
					case 25766362:
						price = 0;
						break;
				
					case -273676760:
						price = Global_262145.f_22631;
						break;
				
					case -89655827:
						price = Global_262145.f_22635;
						break;
				
					case 1130501904:
						price = Global_262145.f_22633;
						break;
				
					case -1449330342:
						price = Global_262145.f_22634;
						break;
				
					case -2111807319:
						price = Global_262145.f_22632;
						break;
				
					case 2076495324:
						price = Global_262145.f_22679;
						break;
				
					case 1108334355:
						price = Global_262145.f_22680;
						break;
				
					case -944910075:
						price = Global_262145.f_22681;
						break;
				
					case 1060929921:
						price = Global_262145.f_22682;
						break;
				
					case 1704640795:
						price = 0;
						break;
				
					case 1005743559:
						price = Global_262145.f_22692;
						break;
				
					case -2089531990:
						price = Global_262145.f_22683;
						break;
				
					case -1181482284:
						price = Global_262145.f_22684;
						break;
				
					case -932732805:
						price = Global_262145.f_22685;
						break;
				
					case -569259057:
						price = Global_262145.f_22686;
						break;
				
					case -326080308:
						price = Global_262145.f_22687;
						break;
				
					case 48731514:
						price = Global_262145.f_22688;
						break;
				
					case 880736428:
						price = Global_262145.f_22689;
						break;
				
					case 1303784126:
						price = Global_262145.f_22690;
						break;
				
					case -1654288262:
						price = Global_262145.f_22691;
						break;
				
					case -1371515465:
						price = Global_262145.f_21050;
						break;
				
					case -1190793877:
						price = Global_262145.f_21051;
						break;
				
					case -1497085720:
						price = Global_262145.f_21052;
						break;
				
					case -1803148180:
						price = Global_262145.f_21053;
						break;
				
					case -1975971886:
						price = Global_262145.f_21054;
						break;
				
					case 36929477:
						price = Global_262145.f_21055;
						break;
				
					case -268444834:
						price = Global_262145.f_21056;
						break;
				
					case -574769446:
						price = Global_262145.f_21057;
						break;
				
					case -882699739:
						price = Global_262145.f_21058;
						break;
				
					case -1468181474:
						price = Global_262145.f_21059;
						break;
				
					case -974541230:
						price = Global_262145.f_21060;
						break;
				}
				break;
		
			case -1355376991:
				switch (iParam1)
				{
					case -673450233:
						price = 0;
						break;
				}
				break;
		
			case 727643628:
				switch (iParam1)
				{
					case 1423184737:
						price = 0;
						break;
				
					case -2122814295:
						price = Global_262145.f_28220;
						break;
				
					case -1828202758:
						price = Global_262145.f_28221;
						break;
				}
				break;
		
			case 94989220:
				switch (iParam1)
				{
					case -971688363:
						price = 0;
						break;
				
					case 2076495324:
						price = Global_262145.f_30160;
						break;
				
					case -2089531990:
						price = Global_262145.f_30161;
						break;
				}
				break;
		
			case 1470379660:
				switch (iParam1)
				{
					case -1423479223:
						price = 0;
						break;
				}
				break;
		
			case -1658906650:
				switch (iParam1)
				{
					case 759617595:
						price = Global_262145.f_30147;
						break;
				
					case 1749732930:
						price = Global_262145.f_30148;
						break;
				
					case 1803744149:
						price = Global_262145.f_30149;
						break;
				
					case -1439939148:
						price = Global_262145.f_30150;
						break;
				
					case 2076495324:
						price = Global_262145.f_30151;
						break;
				
					case -2089531990:
						price = Global_262145.f_30152;
						break;
				}
				break;
		
			case -947031628:
				switch (iParam1)
				{
					case 1525977990:
						price = Global_262145.f_31295;
						break;
				
					case 1824470811:
						price = Global_262145.f_31296;
						break;
				
					case -325063463:
						price = Global_262145.f_31327;
						break;
				
					case 202788691:
						price = Global_262145.f_31301;
						break;
				
					case 2076495324:
						price = Global_262145.f_31299;
						break;
				
					case -1596416958:
						price = Global_262145.f_31298;
						break;
				
					case -2089531990:
						price = Global_262145.f_31300;
						break;
				
					case -1277049774:
						price = Global_262145.f_31297;
						break;
				}
				break;
		
			case -774507221:
				switch (iParam1)
				{
					case 927578299:
						price = 0;
						break;
				
					case -2053876401:
						price = Global_262145.f_32508;
						break;
				
					case -1649287133:
						price = Global_262145.f_32510;
						break;
				
					case -1489156508:
						price = Global_262145.f_32511;
						break;
				
					case 202788691:
						price = Global_262145.f_32509;
						break;
				}
				break;
		
			case -1716189206:
				switch (iParam1)
				{
					case 370527443:
						price = *Global_262145.f_33515;
						break;
				
					case 1109907117:
						price = *Global_262145.f_33519;
						break;
				
					case 2055456612:
						price = *Global_262145.f_33516;
						break;
				
					case 1690606566:
						price = *Global_262145.f_33517;
						break;
				
					case -1633316949:
						price = *Global_262145.f_33520;
						break;
				
					case -1461476313:
						price = *Global_262145.f_33518;
						break;
				
					case -1770422457:
						price = *Global_262145.f_33522;
						break;
				
					case -2059739958:
						price = *Global_262145.f_33521;
						break;
				
					case -1280001599:
						price = *Global_262145.f_33523;
						break;
				
					case -922885037:
						price = *Global_262145.f_33524;
						break;
				}
				break;
		
			case -1786099057:
				switch (iParam1)
				{
					case 716207715:
						price = *Global_262145.f_33505;
						break;
				
					case 446271089:
						price = *Global_262145.f_33506;
						break;
				
					case 1045616099:
						price = *Global_262145.f_33508;
						break;
				
					case 1336277129:
						price = *Global_262145.f_33509;
						break;
				
					case -513369076:
						price = *Global_262145.f_33510;
						break;
				
					case -447700000:
						price = *Global_262145.f_33511;
						break;
				
					case -149207179:
						price = *Global_262145.f_33512;
						break;
				
					case 166784288:
						price = *Global_262145.f_33513;
						break;
				
					case 2068729789:
						price = *Global_262145.f_33514;
						break;
				
					case 1761389338:
						price = *Global_262145.f_33507;
						break;
				}
				break;
		
			case 465894841:
				switch (iParam1)
				{
					case 375646046:
						price = 0;
						break;
				
					case 503494624:
						price = *Global_262145.f_33488;
						break;
				}
				break;
		
			case 350597077:
				switch (iParam1)
				{
					case 943088878:
						price = *Global_262145.f_34934;
						break;
				
					case 310778254:
						price = *Global_262145.f_34935;
						break;
				
					case -1489156508:
						price = *Global_262145.f_34937;
						break;
				
					case -1657815255:
						price = *Global_262145.f_34936;
						break;
				}
				break;
		
			case -1312131151:
				switch (iParam1)
				{
					case -1240142720:
						price = 0;
						break;
				}
				break;
		
			case 1924557585:
				switch (iParam1)
				{
					case -292433650:
						price = 0;
						break;
				
					case 494808810:
						price = *Global_262145.f_35075;
						break;
				
					case -2089531990:
						price = *Global_262145.f_35076;
						break;
				}
				break;
		
			case 1171102963:
				switch (iParam1)
				{
					case -1675905033:
						price = 0;
						break;
				}
				break;
		
			default:
				dlcWeaponIndex2 = func_76(hParam0, &unk61);
			
				if (dlcWeaponIndex2 != -1)
				{
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex2); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex2, j, &ComponentDataPtr2))
						{
							if (!func_57(ComponentDataPtr2.f_3))
							{
								if (ComponentDataPtr2.f_3 == iParam1)
								{
									num = 1f;
								
									if (ComponentDataPtr2.f_5 == -1)
										price = -1;
									else
										price = ComponentDataPtr2.f_5;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_50())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk136, func_48(iParam1, hParam0), 16);
		func_39(&name, unk136, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_46(hParam0), func_45(hParam0), -1, false, false, 2);
	
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
			price = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&name), 1671640801, true);
	}

	if (price > 0)
	{
		num2 = func_28(hParam0, &price, num);
		num2 != 1f;
	}

	return price;
}

float func_28(Hash hParam0, var uParam1, float fParam2) // Position - 0xA59D
{
	float num;
	float num2;
	int num3;

	num = 0f;
	num2 = 0f;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_50())
	{
		num2 = num2 + func_38();
		num = 1f - num2;
		*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * num);
		return num;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * fParam2);

	if (!Global_79389)
	{
		if (*uParam1 != 0)
		{
			num3 = func_29(hParam0);
		
			if (num3 == 3)
				num2 = 0.1f;
			else if (num3 == 2)
				num2 = 0.15f;
			else if (num3 == 1)
				num2 = 0.25f;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		num2 = num2 + fLocal_53;
		num2 = num2 + func_38();
	}

	num = 1f - num2;
	*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * num);
	return num;
}

int func_29(Hash hParam0) // Position - 0xA66D
{
	eCharacter character;
	int num;
	int i;
	var unk;
	BOOL flag;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (hParam0 == 0 || !func_32(character))
		return -1;

	num = 7;

	switch (hParam0)
	{
		case -1569615261:
			break;
	
		case -72657034:
			break;
	
		case 324215364:
			num = 1;
			break;
	
		case 736523883:
			num = 1;
			break;
	
		case 2017895192:
			num = 3;
			break;
	
		case 487013001:
			num = 3;
			break;
	
		case -494615257:
			num = 3;
			break;
	
		case -1074790547:
			num = 2;
			break;
	
		case -2084633992:
			num = 2;
			break;
	
		case -1357824103:
			num = 2;
			break;
	
		case 100416529:
			break;
	
		case 205991906:
			break;
	
		case -1660422300:
			num = 4;
			break;
	
		case 2144741730:
			num = 4;
			break;
	
		case -1312131151:
			break;
	
		case -1568386805:
			break;
	
		case 1119849093:
			num = 5;
			break;
	
		case -1716189206:
			break;
	
		case 1737195953:
			break;
	
		case 883325847:
			break;
	
		case 911657153:
			break;
	
		case 584646201:
			num = 0;
			break;
	
		case 1593441988:
			num = 0;
			break;
	
		case 453432689:
			num = 0;
			break;
	
		case -37975472:
			break;
	
		case -1813897027:
			break;
	
		case 741814745:
			break;
	}

	if (num != 7)
	{
		switch (func_30(num, character))
		{
			case 1:
				return 3;
		
			case 2:
				return 2;
		
			case 3:
				return 1;
		}
	}
	else
	{
		unk = 6;
		unk[0] = func_30(1, character);
		unk[1] = func_30(3, character);
		unk[2] = func_30(2, character);
		unk[3] = func_30(4, character);
		unk[4] = func_30(5, character);
		unk[5] = func_30(0, character);
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 3)
				flag = true;
		}
	
		if (!flag)
			return 1;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 2)
				flag = true;
		}
	
		if (!flag)
			return 2;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 1)
				flag = true;
		}
	
		if (!flag)
			return 3;
	}

	return -1;
}

int func_30(int iParam0, eCharacter echParam1) // Position - 0xA8C9
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (iParam0 == 0)
	{
		num = 0;
		num2 = 1;
		num3 = 2;
		num4 = -1;
	}
	else if (iParam0 == 1)
	{
		num = 3;
		num2 = 4;
		num3 = 5;
		num4 = -1;
	}
	else if (iParam0 == 2)
	{
		num = 9;
		num2 = 10;
		num3 = 11;
		num4 = -1;
	}
	else if (iParam0 == 3)
	{
		num = 6;
		num2 = 7;
		num3 = 8;
		num4 = -1;
	}
	else if (iParam0 == 4)
	{
		num = 12;
		num2 = 13;
		num3 = 14;
		num4 = -1;
	}
	else if (iParam0 == 5)
	{
		num = 15;
		num2 = 16;
		num3 = 17;
		num4 = -1;
	}
	else if (iParam0 == 6)
	{
		num = 18;
		num2 = 19;
		num3 = 20;
		num4 = 21;
	}
	else
	{
		return 0;
	}

	num5 = func_31(num, echParam1);

	if (func_31(num2, echParam1) < num5)
		num5 = func_31(num2, echParam1);

	if (func_31(num3, echParam1) < num5)
		num5 = func_31(num3, echParam1);

	if (num4 != -1)
		if (func_31(num4, echParam1) < num5)
			num5 = func_31(num4, echParam1);

	return num5;
}

int func_31(int iParam0, eCharacter echParam1) // Position - 0xA9CD
{
	return Global_113969.f_19150[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

BOOL func_32(eCharacter echParam0) // Position - 0xA9E9
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xA9F5
{
	func_34();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_34() // Position - 0xAA0E
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_32(character) && !func_149(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_32(Global_113969.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xAB0B
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xAB48
{
	if (func_32(character))
		return func_37(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_37(eCharacter echParam0) // Position - 0xAB6D
{
	return Global_2169[echParam0 /*29*/];
}

var func_38() // Position - 0xAB7C
{
	return Global_101585.f_2096;
}

void func_39(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, BOOL bParam12, int iParam13) // Position - 0xAB8B
{
	switch (MISC::GET_HASH_KEY(&uParam1))
	{
		case 64715401:
		case -2016195117:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_R", 16);
			break;
	
		case -414529079:
		case -1253005183:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_C", 16);
			break;
	
		case 336264847:
		case -1119195824:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_RO", 16);
			break;
	
		case 531395379:
		case -672224483:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_CH", 16);
			break;
	
		case 1034118160:
		case 600999375:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_G", 16);
			break;
	
		case -218834291:
		case -859056265:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_B", 16);
			break;
	
		case 1779531303:
		case 82051787:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_FW" /*Fireworks*/, 16);
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);

	switch (iParam6)
	{
		case 0:
			if (hParam5 == 1885233650)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == -1667301416)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_HA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 1:
			if (hParam5 == 1885233650)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == -1667301416)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_CL_", 64);
		
			if (iParam7 == 12)
				TEXT_LABEL_APPEND_STRING(sParam0, "OUTFIT_", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam10 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
			}
			break;
	
		case 2:
			if (hParam5 == 1885233650)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == -1667301416)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_TA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(sParam0, "WP_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
			break;
	
		case 4:
			if (hParam5 == Global_76458)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (hParam5 == Global_76459)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == Global_76460)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (hParam5 == Global_76461)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (hParam5 == Global_76462)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == func_44())
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (hParam5 == func_43())
			{
				if (iParam7 == 40)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				else if (iParam7 == 2)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t2_v38", 64);
				else if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t1_v38", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t0_v38", 64);
			}
			else if (hParam5 == func_42())
			{
				if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t0_v4", 64);
			}
			else if (hParam5 == -426933872)
			{
				if (iParam7 == 40)
					if (iParam13 == 61)
						TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t0_v0", 64);
					else if (iParam13 == 103)
						if (!func_40())
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v0", 64);
						else
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v1", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_AVENGER_t0_v33", 64);
			}
			else if (hParam5 == 0)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
			
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_1_", 64);
					else if (iParam9 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_2_", 64);
					else if (iParam9 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_EXTRA_1_", 64);
				
					if (iParam10 == 5)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHROME_", 64);
					else if (iParam10 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CLASSIC_", 64);
					else if (iParam10 == 0)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALLIC_", 64);
					else if (iParam10 == 4)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALS_", 64);
					else if (iParam10 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_MATTE_", 64);
					else if (iParam10 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_PEARLESCENT_", 64);
					else if (iParam10 == 7)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_NONE_", 64);
				
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_6_", 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1) || MISC::GET_HASH_KEY(&uParam1) == -515263000)
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_INSURANCE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case -2033222435:
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (hParam5)
				{
					case -757735410:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "FCR2", 16);
						break;
				
					case 1790834270:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "DIABLOUS2", 16);
						break;
				
					case -2022483795:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "COMET3", 16);
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
					
						if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
							return;
						break;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEU_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_t0_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case -2033222435:
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			
				if (iParam10 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
				}
			}
			break;
	}

	if (bParam12)
		TEXT_LABEL_APPEND_STRING(sParam0, "_CESP", 64);

	return;
}

BOOL func_40() // Position - 0xB20E
{
	return func_41();
}

BOOL func_41() // Position - 0xB21A
{
	return Global_1586521[189 /*142*/].f_66 == 1489874736;
}

Hash func_42() // Position - 0xB232
{
	return 1384502824;
}

Hash func_43() // Position - 0xB23F
{
	return -1576586413;
}

Hash func_44() // Position - 0xB24C
{
	return 1336872304;
}

int func_45(Hash hParam0) // Position - 0xB259
{
	switch (hParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 2;
	}

	return -1;
}

int func_46(Hash hParam0) // Position - 0xB2B8
{
	return func_47(hParam0);
}

int func_47(Hash hParam0) // Position - 0xB2C6
{
	switch (hParam0)
	{
		case -1569615261:
			return 0;
	
		case 453432689:
			return 1;
	
		case 1593441988:
			return 2;
	
		case 584646201:
			return 3;
	
		case -1716589765:
			return 4;
	
		case 736523883:
			return 5;
	
		case -270015777:
			return 6;
	
		case 324215364:
			return 7;
	
		case -1074790547:
			return 8;
	
		case -2084633992:
			return 9;
	
		case -1357824103:
			return 11;
	
		case -1660422300:
			return 12;
	
		case 2144741730:
			return 13;
	
		case -572349828:
			return 14;
	
		case 741814745:
			return 15;
	
		case -1813897027:
			return 16;
	
		case -37975472:
			return 17;
	
		case 856002082:
			return 18;
	
		case 392730790:
			return 19;
	
		case 100416529:
			return 20;
	
		case 205991906:
			return 21;
	
		case 487013001:
			return 22;
	
		case -1654528753:
			return 23;
	
		case -494615257:
			return 24;
	
		case 2017895192:
			return 25;
	
		case -1568386805:
			return 26;
	
		case -1312131151:
			return 27;
	
		case 1119849093:
			return 28;
	
		case -344484024:
			return 29;
	
		case -1887867191:
			return 30;
	
		case 911657153:
			return 31;
	
		case -837150131:
			return 32;
	
		case -72657034:
			return 33;
	
		case -1716189206:
			return 34;
	
		case 1737195953:
			return 35;
	
		case 1317494643:
			return 36;
	
		case -1786099057:
			return 37;
	
		case -2067956739:
			return 38;
	
		case 1141786504:
			return 39;
	
		case 1305664598:
			return 40;
	
		case 615608432:
			return 41;
	
		case 101631238:
			return 42;
	
		case 883325847:
			return 43;
	
		case -38085395:
			return 44;
	
		case -102323637:
			return 45;
	
		case -1063057011:
			return 46;
	
		case -1076751822:
			return 47;
	
		case -771403250:
			return 49;
	
		case 2132975508:
			return 48;
	
		case 1627465347:
			return 50;
	
		case -1834847097:
			return 51;
	
		case 137902532:
			return 52;
	
		case 1198879012:
			return 57;
	
		case -1466123874:
			return 53;
	
		case 2138347493:
			return 54;
	
		case -952879014:
			return 56;
	
		case 984333226:
			return 55;
	
		case -1420407917:
			return 60;
	
		case 1672152130:
			return 61;
	
		case -102973651:
			return 58;
	
		case 1834241177:
			return 59;
	
		case 171789620:
			return 64;
	
		case -656458692:
			return 62;
	
		case -598887786:
			return 63;
	
		case -581044007:
			return 65;
	
		case -619010992:
			return 68;
	
		case -275439685:
			return 66;
	
		case 1649403952:
			return 67;
	
		case -1951375401:
			return 69;
	
		case -1045183535:
			return 70;
	
		case -538741184:
			return 71;
	
		case 317205821:
			return 72;
	
		case -1121678507:
			return 73;
	
		case 125959754:
			return 74;
	
		case -853065399:
			return 75;
	
		case -1169823560:
			return 76;
	
		case -1810795771:
			return 77;
	
		case 419712736:
			return 78;
	
		case 961495388:
			return 8;
	
		case -86904375:
			return 9;
	
		case -608341376:
			return 13;
	
		case 177293209:
			return 21;
	
		case -1075685676:
			return 1;
	
		case 2024373456:
			return 5;
	
		case 1432025498:
			return 22;
	
		case -1768145561:
			return 46;
	
		case -2009644972:
			return 47;
	
		case 1785463520:
			return 56;
	
		case -879347409:
			return 70;
	
		case -2066285827:
			return 48;
	
		case -1746263880:
			return 79;
	
		case 940833800:
			return 80;
	
		case -1355376991:
			return 81;
	
		case 1198256469:
			return 82;
	
		case -1238556825:
			return 83;
	
		case -1853920116:
			return 84;
	
		case 727643628:
			return 85;
	
		case 94989220:
			return 86;
	
		case -1658906650:
			return 88;
	
		case 1470379660:
			return 87;
	
		case -947031628:
			return 10;
	
		case -618237638:
			return 89;
	
		case 406929569:
			return 90;
	
		case 1171102963:
			return 91;
	
		case -610080759:
			return 92;
	
		case -774507221:
			return 93;
	
		case 1853742572:
			return 94;
	
		case 465894841:
			return 95;
	
		case 1703483498:
			return 96;
	
		case -22923932:
			return 97;
	
		case 350597077:
			return 98;
	
		case 1924557585:
			return 99;
	
		case 62870901:
			return 100;
	
		case -624951259:
			return 101;
	}

	return 0;
}

char* func_48(int iParam0, Hash hParam1) // Position - 0xB908
{
	int dlcWeaponIndex;
	int i;
	var unk;
	var ComponentDataPtr;

	if (hParam1 == -656458692)
	{
		switch (iParam0)
		{
			case -213504205:
				return "WT_KNUCKLE" /*Knuckle Duster*/;
		
			case -971770235:
				return "WCT_KNUCK_02";
		
			case -287703709:
				return "WCT_KNUCK_BG";
		
			case 1351683121:
				return "WCT_KNUCK_DLR";
		
			case -1755194916:
				return "WCT_KNUCK_DMD";
		
			case 2112683568:
				return "WCT_KNUCK_HT";
		
			case 1062111910:
				return "WCT_KNUCK_LV";
		
			case 146278587:
				return "WCT_KNUCK_PC";
		
			case -494162961:
				return "WCT_KNUCK_SLG";
		
			case 2062808965:
				return "WCT_KNUCK_VG";
		}
	}
	else if (hParam1 == -1786099057)
	{
		switch (iParam0)
		{
			case 716207715:
				return "WCT_BAT_XM3";
		
			case 446271089:
				return "WCT_BAT_XM301";
		
			case 1045616099:
				return "WCT_BAT_XM302";
		
			case 1336277129:
				return "WCT_BAT_XM303";
		
			case -513369076:
				return "WCT_BAT_XM304";
		
			case -447700000:
				return "WCT_BAT_XM305";
		
			case -149207179:
				return "WCT_BAT_XM306";
		
			case 166784288:
				return "WCT_BAT_XM307";
		
			case 2068729789:
				return "WCT_BAT_XM308";
		
			case 1761389338:
				return "WCT_BAT_XM309";
		}
	}
	else if (hParam1 == -1716189206)
	{
		switch (iParam0)
		{
			case 370527443:
				return "WCT_KNIFE_XM3";
		
			case 1109907117:
				return "WCT_KNIFE_XM301";
		
			case 2055456612:
				return "WCT_KNIFE_XM302";
		
			case 1690606566:
				return "WCT_KNIFE_XM303";
		
			case -1633316949:
				return "WCT_KNIFE_XM304";
		
			case -1461476313:
				return "WCT_KNIFE_XM305";
		
			case -1770422457:
				return "WCT_KNIFE_XM306";
		
			case -2059739958:
				return "WCT_KNIFE_XM307";
		
			case -1280001599:
				return "WCT_KNIFE_XM308";
		
			case -922885037:
				return "WCT_KNIFE_XM309";
		}
	}

	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /*No Attachment*/;
	
		case 1967214384:
			return "WCT_RAIL";
	
		case 202788691:
			return "WCT_GRIP" /*Grip*/;
	
		case 899381934:
			return "WCT_FLASH" /*Flashlight*/;
	
		case 2076495324:
			return "WCT_FLASH" /*Flashlight*/;
	
		case -1657815255:
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case 1019656791:
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case -1439939148:
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case 1006677997:
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case -1596416958:
			return "WCT_SCOPE_MED" /*Scope*/;
	
		case -767279652:
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case -1135289737:
			return "WCT_SCOPE_MAX" /*Advanced Scope*/;
	
		case -1023114086:
			return "WCT_SUPP" /*Suppressor*/;
	
		case -2089531990:
			return "WCT_SUPP" /*Suppressor*/;
	
		case -1489156508:
			return "WCT_SUPP" /*Suppressor*/;
	
		case -435637410:
			return "WCT_SUPP" /*Suppressor*/;
	
		case -19858063:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -316253668:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 119648377:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -696561875:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 834974250:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 614078421:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -884429072:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 283556395:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 643254679:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 889808635:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -1101075946:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -1323216997:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -1614924820:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -1861183855:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -91250417:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -1899902599:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -197857404:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -2112517305:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -503336118:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -691692330:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -1796727865:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -2034401422:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -1681506167:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 1198478068:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -924946682:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -1928132688:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -1152981993:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 580369945:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -640439150:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 195735895:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -890514874:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -507117574:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -124428919:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 1048471894:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -125817127:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 2063610803:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 1168357051:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 867832552:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 844049759:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -667205311:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -1759709443:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -855823675:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 927578299:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -2053876401:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 471997210:
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case 1709866683:
			return "WCT_SUPP" /*Suppressor*/;
	
		case 1125642654:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 860508675:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -878820883:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 1198425599:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -1188271751:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 1319990579:
			return "WCT_VAR_GOLD";
	
		case 930927479:
			return "WCT_VAR_METAL";
	
		case -660892072:
			return "WCT_VAR_GOLD";
	
		case -1686714580:
			return "WCT_VAR_METAL";
	
		case -684126074:
			return "WCT_VAR_GOLD";
	
		case 2008591151:
			return "WCT_VAR_SIL";
	
		case 2053798779:
			return "WCT_VAR_WOOD";
	
		case 663170192:
			return "WCT_VAR_GOLD";
	
		case 1215999497:
			return "WCT_VAR_GOLD";
	
		case -2052698631:
			return "WCT_VAR_METAL";
	
		case 1077065191:
			return "WCT_VAR_WOOD";
	
		case 371102273:
			return "WCT_VAR_GOLD";
	
		case 663517359:
			return "WCT_VAR_GOLD";
	
		case -1470645128:
			return "WCT_VAR_METAL";
	
		case -1828795171:
			return "WCT_VAR_ETCHM";
	
		case -966439566:
			return "WCT_VAR_GOLD";
	
		case -690308418:
			return "WCT_VAR_GOLD";
	
		case -1562927653:
			return "WCT_VAR_GOLD";
	
		case -2144080721:
			return "WCT_VAR_WOOD";
	
		case 1929467122:
			return "WCT_VAR_ETCHM";
	
		case -1858624256:
			return "WCT_SB_BASE";
	
		case 1530822070:
			return "WCT_SB_VAR1";
	
		case -409758110:
			return "WCT_SB_VAR2";
	
		case -377062173:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 384708672:
			return "WCT_REV_VARB";
	
		case -1802258419:
			return "WCT_REV_VARG";
	
		case 2043113590:
			return "WCT_CLIP_DRM";
	
		case -1167922891:
			return "WCT_CLIP_BOX";
	
		case -604986051:
			return "WCT_CLIP_DRM";
	
		case -2000168365:
			return "WCT_CLIP_DRM";
	
		case 1623028892:
			return "WCT_VAR_GUN";
	
		case -1214048550:
			return "WCT_CAMO_IND";
	
		case 1142457062:
			return "WCT_CAMO_IND";
	
		case -829683854:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -944910075:
			return "WCT_SCOPE_MAC2";
	
		case 1060929921:
			return "WCT_SCOPE_SML2";
	
		case -673450233:
			return "WCT_VAR_RAY18";
	
		case 1423184737:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case -2122814295:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -1828202758:
			return "WCT_SUPP" /*Suppressor*/;
	
		case -325063463:
			return "WCT_VAR_FAM";
	
		case 2012362801:
			return "WCT_VAR_WEED";
	
		case 1657753414:
			return "WCT_VAR_STUD";
	
		case -242322891:
			return "WCT_VAR_BONE";
	
		case 1141184690:
			return "WCT_PISTMK2_XM3";
	
		case -1566778158:
			return "WCT_MSMG_XM3";
	
		case 330905451:
			return "WCT_PUMPSHT_XM3";
	
		case 375646046:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 503494624:
			return "WCT_SUPP" /*Suppressor*/;
	
		case 1694268374:
			return "WCT_MSMGFRN_VAR";
	
		case 1605520746:
			return "WCT_CRBNMIC_VAR";
	
		case -1240142720:
			return "WCT_RPGTVR_VAR";
	
		case 943088878:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 310778254:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -292433650:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 494808810:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 1400690398:
			return "WCT_COMPIST_XM";
	
		case 221907180:
			return "WCT_HVSP_XM";
	
		case 302671608:
			return "WCT_SPCR_XM";
	
		case -1675905033:
			return "WCT_STNGN_BAIL";
	
		default:
			if (hParam1 != 0)
			{
				dlcWeaponIndex = func_76(hParam1, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
							if (ComponentDataPtr.f_3 == iParam0)
								return func_49(&(ComponentDataPtr.f_6));
					}
				}
			}
			break;
	}

	return "WCT_INVALID";
}

char* func_49(var uParam0) // Position - 0xC378
{
	return uParam0;
}

BOOL func_50() // Position - 0xC382
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	return false;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xC39F
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_52(int iParam0) // Position - 0xC3B6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case -604986051:
			case -1167922891:
			case 1857603803:
			case -972590066:
			case -2000168365:
			case -1444295948:
			case 2043113590:
			case 1801039530:
				return false;
		
			default:
				goto 0x5E;
		}
	}
	else if (func_53(iParam0))
	{
		return Global_262145.f_20911;
	}

	return true;
}

BOOL func_53(int iParam0) // Position - 0xC418
{
	switch (iParam0)
	{
		case -1827882671:
		case 966612367:
		case 1815270123:
		case -687617715:
		case -1179558480:
		case -631911105:
		case 1178671645:
		case 1377355801:
		case 1142457062:
		case -1214048550:
		case -648943513:
		case -974541230:
			return true;
	}

	return false;
}

int func_54() // Position - 0xC477
{
	int outValue;
	int outValue2;
	Hash statHash;
	int profileSetting;

	if (IS_BIT_SET(Global_26, 6))
		if (IS_BIT_SET(Global_26, 2) || IS_BIT_SET(Global_26, 4))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(1571103992, &outValue, -1))
		if (IS_BIT_SET(outValue, 6))
			if (IS_BIT_SET(outValue, 2) || IS_BIT_SET(outValue, 4))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152850.f_3)
		{
			statHash = 1035124638;
		
			if (STATS::STAT_GET_INT(statHash, &outValue2, -1))
				if (IS_BIT_SET(outValue2, 8))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		profileSetting = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(profileSetting, 2) || IS_BIT_SET(profileSetting, 4))
			return 1;
	}

	return 0;
}

int func_55() // Position - 0xC52D
{
	int outValue;
	int outValue2;
	Hash statHash;
	int profileSetting;
	int profileSetting2;

	if (IS_BIT_SET(Global_26, 5))
		if (IS_BIT_SET(Global_26, 1) || IS_BIT_SET(Global_26, 3))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(1571103992, &outValue, -1))
		if (IS_BIT_SET(outValue, 5))
			if (IS_BIT_SET(outValue, 1) || IS_BIT_SET(outValue, 3))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152850.f_3)
		{
			statHash = 1035124638;
		
			if (STATS::STAT_GET_INT(statHash, &outValue2, -1))
				if (IS_BIT_SET(outValue2, 5))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		profileSetting = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(profileSetting, 1) || IS_BIT_SET(profileSetting, 3))
			return 1;
	}

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting2, -1);
				MISC::SET_BIT(&profileSetting2, 1);
				MISC::SET_BIT(&profileSetting2, 3);
				MISC::SET_BIT(&profileSetting2, 5);
				MISC::SET_BIT(&Global_26, 1);
				MISC::SET_BIT(&Global_26, 3);
				MISC::SET_BIT(&Global_26, 5);
				STATS::STAT_SET_INT(1571103992, profileSetting2, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting2 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting2, 1);
					MISC::SET_BIT(&profileSetting2, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting2);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xC666
{
	int profileSetting;

	if (Global_152848 == 2)
		return true;
	else if (Global_152848 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(1571103992, profileSetting, true);
			
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

BOOL func_57(int iParam0) // Position - 0xC71E
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
		case 1011473080:
			return true;
	}

	return false;
}

int func_58(Hash hParam0, var uParam1) // Position - 0xC7BF
{
	int num;
	int num2;
	var unk;

	num = 0;

	switch (hParam0)
	{
		case -1716189206:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_59(370527443, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 370527443;
					num = num + 1;
				}
			
				if (func_59(1109907117, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1109907117;
					num = num + 1;
				}
			
				if (func_59(2055456612, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2055456612;
					num = num + 1;
				}
			
				if (func_59(1690606566, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1690606566;
					num = num + 1;
				}
			
				if (func_59(-1633316949, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1633316949;
					num = num + 1;
				}
			
				if (func_59(-1461476313, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1461476313;
					num = num + 1;
				}
			
				if (func_59(-1770422457, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1770422457;
					num = num + 1;
				}
			
				if (func_59(-2059739958, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -2059739958;
					num = num + 1;
				}
			
				if (func_59(-1280001599, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1280001599;
					num = num + 1;
				}
			
				if (func_59(-922885037, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -922885037;
					num = num + 1;
				}
			}
			break;
	
		case -1786099057:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_59(716207715, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 716207715;
					num = num + 1;
				}
			
				if (func_59(446271089, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 446271089;
					num = num + 1;
				}
			
				if (func_59(1045616099, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1045616099;
					num = num + 1;
				}
			
				if (func_59(1336277129, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1336277129;
					num = num + 1;
				}
			
				if (func_59(-513369076, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -513369076;
					num = num + 1;
				}
			
				if (func_59(-447700000, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -447700000;
					num = num + 1;
				}
			
				if (func_59(-149207179, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -149207179;
					num = num + 1;
				}
			
				if (func_59(166784288, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 166784288;
					num = num + 1;
				}
			
				if (func_59(2068729789, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2068729789;
					num = num + 1;
				}
			
				if (func_59(1761389338, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1761389338;
					num = num + 1;
				}
			}
			break;
	}

	return num;
}

int func_59(int iParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xCB3B
{
	*uParam2 = 1;
	*uParam3 = 0;

	switch (hParam1)
	{
		case -1786099057:
			if (!*Global_262145.f_33309 && func_70(iLocal_54, false) || func_60(iParam0, hParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_33309 || !func_70(iLocal_54, false))
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	
		case -1716189206:
			if (!*Global_262145.f_33309 && func_70(iLocal_54, false) || func_60(iParam0, hParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_33309)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	}

	return 0;
}

BOOL func_60(int iParam0, Hash hParam1, int iParam2) // Position - 0xCC17
{
	int num;
	int num2;

	if (func_69())
		return false;

	num = func_64(iParam0, hParam1, iParam2);
	num2 = func_62(iParam0, hParam1);
	return IS_BIT_SET(num, func_61(num2));
}

int func_61(int iParam0) // Position - 0xCC49
{
	return iParam0 % 32;
}

int func_62(int iParam0, Hash hParam1) // Position - 0xCC56
{
	return func_63(iParam0, hParam1);
}

int func_63(int iParam0, int iParam1) // Position - 0xCC66
{
	switch (iParam1)
	{
		case 453432689:
			switch (iParam0)
			{
				case -19858063:
					return 1;
			
				case -316253668:
					return 2;
			
				case 899381934:
					return 3;
			
				case 1709866683:
					return 4;
			
				case -684126074:
					return 175;
			
				case 1623028892:
					return 211;
			}
			break;
	
		case 1593441988:
			switch (iParam0)
			{
				case 119648377:
					return 5;
			
				case -696561875:
					return 6;
			
				case 899381934:
					return 7;
			
				case -1023114086:
					return 8;
			
				case -966439566:
					return 186;
			
				case 1400690398:
					return 613;
			}
			break;
	
		case 584646201:
			switch (iParam0)
			{
				case 834974250:
					return 11;
			
				case 614078421:
					return 12;
			
				case 899381934:
					return 13;
			
				case -1023114086:
					return 14;
			
				case -1686714580:
					return 164;
			
				case 1657753414:
					return 569;
			}
			break;
	
		case 324215364:
			switch (iParam0)
			{
				case -884429072:
					return 15;
			
				case 283556395:
					return 16;
			
				case 899381934:
					return 17;
			
				case -1657815255:
					return 18;
			
				case -1489156508:
					return 19;
			
				case 1215999497:
					return 174;
			
				case 2012362801:
					return 570;
			
				case 1694268374:
					return 605;
			
				case -1566778158:
					return 602;
			}
			break;
	
		case 736523883:
			switch (iParam0)
			{
				case 643254679:
					return 22;
			
				case 889808635:
					return 23;
			
				case 2043113590:
					return 207;
			
				case 2076495324:
					return 24;
			
				case 1019656791:
					return 25;
			
				case -1023114086:
					return 26;
			
				case 663170192:
					return 179;
			
				case 1623028892:
					return 212;
			}
			break;
	
		case -1074790547:
			switch (iParam0)
			{
				case -1101075946:
					return 27;
			
				case -1323216997:
					return 28;
			
				case -604986051:
					return 201;
			
				case 202788691:
					return 29;
			
				case 2076495324:
					return 30;
			
				case -1657815255:
					return 31;
			
				case -1489156508:
					return 32;
			
				case 1319990579:
					return 165;
			
				case 1623028892:
					return 213;
			}
			break;
	
		case -2084633992:
			switch (iParam0)
			{
				case -1614924820:
					return 33;
			
				case -1861183855:
					return 34;
			
				case -1167922891:
					return 202;
			
				case 1967214384:
					return 35;
			
				case 202788691:
					return 36;
			
				case 2076495324:
					return 37;
			
				case -1596416958:
					return 38;
			
				case -2089531990:
					return 39;
			
				case -660892072:
					return 168;
			
				case 1623028892:
					return 214;
			
				case 1605520746:
					return 604;
			}
			break;
	
		case -1357824103:
			switch (iParam0)
			{
				case -91250417:
					return 44;
			
				case -1899902599:
					return 45;
			
				case 2076495324:
					return 47;
			
				case -1439939148:
					return 48;
			
				case -2089531990:
					return 49;
			
				case 930927479:
					return 163;
			}
			break;
	
		case -1660422300:
			switch (iParam0)
			{
				case -197857404:
					return 50;
			
				case -2112517305:
					return 51;
			
				case 1006677997:
					return 52;
			
				case -690308418:
					return 187;
			}
			break;
	
		case 2144741730:
			switch (iParam0)
			{
				case -503336118:
					return 53;
			
				case -691692330:
					return 54;
			
				case 202788691:
					return 55;
			
				case -1596416958:
					return 56;
			
				case -1828795171:
					return 188;
			
				case 1623028892:
					return 215;
			}
			break;
	
		case 487013001:
			switch (iParam0)
			{
				case -435637410:
					return 59;
			
				case 2076495324:
					return 60;
			
				case -1562927653:
					return 193;
			
				case 1623028892:
					return 389;
			
				case -242322891:
					return 571;
			
				case 330905451:
					return 603;
			}
			break;
	
		case -494615257:
			switch (iParam0)
			{
				case -1796727865:
					return 64;
			
				case -2034401422:
					return 65;
			
				case 202788691:
					return 66;
			
				case 2076495324:
					return 67;
			
				case -2089531990:
					return 68;
			}
			break;
	
		case 100416529:
			switch (iParam0)
			{
				case -1681506167:
					return 69;
			
				case -767279652:
					return 70;
			
				case -1135289737:
					return 71;
			
				case -1489156508:
					return 72;
			
				case 1077065191:
					return 180;
			}
			break;
	
		case 205991906:
			switch (iParam0)
			{
				case 1198478068:
					return 76;
			
				case -1135289737:
					return 77;
			
				case -767279652:
					return 82;
			
				case 1623028892:
					return 216;
			
				case 221907180:
					return 614;
			}
			break;
	
		case -1568386805:
			switch (iParam0)
			{
				case 202788691:
					return 78;
			
				case 2076495324:
					return 79;
			
				case -1439939148:
					return 80;
			}
			break;
	
		case 1119849093:
			switch (iParam0)
			{
				case -924946682:
					return 81;
			}
			break;
	
		case -270015777:
			switch (iParam0)
			{
				case -1928132688:
					return 83;
			
				case -1152981993:
					return 84;
			
				case 2076495324:
					return 85;
			
				case -1657815255:
					return 86;
			
				case -1489156508:
					return 87;
			
				case 663517359:
					return 189;
			}
			break;
	
		case -1654528753:
			switch (iParam0)
			{
				case 202788691:
					return 88;
			
				case 2076495324:
					return 89;
			
				case -1489156508:
					return 90;
			}
			break;
	
		case -1716589765:
			switch (iParam0)
			{
				case 580369945:
					return 91;
			
				case -640439150:
					return 92;
			
				case 899381934:
					return 93;
			
				case -1489156508:
					return 94;
			
				case 2008591151:
					return 176;
			}
			break;
	
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
			
				case -767279652:
					return 96;
			
				case -1135289737:
					return 97;
			
				case -2089531990:
					return 98;
			}
			break;
	
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
			
				case -507117574:
					return 106;
			
				case 202788691:
					return 107;
			
				case -1596416958:
					return 108;
			}
			break;
	
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
			
				case 1048471894:
					return 110;
			}
			break;
	
		case -1063057011:
			switch (iParam0)
			{
				case -959978111:
					return 111;
			
				case 2089537806:
					return 112;
			
				case 1801039530:
					return 208;
			
				case 202788691:
					return 113;
			
				case 2076495324:
					return 114;
			
				case -1596416958:
					return 115;
			
				case -1489156508:
					return 116;
			
				case 1929467122:
					return 190;
			
				case 1623028892:
					return 390;
			
				case 302671608:
					return 615;
			}
			break;
	
		case -1076751822:
			switch (iParam0)
			{
				case -125817127:
					return 117;
			
				case 2063610803:
					return 118;
			
				case 899381934:
					return 119;
			
				case -1023114086:
					return 120;
			
				case -2144080721:
					return 191;
			
				case 1623028892:
					return 391;
			}
			break;
	
		case -771403250:
			switch (iParam0)
			{
				case 222992026:
					return 121;
			
				case 1694090795:
					return 122;
			
				case 899381934:
					return 123;
			
				case -1023114086:
					return 124;
			
				case 2053798779:
					return 171;
			}
			break;
	
		case 2132975508:
			switch (iParam0)
			{
				case -979292288:
					return 131;
			
				case -1284994289:
					return 132;
			
				case 2076495324:
					return 127;
			
				case -2089531990:
					return 128;
			
				case -1439939148:
					return 129;
			
				case 202788691:
					return 130;
			
				case -1470645128:
					return 192;
			
				case 1623028892:
					return 394;
			}
			break;
	
		case 1627465347:
			switch (iParam0)
			{
				case 484812453:
					return 125;
			
				case -355941776:
					return 126;
			}
			break;
	
		case 137902532:
			switch (iParam0)
			{
				case 1168357051:
					return 133;
			
				case 867832552:
					return 134;
			
				case -1023114086:
					return 136;
			}
			break;
	
		case 984333226:
			switch (iParam0)
			{
				case 844049759:
					return 137;
			
				case -1759709443:
					return 140;
			
				case -2000168365:
					return 205;
			
				case 2076495324:
					return 145;
			
				case -1489156508:
					return 146;
			
				case 202788691:
					return 147;
			}
			break;
	
		case -952879014:
			switch (iParam0)
			{
				case -667205311:
					return 138;
			
				case -855823675:
					return 139;
			
				case 471997210:
					return 141;
			
				case 2076495324:
					return 142;
			
				case -2089531990:
					return 143;
			
				case 202788691:
					return 144;
			
				case 371102273:
					return 172;
			
				case 1623028892:
					return 392;
			}
			break;
	
		case 171789620:
			switch (iParam0)
			{
				case 1125642654:
					return 149;
			
				case 860508675:
					return 150;
			
				case 1857603803:
					return 203;
			
				case 2076495324:
					return 151;
			
				case -1439939148:
					return 152;
			
				case 202788691:
					return 153;
			}
			break;
	
		case 2017895192:
			switch (iParam0)
			{
				case -2052698631:
					return 178;
			}
			break;
	
		case -598887786:
			switch (iParam0)
			{
				case -878820883:
					return 148;
			}
			break;
	
		case -656458692:
			switch (iParam0)
			{
				case -971770235:
					return 154;
			
				case -287703709:
					return 155;
			
				case 1351683121:
					return 156;
			
				case -1755194916:
					return 157;
			
				case 2112683568:
					return 158;
			
				case 1062111910:
					return 159;
			
				case 146278587:
					return 160;
			
				case -494162961:
					return 161;
			
				case 2062808965:
					return 162;
			}
			break;
	
		case -619010992:
			switch (iParam0)
			{
				case 1198425599:
					return 184;
			
				case -1188271751:
					return 185;
			
				case -1444295948:
					return 206;
			
				case -1023114086:
					return 183;
			}
			break;
	
		case -538741184:
			switch (iParam0)
			{
				case 1530822070:
					return 194;
			
				case -409758110:
					return 195;
			}
			break;
	
		case -1045183535:
			switch (iParam0)
			{
				case -377062173:
					return 196;
			
				case 384708672:
					return 197;
			
				case -1802258419:
					return 198;
			
				case 1623028892:
					return 393;
			}
			break;
	
		case 1649403952:
			switch (iParam0)
			{
				case 1363085923:
					return 199;
			
				case 1509923832:
					return 200;
			
				case -972590066:
					return 204;
			}
			break;
	
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
			
				case -1820405577:
					return 210;
			}
			break;
	
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
			
				case 1591132456:
					return 218;
			
				case 1329061674:
					return 219;
			
				case -2046910199:
					return 220;
			
				case 733837882:
					return 221;
			
				case 634039983:
					return 222;
			
				case 1140676955:
					return 223;
			
				case -1898661008:
					return 224;
			
				case 1709866683:
					return 225;
			
				case 568543123:
					return 226;
			
				case 1550611612:
					return 367;
			
				case 368550800:
					return 368;
			
				case -1769069349:
					return 369;
			
				case 24902297:
					return 370;
			
				case -228041614:
					return 371;
			
				case -584961562:
					return 372;
			
				case -1153175946:
					return 373;
			
				case 1301287696:
					return 374;
			
				case 1597093459:
					return 375;
			
				case 1769871776:
					return 376;
			
				case -1827882671:
					return 377;
			
				case 1141184690:
					return 601;
			}
			break;
	
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
			
				case -1182573778:
					return 228;
			
				case 190476639:
					return 229;
			
				case 974903034:
					return 230;
			
				case -644734235:
					return 231;
			
				case 2146055916:
					return 232;
			
				case 2076495324:
					return 233;
			
				case -1613015470:
					return 234;
			
				case -452809877:
					return 235;
			
				case 1038927834:
					return 236;
			
				case -1023114086:
					return 237;
			
				case -1181482284:
					return 238;
			
				case -932732805:
					return 239;
			
				case -569259057:
					return 240;
			
				case -326080308:
					return 241;
			
				case 48731514:
					return 242;
			
				case 880736428:
					return 243;
			
				case 1303784126:
					return 244;
			
				case -653246751:
					return 245;
			
				case -1520117877:
					return 246;
			
				case -996700057:
					return 378;
			
				case 940943685:
					return 379;
			
				case 1263226800:
					return 380;
			
				case -328035840:
					return 381;
			
				case 1224100642:
					return 382;
			
				case 899228776:
					return 383;
			
				case 616006309:
					return 384;
			
				case -1561952511:
					return 385;
			
				case 572063080:
					return 386;
			
				case 1170588613:
					return 387;
			
				case 966612367:
					return 388;
			}
			break;
	
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
			
				case 752418717:
					return 248;
			
				case -130689324:
					return 249;
			
				case -1981031769:
					return 250;
			
				case 1005144310:
					return 251;
			
				case 247526935:
					return 252;
			
				case -2101279869:
					return 253;
			
				case -1135289737:
					return 254;
			
				case -1233121104:
					return 255;
			
				case 776198721:
					return 256;
			
				case -1404903567:
					return 257;
			
				case 1602080333:
					return 258;
			
				case 1764221345:
					return 259;
			
				case -1869205321:
					return 260;
			
				case 277524638:
					return 261;
			
				case -130843390:
					return 356;
			
				case -977347227:
					return 357;
			
				case -378461067:
					return 358;
			
				case 329939175:
					return 359;
			
				case 643374672:
					return 360;
			
				case 807875052:
					return 361;
			
				case -1401804168:
					return 362;
			
				case -1096495395:
					return 363;
			
				case -847811454:
					return 364;
			
				case -1413108537:
					return 365;
			
				case 1815270123:
					return 366;
			}
			break;
	
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
			
				case 400507625:
					return 263;
			
				case 696788003:
					return 264;
			
				case 1475288264:
					return 265;
			
				case -1020871238:
					return 266;
			
				case -161179835:
					return 267;
			
				case -1654288262:
					return 268;
			
				case 1108334355:
					return 269;
			
				case 1060929921:
					return 270;
			
				case -966040254:
					return 271;
			
				case -1181482284:
					return 272;
			
				case -932732805:
					return 273;
			
				case -569259057:
					return 274;
			
				case -326080308:
					return 275;
			
				case 48731514:
					return 276;
			
				case 880736428:
					return 277;
			
				case 1303784126:
					return 278;
			
				case -1018236364:
					return 279;
			
				case -1243457701:
					return 280;
			
				case 1249283253:
					return 345;
			
				case -857707587:
					return 346;
			
				case -1097543898:
					return 347;
			
				case 1980349969:
					return 348;
			
				case 1219453777:
					return 349;
			
				case -1853459190:
					return 350;
			
				case -2074781016:
					return 351;
			
				case 457967755:
					return 352;
			
				case 235171324:
					return 353;
			
				case 42685294:
					return 354;
			
				case -687617715:
					return 355;
			}
			break;
	
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
			
				case -785724817:
					return 282;
			
				case -1478681000:
					return 283;
			
				case 1675665560:
					return 284;
			
				case -76490669:
					return 285;
			
				case -282298175:
					return 286;
			
				case -1654288262:
					return 287;
			
				case 2076495324:
					return 288;
			
				case 1108334355:
					return 289;
			
				case 77277509:
					return 290;
			
				case -966040254:
					return 291;
			
				case -1489156508:
					return 292;
			
				case -1181482284:
					return 293;
			
				case -932732805:
					return 294;
			
				case -569259057:
					return 295;
			
				case -326080308:
					return 296;
			
				case 48731514:
					return 297;
			
				case 880736428:
					return 298;
			
				case 1303784126:
					return 299;
			
				case 1134861606:
					return 300;
			
				case 1447477866:
					return 301;
			
				case -1860492113:
					return 323;
			
				case 937772107:
					return 324;
			
				case 1401650071:
					return 325;
			
				case 628662130:
					return 326;
			
				case -985047251:
					return 327;
			
				case -812944463:
					return 328;
			
				case -1447352303:
					return 329;
			
				case -60338860:
					return 330;
			
				case 2088750491:
					return 331;
			
				case -1513913454:
					return 332;
			
				case -1179558480:
					return 333;
			}
			break;
	
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
			
				case 1574296533:
					return 303;
			
				case 626875735:
					return 304;
			
				case 1141059345:
					return 305;
			
				case 1025884839:
					return 306;
			
				case 391640422:
					return 307;
			
				case -1654288262:
					return 308;
			
				case 2076495324:
					return 309;
			
				case 1108334355:
					return 310;
			
				case 77277509:
					return 311;
			
				case -966040254:
					return 312;
			
				case -2089531990:
					return 313;
			
				case -1181482284:
					return 314;
			
				case -932732805:
					return 315;
			
				case -569259057:
					return 316;
			
				case -326080308:
					return 317;
			
				case 48731514:
					return 318;
			
				case 880736428:
					return 319;
			
				case 1303784126:
					return 320;
			
				case -2093598721:
					return 321;
			
				case -1958983669:
					return 322;
			
				case 1272803094:
					return 334;
			
				case 1080719624:
					return 335;
			
				case 792221348:
					return 336;
			
				case -452181427:
					return 337;
			
				case -746774737:
					return 338;
			
				case -2044296061:
					return 339;
			
				case -199171978:
					return 340;
			
				case -1428075016:
					return 341;
			
				case -1735153315:
					return 342;
			
				case 1796459838:
					return 343;
			
				case -631911105:
					return 344;
			}
			break;
	
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
			
				case 1315288101:
					return 396;
			
				case 1004815965:
					return 397;
			
				case -380098265:
					return 398;
			
				case -1618338827:
					return 399;
			
				case 2076495324:
					return 400;
			
				case 1108334355:
					return 401;
			
				case 77277509:
					return 402;
			
				case 1060929921:
					return 403;
			
				case -1404903567:
					return 404;
			
				case 1602080333:
					return 405;
			
				case -474112444:
					return 488;
			
				case 387223451:
					return 489;
			
				case 617753366:
					return 490;
			
				case -222378256:
					return 491;
			
				case 8741501:
					return 492;
			
				case -601286203:
					return 493;
			
				case -511433605:
					return 494;
			
				case -655387818:
					return 495;
			
				case -282476598:
					return 496;
			
				case 1739501925:
					return 497;
			
				case 1178671645:
					return 498;
			}
			break;
	
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
			
				case -568352468:
					return 407;
			
				case 1362433589:
					return 408;
			
				case 1346235024:
					return 409;
			
				case -570355066:
					return 410;
			
				case -2023373174:
					return 411;
			
				case 2076495324:
					return 412;
			
				case 1108334355:
					return 413;
			
				case 77277509:
					return 414;
			
				case -966040254:
					return 415;
			
				case -1489156508:
					return 416;
			
				case -1181482284:
					return 417;
			
				case -932732805:
					return 418;
			
				case -569259057:
					return 419;
			
				case -326080308:
					return 420;
			
				case 48731514:
					return 421;
			
				case 880736428:
					return 422;
			
				case 1303784126:
					return 423;
			
				case -1654288262:
					return 424;
			
				case -415870039:
					return 425;
			
				case -109086661:
					return 426;
			
				case -737430213:
					return 532;
			
				case 1125852043:
					return 533;
			
				case 886015732:
					return 534;
			
				case -1262287139:
					return 535;
			
				case -295208411:
					return 536;
			
				case -544154504:
					return 537;
			
				case 172765678:
					return 538;
			
				case -1982877449:
					return 539;
			
				case 2072122460:
					return 540;
			
				case -1986220171:
					return 541;
			
				case 1377355801:
					return 542;
			}
			break;
	
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
			
				case -829683854:
					return 428;
			
				case -1055790298:
					return 429;
			
				case -1928301566:
					return 430;
			
				case -424845447:
					return 431;
			
				case -1876057490:
					return 432;
			
				case 1246324211:
					return 433;
			
				case 1205768792:
					return 434;
			
				case 1709866683:
					return 435;
			
				case -1434287169:
					return 436;
			
				case 259780317:
					return 510;
			
				case -1973342474:
					return 511;
			
				case 1996130345:
					return 512;
			
				case -1455657812:
					return 513;
			
				case -1668263084:
					return 514;
			
				case 1308243489:
					return 515;
			
				case 1122574335:
					return 516;
			
				case 1420313469:
					return 517;
			
				case 109848390:
					return 518;
			
				case 593945703:
					return 519;
			
				case 1142457062:
					return 520;
			}
			break;
	
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
			
				case -422587990:
					return 438;
			
				case -193998727:
					return 439;
			
				case -515203373:
					return 440;
			
				case 1842849902:
					return 441;
			
				case -679861550:
					return 442;
			
				case 2076495324:
					return 443;
			
				case 1108334355:
					return 444;
			
				case -966040254:
					return 445;
			
				case 1528590652:
					return 446;
			
				case -2089531990:
					return 447;
			
				case -1181482284:
					return 448;
			
				case -932732805:
					return 449;
			
				case -569259057:
					return 450;
			
				case -326080308:
					return 451;
			
				case 48731514:
					return 452;
			
				case 880736428:
					return 453;
			
				case 1303784126:
					return 454;
			
				case -1654288262:
					return 455;
			
				case 941317513:
					return 456;
			
				case 1748450780:
					return 457;
			
				case -1869284448:
					return 521;
			
				case 1931539634:
					return 522;
			
				case 1624199183:
					return 523;
			
				case -26834113:
					return 524;
			
				case -210406055:
					return &func_1;
			
				case 423313640:
					return 526;
			
				case 276639596:
					return 527;
			
				case -991356863:
					return 528;
			
				case -1682848301:
					return 529;
			
				case 996213771:
					return 530;
			
				case -1214048550:
					return 531;
			}
			break;
	
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
			
				case 231258687:
					return 459;
			
				case 284438159:
					return 460;
			
				case 15712037:
					return 461;
			
				case -958864266:
					return 462;
			
				case 1108334355:
					return 463;
			
				case 77277509:
					return 464;
			
				case 899381934:
					return 465;
			
				case 654802123:
					return 466;
			
				case -1069552225:
					return 499;
			
				case 11918884:
					return 500;
			
				case 176157112:
					return 501;
			
				case -220052855:
					return 502;
			
				case 288456487:
					return 503;
			
				case 398658626:
					return 504;
			
				case 628697006:
					return 505;
			
				case 925911836:
					return 506;
			
				case 1222307441:
					return 507;
			
				case 552442715:
					return 508;
			
				case -648943513:
					return 509;
			}
			break;
	
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
			
				case -273676760:
					return 468;
			
				case -89655827:
					return 469;
			
				case 1130501904:
					return 470;
			
				case -1449330342:
					return 471;
			
				case -2111807319:
					return 472;
			
				case 2076495324:
					return 473;
			
				case 1108334355:
					return 474;
			
				case -944910075:
					return 475;
			
				case 1060929921:
					return 476;
			
				case 1704640795:
					return 477;
			
				case 1005743559:
					return 478;
			
				case -2089531990:
					return 479;
			
				case -1181482284:
					return 480;
			
				case -932732805:
					return 481;
			
				case -569259057:
					return 482;
			
				case -326080308:
					return 483;
			
				case 48731514:
					return 484;
			
				case 880736428:
					return 485;
			
				case 1303784126:
					return 486;
			
				case -1654288262:
					return 487;
			
				case -1371515465:
					return 543;
			
				case -1190793877:
					return 544;
			
				case -1497085720:
					return 545;
			
				case -1803148180:
					return 546;
			
				case -1975971886:
					return 547;
			
				case 36929477:
					return 548;
			
				case -268444834:
					return 549;
			
				case -574769446:
					return 550;
			
				case -882699739:
					return 551;
			
				case -1468181474:
					return 552;
			
				case -974541230:
					return 553;
			}
			break;
	
		case -1355376991:
			switch (iParam0)
			{
				case -673450233:
					return 554;
			}
			break;
	
		case 727643628:
			switch (iParam0)
			{
				case 1423184737:
					return 555;
			
				case -2122814295:
					return 556;
			
				case -1828202758:
					return 557;
			}
			break;
	
		case 94989220:
			switch (iParam0)
			{
				case -971688363:
					return 559;
			
				case 2076495324:
					return 560;
			
				case -2089531990:
					return 561;
			}
			break;
	
		case -1658906650:
			switch (iParam0)
			{
				case 759617595:
					return 562;
			
				case 1749732930:
					return 563;
			
				case 1803744149:
					return 564;
			
				case -1439939148:
					return 565;
			
				case 2076495324:
					return 566;
			
				case -2089531990:
					return 567;
			}
			break;
	
		case 1470379660:
			switch (iParam0)
			{
				case -1423479223:
					return 558;
			}
			break;
	
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
			
				case 1824470811:
					return 100;
			
				case -325063463:
					return 568;
			
				case 202788691:
					return 101;
			
				case 2076495324:
					return 102;
			
				case -1596416958:
					return 103;
			
				case -2089531990:
					return 104;
			
				case -1277049774:
					return 572;
			}
			break;
	
		case -774507221:
			switch (iParam0)
			{
				case 927578299:
					return 573;
			
				case -2053876401:
					return 574;
			
				case -1649287133:
					return 575;
			
				case -1489156508:
					return 576;
			
				case 202788691:
					return 577;
			}
			break;
	
		case 465894841:
			switch (iParam0)
			{
				case 375646046:
					return 578;
			
				case 503494624:
					return 579;
			}
			break;
	
		case 350597077:
			switch (iParam0)
			{
				case 943088878:
					return 607;
			
				case 310778254:
					return 608;
			
				case -1489156508:
					return 609;
			
				case -1657815255:
					return 610;
			}
			break;
	
		case -22923932:
			switch (iParam0)
			{
				case 1130760338:
					return 580;
			}
			break;
	
		case -1786099057:
			switch (iParam0)
			{
				case 716207715:
					return 581;
			
				case 446271089:
					return 583;
			
				case 1045616099:
					return 584;
			
				case 1336277129:
					return 585;
			
				case -513369076:
					return 586;
			
				case -447700000:
					return 587;
			
				case -149207179:
					return 588;
			
				case 166784288:
					return 589;
			
				case 2068729789:
					return 590;
			
				case 1761389338:
					return 591;
			}
			break;
	
		case -1716189206:
			switch (iParam0)
			{
				case 370527443:
					return 582;
			
				case 1109907117:
					return 592;
			
				case 2055456612:
					return 593;
			
				case 1690606566:
					return 594;
			
				case -1633316949:
					return 595;
			
				case -1461476313:
					return 596;
			
				case -1770422457:
					return 597;
			
				case -2059739958:
					return 598;
			
				case -1280001599:
					return 599;
			
				case -922885037:
					return 600;
			}
			break;
	
		case -1312131151:
			switch (iParam0)
			{
				case -1240142720:
					return 606;
			}
			break;
	
		case 1171102963:
			switch (iParam0)
			{
				case -1675905033:
					return 617;
			}
			break;
	
		case 1924557585:
			switch (iParam0)
			{
				case -292433650:
					return 611;
			
				case 494808810:
					return 612;
			
				case -2089531990:
					return 616;
			}
			break;
	}

	return 0;
}

int func_64(int iParam0, Hash hParam1, int iParam2) // Position - 0xF248
{
	int num;

	num = func_11(func_65(iParam0, hParam1), iParam2);
	return num;
}

int func_65(int iParam0, Hash hParam1) // Position - 0xF262
{
	int num;
	int num2;

	num = func_62(iParam0, hParam1);
	num2 = func_68(num);

	if (func_67() == 0 || func_66() == 0 || func_67() == 999 && func_66() == 999)
	{
		switch (num2)
		{
			case 0:
				return 811;
		
			case 1:
				return 812;
		
			case 2:
				return 813;
		
			case 3:
				return 814;
		
			case 4:
				return 1753;
		
			case 5:
				return 2435;
		
			case 6:
				return 2828;
		
			case 7:
				return 5502;
		
			case 8:
				return 5506;
		
			case 9:
				return 5510;
		
			case 10:
				return 5623;
		
			case 11:
				return 5627;
		
			case 12:
				return 5631;
		
			case 13:
				return 5635;
		
			case 14:
				return 6374;
		
			case 15:
				return 6497;
		
			case 16:
				return 6517;
		
			case 17:
				return 6523;
		
			case 18:
				return 10273;
		
			case 19:
				return 12007;
		}
	}

	return 14835;
}

int func_66() // Position - 0xF3E2
{
	return Global_32949;
}

int func_67() // Position - 0xF3ED
{
	return Global_32948;
}

int func_68(int iParam0) // Position - 0xF3F8
{
	return iParam0 / 32;
}

BOOL func_69() // Position - 0xF405
{
	return Global_1575062;
}

BOOL func_70(int iParam0, BOOL bParam1) // Position - 0xF411
{
	if (iParam0 == 58)
	{
		if (bParam1)
			return Global_101585.f_329[58] < 5f;
	
		return true;
	}

	return false;
}

BOOL func_71(int iParam0, int iParam1, int iParam2) // Position - 0xF43A
{
	int num;
	int num2;

	if (func_69())
		return false;

	num = func_72(iParam0, iParam1, iParam2);
	num2 = func_62(iParam0, iParam1);
	return IS_BIT_SET(num, func_61(num2));
}

int func_72(int iParam0, int iParam1, int iParam2) // Position - 0xF46C
{
	int num;

	num = func_11(func_73(iParam0, iParam1), iParam2);
	return num;
}

int func_73(int iParam0, int iParam1) // Position - 0xF486
{
	int num;
	int num2;

	num = func_62(iParam0, iParam1);
	num2 = func_68(num);

	if (func_67() == 0 || func_66() == 0 || func_67() == 999 && func_66() == 999)
	{
		switch (num2)
		{
			case 0:
				return 688;
		
			case 1:
				return 689;
		
			case 2:
				return 690;
		
			case 3:
				return 691;
		
			case 4:
				return 1755;
		
			case 5:
				return 2437;
		
			case 6:
				return 2830;
		
			case 7:
				return 5504;
		
			case 8:
				return 5508;
		
			case 9:
				return 5512;
		
			case 10:
				return 5625;
		
			case 11:
				return 5629;
		
			case 12:
				return 5633;
		
			case 13:
				return 5637;
		
			case 14:
				return 6376;
		
			case 15:
				return 6499;
		
			case 16:
				return 6519;
		
			case 17:
				return 6525;
		
			case 18:
				return 10275;
		
			case 19:
				return 12009;
		}
	}

	return 1755;
}

BOOL func_74(int iParam0) // Position - 0xF609
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
		case 60:
			return true;
	
		default:
		
	}

	return false;
}

void func_75(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xF653
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
	return;
}

int func_76(Hash hParam0, Any* panParam1) // Position - 0xF672
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == hParam0)
				return i;
	}

	return -1;
}

void func_77(Ped pedParam0, var uParam1) // Position - 0xF6AD
{
	int i;
	int j;
	Hash k;
	Hash hash;
	Hash pedWeapontypeInSlot;
	int l;
	int numDlcWeaponsSp;
	Hash outData;
	var ComponentDataPtr;
	int num;
	int offset;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			hash = func_80(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_80(i));
				pedWeapontypeInSlot.f_1 = 0;
				pedWeapontypeInSlot.f_2 = 0;
				pedWeapontypeInSlot.f_3 = 0;
				pedWeapontypeInSlot.f_4 = 0;
			
				if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != -1569615261)
				{
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot == -72657034)
						pedWeapontypeInSlot.f_1 = 1;
				
					pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
					pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					j = 0;
				
					for (k = func_79(pedWeapontypeInSlot, j); k != 0; k = func_79(pedWeapontypeInSlot, j))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, k))
							MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { pedWeapontypeInSlot };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		numDlcWeaponsSp = FILES::GET_NUM_DLC_WEAPONS_SP();
	
		for (l = 0; l < numDlcWeaponsSp; l = l + 1)
		{
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_78(outData.f_1) && num < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outData))
				{
					pedWeapontypeInSlot = outData.f_1;
					pedWeapontypeInSlot.f_1 = 0;
					pedWeapontypeInSlot.f_2 = 0;
					pedWeapontypeInSlot.f_3 = 0;
					pedWeapontypeInSlot.f_4 = 0;
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
						pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
					}
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->f_221[num /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					offset = 0;
				
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(l); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(l, j, &ComponentDataPtr))
						{
							if (!func_57(ComponentDataPtr.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, ComponentDataPtr.f_3))
									MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), offset);
							
								offset = offset + 1;
							}
						}
					}
				}
			
				if (pedWeapontypeInSlot != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot = 0;
						pedWeapontypeInSlot.f_1 = 0;
					}
				}
			
				uParam1->f_221[num /*5*/] = { pedWeapontypeInSlot };
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_78(int iParam0) // Position - 0xF935
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return false;
		
			case -102323637:
			case -1076751822:
			case 1627465347:
				return false;
		
			case -771403250:
			case -1063057011:
				return false;
		
			case 2132975508:
				return false;
		
			case -1834847097:
			case 137902532:
				return false;
		
			case 2138347493:
			case -1466123874:
				return false;
		
			case 984333226:
			case -952879014:
				return false;
		
			case 1672152130:
			case -1420407917:
				return false;
		
			case 171789620:
			case -656458692:
			case -598887786:
				return false;
		
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
			case 1470379660:
			case -1658906650:
			case 94989220:
			case -618237638:
			case 406929569:
			case 1171102963:
			case -610080759:
			case 1853742572:
			case -774507221:
			case 465894841:
			case 1703483498:
			case -22923932:
			case 350597077:
			case 1924557585:
			case 62870901:
			case -624951259:
				return true;
		}
	}

	return false;
}

Hash func_79(Hash hParam0, int iParam1) // Position - 0xFB27
{
	int num;
	int dlcWeaponIndex;
	int i;
	int num2;
	var unk;
	var ComponentDataPtr;

	num = 0;

	switch (hParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -19858063;
					break;
			
				case 2:
					num = -316253668;
					break;
			
				case 3:
					num = 899381934;
					break;
			
				case 4:
					num = 1709866683;
					break;
			
				case 5:
					num = -684126074;
					break;
			}
			break;
	
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					num = 119648377;
					break;
			
				case 1:
					num = -696561875;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1023114086;
					break;
			
				case 4:
					num = -966439566;
					break;
			
				case 5:
					num = 1400690398;
					break;
			}
			break;
	
		case 584646201:
			switch (iParam1)
			{
				case 0:
					num = 834974250;
					break;
			
				case 1:
					num = 614078421;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1023114086;
					break;
			
				case 4:
					num = -1686714580;
					break;
			
				case 5:
					num = 1657753414;
					break;
			}
			break;
	
		case 324215364:
			switch (iParam1)
			{
				case 0:
					num = -884429072;
					break;
			
				case 1:
					num = 283556395;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1657815255;
					break;
			
				case 4:
					num = -1489156508;
					break;
			
				case 5:
					num = 1215999497;
					break;
			
				case 6:
					num = 2012362801;
					break;
			
				case 7:
					num = -1566778158;
					break;
			
				case 8:
					num = 1694268374;
					break;
			}
			break;
	
		case 736523883:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = 643254679;
					break;
			
				case 2:
					num = 889808635;
					break;
			
				case 3:
					num = 2043113590;
					break;
			
				case 4:
					num = 2076495324;
					break;
			
				case 5:
					num = -1023114086;
					break;
			
				case 6:
					num = 1019656791;
					break;
			
				case 7:
					num = 202788691;
					break;
			
				case 8:
					num = 663170192;
					break;
			}
			break;
	
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -1101075946;
					break;
			
				case 2:
					num = -1323216997;
					break;
			
				case 3:
					num = -604986051;
					break;
			
				case 4:
					num = 202788691;
					break;
			
				case 5:
					num = 2076495324;
					break;
			
				case 6:
					num = -1657815255;
					break;
			
				case 7:
					num = -1489156508;
					break;
			
				case 8:
					num = 1319990579;
					break;
			}
			break;
	
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -1614924820;
					break;
			
				case 2:
					num = -1861183855;
					break;
			
				case 3:
					num = -1167922891;
					break;
			
				case 4:
					num = 1967214384;
					break;
			
				case 5:
					num = 202788691;
					break;
			
				case 6:
					num = 2076495324;
					break;
			
				case 7:
					num = -1596416958;
					break;
			
				case 8:
					num = -2089531990;
					break;
			
				case 9:
					num = -660892072;
					break;
			
				case 10:
					num = 1605520746;
					break;
			}
			break;
	
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					num = -91250417;
					break;
			
				case 1:
					num = -1899902599;
					break;
			
				case 2:
					num = 2076495324;
					break;
			
				case 3:
					num = -1439939148;
					break;
			
				case 4:
					num = -2089531990;
					break;
			
				case 5:
					num = 930927479;
					break;
			}
			break;
	
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					num = -197857404;
					break;
			
				case 1:
					num = -2112517305;
					break;
			
				case 2:
					num = 1006677997;
					break;
			
				case 3:
					num = 202788691;
					break;
			
				case 4:
					num = -690308418;
					break;
			}
			break;
	
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -503336118;
					break;
			
				case 2:
					num = -691692330;
					break;
			
				case 3:
					num = 202788691;
					break;
			
				case 4:
					num = -1596416958;
					break;
			
				case 5:
					num = -1828795171;
					break;
			}
			break;
	
		case 487013001:
			switch (iParam1)
			{
				case 0:
					num = -435637410;
					break;
			
				case 1:
					num = 2076495324;
					break;
			
				case 2:
					num = -1562927653;
					break;
			
				case 3:
					num = -242322891;
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case -494615257:
			switch (iParam1)
			{
				case 0:
					num = -1796727865;
					break;
			
				case 1:
					num = -2034401422;
					break;
			
				case 2:
					num = 202788691;
					break;
			
				case 3:
					num = 2076495324;
					break;
			
				case 4:
					num = -2089531990;
					break;
			}
			break;
	
		case 100416529:
			switch (iParam1)
			{
				case 0:
					num = -1681506167;
					break;
			
				case 1:
					num = -767279652;
					break;
			
				case 2:
					num = -1135289737;
					break;
			
				case 3:
					num = -1489156508;
					break;
			
				case 4:
					num = 1077065191;
					break;
			}
			break;
	
		case 205991906:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = 1198478068;
					break;
			
				case 2:
					num = -767279652;
					break;
			
				case 3:
					num = -1135289737;
					break;
			
				case 4:
					num = 221907180;
					break;
			}
			break;
	
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					num = 202788691;
					break;
			
				case 1:
					num = 2076495324;
					break;
			
				case 2:
					num = -1439939148;
					break;
			}
			break;
	
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					num = -924946682;
					break;
			}
			break;
	
		case -270015777:
			switch (iParam1)
			{
				case 0:
					num = -1928132688;
					break;
			
				case 1:
					num = -1152981993;
					break;
			
				case 2:
					num = 2076495324;
					break;
			
				case 3:
					num = -1657815255;
					break;
			
				case 4:
					num = -1489156508;
					break;
			
				case 5:
					num = 663517359;
					break;
			}
			break;
	
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					num = 202788691;
					break;
			
				case 1:
					num = 2076495324;
					break;
			
				case 2:
					num = -1489156508;
					break;
			}
			break;
	
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					num = 580369945;
					break;
			
				case 1:
					num = -640439150;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1489156508;
					break;
			
				case 4:
					num = 2008591151;
					break;
			}
			break;
	
		case 171789620:
			switch (iParam1)
			{
				case 0:
					num = 1125642654;
					break;
			
				case 1:
					num = 860508675;
					break;
			
				case 2:
					num = 1857603803;
					break;
			
				case 3:
					num = 2076495324;
					break;
			
				case 4:
					num = -1439939148;
					break;
			
				case 5:
					num = 202788691;
					break;
			}
			break;
	
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					num = -2052698631;
					break;
			}
			break;
	
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					num = -979292288;
					break;
			
				case 1:
					num = -1284994289;
					break;
			
				case 2:
					num = 2076495324;
					break;
			
				case 3:
					num = -1439939148;
					break;
			
				case 4:
					num = -2089531990;
					break;
			
				case 5:
					num = 202788691;
					break;
			
				case 6:
					num = -1470645128;
					break;
			}
			break;
	
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					num = -125817127;
					break;
			
				case 1:
					num = 2063610803;
					break;
			
				case 2:
					num = -2144080721;
					break;
			}
			break;
	
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					num = -959978111;
					break;
			
				case 1:
					num = 2089537806;
					break;
			
				case 2:
					num = 1801039530;
					break;
			
				case 3:
					num = 2076495324;
					break;
			
				case 4:
					num = -1596416958;
					break;
			
				case 5:
					num = -1489156508;
					break;
			
				case 6:
					num = 202788691;
					break;
			
				case 7:
					num = 1929467122;
					break;
			
				case 8:
					num = 302671608;
					break;
			}
			break;
	
		case -656458692:
			switch (iParam1)
			{
				case 0:
					num = -971770235;
					break;
			
				case 1:
					num = -287703709;
					break;
			
				case 2:
					num = 1351683121;
					break;
			
				case 3:
					num = -1755194916;
					break;
			
				case 4:
					num = 2112683568;
					break;
			
				case 5:
					num = 1062111910;
					break;
			
				case 6:
					num = 146278587;
					break;
			
				case 7:
					num = -494162961;
					break;
			
				case 8:
					num = 2062808965;
					break;
			}
			break;
	
		case -619010992:
			switch (iParam1)
			{
				case 0:
					num = 1198425599;
					break;
			
				case 1:
					num = -1188271751;
					break;
			
				case 2:
					num = -1444295948;
					break;
			
				case 3:
					num = -1023114086;
					break;
			}
			break;
	
		case -538741184:
			switch (iParam1)
			{
				case 0:
					num = 1530822070;
					break;
			
				case 1:
					num = -409758110;
					break;
			}
			break;
	
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					num = -377062173;
					break;
			
				case 1:
					num = 384708672;
					break;
			
				case 2:
					num = -1802258419;
					break;
			}
			break;
	
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					num = -2067221805;
					break;
			
				case 1:
					num = -1820405577;
					break;
			}
			break;
	
		case -1786099057:
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		case -1312131151:
			switch (iParam1)
			{
				case 0:
					num = -1240142720;
					break;
			}
			break;
	
		case 1924557585:
			switch (iParam1)
			{
				case 0:
					num = -292433650;
					break;
			
				case 1:
					num = 494808810;
					break;
			
				case 2:
					num = -2089531990;
					break;
			}
			break;
	
		case 1171102963:
			switch (iParam1)
			{
				case 0:
					num = -1675905033;
					break;
			}
			break;
	
		default:
			if (hParam0 != 0)
			{
				dlcWeaponIndex = func_76(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_57(ComponentDataPtr.f_3))
							{
								if (num2 == iParam1)
									return ComponentDataPtr.f_3;
							
								num2 = num2 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

Hash func_80(int iParam0) // Position - 0x1086A
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = 1993361168;
			break;
	
		case 1:
			num = 1277010230;
			break;
	
		case 2:
			num = 932043479;
			break;
	
		case 3:
			num = -690654591;
			break;
	
		case 4:
			num = -1459198205;
			break;
	
		case 5:
			num = 195782970;
			break;
	
		case 6:
			num = -438797331;
			break;
	
		case 7:
			num = 896793492;
			break;
	
		case 8:
			num = 495159329;
			break;
	
		case 9:
			num = -1155528315;
			break;
	
		case 10:
			num = -515636489;
			break;
	
		case 11:
			num = -871913299;
			break;
	
		case 12:
			num = -1352759032;
			break;
	
		case 13:
			num = -542958961;
			break;
	
		case 14:
			num = 1682645887;
			break;
	
		case 15:
			num = -859470162;
			break;
	
		case 16:
			num = -2125426402;
			break;
	
		case 17:
			num = 2067210266;
			break;
	
		case 18:
			num = -538172856;
			break;
	
		case 19:
			num = 1783244476;
			break;
	
		case 20:
			num = 439844898;
			break;
	
		case 21:
			num = -24829327;
			break;
	
		case 22:
			num = 1949306232;
			break;
	
		case 23:
			num = -1941230881;
			break;
	
		case 24:
			num = -1033554448;
			break;
	
		case 25:
			num = 320513715;
			break;
	
		case 26:
			num = -695165975;
			break;
	
		case 27:
			num = -281028447;
			break;
	
		case 28:
			num = -686713772;
			break;
	
		case 29:
			num = 347509793;
			break;
	
		case 30:
			num = 1769089473;
			break;
	
		case 31:
			num = 189935548;
			break;
	
		case 33:
			num = 248801358;
			break;
	
		case 34:
			num = 386596758;
			break;
	
		case 35:
			num = -157212362;
			break;
	
		case 36:
			num = 436985596;
			break;
	
		case 37:
			num = -47957369;
			break;
	
		case 38:
			num = 575938238;
			break;
	}

	return num;
}

float func_81(int* piParam0) // Position - 0x10ADE
{
	if (func_84(piParam0))
		if (func_83(piParam0))
			return piParam0->f_2;
		else
			return func_82(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_82(BOOL bParam0) // Position - 0x10B1A
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_83(int* piParam0) // Position - 0x10B72
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_84(int* piParam0) // Position - 0x10B7F
{
	return IS_BIT_SET(*piParam0, 1);
}

BOOL func_85() // Position - 0x10B8C
{
	if (Global_1574612)
		return true;

	if (func_87())
		return true;

	if (func_86())
		return true;

	return func_4(124, -1);
}

BOOL func_86() // Position - 0x10BBC
{
	return Global_1575071;
}

BOOL func_87() // Position - 0x10BC8
{
	return Global_1575073;
}

void func_88() // Position - 0x10BD4
{
	int i;

	for (i = 1; i <= 49; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_116(i, 1);
	}

	for (i = 51; i <= 59; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_116(i, 1);
	}

	for (i = 70; i <= 77; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_116(i, 1);
	}

	return;
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x10C68
{
	int profileSetting;
	int profileSetting2;

	if (iParam1 == -1)
		iParam1 = func_7();

	profileSetting = func_90(iParam1);
	profileSetting2 = MISC::GET_PROFILE_SETTING(profileSetting);
	return IS_BIT_SET(profileSetting2, iParam0);
}

int func_90(int iParam0) // Position - 0x10C91
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

BOOL func_91() // Position - 0x10CF4
{
	if (func_93() && func_92(0))
		return true;

	return false;
}

var func_92(int iParam0) // Position - 0x10D12
{
	return Global_1574538[iParam0];
}

var func_93() // Position - 0x10D22
{
	return func_92(func_7() + 1);
}

BOOL func_94(var uParam0) // Position - 0x10D34
{
	return uParam0->f_79 == 1;
}

void func_95(var uParam0) // Position - 0x10D42
{
	float num;

	num = Global_4543383;
	uParam0->f_80 = uParam0->f_80 + MISC::GET_FRAME_TIME();

	if (!func_94(uParam0))
		return;

	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
		return;
	}

	if (func_149(14))
		num = 10f;

	if (func_102(uParam0) < num)
		return;

	if (func_100(uParam0, 0))
		return;

	if (func_98(uParam0->[0]))
	{
		func_97(uParam0);
		func_96(uParam0);
		func_101(uParam0, 0);
	}

	return;
}

void func_96(var uParam0) // Position - 0x10DCA
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_100(uParam0, i))
			i = *uParam0 + 100;
	}

	return;
}

void func_97(var uParam0) // Position - 0x10DFB
{
	int num;

	num = 1;

	if (func_100(uParam0, 0))
		return;

	while (num < *uParam0)
	{
		uParam0->[num - 1] = uParam0->[num];
		num = num + 1;
	}

	return;
}

BOOL func_98(int iParam0) // Position - 0x10E32
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return false;

	if (func_149(14) && !func_99(iParam0))
		return false;

	if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		return false;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return true;

	return false;
}

BOOL func_99(int iParam0) // Position - 0x10E7C
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

BOOL func_100(var uParam0, int iParam1) // Position - 0x10ECC
{
	return uParam0->[iParam1] == 78;
}

void func_101(var uParam0, int iParam1) // Position - 0x10EDD
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_102(var uParam0) // Position - 0x10EFA
{
	return uParam0->f_80;
}

int func_103() // Position - 0x10F06
{
	float minimapFowDiscoveryRatio;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_79389)
		return 0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			minimapFowDiscoveryRatio = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
		
			if (minimapFowDiscoveryRatio > 0.01f && MISC::IS_PC_VERSION())
				func_122(14, SYSTEM::FLOOR(minimapFowDiscoveryRatio * 100f));
		
			if (minimapFowDiscoveryRatio >= 0.975f)
			{
				func_116(14, 1);
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_104(int iParam0) // Position - 0x10F7E
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_105(BOOL bParam0) // Position - 0x10FAA
{
	if (Global_79389)
	{
		if (bParam0)
			func_9(bParam0);
	
		func_3(bParam0);
		func_16(bParam0);
		bParam0;
	}

	func_115(bParam0);
	func_108(bParam0);
	func_107();
	func_106();

	if (bParam0)
		func_84(&uLocal_58);

	return;
}

int func_106() // Position - 0x10FFE
{
	int num;
	int num2;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
		return 0;

	num = 0;
	num2 = 0;
	num = num + (STATS::STAT_GET_NUMBER_OF_DAYS(-183734540) * 24);
	num = num + STATS::STAT_GET_NUMBER_OF_HOURS(-183734540);
	num2 = num2 + (STATS::STAT_GET_NUMBER_OF_DAYS(1158126130) * 24);
	num2 = num2 + STATS::STAT_GET_NUMBER_OF_HOURS(1158126130);

	if (num + num2 >= 15)
	{
		func_116(50, 1);
		return 1;
	}

	return 0;
}

int func_107() // Position - 0x1106C
{
	int numSuccessfulStuntJumps;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
		return 0;

	numSuccessfulStuntJumps = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();

	if (numSuccessfulStuntJumps > 0)
	{
		if (Global_33214 < numSuccessfulStuntJumps)
		{
			if (Global_33214 >= 0)
				func_122(22, numSuccessfulStuntJumps);
		
			Global_33214 = numSuccessfulStuntJumps;
		}
	}

	if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
	{
		func_116(22, 1);
		return 1;
	}

	return 0;
}

int func_108(BOOL bParam0) // Position - 0x110C3
{
	var unk;
	int value;
	int i;
	int outValue;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
		return 0;

	unk = 6;
	unk[0] = func_114();
	unk[1] = func_113();
	unk[2] = func_112();
	unk[3] = func_111();
	unk[4] = func_110();
	unk[5] = func_109();
	value = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (unk[i])
			value = value + 1;
	}

	STATS::STAT_GET_INT(-596685709, &outValue, -1);

	if (value > outValue && value > 0)
	{
		STATS::STAT_SET_INT(-596685709, value, true);
		func_122(17, value);
	}

	bParam0;

	if (!unk[0])
	{
		bParam0;
		return 0;
	}

	if (!unk[1])
	{
		bParam0;
		return 0;
	}

	if (!unk[2])
	{
		bParam0;
		return 0;
	}

	if (!unk[3])
	{
		bParam0;
		return 0;
	}

	if (!unk[4])
	{
		bParam0;
		return 0;
	}

	if (!unk[5])
	{
		bParam0;
		return 0;
	}

	func_116(17, 1);
	return 1;
}

int func_109() // Position - 0x111E5
{
	int i;

	i = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_113969.f_1991[0 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_113969.f_1991[1 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_113969.f_1991[2 /*121*/][i /*10*/].f_8 == 3)
			return 1;
	}

	return 0;
}

int func_110() // Position - 0x11252
{
	int i;

	i = 0;

	for (i = 0; i < 22; i = i + 1)
	{
		if (Global_113969.f_19150[0 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_113969.f_19150[1 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_113969.f_19150[2 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
	}

	return 0;
}

int func_111() // Position - 0x112C8
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_24979.f_1, i))
			return 1;
	}

	return 0;
}

int func_112() // Position - 0x112F9
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_24982.f_2, i))
			return 1;
	}

	return 0;
}

int func_113() // Position - 0x1132A
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_113969.f_19019.f_19[i] == 1)
			return 1;
	}

	return 0;
}

int func_114() // Position - 0x1135D
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_113969.f_20014[i] == 1)
			return 1;
	}

	return 0;
}

int func_115(BOOL bParam0) // Position - 0x1138E
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(-656546900, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(-2098183071, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(1578119842, &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(-422142831, &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(-422142831, value, true);
		func_122(27, value);
	}

	if (value < 200000000)
		return 0;

	func_116(27, 1);
	return 1;
}

int func_116(int iParam0, int iParam1) // Position - 0x11445
{
	if (iParam0 >= 78)
		return 0;

	return func_117(iParam0, iParam1);
}

int func_117(int iParam0, int iParam1) // Position - 0x11460
{
	if (func_149(14) && !func_99(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33199 != 0 && !Global_79389)
		return 0;

	if (func_94(&Global_4543384))
	{
		if (func_120(&Global_4543384, iParam0))
			return 0;
	
		if (func_118(&Global_4543384, iParam0))
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

BOOL func_118(var uParam0, int iParam1) // Position - 0x114FD
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_149(14) && !func_99(iParam1))
		return false;

	if (func_120(uParam0, iParam1))
		return false;

	if (func_102(uParam0) < 0f)
		func_101(uParam0, 0);

	func_155(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_119(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_119(var uParam0, int iParam1) // Position - 0x115AE
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_149(14) && !func_99(iParam1))
		return 0;

	if (func_120(uParam0, iParam1))
		return 0;

	if (func_102(uParam0) < 0f)
		func_101(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_100(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_120(var uParam0, int iParam1) // Position - 0x11629
{
	return func_121(uParam0, iParam1) != -1;
}

int func_121(var uParam0, int iParam1) // Position - 0x1163B
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_122(int iParam0, int iParam1) // Position - 0x11668
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

int func_123(BOOL bParam0) // Position - 0x116B9
{
	int num;

	num = func_136(bParam0) + func_124(bParam0);
	bParam0;
	return num;
}

int func_124(BOOL bParam0) // Position - 0x116D7
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_113969.f_18577; i = i + 1)
	{
		if (Global_113969.f_18577[i /*6*/].f_3 != -1 && func_134(i, 7))
		{
			num3 = 0;
			num4 = 0;
		
			for (j = 0; j < func_132(i, 7); j = j + 1)
			{
				num6 = func_130(i, 7, j);
			
				if (!Global_64391[num6 /*13*/].f_7)
				{
					if (func_127(num6) == 1)
						num4 = num4 + 1;
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_126(num4, num3, false);
			num2 = func_125(num5);
		
			if (i >= 52 && i <= 56)
			{
				bParam0;
				num2 = Global_113969.f_2355[i - 52 /*2*/];
				num5 = 0f;
			}
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_125(float fParam0) // Position - 0x117CB
{
	if (fParam0 == 0f)
		return 0;

	if (fParam0 == 100f)
		return 3;
	else if (fParam0 > 50f)
		return 2;

	return 1;
}

float func_126(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11800
{
	float num;
	float value;

	if (bParam2)
		return 0f;

	if (iParam0 == iParam1)
		return 100f;

	num = SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1);
	value = (50f * num) + 50f;
	value = SYSTEM::TO_FLOAT(SYSTEM::CEIL(value));

	if (value > 100f)
		value = 100f;

	return value;
}

int func_127(int iParam0) // Position - 0x1185F
{
	if (func_128(iParam0, func_129(Global_64391[iParam0 /*13*/].f_4)))
		return 1;

	return 0;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x11882
{
	if (iParam1 < 0)
		return false;

	switch (Global_64391[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
				return false;
			break;
	}

	if (iParam1 == 2147483647)
		return false;

	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897 && Global_113969.f_24907[4 /*4*/] == _GET_CURRENT_PLAYER_CHARACTER())
		Global_64391[iParam0 /*13*/].f_2 = 0;

	if (Global_64391[iParam0 /*13*/].f_3)
		if (iParam1 < Global_64391[iParam0 /*13*/].f_2)
			return true;
	else if (iParam1 >= Global_64391[iParam0 /*13*/].f_2)
		return true;

	return false;
}

int func_129(Hash hParam0) // Position - 0x1194C
{
	int outValue;

	if (hParam0 == 0)
		return -1;

	if (STATS::STAT_GET_INT(hParam0, &outValue, -1))
		return outValue - 1;

	return -1;
}

int func_130(int iParam0, int iParam1, int iParam2) // Position - 0x11975
{
	switch (iParam1)
	{
		case 1:
			return Global_92301[iParam0 /*34*/].f_17[iParam2];
	
		case 7:
			return func_131(iParam0, iParam2);
	
		default:
			break;
	}

	return 914;
}

int func_131(int iParam0, int iParam1) // Position - 0x119B8
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
			
				case 1:
					return 742;
			
				default:
				
			}
		
			return -1;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
			
				case 1:
					return 744;
			
				default:
				
			}
		
			return -1;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
			
				case 1:
					return 746;
			
				default:
				
			}
		
			return -1;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
			
				case 1:
					return 748;
			
				default:
				
			}
		
			return -1;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
			
				default:
				
			}
		
			return -1;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
			
				case 1:
					return 752;
			
				default:
				
			}
		
			return -1;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
			
				case 1:
					return 754;
			
				default:
				
			}
		
			return -1;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
			
				case 1:
					return 756;
			
				case 2:
					return 757;
			
				default:
				
			}
		
			return -1;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
			
				case 1:
					return 759;
			
				default:
				
			}
		
			return -1;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
			
				case 1:
					return 761;
			
				default:
				
			}
		
			return -1;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
			
				default:
				
			}
		
			return -1;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
			
				default:
				
			}
		
			return -1;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
			
				case 1:
					return 765;
			
				default:
				
			}
		
			return -1;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
			
				default:
				
			}
		
			return -1;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
			
				case 1:
					return 768;
			
				case 2:
					return 769;
			
				default:
				
			}
		
			return -1;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
			
				case 1:
					return 771;
			
				default:
				
			}
		
			return -1;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
			
				case 1:
					return 773;
			
				default:
				
			}
		
			return -1;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
			
				case 1:
					return 775;
			
				default:
				
			}
		
			return -1;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
			
				case 1:
					return 777;
			
				default:
				
			}
		
			return -1;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
			
				case 1:
					return 779;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
			
				case 1:
					return 781;
			
				case 2:
					return 782;
			
				default:
				
			}
		
			return -1;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
			
				case 1:
					return 784;
			
				default:
				
			}
		
			return -1;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
			
				case 1:
					return 786;
			
				default:
				
			}
		
			return -1;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
			
				case 1:
					return 788;
			
				default:
				
			}
		
			return -1;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
			
				default:
				
			}
		
			return -1;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
			
				case 1:
					return 791;
			
				case 2:
					return 792;
			
				default:
				
			}
		
			return -1;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
			
				case 1:
					return 794;
			
				case 2:
					return 795;
			
				default:
				
			}
		
			return -1;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
			
				case 1:
					return 797;
			
				default:
				
			}
		
			return -1;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
			
				case 1:
					return 799;
			
				default:
				
			}
		
			return -1;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
			
				case 1:
					return 801;
			
				default:
				
			}
		
			return -1;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
			
				case 1:
					return 803;
			
				default:
				
			}
		
			return -1;
	
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
			
				case 1:
					return 805;
			
				default:
				
			}
		
			return -1;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
			
				default:
				
			}
		
			return -1;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
			
				case 1:
					return 808;
			
				case 2:
					return 809;
			
				default:
				
			}
		
			return -1;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
			
				case 1:
					return 829;
			
				case 2:
					return 830;
			
				default:
				
			}
		
			return -1;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
			
				case 1:
					return 832;
			
				case 2:
					return 833;
			
				default:
				
			}
		
			return -1;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
			
				case 1:
					return 835;
			
				case 2:
					return 836;
			
				default:
				
			}
		
			return -1;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
			
				case 1:
					return 838;
			
				case 2:
					return 839;
			
				default:
				
			}
		
			return -1;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
			
				case 1:
					return 841;
			
				case 2:
					return 842;
			
				default:
				
			}
		
			return -1;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
			
				case 1:
					return 844;
			
				case 2:
					return 845;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	return -1;
}

int func_132(int iParam0, int iParam1) // Position - 0x1209C
{
	switch (iParam1)
	{
		case 1:
			return Global_92301[iParam0 /*34*/].f_16;
	
		case 7:
			return func_133(iParam0);
	
		default:
			break;
	}

	return 0;
}

int func_133(int iParam0) // Position - 0x120D7
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 2;
	
		case 8:
			return 1;
	
		case 12:
			return 1;
	
		case 14:
			return 2;
	
		case 16:
			return 2;
	
		case 17:
			return 3;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 1;
	
		case 25:
			return 3;
	
		case 26:
			return 2;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 32:
			return 2;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			return 3;
	
		case 34:
			return 2;
	
		case 38:
			return 2;
	
		case 39:
			return 2;
	
		case 40:
			return 1;
	
		case 41:
			return 3;
	
		case 42:
			return 3;
	
		case 43:
			return 2;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 49:
			return 2;
	
		case 50:
			return 2;
	
		case 51:
			return 1;
	
		case 57:
			return 3;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 3;
	
		case 24:
			return 3;
	
		default:
		
	}

	return 0;
}

BOOL func_134(int iParam0, int iParam1) // Position - 0x12288
{
	switch (iParam1)
	{
		case 1:
			return !IS_BIT_SET(Global_92301[iParam0 /*34*/].f_15, 5);
	
		case 7:
			return func_135(iParam0);
	
		default:
			break;
	}

	return false;
}

BOOL func_135(int iParam0) // Position - 0x122C6
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

int func_136(BOOL bParam0) // Position - 0x1260C
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;
	int num7;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_113969.f_9088.f_330; i = i + 1)
	{
		if (Global_113969.f_9088.f_330[i /*6*/].f_3 != -1 && func_134(i, 1))
		{
			num3 = 0;
			num4 = 0;
			num7 = -1;
		
			for (j = 0; j < func_132(i, 1); j = j + 1)
			{
				num6 = func_130(i, 1, j);
			
				if (!Global_64391[num6 /*13*/].f_7)
				{
					if (func_127(num6) == 1)
						num4 = num4 + 1;
				
					switch (num6)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							num7 = func_137(num6);
						
							if (num7 >= 2147483647)
								num7 = 1;
							break;
					}
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_126(num4, num3, false);
			num2 = func_125(num5);
		
			if (num7 > -1)
				num2 = num7;
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_137(int iParam0) // Position - 0x12726
{
	int num;

	num = func_129(Global_64391[iParam0 /*13*/].f_4);

	if (num > -2)
		return num;

	return 0;
}

void func_138() // Position - 0x1274B
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		return;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_116(25, 1);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
	
		if (ENTITY::IS_ENTITY_A_PED(pedSourceOfDeath))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);
		
			if (func_139(pedIndexFromEntityIndex))
			{
				if (ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex) == 113504370)
				{
					func_116(25, 1);
					return;
				}
			}
		}
	}

	return;
}

BOOL func_139(Ped pedParam0) // Position - 0x127D4
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}

void func_140() // Position - 0x127F2
{
	switch (iLocal_55)
	{
		case 0:
			fLocal_63 = 0f;
		
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				return;
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == false)
			{
				if (func_145() == 2)
				{
					func_152(&uLocal_58);
					iLocal_55 = iLocal_55 + 1;
				}
			}
			break;
	
		case 1:
			if (func_144() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (MISC::GET_MISSION_FLAG() == true)
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (func_145() < 2)
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			fLocal_63 = func_142(&uLocal_58);
		
			if (fLocal_63 >= 180f)
			{
				func_116(24, 1);
				func_141(&uLocal_58);
				iLocal_55 = iLocal_55 + 1;
			}
			break;
	
		case 2:
			iLocal_55 = iLocal_55 + 1;
			break;
	}

	return;
}

void func_141(int* piParam0) // Position - 0x12902
{
	if (func_84(piParam0))
	{
		if (!func_83(piParam0))
		{
			piParam0->f_2 = func_82(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
			MISC::SET_BIT(piParam0, 2);
		}
	}

	return;
}

float func_142(var uParam0) // Position - 0x12939
{
	if (func_84(uParam0))
		if (func_83(uParam0))
			return uParam0->f_2;
		else
			return func_82(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return 0f;
}

void func_143(var uParam0) // Position - 0x12972
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_144() // Position - 0x12988
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98991.f_44 == 1;

	return false;
}

int func_145() // Position - 0x129A4
{
	int num;
	Ped ped;

	num = 0;
	ped = func_147(CHAR_TREVOR);

	if (func_146(ped, 0) || IS_BIT_SET(Global_97364, 2))
		num = num + 1;

	ped = func_147(CHAR_FRANKLIN);

	if (func_146(ped, 0) || IS_BIT_SET(Global_97364, 1))
		num = num + 1;

	ped = func_147(CHAR_MICHAEL);

	if (func_146(ped, 0) || IS_BIT_SET(Global_97364, 0))
		num = num + 1;

	return num;
}

BOOL func_146(Ped pedParam0, int iParam1) // Position - 0x12A1A
{
	return false;
}

Ped func_147(eCharacter echParam0) // Position - 0x12A73
{
	if (echParam0 > CHAR_MULTIPLAYER)
		return 0;

	if (echParam0 == _GET_CURRENT_PLAYER_CHARACTER())
		return PLAYER::PLAYER_PED_ID();

	return Global_98991[func_148(echParam0)];
}

int func_148(eCharacter echParam0) // Position - 0x12AA4
{
	if (echParam0 == CHAR_MICHAEL)
		return 0;
	else if (echParam0 == CHAR_TREVOR)
		return 2;
	else if (echParam0 == CHAR_FRANKLIN)
		return 1;
	else if (echParam0 == _CHAR_NULL)
		return 3;

	return 4;
}

BOOL func_149(int iParam0) // Position - 0x12ADF
{
	return Global_44042 == iParam0;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x12AED
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x12B04
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_152(int* piParam0) // Position - 0x12B1A
{
	func_153(piParam0, 0f);
	return;
}

void func_153(int* piParam0, float fParam1) // Position - 0x12B29
{
	piParam0->f_1 = func_82(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_154(var uParam0, int iParam1) // Position - 0x12B54
{
	uParam0->f_79 = iParam1;

	if (uParam0->f_79)
		func_101(uParam0, 0);

	return;
}

void func_155(var uParam0) // Position - 0x12B70
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_156(uParam0, i);
	}

	func_101(uParam0, Global_4543383 - 0.5f);
	return;
}

void func_156(var uParam0, int iParam1) // Position - 0x12BA4
{
	uParam0->[iParam1] = 78;
	return;
}

void func_157() // Position - 0x12BB4
{
	int i;
	int num;

	num = 78;

	for (i = 1; i <= num - 1; i = i + 1)
	{
		PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i);
	}

	return;
}

void func_158(int iParam0) // Position - 0x12BDE
{
	iParam0 > 0;
	return;
}


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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
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
	BOOL bLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	Vector3 vector;
	var unk63;

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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_80 = 1;
	iLocal_81 = 65;
	iLocal_82 = 49;
	iLocal_83 = 64;
	iLocal_87 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_88 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_91 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	func_284();
	num.f_17 = 2;
	num.f_28 = 6;
	num.f_35 = 5;
	num.f_41 = 6;
	vector = { 0f, 0f, 0f };
	func_283(&num);
	vector = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_282("Force cleanup [TERMINATING]");
	
		if (num != -1)
		{
			if (Global_113222[num /*10*/].f_9 != -1)
			{
				func_282("Relinquishing candidate id...");
				func_281(&(Global_113222[num /*10*/].f_9));
			}
		}
	
		func_265(&num, true);
	}

	unk63 = 1;
	unk63[0] = 31;

	if (!func_262(&unk63, &num, vector, 1f))
	{
		func_261();
		func_282("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (!func_253(num))
	{
		func_261();
		func_282("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_252(num))
	{
		func_261();
		func_282("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	while (!func_243(&num))
	{
		SYSTEM::WAIT(0);
	
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_282("Player out of range [TERMINATING]");
			func_265(&num, true);
		}
	}

	MISC::CLEAR_AREA(vector, num.f_15, true, false, false, false);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!IS_RC_FINE_AND_IN_RANGE(&num, 1))
			func_265(&num, true);
	
		func_204(num);
		func_196(&iLocal_91, &(num.f_9), vector);
	
		if (func_181(&num, 0))
		{
			if (!func_2(&num))
				func_265(&num, true);
		
			if (func_1(&num))
				func_265(&num, false);
		}
	}

	return;
}

BOOL func_1(var uParam0) // Position - 0x1EF
{
	while (!Global_113222[*uParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}

	return true;
}

BOOL func_2(Any* panParam0) // Position - 0x20D
{
	const char* str;
	var unk32;

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		while (!func_171(*panParam0))
		{
			if (func_170(*panParam0))
				func_158();
		
			if (!IS_RC_FINE_AND_IN_RANGE(panParam0, *panParam0 != 2))
			{
				func_282("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return false;
			}
		
			SYSTEM::WAIT(0);
		}
	}

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		func_155();

	if (!func_123(panParam0))
	{
		func_282("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return false;
	}

	func_120(*panParam0, &str);
	TEXT_LABEL_COPY(&unk32, { func_119(*panParam0) }, 4);
	func_117(&unk32, str.f_3, 0);
	func_114(*panParam0);

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
		if (panParam0->f_16 == 2)
			func_22(&(panParam0->f_1), 0);
		else
			func_22(&(panParam0->f_1), 1);

	func_3(*panParam0, str);
	return true;
}

void func_3(int iParam0, const char* sParam1) // Position - 0x2CE
{
	func_21(sParam1);
	MISC::CLEAR_BIT(&Global_114135.f_18578[iParam0 /*6*/], 5);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-131607125) > 0)
	{
		while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-131607125) > 0)
		{
			func_19();
			SYSTEM::WAIT(0);
		}
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-131607125) < 1)
	{
		Global_64309 = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", SPECIAL_ABILITY);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}

	while (!IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 5))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-131607125) > 0)
			MISC::SET_BIT(&Global_114135.f_18578[iParam0 /*6*/], 5);
	}

	func_4(iParam0);
	return;
}

void func_4(int iParam0) // Position - 0x386
{
	int num;
	int num2;

	if (Global_64306 == 1)
	{
		func_18();
		Global_64306 = 0;
	
		if (Global_64301)
			return;
	}

	if (Global_4)
	{
		Global_64309 = 1;
		func_10();
		return;
	}

	TEXT_LABEL_COPY(&Global_64323, { func_9(iParam0) }, 4);
	Global_64311 = 0;
	Global_64310 = 0;

	switch (iParam0)
	{
		case 1:
		case 9:
			Global_64298 = true;
			Global_64301 = true;
			Global_64304 = 1;
			break;
	
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_64309 = 1;
			Global_64310 = 1;
			func_10();
			func_19();
			return;
	}

	num = Global_76553;
	Global_76553 = 1;
	num2 = Global_76554;
	Global_76554 = iParam0;

	if (!Global_64298)
	{
		if (Global_76554 != num2 || Global_76403 == 0 || num != Global_76553)
		{
			Global_33341 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_64301 = true;
		}
	}

	Global_64336 = MISC::GET_GAME_TIMER();
	func_5();
	Global_64308 = false;
	return;
}

void func_5() // Position - 0x4E0
{
	int i;

	if (!Global_64305)
		return;

	if (Global_76403 == 0)
		return;

	i = 0;

	for (i = 0; i < Global_76403; i = i + 1)
	{
		switch (Global_64533[Global_76404[i /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_76404[i /*9*/].f_3 = 1;
				break;
		
			case 4:
				if (Global_64316)
					Global_76404[i /*9*/].f_3 = 1;
				break;
		
			case 6:
				if (Global_64533[Global_76404[i /*9*/] /*13*/].f_3)
					if (Global_76404[i /*9*/].f_1 != 0)
						Global_76404[i /*9*/].f_3 = 1;
				break;
		}
	}

	Global_64305 = false;
	return;
}

void func_6(int iParam0) // Position - 0x593
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
	
		case 3:
			func_7(743);
			func_7(744);
			return;
	
		case 5:
			func_7(745);
			func_7(746);
			return;
	
		case 6:
			func_7(747);
			func_7(748);
			return;
	
		case 8:
			func_7(749);
			return;
	
		case 12:
			func_7(750);
			return;
	
		case 14:
			func_7(751);
			func_7(752);
			return;
	
		case 16:
			func_7(753);
			func_7(754);
			return;
	
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
	
		case 18:
			func_7(758);
			func_7(759);
			return;
	
		case 19:
			func_7(760);
			func_7(761);
			return;
	
		case 20:
			func_7(762);
			return;
	
		case 21:
			func_7(763);
			return;
	
		case 22:
			func_7(764);
			func_7(765);
			return;
	
		case 23:
			func_7(766);
			return;
	
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
	
		case 26:
			func_7(770);
			func_7(771);
			return;
	
		case 28:
			func_7(772);
			func_7(773);
			return;
	
		case 29:
			func_7(774);
			func_7(775);
			return;
	
		case 30:
			func_7(776);
			func_7(777);
			return;
	
		case 32:
			func_7(778);
			func_7(779);
			return;
	
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
	
		case 34:
			func_7(783);
			func_7(784);
			return;
	
		case 38:
			func_7(785);
			func_7(786);
			return;
	
		case 39:
			func_7(787);
			func_7(788);
			return;
	
		case 40:
			func_7(789);
			return;
	
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
	
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
	
		case 43:
			func_7(796);
			func_7(797);
			return;
	
		case 46:
			func_7(798);
			func_7(799);
			return;
	
		default:
		
	}

	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
	
		case 49:
			func_7(802);
			func_7(803);
			return;
	
		case 50:
			func_7(804);
			func_7(805);
			return;
	
		case 51:
			func_7(806);
			return;
	
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
	
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
	
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
	
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
	
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
	
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
	
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
	
		default:
			return;
	}

	return;
}

void func_7(int iParam0) // Position - 0x97B
{
	Global_64301 = true;
	Global_64304 = 1;

	if (Global_76403 > 15)
		return;

	func_8(Global_76403);
	Global_76404[Global_76403 /*9*/] = iParam0;
	Global_76403 = Global_76403 + 1;

	if (Global_64533[iParam0 /*13*/] == 16)
		Global_76555 = 1;

	return;
}

void func_8(int iParam0) // Position - 0x9C6
{
	Global_76404[iParam0 /*9*/].f_1 = 0;
	Global_76404[iParam0 /*9*/].f_2 = 0f;
	Global_76404[iParam0 /*9*/].f_3 = 0;
	Global_76404[iParam0 /*9*/].f_4 = 0;
	return;
}

struct<2> func_9(int iParam0) // Position - 0x9FA
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_119(iParam0) };

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

void func_10() // Position - 0xA32
{
	if (Global_64308)
		return;

	Global_64317 = 0;
	Global_76403 = 0;
	Global_64319 = 0;
	Global_64316;
	Global_64316 = false;
	func_17(0);
	func_16();
	Global_76555 = 0;
	Global_64307 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_64298 = false;
	Global_64328 = 0;
	Global_64336 = -1;
	return;
}

void func_11() // Position - 0xA88
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_76590[i /*2*/].f_1 = -1;
	}

	Global_76599 = 0;
	return;
}

void func_12() // Position - 0xAB5
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_76556[i /*2*/] = 0;
		Global_76556[i /*2*/].f_1 = -1;
	}

	Global_76589 = 0;
	return;
}

void func_13() // Position - 0xAEC
{
	Global_64467 = 0;
	return;
}

void func_14() // Position - 0xAF8
{
	Global_64327 = 0;
	Global_64331 = func_15(-669750575);
	Global_64330 = func_15(-2097237603);
	Global_64333 = func_15(-1901131717);
	Global_64332 = func_15(2020326774);
	Global_64335 = func_15(-1675981664);
	Global_64334 = func_15(165162477);
	return;
}

var func_15(Hash hParam0) // Position - 0xB4C
{
	var outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	return outValue;
}

void func_16() // Position - 0xB60
{
	int i;

	Global_64337 = 0;
	i = 0;

	for (i = 0; i < 64; i = i + 1)
	{
		Global_64338[i /*2*/] = 0;
	}

	return;
}

void func_17(BOOL bParam0) // Position - 0xB8A
{
	Global_79800 = bParam0;
	Global_79801 = bParam0;
	return;
}

void func_18() // Position - 0xB9E
{
	int i;

	Global_64306 = 1;
	i = 0;

	for (i = 0; i < Global_76403; i = i + 1)
	{
		Global_76404[i /*9*/].f_3 = 2;
	}

	Global_64316;
	Global_64316 = false;
	return;
}

void func_19() // Position - 0xBD7
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-131607125) > 0)
	{
		if (func_20())
		{
			if (Global_64303 && !Global_64302)
			{
				Global_64303 = false;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}

	return;
}

BOOL func_20() // Position - 0xC17
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-131607125) < 1)
		return false;

	if (!Global_64301)
		return false;

	return Global_64313;
}

void func_21(const char* sParam0) // Position - 0xC41
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

void func_22(char* sParam0, int iParam1) // Position - 0xC54
{
	MISC::CLEAR_BIT(&(Global_101688.f_20), 17);
	func_23(sParam0, iParam1, 0);
	return;
}

void func_23(char* sParam0, int iParam1, Ped pedParam2) // Position - 0xC71
{
	if (Global_101688 != 10 && Global_101688 != 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_104688, sParam0, 32);
		func_25(&Global_104696, sParam0, 0, "Start", iParam1, pedParam2);
		func_24();
		Global_95841 = 0;
	}

	return;
}

void func_24() // Position - 0xCB6
{
	int i;
	int j;

	Global_107680 = Global_104696;
	Global_107680.f_1 = Global_104696.f_1;
	Global_107680.f_6 = Global_104696.f_6;
	Global_107680.f_7 = Global_104696.f_7;
	Global_107680.f_8 = Global_104696.f_8;
	Global_107680.f_2 = Global_104696.f_2;
	Global_107680.f_3 = Global_104696.f_3;
	Global_107680.f_4 = Global_104696.f_4;
	Global_107680.f_5 = Global_104696.f_5;

	for (j = 0; j < 3; j = j + 1)
	{
		Global_107680.f_9[j] = Global_104696.f_9[j];
		Global_107680.f_13[j] = Global_104696.f_13[j];
		Global_107680.f_17[j] = Global_104696.f_17[j];
		Global_107680.f_21[j] = Global_104696.f_21[j];
		Global_107680.f_25[0 /*295*/][j /*98*/] = { Global_104696.f_25[0 /*295*/][j /*98*/] };
		Global_107680.f_25[1 /*295*/][j /*98*/] = { Global_104696.f_25[1 /*295*/][j /*98*/] };
	
		for (i = 0; i < 12; i = i + 1)
		{
			Global_107680.f_616[j /*65*/][i] = Global_104696.f_616[j /*65*/][i];
			Global_107680.f_616[j /*65*/].f_13[i] = Global_104696.f_616[j /*65*/].f_13[i];
			Global_107680.f_616[j /*65*/].f_26[i] = Global_104696.f_616[j /*65*/].f_26[i];
		}
	
		Global_107680.f_616[j /*65*/].f_59 = Global_104696.f_616[j /*65*/].f_59;
		Global_107680.f_616[j /*65*/].f_60 = Global_104696.f_616[j /*65*/].f_60;
		Global_107680.f_616[j /*65*/].f_61 = Global_104696.f_616[j /*65*/].f_61;
		Global_107680.f_616[j /*65*/].f_62 = Global_104696.f_616[j /*65*/].f_62;
		Global_107680.f_616[j /*65*/].f_63 = Global_104696.f_616[j /*65*/].f_63;
		Global_107680.f_616[j /*65*/].f_64 = Global_104696.f_616[j /*65*/].f_64;
	
		for (i = 0; i < 9; i = i + 1)
		{
			Global_107680.f_616[j /*65*/].f_39[i] = Global_104696.f_616[j /*65*/].f_39[i];
			Global_107680.f_616[j /*65*/].f_49[i] = Global_104696.f_616[j /*65*/].f_49[i];
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			Global_107680.f_812[j /*477*/][i /*5*/] = { Global_104696.f_812[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			Global_107680.f_812[j /*477*/].f_221[i /*5*/] = { Global_104696.f_812[j /*477*/].f_221[i /*5*/] };
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			Global_107680.f_2244[j /*32*/][i] = Global_104696.f_2244[j /*32*/][i];
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			Global_107680.f_2244[j /*32*/].f_5[i] = Global_104696.f_2244[j /*32*/].f_5[i];
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			Global_107680.f_2244[j /*32*/].f_16[i] = Global_104696.f_2244[j /*32*/].f_16[i];
		}
	
		Global_107680.f_2341[j] = Global_104696.f_2341[j];
	
		for (i = 0; i <= 3; i = i + 1)
		{
			Global_107680.f_2838[j /*15*/][i] = Global_104696.f_2838[j /*15*/][i];
			Global_107680.f_2838[j /*15*/].f_5[i] = Global_104696.f_2838[j /*15*/].f_5[i];
			Global_107680.f_2838[j /*15*/].f_10[i] = Global_104696.f_2838[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			Global_107680.f_2345[j /*164*/][i] = Global_104696.f_2345[j /*164*/][i];
			Global_107680.f_2345[j /*164*/].f_4[i] = Global_104696.f_2345[j /*164*/].f_4[i];
			Global_107680.f_2345[j /*164*/].f_8[i] = Global_104696.f_2345[j /*164*/].f_8[i];
			Global_107680.f_2345[j /*164*/].f_12[i] = Global_104696.f_2345[j /*164*/].f_12[i];
			Global_107680.f_2345[j /*164*/].f_16[i] = Global_104696.f_2345[j /*164*/].f_16[i];
			Global_107680.f_2345[j /*164*/].f_20[i] = Global_104696.f_2345[j /*164*/].f_20[i];
			Global_107680.f_2345[j /*164*/].f_24[i] = Global_104696.f_2345[j /*164*/].f_24[i];
			Global_107680.f_2345[j /*164*/].f_28[i] = Global_104696.f_2345[j /*164*/].f_28[i];
			Global_107680.f_2345[j /*164*/].f_32[i] = Global_104696.f_2345[j /*164*/].f_32[i];
			Global_107680.f_2345[j /*164*/].f_36[i] = Global_104696.f_2345[j /*164*/].f_36[i];
			Global_107680.f_2345[j /*164*/].f_40[i] = Global_104696.f_2345[j /*164*/].f_40[i];
			Global_107680.f_2345[j /*164*/].f_44[i] = Global_104696.f_2345[j /*164*/].f_44[i];
			Global_107680.f_2345[j /*164*/].f_48[i] = Global_104696.f_2345[j /*164*/].f_48[i];
			Global_107680.f_2345[j /*164*/].f_52[i] = Global_104696.f_2345[j /*164*/].f_52[i];
			Global_107680.f_2345[j /*164*/].f_56[i] = Global_104696.f_2345[j /*164*/].f_56[i];
			Global_107680.f_2345[j /*164*/].f_60[i] = Global_104696.f_2345[j /*164*/].f_60[i];
			Global_107680.f_2345[j /*164*/].f_64[i] = Global_104696.f_2345[j /*164*/].f_64[i];
			Global_107680.f_2345[j /*164*/].f_68[i] = Global_104696.f_2345[j /*164*/].f_68[i];
			Global_107680.f_2345[j /*164*/].f_72[i] = Global_104696.f_2345[j /*164*/].f_72[i];
			Global_107680.f_2345[j /*164*/].f_76[i] = Global_104696.f_2345[j /*164*/].f_76[i];
			Global_107680.f_2345[j /*164*/].f_80[i] = Global_104696.f_2345[j /*164*/].f_80[i];
			Global_107680.f_2345[j /*164*/].f_84[i] = Global_104696.f_2345[j /*164*/].f_84[i];
			Global_107680.f_2345[j /*164*/].f_88[i] = Global_104696.f_2345[j /*164*/].f_88[i];
			Global_107680.f_2345[j /*164*/].f_92[i] = Global_104696.f_2345[j /*164*/].f_92[i];
			Global_107680.f_2345[j /*164*/].f_96[i] = Global_104696.f_2345[j /*164*/].f_96[i];
			Global_107680.f_2345[j /*164*/].f_100[i] = Global_104696.f_2345[j /*164*/].f_100[i];
			Global_107680.f_2345[j /*164*/].f_104[i] = Global_104696.f_2345[j /*164*/].f_104[i];
			Global_107680.f_2345[j /*164*/].f_108[i] = Global_104696.f_2345[j /*164*/].f_108[i];
			Global_107680.f_2345[j /*164*/].f_112[i] = Global_104696.f_2345[j /*164*/].f_112[i];
			Global_107680.f_2345[j /*164*/].f_116[i] = Global_104696.f_2345[j /*164*/].f_116[i];
			Global_107680.f_2345[j /*164*/].f_120[i] = Global_104696.f_2345[j /*164*/].f_120[i];
			Global_107680.f_2345[j /*164*/].f_124[i] = Global_104696.f_2345[j /*164*/].f_124[i];
			Global_107680.f_2345[j /*164*/].f_128[i] = Global_104696.f_2345[j /*164*/].f_128[i];
			Global_107680.f_2345[j /*164*/].f_132[i] = Global_104696.f_2345[j /*164*/].f_132[i];
			Global_107680.f_2345[j /*164*/].f_136[i] = Global_104696.f_2345[j /*164*/].f_136[i];
			Global_107680.f_2345[j /*164*/].f_140[i] = Global_104696.f_2345[j /*164*/].f_140[i];
			Global_107680.f_2345[j /*164*/].f_144[i] = Global_104696.f_2345[j /*164*/].f_144[i];
			Global_107680.f_2345[j /*164*/].f_148[i] = Global_104696.f_2345[j /*164*/].f_148[i];
			Global_107680.f_2345[j /*164*/].f_152[i] = Global_104696.f_2345[j /*164*/].f_152[i];
			Global_107680.f_2345[j /*164*/].f_156[i] = Global_104696.f_2345[j /*164*/].f_156[i];
			Global_107680.f_2345[j /*164*/].f_160[i] = Global_104696.f_2345[j /*164*/].f_160[i];
		}
	}

	Global_107680.f_2884 = { Global_104696.f_2884 };
	Global_107680.f_2884.f_3 = Global_104696.f_2884.f_3;
	Global_107680.f_2890 = { Global_104696.f_2890 };
	Global_107680.f_2890.f_3 = { Global_104696.f_2890.f_3 };
	Global_107680.f_2890.f_6 = Global_104696.f_2890.f_6;
	Global_107680.f_2890.f_8 = Global_107680.f_2890.f_8;
	Global_107680.f_2890.f_7 = Global_104696.f_2890.f_7;
	Global_107680.f_2890.f_9 = Global_104696.f_2890.f_9;
	Global_107680.f_2890.f_11 = Global_104696.f_2890.f_11;
	Global_107680.f_2890.f_10 = Global_104696.f_2890.f_10;
	Global_107680.f_2890.f_12 = Global_104696.f_2890.f_12;
	Global_107680.f_2890.f_12.f_1 = { Global_104696.f_2890.f_12.f_1 };
	Global_107680.f_2890.f_12.f_5 = Global_104696.f_2890.f_12.f_5;
	Global_107680.f_2890.f_12.f_6 = Global_104696.f_2890.f_12.f_6;
	Global_107680.f_2890.f_12.f_7 = Global_104696.f_2890.f_12.f_7;
	Global_107680.f_2890.f_12.f_8 = Global_104696.f_2890.f_12.f_8;
	Global_107680.f_2890.f_12.f_9 = { Global_104696.f_2890.f_12.f_9 };
	Global_107680.f_2890.f_12.f_59 = { Global_104696.f_2890.f_12.f_59 };
	Global_107680.f_2890.f_12.f_62 = Global_104696.f_2890.f_12.f_62;
	Global_107680.f_2890.f_12.f_63 = Global_104696.f_2890.f_12.f_63;
	Global_107680.f_2890.f_12.f_64 = Global_104696.f_2890.f_12.f_64;
	Global_107680.f_2890.f_12.f_65 = Global_104696.f_2890.f_12.f_65;
	Global_107680.f_2890.f_12.f_77 = Global_104696.f_2890.f_12.f_77;
	Global_107680.f_2890.f_12.f_66 = Global_104696.f_2890.f_12.f_66;
	Global_107680.f_2890.f_12.f_67 = Global_104696.f_2890.f_12.f_67;
	Global_107680.f_2890.f_12.f_68 = Global_104696.f_2890.f_12.f_68;
	Global_107680.f_2890.f_12.f_69 = Global_104696.f_2890.f_12.f_69;
	Global_107680.f_2890.f_12.f_71 = Global_104696.f_2890.f_12.f_71;
	Global_107680.f_2890.f_12.f_72 = Global_104696.f_2890.f_12.f_72;
	Global_107680.f_2890.f_12.f_73 = Global_104696.f_2890.f_12.f_73;
	Global_107680.f_2890.f_12.f_74 = Global_104696.f_2890.f_12.f_74;
	Global_107680.f_2890.f_12.f_75 = Global_104696.f_2890.f_12.f_75;
	Global_107680.f_2890.f_12.f_76 = Global_104696.f_2890.f_12.f_76;
	Global_107680.f_2980 = Global_104696.f_2980;
	Global_107680.f_2980.f_1 = Global_104696.f_2980.f_1;
	Global_107680.f_2980.f_2 = Global_104696.f_2980.f_2;
	Global_107680.f_2980.f_3 = Global_104696.f_2980.f_3;
	return;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, Ped pedParam5) // Position - 0x194A
{
	int i;
	eCharacter j;

	*uParam0 = _GET_CURRENT_PLAYER_CHARACTER_0();
	uParam0->f_1 = func_102();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(PLAYER::PLAYER_PED_ID());
		func_60(PLAYER::PLAYER_PED_ID(), false);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
	
		if (uParam0->f_2 == 0 || uParam0->f_2 == 966099553)
			uParam0->f_2 = -1569615261;
	}

	for (j = CHAR_MICHAEL; j < CHAR_MULTIPLAYER; j = j + 1)
	{
		uParam0->f_17[j] = Global_114135.f_2367.f_539.f_294[j];
	
		if (j == _GET_CURRENT_PLAYER_CHARACTER())
		{
			func_48(PLAYER::PLAYER_PED_ID(), &uParam0->f_616[j /*65*/], 1, -1);
		}
		else
		{
			for (i = 0; i < 12; i = i + 1)
			{
				uParam0->f_616[j /*65*/][i] = Global_101413[j /*65*/][i];
				uParam0->f_616[j /*65*/].f_13[i] = Global_101413[j /*65*/].f_13[i];
			}
		
			uParam0->f_616[j /*65*/].f_59 = Global_101413[j /*65*/].f_59;
			uParam0->f_616[j /*65*/].f_60 = Global_101413[j /*65*/].f_60;
			uParam0->f_616[j /*65*/].f_61 = Global_101413[j /*65*/].f_61;
			uParam0->f_616[j /*65*/].f_62 = Global_101413[j /*65*/].f_62;
			uParam0->f_616[j /*65*/].f_63 = Global_101413[j /*65*/].f_63;
			uParam0->f_616[j /*65*/].f_64 = Global_101413[j /*65*/].f_64;
		
			for (i = 0; i < 9; i = i + 1)
			{
				uParam0->f_616[j /*65*/].f_39[i] = Global_101413[j /*65*/].f_39[i];
				uParam0->f_616[j /*65*/].f_49[i] = Global_101413[j /*65*/].f_49[i];
			}
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			uParam0->f_812[j /*477*/][i /*5*/] = { Global_114135.f_2367.f_539.f_298[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			uParam0->f_812[j /*477*/].f_221[i /*5*/] = { Global_114135.f_2367.f_539.f_298[j /*477*/].f_221[i /*5*/] };
		}
	
		switch (j)
		{
			case CHAR_MICHAEL:
				STATS::STAT_GET_INT(-1142440288, &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(-1123368730, &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(1081345962, &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(-1371118771, &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(-765547619, &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(-1080850937, &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(-2022861412, &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(-2018548694, &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(1323790999, &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(760098661, &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(-260459075, &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(1085789752, &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(334003354, &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(-500524769, &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(-1456330957, &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(-142720058, &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(-855707956, &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(-1539506602, &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(1915755069, &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_FRANKLIN:
				STATS::STAT_GET_INT(-126492964, &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(190514318, &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(-739329202, &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(-1185380830, &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(1030852186, &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(1801284145, &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(-1873234909, &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(-1315299114, &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(-2073999771, &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(1865030647, &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(-419525730, &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(-121557213, &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(-1021590567, &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(-732338604, &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(758650912, &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(1090437037, &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(164057391, &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(1607797744, &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(-1852248201, &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_TREVOR:
				STATS::STAT_GET_INT(177632919, &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(-464115177, &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(111865610, &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(-194950537, &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(-378588013, &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(-626223346, &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(-848331628, &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(226994293, &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(-1921832882, &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(1934357500, &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(1106022718, &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(1478409634, &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(-863918486, &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(-1699495217, &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(-1327567067, &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(2133068720, &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(-7828357, &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(-4568869, &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(-225202546, &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		}
	
		uParam0->f_9[j] = Global_114135.f_20568.f_233[j /*69*/].f_1;
		uParam0->f_13[j] = Global_61482[j];
		uParam0->f_25[0 /*295*/][j /*98*/] = { Global_114135.f_2367.f_539.f_2407[0 /*295*/][j /*98*/] };
		uParam0->f_25[1 /*295*/][j /*98*/] = { Global_114135.f_2367.f_539.f_2407[1 /*295*/][j /*98*/] };
	
		for (i = 0; i <= 3; i = i + 1)
		{
			uParam0->f_2838[j /*15*/][i] = Global_114135.f_2367.f_493[j /*15*/][i];
			uParam0->f_2838[j /*15*/].f_5[i] = Global_114135.f_2367.f_493[j /*15*/].f_5[i];
			uParam0->f_2838[j /*15*/].f_10[i] = Global_114135.f_2367.f_493[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			uParam0->f_2345[j /*164*/][i] = Global_114135.f_2367[j /*164*/][i];
			uParam0->f_2345[j /*164*/].f_4[i] = Global_114135.f_2367[j /*164*/].f_4[i];
			uParam0->f_2345[j /*164*/].f_8[i] = Global_114135.f_2367[j /*164*/].f_8[i];
			uParam0->f_2345[j /*164*/].f_12[i] = Global_114135.f_2367[j /*164*/].f_12[i];
			uParam0->f_2345[j /*164*/].f_16[i] = Global_114135.f_2367[j /*164*/].f_16[i];
			uParam0->f_2345[j /*164*/].f_20[i] = Global_114135.f_2367[j /*164*/].f_20[i];
			uParam0->f_2345[j /*164*/].f_24[i] = Global_114135.f_2367[j /*164*/].f_24[i];
			uParam0->f_2345[j /*164*/].f_28[i] = Global_114135.f_2367[j /*164*/].f_28[i];
			uParam0->f_2345[j /*164*/].f_32[i] = Global_114135.f_2367[j /*164*/].f_32[i];
			uParam0->f_2345[j /*164*/].f_36[i] = Global_114135.f_2367[j /*164*/].f_36[i];
			uParam0->f_2345[j /*164*/].f_40[i] = Global_114135.f_2367[j /*164*/].f_40[i];
			uParam0->f_2345[j /*164*/].f_44[i] = Global_114135.f_2367[j /*164*/].f_44[i];
			uParam0->f_2345[j /*164*/].f_48[i] = Global_114135.f_2367[j /*164*/].f_48[i];
			uParam0->f_2345[j /*164*/].f_52[i] = Global_114135.f_2367[j /*164*/].f_52[i];
			uParam0->f_2345[j /*164*/].f_56[i] = Global_114135.f_2367[j /*164*/].f_56[i];
			uParam0->f_2345[j /*164*/].f_60[i] = Global_114135.f_2367[j /*164*/].f_60[i];
			uParam0->f_2345[j /*164*/].f_64[i] = Global_114135.f_2367[j /*164*/].f_64[i];
			uParam0->f_2345[j /*164*/].f_68[i] = Global_114135.f_2367[j /*164*/].f_68[i];
			uParam0->f_2345[j /*164*/].f_72[i] = Global_114135.f_2367[j /*164*/].f_72[i];
			uParam0->f_2345[j /*164*/].f_76[i] = Global_114135.f_2367[j /*164*/].f_76[i];
			uParam0->f_2345[j /*164*/].f_80[i] = Global_114135.f_2367[j /*164*/].f_80[i];
			uParam0->f_2345[j /*164*/].f_84[i] = Global_114135.f_2367[j /*164*/].f_84[i];
			uParam0->f_2345[j /*164*/].f_88[i] = Global_114135.f_2367[j /*164*/].f_88[i];
			uParam0->f_2345[j /*164*/].f_92[i] = Global_114135.f_2367[j /*164*/].f_92[i];
			uParam0->f_2345[j /*164*/].f_96[i] = Global_114135.f_2367[j /*164*/].f_96[i];
			uParam0->f_2345[j /*164*/].f_100[i] = Global_114135.f_2367[j /*164*/].f_100[i];
			uParam0->f_2345[j /*164*/].f_104[i] = Global_114135.f_2367[j /*164*/].f_104[i];
			uParam0->f_2345[j /*164*/].f_108[i] = Global_114135.f_2367[j /*164*/].f_108[i];
			uParam0->f_2345[j /*164*/].f_112[i] = Global_114135.f_2367[j /*164*/].f_112[i];
			uParam0->f_2345[j /*164*/].f_116[i] = Global_114135.f_2367[j /*164*/].f_116[i];
			uParam0->f_2345[j /*164*/].f_120[i] = Global_114135.f_2367[j /*164*/].f_120[i];
			uParam0->f_2345[j /*164*/].f_124[i] = Global_114135.f_2367[j /*164*/].f_124[i];
			uParam0->f_2345[j /*164*/].f_128[i] = Global_114135.f_2367[j /*164*/].f_128[i];
			uParam0->f_2345[j /*164*/].f_132[i] = Global_114135.f_2367[j /*164*/].f_132[i];
			uParam0->f_2345[j /*164*/].f_136[i] = Global_114135.f_2367[j /*164*/].f_136[i];
			uParam0->f_2345[j /*164*/].f_140[i] = Global_114135.f_2367[j /*164*/].f_140[i];
			uParam0->f_2345[j /*164*/].f_144[i] = Global_114135.f_2367[j /*164*/].f_144[i];
			uParam0->f_2345[j /*164*/].f_148[i] = Global_114135.f_2367[j /*164*/].f_148[i];
			uParam0->f_2345[j /*164*/].f_152[i] = Global_114135.f_2367[j /*164*/].f_152[i];
			uParam0->f_2345[j /*164*/].f_156[i] = Global_114135.f_2367[j /*164*/].f_156[i];
			uParam0->f_2345[j /*164*/].f_160[i] = Global_114135.f_2367[j /*164*/].f_160[i];
		}
	}

	STATS::STAT_GET_INT(-589476696, &uParam0->f_2341[0], -1);
	STATS::STAT_GET_INT(353703542, &uParam0->f_2341[1], -1);
	STATS::STAT_GET_INT(126871459, &uParam0->f_2341[2], -1);
	uParam0->f_5 = 145;

	if (iParam4 == 1)
		func_27(&(uParam0->f_2890), uParam0, pedParam5, 1, 1, 0);

	func_26(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
	return;
}

int func_26(var uParam0) // Position - 0x27D3
{
	*uParam0 = Global_97512;
	uParam0->f_1 = Global_97513;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, Ped pedParam2, int iParam3, int iParam4, int iParam5) // Position - 0x27F5
{
	Vehicle vehicle;

	if (pedParam2 == 0)
		pedParam2 = PLAYER::PLAYER_PED_ID();

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
		uParam1->f_5 = _GET_PLAYER_CHARACTER_FROM_PED(pedParam2);

	if (func_42(pedParam2, &vehicle, iParam3, iParam5))
		func_28(uParam0, uParam1, vehicle, iParam4);
	else if (ENTITY::DOES_ENTITY_EXIST(vehicle))
		if (!ENTITY::IS_ENTITY_DEAD(vehicle, false))
			if (VEHICLE::IS_VEHICLE_MODEL(vehicle, 1044954915) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicle, false))
				func_28(uParam0, uParam1, vehicle, iParam4);

	return;
}

int func_28(var uParam0, var uParam1, Vehicle veParam2, int iParam3) // Position - 0x287D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam2, false))
	{
		func_30(uParam0, veParam2, iParam3);
		uParam1->f_4 = veParam2;
	
		if (func_29(veParam2))
			uParam1->f_3 = 1;
		else
			uParam1->f_3 = 0;
	
		return 1;
	}

	return 0;
}

BOOL func_29(Vehicle veParam0) // Position - 0x28BD
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_101688.f_22[i] == veParam0)
			return true;
	}

	return false;
}

void func_30(var uParam0, Vehicle veParam1, int iParam2) // Position - 0x28EB
{
	func_37(veParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(veParam1, _CHAR_NULL, 0);
	uParam0->f_11 = func_32(veParam1);

	if (!uParam0->f_7)
		if (!uParam0->f_10)
			uParam0->f_10 = func_31(veParam1);

	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(veParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(veParam1) };
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(veParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
	
		if (Global_79234 == veParam1)
			uParam0->f_9 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		uParam0->f_8 = 1;
	else
		uParam0->f_8 = 0;

	return;
}

int func_31(Vehicle veParam0) // Position - 0x29C7
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[i]))
			if (veParam0 == Global_78329.f_484[i])
				return 1;
	}

	return 0;
}

eCharacter func_32(Vehicle veParam0) // Position - 0x2A09
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98994[i]))
			if (Global_98994[i] == veParam0)
				return Global_99004[i];
	}

	return _CHAR_NULL;
}

int func_33(Vehicle veParam0, eCharacter echParam1, int iParam2) // Position - 0x2A6C
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98994[i]))
			if (Global_98994[i] == veParam0)
				if (echParam1 == _CHAR_NULL || echParam1 == Global_99004[i])
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(veParam0) == func_34(echParam1, iParam2))
						return 1;
	}

	return 0;
}

Hash func_34(eCharacter echParam0, int iParam1) // Position - 0x2AFA
{
	Hash num;

	if (func_36(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_35(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_35(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x2B3C
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
			num = -1008861746;
		
			if (Global_114135.f_9089.f_99.f_58[128] && !Global_114135.f_9089.f_99.f_58[131])
				num = -1883869285;
		
			switch (num)
			{
				case -1008861746:
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case -1883869285:
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
			num = -1435919434;
		
			switch (num)
			{
				case -1435919434:
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114135.f_9089.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = 736902334;
			else if (iParam2 == 2)
				num = -2140431165;
			else if (Global_114135.f_9089.f_99.f_58[118])
				num = -2140431165;
			else
				num = 736902334;
		
			switch (num)
			{
				case -2140431165:
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case 736902334:
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

BOOL func_36(eCharacter echParam0) // Position - 0x2D98
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_37(Vehicle veParam0, var uParam1) // Position - 0x2DA4
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_41(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_39(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_38(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_38(int iParam0) // Position - 0x304F
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_39(var uParam0, var uParam1, var uParam2) // Position - 0x30FF
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_40(int iParam0) // Position - 0x32F2
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return true;
	
		default:
		
	}

	return false;
}

void func_41(var uParam0) // Position - 0x3312
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_42(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0x33C3
{
	const char* thisScriptName;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			else
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -956048545))
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != pedParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
								return false;
					
						if (func_43(*uParam1, _GET_CURRENT_PLAYER_CHARACTER_0(), true))
						{
							thisScriptName = SCRIPT::GET_THIS_SCRIPT_NAME();
						
							if (!MISC::ARE_STRINGS_EQUAL(thisScriptName, "save_anywhere"))
								return false;
							else if (!PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
								return false;
						}
					
						if (iParam3 == 1)
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
									return false;
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -150975354))
							return false;
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_43(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x34F2
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_44(echParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114135.f_7233[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_44(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x3560
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x3639
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x3676
{
	if (func_36(character))
		return func_47(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_47(eCharacter echParam0) // Position - 0x369B
{
	return Global_2201[echParam0 /*29*/];
}

void func_48(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0x36AA
{
	eCharacter character;
	ePedComponentType i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
	
		for (i = PV_COMP_HEAD; i < PV_COMP_MAX; i = i + 1)
		{
			func_56(pedParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = PV_COMP_HEAD; i < PV_COMP_TASK; i = i + 1)
		{
			func_55(pedParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_36(character))
		{
			uParam1->f_59 = Global_114135.f_2367.f_539[character /*65*/].f_59;
			uParam1->f_60 = Global_114135.f_2367.f_539[character /*65*/].f_60;
			uParam1->f_61 = Global_114135.f_2367.f_539[character /*65*/].f_61;
			uParam1->f_62 = Global_114135.f_2367.f_539[character /*65*/].f_62;
			uParam1->f_63 = Global_114135.f_2367.f_539[character /*65*/].f_63;
			uParam1->f_64 = Global_114135.f_2367.f_539[character /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(pedParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_53(161, iParam3))
				uParam1->f_59 = func_49(2053, iParam3);
			else
				uParam1->f_59 = func_49(753, iParam3);
		
			uParam1->f_60 = func_49(754, iParam3);
			uParam1->f_61 = func_49(755, iParam3);
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && pedParam0 == PLAYER::PLAYER_PED_ID())
			if (func_53(161, iParam3))
				uParam1->f_59 = func_49(2053, iParam3);
			else
				uParam1->f_59 = func_49(753, iParam3);
	}

	return;
}

int func_49(int iParam0, int iParam1) // Position - 0x3844
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_50(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_50(int iParam0, int iParam1) // Position - 0x3873
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_51(iParam1));
}

int func_51(int iParam0) // Position - 0x3888
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_52();
	
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

int func_52() // Position - 0x38BC
{
	return Global_1574926;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x38C8
{
	Hash statHash;
	BOOL outValue;

	statHash = func_54(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_54(int iParam0, int iParam1) // Position - 0x38EC
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_51(iParam1));
}

void func_55(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, int iParam4, eCharacter echParam5) // Position - 0x3901
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	}
	else
	{
		character = echParam5;
	}

	if (iParam4 == 0)
		return;

	if (epctParam1 == PV_COMP_HEAD)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (pedParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(pedParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(pedParam0);
				}
			}
		}
	}

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (epctParam1 == PV_COMP_BERD)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}

	return;
}

void func_56(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, eCharacter echParam6) // Position - 0x3E4A
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, epctParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(pedParam0, epctParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(pedParam0, epctParam1);
	}
	else
	{
		character = echParam6;
	}

	if (iParam5 == 0)
		return;

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x408D
{
	func_58();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_58() // Position - 0x40A6
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_36(character) && !func_59(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_36(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_59(int iParam0) // Position - 0x41A3
{
	return Global_44181 == iParam0;
}

void func_60(Ped pedParam0, BOOL bParam1) // Position - 0x41B1
{
	eCharacter character;
	Hash weaponWheelCurrentlyHighlighted;
	int i;
	int tintIndex;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_36(character) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_61(pedParam0, &Global_114135.f_2367.f_539.f_298[character /*477*/]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				Global_114135.f_2367.f_539.f_1730[i /*4*/][character] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(i);
			
				if (bParam1)
				{
					weaponWheelCurrentlyHighlighted = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
				
					if (Global_114135.f_2367.f_539.f_1730[i /*4*/][character] == weaponWheelCurrentlyHighlighted)
						Global_114135.f_2367.f_539.f_1763 = i;
				}
			}
		
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &tintIndex);
		
			if (character == CHAR_MICHAEL)
				STATS::STAT_SET_INT(-922941372, tintIndex, true);
			else if (character == CHAR_FRANKLIN)
				STATS::STAT_SET_INT(-753526687, tintIndex, true);
			else if (character == CHAR_TREVOR)
				STATS::STAT_SET_INT(-502936933, tintIndex, true);
		}
	}

	return;
}

void func_61(Ped pedParam0, var uParam1) // Position - 0x42A4
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
			hash = func_66(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_66(i));
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
				
					for (k = func_64(pedWeapontypeInSlot, j); k != 0; k = func_64(pedWeapontypeInSlot, j))
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
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_63(outData.f_1) && num < 51)
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
							if (!func_62(ComponentDataPtr.f_3))
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

BOOL func_62(int iParam0) // Position - 0x452C
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

BOOL func_63(int iParam0) // Position - 0x45CD
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
			case -1916886713:
				return true;
		}
	}

	return false;
}

Hash func_64(Hash hParam0, int iParam1) // Position - 0x47C5
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
	
		case -1916886713:
			switch (iParam1)
			{
				case 0:
					num = -584965981;
					break;
			
				case 1:
					num = 291145905;
					break;
			
				case 2:
					num = 1978284360;
					break;
			}
			break;
	
		default:
			if (hParam0 != 0)
			{
				dlcWeaponIndex = func_65(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_62(ComponentDataPtr.f_3))
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

int func_65(Hash hParam0, Any* panParam1) // Position - 0x5546
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

Hash func_66(int iParam0) // Position - 0x5581
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

void func_67(Ped pedParam0) // Position - 0x57F5
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_36(character) && !PED::IS_PED_INJURED(pedParam0))
		Global_114135.f_2367.f_539.f_294[character] = PED::GET_PED_ARMOUR(pedParam0);

	return;
}

void func_68(var uParam0, int iParam1) // Position - 0x5831
{
	var unk;
	var unk2;
	var unk5;
	eCharacter character;

	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(912405861) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_79788, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_79788, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_79788, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_79788, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}

	if (iParam1 == 1)
	{
		if (func_72(&unk))
		{
			if (func_70(unk, &unk2, &unk5))
			{
				unk2.f_2 = unk2.f_2 + 1f;
				*uParam0 = { unk2 };
				uParam0->f_3 = unk5;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			character = _GET_CURRENT_PLAYER_CHARACTER_0();
		
			if (character == CHAR_MICHAEL)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (character == CHAR_FRANKLIN)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (character == CHAR_TREVOR)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}

	return;
}

BOOL func_69(Vector3 vParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Position - 0x5D80
{
	Interior interiorAtCoordsWithType;
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(fParam4, sParam3);
	
		if (!INTERIOR::IS_VALID_INTERIOR(interiorAtCoordsWithType))
			return false;
	
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (interiorFromCollision == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_70(int iParam0, var uParam1, var uParam2) // Position - 0x5DC4
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;

	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
	
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
	
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
	
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
	
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
	
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
	
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
	
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
	
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
	
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
	
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
	
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
	
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
	
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
	
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
	
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
	
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
	
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
	
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
	
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
	
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
	
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
	
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
	
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
	
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
	
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
	
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
	
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
	
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
	
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
	
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
	
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
	
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
	
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
	
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
	
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
	
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
	
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
	
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
	
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
	
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
	
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
	
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
	
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}

	return !func_71(*uParam1, 0f, 0f, 0f, false);
}

BOOL func_71(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x6543
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_72(var uParam0) // Position - 0x658A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_101())
		{
			*uParam0 = func_78(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, false, true, -1);
		
			if (func_77(*uParam0) && !func_73(*uParam0))
				return true;
		}
	}

	return false;
}

BOOL func_73(int iParam0) // Position - 0x65E5
{
	return func_74(iParam0, 0, true);
}

BOOL func_74(int iParam0, int iParam1, BOOL bParam2) // Position - 0x65F5
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101740.f_1421[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_76() == 0)
			return IS_BIT_SET(func_49(func_75(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114135.f_668[iParam0], iParam1);

	return false;
}

int func_75(int iParam0) // Position - 0x6655
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 13519;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		case 61:
			return 12447;
	
		default:
			break;
	}

	return 15468;
}

int func_76() // Position - 0x6A0C
{
	return Global_33087;
}

BOOL func_77(int iParam0) // Position - 0x6A17
{
	return func_74(iParam0, 5, true);
}

int func_78(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x6A27
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = -1;

	for (i = 0; i <= 61; i = i + 1)
	{
		if (iParam3 == 6 || iParam3 == func_100(i))
		{
			if (!bParam5 || func_99(i))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_79(i, false), true);
			
				if (distanceBetweenCoords < num && distanceBetweenCoords <= (float)iParam4 || iParam4 == -1 && bParam6 || i != 21 && i != iParam7)
				{
					num = distanceBetweenCoords;
					num2 = i;
				}
			}
		}
	}

	return num2;
}

Vector3 func_79(int iParam0, BOOL bParam1) // Position - 0x6AC9
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
	
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
	
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
	
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
	
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
	
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
	
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
	
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
	
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
	
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
	
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
	
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
	
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
	
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
	
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
	
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
	
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
	
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
	
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
	
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
	
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
	
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
	
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
	
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
	
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
	
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
	
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
	
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
	
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
	
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
	
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
	
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
	
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
	
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
	
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
	
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
	
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
	
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
	
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
	
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
	
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
	
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
	
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
	
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
	
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
	
		case 44:
			if (bParam1)
				return -211.5f, -1324.2f, 30.296f;
			else
				return -205.6654f, -1311.1127f, 30.296f;
			break;
	
		case 45:
			return func_96(Global_103852);
	
		case 46:
			if (Global_1845051 != _INVALID_PLAYER_INDEX())
				if (func_94(Global_1845051))
					return func_87(2, 2);
				else if (func_86(Global_1845051))
					return func_87(45, 3);
				else
					return 1000000f, 1000000f, 1000000f;
			else
				return 1000000f, 1000000f, 1000000f;
			break;
	
		case 47:
			return func_84(-9.9f, -0.5f, 1f);
	
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
	
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
	
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
	
		case 50:
			return Global_1965191;
	
		case 51:
			return 1100f, 220f, -50f;
	
		case 53:
			return 1560f, 400f, -50f;
	
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
	
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
	
		case 56:
			switch (func_83())
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
			
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
			
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
			
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
			}
		
			return 1000000f, 1000000f, 1000000f;
	
		case 57:
			return -1010f, -70f, -100f;
	
		case 58:
			return func_80();
	
		case 59:
			return 560f, -405f, -69.6591f;
	
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
	
		case 61:
			return 756.7726f, -993.5798f, -47.3777f;
	}

	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_80() // Position - 0x7243
{
	if (!_IS_NULL_VECTOR(Global_1950373))
		return Global_1950373;

	switch (func_81())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
	
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
	
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
	
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
	
		case 4:
			return 795.583f, 1210.78f, 338.962f;
	
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
	
		case 6:
			return -789.719f, 5400.921f, 33.915f;
	
		case 7:
			return -24.384f, 3048.167f, 40.703f;
	
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
	
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
	
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
	
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
	
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
	
		case 13:
			return -57.208f, -2658.793f, 5.737f;
	
		case 14:
			return 1905.017f, 565.222f, 175.558f;
	
		case 15:
			return 974.484f, -1718.798f, 30.296f;
	
		case 16:
			return 779.077f, -3266.297f, 5.719f;
	
		case 17:
			return -587.728f, -1637.208f, 19.611f;
	
		case 18:
			return 733.99f, -736.803f, 26.165f;
	
		case 19:
			return -1694.632f, -454.082f, 40.712f;
	
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
	
		case 21:
			return -496.618f, 40.231f, 52.316f;
	
		case 22:
			return 275.527f, 66.509f, 94.108f;
	
		case 23:
			return 260.928f, -763.35f, 30.559f;
	
		case 24:
			return -478.025f, -741.45f, 30.299f;
	
		case 25:
			return 894.94f, 3603.911f, 32.56f;
	
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
	
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
	
		case 28:
			return 1101.032f, -335.172f, 66.944f;
	
		case 29:
			return 149.683f, -1655.674f, 29.028f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_81() // Position - 0x753E
{
	return Global_2652568.f_2706;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x754D
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_83() // Position - 0x7577
{
	return Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_8;
}

Vector3 func_84(float fParam0, float fParam1, float fParam2) // Position - 0x758F
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_85(), 0f, fParam0);
}

Vector3 func_85() // Position - 0x75A4
{
	return -880f, -2770f, -50f;
}

BOOL func_86(Player plParam0) // Position - 0x75BB
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_294, 0) || IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_294, 1) || IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_294, 2))
			return true;

	return false;
}

Vector3 func_87(int iParam0, int iParam1) // Position - 0x7613
{
	var unk;
	var unk7;

	unk7 = { 1000000f, 1000000f, 1000000f };

	if (Global_1845051 != _INVALID_PLAYER_INDEX())
		if (iParam1 == 3)
			if (func_88(iParam0, 1, &unk, 0, false))
				unk7 = { unk };
		else if (iParam1 == 2)
			if (IS_BIT_SET(Global_1845221[Global_1845051 /*889*/].f_268.f_294, 4))
				if (func_88(iParam0, 1, &unk, 0, false))
					unk7 = { unk };
			else if (IS_BIT_SET(Global_1845221[Global_1845051 /*889*/].f_268.f_294, 5))
				if (func_88(iParam0, 2, &unk, 0, false))
					unk7 = { unk };

	return unk7;
}

BOOL func_88(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x76BD
{
	var unk;
	Vector3 vector;
	var unk12;
	Vector3 vector2;

	if (!func_93(iParam3, &unk))
		return false;

	if (!func_93(iParam1, &vector))
		return false;

	if (!bParam4)
		unk12 = { func_91(iParam0) };
	else
		unk12 = { func_90(iParam0) };

	vector2 = { unk12 - unk };
	vector2 = { func_89(vector2, -unk.f_3.f_2) };
	vector2 = { func_89(vector2, vector.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, 0f, vector2) };
	uParam2->f_3 = { unk12.f_3 };
	return true;
}

Vector3 func_89(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x7752
{
	float num;
	float num2;
	float num3;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_90(int iParam0) // Position - 0x7796
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 1:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 2:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 3:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 4:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 5:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 6:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 7:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 8:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	}

	return unk;
}

struct<6> func_91(int iParam0) // Position - 0x791A
{
	return func_92(iParam0);
}

struct<6> func_92(int iParam0) // Position - 0x7928
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1105.22f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 1:
			unk = { 1104.105f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 19:
			unk = { 1105.22f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 20:
			unk = { 1104.105f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 2:
			unk = { 1102f, -3011.925f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { 1103f, -3010f, -38.125f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { 1103.213f, -3013.483f, -39.03f };
			unk.f_3 = { 0f, 0f, 31.32f };
			break;
	
		case 5:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
	
		case 6:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
	
		case 7:
			unk = { 1105.645f, -3012.04f, -39.542f };
			unk.f_3 = { 0f, 0f, -86.04f };
			break;
	
		case 8:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
	
		case 9:
			unk = { 1105.6648f, -3012.3345f, -38.50835f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 10:
			unk = { 1102.504f, -3012.35f, -39.341f };
			unk.f_3 = { 0f, 0f, -96.48f };
			break;
	
		case 11:
			unk = { 1102.9282f, -3012.6934f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 12:
			unk = { 1102.9421f, -3011.315f, -37.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 61:
			unk = { 1101.9943f, -3012.8777f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 62:
			unk = { 1103.1519f, -3013.0325f, -38.24946f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 13:
			unk = { 1102.465f, -3009.515f, -39.341f };
			unk.f_3 = { 0f, 0f, -12.96f };
			break;
	
		case 14:
			unk = { 1102.9167f, -3009.525f, -39.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 15:
			unk = { 1102.9218f, -3010.8872f, -37.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 63:
			unk = { 1101.6818f, -3009.227f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { 1102.4534f, -3008.5105f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 16:
			unk = { 1104.684f, -3009.561f, -39.341f };
			unk.f_3 = { 0f, 0f, 169.56f };
			break;
	
		case 17:
			unk = { 1104.3401f, -3008.6982f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 18:
			unk = { 1104.3442f, -3009.618f, -37.981716f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 65:
			unk = { 1105.4595f, -3009.7935f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 66:
			unk = { 1104.7828f, -3010.433f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 44:
			unk = { 1104.0251f, -3007.3157f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 21:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 22:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 23:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 24:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 25:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 26:
			unk = { 1102.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 27:
			unk = { 1102.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 28:
			unk = { 1105.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 29:
			unk = { 1105.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 30:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 31:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 32:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 33:
			unk = { 1102.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 34:
			unk = { 1102.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 35:
			unk = { 1105.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 36:
			unk = { 1105.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 37:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 38:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 39:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	
		case 40:
			unk = { 1102.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 41:
			unk = { 1102.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 42:
			unk = { 1105.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 43:
			unk = { 1105.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 45:
			unk = { 1101f, -3011.9f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 46:
			unk = { 1102f, -3010f, -38.115f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 47:
			unk = { 1105.174f, -3004.1602f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 48:
			unk = { 1105.1749f, -3005.818f, -37.919476f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 49:
			unk = { 1106.5996f, -3000.8472f, -39.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 50:
			unk = { 1106.6013f, -3002.171f, -37.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 51:
			unk = { 1101.95f, -3011.9f, -39.2f };
			unk.f_3 = { 0f, 0f, 49.5f };
			break;
	
		case 52:
			unk = { 1101.95f, -3010f, -39.2f };
			unk.f_3 = { 0f, 0f, 130.32f };
			break;
	
		case 53:
			unk = { 1105.16f, -3009.06f, -39.2f };
			unk.f_3 = { 0f, 0f, -44.64f };
			break;
	
		case 54:
			unk = { 1102.4756f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 55:
			unk = { 1099f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 56:
			unk = { 1103.5928f, -3008.2698f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 57:
			unk = { 1103.565f, -3014f, -39.988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 58:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 59:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 60:
			unk = { 1103.55f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 67:
			unk = { 1103.55f, -3013.762f, -40f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 68:
			unk = { 1103.55f, -3006.186f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			unk = { 1103.6f, -3013.933f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	}

	return unk;
}

BOOL func_93(int iParam0, var uParam1) // Position - 0x83F3
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_94(Player plParam0) // Position - 0x8475
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_294, 3) || IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_294, 4) || IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_294, 5))
			return true;

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x84CD
{
	return -1;
}

Vector3 func_96(int iParam0) // Position - 0x84D6
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
	
		case 2:
			return 1060f, -2990f, -35f;
	
		case 3:
			return 974.9542f, -3000.0908f, -35f;
	
		case 6:
			return -1586.36f, -566.6f, 106.17f;
	
		case 7:
			return -1389.87f, -465.17f, 82.68f;
	
		case 8:
			return -145.81f, -590.2f, 171.13f;
	
		case 9:
			return -62.49f, -823.55f, 288.74f;
	
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
	
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
	
		case 10:
			return 1103.5624f, -3000f, -40f;
	
		case 11:
			return 938.3077f, -3196.1116f, -100f;
	
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
	
		case 13:
			return func_85();
	
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
	
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
	
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
	
		case 23:
			return 745.7956f, -993.11926f, -47.376743f;
	
		case 17:
			if (func_97() == 0)
				return 205f, 5180f, -90f;
			else
				return 170f, 5190f, 10f;
			break;
	
		case 18:
			return -2000f, 1250f, 50f;
	
		case 19:
			return -1350f, 160f, -100f;
	
		case 20:
			return -1070f, -70f, -100f;
	
		case 21:
			return 570f, -415f, -70f;
	
		default:
			return 0f, 0f, -200f;
	}

	return 0f, 0f, -200f;
}

int func_97() // Position - 0x875D
{
	return func_98(PLAYER::PLAYER_ID());
}

int func_98(Player plParam0) // Position - 0x876D
{
	return MISC::GET_BITS_IN_RANGE(Global_2657991[plParam0 /*467*/].f_324.f_3, 28, 31);
}

BOOL func_99(int iParam0) // Position - 0x878A
{
	return func_74(iParam0, 0, false);
}

int func_100(int iParam0) // Position - 0x879A
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	}

	return 6;
}

BOOL func_101() // Position - 0x8ADD
{
	return Global_101740.f_399 > 0;
}

var func_102() // Position - 0x8AEE
{
	var unk;

	func_112(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_111(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_110(&unk, CLOCK::GET_CLOCK_HOURS());
	func_105(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_104(&unk, CLOCK::GET_CLOCK_MONTH());
	func_103(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_103(var uParam0, int iParam1) // Position - 0x8B34
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_104(var uParam0, int iParam1) // Position - 0x8BBA
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_105(var uParam0, int iParam1) // Position - 0x8BED
{
	int num;
	int num2;

	num = func_109(*uParam0);
	num2 = func_107(*uParam0);

	if (iParam1 < 1 || iParam1 > func_106(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_106(int iParam0, int iParam1) // Position - 0x8C3E
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

int func_107(int iParam0) // Position - 0x8CE0
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_108(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8D02
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_109(int iParam0) // Position - 0x8D19
{
	return iParam0 & 15;
}

void func_110(var uParam0, int iParam1) // Position - 0x8D26
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_111(var uParam0, int iParam1) // Position - 0x8D60
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_112(var uParam0, int iParam1) // Position - 0x8D9B
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x8DD7
{
	func_58();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_114(int iParam0) // Position - 0x8DF0
{
	int num;
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		num = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &num, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM() || MISC::IS_PC_VERSION())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPRC_", 24);
		TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &textLabel);
	}

	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x8E53
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x8E69
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_117(char* sParam0, Any anParam1, int iParam2) // Position - 0x8E7F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98733))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98733, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_98733, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98733, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, anParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x8EC1
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

struct<2> func_119(int iParam0) // Position - 0x8EE9
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

void func_120(int iParam0, var uParam1) // Position - 0x9336
{
	switch (iParam0)
	{
		case 0:
			func_121(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 1:
			func_121(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 2:
			func_121(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 3:
			func_121(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 4:
			func_121(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 5:
			func_121(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 6:
			func_121(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 7:
			func_121(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
			break;
	
		case 8:
			func_121(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 9:
			func_121(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 10:
			func_121(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 11:
			func_121(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 12:
			func_121(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 13:
			func_121(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 14:
			func_121(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 15:
			func_121(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 16:
			func_121(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 17:
			func_121(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 18:
			func_121(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 19:
			func_121(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 20:
			func_121(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 21:
			func_121(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
			break;
	
		case 22:
			func_121(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
			break;
	
		case 23:
			func_121(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
			break;
	
		case 24:
			func_121(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
			break;
	
		case 25:
			func_121(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 26:
			func_121(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 27:
			func_121(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 28:
			func_121(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 29:
			func_121(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 30:
			func_121(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 31:
			func_121(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 32:
			func_121(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 33:
			func_121(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 34:
			func_121(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 35:
			func_121(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 36:
			func_121(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 37:
			func_121(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 38:
			func_121(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 39:
			func_121(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
	
		case 40:
			func_121(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
	
		case 41:
			func_121(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
	
		case 42:
			func_121(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 43:
			func_121(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 44:
			func_121(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 45:
			func_121(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 46:
			func_121(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 47:
			func_121(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 48:
			func_121(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 49:
			func_121(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 50:
			func_121(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 51:
			func_121(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 52:
			func_121(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 54:
			func_121(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 55:
			func_121(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 56:
			func_121(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 53:
			func_121(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 57:
			func_121(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 58:
			func_121(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 59:
			func_121(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 60:
			func_121(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 61:
			func_121(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 62:
			func_121(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_121(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xA57D
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

int func_122(int iParam0) // Position - 0xA60E
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

BOOL func_123(Any* panParam0) // Position - 0xA954
{
	int threadId;

	if (func_154(&(panParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(panParam0->f_9)))
		{
			func_143(true);
			func_141(panParam0, true, func_142(*panParam0));
		}
	
		if (panParam0->f_27)
		{
			if (func_140(*panParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_158();
					SYSTEM::WAIT(0);
				}
			}
		}
	
		func_124(*panParam0);
		threadId = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(panParam0->f_1), panParam0, 61, 63500);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(panParam0->f_1));
	
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_282("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(threadId);
		}
		else
		{
			func_282("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
	
		return true;
	}

	return false;
}

void func_124(int iParam0) // Position - 0xA9F9
{
	var name;

	func_139();

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
	}

	if (func_138(iParam0))
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);

	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	HUD::CLEAR_ADDITIONAL_TEXT(2, true);

	if (Global_45392 == true)
		if (func_136(PLAYER::PLAYER_PED_ID()))
			func_127(PLAYER::PLAYER_PED_ID());

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		if (iParam0 < 63)
		{
			func_125(iParam0);
			name = { func_9(iParam0) };
			HUD::SET_MISSION_NAME(true, &name);
		}
	}

	return;
}

void func_125(int iParam0) // Position - 0xAA94
{
	if (iParam0 < 63)
	{
		func_126();
		Global_79795 = iParam0;
		Global_79794 = 0;
		Global_79797 = 7;
	}

	return;
}

void func_126() // Position - 0xAABA
{
	Global_79794 != 6;

	if (Global_79799)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_79799 = false;
		Global_23970.f_9116 = 0;
	}

	Global_79794 = 6;
	Global_79796 = -1;
	Global_79795 = -1;
	return;
}

void func_127(Ped pedParam0) // Position - 0xAAF2
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_135(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45178[num /*5*/];
		func_130(1, num2, 1);
		return;
	}

	num3 = func_129(pedParam0);

	if (num3 == -1)
		return;

	func_128(num3);
	return;
}

void func_128(int iParam0) // Position - 0xAB4B
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45147[iParam0 /*6*/].f_1 == 0))
		if (Global_45147[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_45390 = 0;

	Global_45147[iParam0 /*6*/] = 13;
	Global_45147[iParam0 /*6*/].f_1 = 0;
	Global_45147[iParam0 /*6*/].f_2 = 0;
	Global_45147[iParam0 /*6*/].f_3 = 0;
	Global_45147[iParam0 /*6*/].f_4 = 0;
	Global_45145 = Global_45145 - 1;

	if (Global_45145 < 0)
		Global_45145 = 0;

	return;
}

int func_129(Ped pedParam0) // Position - 0xABCE
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45147[i /*6*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2) // Position - 0xABFF
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xAC14
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_133(iParam0, iParam1, iParam2))
		return;

	num = func_132();

	if (num == -1)
		return;

	Global_45259[num /*6*/] = iParam0;
	Global_45259[num /*6*/].f_1 = iParam1;
	Global_45259[num /*6*/].f_2 = iParam2;
	Global_45259[num /*6*/].f_3 = iParam3;
	Global_45259[num /*6*/].f_4 = iParam4;
	Global_45259[num /*6*/].f_5 = iParam5;
	return;
}

int func_132() // Position - 0xAC96
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45259[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_133(int iParam0, int iParam1, int iParam2) // Position - 0xACC7
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_134(int iParam0, int iParam1, int iParam2) // Position - 0xACE2
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45259[i /*6*/].f_2)
			if (iParam0 == Global_45259[i /*6*/])
				if (iParam1 == Global_45259[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_135(Ped pedParam0) // Position - 0xAD2E
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45178[i /*5*/] == -1))
			if (pedParam0 == Global_45178[i /*5*/].f_1)
				return i;
	}

	return -1;
}

BOOL func_136(Ped pedParam0) // Position - 0xAD77
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0xAD97
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_138(int iParam0) // Position - 0xADB8
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return false;
	}

	return true;
}

void func_139() // Position - 0xAE0B
{
	if (Global_9741[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9741[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9741[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9741[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9741[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9741[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8919, 25);
	MISC::SET_BIT(&Global_8920, 11);
	return;
}

BOOL func_140(int iParam0) // Position - 0xAE88
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return false;
	}

	return true;
}

void func_141(Any* panParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAEDB
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_28[i]))
			ENTITY::SET_ENTITY_PROOFS(panParam0->f_28[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	for (i = 0; i < 5; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_35[i]))
			ENTITY::SET_ENTITY_PROOFS(panParam0->f_35[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_41[i]))
			ENTITY::SET_ENTITY_PROOFS(panParam0->f_41[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1, 0);
	
		if (bParam2)
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, true);
	}

	return;
}

BOOL func_142(int iParam0) // Position - 0xAFD1
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return false;
	}

	return true;
}

void func_143(BOOL bParam0) // Position - 0xB03C
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!PLAYER::IS_PLAYER_DEAD(playerIndex))
	{
		if (bParam0)
		{
		}
	
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_EXPLOSIONS);
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_PROJECTILES);
	}

	func_144(true, true, false, false, false, false, false);
	return;
}

void func_144(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xB07B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_153(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21066.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_152())
				Global_21066.f_1 = 3;
		
			Global_22425 = 5;
		}
	
		func_151(true, bParam3, bParam2, false);
		Global_64314 = 1;
		Global_76643 = 1;
		Global_79537 = 1;
	}
	else
	{
		func_153(0);
		HUD::THEFEED_RESUME();
		Global_64314 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_151(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID()) && !func_146(PLAYER::PLAYER_ID(), 0) && !func_145() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
	
		Global_79537 = 0;
	}

	return;
}

BOOL func_145() // Position - 0xB1CA
{
	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 14);
}

BOOL func_146(Player plParam0, int iParam1) // Position - 0xB1E4
{
	BOOL flag;

	if (!func_148(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_147(-1, false) == 8;
	else
		flag = Global_1845221[plParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_147(int iParam0, BOOL bParam1) // Position - 0xB23D
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_52();

	if (Global_1575064[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

BOOL func_148(Player plParam0) // Position - 0xB27E
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_149(Player plParam0) // Position - 0xB2A0
{
	if (func_146(plParam0, 0))
		return true;

	if (func_150())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_150() // Position - 0xB2DF
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_151(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB2ED
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_152() // Position - 0xB320
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_153(int iParam0) // Position - 0xB347
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 13);
	else
		MISC::CLEAR_BIT(&Global_8919, 13);

	return;
}

BOOL func_154(const char* sParam0) // Position - 0xB36A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
	
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			SYSTEM::WAIT(0);
		}
	
		return true;
	}

	func_282("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

void func_155() // Position - 0xB3A7
{
	Global_21291 = 0;
	func_156();
	return;
}

void func_156() // Position - 0xB3B7
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9 || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}

	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0xB40E
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_158() // Position - 0xB430
{
	func_164(0);
	func_163();
	func_159();
	return;
}

void func_159() // Position - 0xB445
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (func_160(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10.5f, 1, 1056964608, false, true, false))
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);

	return;
}

BOOL func_160(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xB49D
{
	func_162(bParam5, bParam6);
	func_161(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_32 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_32 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_161(Vehicle veParam0) // Position - 0xB4F4
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_162(BOOL bParam0, BOOL bParam1) // Position - 0xB520
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam0)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	return;
}

void func_163() // Position - 0xB671
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
	return;
}

void func_164(int iParam0) // Position - 0xB6C2
{
	if (func_169())
		return;

	if (!(Global_21066.f_1 == 1))
	{
		if (func_168(0))
			func_165(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

void func_165(int iParam0) // Position - 0xB6F5
{
	if (func_169())
		return;

	if (Global_21284)
		if (func_167())
			func_166(true, true);
		else
			func_166(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_152())
		Global_21066.f_1 = 3;

	return;
}

void func_166(BOOL bParam0, BOOL bParam1) // Position - 0xB77F
{
	if (bParam0)
	{
		if (func_168(0))
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

BOOL func_167() // Position - 0xB7F3
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_168(int iParam0) // Position - 0xB801
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

BOOL func_169() // Position - 0xB858
{
	return IS_BIT_SET(Global_1957675, 19);
}

BOOL func_170(int iParam0) // Position - 0xB867
{
	if (iParam0 == 52 || iParam0 == 53 || iParam0 == 54 || iParam0 == 55 || iParam0 == 56)
		return true;

	return false;
}

BOOL func_171(int iParam0) // Position - 0xB8A8
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_178();

	if (iParam0 == -1)
		return false;

	num = func_173(&(Global_113222[iParam0 /*10*/].f_9), 1, 4, false, 0);

	if (!(num == 1))
		return false;

	func_172(iParam0);
	return true;
}

void func_172(int iParam0) // Position - 0xB8ED
{
	Global_113222[iParam0 /*10*/].f_4 = 1;
	Global_113222[iParam0 /*10*/].f_5 = 0;
	Global_113222[iParam0 /*10*/].f_6 = 0;
	Global_113222[iParam0 /*10*/] = false;
	return;
}

int func_173(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xB91F
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99141.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_177(0))
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*iParam0 = Global_44145;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23831.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44181 = iParam2;
		Global_44143 = *iParam0;
		Global_44144 = iParam4;
		Global_44142 = 0;
		return 1;
	}

	if (*iParam0 != -1)
	{
		if (Global_44142 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44142; i = i + 1)
			{
				if (Global_44148[i /*4*/] == *iParam0)
					return 2;
			}
		}
		else if (Global_44143 == *iParam0)
		{
			return 1;
		}
	
		*iParam0 = -1;
	}

	if (*iParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44142 == 8)
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*iParam0 = Global_44145;
		Global_44148[Global_44142 /*4*/] = Global_44145;
		Global_44148[Global_44142 /*4*/].f_1 = iParam1;
		Global_44148[Global_44142 /*4*/].f_2 = iParam2;
		Global_44148[Global_44142 /*4*/].f_3 = 0;
		Global_44142 = Global_44142 + 1;
	
		if (iParam4 != 0)
			func_174(iParam0, iParam4);
	}

	return 2;
}

void func_174(int iParam0, int iParam1) // Position - 0xBA56
{
	int i;

	if (Global_44142 == 0)
		return;

	if (*iParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44142; i = i + 1)
	{
		if (Global_44148[i /*4*/] == *iParam0)
			Global_44148[i /*4*/].f_3 = iParam1;
	}

	*iParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xBAA5
{
	return func_176(iParam0, Global_44181);
}

BOOL func_176(int iParam0, int iParam1) // Position - 0xBAB6
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

BOOL func_177(int iParam0) // Position - 0xBC97
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

int func_178() // Position - 0xBCB9
{
	return func_179(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_179(const char* sParam0, int iParam1) // Position - 0xBCCA
{
	int num;
	const char* str;
	Hash hashKey;
	int i;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		num = i;
		func_120(num, &str);
	
		if (MISC::GET_HASH_KEY(str) == hashKey)
			return num;
	}

	iParam1 == 0;
	return -1;
}

BOOL _IS_MISSION_REPLAY_IN_PROGRESS() // Position - 0xBD13
{
	if (Global_101688 == 10 || Global_101688 == 9)
		return true;

	return false;
}

BOOL func_181(var uParam0, int iParam1) // Position - 0xBD37
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.6306f, 4699.115f, 35.38089f, 1812.8776f, 4710.457f, 42.053535f, 23.75f, false, true, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < 3f)
						{
							if (func_187(2))
							{
								if (func_185(uParam0->f_27))
								{
									func_184(uParam0->f_27, *uParam0);
									func_282("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
				{
					if (func_183(uParam0))
					{
						if (func_187(2))
						{
							if (func_185(uParam0->f_27))
							{
								func_184(uParam0->f_27, *uParam0);
								return true;
							}
						}
					}
				}
				else
				{
					return false;
				}
			}
			else if (*uParam0 == 21)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.01923f, 40.301258f, -1883.0376f, -444.08112f, 50.24509f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.5764f, -443.64337f, 36.405807f, -1874.8258f, -448.0797f, 49.15162f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.3427f, -446.2214f, 35.64637f, -1866.9519f, -456.56006f, 49.044197f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.9973f, -438.99216f, 44.172462f, -1874.0793f, -443.34204f, 48.691788f, 0.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.8223f, -441.7655f, 44.917503f, -1877.9409f, -439.9522f, 47.289818f, 1.25f, false, true, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
					{
						if (func_183(uParam0))
						{
							if (func_187(2))
							{
								if (func_185(uParam0->f_27))
								{
									func_184(uParam0->f_27, *uParam0);
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (*uParam0 == 22)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.07306f, 1261.0862f, 366.15918f, 780.83826f, 1260.8286f, 351.405f, 17.75f, false, true, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
					{
						if (func_183(uParam0))
						{
							if (func_187(2))
							{
								if (func_185(uParam0->f_27))
								{
									func_184(uParam0->f_27, *uParam0);
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
			{
				if (func_183(uParam0))
				{
					if (func_187(2))
					{
						if (func_185(uParam0->f_27))
						{
							func_184(uParam0->f_27, *uParam0);
							return true;
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 2:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_35[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_35[0], false))
				{
					if (func_187(3))
					{
						func_184(uParam0->f_27, *uParam0);
						return true;
					}
				}
				else if (iParam1 == 1)
				{
					func_182();
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35[0], false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_35[0], true), true) < uParam0->f_15)
					{
						if (func_187(2))
						{
							if (func_185(uParam0->f_27))
							{
								func_184(uParam0->f_27, *uParam0);
								return true;
							}
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_17[0 /*3*/], true) < uParam0->f_15)
			{
				if (func_187(2))
				{
					if (func_185(uParam0->f_27))
					{
						func_184(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_187(2))
				{
					if (func_185(uParam0->f_27))
					{
						func_184(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 5:
			if (*uParam0 == 6)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1323100960) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -442313018))
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_35[0]))
								if (func_187(3))
									return true;
						else if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -50547061) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1621617168) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1394036463))
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_35[0]))
								if (func_187(3))
									return true;
			}
			else if (*uParam0 == 10)
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.88849f, 371.9034f, 103.98843f, 241.58984f, 359.64575f, 107.34612f, 1.25f, false, true, 0))
					{
						if (func_187(2))
						{
							if (func_185(uParam0->f_27))
							{
								func_184(uParam0->f_27, *uParam0);
								func_282("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return true;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.20456f, 277.48663f, 91.553215f, -153.59996f, 277.40607f, 97.338135f, 10f, false, true, 0))
					return false;
			}
			else if (*uParam0 == 31)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.9482f, 4143.44f, 42.292946f, 2722.2134f, 4144.5215f, 45.431824f, 10f, false, true, 0))
				{
					if (func_187(2))
					{
						if (func_185(true))
						{
							func_184(1, *uParam0);
							func_282("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return true;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.49945f, 358.74545f, 96.373505f, -1021.9401f, 361.88876f, 65.36148f, 30f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.11035f, 68.460175f, -1028.5663f, 395.46133f, 94.57245f, 15f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.75565f, 68.02096f, -1021.4514f, 336.34583f, 93.18714f, 14.5f, false, true, 0))
						{
							if (func_187(2))
							{
								if (func_185(uParam0->f_27))
								{
									func_184(uParam0->f_27, *uParam0);
									func_282("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return true;
								}
							}
						}
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, false, true, 0))
			{
				if (*uParam0 == 45)
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.6965f, 2597.0374f, 45.39052f, 2324.0034f, 2597.185f, 47.749607f, 8.5f, false, true, 0))
						return false;
			
				if (func_187(2))
				{
					if (func_185(uParam0->f_27))
					{
						func_184(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 6:
			break;
	}

	return false;
}

void func_182() // Position - 0xC51D
{
	func_27(&(Global_104696.f_2890), &Global_104696, 0, 1, 1, 0);
	return;
}

BOOL func_183(var uParam0) // Position - 0xC538
{
	float num;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
			num = 1f;
		else
			num = 5f;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15 + num)
			return true;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15)
	{
		return true;
	}

	return false;
}

void func_184(int iParam0, var uParam1) // Position - 0xC5C6
{
	if (iParam0 == 1)
	{
		if (!func_140(uParam1))
			return;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			func_282("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
		
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_282("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true, false);
			}
		
			func_158();
		}
	}

	return;
}

BOOL func_185(BOOL bParam0) // Position - 0xC62A
{
	Vehicle playersLastVehicle;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
		else if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			
				if (func_186(playersLastVehicle))
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(playersLastVehicle) && !ENTITY::IS_ENTITY_IN_AIR(playersLastVehicle) && ENTITY::GET_ENTITY_SPEED(playersLastVehicle) < 1f)
							return true;
					else if (!ENTITY::IS_ENTITY_IN_AIR(playersLastVehicle))
						return true;
			}
		}
	}

	return false;
}

BOOL func_186(Vehicle veParam0) // Position - 0xC6C1
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

BOOL func_187(int iParam0) // Position - 0xC6EB
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER_0();
			
				if (!func_36(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_195() || Global_113182 || Global_33090 || func_194() || func_193(8, -1) || func_101() || func_192() || func_191() || func_190() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_195() || Global_33090 || func_194() || func_193(8, -1) || func_191() || func_101() || func_192() || func_190() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_195() || Global_113182 || Global_33090 || func_194() || func_193(8, -1) || func_191() || func_101() || func_192() || func_190() || Global_114135.f_7692.f_919[character] == 5 || Global_44728 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_195() || Global_113182 || Global_33090 || func_194() || func_193(8, -1) || func_101() || func_192() || func_190() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_195() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_193(8, -1) || func_190() || func_189() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_193(8, -1) || func_101() || func_192() || func_189() || func_188())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_195() || Global_33090 || func_194() || func_193(8, -1) || func_192() || func_191() || func_190() || Global_114135.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_195() || func_192() || Global_113182 || Global_33090 || func_194() || Global_45392 || func_193(8, -1) || func_191() || func_189() || func_190() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_195() || Global_113182 || Global_33090 || func_194() || func_193(8, -1) || func_191() || func_189() || func_101() || func_192() || func_190())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_188() // Position - 0xCE08
{
	return Global_101727.f_1;
}

BOOL func_189() // Position - 0xCE16
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 13);

	return false;
}

BOOL func_190() // Position - 0xCE39
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_191() // Position - 0xCE53
{
	if (Global_79800)
		return true;
	else if (Global_64302 && !Global_64308)
		return true;

	return false;
}

BOOL func_192() // Position - 0xCE7D
{
	return Global_101740.f_400 > 0;
}

BOOL func_193(int iParam0, int iParam1) // Position - 0xCE8E
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

BOOL func_194() // Position - 0xCEC6
{
	return Global_1575084;
}

BOOL func_195() // Position - 0xCED2
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

void func_196(var uParam0, const char* sParam1, var uParam2, var uParam3, var uParam4) // Position - 0xCEEE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (Global_44181 == 17)
			{
				if (*uParam0 != -1)
					func_202(uParam0);
			}
			else if (func_201())
			{
				if (*uParam0 != -1)
					func_202(uParam0);
			}
			else if (*uParam0 == -1)
			{
				if (func_200(PLAYER::PLAYER_PED_ID(), uParam2, true) <= 100f)
					func_199(uParam0, 1);
			}
			else
			{
				switch (func_198(*uParam0))
				{
					case 1:
						if (MISC::ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT"))
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam1, 14, 8);
						else
							CUTSCENE::REQUEST_CUTSCENE(sParam1, 8);
					
						STREAMING::SET_SRL_FORCE_PRESTREAM(2);
						func_197(*uParam0, true);
						break;
				
					case 2:
						CUTSCENE::STOP_CUTSCENE(false);
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::SET_SRL_FORCE_PRESTREAM(0);
						func_197(*uParam0, false);
						break;
				}
			
				if (func_200(PLAYER::PLAYER_PED_ID(), uParam2, true) > 120f)
					func_202(uParam0);
			}
		}
	}

	return;
}

void func_197(int iParam0, BOOL bParam1) // Position - 0xCFDF
{
	if (iParam0 == -1)
		return;

	if (bParam1)
		if (Global_79535 == iParam0)
			Global_79536 = iParam0;
	else if (Global_79536 == iParam0)
		Global_79536 = -1;

	return;
}

int func_198(int iParam0) // Position - 0xD01B
{
	if (Global_79535 == iParam0)
		if (Global_79536 == -1)
			if (Global_79534 < MISC::GET_FRAME_COUNT())
				return 1;
	else if (Global_79536 == iParam0)
		return 2;

	return 0;
}

void func_199(var uParam0, int iParam1) // Position - 0xD054
{
	BOOL flag;
	int i;

	if (Global_79532 < 5)
	{
		Global_79521[Global_79532 /*2*/] = 0;
		Global_79521[Global_79532 /*2*/].f_1 = iParam1;
		flag = false;
	
		while (!flag)
		{
			flag = true;
		
			for (i = 0; i < Global_79532; i = i + 1)
			{
				if (Global_79521[i /*2*/] == Global_79521[Global_79532 /*2*/])
				{
					Global_79521[Global_79532 /*2*/] = Global_79521[Global_79532 /*2*/] + 1;
					flag = false;
				}
			}
		}
	
		*uParam0 = Global_79521[Global_79532 /*2*/];
		Global_79532 = Global_79532 + 1;
		Global_79533 = 1;
	}
	else
	{
		*uParam0 = -1;
	}

	return;
}

float func_200(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xD0F2
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

BOOL func_201() // Position - 0xD12C
{
	return Global_98972;
}

void func_202(var uParam0) // Position - 0xD138
{
	CUTSCENE::STOP_CUTSCENE(false);
	CUTSCENE::REMOVE_CUTSCENE();
	func_203(uParam0);
	return;
}

void func_203(var uParam0) // Position - 0xD14F
{
	BOOL flag;
	int num;
	int i;

	if (*uParam0 == -1)
		return;

	if (Global_79536 == *uParam0)
		func_197(*uParam0, false);

	if (Global_79535 == *uParam0)
		Global_79535 = -1;

	flag = false;
	num = 0;

	while (!flag && num < Global_79532)
	{
		if (Global_79521[num /*2*/] == *uParam0)
			flag = true;
		else
			num = num + 1;
	}

	if (!flag)
		return;

	for (i = num; i <= Global_79532 - 2; i = i + 1)
	{
		Global_79521[i /*2*/] = Global_79521[i + 1 /*2*/];
		Global_79521[i /*2*/].f_1 = Global_79521[i + 1 /*2*/].f_1;
	}

	Global_79521[Global_79532 - 1 /*2*/] = -1;
	Global_79521[Global_79532 - 1 /*2*/].f_1 = 3;
	Global_79532 = Global_79532 - 1;
	Global_79533 = 1;
	Global_79534 = MISC::GET_FRAME_COUNT();
	*uParam0 = -1;
	return;
}

void func_204(int iParam0) // Position - 0xD237
{
	if (iParam0 == -1)
		iParam0 = func_178();

	if (iParam0 == -1)
		return;

	Global_113222[iParam0 /*10*/].f_1 = 1;
	return;
}

BOOL IS_RC_FINE_AND_IN_RANGE(Any* panParam0, BOOL bParam1) // Position - 0xD25F
{
	var unk;

	if (Global_79539)
	{
		func_282("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return false;
	}

	func_120(*panParam0, &unk);

	if (func_242(*panParam0) || func_240(*panParam0) || Global_79785 == 1)
		return true;

	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_282("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return false;
	}

	if (func_236(*panParam0))
	{
		if (*panParam0 == 19)
			func_235(panParam0->f_28[0]);
	
		func_282("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return false;
	}

	if (panParam0->f_25 == 1)
		if (!func_215(panParam0, true, 0))
			return false;
	else if (panParam0->f_16 == 0)
		if (!func_215(panParam0, false, 0))
			return false;

	if (*panParam0 == 16 || *panParam0 == 9 || *panParam0 == 18 || *panParam0 == 22 || *panParam0 == 32 || *panParam0 == 51)
	{
		if (!CHECK_VEHICLES_OK(panParam0, true, true))
		{
			if (*panParam0 == 16)
				func_212(panParam0);
			else
				func_210(panParam0);
		
			return false;
		}
	}
	else if (*panParam0 == 24)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, true))
		{
			func_210(panParam0);
			return false;
		}
	}
	else if (*panParam0 == 6)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, true))
			return false;
	}
	else if (panParam0->f_26 == 1)
	{
		if (!CHECK_VEHICLES_OK(panParam0, true, false))
		{
			func_210(panParam0);
			return false;
		}
	}
	else if (panParam0->f_16 == 2 || panParam0->f_16 == 1)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, false))
		{
			func_210(panParam0);
			return false;
		}
	}

	if (panParam0->f_16 == 2 || panParam0->f_16 == 1)
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_35[0]))
			if (!ENTITY::IS_ENTITY_AT_COORD(panParam0->f_35[0], unk.f_6, 8f, 8f, 8f, false, true, 0))
				return false;

	if (*panParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, panParam0->f_17[0 /*3*/], 8f))
		{
			func_282("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return false;
		}
	}

	if (unk.f_4 != 17)
	{
		if (!IS_BIT_SET(unk.f_26, _GET_CURRENT_PLAYER_CHARACTER_0()))
		{
			func_282("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return false;
		}
	}

	if (func_209(&(panParam0->f_48)) && bParam1)
		func_206(panParam0->f_28[0], &(panParam0->f_48), *panParam0);

	return true;
}

void func_206(Ped pedParam0, var uParam1, int iParam2) // Position - 0xD4CF
{
	int taskSequenceId;
	int taskSequenceId2;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_209(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
					
						if (iParam2 != 21)
						{
							if (func_71(uParam1->f_5, 0f, 0f, 0f, false))
							{
								TASK::TASK_PLAY_ANIM(pedParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, false, false, false);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							
								if (func_208(uParam1))
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								else
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
							
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
								TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
								TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(pedParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
					
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
		
			case 2:
				if (!func_208(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_207(iParam2) && !PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if (func_208(uParam1) && uParam1->f_4 == 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
		
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId2);
			
				if (func_71(uParam1->f_5, 0f, 0f, 0f, false))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
			
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId2);
				TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId2);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId2);
				uParam1->f_4 = 1;
			
				if (func_207(iParam2))
					uParam1->f_3 = 2;
				else
					uParam1->f_3 = 0;
				break;
		
			case 5:
				if (!func_207(iParam2) || PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_71(uParam1->f_5, 0f, 0f, 0f, false))
						TASK::TASK_PLAY_ANIM(pedParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, false, false, false);
					else
						TASK::TASK_PLAY_ANIM_ADVANCED(pedParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				
					uParam1->f_3 = 2;
				}
				break;
		}
	}

	return;
}

BOOL func_207(int iParam0) // Position - 0xD827
{
	if (iParam0 == 17 || iParam0 == 20)
		return true;

	return false;
}

BOOL func_208(var uParam0) // Position - 0xD847
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
		return false;

	return true;
}

BOOL func_209(var uParam0) // Position - 0xD85F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		return false;

	return true;
}

void func_210(var uParam0) // Position - 0xD884
{
	int i;
	int taskSequenceId;

	if (*uParam0 == 52)
	{
		func_211(&uParam0->f_41[1]);
		func_211(&uParam0->f_41[2]);
	}

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= uParam0->f_28 - 1; i = i + 1)
		{
			if (func_136(uParam0->f_28[i]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[i], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[i], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], false);
				}
			
				PED::SET_PED_KEEP_TASK(uParam0->f_28[i], true);
			
				if (*uParam0 == 34)
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
					}
				}
			
				switch (*uParam0)
				{
					case 19:
						func_235(uParam0->f_28[i]);
						break;
				
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					
						if (i == 0)
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, false, false, false);
						else
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, false, false, false);
					
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[i]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_28[i], PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						break;
				}
			}
		}
	}

	return;
}

void func_211(Object* pobParam0) // Position - 0xDB88
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		OBJECT::DELETE_OBJECT(pobParam0);
	}

	return;
}

void func_212(var uParam0) // Position - 0xDBB3
{
	int i;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= uParam0->f_28 - 1; i = i + 1)
		{
			if (func_136(uParam0->f_28[i]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[i], BF_CanUseVehicles, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[i], false);
				PED::SET_PED_KEEP_TASK(uParam0->f_28[i], true);
				TASK::TASK_COMBAT_PED(uParam0->f_28[i], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->f_28[i]);
			}
		}
	}

	return;
}

BOOL CHECK_VEHICLES_OK(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDC33
{
	int i;
	int num;
	Vehicle playersLastVehicle;
	Vehicle playersLastVehicle2;

	if (bParam1)
		num = uParam0->f_35 - 1;
	else
		num = 0;

	if (func_136(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= num; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[i]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_35[i], false))
				{
					func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return false;
				}
			
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[i], false))
				{
					func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return false;
				}
			
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[i], PLAYER::PLAYER_PED_ID(), false))
				{
					func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return false;
				}
			
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[i]) < 850)
				{
					func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return false;
				}
			
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[i], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return false;
						}
					
						playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						if (func_186(playersLastVehicle))
						{
							if (ENTITY::GET_ENTITY_MODEL(playersLastVehicle) == -1323100960 || ENTITY::GET_ENTITY_MODEL(playersLastVehicle) == -442313018)
							{
								if (func_186(uParam0->f_35[i]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(playersLastVehicle, uParam0->f_35[i]))
									{
										func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return false;
									}
								}
							}
						}
					}
					else
					{
						playersLastVehicle2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						if (func_186(playersLastVehicle2))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[i], playersLastVehicle2) && ENTITY::GET_ENTITY_SPEED(playersLastVehicle2) > 6f)
							{
								func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return false;
							}
						}
					
						if (*uParam0 == 16)
						{
							if (func_214(PLAYER::PLAYER_PED_ID(), uParam0->f_35[i]))
							{
								func_282("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return false;
							}
						}
					}
				}
			}
		}
	}

	return true;
}

BOOL func_214(Ped pedParam0, Vehicle veParam1) // Position - 0xDDF1
{
	Vehicle vehiclePedIsUsing;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(pedParam0);
		
			if (vehiclePedIsUsing == veParam1)
				return true;
		}
	}

	return false;
}

BOOL func_215(var uParam0, BOOL bParam1, int iParam2) // Position - 0xDE21
{
	int i;
	int num;

	if (bParam1)
		num = uParam0->f_28 - 1;
	else
		num = 0;

	if (*uParam0 == 16)
		iParam2 = 1;

	if (*uParam0 == 30)
		iParam2 = 1;

	if (func_136(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= num; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[i]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[i]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[i]))
						{
							if (iParam2 == 0)
								func_210(uParam0);
							else
								func_212(uParam0);
						
							if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								func_155();
						
							func_282("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return false;
						}
					}
				
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[i]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[i]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[i]))
					{
						if (iParam2 == 0)
							func_210(uParam0);
						else
							func_212(uParam0);
					
						func_282("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return false;
					}
				
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[i]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[i], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
						{
							if (iParam2 == 0)
								func_210(uParam0);
							else
								func_212(uParam0);
						
							func_282("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return false;
						}
					}
				
					if (func_234(*uParam0))
					{
						if (!func_170(*uParam0))
						{
							if (func_229(uParam0->f_28[i], true, false, false, false))
							{
								if (iParam2 == 0)
									func_210(uParam0);
								else
									func_212(uParam0);
							
								func_282("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return false;
							}
						}
					
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[i], true), 15f))
						{
							if (iParam2 == 0)
								func_210(uParam0);
							else
								func_212(uParam0);
						
							func_282("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
					
						if (func_217(uParam0->f_28[i], 1126825984))
						{
							if (iParam2 == 0)
								func_210(uParam0);
							else
								func_212(uParam0);
						
							func_282("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return false;
						}
					}
				
					if (!func_216(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[i], true), 5f))
						{
							if (iParam2 == 0)
								func_210(uParam0);
							else
								func_212(uParam0);
						
							func_282("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
								func_210(uParam0);
							else
								func_212(uParam0);
						
							func_282("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return false;
						}
					}
				}
				else
				{
					func_282("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
				
					if (*uParam0 == 34)
					{
						if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
						}
					}
				
					return false;
				}
			}
		}
	}

	return true;
}

BOOL func_216(int iParam0) // Position - 0xE0DD
{
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 52 || iParam0 == 53)
		return true;

	return false;
}

BOOL func_217(Ped pedParam0, int iParam1) // Position - 0xE111
{
	float xSize;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (func_228(pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				xSize = 40f;
			else
				xSize = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, xSize, xSize, xSize, false, true, 0))
				if (func_218(pedParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_218(Ped pedParam0, int iParam1) // Position - 0xE187
{
	return func_219(pedParam0, PLAYER::PLAYER_PED_ID(), iParam1, 1, 250, 7);
}

BOOL func_219(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xE19F
{
	BOOL flag;
	var pedBoneCoords;
	int num;

	num = func_227(pedParam0, pedParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam1))
	{
		if (num != -1)
			func_226(&iLocal_35[num /*4*/]);
	
		return false;
	}

	if (!func_223(pedParam0, pedParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_222();
	
		if (num == -1)
			return false;
	
		iLocal_35[num /*4*/].f_1 = pedParam0;
		iLocal_35[num /*4*/].f_2 = pedParam1;
	}

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f) };
	flag = func_220(&iLocal_35[num /*4*/], pedBoneCoords, pedParam1, &(iLocal_35[num /*4*/].f_3), pedParam0, iParam5);
	return flag || MISC::GET_GAME_TIMER() - iLocal_35[num /*4*/].f_3 < iParam4;
}

BOOL func_220(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Ped pedParam4, var uParam5, Ped pedParam6, int iParam7) // Position - 0xE260
{
	var hit;
	var endCoords;
	var surfaceNormal;
	Ped entityHit;
	int shapeTestResult;

	entityHit = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		endCoords = { func_221(pedParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, endCoords + ((endCoords - vParam1) * { 0.1f, 0.1f, 0.1f }), 511, pedParam6, 7);
		return 0;
	}

	shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (shapeTestResult == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (shapeTestResult == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityHit) == pedParam4)
		{
			if (bLocal_76)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityHit) == PED::GET_VEHICLE_PED_IS_IN(pedParam4, false))
			{
				if (bLocal_76)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_221(Ped pedParam0, int iParam1) // Position - 0xE38C
{
	int randomIntInRange;

	if (iParam1 == 7)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = randomIntInRange;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(pedParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(pedParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(pedParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(pedParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(pedParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
}

int func_222() // Position - 0xE451
{
	int i;

	for (i = 0; i < iLocal_35; i = i + 1)
	{
		if (iLocal_35[i /*4*/] == 0 && iLocal_35[i /*4*/].f_1 == 0 && iLocal_35[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_223(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3) // Position - 0xE49B
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_225(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_225(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_224(entityForwardVector, unk);

	if (num <= SYSTEM::COS(iParam2 / 2f))
		return false;

	return true;
}

float func_224(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xE52C
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_225(float fParam0, var uParam1, var uParam2) // Position - 0xE54D
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_226(var uParam0) // Position - 0xE58C
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_227(Ped pedParam0, Ped pedParam1) // Position - 0xE5A7
{
	int i;

	for (i = 0; i < iLocal_35; i = i + 1)
	{
		if (iLocal_35[i /*4*/].f_1 == pedParam0 && iLocal_35[i /*4*/].f_2 == pedParam1)
			return i;
	}

	return -1;
}

BOOL func_228(Ped pedParam0) // Position - 0xE5E6
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return true;

	return false;
}

BOOL func_229(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE60E
{
	float radius;
	float num;
	int weaponHash;

	radius = 8f;
	num = 15f;

	if (bParam1 == false)
	{
		radius = 1.86f;
		num = 1.86f;
	}

	if (bParam2)
		radius = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (weaponHash == 883325847)
		{
			radius = 3f;
			num = 3f;
		}
	
		if (!bParam2)
		{
			if (func_233(pedParam0, bParam1, radius, num))
				return true;
		
			if (func_230(pedParam0, num, bParam3, bParam4))
				return true;
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), radius, true))
						return true;
			}
			else
			{
				if (bParam1)
				{
					radius = 1.86f;
					num = 1.86f;
				}
			
				if (func_233(pedParam0, bParam1, radius, num))
					return true;
			}
		
			if (func_230(pedParam0, num, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_230(Ped pedParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE709
{
	float entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	num = { entityCoords };
	entityCoords = entityCoords - fParam1;
	entityCoords.f_1 = entityCoords.f_1 - fParam1;
	entityCoords.f_2 = entityCoords.f_2 - fParam1;
	num = num + fParam1;
	num.f_1 = num.f_1 + fParam1;
	num.f_2 = num.f_2 + fParam1;

	if (bParam2)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), -1813897027, fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), 615608432, fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), -37975472, fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), 741814745, 5f, true))
		{
			if (bParam3)
				if (func_231(pedParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_231(pedParam0, fParam1))
				return true;
			else
				return false;
	
		if (MISC::IS_PROJECTILE_IN_AREA(entityCoords, num, true))
			return true;
	}

	return false;
}

BOOL func_231(Ped pedParam0, float fParam1) // Position - 0xE815
{
	var outProjectile;
	var outCoords;

	if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, -1813897027, fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, -37975472, fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, -1600701090, fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, 741814745, fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, 615608432, fParam1, &outCoords, &outProjectile, false))
		if (func_232(pedParam0, outCoords, 90f, 0))
			return true;

	return false;
}

BOOL func_232(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xE8AA
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_225(uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_225(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_224(entityForwardVector, unk);

	if (num <= SYSTEM::COS(fParam4 / 2f))
		return false;

	return true;
}

BOOL func_233(Ped pedParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0xE938
{
	if (bParam1)
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, fParam3, fParam3, fParam3, false, true, 0))
				return true;

	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam2, true))
		return true;

	return false;
}

BOOL func_234(int iParam0) // Position - 0xE980
{
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 34 || iParam0 == 11 || iParam0 == 52 || iParam0 == 53)
		return false;

	return true;
}

void func_235(Ped pedParam0) // Position - 0xE9CA
{
	int taskSequenceId;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
	
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
	
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, false, false, false);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

BOOL func_236(int iParam0) // Position - 0xEA67
{
	if (iParam0 == -1)
		iParam0 = func_178();

	if (iParam0 == -1)
		return true;

	if (func_242(iParam0))
		return false;

	if (!_CAN_ENTER_FREEROAM_STATE(4))
	{
		if (func_240(iParam0))
		{
		}
		else
		{
			return true;
		}
	}

	if (func_239() && !func_238())
		return true;

	if (!func_237(iParam0))
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
				return true;

	if (!IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 2))
		return true;

	return false;
}

BOOL func_237(int iParam0) // Position - 0xEAFC
{
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 41 || iParam0 == 60 || iParam0 == 61)
		return true;

	return false;
}

BOOL func_238() // Position - 0xEB3B
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_239() // Position - 0xEB58
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 20);

	return false;
}

BOOL func_240(int iParam0) // Position - 0xEB7B
{
	if (func_241() && Global_101688.f_11 == 6 && iParam0 == func_179(&(Global_101688.f_3), 0))
		return true;

	return false;
}

BOOL func_241() // Position - 0xEBAF
{
	if (Global_101688 == 13 || Global_101688 == 10 || Global_101688 == 11 || Global_101688 == 12)
		return false;

	return true;
}

BOOL func_242(int iParam0) // Position - 0xEBED
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		if (Global_79786.f_1 == 7)
			if (Global_79786 == iParam0)
				return true;

	return false;
}

BOOL func_243(var uParam0) // Position - 0xEC15
{
	if (!func_244(uParam0))
		return false;

	func_282("Created initial scene");
	return true;
}

BOOL func_244(var uParam0) // Position - 0xEC34
{
	int num;
	int i;
	BOOL flag;
	int num2;

	num = 3;
	num[0] = func_251(CHAR_MAUDE);
	num[1] = -741944541;
	num[2] = 1385417869;

	switch (iLocal_89)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2729.0918f, 4143.17f, 41.36332f };
			uParam0->f_17[1 /*3*/] = { 2714.735f, 4145.3823f, 45.307323f };
			uParam0->f_24 = 12.8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_9), "MAUDE_MCS_1", 24);
			func_250(31, true, true);
		
			for (i = 0; i <= num - 1; i = i + 1)
			{
				STREAMING::REQUEST_MODEL(num[i]);
			}
		
			STREAMING::REQUEST_ANIM_DICT("special_ped@maude@base");
			iLocal_89 = 1;
			break;
	
		case 1:
			if (!func_249(&num) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@base"))
				return false;
		
			iLocal_89 = 2;
			break;
	
		case 2:
			flag = true;
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				func_248(&uParam0->f_41[0], num[1], 2728.35f, 4145.59f, 43.3f, -91.28f);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
				func_248(&uParam0->f_41[1], num[2], 2727.686f, 4145.715f, 44.08f, 71f);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
				if (!func_245(&uParam0->f_28[0], CHAR_MAUDE, 2728.33f, 4145.6f, 43.89f, 89.19f, "RC MAUDE 1", 1))
					flag = false;
		
			if (flag)
				iLocal_89 = 3;
			break;
	
		case 3:
			if (func_136(uParam0->f_28[0]) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[0]))
			{
				uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_59, false);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, "special_ped@maude@base", "base", 1000f, -4f, 4688, 0, 1148846080, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
				num2 = 0;
				num2 = num2 + 16;
				num2 = num2 + 64;
				num2 = num2 + 512;
				num2 = num2 + 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], uParam0->f_59, "base_chair", "special_ped@maude@base", 1000f, -8f, num2, 1148846080);
			}
		
			for (i = 0; i <= num - 1; i = i + 1)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(num[i]);
			}
		
			return true;
	}

	return false;
}

BOOL func_245(Ped* ppedParam0, eCharacter echParam1, float fParam2, float fParam3, float fParam4, float fParam5, char* sParam6, int iParam7) // Position - 0xEECC
{
	if (func_246(ppedParam0, echParam1, fParam2, fParam5, true))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, true);
				PED::SET_PED_MONEY(*ppedParam0, 0);
			
				if (iParam7 == 1)
					PED::SET_PED_CAN_BE_TARGETTED(*ppedParam0, false);
			}
		
			PED::SET_PED_NAME_DEBUG(*ppedParam0, sParam6);
		}
	
		return true;
	}

	return false;
}

BOOL func_246(Ped* ppedParam0, eCharacter echParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0xEF28
{
	Hash model;

	if (!func_36(echParam1))
	{
		model = func_251(echParam1);
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
				PED::DELETE_PED(ppedParam0);
		
			*ppedParam0 = PED::CREATE_PED(PED_TYPE_MISSION, model, vParam2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*ppedParam0);
		
			if (model == 1706635382)
				if (PED::GET_PED_DRAWABLE_VARIATION(*ppedParam0, PV_COMP_UPPR) == 0)
					PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_HAND, 2, 0, 0);
		
			func_247(*ppedParam0, echParam1);
		
			if (bParam6)
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
		
			return true;
		}
	}

	return false;
}

int func_247(var uParam0, eCharacter echParam1) // Position - 0xEFB6
{
	int num;

	num = 7;

	if (echParam1 == CHAR_LAMAR)
	{
		num = 3;
	}
	else if (echParam1 == CHAR_JIMMY)
	{
		num = 4;
	}
	else if (echParam1 == CHAR_AMANDA)
	{
		num = 5;
	}
	else
	{
		num = 7;
		return 0;
	}

	Global_97497[num - 3] = uParam0;
	return 1;
}

void func_248(Object* pobParam0, Hash hParam1, float fParam2, float fParam3, float fParam4, float fParam5) // Position - 0xEFFC
{
	func_211(pobParam0);
	*pobParam0 = OBJECT::CREATE_OBJECT(hParam1, fParam2, true, true, false);
	ENTITY::SET_ENTITY_HEADING(*pobParam0, fParam5);
	return;
}

BOOL func_249(var uParam0) // Position - 0xF023
{
	int i;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->[i]))
			return false;
	}

	return true;
}

void func_250(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF054
{
	Vector3 vector;
	Vector3 vector2;

	vector = { 2711.1978f, 4134.4253f, 32.90168f };
	vector2 = { 2739.9814f, 4155.2207f, 50.28859f };

	switch (iParam0)
	{
		case 31:
			if (bParam1)
			{
				iLocal_90 = PED::ADD_SCENARIO_BLOCKING_AREA(vector, vector2, false, true, true, true, 1);
				PED::SET_PED_NON_CREATION_AREA(vector, vector2);
				PATHFIND::SET_ROADS_IN_AREA(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, false, true);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vector, vector2, false, true);
			
				if (bParam2)
				{
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(vector, vector2, 0);
					MISC::CLEAR_AREA(2728.3328f, 4144.778f, 43.29292f, 7.5f, true, false, false, false);
				}
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_90, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vector, vector2, true, true);
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 1);
			}
			break;
	}

	return;
}

Hash func_251(eCharacter echParam0) // Position - 0xF155
{
	if (!func_36(echParam0))
		return func_47(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}

BOOL func_252(int iParam0) // Position - 0xF17B
{
	var unk;
	eCharacter character;

	func_120(iParam0, &unk);
	character = _GET_CURRENT_PLAYER_CHARACTER_0();

	if (character == _CHAR_NULL)
		return true;
	else if (character != CHAR_FRANKLIN && character != CHAR_MICHAEL && character != CHAR_TREVOR)
		return true;

	if (!IS_BIT_SET(unk.f_26, character))
		return true;

	return false;
}

BOOL func_253(int iParam0) // Position - 0xF1CC
{
	const char* string2;

	if (Global_79539)
	{
		func_282("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return false;
	}

	if (!Global_114135.f_9089 && !_IS_MISSION_REPEAT_ACTIVE(true))
	{
		func_282("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return false;
	}

	if (!func_254(iParam0))
	{
		Global_113222[iParam0 /*10*/].f_1 = 1;
		func_282("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return false;
	}

	if (Global_101688.f_11 == 6)
	{
		if (Global_101688 < 9)
		{
			func_120(iParam0, &string2);
		
			if (MISC::ARE_STRINGS_EQUAL(&(Global_101688.f_3), string2))
			{
				func_282("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return false;
			}
		}
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1737190692) == 0)
	{
		Global_113222[iParam0 /*10*/].f_1 = 1;
		func_282("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return false;
	}

	return true;
}

BOOL func_254(int iParam0) // Position - 0xF285
{
	var unk;

	func_120(iParam0, &unk);

	if (!_CAN_ENTER_FREEROAM_STATE(4))
	{
		if (func_240(iParam0))
		{
		}
		else
		{
			return false;
		}
	}

	if (func_239() && !func_238())
		return false;

	if (func_260(iParam0))
		return false;

	if (iParam0 == -1)
		iParam0 = func_178();

	if (iParam0 == -1)
		return false;

	if (!func_242(iParam0))
	{
		if (!func_259(iParam0))
			return false;
	
		if (!func_258(iParam0))
			return false;
	
		if (func_257(iParam0))
			return false;
	}

	if (iParam0 == 58)
		if (func_255(5))
			Global_113222[iParam0 /*10*/].f_3 = 0;

	if (Global_113222[iParam0 /*10*/].f_3 == 1)
		return false;

	return true;
}

BOOL func_255(int iParam0) // Position - 0xF346
{
	int i;
	var interiorType;
	Interior interiorAtCoordsWithType;

	if (Global_101740.f_397 == 0)
		return false;

	if (iParam0 == 10)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (func_255(i))
				return true;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_256(iParam0, &interiorType);
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_96701[iParam0 /*10*/].f_3, &interiorType);
	
		if (interiorAtCoordsWithType != 0 && Global_101740.f_397 == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_256(int iParam0, char* sParam1) // Position - 0xF3CB
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
			break;
	
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
			break;
	
		case 8:
		case 7:
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
			break;
	}

	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

BOOL func_257(int iParam0) // Position - 0xF4AD
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 3);
}

BOOL func_258(int iParam0) // Position - 0xF4D8
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 2);
}

BOOL func_259(int iParam0) // Position - 0xF503
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 0);
}

BOOL func_260(int iParam0) // Position - 0xF52E
{
	if (func_237(iParam0))
		return false;
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			return true;

	return false;
}

void func_261() // Position - 0xF563
{
	func_282("Running end routines.");
	Global_113853 = Global_113853 - 1;
	return;
}

BOOL func_262(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0xF57D
{
	int i;

	if (*uParam0 == 1)
	{
		if (func_263(uParam0->[0], uParam2, fParam5, uParam1))
			return true;
	}
	else
	{
		for (i = 0; i < *uParam0; i = i + 1)
		{
			if (func_263(uParam0->[i], uParam2, fParam5, uParam1))
			{
				i = *uParam0;
				return true;
			}
		}
	}

	func_282("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return false;
}

BOOL func_263(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, var uParam5) // Position - 0xF5E2
{
	int num;
	char* str;

	num = 0;
	func_120(iParam0, &str);

	if (func_264(str.f_6, uParam1, fParam4, false))
	{
		if (IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 0))
			if (!IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 3))
				num = 1;
	
		if (func_242(iParam0))
			num = 1;
	}

	if (num == 1)
	{
		*uParam5 = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&(uParam5->f_1), str, 32);
		return true;
	}

	return false;
}

BOOL func_264(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0xF65A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

void func_265(var uParam0, BOOL bParam1) // Position - 0xF6D5
{
	if (bParam1)
	{
		func_282("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_250(*uParam0, false, true);
		func_279(uParam0);
		func_267(uParam0, 0, false, false);
	}

	if (iLocal_91 != -1)
	{
		func_282("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_203(&iLocal_91);
	}

	func_266(&(uParam0->f_48));

	if (bParam1)
		func_204(*uParam0);

	func_261();
	func_282("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_266(var uParam0) // Position - 0xF73A
{
	if (func_209(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}

	return 0;
}

void func_267(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF770
{
	func_275(uParam0, iParam1);
	func_271(uParam0, bParam2);
	func_268(uParam0, bParam3);
	return;
}

void func_268(var uParam0, BOOL bParam1) // Position - 0xF790
{
	func_269(&(uParam0->f_41), bParam1);
	return;
}

void func_269(var uParam0, BOOL bParam1) // Position - 0xF7A2
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (bParam1)
			func_211(&uParam0->[i]);
		else
			func_270(&uParam0->[i], false);
	}

	return;
}

void func_270(Object* pobParam0, BOOL bParam1) // Position - 0xF7E0
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		if (!bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		else
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*pobParam0);
	}

	return;
}

void func_271(var uParam0, BOOL bParam1) // Position - 0xF81B
{
	func_272(&(uParam0->f_35), bParam1);
	return;
}

void func_272(var uParam0, BOOL bParam1) // Position - 0xF82D
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (bParam1)
			func_274(&uParam0->[i]);
		else
			func_273(&uParam0->[i]);
	}

	return;
}

void func_273(Vehicle* pveParam0) // Position - 0xF86A
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void func_274(Vehicle* pveParam0) // Position - 0xF8A2
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
	
		if (func_186(*pveParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
						return;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(pveParam0);
			}
		}
		else
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
					return;
				}
			}
		
			VEHICLE::DELETE_VEHICLE(pveParam0);
		}
	}

	return;
}

void func_275(var uParam0, int iParam1) // Position - 0xF93E
{
	func_276(&(uParam0->f_28), iParam1);
	return;
}

void func_276(var uParam0, int iParam1) // Position - 0xF950
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (iParam1 == 1)
			func_278(&uParam0->[i]);
		else
			func_277(&uParam0->[i], false, 1, 0);
	}

	return;
}

void func_277(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xF991
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

void func_278(Ped* ppedParam0) // Position - 0xF9E1
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
	
		PED::DELETE_PED(ppedParam0);
	}

	return;
}

void func_279(var uParam0) // Position - 0xFA22
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		if (func_136(uParam0->f_28[0]))
		{
			if (func_280(uParam0->f_28[0], SCRIPT_TASK_SYNCHRONIZED_SCENE))
				TASK::CLEAR_PED_TASKS(uParam0->f_28[0]);
		
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_28[0], -1000f, true);
		}
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[0]))
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], -1000f, true);
	}

	return;
}

BOOL func_280(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xFA93
{
	if (func_136(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

void func_281(int iParam0) // Position - 0xFAC6
{
	if (*iParam0 == -1)
		return;

	if (!(*iParam0 == Global_44143))
	{
		*iParam0 = -1;
		return;
	}

	*iParam0 = -1;
	Global_44142 = 0;
	Global_44144 = 0;
	Global_44181 = 15;
	Global_64305 = false;
	Global_64306 = 0;
	return;
}

void func_282(char* sParam0) // Position - 0xFB03
{
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
	return;
}

void func_283(var uParam0) // Position - 0xFB15
{
	*uParam0 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	return;
}

void func_284() // Position - 0xFB48
{
	func_282("Running start routines.");
	Global_113853 = Global_113853 + 1;
	return;
}


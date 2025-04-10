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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	Ped pedLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	eStackSize essLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = 0;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	float fLocal_115 = 0f;
	BOOL bLocal_116 = 0;
	eCharacter echLocal_117 = CHAR_MICHAEL;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	Vehicle veLocal_120 = 0;
	Vehicle veLocal_121 = 0;
	Vehicle veLocal_122 = 0;
	BOOL bLocal_123 = 0;
	BOOL bLocal_124 = 0;
	BOOL bLocal_125 = 0;
	BOOL bLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
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

void main() // Position - 0x0 (0)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int clockHours;
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
	uLocal_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	essLocal_95 = FRIEND;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR" /*~INPUT_CONTEXT~*/;
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	bLocal_116 = true;
	echLocal_117 = -1;
	iLocal_118 = 6;
	iLocal_119 = 18;
	bLocal_123 = true;
	uLocal_88 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_88 = { uLocal_88 };
	uLocal_84 = uLocal_84;
	uLocal_67 = { uLocal_67 };
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_95(true);

	pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_93(&Global_112810, 0);
	func_90();

	if (func_89(iLocal_92, 1))
		iLocal_98 = 10;
	else
		iLocal_98 = 9;

	while (!Global_39538)
	{
		SYSTEM::WAIT(0);
	}

	if (!func_89(iLocal_92, 8))
		if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
			if (func_86(0, iLocal_97))
				func_95(false);
			else
				func_95(true);

	if (iLocal_97 != -1)
		if (!func_86(0, iLocal_97))
			bLocal_116 = false;

	if (func_89(iLocal_92, 8388608))
		func_95(true);

	if (func_89(iLocal_92, 524288) && func_85() && !func_84())
		func_95(true);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_89(iLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_83(iLocal_103, true, false);
			iLocal_103 = 263;
		}
	
		func_82(10);
	}

	while (true)
	{
		pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (func_89(iLocal_92, 1048576))
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
				func_95(true);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83) && !ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
		{
			uLocal_85 = { ENTITY::GET_ENTITY_COORDS(pedLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(uLocal_85, uScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			uLocal_109 = { uLocal_85 };
			uLocal_112 = { uScriptParam_0.f_1[0 /*3*/] };
			uLocal_109.f_2 = 0f;
			uLocal_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(uLocal_109, uLocal_112);
		
			switch (iLocal_93)
			{
				case 0:
					if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) || func_89(iLocal_92, 16) && !func_89(iLocal_92, 524288))
					{
						iLocal_96 = -1;
						func_81();
						func_82(1);
					}
					else
					{
						if (fLocal_108 > fLocal_100 * fLocal_100)
						{
							if (iLocal_103 != 263)
							{
								func_83(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						
							func_82(10);
						}
					
						uLocal_85.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
					}
					break;
			
				case 1:
					if (func_80())
					{
						iLocal_101 = iLocal_101;
						func_82(3);
					}
					else
					{
						func_81();
					}
					break;
			
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_95(true);
						return;
					}
				
					if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
					{
						if (!func_89(iLocal_92, 8))
						{
							flag2 = true;
						
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101713.f_3), &uLocal_67))
							{
								uLocal_67 = { uLocal_51 };
								flag2 = false;
							}
						
							if (flag2)
							{
								func_95(false);
								break;
							}
						}
					}
				
					if (!func_89(iLocal_92, 4))
					{
						func_79();
						func_78(&iLocal_92, 4);
					}
				
					if (fLocal_108 > fLocal_100 * fLocal_100 && !Global_101747)
					{
						if (iLocal_103 != 263)
						{
							if (func_77(6) && !func_76(iLocal_103))
							{
							}
							else
							{
								func_83(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						}
					
						func_82(10);
					}
					else
					{
						uLocal_67 = { uLocal_51 };
						flag3 = !func_89(iLocal_92, 64);
						func_93(&iLocal_92, 128);
					
						if (!func_75(3) && !Global_101747)
						{
							if (func_89(iLocal_92, 2097152))
							{
								if (!func_89(iLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_74()) && !Global_101747)
								{
									func_82(10);
									break;
								}
							}
						}
					
						if (func_89(iLocal_92, 524288) && func_85() && !func_84())
							func_95(true);
					
						if (func_73())
							func_95(true);
					
						if (!func_64(6) || Global_113209 || func_63())
							flag3 = false;
					
						if (!bLocal_116)
						{
							func_61(&iLocal_92, 128);
							flag3 = false;
						}
					
						if (func_89(iLocal_92, 1))
						{
							if (!func_60())
							{
								func_61(&iLocal_92, 128);
								flag3 = false;
							}
						}
					
						if (func_59(true))
							flag3 = false;
					
						if (Global_79564)
							flag3 = false;
					
						if (func_58())
							flag3 = false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							flag3 = false;
					
						if (func_57() || func_56(8, -1))
							flag3 = false;
					
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (func_55(0) || func_54())
							flag3 = false;
					
						if (flag3)
						{
							if (!func_48(echLocal_117))
							{
								func_61(&iLocal_92, 128);
								flag3 = false;
							}
						
							if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
								flag3 = false;
						
							clockHours = CLOCK::GET_CLOCK_HOURS();
						
							if (iLocal_118 > iLocal_119)
							{
								if (clockHours < iLocal_118 && clockHours >= iLocal_119)
								{
									func_61(&iLocal_92, 128);
									flag3 = false;
								
									if (fLocal_91 < (fLocal_115 * fLocal_115) + 4f)
									{
										if (!func_89(iLocal_92, 134217728))
										{
											func_47("MG_NA_TIME" /*This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity.*/, iLocal_118, iLocal_119);
											func_61(&iLocal_92, 134217728);
										}
									}
									else
									{
										func_93(&iLocal_92, 134217728);
									}
								}
							}
							else if (clockHours < iLocal_118 || clockHours >= iLocal_119)
							{
								func_61(&iLocal_92, 128);
								flag3 = false;
							
								if (fLocal_91 < (fLocal_115 * fLocal_115) + 4f)
								{
									if (!func_89(iLocal_92, 134217728))
									{
										func_47("MG_NA_TIME" /*This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity.*/, iLocal_118, iLocal_119);
										func_61(&iLocal_92, 134217728);
									}
								}
								else
								{
									func_93(&iLocal_92, 134217728);
								}
							}
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								flag3 = false;
						
							if (flag3)
							{
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
							
								if (func_46(uLocal_84))
								{
									if (iLocal_94 == -1)
									{
										_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_61(&iLocal_92, 2048);
									}
									else if (!func_89(iLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_44(&iLocal_94);
										func_93(&iLocal_92, 2048);
									}
								
									if (func_42(iLocal_94, true))
									{
										sLocal_99 = sLocal_99;
										func_44(&iLocal_94);
										func_93(&iLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&uLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
										func_82(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_44(&iLocal_94);
									func_93(&iLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&uLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
									func_82(5);
								}
							}
						}
					
						if (!flag3)
						{
							if (iLocal_94 != -1)
							{
								func_44(&iLocal_94);
								func_93(&iLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
				
					func_40();
					break;
			
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
				
					if (SCRIPT::HAS_SCRIPT_LOADED(&uLocal_67))
					{
						if (iLocal_94 != -1)
							func_44(&iLocal_94);
					
						num = 2;
						flag = false;
					
						if (func_89(iLocal_92, 1))
						{
							if (func_77(6) || func_77(7))
							{
								num = 1;
								flag = true;
							}
						}
					
						if (num != 1)
							num = func_37(&iLocal_96, 6, iLocal_98, false, 0);
					
						if (num == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						
							func_36();
						
							if (Global_45410)
								func_27(PLAYER::PLAYER_PED_ID());
						
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
							iLocal_50 = func_26();
							func_93(&iLocal_92, 4);
							func_25();
							func_61(&iLocal_92, 2);
							func_82(6);
							func_21(&uLocal_105);
						
							if (iLocal_97 != -1)
							{
								func_20(iLocal_97);
								func_17(func_19(iLocal_97), 0, 0);
							}
						}
						else if (num == 2)
						{
							func_16();
						}
						else if (num == 0)
						{
							func_82(10);
						}
					}
					else
					{
						func_16();
					}
					break;
			
				case 6:
					if (!func_89(iLocal_92, 256))
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
						else if (CAM::IS_SCREEN_FADED_OUT())
							func_61(&iLocal_92, 256);
				
					if (func_89(Global_112810, 262144))
					{
						func_93(&Global_112810, 262144);
						func_15();
					}
				
					if (func_89(iLocal_92, 2097152))
						if (!func_75(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
							func_82(10);
				
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_11(&uLocal_105) * 1000f), iLocal_97, false);
						func_10(&uLocal_105);
						func_93(&iLocal_92, 256);
						func_7();
					
						if (flag)
						{
							func_93(&iLocal_92, 2);
						}
						else if (func_89(iLocal_92, 2))
						{
							if (func_89(Global_112810, 0))
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_93(&iLocal_92, 2);
							}
							else
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_93(&iLocal_92, 2);
							}
						}
					
						func_82(0);
					
						if (iLocal_97 != -1)
						{
							if (func_89(Global_112810, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101750, 0);
								func_5(func_19(iLocal_97), 0, Global_101750, true, false);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101750, 0);
								func_5(func_19(iLocal_97), 0, Global_101750, false, false);
							}
						}
					
						func_4();
						func_93(&Global_112810, 0);
					
						if (func_89(iLocal_92, 16777216))
							func_95(true);
					
						if (iLocal_97 != -1)
							if (Global_114162.f_9089)
								if (!func_86(0, iLocal_97))
									func_95(true);
					}
				
					func_3();
					break;
			
				case 8:
					func_82(0);
					break;
			
				case 10:
					func_95(true);
					break;
			
				case 9:
					if (fLocal_108 > fLocal_100 * fLocal_100)
					{
						if (iLocal_103 != 263)
						{
							func_83(iLocal_103, true, false);
							iLocal_103 = 263;
						}
					
						func_82(10);
					}
					break;
			
				case 7:
					func_2();
				
					if (iLocal_103 != 263)
						func_83(iLocal_103, false, false);
				
					if (iLocal_94 != -1)
						func_44(&iLocal_94);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
						if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
							HUD::CLEAR_HELP(true);
				
					func_82(4);
					break;
			
				case 4:
					if (iLocal_102 % 150 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) && func_86(0, iLocal_97))
									{
										func_90();
									
										if (iLocal_103 != 263)
											func_83(iLocal_103, true, false);
									
										func_82(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > fLocal_100 * fLocal_100)
								{
									if (iLocal_103 != 263)
									{
										func_83(iLocal_103, true, false);
										iLocal_103 = 263;
									}
								
									func_82(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > (80f + 5f) * (80f + 5f))
								{
									func_90();
								
									if (iLocal_103 != 263)
										func_83(iLocal_103, true, false);
								
									func_82(0);
								}
							}
						}
						else
						{
							func_83(iLocal_103, true, false);
						}
					}
					else
					{
						iLocal_102 = iLocal_102 + 1;
					}
					break;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xB18 (2840)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2() // Position - 0xB2B (2859)
{
	if (bLocal_123)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("journey"));
	}

	return;
}

void func_3() // Position - 0xB4A (2890)
{
	return;
}

void func_4() // Position - 0xB52 (2898)
{
	if (bLocal_123)
		veLocal_122 = veLocal_120;

	return;
}

void func_5(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB63 (2915)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98758))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98758, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_95865);
	TEXT_LABEL_ASSIGN_STRING(&Global_98758, "", 64);
	return;
}

void func_6(var uParam0) // Position - 0xBA7 (2983)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44161))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44160 = 0;
	Global_44162 = 0;
	Global_44199 = 15;
	Global_64323 = 0;
	Global_64324 = 0;
	return;
}

void func_7() // Position - 0xBE4 (3044)
{
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || func_9())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_8() || MISC::IS_PC_VERSION())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
	}

	return;
}

BOOL func_8() // Position - 0xC30 (3120)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_9() // Position - 0xC46 (3142)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_10(var uParam0) // Position - 0xC5C (3164)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_11(int* piParam0) // Position - 0xC72 (3186)
{
	if (func_14(piParam0))
		if (func_13(piParam0))
			return piParam0->f_2;
		else
			return func_12(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_12(BOOL bParam0) // Position - 0xCAE (3246)
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

BOOL func_13(int* piParam0) // Position - 0xD06 (3334)
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_14(int* piParam0) // Position - 0xD13 (3347)
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_15() // Position - 0xD20 (3360)
{
	return 1;
}

void func_16() // Position - 0xD29 (3369)
{
	return;
}

void func_17(char* sParam0, int iParam1, int iParam2) // Position - 0xD31 (3377)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98758))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98758, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_98758, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98758, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(false));
	return;
}

BOOL func_18(BOOL bParam0) // Position - 0xD72 (3442)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

char* func_19(int iParam0) // Position - 0xD9A (3482)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
	
		case 1:
			return "MGDT";
	
		case 2:
			return "MGGF";
	
		case 3:
			return "OJHU";
	
		case 4:
			return "MGOR";
	
		case 5:
			return "MGPS";
	
		case 6:
			return "MGRP";
	
		case 7:
			return "MGSEA";
	
		case 8:
			return "MGSTR";
	
		case 9:
			return "MGSC";
	
		case 10:
			return "MGSP";
	
		case 11:
			return "MGSRm";
	
		case 12:
			return "OJTX";
	
		case 13:
			return "MGTN";
	
		case 14:
			return "OJTW";
	
		case 15:
			return "OJDA";
	
		case 16:
			return "OJDG";
	
		case 17:
			return "MGTR";
	
		case 18:
			return "MGYG";
	
		case 19:
			return "MGCR";
	}

	return "INVALID!";
}

void func_20(int iParam0) // Position - 0xED8 (3800)
{
	int num;
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || func_9())
	{
		num = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_8() || MISC::IS_PC_VERSION())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
		TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
	}

	return;
}

void func_21(int* piParam0) // Position - 0xF39 (3897)
{
	if (!func_14(piParam0))
		func_24(piParam0);
	else
		func_22(piParam0);

	return;
}

void func_22(int* piParam0) // Position - 0xF5A (3930)
{
	func_23(piParam0, 0f);
	return;
}

void func_23(int* piParam0, float fParam1) // Position - 0xF69 (3945)
{
	piParam0->f_1 = func_12(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_24(int* piParam0) // Position - 0xF94 (3988)
{
	if (!func_14(piParam0))
		func_22(piParam0);

	return;
}

void func_25() // Position - 0xFAC (4012)
{
	if (bLocal_123)
	{
		if (bLocal_124)
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_121))
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_121);
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_122))
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_122);
		}
	}

	return;
}

int func_26() // Position - 0xFDC (4060)
{
	struct<3> args;
	int num;

	args = -1;
	args.f_1 = veLocal_122;
	args.f_2 = veLocal_121;
	num = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&uLocal_51, &args, 3, essLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_51);
	return num;
}

void func_27(Ped pedParam0) // Position - 0x100C (4108)
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_35(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45196[num /*5*/];
		func_30(1, num2, 1);
		return;
	}

	num3 = func_29(pedParam0);

	if (num3 == -1)
		return;

	func_28(num3);
	return;
}

void func_28(int iParam0) // Position - 0x1065 (4197)
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45165[iParam0 /*6*/].f_1 == 0))
		if (Global_45165[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_45408 = 0;

	Global_45165[iParam0 /*6*/] = 13;
	Global_45165[iParam0 /*6*/].f_1 = 0;
	Global_45165[iParam0 /*6*/].f_2 = 0;
	Global_45165[iParam0 /*6*/].f_3 = 0;
	Global_45165[iParam0 /*6*/].f_4 = 0;
	Global_45163 = Global_45163 - 1;

	if (Global_45163 < 0)
		Global_45163 = 0;

	return;
}

int func_29(Ped pedParam0) // Position - 0x10E8 (4328)
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45165[i /*6*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_30(int iParam0, int iParam1, int iParam2) // Position - 0x1119 (4377)
{
	func_31(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x112E (4398)
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_33(iParam0, iParam1, iParam2))
		return;

	num = func_32();

	if (num == -1)
		return;

	Global_45277[num /*6*/] = iParam0;
	Global_45277[num /*6*/].f_1 = iParam1;
	Global_45277[num /*6*/].f_2 = iParam2;
	Global_45277[num /*6*/].f_3 = iParam3;
	Global_45277[num /*6*/].f_4 = iParam4;
	Global_45277[num /*6*/].f_5 = iParam5;
	return;
}

int func_32() // Position - 0x11B0 (4528)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45277[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_33(int iParam0, int iParam1, int iParam2) // Position - 0x11E1 (4577)
{
	if (func_34(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_34(int iParam0, int iParam1, int iParam2) // Position - 0x11FC (4604)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45277[i /*6*/].f_2)
			if (iParam0 == Global_45277[i /*6*/])
				if (iParam1 == Global_45277[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_35(Ped pedParam0) // Position - 0x1248 (4680)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45196[i /*5*/] == -1))
			if (pedParam0 == Global_45196[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_36() // Position - 0x1291 (4753)
{
	if (Global_9758[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9758[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9758[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9758[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9758[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9758[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8919, 25);
	MISC::SET_BIT(&Global_8920, 11);
	return;
}

int func_37(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x130E (4878)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99166.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_39(0))
			return 0;
	
		Global_44163 = Global_44163 + 1;
		*uParam0 = Global_44163;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23848.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44199 = iParam2;
		Global_44161 = *uParam0;
		Global_44162 = iParam4;
		Global_44160 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44160 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44160; i = i + 1)
			{
				if (Global_44166[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44161 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44160 == 8)
			return 0;
	
		Global_44163 = Global_44163 + 1;
		*uParam0 = Global_44163;
		Global_44166[Global_44160 /*4*/] = Global_44163;
		Global_44166[Global_44160 /*4*/].f_1 = iParam1;
		Global_44166[Global_44160 /*4*/].f_2 = iParam2;
		Global_44166[Global_44160 /*4*/].f_3 = 0;
		Global_44160 = Global_44160 + 1;
	
		if (iParam4 != 0)
			func_38(uParam0, iParam4);
	}

	return 2;
}

void func_38(var uParam0, int iParam1) // Position - 0x1445 (5189)
{
	int i;

	if (Global_44160 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44160; i = i + 1)
	{
		if (Global_44166[i /*4*/] == *uParam0)
			Global_44166[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL func_39(int iParam0) // Position - 0x1494 (5268)
{
	if (Global_44199 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_40() // Position - 0x14B6 (5302)
{
	BOOL flag;
	Vector3 entityCoords;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_122) && !ENTITY::IS_ENTITY_DEAD(veLocal_122, false) && !FIRE::IS_ENTITY_ON_FIRE(veLocal_122))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_122, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(veLocal_122, true);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_122, false, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(veLocal_122, true);
		veLocal_120 = veLocal_122;
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_121) && !ENTITY::IS_ENTITY_DEAD(veLocal_121, false))
		{
			VEHICLE::SET_VEHICLE_UNDRIVEABLE(veLocal_121, true);
			VEHICLE::SET_VEHICLE_DISABLE_TOWING(veLocal_121, true);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_121, false, 0);
			VEHICLE::SET_VEHICLE_LIGHTS(veLocal_121, 1);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_122) && ENTITY::IS_ENTITY_DEAD(veLocal_122, false) || !ENTITY::DOES_ENTITY_EXIST(veLocal_122))
			func_41(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_121) && ENTITY::IS_ENTITY_DEAD(veLocal_121, false) || !ENTITY::DOES_ENTITY_EXIST(veLocal_121))
			func_41(0);
	
		if (bLocal_126 && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterIntro") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterOutro"))
		{
			STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterIntro");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterOutro");
			bLocal_126 = false;
		}
	
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return;

	if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
		return;

	flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	
		if (SYSTEM::VDIST(-1702.6951f, 4666.9414f, 22.7091f, entityCoords) < 8f)
			flag = true;
	}

	if (flag)
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@hunterIntro");
		STREAMING::REQUEST_ANIM_DICT("oddjobs@hunterOutro");
		bLocal_126 = true;
	}
	else if (bLocal_126 && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterIntro") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterOutro"))
	{
		STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterIntro");
		STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterOutro");
		bLocal_126 = false;
	}

	return;
}

void func_41(int iParam0) // Position - 0x1669 (5737)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iParam0 == 0;
	}

	iLocal_104 = iParam0;
	iLocal_102 = 0;
	iLocal_93 = 7;
	return;
}

BOOL func_42(int iParam0, BOOL bParam1) // Position - 0x168A (5770)
{
	int num;

	num = func_43(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_55(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44959[num /*32*/] == true && Global_44959[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_44959[num /*32*/].f_29)
					return false;
		
			Global_44959[num /*32*/].f_5 = 1;
			Global_44959[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44959[num /*32*/] == false;
			Global_44959[num /*32*/].f_7;
		}
	}

	return false;
}

int func_43(int iParam0) // Position - 0x1742 (5954)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44959[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_44(var uParam0) // Position - 0x177D (6013)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_43(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44959[num /*32*/])
		{
			Global_44959[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x17D4 (6100)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_44(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44959[i /*32*/])
		{
			Global_44959[i /*32*/] = true;
			Global_44959[i /*32*/].f_1 = Global_45160;
			Global_45160 = Global_45160 + 1;
			Global_44959[i /*32*/].f_4 = 0;
			Global_44959[i /*32*/].f_29 = 0;
			Global_44959[i /*32*/].f_5 = 0;
			Global_44959[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44959[i /*32*/].f_8), sParam2, 16);
			Global_44959[i /*32*/].f_6 = iParam3;
			Global_44959[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44959[i /*32*/].f_7 = 0;
			Global_44959[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44959[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44959[i /*32*/].f_13), sParam4, 64);
				Global_44959[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44959[i /*32*/].f_12 = 0;
				Global_44959[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44959[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_46(var uParam0) // Position - 0x18FF (6399)
{
	return true;
}

void func_47(char* sParam0, int iParam1, int iParam2) // Position - 0x1908 (6408)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
	return;
}

BOOL func_48(eCharacter echParam0) // Position - 0x192A (6442)
{
	func_49();
	return echParam0 == Global_114162.f_2367.f_539.f_4321;
}

void func_49() // Position - 0x1946 (6470)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_50(character) && !func_77(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_50(Global_114162.f_2367.f_539.f_4321))
					Global_114162.f_2367.f_539.f_4322 = Global_114162.f_2367.f_539.f_4321;
			
				Global_114162.f_2367.f_539.f_4323 = character;
				Global_114162.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114162.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114162.f_2367.f_539.f_4323 = Global_114162.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114162.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_50(eCharacter echParam0) // Position - 0x1A43 (6723)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1A4F (6735)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1A8C (6796)
{
	if (func_50(character))
		return func_53(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_53(eCharacter echParam0) // Position - 0x1AB1 (6833)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_54() // Position - 0x1AC0 (6848)
{
	return Global_76658;
}

BOOL func_55(int iParam0) // Position - 0x1ACC (6860)
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

BOOL func_56(int iParam0, int iParam1) // Position - 0x1B23 (6947)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673707.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673707.f_1048, iParam0);
}

BOOL func_57() // Position - 0x1B5B (7003)
{
	return MISC::GET_GAME_TIMER() <= Global_23987.f_6481 + 100;
}

BOOL func_58() // Position - 0x1B70 (7024)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_59(BOOL bParam0) // Position - 0x1B8A (7050)
{
	if (bParam0)
		return Global_23848.f_4 && Global_23848.f_104 == 4;

	return Global_23848.f_4;
}

BOOL func_60() // Position - 0x1BB3 (7091)
{
	return true;
}

void func_61(var uParam0, int iParam1) // Position - 0x1BBC (7100)
{
	func_62(uParam0, iParam1);
	return;
}

void func_62(var uParam0, int iParam1) // Position - 0x1BCC (7116)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_63() // Position - 0x1BDD (7133)
{
	int weaponHash;
	BOOL flag;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);

	if (weaponHash == 0 || weaponHash == joaat("WEAPON_UNARMED") || weaponHash == joaat("WEAPON_ELECTRIC_FENCE") || weaponHash == joaat("GADGET_PARACHUTE"))
		flag = false;
	else
		flag = true;

	flag;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());

	return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_DETONATE) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
}

BOOL func_64(int iParam0) // Position - 0x1CE7 (7399)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_50(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_71() || Global_113209 || Global_33108 || func_70() || func_56(8, -1) || func_69() || func_68() || func_67() || func_58() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_71() || Global_33108 || func_70() || func_56(8, -1) || func_67() || func_69() || func_68() || func_58() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_71() || Global_113209 || Global_33108 || func_70() || func_56(8, -1) || func_67() || func_69() || func_68() || func_58() || Global_114162.f_7692.f_919[character] == 5 || Global_44746 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_71() || Global_113209 || Global_33108 || func_70() || func_56(8, -1) || func_69() || func_68() || func_58() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_71() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_56(8, -1) || func_58() || func_66() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_56(8, -1) || func_69() || func_68() || func_66() || func_65())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_71() || Global_33108 || func_70() || func_56(8, -1) || func_68() || func_67() || func_58() || Global_114162.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_71() || func_68() || Global_113209 || Global_33108 || func_70() || Global_45410 || func_56(8, -1) || func_67() || func_66() || func_58() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_71() || Global_113209 || Global_33108 || func_70() || func_56(8, -1) || func_67() || func_66() || func_69() || func_68() || func_58())
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

BOOL func_65() // Position - 0x2404 (9220)
{
	return Global_101752.f_1;
}

BOOL func_66() // Position - 0x2412 (9234)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 13);

	return false;
}

BOOL func_67() // Position - 0x2435 (9269)
{
	if (Global_79825)
		return true;
	else if (Global_64320 && !Global_64326)
		return true;

	return false;
}

BOOL func_68() // Position - 0x245F (9311)
{
	return Global_101765.f_400 > 0;
}

BOOL func_69() // Position - 0x2470 (9328)
{
	return Global_101765.f_399 > 0;
}

BOOL func_70() // Position - 0x2481 (9345)
{
	return Global_1575086;
}

BOOL func_71() // Position - 0x248D (9357)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99166.f_44 == 1;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x24A9 (9385)
{
	func_49();
	return Global_114162.f_2367.f_539.f_4321;
}

BOOL func_73() // Position - 0x24C2 (9410)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
		return true;

	return false;
}

Entity func_74() // Position - 0x24DC (9436)
{
	return Global_97520;
}

BOOL func_75(int iParam0) // Position - 0x24E8 (9448)
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_77(6) || func_77(7))
				return true;
			else
				return func_75(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_64(4))
					return true;
			break;
	}

	return false;
}

BOOL func_76(int iParam0) // Position - 0x255A (9562)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33485[num /*23*/].f_19);
}

BOOL func_77(int iParam0) // Position - 0x2596 (9622)
{
	return Global_44199 == iParam0;
}

void func_78(var uParam0, int iParam1) // Position - 0x25A4 (9636)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_79() // Position - 0x25B5 (9653)
{
	if (bLocal_123)
	{
		bLocal_124 = true;
	
		if (!bLocal_125)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(-1702.46f, 4666.36f, 22.1255f, 10f, false, false, false, false, false, false, 0);
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_121))
				veLocal_121 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), -1707.4337f, 4666.5625f, 22.1095f, 323.2491f, true, true, false);
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_122))
			{
				veLocal_122 = VEHICLE::CREATE_VEHICLE(joaat("journey"), -1702.6951f, 4666.9414f, 22.7091f, 80.03f, true, true, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_122, true);
			}
		
			bLocal_125 = true;
		}
	}

	return;
}

BOOL func_80() // Position - 0x264C (9804)
{
	if (bLocal_123)
		return STREAMING::HAS_MODEL_LOADED(joaat("blazer")) && STREAMING::HAS_MODEL_LOADED(joaat("journey"));

	return true;
}

void func_81() // Position - 0x2674 (9844)
{
	if (bLocal_123)
	{
		STREAMING::REQUEST_MODEL(joaat("blazer"));
		STREAMING::REQUEST_MODEL(joaat("journey"));
	}

	return;
}

void func_82(int iParam0) // Position - 0x2693 (9875)
{
	iLocal_93 = iParam0;
	return;
}

void func_83(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x269F (9887)
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33485[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33485[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 18);
	
		if (Global_33482 == 1)
			Global_33483 = 1;
	
		Global_33482 = 1;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33485[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33485[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33485[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

BOOL func_84() // Position - 0x279F (10143)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_85() // Position - 0x27BC (10172)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 20);

	return false;
}

BOOL func_86(int iParam0, int iParam1) // Position - 0x27DF (10207)
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_114162.f_9089.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2829 (10281)
{
	return func_88(iParam0, Global_44199);
}

BOOL func_88(int iParam0, int iParam1) // Position - 0x283A (10298)
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

BOOL func_89(int iParam0, int iParam1) // Position - 0x2A1B (10779)
{
	return iParam0 && iParam1 != false;
}

void func_90() // Position - 0x2A2A (10794)
{
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "hunting_ambient", 64);
	iLocal_97 = 3;
	echLocal_117 = CHAR_TREVOR;
	sLocal_99 = "PLAY_HUNT" /*Press ~INPUT_CONTEXT~ to start hunting.*/;
	iLocal_118 = 5;
	iLocal_119 = 19;
	fLocal_115 = 2f;
	iLocal_103 = 69;
	fLocal_100 = SYSTEM::TO_FLOAT(func_92(iLocal_103)) + 5f;

	if (!func_86(0, 3))
	{
		func_91(iLocal_103);
		bLocal_123 = false;
	}

	essLocal_95 = 63500;
	return;
}

void func_91(int iParam0) // Position - 0x2A79 (10873)
{
	if (iLocal_93 < 5)
	{
		if (iParam0 != 263)
		{
			iParam0 < 0 || iParam0 >= 263;
			func_83(iParam0, false, false);
		}
	
		iLocal_103 = 263;
		func_44(&iLocal_94);
		iLocal_93 = 9;
	}

	return;
}

int func_92(int iParam0) // Position - 0x2ABC (10940)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
	
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
	
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
	}

	return -1;
}

void func_93(int iParam0, int iParam1) // Position - 0x2BD4 (11220)
{
	func_94(iParam0, iParam1);
	return;
}

void func_94(var uParam0, int iParam1) // Position - 0x2BE4 (11236)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_95(BOOL bParam0) // Position - 0x2BF9 (11257)
{
	if (bParam0)
		if (iLocal_103 != 263)
			func_83(iLocal_103, 0, false);

	func_44(&iLocal_94);

	if (func_89(iLocal_92, 2))
	{
		func_4();
		func_93(&iLocal_92, 2);
		func_6(&iLocal_96);
	}

	iLocal_96 = -1;
	func_96();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_96() // Position - 0x2C42 (11330)
{
	func_93(&iLocal_92, 4);
	func_97();

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);

	if (!MISC::IS_STRING_NULL(&uLocal_67))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_67) != 0)
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);

	return;
}

void func_97() // Position - 0x2C7F (11391)
{
	return;
}


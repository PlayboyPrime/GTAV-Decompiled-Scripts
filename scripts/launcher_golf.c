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
	Vehicle veLocal_84 = 0;
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
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
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
	iLocal_116 = 6;
	iLocal_117 = 18;
	uLocal_88 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_88 = { uLocal_88 };
	veLocal_84 = veLocal_84;
	uLocal_67 = { uLocal_67 };
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_96(true);

	pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_94(&Global_112783, 0);
	func_91();

	if (func_90(iLocal_92, 1))
		iLocal_98 = 10;
	else
		iLocal_98 = 9;

	while (!Global_39520)
	{
		SYSTEM::WAIT(0);
	}

	if (!func_90(iLocal_92, 8))
		if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
			if (func_87(0, iLocal_97))
				func_96(false);
			else
				func_96(true);

	if (iLocal_97 != -1)
		if (!func_87(0, iLocal_97))
			func_96(true);

	if (func_90(iLocal_92, 8388608))
		func_96(true);

	if (func_90(iLocal_92, 524288) && func_86() && !func_85())
		func_96(true);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_90(iLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_84(iLocal_103, true, false);
			iLocal_103 = 263;
		}
	
		func_83(10);
	}

	while (true)
	{
		pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (func_90(iLocal_92, 1048576))
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
				func_96(true);
	
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
					if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) || func_90(iLocal_92, 16) && !func_90(iLocal_92, 524288))
					{
						iLocal_96 = -1;
						func_82();
						func_83(1);
					}
					else
					{
						if (fLocal_108 > fLocal_100 * fLocal_100)
						{
							if (iLocal_103 != 263)
							{
								func_84(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						
							func_83(10);
						}
					
						uLocal_85.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
					}
					break;
			
				case 1:
					if (func_81())
					{
						iLocal_101 = iLocal_101;
						func_83(3);
					}
					else
					{
						func_82();
					}
					break;
			
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_96(true);
						return;
					}
				
					if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
					{
						if (!func_90(iLocal_92, 8))
						{
							flag2 = true;
						
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101688.f_3), &uLocal_67))
							{
								uLocal_67 = { uLocal_51 };
								flag2 = false;
							}
						
							if (flag2)
							{
								func_96(false);
								break;
							}
						}
					}
				
					if (!func_90(iLocal_92, 4))
					{
						func_80();
						func_79(&iLocal_92, 4);
					}
				
					if (fLocal_108 > fLocal_100 * fLocal_100 && !Global_101722)
					{
						if (iLocal_103 != 263)
						{
							if (func_78(6) && !func_77(iLocal_103))
							{
							}
							else
							{
								func_84(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						}
					
						func_83(10);
					}
					else
					{
						uLocal_67 = { uLocal_51 };
						flag3 = !func_90(iLocal_92, 64);
						func_94(&iLocal_92, 128);
					
						if (!func_76(3) && !Global_101722)
						{
							if (func_90(iLocal_92, 2097152))
							{
								if (!func_90(iLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_75()) && !Global_101722)
								{
									func_83(10);
									break;
								}
							}
						}
					
						if (func_90(iLocal_92, 524288) && func_86() && !func_85())
							func_96(true);
					
						if (func_74())
							func_96(true);
					
						if (!func_66(6) || Global_113182 || func_65())
							flag3 = false;
					
						if (func_90(iLocal_92, 1))
						{
							if (!func_64())
							{
								func_62(&iLocal_92, 128);
								flag3 = false;
							}
						}
					
						if (func_61(true))
							flag3 = false;
					
						if (Global_79539)
							flag3 = false;
					
						if (func_60())
							flag3 = false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							flag3 = false;
					
						if (func_59() || func_58(8, -1))
							flag3 = false;
					
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (func_57(0) || func_56())
							flag3 = false;
					
						if (flag3)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
								if (!ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(pedLocal_83, false), uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 20f, false, false, iLocal_101))
									flag3 = false;
							else if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
								flag3 = false;
						
							if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, 0))
							{
								func_62(&iLocal_92, 128);
								flag3 = false;
							}
						
							clockHours = CLOCK::GET_CLOCK_HOURS();
						
							if (iLocal_116 > iLocal_117)
							{
								if (clockHours < iLocal_116 && clockHours >= iLocal_117)
								{
									func_62(&iLocal_92, 128);
									flag3 = false;
								
									if (fLocal_91 < (fLocal_115 * fLocal_115) + 4f)
									{
										if (!func_90(iLocal_92, 134217728))
										{
											func_55("MG_NA_TIME" /*This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity.*/, iLocal_116, iLocal_117);
											func_62(&iLocal_92, 134217728);
										}
									}
									else
									{
										func_94(&iLocal_92, 134217728);
									}
								}
							}
							else if (clockHours < iLocal_116 || clockHours >= iLocal_117)
							{
								func_62(&iLocal_92, 128);
								flag3 = false;
							
								if (fLocal_91 < (fLocal_115 * fLocal_115) + 4f)
								{
									if (!func_90(iLocal_92, 134217728))
									{
										func_55("MG_NA_TIME" /*This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity.*/, iLocal_116, iLocal_117);
										func_62(&iLocal_92, 134217728);
									}
								}
								else
								{
									func_94(&iLocal_92, 134217728);
								}
							}
						
							if (flag3 && _GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) < iLocal_118)
							{
								func_62(&iLocal_92, 128);
								flag3 = false;
							
								if (!func_90(iLocal_92, 33554432))
								{
									func_47("MG_YOU_IS_BROKE" /*Can't afford this activity. $~1~ needed to start.*/, iLocal_118, -1);
									func_62(&iLocal_92, 33554432);
								}
							}
							else
							{
								func_94(&iLocal_92, 33554432);
							}
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								flag3 = false;
						
							if (flag3)
							{
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
							
								if (func_46(veLocal_84))
								{
									if (iLocal_94 == -1)
									{
										if (iLocal_118 > 0)
										{
											_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, "", 1, 0, 0, 0);
											func_44(sLocal_99, iLocal_118);
											func_62(&iLocal_92, 2048);
										}
										else
										{
											_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
											func_62(&iLocal_92, 2048);
										}
									}
									else if (!func_90(iLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_43(&iLocal_94);
										func_94(&iLocal_92, 2048);
									}
								
									if (func_41(iLocal_94, true))
									{
										sLocal_99 = sLocal_99;
										func_43(&iLocal_94);
										func_94(&iLocal_92, 2048);
									
										if (func_90(iLocal_92, 2048))
										{
											if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												func_94(&iLocal_92, 2048);
												HUD::CLEAR_HELP(false);
											}
										}
									
										SCRIPT::REQUEST_SCRIPT(&uLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
										func_83(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_43(&iLocal_94);
									func_94(&iLocal_92, 2048);
								
									if (func_90(iLocal_92, 2048))
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_94(&iLocal_92, 2048);
											HUD::CLEAR_HELP(false);
										}
									}
								
									SCRIPT::REQUEST_SCRIPT(&uLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
									func_83(5);
								}
							}
						}
					
						if (!flag3)
						{
							if (iLocal_94 != -1)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_43(&iLocal_94);
									func_94(&iLocal_92, 2048);
									HUD::CLEAR_HELP(false);
								}
							}
						}
					}
				
					func_39();
					break;
			
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
				
					if (SCRIPT::HAS_SCRIPT_LOADED(&uLocal_67))
					{
						if (iLocal_94 != -1)
							func_43(&iLocal_94);
					
						num = 2;
						flag = false;
					
						if (func_90(iLocal_92, 1))
						{
							if (func_78(6) || func_78(7))
							{
								num = 1;
								flag = true;
							}
						}
					
						if (num != 1)
							num = func_36(&iLocal_96, 6, iLocal_98, false, 0);
					
						if (num == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						
							func_35();
						
							if (Global_45392)
								func_26(PLAYER::PLAYER_PED_ID());
						
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
							iLocal_50 = SYSTEM::START_NEW_SCRIPT(&uLocal_67, essLocal_95);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);
							uLocal_51 = { uLocal_67 };
							TEXT_LABEL_ASSIGN_STRING(&uLocal_67, "", 64);
							func_94(&iLocal_92, 4);
							func_25();
							func_62(&iLocal_92, 2);
							func_83(6);
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
							func_83(10);
						}
					}
					else
					{
						func_16();
					}
					break;
			
				case 6:
					if (func_90(Global_112783, 262144))
					{
						func_94(&Global_112783, 262144);
						func_15();
					}
				
					if (func_90(iLocal_92, 2097152))
						if (!func_76(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
							func_83(10);
				
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_11(&uLocal_105) * 1000f), iLocal_97, false);
						func_10(&uLocal_105);
						func_94(&iLocal_92, 256);
						func_7();
					
						if (flag)
						{
							func_94(&iLocal_92, 2);
						}
						else if (func_90(iLocal_92, 2))
						{
							if (func_90(Global_112783, 0))
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_94(&iLocal_92, 2);
							}
							else
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_94(&iLocal_92, 2);
							}
						}
					
						func_83(0);
					
						if (iLocal_97 != -1)
						{
							if (func_90(Global_112783, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101725, 0);
								func_5(func_19(iLocal_97), 0, Global_101725, true, false);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101725, 0);
								func_5(func_19(iLocal_97), 0, Global_101725, false, false);
							}
						}
					
						func_4();
						func_94(&Global_112783, 0);
					
						if (func_90(iLocal_92, 16777216))
							func_96(true);
					
						if (iLocal_97 != -1)
							if (Global_114135.f_9089)
								if (!func_87(0, iLocal_97))
									func_96(true);
					}
				
					func_3();
					break;
			
				case 8:
					func_83(0);
					break;
			
				case 10:
					func_96(true);
					break;
			
				case 9:
					if (fLocal_108 > fLocal_100 * fLocal_100)
					{
						if (iLocal_103 != 263)
						{
							func_84(iLocal_103, true, false);
							iLocal_103 = 263;
						}
					
						func_83(10);
					}
					break;
			
				case 7:
					func_2();
				
					if (iLocal_103 != 263)
						func_84(iLocal_103, false, false);
				
					if (iLocal_94 != -1)
						func_43(&iLocal_94);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
						if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
							HUD::CLEAR_HELP(true);
				
					func_83(4);
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
									if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) && func_87(0, iLocal_97))
									{
										func_91();
									
										if (iLocal_103 != 263)
											func_84(iLocal_103, true, false);
									
										func_83(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > fLocal_100 * fLocal_100)
								{
									if (iLocal_103 != 263)
									{
										func_84(iLocal_103, true, false);
										iLocal_103 = 263;
									}
								
									func_83(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > (80f + 5f) * (80f + 5f))
								{
									func_91();
								
									if (iLocal_103 != 263)
										func_84(iLocal_103, true, false);
								
									func_83(0);
								}
							}
						}
						else
						{
							func_84(iLocal_103, true, false);
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xBEC (3052)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2() // Position - 0xBFF (3071)
{
	return;
}

void func_3() // Position - 0xC07 (3079)
{
	return;
}

void func_4() // Position - 0xC0F (3087)
{
	return;
}

void func_5(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC17 (3095)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98733))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98733, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_95840);
	TEXT_LABEL_ASSIGN_STRING(&Global_98733, "", 64);
	return;
}

void func_6(var uParam0) // Position - 0xC5B (3163)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44143))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44142 = 0;
	Global_44144 = 0;
	Global_44181 = 15;
	Global_64305 = 0;
	Global_64306 = 0;
	return;
}

void func_7() // Position - 0xC98 (3224)
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

BOOL func_8() // Position - 0xCE4 (3300)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_9() // Position - 0xCFA (3322)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_10(var uParam0) // Position - 0xD10 (3344)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_11(int* piParam0) // Position - 0xD26 (3366)
{
	if (func_14(piParam0))
		if (func_13(piParam0))
			return piParam0->f_2;
		else
			return func_12(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_12(BOOL bParam0) // Position - 0xD62 (3426)
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

BOOL func_13(int* piParam0) // Position - 0xDBA (3514)
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_14(int* piParam0) // Position - 0xDC7 (3527)
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_15() // Position - 0xDD4 (3540)
{
	return 1;
}

void func_16() // Position - 0xDDD (3549)
{
	return;
}

void func_17(char* sParam0, int iParam1, int iParam2) // Position - 0xDE5 (3557)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98733))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98733, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_98733, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98733, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(false));
	return;
}

BOOL func_18(BOOL bParam0) // Position - 0xE26 (3622)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

char* func_19(int iParam0) // Position - 0xE4E (3662)
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

void func_20(int iParam0) // Position - 0xF8C (3980)
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

void func_21(int* piParam0) // Position - 0xFED (4077)
{
	if (!func_14(piParam0))
		func_24(piParam0);
	else
		func_22(piParam0);

	return;
}

void func_22(int* piParam0) // Position - 0x100E (4110)
{
	func_23(piParam0, 0f);
	return;
}

void func_23(int* piParam0, float fParam1) // Position - 0x101D (4125)
{
	piParam0->f_1 = func_12(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_24(int* piParam0) // Position - 0x1048 (4168)
{
	if (!func_14(piParam0))
		func_22(piParam0);

	return;
}

void func_25() // Position - 0x1060 (4192)
{
	Ped outPed;
	var sizeAndPeds;
	int pedNearbyPeds;
	int i;

	if (PED::GET_CLOSEST_PED(-1370.6245f, 56.1227f, 52.7033f, 100f, true, true, &outPed, false, false, -1))
	{
		sizeAndPeds = 100;
	
		if (!PED::IS_PED_INJURED(outPed))
		{
			pedNearbyPeds = PED::GET_PED_NEARBY_PEDS(outPed, &sizeAndPeds, -1);
			TASK::CLEAR_PED_TASKS(outPed);
		}
	
		if (pedNearbyPeds == 0)
		{
		}
	
		i = 0;
	
		for (i = 0; i < pedNearbyPeds; i = i + 1)
		{
			if (!PED::IS_PED_INJURED(sizeAndPeds[i]))
				TASK::CLEAR_PED_TASKS(sizeAndPeds[i]);
		}
	}

	return;
}

void func_26(Ped pedParam0) // Position - 0x10E5 (4325)
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_34(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45178[num /*5*/];
		func_29(1, num2, 1);
		return;
	}

	num3 = func_28(pedParam0);

	if (num3 == -1)
		return;

	func_27(num3);
	return;
}

void func_27(int iParam0) // Position - 0x113E (4414)
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

int func_28(Ped pedParam0) // Position - 0x11C1 (4545)
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

void func_29(int iParam0, int iParam1, int iParam2) // Position - 0x11F2 (4594)
{
	func_30(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1207 (4615)
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_32(iParam0, iParam1, iParam2))
		return;

	num = func_31();

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

int func_31() // Position - 0x1289 (4745)
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

BOOL func_32(int iParam0, int iParam1, int iParam2) // Position - 0x12BA (4794)
{
	if (func_33(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_33(int iParam0, int iParam1, int iParam2) // Position - 0x12D5 (4821)
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

int func_34(Ped pedParam0) // Position - 0x1321 (4897)
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

void func_35() // Position - 0x136A (4970)
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

int func_36(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x13E7 (5095)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99141.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_38(0))
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23831.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44181 = iParam2;
		Global_44143 = *uParam0;
		Global_44144 = iParam4;
		Global_44142 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44142 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44142; i = i + 1)
			{
				if (Global_44148[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44143 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44142 == 8)
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		Global_44148[Global_44142 /*4*/] = Global_44145;
		Global_44148[Global_44142 /*4*/].f_1 = iParam1;
		Global_44148[Global_44142 /*4*/].f_2 = iParam2;
		Global_44148[Global_44142 /*4*/].f_3 = 0;
		Global_44142 = Global_44142 + 1;
	
		if (iParam4 != 0)
			func_37(uParam0, iParam4);
	}

	return 2;
}

void func_37(var uParam0, int iParam1) // Position - 0x151E (5406)
{
	int i;

	if (Global_44142 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44142; i = i + 1)
	{
		if (Global_44148[i /*4*/] == *uParam0)
			Global_44148[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL func_38(int iParam0) // Position - 0x156D (5485)
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_39() // Position - 0x158F (5519)
{
	if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uLocal_88, fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_TALK, true);

	if (iLocal_118 > 0)
	{
		if (func_40(8) == _GET_CURRENT_PLAYER_CHARACTER())
		{
			iLocal_118 = 0;
			sLocal_99 = "PLAY_GOLF" /*Press ~INPUT_CONTEXT~ to play Golf.*/;
		}
	}

	return;
}

eCharacter func_40(int iParam0) // Position - 0x15D0 (5584)
{
	return Global_114135.f_24908[iParam0 /*4*/];
}

BOOL func_41(int iParam0, BOOL bParam1) // Position - 0x15E3 (5603)
{
	int num;

	num = func_42(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_57(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44941[num /*32*/] == true && Global_44941[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_44941[num /*32*/].f_29)
					return false;
		
			Global_44941[num /*32*/].f_5 = 1;
			Global_44941[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44941[num /*32*/] == false;
			Global_44941[num /*32*/].f_7;
		}
	}

	return false;
}

int func_42(int iParam0) // Position - 0x169B (5787)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44941[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_43(var uParam0) // Position - 0x16D6 (5846)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_42(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44941[num /*32*/])
		{
			Global_44941[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

void func_44(char* sParam0, int iParam1) // Position - 0x172D (5933)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x1749 (5961)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_43(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44941[i /*32*/])
		{
			Global_44941[i /*32*/] = true;
			Global_44941[i /*32*/].f_1 = Global_45142;
			Global_45142 = Global_45142 + 1;
			Global_44941[i /*32*/].f_4 = 0;
			Global_44941[i /*32*/].f_29 = 0;
			Global_44941[i /*32*/].f_5 = 0;
			Global_44941[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44941[i /*32*/].f_8), sParam2, 16);
			Global_44941[i /*32*/].f_6 = iParam3;
			Global_44941[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44941[i /*32*/].f_7 = 0;
			Global_44941[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44941[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44941[i /*32*/].f_13), sParam4, 64);
				Global_44941[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44941[i /*32*/].f_12 = 0;
				Global_44941[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44941[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_46(Vehicle veParam0) // Position - 0x1874 (6260)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (!ENTITY::IS_ENTITY_IN_AIR(veParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(veParam0))
			return false;
	}

	return true;
}

void func_47(char* sParam0, int iParam1, int iParam2) // Position - 0x18B0 (6320)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
	return;
}

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x18CD (6349)
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1925 (6437)
{
	func_50();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_50() // Position - 0x193E (6462)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_51(character) && !func_78(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_51(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_51(eCharacter echParam0) // Position - 0x1A3B (6715)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1A47 (6727)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1A84 (6788)
{
	if (func_51(character))
		return func_54(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_54(eCharacter echParam0) // Position - 0x1AA9 (6825)
{
	return Global_2201[echParam0 /*29*/];
}

void func_55(char* sParam0, int iParam1, int iParam2) // Position - 0x1AB8 (6840)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
	return;
}

BOOL func_56() // Position - 0x1ADA (6874)
{
	return Global_76640;
}

BOOL func_57(int iParam0) // Position - 0x1AE6 (6886)
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

BOOL func_58(int iParam0, int iParam1) // Position - 0x1B3D (6973)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673655.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673655.f_1048, iParam0);
}

BOOL func_59() // Position - 0x1B75 (7029)
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

BOOL func_60() // Position - 0x1B8A (7050)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_61(BOOL bParam0) // Position - 0x1BA4 (7076)
{
	if (bParam0)
		return Global_23831.f_4 && Global_23831.f_104 == 4;

	return Global_23831.f_4;
}

void func_62(var uParam0, int iParam1) // Position - 0x1BCD (7117)
{
	func_63(uParam0, iParam1);
	return;
}

void func_63(var uParam0, int iParam1) // Position - 0x1BDD (7133)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_64() // Position - 0x1BEE (7150)
{
	if (func_78(6) || func_78(7))
		return func_77(68);

	return true;
}

BOOL func_65() // Position - 0x1C13 (7187)
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

BOOL func_66(int iParam0) // Position - 0x1D1D (7453)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_51(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_73() || Global_113182 || Global_33090 || func_72() || func_58(8, -1) || func_71() || func_70() || func_69() || func_60() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_73() || Global_33090 || func_72() || func_58(8, -1) || func_69() || func_71() || func_70() || func_60() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_73() || Global_113182 || Global_33090 || func_72() || func_58(8, -1) || func_69() || func_71() || func_70() || func_60() || Global_114135.f_7692.f_919[character] == 5 || Global_44728 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_73() || Global_113182 || Global_33090 || func_72() || func_58(8, -1) || func_71() || func_70() || func_60() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_73() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_58(8, -1) || func_60() || func_68() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_58(8, -1) || func_71() || func_70() || func_68() || func_67())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_73() || Global_33090 || func_72() || func_58(8, -1) || func_70() || func_69() || func_60() || Global_114135.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_73() || func_70() || Global_113182 || Global_33090 || func_72() || Global_45392 || func_58(8, -1) || func_69() || func_68() || func_60() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_73() || Global_113182 || Global_33090 || func_72() || func_58(8, -1) || func_69() || func_68() || func_71() || func_70() || func_60())
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

BOOL func_67() // Position - 0x243A (9274)
{
	return Global_101727.f_1;
}

BOOL func_68() // Position - 0x2448 (9288)
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 13);

	return false;
}

BOOL func_69() // Position - 0x246B (9323)
{
	if (Global_79800)
		return true;
	else if (Global_64302 && !Global_64308)
		return true;

	return false;
}

BOOL func_70() // Position - 0x2495 (9365)
{
	return Global_101740.f_400 > 0;
}

BOOL func_71() // Position - 0x24A6 (9382)
{
	return Global_101740.f_399 > 0;
}

BOOL func_72() // Position - 0x24B7 (9399)
{
	return Global_1575084;
}

BOOL func_73() // Position - 0x24C3 (9411)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

BOOL func_74() // Position - 0x24DF (9439)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
		return true;

	return false;
}

Entity func_75() // Position - 0x24F9 (9465)
{
	return Global_97495;
}

BOOL func_76(int iParam0) // Position - 0x2505 (9477)
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_78(6) || func_78(7))
				return true;
			else
				return func_76(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_66(4))
					return true;
			break;
	}

	return false;
}

BOOL func_77(int iParam0) // Position - 0x2577 (9591)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19);
}

BOOL func_78(int iParam0) // Position - 0x25B3 (9651)
{
	return Global_44181 == iParam0;
}

void func_79(var uParam0, int iParam1) // Position - 0x25C1 (9665)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_80() // Position - 0x25D2 (9682)
{
	return;
}

BOOL func_81() // Position - 0x25DA (9690)
{
	return true;
}

void func_82() // Position - 0x25E3 (9699)
{
	return;
}

void func_83(int iParam0) // Position - 0x25EB (9707)
{
	iLocal_93 = iParam0;
	return;
}

void func_84(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x25F7 (9719)
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33467[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	
		if (Global_33464 == 1)
			Global_33465 = 1;
	
		Global_33464 = 1;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33467[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

BOOL func_85() // Position - 0x26F7 (9975)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_86() // Position - 0x2714 (10004)
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 20);

	return false;
}

BOOL func_87(int iParam0, int iParam1) // Position - 0x2737 (10039)
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_114135.f_9089.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2781 (10113)
{
	return func_89(iParam0, Global_44181);
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x2792 (10130)
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

BOOL func_90(int iParam0, int iParam1) // Position - 0x2973 (10611)
{
	return iParam0 && iParam1 != false;
}

void func_91() // Position - 0x2982 (10626)
{
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "golf" /*GWC and Golfing Society*/, 64);
	iLocal_97 = 2;
	fLocal_115 = 7f;
	func_79(&iLocal_92, 1);

	if (func_78(6) || func_78(7))
		iLocal_101 = 0;

	if (func_40(8) == _GET_CURRENT_PLAYER_CHARACTER())
	{
		iLocal_118 = 0;
		sLocal_99 = "PLAY_GOLF" /*Press ~INPUT_CONTEXT~ to play Golf.*/;
	}
	else
	{
		iLocal_118 = func_93(ENTITY::DOES_ENTITY_EXIST(func_75()));
		sLocal_99 = "PAY_PLAY_GOLF" /*Press ~INPUT_CONTEXT~ to play Golf. The entry fee is $~1~.*/;
	}

	iLocal_103 = 68;
	fLocal_100 = SYSTEM::TO_FLOAT(func_92(iLocal_103)) + 5f;
	essLocal_95 = 63500;
	return;
}

int func_92(int iParam0) // Position - 0x29F7 (10743)
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

int func_93(BOOL bParam0) // Position - 0x2B0F (11023)
{
	if (bParam0)
		return 200;

	return 100;
}

void func_94(int iParam0, int iParam1) // Position - 0x2B26 (11046)
{
	func_95(iParam0, iParam1);
	return;
}

void func_95(var uParam0, int iParam1) // Position - 0x2B36 (11062)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_96(BOOL bParam0) // Position - 0x2B4B (11083)
{
	if (bParam0)
		if (iLocal_103 != 263)
			func_84(iLocal_103, 0, false);

	func_43(&iLocal_94);

	if (func_90(iLocal_92, 2048))
	{
		if (func_99(sLocal_99, iLocal_118))
		{
			func_94(&iLocal_92, 2048);
			HUD::CLEAR_HELP(false);
		}
	}

	if (func_90(iLocal_92, 2))
	{
		func_4();
		func_94(&iLocal_92, 2);
		func_6(&iLocal_96);
	}

	iLocal_96 = -1;
	func_97();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_97() // Position - 0x2BB9 (11193)
{
	func_94(&iLocal_92, 4);
	func_98();

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);

	if (!MISC::IS_STRING_NULL(&uLocal_67))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_67) != 0)
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);

	return;
}

void func_98() // Position - 0x2BF6 (11254)
{
	return;
}

BOOL func_99(char* sParam0, int iParam1) // Position - 0x2BFE (11262)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


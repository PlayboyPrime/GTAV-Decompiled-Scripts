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
	eCharacter echLocal_116 = CHAR_MICHAEL;
	int iLocal_117 = 0;
	Object obLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
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
	BOOL flag;
	float groundZ;
	BOOL flag2;
	BOOL flag3;
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
	echLocal_116 = -1;
	uLocal_88 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_88 = { uLocal_88 };
	uLocal_84 = uLocal_84;
	uLocal_67 = { uLocal_67 };
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_91(true);

	pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_89(&Global_112783, 0);
	func_87();

	if (func_86(iLocal_92, 1))
		iLocal_98 = 10;
	else
		iLocal_98 = 9;

	while (!Global_39520)
	{
		SYSTEM::WAIT(0);
	}

	if (!func_86(iLocal_92, 8))
		if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
			if (func_83(0, iLocal_97))
				func_91(false);
			else
				func_91(true);

	if (iLocal_97 != -1)
		if (!func_83(0, iLocal_97))
			func_91(true);

	if (func_86(iLocal_92, 8388608))
		func_91(true);

	if (func_86(iLocal_92, 524288) && func_82() && !func_81())
		func_91(true);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_86(iLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_80(iLocal_103, true, false);
			iLocal_103 = 263;
		}
	
		func_79(10);
	}

	while (true)
	{
		if (!func_86(iLocal_92, 268435456))
		{
			groundZ = 0f;
		
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(uScriptParam_0.f_1[0 /*3*/], &groundZ, false, false))
			{
				if (groundZ != 0f)
				{
					uScriptParam_0.f_1[0 /*3*/].f_2 = groundZ;
					func_78(&iLocal_92, 268435456);
				}
			}
		}
	
		pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (func_86(iLocal_92, 1048576))
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
				func_91(true);
	
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
					if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) || func_86(iLocal_92, 16) && !func_86(iLocal_92, 524288))
					{
						iLocal_96 = -1;
						func_77();
						func_79(1);
					}
					else
					{
						if (fLocal_108 > fLocal_100 * fLocal_100)
						{
							if (iLocal_103 != 263)
							{
								func_80(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						
							func_79(10);
						}
					
						uLocal_85.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
					}
					break;
			
				case 1:
					if (func_76())
					{
						iLocal_101 = iLocal_101;
						func_79(3);
					}
					else
					{
						func_77();
					}
					break;
			
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_91(true);
						return;
					}
				
					if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
					{
						if (!func_86(iLocal_92, 8))
						{
							flag2 = true;
						
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101688.f_3), &uLocal_67))
							{
								uLocal_67 = { uLocal_51 };
								flag2 = false;
							}
						
							if (flag2)
							{
								func_91(false);
								break;
							}
						}
					}
				
					if (!func_86(iLocal_92, 4))
					{
						func_75();
						func_78(&iLocal_92, 4);
					}
				
					if (fLocal_108 > fLocal_100 * fLocal_100 && !Global_101722)
					{
						if (iLocal_103 != 263)
						{
							if (func_74(6) && !func_73(iLocal_103))
							{
							}
							else
							{
								func_80(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						}
					
						func_79(10);
					}
					else
					{
						uLocal_67 = { uLocal_51 };
						flag3 = !func_86(iLocal_92, 64);
						func_89(&iLocal_92, 128);
					
						if (!func_72(3) && !Global_101722)
						{
							if (func_86(iLocal_92, 2097152))
							{
								if (!func_86(iLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_71()) && !Global_101722)
								{
									func_79(10);
									break;
								}
							}
						}
					
						if (func_86(iLocal_92, 524288) && func_82() && !func_81())
							func_91(true);
					
						if (func_70())
							func_91(true);
					
						if (!func_61(6) || Global_113182 || func_60())
							flag3 = false;
					
						if (func_86(iLocal_92, 1))
						{
							if (!func_59())
							{
								func_57(&iLocal_92, 128);
								flag3 = false;
							}
						}
					
						if (func_56(true))
							flag3 = false;
					
						if (Global_79539)
							flag3 = false;
					
						if (func_55())
							flag3 = false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							flag3 = false;
					
						if (func_54() || func_53(8, -1))
							flag3 = false;
					
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (func_52(0) || func_51())
							flag3 = false;
					
						if (flag3)
						{
							if (!func_45(echLocal_116))
							{
								func_57(&iLocal_92, 128);
								flag3 = false;
							}
						
							if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
								flag3 = false;
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								flag3 = false;
						
							if (flag3)
							{
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
							
								if (func_44(uLocal_84))
								{
									if (iLocal_94 == -1)
									{
										_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_57(&iLocal_92, 2048);
									}
									else if (!func_86(iLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_89(&iLocal_92, 2048);
									}
								
									if (func_40(iLocal_94, true))
									{
										sLocal_99 = sLocal_99;
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_89(&iLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&uLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
										func_79(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
									func_89(&iLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&uLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
									func_79(5);
								}
							}
						}
					
						if (!flag3)
						{
							if (iLocal_94 != -1)
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
								func_89(&iLocal_92, 2048);
								HUD::CLEAR_HELP(false);
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
							_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
					
						num = 2;
						flag = false;
					
						if (func_86(iLocal_92, 1))
						{
							if (func_74(6) || func_74(7))
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
							func_89(&iLocal_92, 4);
							func_25();
							func_57(&iLocal_92, 2);
							func_79(6);
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
							func_79(10);
						}
					}
					else
					{
						func_16();
					}
					break;
			
				case 6:
					if (!func_86(iLocal_92, 256))
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
						else if (CAM::IS_SCREEN_FADED_OUT())
							func_57(&iLocal_92, 256);
				
					if (func_86(Global_112783, 262144))
					{
						func_89(&Global_112783, 262144);
						func_15();
					}
				
					if (func_86(iLocal_92, 2097152))
						if (!func_72(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
							func_79(10);
				
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_11(&uLocal_105) * 1000f), iLocal_97, false);
						func_10(&uLocal_105);
						func_89(&iLocal_92, 256);
						func_7();
					
						if (flag)
						{
							func_89(&iLocal_92, 2);
						}
						else if (func_86(iLocal_92, 2))
						{
							if (func_86(Global_112783, 0))
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_89(&iLocal_92, 2);
							}
							else
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_89(&iLocal_92, 2);
							}
						}
					
						func_79(0);
					
						if (iLocal_97 != -1)
						{
							if (func_86(Global_112783, 0))
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
						func_89(&Global_112783, 0);
					
						if (func_86(iLocal_92, 16777216))
							func_91(true);
					
						if (iLocal_97 != -1)
							if (Global_114135.f_9089)
								if (!func_83(0, iLocal_97))
									func_91(true);
					}
				
					func_3();
					break;
			
				case 8:
					func_79(0);
					break;
			
				case 10:
					func_91(true);
					break;
			
				case 9:
					if (fLocal_108 > fLocal_100 * fLocal_100)
					{
						if (iLocal_103 != 263)
						{
							func_80(iLocal_103, true, false);
							iLocal_103 = 263;
						}
					
						func_79(10);
					}
					break;
			
				case 7:
					func_2();
				
					if (iLocal_103 != 263)
						func_80(iLocal_103, false, false);
				
					if (iLocal_94 != -1)
						_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
						if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
							HUD::CLEAR_HELP(true);
				
					func_79(4);
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
									if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) && func_83(0, iLocal_97))
									{
										func_87();
									
										if (iLocal_103 != 263)
											func_80(iLocal_103, true, false);
									
										func_79(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > fLocal_100 * fLocal_100)
								{
									if (iLocal_103 != 263)
									{
										func_80(iLocal_103, true, false);
										iLocal_103 = 263;
									}
								
									func_79(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > (80f + 5f) * (80f + 5f))
								{
									func_87();
								
									if (iLocal_103 != 263)
										func_80(iLocal_103, true, false);
								
									func_79(0);
								}
							}
						}
						else
						{
							func_80(iLocal_103, true, false);
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xA8F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2() // Position - 0xAA2
{
	return;
}

void func_3() // Position - 0xAAA
{
	return;
}

void func_4() // Position - 0xAB2
{
	return;
}

void func_5(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xABA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98733))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98733, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_95840);
	TEXT_LABEL_ASSIGN_STRING(&Global_98733, "", 64);
	return;
}

void func_6(var uParam0) // Position - 0xAFE
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

void func_7() // Position - 0xB3B
{
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM() || MISC::IS_PC_VERSION())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
	}

	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0xB87
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0xB9D
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_10(var uParam0) // Position - 0xBB3
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_11(int* piParam0) // Position - 0xBC9
{
	if (func_14(piParam0))
		if (func_13(piParam0))
			return piParam0->f_2;
		else
			return func_12(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_12(BOOL bParam0) // Position - 0xC05
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

BOOL func_13(int* piParam0) // Position - 0xC5D
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_14(int* piParam0) // Position - 0xC6A
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_15() // Position - 0xC77
{
	return 1;
}

void func_16() // Position - 0xC80
{
	return;
}

void func_17(char* sParam0, int iParam1, int iParam2) // Position - 0xC88
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98733))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98733, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_98733, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98733, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xCC9
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

char* func_19(int iParam0) // Position - 0xCF1
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

void func_20(int iParam0) // Position - 0xE2F
{
	int num;
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		num = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM() || MISC::IS_PC_VERSION())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
		TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
	}

	return;
}

void func_21(int* piParam0) // Position - 0xE90
{
	if (!func_14(piParam0))
		func_24(piParam0);
	else
		func_22(piParam0);

	return;
}

void func_22(int* piParam0) // Position - 0xEB1
{
	func_23(piParam0, 0f);
	return;
}

void func_23(int* piParam0, float fParam1) // Position - 0xEC0
{
	piParam0->f_1 = func_12(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_24(int* piParam0) // Position - 0xEEB
{
	if (!func_14(piParam0))
		func_22(piParam0);

	return;
}

void func_25() // Position - 0xF03
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(obLocal_118.f_1);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_118))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_118);

	return;
}

void func_26(Ped pedParam0) // Position - 0xF22
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

void func_27(int iParam0) // Position - 0xF7B
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

int func_28(Ped pedParam0) // Position - 0xFFE
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

void func_29(int iParam0, int iParam1, int iParam2) // Position - 0x102F
{
	func_30(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1044
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

int func_31() // Position - 0x10C6
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

BOOL func_32(int iParam0, int iParam1, int iParam2) // Position - 0x10F7
{
	if (func_33(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_33(int iParam0, int iParam1, int iParam2) // Position - 0x1112
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

int func_34(Ped pedParam0) // Position - 0x115E
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

void func_35() // Position - 0x11A7
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

int func_36(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1224
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

void func_37(var uParam0, int iParam1) // Position - 0x135B
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

BOOL func_38(int iParam0) // Position - 0x13AA
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_39() // Position - 0x13CC
{
	if (iLocal_117 == 1)
	{
		if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
			PED::SET_PED_MODEL_IS_SUPPRESSED(307287994, true);
		}
	}

	return;
}

BOOL func_40(int iParam0, BOOL bParam1) // Position - 0x13F6
{
	int num;

	num = func_41(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_52(0))
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

int func_41(int iParam0) // Position - 0x14AE
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

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x14E9
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_41(*uParam0);

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

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x1540
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1974937116) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			_CONTEXT_REMOVE_HELP_TEXT(uParam0);
	
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

BOOL func_44(var uParam0) // Position - 0x166B
{
	return true;
}

BOOL func_45(eCharacter echParam0) // Position - 0x1674
{
	func_46();
	return echParam0 == Global_114135.f_2367.f_539.f_4321;
}

void func_46() // Position - 0x1690
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_47(character) && !func_74(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_47(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_47(eCharacter echParam0) // Position - 0x178D
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1799
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x17D6
{
	if (func_47(character))
		return func_50(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_50(eCharacter echParam0) // Position - 0x17FB
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_51() // Position - 0x180A
{
	return Global_76640;
}

BOOL func_52(int iParam0) // Position - 0x1816
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

BOOL func_53(int iParam0, int iParam1) // Position - 0x186D
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

BOOL func_54() // Position - 0x18A5
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

BOOL func_55() // Position - 0x18BA
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_56(BOOL bParam0) // Position - 0x18D4
{
	if (bParam0)
		return Global_23831.f_4 && Global_23831.f_104 == 4;

	return Global_23831.f_4;
}

void func_57(var uParam0, int iParam1) // Position - 0x18FD
{
	func_58(uParam0, iParam1);
	return;
}

void func_58(var uParam0, int iParam1) // Position - 0x190D
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_59() // Position - 0x191E
{
	return true;
}

BOOL func_60() // Position - 0x1927
{
	int weaponHash;
	BOOL flag;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);

	if (weaponHash == 0 || weaponHash == -1569615261 || weaponHash == -1833087301 || weaponHash == -72657034)
		flag = false;
	else
		flag = true;

	flag;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());

	return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_DETONATE) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
}

BOOL func_61(int iParam0) // Position - 0x1A31
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_47(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_113182 || Global_33090 || func_67() || func_53(8, -1) || func_66() || func_65() || func_64() || func_55() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_68() || Global_33090 || func_67() || func_53(8, -1) || func_64() || func_66() || func_65() || func_55() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_113182 || Global_33090 || func_67() || func_53(8, -1) || func_64() || func_66() || func_65() || func_55() || Global_114135.f_7692.f_919[character] == 5 || Global_44728 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_113182 || Global_33090 || func_67() || func_53(8, -1) || func_66() || func_65() || func_55() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_68() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_53(8, -1) || func_55() || func_63() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_53(8, -1) || func_66() || func_65() || func_63() || func_62())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_68() || Global_33090 || func_67() || func_53(8, -1) || func_65() || func_64() || func_55() || Global_114135.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_68() || func_65() || Global_113182 || Global_33090 || func_67() || Global_45392 || func_53(8, -1) || func_64() || func_63() || func_55() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_68() || Global_113182 || Global_33090 || func_67() || func_53(8, -1) || func_64() || func_63() || func_66() || func_65() || func_55())
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

BOOL func_62() // Position - 0x214E
{
	return Global_101727.f_1;
}

BOOL func_63() // Position - 0x215C
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 13);

	return false;
}

BOOL func_64() // Position - 0x217F
{
	if (Global_79800)
		return true;
	else if (Global_64302 && !Global_64308)
		return true;

	return false;
}

BOOL func_65() // Position - 0x21A9
{
	return Global_101740.f_400 > 0;
}

BOOL func_66() // Position - 0x21BA
{
	return Global_101740.f_399 > 0;
}

BOOL func_67() // Position - 0x21CB
{
	return Global_1575084;
}

BOOL func_68() // Position - 0x21D7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x21F3
{
	func_46();
	return Global_114135.f_2367.f_539.f_4321;
}

BOOL func_70() // Position - 0x220C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1196127390) > 0)
		return true;

	return false;
}

Entity func_71() // Position - 0x2226
{
	return Global_97495;
}

BOOL func_72(int iParam0) // Position - 0x2232
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_74(6) || func_74(7))
				return true;
			else
				return func_72(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_61(4))
					return true;
			break;
	}

	return false;
}

BOOL func_73(int iParam0) // Position - 0x22A4
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19);
}

BOOL func_74(int iParam0) // Position - 0x22E0
{
	return Global_44181 == iParam0;
}

void func_75() // Position - 0x22EE
{
	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_118))
	{
		obLocal_118 = OBJECT::CREATE_OBJECT(obLocal_118.f_1, obLocal_118.f_2, true, true, false);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(obLocal_118, obLocal_118.f_2, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_118, obLocal_118.f_5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_118, true);
	}

	return;
}

BOOL func_76() // Position - 0x2337
{
	if (!STREAMING::IS_MODEL_VALID(obLocal_118.f_1))
		return false;

	return STREAMING::HAS_MODEL_LOADED(obLocal_118.f_1);
}

void func_77() // Position - 0x2357
{
	if (!STREAMING::IS_MODEL_VALID(obLocal_118.f_1))
		return;

	STREAMING::REQUEST_MODEL(obLocal_118.f_1);
	return;
}

void func_78(var uParam0, int iParam1) // Position - 0x2376
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_79(int iParam0) // Position - 0x2387
{
	iLocal_93 = iParam0;
	return;
}

void func_80(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2393
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

BOOL func_81() // Position - 0x2493
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_82() // Position - 0x24B0
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 20);

	return false;
}

BOOL func_83(int iParam0, int iParam1) // Position - 0x24D3
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_114135.f_9089.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x251D
{
	return func_85(iParam0, Global_44181);
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x252E
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

BOOL func_86(int iParam0, int iParam1) // Position - 0x270F
{
	return iParam0 && iParam1 != false;
}

void func_87() // Position - 0x271E
{
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "Yoga", 64);
	sLocal_99 = "PLAY_YOGA" /*Press ~INPUT_CONTEXT~ to do Yoga.*/;
	iLocal_97 = 18;
	fLocal_115 = 2.5f;
	fLocal_100 = 20f;
	essLocal_95 = 63500;
	iLocal_117 = func_88();

	if (iLocal_117 == 0)
	{
		iLocal_103 = 110;
		obLocal_118.f_2 = { -791.0036f, 186.3552f, 71.8295f };
		obLocal_118.f_5 = { 0f, 0f, -87.1403f };
		obLocal_118.f_1 = -1978741854;
	}
	else if (iLocal_117 == 1)
	{
		iLocal_103 = 111;
		obLocal_118.f_2 = { 2861.47f, 5945.9f, 357.06f };
		obLocal_118.f_5 = { 0f, -0.5f, 70f };
		obLocal_118.f_1 = -1978741854;
	}

	echLocal_116 = CHAR_MICHAEL;
	return;
}

int func_88() // Position - 0x27C7
{
	Vector3 entityCoords;
	var unk3;
	var unk10;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true) };
		unk3 = 2;
		unk3[0 /*3*/] = { -790.906f, 186.293f, 71.835f };
		unk3[1 /*3*/] = { 2862.15f, 5945.49f, 357.11f };
		unk10 = 2;
		unk10[0] = SYSTEM::VDIST2(entityCoords, unk3[0 /*3*/]);
		unk10[1] = SYSTEM::VDIST2(entityCoords, unk3[1 /*3*/]);
	
		if (unk10[0] < unk10[1])
			return 0;
		else
			return 1;
	}

	return 2;
}

void func_89(int iParam0, int iParam1) // Position - 0x2863
{
	func_90(iParam0, iParam1);
	return;
}

void func_90(var uParam0, int iParam1) // Position - 0x2873
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_91(BOOL bParam0) // Position - 0x2888
{
	if (bParam0)
		if (iLocal_103 != 263)
			func_80(iLocal_103, 0, false);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);

	if (func_86(iLocal_92, 2))
	{
		func_4();
		func_89(&iLocal_92, 2);
		func_6(&iLocal_96);
	}

	iLocal_96 = -1;
	func_92();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_92() // Position - 0x28D1
{
	func_89(&iLocal_92, 4);
	func_93();

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);

	if (!MISC::IS_STRING_NULL(&uLocal_67))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_67) != 0)
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);

	return;
}

void func_93() // Position - 0x290E
{
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(307287994, false);
	}

	return;
}


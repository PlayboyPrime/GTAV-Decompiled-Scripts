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
	int iLocal_46 = 0;
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
	Hash hLocal_116 = 0;
	float fLocal_117 = 0f;
	Entity eLocal_118 = 0;
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
	BOOL flag4;
	Vehicle vehiclePedIsEntering;
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
	fLocal_117 = 0f;
	uLocal_88 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_88 = { uLocal_88 };
	veLocal_84 = veLocal_84;
	uLocal_67 = { uLocal_67 };
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_115(true);

	pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_113(&Global_112810, 0);
	func_112();

	if (func_111(iLocal_92, 1))
		iLocal_98 = 10;
	else
		iLocal_98 = 9;

	while (!Global_39538)
	{
		BUILTIN::WAIT(0);
	}

	if (!func_111(iLocal_92, 8))
		if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
			if (func_108(0, iLocal_97))
				func_115(false);
			else
				func_115(true);

	if (iLocal_97 != -1)
		if (!func_108(0, iLocal_97))
			func_115(true);

	if (func_111(iLocal_92, 8388608))
		func_115(true);

	if (func_111(iLocal_92, 524288) && func_107() && !func_106())
		func_115(true);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_111(iLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_105(iLocal_103, true, false);
			iLocal_103 = 263;
		}
	
		func_104(10);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_84))
		if (func_103() && !Global_113209)
			func_102(1);
		else
			Global_113209;

	while (true)
	{
		if (!func_101() && !func_100() && !func_99())
			func_115(true);
	
		pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (func_111(iLocal_92, 1048576))
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
				func_115(true);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83) && !ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
		{
			uLocal_85 = { ENTITY::GET_ENTITY_COORDS(pedLocal_83, true) };
			fLocal_91 = BUILTIN::VDIST2(uLocal_85, uScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			uLocal_109 = { uLocal_85 };
			uLocal_112 = { uScriptParam_0.f_1[0 /*3*/] };
			uLocal_109.f_2 = 0f;
			uLocal_112.f_2 = 0f;
			fLocal_108 = BUILTIN::VDIST2(uLocal_109, uLocal_112);
		
			switch (iLocal_93)
			{
				case 0:
					if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) || func_111(iLocal_92, 16) && !func_111(iLocal_92, 524288))
					{
						STREAMING::REQUEST_MODEL(hLocal_116);
						iLocal_96 = -1;
						func_98();
						func_104(1);
					}
					else
					{
						if (fLocal_108 > fLocal_100 * fLocal_100)
						{
							if (iLocal_103 != 263)
							{
								func_105(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						
							func_104(10);
						}
					
						uLocal_85.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
					}
					break;
			
				case 1:
					if (func_97() && STREAMING::HAS_MODEL_LOADED(hLocal_116))
					{
						iLocal_101 = iLocal_101;
						func_104(3);
					}
					else
					{
						func_98();
					}
					break;
			
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_115(true);
						return;
					}
				
					if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
					{
						if (!func_111(iLocal_92, 8))
						{
							flag2 = true;
						
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101713.f_3), &uLocal_67))
							{
								uLocal_67 = { uLocal_51 };
								flag2 = false;
							}
						
							if (flag2)
							{
								func_115(false);
								break;
							}
						}
					}
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_84) && fLocal_91 > 10f * 10f && !CAM::IS_SPHERE_VISIBLE(uScriptParam_0.f_1[0 /*3*/], 5f) || fLocal_91 > 80f * 80f || !ENTITY::DOES_ENTITY_EXIST(veLocal_84) && CAM::IS_SCREEN_FADED_OUT())
					{
						MISC::CLEAR_AREA_OF_VEHICLES(uScriptParam_0.f_1[0 /*3*/], 8f, false, false, false, false, false, false, 0);
						veLocal_84 = VEHICLE::CREATE_VEHICLE(hLocal_116, uScriptParam_0.f_1[0 /*3*/], fLocal_117, true, true, false);
						func_96();
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_84, true);
						flag3 = false;
					
						if (func_95() && !flag3)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_84, 2);
							func_93(&iLocal_92, 32);
						}
					}
					else if (func_111(iLocal_92, 32))
					{
						if (!func_95())
						{
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_84, false))
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_84, 1);
						
							func_113(&iLocal_92, 32);
						}
					}
				
					if (!func_111(iLocal_92, 4))
					{
						func_92();
						func_91(&iLocal_92, 4);
					}
				
					if (fLocal_108 > fLocal_100 * fLocal_100 && !Global_101747)
					{
						if (iLocal_103 != 263)
						{
							if (func_90(6) && !func_89(iLocal_103))
							{
							}
							else
							{
								func_105(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						}
					
						func_104(10);
					}
					else
					{
						uLocal_67 = { uLocal_51 };
						flag4 = !func_111(iLocal_92, 64);
						func_113(&iLocal_92, 128);
					
						if (!func_88(3) && !Global_101747)
						{
							if (func_111(iLocal_92, 2097152))
							{
								if (!func_111(iLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_87()) && !Global_101747)
								{
									func_104(10);
									break;
								}
							}
						}
					
						if (func_111(iLocal_92, 524288) && func_107() && !func_106())
							func_115(true);
					
						if (func_86())
							func_115(true);
					
						if (!func_78(6) || Global_113209 || func_77())
							flag4 = false;
					
						if (func_111(iLocal_92, 1))
						{
							if (!func_76())
							{
								func_93(&iLocal_92, 128);
								flag4 = false;
							}
						}
					
						if (func_75(true))
							flag4 = false;
					
						if (Global_79564)
							flag4 = false;
					
						if (func_74())
							flag4 = false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							flag4 = false;
					
						if (func_73() || func_72(8, -1))
							flag4 = false;
					
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
							flag4 = false;
					
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
							flag4 = false;
					
						if (func_71(0) || func_70())
							flag4 = false;
					
						if (flag4)
						{
							if (ENTITY::DOES_ENTITY_EXIST(veLocal_84))
								if (!ENTITY::IS_ENTITY_AT_COORD(veLocal_84, uLocal_88, fLocal_115, fLocal_115, fLocal_115, false, true, 0))
									func_104(7);
						
							if (ENTITY::IS_ENTITY_DEAD(veLocal_84, false))
							{
								func_93(&iLocal_92, 128);
								flag4 = false;
							}
							else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								func_93(&iLocal_92, 128);
								flag4 = false;
							}
							else
							{
								vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
							
								if (flag4)
								{
									if (veLocal_84 == vehiclePedIsEntering)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], 4f, 4f, 2f, false, true, 0))
										{
											func_93(&iLocal_92, 128);
											flag4 = false;
										}
									}
									else
									{
										func_93(&iLocal_92, 128);
										flag4 = false;
									}
								}
							}
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								flag4 = false;
						
							if (flag4)
							{
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
							
								if (func_69(veLocal_84))
								{
									if (iLocal_94 == -1)
									{
										_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_93(&iLocal_92, 2048);
									}
									else if (!func_111(iLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_67(&iLocal_94);
										func_113(&iLocal_92, 2048);
									}
								
									if (func_65(iLocal_94, true))
									{
										sLocal_99 = sLocal_99;
										func_67(&iLocal_94);
										func_113(&iLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&uLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
										func_104(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_67(&iLocal_94);
									func_113(&iLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&uLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
									func_104(5);
								}
							}
						}
					
						if (!flag4)
						{
							if (iLocal_94 != -1)
							{
								func_67(&iLocal_94);
								func_113(&iLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
				
					func_57();
					break;
			
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
				
					if (SCRIPT::HAS_SCRIPT_LOADED(&uLocal_67))
					{
						if (iLocal_94 != -1)
							func_67(&iLocal_94);
					
						num = 2;
						flag = false;
					
						if (func_111(iLocal_92, 1))
						{
							if (func_90(6) || func_90(7))
							{
								num = 1;
								flag = true;
							}
						}
					
						if (num != 1)
							num = func_54(&iLocal_96, 6, iLocal_98, false, 0);
					
						if (num == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_84, false))
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_84);
						
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						
							func_53();
						
							if (Global_45410)
								func_44(PLAYER::PLAYER_PED_ID());
						
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
							iLocal_50 = func_27();
							func_93(&iLocal_92, 2);
							func_104(6);
							func_23(&uLocal_105);
						
							if (iLocal_97 != -1)
							{
								func_22(iLocal_97);
								func_19(func_21(iLocal_97), 0, 0);
							}
						}
						else if (num == 2)
						{
							func_18();
						}
						else if (num == 0)
						{
							func_104(10);
						}
					}
					else
					{
						func_18();
					}
					break;
			
				case 6:
					if (!func_111(iLocal_92, 256))
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
						else if (CAM::IS_SCREEN_FADED_OUT())
							func_93(&iLocal_92, 256);
				
					if (func_111(Global_112810, 262144))
					{
						func_113(&Global_112810, 262144);
						func_17();
					}
				
					if (func_111(iLocal_92, 2097152))
						if (!func_88(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
							func_104(10);
				
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(BUILTIN::ROUND(func_13(&uLocal_105) * 1000f), iLocal_97, false);
						func_12(&uLocal_105);
						func_113(&iLocal_92, 256);
						func_9();
					
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_84))
						{
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_84, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_84);
								veLocal_84 = 0;
							}
						}
					
						if (flag)
						{
							func_113(&iLocal_92, 2);
						}
						else if (func_111(iLocal_92, 2))
						{
							if (func_111(Global_112810, 0))
							{
								func_8(&iLocal_96);
								iLocal_96 = -1;
								func_113(&iLocal_92, 2);
							}
							else
							{
								func_8(&iLocal_96);
								iLocal_96 = -1;
								func_113(&iLocal_92, 2);
							}
						}
					
						func_104(0);
					
						if (iLocal_97 != -1)
						{
							if (func_111(Global_112810, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_97), 0, Global_101750, 0);
								func_7(func_21(iLocal_97), 0, Global_101750, true, false);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_97), 0, Global_101750, 0);
								func_7(func_21(iLocal_97), 0, Global_101750, false, false);
							}
						}
					
						func_4();
						func_113(&Global_112810, 0);
					
						if (func_111(iLocal_92, 16777216))
							func_115(true);
					
						if (iLocal_97 != -1)
							if (Global_114162.f_9089)
								if (!func_108(0, iLocal_97))
									func_115(true);
					}
				
					func_3();
					break;
			
				case 8:
					func_104(0);
					break;
			
				case 10:
					func_115(true);
					break;
			
				case 9:
					if (fLocal_108 > fLocal_100 * fLocal_100)
					{
						if (iLocal_103 != 263)
						{
							func_105(iLocal_103, true, false);
							iLocal_103 = 263;
						}
					
						func_104(10);
					}
					break;
			
				case 7:
					func_2();
				
					if (iLocal_103 != 263)
						func_105(iLocal_103, false, false);
				
					if (iLocal_94 != -1)
						func_67(&iLocal_94);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
						if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
							HUD::CLEAR_HELP(true);
				
					func_104(4);
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
									if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) && func_108(0, iLocal_97))
									{
										func_112();
									
										if (iLocal_103 != 263)
											func_105(iLocal_103, true, false);
									
										func_104(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > fLocal_100 * fLocal_100)
								{
									if (iLocal_103 != 263)
									{
										func_105(iLocal_103, true, false);
										iLocal_103 = 263;
									}
								
									func_104(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > (80f + 5f) * (80f + 5f))
								{
									func_112();
								
									if (iLocal_103 != 263)
										func_105(iLocal_103, true, false);
								
									func_104(0);
								}
							}
						}
						else
						{
							func_105(iLocal_103, true, false);
						}
					}
					else
					{
						iLocal_102 = iLocal_102 + 1;
					}
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xC01 (3073)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2() // Position - 0xC14 (3092)
{
	return;
}

void func_3() // Position - 0xC1C (3100)
{
	return;
}

void func_4() // Position - 0xC24 (3108)
{
	Cam camFrom;
	Cam camTo;

	camFrom = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1697.1832f, 3279.2263f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, true, 2);
	camTo = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1697.7545f, 3280.4233f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, false, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(camTo, camFrom, 3650, 1, 1);
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			veLocal_84 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_84, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(veLocal_84, true);
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}

	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_84, true, true);
	func_5(&eLocal_118);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_118))
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&eLocal_118);

	while (CAM::IS_CAM_INTERPOLATING(camFrom) || CAM::IS_CAM_INTERPOLATING(camTo))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		BUILTIN::WAIT(0);
	}

	CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);

	if (CAM::DOES_CAM_EXIST(camFrom))
		CAM::DESTROY_CAM(camFrom, false);

	if (CAM::DOES_CAM_EXIST(camTo))
		CAM::DESTROY_CAM(camTo, false);

	return;
}

void func_5(var uParam0) // Position - 0xD5E (3422)
{
	Vehicle vehicle;

	vehicle = *uParam0;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		if (!func_6(vehicle))
		{
			ENTITY::SET_ENTITY_COLLISION(vehicle, true, false);
			ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
		}
	}

	return;
}

BOOL func_6(Vehicle veParam0) // Position - 0xD95 (3477)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;
	else
		return true;

	return false;
}

void func_7(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDD8 (3544)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98758))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98758, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_95865);
	TEXT_LABEL_ASSIGN_STRING(&Global_98758, "", 64);
	return;
}

void func_8(var uParam0) // Position - 0xE1C (3612)
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

void func_9() // Position - 0xE59 (3673)
{
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || func_11())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_10() || MISC::IS_PC_VERSION())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
	}

	return;
}

BOOL func_10() // Position - 0xEA5 (3749)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_11() // Position - 0xEBB (3771)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_12(var uParam0) // Position - 0xED1 (3793)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_13(int* piParam0) // Position - 0xEE7 (3815)
{
	if (func_16(piParam0))
		if (func_15(piParam0))
			return piParam0->f_2;
		else
			return func_14(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_14(BOOL bParam0) // Position - 0xF23 (3875)
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

BOOL func_15(int* piParam0) // Position - 0xF7B (3963)
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_16(int* piParam0) // Position - 0xF88 (3976)
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_17() // Position - 0xF95 (3989)
{
	return 1;
}

void func_18() // Position - 0xF9E (3998)
{
	return;
}

void func_19(char* sParam0, int iParam1, int iParam2) // Position - 0xFA6 (4006)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98758))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98758, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_98758, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98758, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_20(false));
	return;
}

BOOL func_20(BOOL bParam0) // Position - 0xFE7 (4071)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

char* func_21(int iParam0) // Position - 0x100F (4111)
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

void func_22(int iParam0) // Position - 0x114D (4429)
{
	int num;
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || func_11())
	{
		num = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_10() || MISC::IS_PC_VERSION())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
		TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
	}

	return;
}

void func_23(int* piParam0) // Position - 0x11AE (4526)
{
	if (!func_16(piParam0))
		func_26(piParam0);
	else
		func_24(piParam0);

	return;
}

void func_24(int* piParam0) // Position - 0x11CF (4559)
{
	func_25(piParam0, 0f);
	return;
}

void func_25(int* piParam0, float fParam1) // Position - 0x11DE (4574)
{
	piParam0->f_1 = func_14(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_26(int* piParam0) // Position - 0x1209 (4617)
{
	if (!func_16(piParam0))
		func_24(piParam0);

	return;
}

int func_27() // Position - 0x1221 (4641)
{
	Vehicle playersLastVehicle;
	Vehicle closestVehicle;
	int num;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
		HUD::CLEAR_HELP(true);

	if (STREAMING::IS_IPL_ACTIVE("airfield"))
		STREAMING::REMOVE_IPL("airfield");

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle) && playersLastVehicle != veLocal_84 && !ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false) && ENTITY::GET_ENTITY_MODEL(playersLastVehicle) != joaat("stunt") && VEHICLE::IS_VEHICLE_SEAT_FREE(playersLastVehicle, -1, false) && ENTITY::GET_ENTITY_MODEL(playersLastVehicle) != joaat("cargobob"))
	{
		closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(1694.7365f, 3276.4832f, 41.2979f, 5f, joaat("stunt"), 16384);
	
		if (ENTITY::DOES_ENTITY_EXIST(closestVehicle))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(closestVehicle, true, false);
	
		func_29(1689.662f, 3274.546f, 40.009182f, 1696.669f, 3271.2651f, 42.80674f, 7.25f, 1673.4283f, 3267.02f, 40.0898f, 108.5236f, true, true, true, false, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(closestVehicle))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&closestVehicle);
	
		if (func_28(&eLocal_118))
		{
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		playersLastVehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(playersLastVehicle, 1);

	num = BUILTIN::START_NEW_SCRIPT(&uLocal_51, essLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_51);
	return num;
}

BOOL func_28(var uParam0) // Position - 0x1370 (4976)
{
	Vehicle playersLastVehicle;

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!func_6(playersLastVehicle))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(playersLastVehicle, PLAYER::PLAYER_PED_ID(), uLocal_43, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(playersLastVehicle);
				ENTITY::SET_ENTITY_COLLISION(playersLastVehicle, false, false);
				ENTITY::SET_ENTITY_VISIBLE(playersLastVehicle, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(playersLastVehicle, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
				*uParam0 = playersLastVehicle;
				return true;
			}
		}
	}

	return false;
}

void func_29(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0x13E2 (5090)
{
	func_30(fParam0, fParam3, fParam6, fParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
	return;
}

void func_30(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, float fParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x140B (5131)
{
	Vehicle playersLastVehicle;
	BOOL flag;
	BOOL flag2;
	int num;
	var out1;
	float out2;
	var entityCoords;
	Hash entityModel;
	Ped pedInVehicleSeat;
	int vehicleModelNumberOfSeats;

	if (bParam15)
		bParam15 = false;

	flag2 = true;
	num = 0;
	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
			num = 1;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		{
			if (bParam18)
				func_43(playersLastVehicle);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, vParam0, vParam3, fParam6, false, true, 0))
			{
				flag = true;
			}
			else
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true) };
			
				if (entityCoords.f_2 > vParam0.f_2 && entityCoords.f_2 < vParam3.f_2 || entityCoords.f_2 > vParam3.f_2 && entityCoords.f_2 < vParam0.f_2)
					if (func_40(playersLastVehicle, vParam0, vParam3, fParam6))
						flag = true;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(playersLastVehicle, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS((vParam0 + vParam3) / { 2f, 2f, 2f }, ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true) < 20f)
						{
							flag = true;
							flag2 = false;
						}
					}
				}
			}
		
			if (bParam16)
				if (func_32(playersLastVehicle, _GET_CURRENT_PLAYER_CHARACTER(), true))
					flag = false;
		
			if (flag)
			{
				if (!func_31(fParam11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);
						VEHICLE::GET_VEHICLE_SIZE(playersLastVehicle, &out1, &out2);
					
						if (VEHICLE::IS_THIS_MODEL_A_HELI(entityModel))
						{
							fParam11 = fParam11 + 3f;
							fParam11.f_1 = fParam11.f_1 + 3f;
						}
					
						if (entityModel == joaat("zentorno") || entityModel == joaat("btype") || entityModel == joaat("dubsta3") || entityModel == joaat("monster"))
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (entityModel == joaat("t20") || entityModel == joaat("virgo"))
							fParam11 = { fParam11 * { 1.2f, 1.2f, 1.2f } };
					
						if (out2 - out1 > fParam11)
							flag2 = false;
						else if (out2.f_1 - out1.f_1 > fParam11.f_1)
							flag2 = false;
						else if (out2.f_2 - out1.f_2 > fParam11.f_2)
							flag2 = false;
					}
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
				{
					if (flag2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(vParam7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fParam10);
						ENTITY::SET_ENTITY_COORDS(playersLastVehicle, vParam7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
					
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(playersLastVehicle, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(playersLastVehicle, true))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
					
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true, false, false, true);
					
						VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
					}
				}
			}
		
			if (bParam14)
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam3, fParam6, false, false, false, false, false, 0, 0);
		
			if (num == 1)
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&playersLastVehicle);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
		
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
				ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
		
			vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle));
		
			if (vehicleModelNumberOfSeats <= 2)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 0, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			if (vehicleModelNumberOfSeats <= 4)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 1, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 2, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
		}
	}

	return;
}

BOOL func_31(float fParam0, var uParam1, var uParam2) // Position - 0x1801 (6145)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_32(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x182B (6187)
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_33(echParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114162.f_7233[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_33(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x1899 (6297)
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x196A (6506)
{
	func_35();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_35() // Position - 0x1983 (6531)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_36(character) && !func_90(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_36(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_36(eCharacter echParam0) // Position - 0x1A80 (6784)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1A8C (6796)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1AC9 (6857)
{
	if (func_36(character))
		return func_39(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_39(eCharacter echParam0) // Position - 0x1AEE (6894)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_40(Vehicle veParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x1AFD (6909)
{
	float num;
	var unk3;
	var unk6;
	var unk9;
	var unk12;
	var unk15;
	var unk18;
	float minimum;
	float maximum;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1.f_2 = uParam4.f_2;
		num = { func_42(uParam1 - uParam4) };
		unk3 = { num };
		unk18 = 4;
		num = -unk3.f_1;
		num.f_1 = unk3;
		num.f_2 = 0f;
		unk6 = { uParam1 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk9 = { uParam1 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk12 = { uParam4 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk15 = { uParam4 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veParam0), &minimum, &maximum);
		unk18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, minimum.f_1, 0f) };
		unk18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, maximum.f_1, 0f) };
		unk18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, minimum.f_1, 0f) };
		unk18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, maximum.f_1, 0f) };
	
		if (func_41(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk9) || func_41(unk18[0 /*3*/], unk18[1 /*3*/], unk9, unk15) || func_41(unk18[0 /*3*/], unk18[1 /*3*/], unk12, unk15) || func_41(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk12) || func_41(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk9) || func_41(unk18[1 /*3*/], unk18[3 /*3*/], unk9, unk15) || func_41(unk18[1 /*3*/], unk18[3 /*3*/], unk12, unk15) || func_41(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk12) || func_41(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk9) || func_41(unk18[3 /*3*/], unk18[2 /*3*/], unk9, unk15) || func_41(unk18[3 /*3*/], unk18[2 /*3*/], unk12, unk15) || func_41(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk12) || func_41(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk9) || func_41(unk18[2 /*3*/], unk18[0 /*3*/], unk9, unk15) || func_41(unk18[2 /*3*/], unk18[0 /*3*/], unk12, unk15) || func_41(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk12))
			return true;
	}

	return false;
}

BOOL func_41(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0x1DF3 (7667)
{
	float num;
	float num2;
	float num3;
	float num4;
	var unk;
	var unk2;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;

	num = fParam0;
	num2 = fParam0.f_1;
	num3 = fParam3;
	num4 = fParam3.f_1;
	unk = uParam6;
	unk2 = uParam6.f_1;
	num5 = fParam9;
	num6 = fParam9.f_1;
	num7 = num3 - num;
	num8 = num4 - num2;
	num9 = num5 - unk;
	num10 = num6 - unk2;
	num11 = ((-num8 * (num - unk)) + (num7 * (num2 - unk2))) / ((-num9 * num8) + (num7 * num10));
	num12 = ((num9 * (num2 - unk2)) - (num10 * (num - unk))) / ((-num9 * num8) + (num7 * num10));

	if (num11 >= 0f && num11 <= 1f && num12 >= 0f && num12 <= 1f)
		return true;

	return false;
}

Vector3 func_42(float fParam0, var uParam1, var uParam2) // Position - 0x1EA7 (7847)
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

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

void func_43(Vehicle veParam0) // Position - 0x1EE6 (7910)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veParam0) <= 200f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veParam0) <= 700f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 900f);
		
			if (ENTITY::GET_ENTITY_HEALTH(veParam0) < 200)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		}
	}

	return;
}

void func_44(Ped pedParam0) // Position - 0x1F4B (8011)
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_52(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45196[num /*5*/];
		func_47(1, num2, 1);
		return;
	}

	num3 = func_46(pedParam0);

	if (num3 == -1)
		return;

	func_45(num3);
	return;
}

void func_45(int iParam0) // Position - 0x1FA4 (8100)
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

int func_46(Ped pedParam0) // Position - 0x2027 (8231)
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

void func_47(int iParam0, int iParam1, int iParam2) // Position - 0x2058 (8280)
{
	func_48(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x206D (8301)
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_50(iParam0, iParam1, iParam2))
		return;

	num = func_49();

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

int func_49() // Position - 0x20EF (8431)
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

BOOL func_50(int iParam0, int iParam1, int iParam2) // Position - 0x2120 (8480)
{
	if (func_51(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_51(int iParam0, int iParam1, int iParam2) // Position - 0x213B (8507)
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

int func_52(Ped pedParam0) // Position - 0x2187 (8583)
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

void func_53() // Position - 0x21D0 (8656)
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

int func_54(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x224D (8781)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99166.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_56(0))
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
			func_55(uParam0, iParam4);
	}

	return 2;
}

void func_55(var uParam0, int iParam1) // Position - 0x2384 (9092)
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

BOOL func_56(int iParam0) // Position - 0x23D3 (9171)
{
	if (Global_44199 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_57() // Position - 0x23F5 (9205)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_84) || ENTITY::IS_ENTITY_DEAD(veLocal_84, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_84, true) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_84, false))
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_84, 2);
	
		func_102(0);
	
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
			HUD::CLEAR_HELP(true);
	
		return;
	}

	if (fLocal_91 < fLocal_115 * fLocal_115)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_84, 1);
		func_64(sLocal_99);
		func_58(0);
	}
	else if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
	{
		HUD::CLEAR_HELP(true);
	}

	return;
}

void func_58(int iParam0) // Position - 0x2491 (9361)
{
	if (func_63())
		return;

	if (!(Global_21083.f_1 == 1))
	{
		if (func_71(0))
			func_59(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

void func_59(int iParam0) // Position - 0x24C4 (9412)
{
	if (func_63())
		return;

	if (Global_21301)
		if (func_62())
			func_61(true, true);
		else
			func_61(false, false);

	if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22442 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_60())
		Global_21083.f_1 = 3;

	return;
}

BOOL func_60() // Position - 0x254E (9550)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

void func_61(BOOL bParam0, BOOL bParam1) // Position - 0x2575 (9589)
{
	if (bParam0)
	{
		if (func_71(0))
		{
			Global_21301 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21020);
		
			Global_21011 = { Global_21029[Global_21028 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21011);
		}
	}
	else if (Global_21301 == true)
	{
		Global_21301 = false;
		Global_21011 = { Global_21036[Global_21028 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21020);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21011);
	}

	return;
}

BOOL func_62() // Position - 0x25E9 (9705)
{
	return IS_BIT_SET(Global_1958240, 5);
}

BOOL func_63() // Position - 0x25F7 (9719)
{
	return IS_BIT_SET(Global_1958240, 19);
}

void func_64(char* sParam0) // Position - 0x2606 (9734)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_65(int iParam0, BOOL bParam1) // Position - 0x261C (9756)
{
	int num;

	num = func_66(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_71(0))
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

int func_66(int iParam0) // Position - 0x26D4 (9940)
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

void func_67(var uParam0) // Position - 0x270F (9999)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_66(*uParam0);

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

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x2766 (10086)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_67(uParam0);
	
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

BOOL func_69(Vehicle veParam0) // Position - 0x2891 (10385)
{
	return false;
}

BOOL func_70() // Position - 0x289E (10398)
{
	return Global_76658;
}

BOOL func_71(int iParam0) // Position - 0x28AA (10410)
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

BOOL func_72(int iParam0, int iParam1) // Position - 0x2901 (10497)
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

BOOL func_73() // Position - 0x2939 (10553)
{
	return MISC::GET_GAME_TIMER() <= Global_23987.f_6481 + 100;
}

BOOL func_74() // Position - 0x294E (10574)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_75(BOOL bParam0) // Position - 0x2968 (10600)
{
	if (bParam0)
		return Global_23848.f_4 && Global_23848.f_104 == 4;

	return Global_23848.f_4;
}

BOOL func_76() // Position - 0x2991 (10641)
{
	return true;
}

BOOL func_77() // Position - 0x299A (10650)
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

BOOL func_78(int iParam0) // Position - 0x2AA4 (10916)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_36(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_85() || Global_113209 || Global_33108 || func_84() || func_72(8, -1) || func_83() || func_82() || func_81() || func_74() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_85() || Global_33108 || func_84() || func_72(8, -1) || func_81() || func_83() || func_82() || func_74() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_85() || Global_113209 || Global_33108 || func_84() || func_72(8, -1) || func_81() || func_83() || func_82() || func_74() || Global_114162.f_7692.f_919[character] == 5 || Global_44746 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_85() || Global_113209 || Global_33108 || func_84() || func_72(8, -1) || func_83() || func_82() || func_74() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_85() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_72(8, -1) || func_74() || func_80() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_72(8, -1) || func_83() || func_82() || func_80() || func_79())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_85() || Global_33108 || func_84() || func_72(8, -1) || func_82() || func_81() || func_74() || Global_114162.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_85() || func_82() || Global_113209 || Global_33108 || func_84() || Global_45410 || func_72(8, -1) || func_81() || func_80() || func_74() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_85() || Global_113209 || Global_33108 || func_84() || func_72(8, -1) || func_81() || func_80() || func_83() || func_82() || func_74())
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

BOOL func_79() // Position - 0x31C1 (12737)
{
	return Global_101752.f_1;
}

BOOL func_80() // Position - 0x31CF (12751)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 13);

	return false;
}

BOOL func_81() // Position - 0x31F2 (12786)
{
	if (Global_79825)
		return true;
	else if (Global_64320 && !Global_64326)
		return true;

	return false;
}

BOOL func_82() // Position - 0x321C (12828)
{
	return Global_101765.f_400 > 0;
}

BOOL func_83() // Position - 0x322D (12845)
{
	return Global_101765.f_399 > 0;
}

BOOL func_84() // Position - 0x323E (12862)
{
	return Global_1575086;
}

BOOL func_85() // Position - 0x324A (12874)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99166.f_44 == 1;

	return false;
}

BOOL func_86() // Position - 0x3266 (12902)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
		return true;

	return false;
}

Entity func_87() // Position - 0x3280 (12928)
{
	return Global_97520;
}

BOOL func_88(int iParam0) // Position - 0x328C (12940)
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_90(6) || func_90(7))
				return true;
			else
				return func_88(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_78(4))
					return true;
			break;
	}

	return false;
}

BOOL func_89(int iParam0) // Position - 0x32FE (13054)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33485[num /*23*/].f_19);
}

BOOL func_90(int iParam0) // Position - 0x333A (13114)
{
	return Global_44199 == iParam0;
}

void func_91(var uParam0, int iParam1) // Position - 0x3348 (13128)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_92() // Position - 0x3359 (13145)
{
	return;
}

void func_93(var uParam0, int iParam1) // Position - 0x3361 (13153)
{
	func_94(uParam0, iParam1);
	return;
}

void func_94(var uParam0, int iParam1) // Position - 0x3371 (13169)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_95() // Position - 0x3382 (13186)
{
	if (Global_44199 == 15)
		return false;

	return true;
}

void func_96() // Position - 0x3397 (13207)
{
	iLocal_46 = iLocal_46 + 1;
	return;
}

BOOL func_97() // Position - 0x33A5 (13221)
{
	return true;
}

void func_98() // Position - 0x33AE (13230)
{
	return;
}

BOOL func_99() // Position - 0x33B6 (13238)
{
	return false;
}

BOOL func_100() // Position - 0x33BF (13247)
{
	return true;
}

BOOL func_101() // Position - 0x33C8 (13256)
{
	return true;
}

void func_102(int iParam0) // Position - 0x33D1 (13265)
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

BOOL func_103() // Position - 0x33F2 (13298)
{
	Vector3 entityCoords;
	float num;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	num = BUILTIN::VDIST2(entityCoords, uLocal_88);

	if (num < 10f * 10f)
		return true;
	else if (num < 80f * 80f)
		if (CAM::IS_SPHERE_VISIBLE(uLocal_88, 5f))
			return true;
		else
			return false;

	return false;
}

void func_104(int iParam0) // Position - 0x3465 (13413)
{
	iLocal_93 = iParam0;
	return;
}

void func_105(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3471 (13425)
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

BOOL func_106() // Position - 0x3571 (13681)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_107() // Position - 0x358E (13710)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 20);

	return false;
}

BOOL func_108(int iParam0, int iParam1) // Position - 0x35B1 (13745)
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_114162.f_9089.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x35FB (13819)
{
	return func_110(iParam0, Global_44199);
}

BOOL func_110(int iParam0, int iParam1) // Position - 0x360C (13836)
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

BOOL func_111(int iParam0, int iParam1) // Position - 0x37ED (14317)
{
	return iParam0 && iParam1 != false;
}

void func_112() // Position - 0x37FC (14332)
{
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "stunt_plane_races", 64);
	hLocal_116 = joaat("stunt");
	fLocal_117 = 154.8464f;
	fLocal_100 = 209f;
	iLocal_103 = 95;
	MISC::CLEAR_AREA_OF_VEHICLES(uLocal_112, 10f, false, false, false, false, false, false, 0);
	iLocal_97 = 10;
	sLocal_99 = "PLAY_STUNT" /*Approach the plane and press ~INPUT_ENTER~ to begin stunt plane time trials.*/;
	fLocal_115 = 6f;
	essLocal_95 = 63500;
	return;
}

void func_113(int iParam0, int iParam1) // Position - 0x384C (14412)
{
	func_114(iParam0, iParam1);
	return;
}

void func_114(var uParam0, int iParam1) // Position - 0x385C (14428)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_115(BOOL bParam0) // Position - 0x3871 (14449)
{
	if (bParam0)
		if (iLocal_103 != 263)
			func_105(iLocal_103, 0, false);

	func_67(&iLocal_94);

	if (func_111(iLocal_92, 2))
	{
		func_4();
		func_113(&iLocal_92, 2);
		func_8(&iLocal_96);
	}

	iLocal_96 = -1;
	func_116();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_116() // Position - 0x38BA (14522)
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_84))
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_84, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_84, true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_84);
			VEHICLE::DELETE_VEHICLE(&veLocal_84);
		}
	}

	func_113(&iLocal_92, 4);
	func_117();

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);

	if (!MISC::IS_STRING_NULL(&uLocal_67))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_67) != 0)
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);

	return;
}

void func_117() // Position - 0x391F (14623)
{
	return;
}


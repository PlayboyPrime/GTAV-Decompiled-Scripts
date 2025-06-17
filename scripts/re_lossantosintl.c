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
	var uLocal_47 = 4;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	Vehicle veLocal_52 = 0;
	var uLocal_53 = 4;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	Ped pedLocal_58 = 0;
	var uLocal_59 = 4;
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
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	BOOL bLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	int iLocal_81 = 0;
	Hash hLocal_82 = 0;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	Vehicle veLocal_87 = 0;
	Ped pedLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	BOOL bLocal_93 = 0;
	var uLocal_94 = 0;
	Ped pedLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
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
	bLocal_76 = true;
	hLocal_82 = joaat("S_M_M_Pilot_01");
	iLocal_97 = 500;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_12();

	pedLocal_95 = PLAYER::PLAYER_PED_ID();

	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(pedLocal_95, false))
			iLocal_96 = 5;
	
		switch (iLocal_96)
		{
			case 0:
				iLocal_96 = 1;
				break;
		
			case 1:
				func_11();
				iLocal_96 = 2;
				break;
		
			case 2:
				if (func_10())
					iLocal_96 = 3;
				break;
		
			case 3:
				func_9();
				iLocal_96 = 4;
				break;
		
			case 4:
				if (Global_98820)
					iLocal_96 = 5;
			
				func_4();
				break;
		
			case 5:
				func_1();
				func_12();
				break;
		}
	
		BUILTIN::WAIT(iLocal_97);
	}

	return;
}

void func_1() // Position - 0x11A (282)
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[i]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[i]) || !ENTITY::IS_ENTITY_DEAD(uLocal_47[i], false) && !ENTITY::IS_ENTITY_VISIBLE(uLocal_47[i]))
			{
				VEHICLE::DELETE_VEHICLE(&uLocal_47[i]);
				PED::DELETE_PED(&uLocal_53[i]);
			}
			else
			{
				if (i == 0 || i == 2)
					func_3(true);
			
				func_2(&uLocal_47[i], &uLocal_53[i]);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_47[i]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_53[i]);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_52))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(veLocal_52))
		{
			VEHICLE::DELETE_VEHICLE(&veLocal_52);
			PED::DELETE_PED(&pedLocal_58);
		}
		else
		{
			func_2(&veLocal_52, &pedLocal_58);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_52);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_58);
		}
	}

	if (bLocal_80)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}

	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x233 (563)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 100, 50, true);

	return;
}

void func_3(BOOL bParam0) // Position - 0x2B4 (692)
{
	if (bLocal_76)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], false))
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_47[0]))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[0]))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_53[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], false))
						TASK::TASK_PLANE_MISSION(uLocal_53[0], uLocal_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
				else if (bParam0)
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_53[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], false))
						TASK::TASK_PLANE_MISSION(uLocal_53[0], uLocal_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], false))
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_47[2]))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[2]))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_53[2], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], false))
						TASK::TASK_PLANE_MISSION(uLocal_53[2], uLocal_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
				else if (bParam0)
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_53[2], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], false))
						TASK::TASK_PLANE_MISSION(uLocal_53[2], uLocal_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
	}

	return;
}

void func_4() // Position - 0x493 (1171)
{
	int i;

	switch (iLocal_86)
	{
		case 0:
			uLocal_59[0 /*3*/] = { -1542.1127f, -3023.8025f, 23.2538f };
			uLocal_59[1 /*3*/] = { -3089.888f, -1960.0751f, 313.559f };
			uLocal_59[2 /*3*/] = { -1037.6381f, -3316.1196f, 23.2475f };
			uLocal_59[3 /*3*/] = { 451.174f, -4009.4602f, 135.1171f };
			uLocal_72 = { -1612.1736f, -2688.442f, 12.9444f };
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					bLocal_76 = false;
				else
					bLocal_76 = true;
		
			iLocal_86 = 1;
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(hLocal_82);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_86 = 2;
			break;
	
		case 2:
			if (!bLocal_80)
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(hLocal_82) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_80 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(hLocal_82);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
		
			if (bLocal_80)
			{
				if (!CAM::IS_SPHERE_VISIBLE(uLocal_59[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(uLocal_72, 50f))
				{
					iLocal_86 = 3;
				}
				else
				{
					CAM::IS_SPHERE_VISIBLE(uLocal_59[0 /*3*/], 50f);
					CAM::IS_SPHERE_VISIBLE(uLocal_72, 50f);
				}
			}
			break;
	
		case 3:
			uLocal_47[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_59[0 /*3*/], 0, true, true, false);
			ENTITY::SET_ENTITY_HEADING(uLocal_47[0], 240.3179f);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[0], false);
			uLocal_47[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_59[1 /*3*/], 0, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[1], false);
			uLocal_47[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_59[2 /*3*/], 0, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[2], false);
			uLocal_47[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_59[3 /*3*/], 0, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[3], false);
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[i]))
				{
					uLocal_53[i] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_47[i], PED_TYPE_CIVMALE, hLocal_82, -1, true, true);
					ENTITY::SET_ENTITY_LOD_DIST(uLocal_47[i], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_47[i], true, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_53[i], true);
				}
			}
		
			func_8(&uLocal_47[1], &uLocal_53[1]);
			func_8(&uLocal_47[2], &uLocal_53[2]);
			func_8(&uLocal_47[3], &uLocal_53[3]);
		
			if (bLocal_76)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						bLocal_75 = true;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
		
			iLocal_86 = 4;
			break;
	
		case 4:
			if (bLocal_79)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[3], false))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[3]))
					{
						if (!bLocal_77)
						{
							func_8(&uLocal_47[3], &uLocal_53[3]);
							bLocal_77 = true;
						}
					}
				}
			}
		
			func_3(false);
			func_7();
		
			switch (iLocal_85)
			{
				case 0:
					if (!bLocal_75)
					{
						if (bLocal_76)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], false))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[0]) && !CAM::IS_SPHERE_VISIBLE(uLocal_59[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										bLocal_75 = true;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
				
					if (bLocal_75)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], false))
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[0]))
								fLocal_83 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_47[0]);
					
						if (fLocal_83 > 1100f)
							iLocal_85 = 1;
					}
					break;
			
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[1], false))
					{
						if (bLocal_76)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[1]))
							{
								if (bLocal_79)
								{
									if (bLocal_77)
									{
										func_6(&uLocal_47[1], &uLocal_53[1]);
									
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											bLocal_78 = false;
											iLocal_85 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&uLocal_47[1], &uLocal_53[1]);
								
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										bLocal_78 = false;
										iLocal_85 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
			
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[1], false))
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[1]))
							iLocal_85 = 3;
					break;
			
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], false))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(uLocal_59[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[2]))
								{
									func_6(&uLocal_47[2], &uLocal_53[2]);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_47[2], 101, "AirportNew", true);
									iLocal_85 = 4;
								}
							}
						}
					}
					break;
			
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], false))
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[2]))
							fLocal_84 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_47[2]);
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[1]))
							{
								func_8(&uLocal_47[1], &uLocal_53[1]);
								bLocal_78 = true;
							}
						}
					}
				
					if (fLocal_84 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[3], false))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(uLocal_59[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[3]) && bLocal_78)
									{
										func_6(&uLocal_47[3], &uLocal_53[3]);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_47[3], 104, "AirplaneLandingRedux", true);
										iLocal_85 = 5;
									}
								}
							}
						}
					}
					break;
			
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[3], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[3]))
						{
							func_5();
							iLocal_85 = 0;
						}
					}
					break;
			}
			break;
	}

	return;
}

void func_5() // Position - 0xBB3 (2995)
{
	fLocal_83 = 0f;
	bLocal_75 = false;
	bLocal_79 = true;
	bLocal_77 = false;
	return;
}

void func_6(var uParam0, var uParam1) // Position - 0xBC7 (3015)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, true, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	return;
}

void func_7() // Position - 0xBF2 (3058)
{
	Vector3 entityCoords;

	switch (iLocal_81)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_52))
			{
				veLocal_52 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, true, true, false);
				ENTITY::SET_ENTITY_LOD_DIST(veLocal_52, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_52, true, true, false);
				VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(veLocal_52, false);
				pedLocal_58 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_52, PED_TYPE_CIVMALE, hLocal_82, -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, true);
				iLocal_81 = 1;
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_52) && !ENTITY::IS_ENTITY_DEAD(veLocal_52, false))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_52))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(veLocal_52, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_81 = 2;
					}
				}
			}
			break;
	
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_52) && !ENTITY::IS_ENTITY_DEAD(veLocal_52, false))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_52))
					if (ENTITY::IS_ENTITY_OCCLUDED(veLocal_52) && !CAM::IS_SPHERE_VISIBLE(-1602.0862f, -2674.0386f, 12.9444f, 50f) && BUILTIN::VDIST2(entityCoords, ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) > 62500f)
						iLocal_81 = 1;
			break;
	}

	return;
}

void func_8(var uParam0, var uParam1) // Position - 0xD31 (3377)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	return;
}

void func_9() // Position - 0xD5C (3420)
{
	return;
}

BOOL func_10() // Position - 0xD64 (3428)
{
	return true;
}

void func_11() // Position - 0xD6D (3437)
{
	return;
}

void func_12() // Position - 0xD75 (3445)
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_13() // Position - 0xD89 (3465)
{
	Vector3 entityCoords;
	Vector3 vector;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float entityHeading;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_87))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(veLocal_87))
		{
			VEHICLE::DELETE_VEHICLE(&veLocal_87);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(veLocal_87, false) && !PED::IS_PED_INJURED(pedLocal_88))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_87);
			PED::SET_PED_KEEP_TASK(pedLocal_88, true);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_87, true) };
			entityHeading = ENTITY::GET_ENTITY_HEADING(veLocal_87);
			vector = { 0f, 500f, 50f };
			offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, entityHeading, vector) };
			TASK::TASK_HELI_MISSION(pedLocal_88, veLocal_87, 0, 0, offsetFromCoordAndHeadingInWorldCoords, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}

	if (bLocal_93)
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");

	return;
}


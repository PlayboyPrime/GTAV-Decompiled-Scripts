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
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
#endregion

void main() // Position - 0x0
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		iLocal_41 = 5;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_41)
			{
				case 0:
					func_10();
					break;
			
				case 1:
					break;
			
				case 2:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(DT_PoliceVehicleRequest, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(DT_PoliceVehicleRequest, uLocal_43, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_41 = 5;
					}
					break;
			
				case 3:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (func_8(PLAYER::PLAYER_ID(), false) && func_4(PLAYER::PLAYER_ID()) == 5 && Global_1962201)
						{
							if (Global_1962202 == 0)
								Global_1962202 = 1;
						
							iLocal_41 = 5;
						}
						else if (MISC::CREATE_INCIDENT_WITH_ENTITY(DT_AmbulanceDepartment, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(DT_AmbulanceDepartment, uLocal_43, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_41 = 5;
					}
					break;
			
				case 4:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(DT_FireDepartment, PLAYER::PLAYER_PED_ID(), 4, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(DT_FireDepartment, uLocal_43, 4, 3f, &iLocal_47, 0, 0))
					{
						if (Global_98010.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && _IS_MISSION_REPEAT_ACTIVE(false))
							Global_98010.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						else if (func_2(67) && !func_2(68))
							Global_97940 = 1;
					
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_41 = 5;
					}
					break;
			
				case 5:
					if (MISC::GET_GAME_TIMER() > iLocal_46 + 60000 || !MISC::IS_INCIDENT_VALID(iLocal_47))
						func_1();
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							if (MISC::IS_INCIDENT_VALID(iLocal_47))
								MISC::DELETE_INCIDENT(iLocal_47);
					break;
			}
		}
	}

	return;
}

void func_1() // Position - 0x27A
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(int iParam0) // Position - 0x28C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x2B8
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

int func_4(Player plParam0) // Position - 0x2E0
{
	if (func_6(plParam0) == 233)
		return func_5(plParam0);

	return -1;
}

int func_5(Player plParam0) // Position - 0x2FD
{
	if (func_8(plParam0, false))
		return Global_1887305[plParam0 /*610*/].f_10.f_182;

	return -1;
}

int func_6(Player plParam0) // Position - 0x320
{
	if (func_7(plParam0))
		if (func_8(plParam0, false))
			return Global_1887305[plParam0 /*610*/].f_10.f_33;

	return -1;
}

BOOL func_7(Player plParam0) // Position - 0x34C
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_8(Player plParam0, BOOL bParam1) // Position - 0x36E
{
	if (func_7(plParam0))
		if (Global_1887305[plParam0 /*610*/].f_10.f_33 != -1 || bParam1 && Global_1887305[plParam0 /*610*/].f_10.f_32 != -1)
			return true;

	return false;
}

void func_9() // Position - 0x3B2
{
	if (MISC::GET_GAME_TIMER() > iLocal_46 + 30000)
		iLocal_41 = 5;

	return;
}

void func_10() // Position - 0x3C9
{
	var unk;

	switch (iLocal_42)
	{
		case 0:
			iLocal_42 = 1;
			iLocal_46 = MISC::GET_GAME_TIMER();
			break;
	
		case 1:
			while (!func_20())
			{
				SYSTEM::WAIT(0);
			
				if (func_19() == 3)
					iLocal_41 = 3;
			
				if (func_19() == 4)
					iLocal_41 = 4;
			
				if (func_19() == 5)
					iLocal_41 = 2;
			
				if (MISC::GET_GAME_TIMER() > iLocal_46 + 30000)
				{
					iLocal_46 = MISC::GET_GAME_TIMER();
					func_13(0);
				}
			}
		
			if (iLocal_41 == 0)
				iLocal_41 = 5;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				func_11(PLAYER::PLAYER_PED_ID(), &uLocal_43, &unk);
		
			iLocal_46 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

void func_11(Ped pedParam0, Vector3* pvParam1, var uParam2) // Position - 0x462
{
	int nthClosest;
	int outNumLanes;
	var unk;
	var unk2;
	var unk3;
	var unk6;
	float dx;
	float num;
	float headingFromVector2d;
	float num2;
	float outHeading;
	float xOffset;
	float num3;
	int num4;
	int shapeTestHandle;
	int hit;
	var surfaceNormal;
	var endCoords;
	var entityHit;

	num3 = 5f;
	nthClosest = 1;
	num4 = 0;

	while (num4 < 2)
	{
		switch (num4)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), nthClosest, pvParam1, &outHeading, &outNumLanes, 5, 1077936128, 0);
				PATHFIND::GET_CLOSEST_ROAD(*pvParam1, 1f, 1, &unk3, &unk6, &unk, &unk2, &num, false);
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
					*pvParam1 = { -3031.38f, 605.32f, 6.86f };
			
				dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
				headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
				num2 = outHeading + 180f;
			
				if (num2 > 360f)
					num2 = num2 - 360f;
			
				if (func_12(headingFromVector2d, outHeading, 90f))
					*uParam2 = outHeading;
				else
					*uParam2 = num2;
			
				if (num < 0f)
				{
					xOffset = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*pvParam1, 1, 1, 1077936128, 0)))
				{
					xOffset = 0f;
				}
				else
				{
					xOffset = num3 * SYSTEM::TO_FLOAT(outNumLanes / 2);
				
					if (xOffset == 0f)
						xOffset = xOffset + num3;
				
					if (outNumLanes == 5)
						xOffset = xOffset + num3;
				
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 294f, -895f, 28f, true) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
						xOffset = xOffset + 5f;
					else
						xOffset = xOffset + 3.75f;
				
					xOffset = xOffset + (num / 2f);
				}
			
				if (SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, xOffset, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, -xOffset, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
					xOffset = -xOffset;
			
				*pvParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, xOffset, 0f, 0f) };
				shapeTestHandle = SHAPETEST::START_SHAPE_TEST_CAPSULE(*pvParam1 + { pvParam1->f_2 + 4.5f, pvParam1->f_2 + 4.5f, pvParam1->f_2 + 4.5f }, *pvParam1 + { 4.5f, 0.5f, 0.5f }, 2.5f, 1, 0, 4);
				num4 = num4 + 1;
				break;
		
			case 1:
				if (nthClosest <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
					{
						if (hit != 0)
						{
							if (endCoords.f_2 > pvParam1->f_2 + 8.5f)
							{
								num4 = num4 + 1;
							}
							else
							{
								nthClosest = nthClosest + 1;
								num4 = 0;
							}
						}
						else
						{
							num4 = num4 + 1;
						}
					}
				}
				else
				{
					num4 = num4 + 1;
				}
				break;
		
			case 2:
				break;
		}
	}

	return;
}

BOOL func_12(float fParam0, float fParam1, float fParam2) // Position - 0x708
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return true;
	else if (fParam0 < num || fParam0 > num2)
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x77D
{
	if (func_18())
		return;

	if (Global_21145)
		if (func_17())
			func_15(true, true);
		else
			func_15(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_14())
		Global_20930.f_1 = 3;

	return;
}

BOOL func_14() // Position - 0x807
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

void func_15(BOOL bParam0, BOOL bParam1) // Position - 0x82E
{
	if (bParam0)
	{
		if (func_16(0))
		{
			Global_21145 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
		
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == true)
	{
		Global_21145 = false;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	}

	return;
}

BOOL func_16(int iParam0) // Position - 0x8A2
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_20930.f_1 > 3)
		return true;

	return false;
}

BOOL func_17() // Position - 0x8F9
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_18() // Position - 0x907
{
	return IS_BIT_SET(Global_1956920, 19);
}

int func_19() // Position - 0x916
{
	return Global_23303;
}

BOOL func_20() // Position - 0x921
{
	if (Global_22286 == 0)
		return true;

	return false;
}


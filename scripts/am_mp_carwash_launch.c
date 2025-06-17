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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	int gameTimer;
	Hash hashKey;
	char* scriptName;
	Vector3 vector;
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
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	hashKey = joaat("carwash1");
	scriptName = "carwash1";
	vector = { uScriptParam_0.f_1[0 /*3*/] };

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_carwash_launch")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(131838674) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(131838674);
		
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(131838674))
			{
				BUILTIN::WAIT(0);
			}
		
			BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(131838674, &uScriptParam_0, 23, DEFAULT);
		}
	
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_15(PLAYER::PLAYER_PED_ID());
	num = 0;

	while (num == 0)
	{
		if (func_12(PLAYER::PLAYER_ID(), true, false) || func_11() || !func_10(PLAYER::PLAYER_ID()) || func_9() || func_8(PLAYER::PLAYER_ID()) || func_7(PLAYER::PLAYER_ID()) || func_6(PLAYER::PLAYER_ID()) || func_2(PLAYER::PLAYER_ID(), true))
			num = 0;
		else
			num = 1;
	
		BUILTIN::WAIT(0);
	}

	if (BUILTIN::VDIST2(vector, func_1(157)) < BUILTIN::VDIST2(vector, func_1(156)))
		scriptName = "carwash2";

	gameTimer = MISC::GET_GAME_TIMER();
	hashKey = MISC::GET_HASH_KEY(scriptName);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hashKey) == 0)
	{
		SCRIPT::REQUEST_SCRIPT(scriptName);
	
		while (!SCRIPT::HAS_SCRIPT_LOADED(scriptName))
		{
			SCRIPT::REQUEST_SCRIPT(scriptName);
			BUILTIN::WAIT(0);
		
			if (MISC::GET_GAME_TIMER() > gameTimer + 20000)
				SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		if (SCRIPT::HAS_SCRIPT_LOADED(scriptName))
		{
			BUILTIN::START_NEW_SCRIPT(scriptName, DEFAULT);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
		}
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

Vector3 func_1(int iParam0) // Position - 0x20E (526)
{
	int num;

	num = iParam0;
	return Global_33678[num /*23*/][0 /*3*/];
}

BOOL func_2(Player plParam0, BOOL bParam1) // Position - 0x226 (550)
{
	Ped playerPed;
	Vehicle vehiclePedIsIn;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (IS_BIT_SET(Global_2658019[plParam0 /*467*/].f_324.f_6, 15))
		{
			if (bParam1)
			{
				playerPed = PLAYER::GET_PLAYER_PED(plParam0);
			
				if (ENTITY::DOES_ENTITY_EXIST(playerPed) && !ENTITY::IS_ENTITY_DEAD(playerPed, false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(playerPed) && _GET_VEHICLE_SEAT_PED_IS_IN(playerPed, false) == -1)
					{
						vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
					
						if (func_3(vehiclePedIsIn, true))
							return true;
					}
				}
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

BOOL func_3(Vehicle veParam0, BOOL bParam1) // Position - 0x2A4 (676)
{
	if (Global_79768)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", BOOL))
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "TestDrive"))
					return DECORATOR::DECOR_GET_BOOL(veParam0, "TestDrive");

	return false;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x2F5 (757)
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x37A (890)
{
	return -1;
}

BOOL func_6(Player plParam0) // Position - 0x383 (899)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658019[plParam0 /*467*/].f_324.f_5, 4);

	return false;
}

BOOL func_7(Player plParam0) // Position - 0x3A8 (936)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_260.f_433.f_2, 16);

	return false;
}

BOOL func_8(Player plParam0) // Position - 0x3D1 (977)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_260.f_370, 29);

	return false;
}

BOOL func_9() // Position - 0x3F8 (1016)
{
	return IS_BIT_SET(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 0);
}

BOOL func_10(Player plParam0) // Position - 0x411 (1041)
{
	return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_140, 6);
}

int func_11() // Position - 0x426 (1062)
{
	int num;

	num = Global_2672967;

	if (IS_BIT_SET(Global_1882449[num /*201*/].f_17, 0) && Global_1882449[num /*201*/].f_27 == 2)
		return 1;

	return 0;
}

int func_12(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x459 (1113)
{
	if (bParam1)
		if (func_13(plParam0))
			return 1;

	!bParam2;

	if (Global_1845274[plParam0 /*877*/] == -1)
		return 0;

	return 1;
}

BOOL func_13(Player plParam0) // Position - 0x48B (1163)
{
	return func_14(plParam0);
}

BOOL func_14(Player plParam0) // Position - 0x499 (1177)
{
	return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_11.f_1, 0);
}

BOOL func_15(Ped pedParam0) // Position - 0x4B0 (1200)
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}


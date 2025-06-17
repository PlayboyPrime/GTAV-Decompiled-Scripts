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
	Vehicle veLocal_26 = 0;
	Object obLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
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
	func_4(21);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 16)
			func_3(21);
	
		func_2();
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("docks_setup")) == 0)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					veLocal_26 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				else
					veLocal_26 = 0;
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_26))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_26, false))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(veLocal_26, joaat("handler")))
					{
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
					
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(veLocal_26))
						{
							if (iLocal_30 == 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(obLocal_27) || ENTITY::DOES_ENTITY_EXIST(obLocal_27) && OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(veLocal_26, true), 15f, joaat("prop_contr_03b_ld"), true, false, true) != obLocal_27)
									obLocal_27 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(veLocal_26, true), 15f, joaat("prop_contr_03b_ld"), true, false, true);
							
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_27))
								{
									if (func_1(&iLocal_28, 1000))
									{
										if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(veLocal_26, obLocal_27))
										{
											if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT))
											{
												VEHICLE::ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(veLocal_26, obLocal_27);
												iLocal_29 = 1;
												iLocal_30 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_29 == 1)
							{
								iLocal_28 = MISC::GET_GAME_TIMER();
								iLocal_29 = 0;
								iLocal_30 = 0;
							}
						
							PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_1(var uParam0, int iParam1) // Position - 0x18E (398)
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();

	if (gameTimer - *uParam0 > iParam1)
		return true;

	return false;
}

void func_2() // Position - 0x1AC (428)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_3(int iParam0) // Position - 0x1B8 (440)
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9089.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_114370.f_9089.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

int func_4(int iParam0) // Position - 0x20F (527)
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9089.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_114370.f_9089.f_99.f_219[num], offset);
	return 1;
}


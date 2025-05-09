#region Local Var
	Vehicle veLocal_0 = 0;
	Entity eLocal_1 = 0;
	int iLocal_2 = 0;
	Vehicle veScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	float num;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
		func_1();

	veLocal_0 = veScriptParam_0;
	eLocal_1 = veScriptParam_0.f_1;

	while (!IS_BIT_SET(iLocal_2, 1))
	{
		if (!IS_BIT_SET(iLocal_2, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_0, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_0, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(veLocal_0, true);
					ENTITY::SET_ENTITY_PROOFS(veLocal_0, true, true, true, true, true, false, false, false);
				
					if (ENTITY::DOES_ENTITY_EXIST(eLocal_1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(eLocal_1, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(eLocal_1, true);
						ENTITY::SET_ENTITY_PROOFS(eLocal_1, true, true, true, true, true, false, false, false);
					}
				
					MISC::SET_BIT(&iLocal_2, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_0, false))
			{
				num = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_0, true));
			
				if (num > 90000f)
					MISC::SET_BIT(&iLocal_2, 1);
				else if (num > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(veLocal_0))
					MISC::SET_BIT(&iLocal_2, 1);
			}
			else
			{
				MISC::SET_BIT(&iLocal_2, 1);
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x105 (261)
{
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_0);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&eLocal_1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


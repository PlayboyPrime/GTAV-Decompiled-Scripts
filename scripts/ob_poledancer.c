#region Local Var
	int iLocal_0 = 0;
	Ped pedLocal_1 = 0;
	float fLocal_2 = 0f;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	char* sLocal_6 = 0;
	Hash hLocal_7 = 0;
	char* sLocal_8 = 0;
	BOOL bLocal_9 = 0;
	Object obScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	sLocal_6 = "Poledance_01";
	hLocal_7 = joaat("A_F_Y_Beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(obScriptParam_0, true);
		fLocal_2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obScriptParam_0, 0f, 0f, 0f) };
		fLocal_5 = ENTITY::GET_ENTITY_HEADING(obScriptParam_0);
		ENTITY::SET_ENTITY_COLLISION(obScriptParam_0, false, false);
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
				
					case 2:
						func_3();
					
						if (func_2())
						{
							ENTITY::SET_ENTITY_COLLISION(obScriptParam_0, true, false);
							iLocal_0 = 3;
						}
						break;
				
					case 3:
						if (!PED::IS_PED_INJURED(pedLocal_1))
						{
							TASK::TASK_COWER(pedLocal_1, -1);
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
							PED::SET_PED_KEEP_TASK(pedLocal_1, true);
							SCRIPT::TERMINATE_THIS_THREAD();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}

	return;
}

void func_1() // Position - 0xDC (220)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_1, false))
		if (!ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_1))
			PED::DELETE_PED(&pedLocal_1);
		else
			PED::SET_PED_KEEP_TASK(pedLocal_1, true);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x10D (269)
{
	Vector3 vector;

	vector = { 2f, 2f, 0.5f };

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(pedLocal_1))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_1, vector, false, true, 0))
				return true;
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_1, PLAYER::PLAYER_PED_ID(), true))
				return true;
		
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_1))
				return true;
		}
	
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			return true;
	}

	return false;
}

void func_3() // Position - 0x181 (385)
{
	if (!PED::IS_PED_INJURED(pedLocal_1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_1, SCRIPT_TASK_PLAY_ANIM) == 7)
		{
			TASK::TASK_PLAY_ANIM(pedLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, false, false, false);
		}
		else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(pedLocal_1, sLocal_8, sLocal_6, 3))
		{
			TASK::TASK_PLAY_ANIM(pedLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, false, false, false);
		}
		else if (!bLocal_9)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_1, sLocal_8, sLocal_6, 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(pedLocal_1, sLocal_8, sLocal_6, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216));
				bLocal_9 = true;
			}
		}
	}

	return;
}

void func_4() // Position - 0x215 (533)
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_1, false))
	{
		pedLocal_1 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, hLocal_7, fLocal_2, fLocal_2.f_1, fLocal_2.f_2, fLocal_5, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(pedLocal_1, 0);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_1, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_1, true);
	}

	return;
}

BOOL func_5() // Position - 0x253 (595)
{
	STREAMING::REQUEST_MODEL(hLocal_7);
	STREAMING::REQUEST_ANIM_DICT(sLocal_8);

	if (STREAMING::HAS_MODEL_LOADED(hLocal_7) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_8))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_7);
		STREAMING::REQUEST_ANIM_DICT(sLocal_8);
	}

	return false;
}


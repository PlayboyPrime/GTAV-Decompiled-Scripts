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
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	Ped pedLocal_50 = 0;
	Ped pedLocal_51 = 0;
	int iLocal_52 = 0;
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
	fLocal_43 = { uScriptParam_0.f_1[0 /*3*/] };
	func_23();
	PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_3(3))
			{
				switch (iLocal_41)
				{
					case 0:
						if (iLocal_42 == 1)
							iLocal_41 = 1;
						else
							func_2();
						break;
				
					case 1:
						if (iLocal_49 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_23();
			}
		}
		else
		{
			func_23();
		}
	}

	return;
}

void func_1() // Position - 0xE7 (231)
{
	if (BUILTIN::TIMERB() > 7000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_43, 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_43, 3f, 3f, 3f, false, true, 0))
		{
			BUILTIN::SETTIMERB(0);
			uLocal_46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			TASK::OPEN_SEQUENCE_TASK(&iLocal_52);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_46, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, -1, 0, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_52);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_50, false))
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_50, iLocal_52);
		
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_52);
		}
	
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_43, 3f, 3f, 3f, false, true, 0))
		{
			uLocal_46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			BUILTIN::SETTIMERB(0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_52);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_46, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 0, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_52);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_50, false))
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_50, iLocal_52);
		
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_52);
		}
	}

	return;
}

void func_2() // Position - 0x1FD (509)
{
	iLocal_49 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);

	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_43, 50f, 50f, 50f, false, true, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("A_F_M_BevHills_02"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGoon_02"));
	
		while (!STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_BevHills_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGoon_02")))
		{
			BUILTIN::WAIT(0);
		}
	
		STREAMING::REQUEST_ANIM_DICT("amb@BUSKER");
	
		while (!STREAMING::HAS_ANIM_DICT_LOADED("amb@BUSKER"))
		{
			BUILTIN::WAIT(0);
		}
	
		uLocal_46.f_2 = fLocal_43.f_2 - 1f;
		pedLocal_50 = PED::CREATE_PED(PED_TYPE_DEALER, joaat("G_M_Y_MexGoon_02"), fLocal_43, fLocal_43.f_1, uLocal_46.f_2, 0f, true, true);
	
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_50, false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_52);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_46, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_52);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_50, iLocal_52);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_52);
		}
	
		if (iLocal_49 == 1)
		{
			uLocal_46 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_50, 3.8f, 0.8f, 0f) };
			pedLocal_51 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("A_F_M_BevHills_02"), uLocal_46, 0f, true, true);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_51, false))
				TASK::TASK_TURN_PED_TO_FACE_COORD(pedLocal_51, fLocal_43, 0);
		}
	
		iLocal_42 = 1;
	}

	return;
}

BOOL func_3(int iParam0) // Position - 0x331 (817)
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_22(6) || func_22(7))
				return true;
			else
				return func_3(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_4(4))
					return true;
			break;
	}

	return false;
}

BOOL func_4(int iParam0) // Position - 0x3A3 (931)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_14(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_113417 || Global_33301 || func_12() || func_11(8, -1) || func_10() || func_9() || func_8() || func_7() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_13() || Global_33301 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_113417 || Global_33301 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114370.f_7692.f_919[character] == 5 || Global_44939 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_113417 || Global_33301 || func_12() || func_11(8, -1) || func_10() || func_9() || func_7() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_13() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_11(8, -1) || func_7() || func_6() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_11(8, -1) || func_10() || func_9() || func_6() || func_5())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_13() || Global_33301 || func_12() || func_11(8, -1) || func_9() || func_8() || func_7() || Global_114370.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_13() || func_9() || Global_113417 || Global_33301 || func_12() || Global_45607 || func_11(8, -1) || func_8() || func_6() || func_7() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_13() || Global_113417 || Global_33301 || func_12() || func_11(8, -1) || func_8() || func_6() || func_10() || func_9() || func_7())
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

BOOL func_5() // Position - 0xAC0 (2752)
{
	return Global_101956.f_1;
}

BOOL func_6() // Position - 0xACE (2766)
{
	if (Global_98814 != -1)
		return IS_BIT_SET(Global_92680[Global_98814 /*34*/].f_15, 13);

	return false;
}

BOOL func_7() // Position - 0xAF1 (2801)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_8() // Position - 0xB0B (2827)
{
	if (Global_80029)
		return true;
	else if (Global_64517 && !Global_64523)
		return true;

	return false;
}

BOOL func_9() // Position - 0xB35 (2869)
{
	return Global_101969.f_400 > 0;
}

BOOL func_10() // Position - 0xB46 (2886)
{
	return Global_101969.f_399 > 0;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0xB57 (2903)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673898.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673898.f_1048, iParam0);
}

BOOL func_12() // Position - 0xB8F (2959)
{
	return Global_1575088;
}

BOOL func_13() // Position - 0xB9B (2971)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99370.f_44 == 1;

	return false;
}

BOOL func_14(eCharacter echParam0) // Position - 0xBB7 (2999)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xBC3 (3011)
{
	func_16();
	return Global_114370.f_2367.f_539.f_4321;
}

void func_16() // Position - 0xBDC (3036)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_14(character) && !func_22(14) || Global_113318)
			{
				if (Global_114370.f_2367.f_539.f_4321 != character && func_14(Global_114370.f_2367.f_539.f_4321))
					Global_114370.f_2367.f_539.f_4322 = Global_114370.f_2367.f_539.f_4321;
			
				Global_114370.f_2367.f_539.f_4323 = character;
				Global_114370.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114370.f_2367.f_539.f_4323 = Global_114370.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114370.f_2367.f_539.f_4321 = 145;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xCD9 (3289)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xD16 (3350)
{
	if (func_14(character))
		return func_19(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_19(eCharacter echParam0) // Position - 0xD3B (3387)
{
	return Global_2241[echParam0 /*29*/];
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xD4A (3402)
{
	return func_21(iParam0, Global_44392);
}

BOOL func_21(int iParam0, int iParam1) // Position - 0xD5B (3419)
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

BOOL func_22(int iParam0) // Position - 0xF3C (3900)
{
	return Global_44392 == iParam0;
}

void func_23() // Position - 0xF4A (3914)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


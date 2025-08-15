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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	Hash hLocal_51 = 0;
	Ped pedLocal_52 = 0;
	Ped pedLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
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
	fLocal_45 = { uScriptParam_0.f_1[0 /*3*/] };
	iLocal_42 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	func_28();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_28();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_8(3))
			{
				switch (iLocal_41)
				{
					case 0:
						if (iLocal_43 == 1)
							iLocal_41 = 1;
						else
							func_7();
						break;
				
					case 1:
						if (!ENTITY::IS_ENTITY_DEAD(pedLocal_52, false))
							if (iLocal_44 == 0)
								if (func_2(pedLocal_52, 0, 1056964608, 0, 0, false))
									iLocal_44 = 1;
					
						if (iLocal_54 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}

	return;
}

void func_1() // Position - 0x119 (281)
{
	if (BUILTIN::TIMERB() > 10000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_45, 10f, 10f, 10f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			BUILTIN::SETTIMERB(0);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_52, false))
			{
				if (iLocal_42 == 0)
				{
					iLocal_44 == 0;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_55);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_52, pedLocal_53, 0);
					iLocal_44 == 0;
					TASK::TASK_WANDER_STANDARD(pedLocal_53, 1193033728, 0);
					iLocal_42 = 0;
				}
			}
		}
	}

	return;
}

BOOL func_2(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1E1 (481)
{
	float num;

	if (iParam4 == 2)
		num = 150f;
	else if (iParam4 == 1)
		num = 100f;
	else if (iParam4 == 0)
		num = 40f;

	switch (iParam3)
	{
		case 2:
			if (func_3(pedParam0, func_6(iParam1, 2, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(pedParam0, func_6(iParam1, 3, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(pedParam0, func_6(iParam1, 5, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(pedParam0, func_6(iParam1, 6, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(pedParam0, func_6(iParam1, 7, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(pedParam0, func_6(iParam1, 8, iParam2), num, iParam2, bParam5))
				return true;
		
			[[fallthrough]];
	
		case 1:
			if (func_3(pedParam0, func_6(iParam1, 1, iParam2), num, iParam2, bParam5))
				return true;
		
			[[fallthrough]];
	
		case 0:
			if (func_3(pedParam0, func_6(iParam1, 0, iParam2), num, iParam2, bParam5))
				return true;
			break;
	}

	return false;
}

BOOL func_3(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x314 (788)
{
	float num;
	Vector3 vector;

	if (iParam5 < 1f)
		num = 1f + 0.5f;
	else
		num = iParam5 + 0.5f;

	vector = { iParam5 + 0.2f, iParam5 + 0.2f, num };

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedParam0, vParam1), vector, false, true, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam4) && func_5(bParam6) && !PED::IS_PED_RAGDOLL(pedParam0) && !TASK::IS_PED_GETTING_UP(pedParam0))
		{
			func_4(pedParam0, true);
			return true;
		}
		else
		{
			func_4(pedParam0, false);
		}
	}

	return false;
}

void func_4(Ped pedParam0, BOOL bParam1) // Position - 0x3C7 (967)
{
	bParam1;
	!ENTITY::IS_ENTITY_DEAD(pedParam0, false);
	return;
}

BOOL func_5(BOOL bParam0) // Position - 0x3DF (991)
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		if (bParam0)
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 0f)
				return true;
		else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f)
			return true;

	return false;
}

Vector3 func_6(int iParam0, int iParam1, int iParam2) // Position - 0x42D (1069)
{
	var unk;

	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 1)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 3)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 2)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 1:
			if (iParam0 == 3)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 2)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 0)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 1)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 2:
			if (iParam0 == 2)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 3)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 1)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 0)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 3:
			if (iParam0 == 1)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 0)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 2)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 3)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 5:
			if (iParam0 == 1)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 0)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 3)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 2)
				unk = { -iParam2, -iParam2, 0f };
			break;
	
		case 6:
			if (iParam0 == 0)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 2)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 1)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 3)
				unk = { -iParam2, -iParam2, 0f };
			break;
	
		case 7:
			if (iParam0 == 3)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 1)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 2)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 0)
				unk = { -iParam2, -iParam2, 0f };
			break;
	
		case 8:
			if (iParam0 == 2)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 3)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 0)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 1)
				unk = { -iParam2, -iParam2, 0f };
			break;
	}

	if (iParam2 < 0f)
		iParam2 = iParam2 * -1f;

	return unk;
}

void func_7() // Position - 0x6C5 (1733)
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_45, 50f, 50f, 50f, false, true, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("A_M_O_Tramp_01"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_StrPunk_01"));
		STREAMING::REQUEST_ANIM_DICT("amb@drug_dealer");
	
		while (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_Tramp_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_StrPunk_01")) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@drug_dealer"))
		{
			BUILTIN::WAIT(0);
		}
	
		PED::ADD_RELATIONSHIP_GROUP("homeless", &hLocal_51);
		uLocal_48.f_2 = fLocal_45.f_2 - 1f;
		pedLocal_52 = PED::CREATE_PED(PED_TYPE_DEALER, joaat("A_M_O_Tramp_01"), fLocal_45, fLocal_45.f_1, uLocal_48.f_2, 0f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_52, hLocal_51);
	
		if (iLocal_42 == 1)
		{
			uLocal_48 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_52, 0.8f, 0.8f, -1f) };
			pedLocal_53 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("G_M_Y_StrPunk_01"), uLocal_48, 0f, true, true);
			PED::ADD_RELATIONSHIP_GROUP("homeless", &hLocal_51);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_53, hLocal_51);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_52, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_48, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_55);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, fLocal_45, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_55);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
			}
		}
	
		iLocal_43 = 1;
	}

	return;
}

BOOL func_8(int iParam0) // Position - 0x843 (2115)
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_27(6) || func_27(7))
				return true;
			else
				return func_8(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_9(4))
					return true;
			break;
	}

	return false;
}

BOOL func_9(int iParam0) // Position - 0x8B5 (2229)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_19(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_18() || Global_113417 || Global_33301 || func_17() || func_16(8, -1) || func_15() || func_14() || func_13() || func_12() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_18() || Global_33301 || func_17() || func_16(8, -1) || func_13() || func_15() || func_14() || func_12() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_18() || Global_113417 || Global_33301 || func_17() || func_16(8, -1) || func_13() || func_15() || func_14() || func_12() || Global_114370.f_7692.f_919[character] == 5 || Global_44939 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_18() || Global_113417 || Global_33301 || func_17() || func_16(8, -1) || func_15() || func_14() || func_12() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_18() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_16(8, -1) || func_12() || func_11() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_16(8, -1) || func_15() || func_14() || func_11() || func_10())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_18() || Global_33301 || func_17() || func_16(8, -1) || func_14() || func_13() || func_12() || Global_114370.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_18() || func_14() || Global_113417 || Global_33301 || func_17() || Global_45607 || func_16(8, -1) || func_13() || func_11() || func_12() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_18() || Global_113417 || Global_33301 || func_17() || func_16(8, -1) || func_13() || func_11() || func_15() || func_14() || func_12())
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

BOOL func_10() // Position - 0xFD2 (4050)
{
	return Global_101956.f_1;
}

BOOL func_11() // Position - 0xFE0 (4064)
{
	if (Global_98814 != -1)
		return IS_BIT_SET(Global_92680[Global_98814 /*34*/].f_15, 13);

	return false;
}

BOOL func_12() // Position - 0x1003 (4099)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_13() // Position - 0x101D (4125)
{
	if (Global_80029)
		return true;
	else if (Global_64517 && !Global_64523)
		return true;

	return false;
}

BOOL func_14() // Position - 0x1047 (4167)
{
	return Global_101969.f_400 > 0;
}

BOOL func_15() // Position - 0x1058 (4184)
{
	return Global_101969.f_399 > 0;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x1069 (4201)
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

BOOL func_17() // Position - 0x10A1 (4257)
{
	return Global_1575088;
}

BOOL func_18() // Position - 0x10AD (4269)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99370.f_44 == 1;

	return false;
}

BOOL func_19(eCharacter echParam0) // Position - 0x10C9 (4297)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x10D5 (4309)
{
	func_21();
	return Global_114370.f_2367.f_539.f_4321;
}

void func_21() // Position - 0x10EE (4334)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_19(character) && !func_27(14) || Global_113318)
			{
				if (Global_114370.f_2367.f_539.f_4321 != character && func_19(Global_114370.f_2367.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x11EB (4587)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1228 (4648)
{
	if (func_19(character))
		return func_24(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_24(eCharacter echParam0) // Position - 0x124D (4685)
{
	return Global_2241[echParam0 /*29*/];
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x125C (4700)
{
	return func_26(iParam0, Global_44392);
}

BOOL func_26(int iParam0, int iParam1) // Position - 0x126D (4717)
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

BOOL func_27(int iParam0) // Position - 0x144E (5198)
{
	return Global_44392 == iParam0;
}

void func_28() // Position - 0x145C (5212)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


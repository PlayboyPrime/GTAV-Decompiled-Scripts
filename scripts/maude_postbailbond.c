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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
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
	BOOL bLocal_76 = 0;
	Object obLocal_77 = 0;
	Object obLocal_78 = 0;
	Object obLocal_79 = 0;
	Ped pedLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

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
	sLocal_16 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_83 = -1;
	iLocal_84 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
		func_56();

	if (!func_52())
		func_56();

	if (!func_51(pedLocal_80))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_81 = MISC::GET_GAME_TIMER();
		iLocal_83 = func_49();
		iLocal_82 = 0;
		func_48(true, &uLocal_86);
	}

	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_51(pedLocal_80))
				func_56();
		
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedLocal_80, true) };
		
			if (BUILTIN::VDIST2(entityCoords, entityCoords2) >= 100f * 100f)
				func_56();
		
			switch (iLocal_85)
			{
				case 0:
					func_43(entityCoords2, entityCoords, 18000, 1101004800);
				
					if (func_25(&pedLocal_80, false))
					{
						func_24();
						func_16(false);
						func_12(entityCoords2, entityCoords);
						STREAMING::REQUEST_ANIM_DICT(func_11());
						iLocal_85 = 1;
					}
					break;
			
				case 1:
					if (func_5(&pedLocal_80, &obLocal_77, &iLocal_84))
						iLocal_85 = 2;
					break;
			
				case 2:
					if (!func_4(pedLocal_80, SCRIPT_TASK_SMART_FLEE_PED) && !PED::IS_PED_FLEEING(pedLocal_80))
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_80, func_11(), func_3(), 3))
							func_1();
					else
						func_56();
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x1B3 (435)
{
	if (func_51(pedLocal_80))
	{
		func_2(&pedLocal_80);
		TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_80, true);
	}

	return;
}

void func_2(var uParam0) // Position - 0x1E3 (483)
{
	if (func_51(*uParam0))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 64, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 128, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 8, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 32, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, BF_AlwaysFight, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, BF_AlwaysFlee, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 118, true);
	}

	return;
}

char* func_3() // Position - 0x24C (588)
{
	return "female_Flee_Table_Left_Maude";
}

BOOL func_4(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x256 (598)
{
	if (func_51(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_5(var uParam0, var uParam1, var uParam2) // Position - 0x289 (649)
{
	int num;

	if (func_51(*uParam0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, func_10(), func_9(), 3))
		{
			if (!PED::IS_PED_RAGDOLL(*uParam0) || TASK::IS_PED_GETTING_UP(*uParam0))
			{
				STREAMING::REQUEST_ANIM_DICT(func_11());
			
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_11()))
				{
					*uParam2 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam2, false);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam2, false);
				
					if (func_4(*uParam0, SCRIPT_TASK_SYNCHRONIZED_SCENE))
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -1000f, true);
				
					TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, *uParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, false, false);
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(*uParam1))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, func_10(), func_7(), 3))
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam1, -16f, false);
					
						num = 0;
						num = num + 16;
						num = num + 64;
						num = num + 512;
						num = num + 4096;
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*uParam1, *uParam2, func_6(), func_11(), 16f, -4f, num, 1148846080);
					}
				
					return true;
				}
			}
			else
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

char* func_6() // Position - 0x3D5 (981)
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7() // Position - 0x3E0 (992)
{
	return "base_chair";
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x3EB (1003)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

char* func_9() // Position - 0x40C (1036)
{
	return "base";
}

char* func_10() // Position - 0x417 (1047)
{
	return "special_ped@maude@base";
}

char* func_11() // Position - 0x422 (1058)
{
	return "special_ped@maude@exit_flee";
}

void func_12(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x42D (1069)
{
	if (func_51(pedLocal_80))
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedLocal_80))
			if (BUILTIN::VDIST2(vParam3, vParam0) < 35f * 35f)
				func_13(&pedLocal_80, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);

	return;
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x473 (1139)
{
	BOOL isAmbientSpeechDisabled;

	if (func_51(*uParam0))
	{
		isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(*uParam0);
	
		if (isAmbientSpeechDisabled)
			AUDIO::STOP_PED_SPEAKING(*uParam0, false);
	
		func_14(*uParam0, sParam1, sParam2, iParam3, false);
	
		if (isAmbientSpeechDisabled)
			AUDIO::STOP_PED_SPEAKING(*uParam0, true);
	}

	return;
}

void func_14(Ped pedParam0, char* sParam1, char* sParam2, int iParam3, BOOL bParam4) // Position - 0x4B6 (1206)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(pedParam0, sParam1, sParam2, func_15(iParam3), bParam4);
	return;
}

char* func_15(int iParam0) // Position - 0x4D0 (1232)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

void func_16(BOOL bParam0) // Position - 0x6C0 (1728)
{
	var string1;
	char* string2;

	if (func_23())
	{
		string1 = { func_22() };
		string2 = func_21();
	
		if (MISC::ARE_STRINGS_EQUAL(&string1, string2))
			if (bParam0)
				func_19();
			else
				func_17();
	}

	return;
}

void func_17() // Position - 0x6F8 (1784)
{
	Global_21468 = 0;
	func_18();
	return;
}

void func_18() // Position - 0x708 (1800)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23613 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22602 = 6;
	}

	return;
}

void func_19() // Position - 0x729 (1833)
{
	Global_21468 = 0;
	func_20();
	return;
}

void func_20() // Position - 0x739 (1849)
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23613 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22602 = 6;
		return;
	}

	return;
}

char* func_21() // Position - 0x75D (1885)
{
	if (IS_BIT_SET(Global_114370.f_24990, 3))
		return "BB4_loiter";
	else if (IS_BIT_SET(Global_114370.f_24990, 2))
		return "BB3_loiter";
	else if (IS_BIT_SET(Global_114370.f_24990, 1))
		return "BB2_loiter";
	else if (IS_BIT_SET(Global_114370.f_24990, 0))
		return "BB1_loiter";

	return "MAUDE_loiter";
}

struct<6> func_22() // Position - 0x7BE (1982)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_22602 == 4)
		return Global_22221;

	return unk;
}

BOOL func_23() // Position - 0x7E2 (2018)
{
	if (Global_22602 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_24() // Position - 0x804 (2052)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_79))
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_79, false);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_78))
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_78, false);

	return;
}

BOOL func_25(var uParam0, BOOL bParam1) // Position - 0x82C (2092)
{
	if (func_51(*uParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam0))
			return true;
	
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
				return true;
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_77))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), obLocal_77))
					return true;
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_78))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), obLocal_78))
					return true;
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_79))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), obLocal_79))
					return true;
		}
	
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 61))
			return true;
	
		if (PED::IS_PED_RAGDOLL(*uParam0))
			if (ENTITY::IS_ENTITY_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
				return true;
	
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 51))
			return true;
	
		if (func_33(*uParam0, 1126825984))
			return true;
	
		if (func_26(*uParam0, true, false, false, false))
			return true;
	
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 15f))
			return true;
	
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 73))
			return true;
	
		if (bParam1)
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				return true;
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_26(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x97E (2430)
{
	float radius;
	float num;
	int weaponHash;

	radius = 8f;
	num = 15f;

	if (bParam1 == false)
	{
		radius = 1.86f;
		num = 1.86f;
	}

	if (bParam2)
		radius = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (weaponHash == joaat("WEAPON_PETROLCAN"))
		{
			radius = 3f;
			num = 3f;
		}
	
		if (!bParam2)
		{
			if (func_32(pedParam0, bParam1, radius, num))
				return true;
		
			if (func_27(pedParam0, num, bParam3, bParam4))
				return true;
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), radius, true))
						return true;
			}
			else
			{
				if (bParam1)
				{
					radius = 1.86f;
					num = 1.86f;
				}
			
				if (func_32(pedParam0, bParam1, radius, num))
					return true;
			}
		
			if (func_27(pedParam0, num, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_27(Ped pedParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA79 (2681)
{
	float entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	num = { entityCoords };
	entityCoords = entityCoords - fParam1;
	entityCoords.f_1 = entityCoords.f_1 - fParam1;
	entityCoords.f_2 = entityCoords.f_2 - fParam1;
	num = num + fParam1;
	num.f_1 = num.f_1 + fParam1;
	num.f_2 = num.f_2 + fParam1;

	if (bParam2)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_GRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_MOLOTOV"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_SMOKEGRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, true))
		{
			if (bParam3)
				if (func_28(pedParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_28(pedParam0, fParam1))
				return true;
			else
				return false;
	
		if (MISC::IS_PROJECTILE_IN_AREA(entityCoords, num, true))
			return true;
	}

	return false;
}

BOOL func_28(Ped pedParam0, float fParam1) // Position - 0xB85 (2949)
{
	var outProjectile;
	var outCoords;

	if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_GRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_BZGAS"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_MOLOTOV"), fParam1, &outCoords, &outProjectile, false))
		if (func_29(pedParam0, outCoords, 90f, 0))
			return true;

	return false;
}

BOOL func_29(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xC1A (3098)
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_31(uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_31(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_30(entityForwardVector, unk);

	if (num <= BUILTIN::COS(fParam4 / 2f))
		return false;

	return true;
}

float func_30(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xCA8 (3240)
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_31(float fParam0, var uParam1, var uParam2) // Position - 0xCC9 (3273)
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

BOOL func_32(Ped pedParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0xD08 (3336)
{
	if (bParam1)
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, fParam3, fParam3, fParam3, false, true, 0))
				return true;

	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam2, true))
		return true;

	return false;
}

BOOL func_33(Object obParam0, int iParam1) // Position - 0xD50 (3408)
{
	float xSize;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(obParam0))
	{
		if (func_42(obParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), obParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				xSize = 40f;
			else
				xSize = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), obParam0, xSize, xSize, xSize, false, true, 0))
				if (func_34(obParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_34(Object obParam0, int iParam1) // Position - 0xDC6 (3526)
{
	return func_35(obParam0, PLAYER::PLAYER_PED_ID(), iParam1, 1, 250, 7);
}

BOOL func_35(Object obParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xDDE (3550)
{
	BOOL flag;
	var pedBoneCoords;
	int num;

	num = func_41(obParam0, pedParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(obParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam1))
	{
		if (num != -1)
			func_40(&iLocal_35[num /*4*/]);
	
		return false;
	}

	if (!func_39(obParam0, pedParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_38();
	
		if (num == -1)
			return false;
	
		iLocal_35[num /*4*/].f_1 = obParam0;
		iLocal_35[num /*4*/].f_2 = pedParam1;
	}

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(obParam0, 31086, 0f, 0f, 0f) };
	flag = func_36(&iLocal_35[num /*4*/], pedBoneCoords, pedParam1, &(iLocal_35[num /*4*/].f_3), obParam0, iParam5);
	return flag || MISC::GET_GAME_TIMER() - iLocal_35[num /*4*/].f_3 < iParam4;
}

BOOL func_36(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Ped pedParam4, var uParam5, Object obParam6, int iParam7) // Position - 0xE9F (3743)
{
	var hit;
	var endCoords;
	var surfaceNormal;
	Ped entityHit;
	int shapeTestResult;

	entityHit = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		endCoords = { func_37(pedParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, endCoords + ((endCoords - vParam1) * { 0.1f, 0.1f, 0.1f }), 511, obParam6, 7);
		return 0;
	}

	shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (shapeTestResult == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (shapeTestResult == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityHit) == pedParam4)
		{
			if (bLocal_76)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityHit) == PED::GET_VEHICLE_PED_IS_IN(pedParam4, false))
			{
				if (bLocal_76)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_37(Ped pedParam0, int iParam1) // Position - 0xFCB (4043)
{
	int randomIntInRange;

	if (iParam1 == 7)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = randomIntInRange;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(pedParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(pedParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(pedParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(pedParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(pedParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
}

int func_38() // Position - 0x1090 (4240)
{
	int i;

	for (i = 0; i < iLocal_35; i = i + 1)
	{
		if (iLocal_35[i /*4*/] == 0 && iLocal_35[i /*4*/].f_1 == 0 && iLocal_35[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_39(Object obParam0, Ped pedParam1, int iParam2, int iParam3) // Position - 0x10DA (4314)
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_31(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(obParam0, true)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(obParam0) };
	else
		entityForwardVector = { func_31(PED::GET_PED_BONE_COORDS(obParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(obParam0, 31086, 0f, 0f, 0f)) };

	num = func_30(entityForwardVector, unk);

	if (num <= BUILTIN::COS(iParam2 / 2f))
		return false;

	return true;
}

void func_40(var uParam0) // Position - 0x116B (4459)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_41(Object obParam0, Ped pedParam1) // Position - 0x1186 (4486)
{
	int i;

	for (i = 0; i < iLocal_35; i = i + 1)
	{
		if (iLocal_35[i /*4*/].f_1 == obParam0 && iLocal_35[i /*4*/].f_2 == pedParam1)
			return i;
	}

	return -1;
}

BOOL func_42(Object obParam0) // Position - 0x11C5 (4549)
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), obParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return true;

	return false;
}

int func_43(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, int iParam7) // Position - 0x11ED (4589)
{
	var unk;
	char* str;
	char* str2;

	if (iLocal_82 < iLocal_83)
	{
		if (!func_23())
		{
			if (BUILTIN::VDIST2(vParam3, vParam0) < iParam7 * iParam7)
			{
				if (MISC::GET_GAME_TIMER() - iLocal_81 > iParam6 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))
				{
					unk = 16;
					_CONVERSATION_INITIALIZE_ACTOR(&unk, 3, pedLocal_80, "MAUDE", 0, 1);
					str = func_46();
					str2 = func_21();
					_CONVERSATION_ADD_LINE_NO_SUBTITLE(&unk, str, str2, 7, 0, 0);
					iLocal_81 = MISC::GET_GAME_TIMER();
					iLocal_82 = iLocal_82 + 1;
					return 1;
				}
			}
		}
		else
		{
			iLocal_81 = MISC::GET_GAME_TIMER();
		}
	}

	return 0;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1277 (4727)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_21468, 0);
	Global_22605 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_22592, sParam2, 24);
	return;
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x12B2 (4786)
{
	Global_22056 = { *uParam0 };
	Global_8391 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22672, sParam2, 24);
	Global_23591 = iParam5;

	if (iParam3 == 0)
	{
		Global_23589 = 1;
		Global_23587 = 0;
	}
	else
	{
		Global_23589 = 0;
		Global_23587 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23590 = 1;
		Global_23588 = 0;
	}
	else
	{
		Global_23590 = 0;
		Global_23588 = 1;
	}

	return;
}

char* func_46() // Position - 0x1308 (4872)
{
	if (IS_BIT_SET(Global_114370.f_24990, 3))
		return "BB4AUD";
	else if (IS_BIT_SET(Global_114370.f_24990, 2))
		return "BB3AUD";
	else if (IS_BIT_SET(Global_114370.f_24990, 1))
		return "BB2AUD";
	else if (IS_BIT_SET(Global_114370.f_24990, 0))
		return "BB1AUD";

	return "MAUDEAU";
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1369 (4969)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79768)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

void func_48(BOOL bParam0, var uParam1) // Position - 0x1404 (5124)
{
	Vector3 vector;
	Vector3 vector2;

	vector = { 2711.1978f, 4134.4253f, 32.90168f };
	vector2 = { 2739.9814f, 4155.2207f, 50.28859f };

	if (bParam0)
	{
		*uParam1 = PED::ADD_SCENARIO_BLOCKING_AREA(vector, vector2, false, true, true, true, 1);
		PED::SET_PED_NON_CREATION_AREA(vector, vector2);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vector, vector2, false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(vector, vector2, 0);
		PATHFIND::SET_ROADS_IN_AREA(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, false, true);
		MISC::CLEAR_AREA(2728.3328f, 4144.778f, 43.29292f, 7.5f, true, false, false, false);
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
		PED::CLEAR_PED_NON_CREATION_AREA();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vector, vector2, true, true);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 1);
	}

	return;
}

int func_49() // Position - 0x14F2 (5362)
{
	if (IS_BIT_SET(Global_114370.f_24990, 3))
		return 4;
	else if (IS_BIT_SET(Global_114370.f_24990, 2))
		return 4;
	else if (IS_BIT_SET(Global_114370.f_24990, 1))
		return 4;
	else if (IS_BIT_SET(Global_114370.f_24990, 0))
		return 3;

	return 4;
}

void func_50() // Position - 0x1544 (5444)
{
	Vector3 vector;

	if (func_51(pedLocal_80))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_80))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_80, true, false);
	
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_80, true);
		PED::SET_PED_MONEY(pedLocal_80, 0);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_80, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_80, joaat("PLAYER"));
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(pedLocal_80, false);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(pedLocal_80, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_80, 118, false);
		vector = { 2728.33f, 4145.6f, 43.89f };
	
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vector, 10f, joaat("prop_table_03b"), false))
		{
			obLocal_78 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vector, 10f, joaat("prop_table_03b"), true, false, true);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_78))
			{
				ENTITY::SET_ENTITY_COORDS(obLocal_78, 2727.4f, 4145.56f, 43.68f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(obLocal_78, -92.17f);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_78, true);
			}
		}
	
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vector, 10f, joaat("prop_laptop_01a"), false))
		{
			obLocal_79 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vector, 10f, joaat("prop_laptop_01a"), false, false, true);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_79))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(obLocal_79))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obLocal_79, true, false);
			
				ENTITY::SET_ENTITY_COORDS(obLocal_79, 2727.686f, 4145.715f, 44.08f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(obLocal_79, 71f);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_79, true);
			}
		}
	
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vector, 10f, joaat("prop_table_03_chr"), false))
		{
			obLocal_77 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vector, 10f, joaat("prop_table_03_chr"), false, false, true);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_77))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(obLocal_77))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obLocal_77, true, false);
			
				ENTITY::SET_ENTITY_COORDS(obLocal_77, 2728.35f, 4145.59f, 43.3f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(obLocal_77, -91.28f);
			}
		}
	}

	return;
}

BOOL func_51(Ped pedParam0) // Position - 0x16F1 (5873)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_52() // Position - 0x1711 (5905)
{
	int pedNearbyPeds;
	int i;
	var sizeAndPeds;

	sizeAndPeds = 32;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		pedNearbyPeds = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
	
		for (i = 0; i < pedNearbyPeds; i = i + 1)
		{
			if (func_51(sizeAndPeds[i]))
			{
				if (ENTITY::GET_ENTITY_MODEL(sizeAndPeds[i]) == func_53(62))
				{
					pedLocal_80 = sizeAndPeds[i];
					return true;
				}
			}
		}
	}

	return false;
}

Hash func_53(int iParam0) // Position - 0x1778 (6008)
{
	if (!func_55(iParam0))
		return func_54(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_54(int iParam0) // Position - 0x179E (6046)
{
	return Global_2241[iParam0 /*29*/];
}

BOOL func_55(int iParam0) // Position - 0x17AD (6061)
{
	return iParam0 < 3;
}

void func_56() // Position - 0x17B9 (6073)
{
	func_48(false, &uLocal_86);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_79))
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_79, false);

	func_58(&obLocal_79, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_78))
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_78, false);

	func_58(&obLocal_78, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(obLocal_77))
	{
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_77, false);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(obLocal_77, "special_ped@maude@base", "base_chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(obLocal_77, "base_chair", "special_ped@maude@base", -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(obLocal_77, -1000f, true);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(obLocal_77, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(obLocal_77, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(obLocal_77, -1000f, true);
		}
	}

	func_58(&obLocal_77, false);

	if (func_51(pedLocal_80))
	{
		PED::SET_PED_KEEP_TASK(pedLocal_80, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_80, 118, true);
	}

	func_57(&pedLocal_80, true, 0, 1);
	STREAMING::REMOVE_ANIM_DICT(func_11());
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_57(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x189E (6302)
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

void func_58(Object* pobParam0, BOOL bParam1) // Position - 0x18EE (6382)
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		if (!bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		else
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*pobParam0);
	}

	return;
}


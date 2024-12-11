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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 80;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}

	return;
}

void func_1() // Position - 0x49
{
	if (Global_1836593 == 0 || Global_1836593 == 2)
		iLocal_18 = 3;

	switch (iLocal_18)
	{
		case 0:
			func_111();
			break;
	
		case 1:
			func_12();
			break;
	
		case 2:
			func_6();
			break;
	
		case 3:
			func_2();
			break;
	}

	return;
}

void func_2() // Position - 0xA4
{
	int i;

	GRAPHICS::DRAW_DEBUG_TEXT_2D("LPOP_STATE_CLEANUP", func_5(), 0, 0, 255, 255);

	if (iLocal_22 > MISC::GET_FRAME_COUNT())
		return;

	iLocal_22 = MISC::GET_FRAME_COUNT() + 1;

	for (i = iLocal_20 - 1; i >= 0; i = i + -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_23[i]))
			ENTITY::DELETE_ENTITY(&uLocal_23[i]);
	
		iLocal_20 = iLocal_20 - 1;
	
		if (iLocal_20 == 0)
			break;
	}

	if (iLocal_20 > 0)
		return;

	switch (iLocal_19)
	{
		case 1:
			func_3();
			break;
	}

	Global_1836593 = 0;
	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_1836589[i] = 0;
	}

	Global_1836588 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x153
{
	func_4(false);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area");
	return;
}

void func_4(BOOL bParam0) // Position - 0x167
{
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", bParam0);
	AUDIO::LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER" /*Media Player*/, bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_03", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_04", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_05", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_Takeover", bParam0);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG", bParam0, true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG_2", bParam0, true);

	if (bParam0)
	{
		AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_36_AUDIOPLAYER" /*Media Player*/);
		AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER" /*Media Player*/, "TUNER_AP_MIX3_PARTC");
		AUDIO::STOP_AUDIO_SCENE("MP_POSITIONED_RADIO_MUTE_SCENE");
		AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /*Media Player*/, "TUNER_AP_MIX3_PARTC", 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_01", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_02", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_03", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_04", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_05", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
	}
	else
	{
		AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
	}

	return;
}

Vector3 func_5() // Position - 0x24F
{
	return 0f, 0f, 0f;
}

void func_6() // Position - 0x25A
{
	function func;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1768762336) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1085924656) == 0)
		iLocal_18 = 3;

	if (IS_BIT_SET(Global_1836588, 1))
		return;

	switch (iLocal_19)
	{
		case 0:
			iLocal_18 = 3;
			break;
	
		case 1:
			func = &func_8;
			break;
	}

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		while (!IS_BIT_SET(Global_1836588, 1))
		{
			func(&uLocal_23, &iLocal_21);
			SYSTEM::WAIT(0);
		}
	
		return;
	}

	if (iLocal_22 > MISC::GET_FRAME_COUNT())
		return;

	iLocal_22 = MISC::GET_FRAME_COUNT() + 1;

	if (func_7(&Global_1836589, iLocal_21))
	{
		iLocal_21 = iLocal_21 + 1;
		return;
	}

	func(&uLocal_23, &iLocal_21);
	return;
}

BOOL func_7(var uParam0, int iParam1) // Position - 0x30F
{
	return IS_BIT_SET(uParam0->[iParam1 / 32], iParam1 & 31);
}

void func_8(var uParam0, var uParam1) // Position - 0x326
{
	Vehicle vehicleIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex;

	if (*uParam1 > 74)
		return;

	if (*uParam1 == 0 && !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area", false, -1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[*uParam1]) || ENTITY::IS_ENTITY_DEAD(uParam0->[*uParam1], false))
	{
		*uParam1 = *uParam1 + 1;
		return;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->[*uParam1]))
	{
		vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->[*uParam1]);
	
		if (*uParam1 == 10 || *uParam1 == 11 || *uParam1 == 12 || *uParam1 == 14 || *uParam1 == 15 || *uParam1 == 16 || *uParam1 == 17 || *uParam1 == 18 || *uParam1 == 19 || *uParam1 == 20 || *uParam1 == 21 || *uParam1 == 22 || *uParam1 == 23 || *uParam1 == 24 || *uParam1 == 26 || *uParam1 == 27)
			VEHICLE::SET_VEHICLE_ENGINE_ON(vehicleIndexFromEntityIndex, true, true, false);
	
		if (*uParam1 == 22)
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->[*uParam1], true);
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0->[*uParam1]))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->[*uParam1]);
	
		if (*uParam1 == 28)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 29)
		{
			if (!func_10(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_car@female_b@idles", "idle_a", *uParam1))
				return;
		}
		else if (*uParam1 == 44)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 42)
		{
			if (!func_10(pedIndexFromEntityIndex, "anim@heists@prison_heiststation@cop_reactions", "drunk_idle", *uParam1))
				return;
		}
		else if (*uParam1 == 31)
		{
			if (!func_10(pedIndexFromEntityIndex, "anim@amb@carmeet@take_photos@female_b@idles", "idle_b", *uParam1))
				return;
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->[74]))
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->[74], pedIndexFromEntityIndex, PED::GET_PED_BONE_INDEX(pedIndexFromEntityIndex, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
		else if (*uParam1 == 49)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 53)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 55)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 60)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 36)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 37)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_hang_out_street@male_b@idle_a", "idle_a", *uParam1))
				return;
		}
		else if (*uParam1 == 38)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 63)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 40)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 41)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 67)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 43)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 45)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 46)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 47)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 48)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 30)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 50)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 51)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 52)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 32)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 54)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 33)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 56)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 57)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 58)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 59)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 34)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->[9]))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->[9], pedIndexFromEntityIndex, false);
			
				if (!func_10(pedIndexFromEntityIndex, "amb@world_human_seat_wall@male@hands_by_sides@idle_a", "idle_a", *uParam1))
					return;
			}
			else
			{
				func_9(pedIndexFromEntityIndex, *uParam1);
			}
		}
		else if (*uParam1 == 66)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 39)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 68)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING_POT", *uParam1);
		}
		else
		{
			func_9(pedIndexFromEntityIndex, *uParam1);
		}
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->[*uParam1]))
	{
		if (*uParam1 == 69)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_01", uParam0->[*uParam1]);
		else if (*uParam1 == 70)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_02", uParam0->[*uParam1]);
		else if (*uParam1 == 71)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_03", uParam0->[*uParam1]);
		else if (*uParam1 == 72)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_04", uParam0->[*uParam1]);
		else if (*uParam1 == 73)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_05", uParam0->[*uParam1]);
	
		if (*uParam1 > 68 && *uParam1 < 74)
		{
			ENTITY::SET_ENTITY_COLLISION(uParam0->[*uParam1], false, false);
			ENTITY::SET_ENTITY_ALPHA(uParam0->[*uParam1], 0, false);
		}
	}

	*uParam1 = *uParam1 + 1;

	if (*uParam1 >= 74)
	{
		func_4(true);
		MISC::SET_BIT(&Global_1836588, 1);
	}

	return;
}

void func_9(Ped pedParam0, var uParam1) // Position - 0xA64
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 9))
	{
		case 1:
			func_11(pedParam0, "WORLD_HUMAN_AA_COFFEE", uParam1);
			break;
	
		case 2:
			func_11(pedParam0, "WORLD_HUMAN_AA_SMOKE", uParam1);
			break;
	
		case 3:
			func_11(pedParam0, "WORLD_HUMAN_DRINKING", uParam1);
			break;
	
		case 4:
			func_11(pedParam0, "WORLD_HUMAN_DRINKING_FACILITY", uParam1);
			break;
	
		case 5:
			func_11(pedParam0, "WORLD_HUMAN_SMOKING", uParam1);
			break;
	
		case 6:
			func_11(pedParam0, "WORLD_HUMAN_SMOKING_CLUBHOUSE", uParam1);
			break;
	
		case 7:
			func_11(pedParam0, "WORLD_HUMAN_SMOKING_POT", uParam1);
			break;
	
		case 8:
			func_11(pedParam0, "WORLD_HUMAN_STAND_IMPATIENT", uParam1);
			break;
	}

	return;
}

BOOL func_10(Ped pedParam0, char* sParam1, char* sParam2, var uParam3) // Position - 0xB28
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, sParam1, sParam2, 1))
		return true;

	STREAMING::REQUEST_ANIM_DICT(sParam1);

	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam1))
	{
		TASK::TASK_PLAY_ANIM(pedParam0, sParam1, sParam2, 8f, -8f, -1, 9, 0, false, false, false);
		return true;
	}

	return false;
}

BOOL func_11(Ped pedParam0, char* sParam1, var uParam2) // Position - 0xB71
{
	BOOL isPedUsingScenario;

	isPedUsingScenario = PED::IS_PED_USING_SCENARIO(pedParam0, sParam1);

	if (!isPedUsingScenario)
		TASK::TASK_START_SCENARIO_IN_PLACE(pedParam0, sParam1, 0, true);

	return isPedUsingScenario;
}

void func_12() // Position - 0xB95
{
	var unk;
	function func;
	function func2;
	BOOL flag;
	int num;
	int networkTime;

	unk.f_6 = -1;
	unk.f_7 = -1;

	switch (iLocal_19)
	{
		case 1:
			func = &func_110;
			func2 = &func_15;
			break;
	}

	iLocal_22 = MISC::GET_FRAME_COUNT();
	flag = false;

	while (iLocal_20 < 80)
	{
		if (func_7(&Global_1836589, iLocal_20))
		{
			iLocal_20 = iLocal_20 + 1;
		}
		else if (iLocal_22 > MISC::GET_FRAME_COUNT())
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (networkTime == 0)
				networkTime = NETWORK::GET_NETWORK_TIME();
		
			func(&unk, iLocal_20);
		
			if (!StackVal)
				break;
		
			num = iLocal_20;
			flag = func_14(&unk);
		
			if (!flag)
			{
				SYSTEM::WAIT(0);
			}
			else
			{
				func_13(&unk);
			
				if (func2 != &main)
					func2(num, &uLocal_23[num]);
			
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					if (iLocal_20 != 0 && networkTime != 0 && iLocal_20 % 2 == 0)
						iLocal_22 = MISC::GET_FRAME_COUNT() + 1;
			
				networkTime = 0;
			}
		}
	}

	MISC::SET_BIT(&Global_1836588, 0);
	iLocal_21 = 0;
	iLocal_18 = 2;
	return;
}

void func_13(var uParam0) // Position - 0xC93
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = { 0f, 0f, 0f };
	uParam0->f_5 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	return;
}

BOOL func_14(var uParam0) // Position - 0xCC1
{
	Ped ped;
	Vehicle vehicle;
	Object object;

	STREAMING::REQUEST_MODEL(uParam0->f_1);

	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
		return 0;

	if (*uParam0 == 1)
	{
		if (uParam0->f_6 != -1 && ENTITY::DOES_ENTITY_EXIST(uLocal_23[uParam0->f_6]) && ENTITY::IS_ENTITY_A_VEHICLE(uLocal_23[uParam0->f_6]))
			ped = PED::CREATE_PED_INSIDE_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uLocal_23[uParam0->f_6]), PED_TYPE_MISSION, uParam0->f_1, uParam0->f_7, false, false);
		else
			ped = PED::CREATE_PED(PED_TYPE_MISSION, uParam0->f_1, uParam0->f_2, uParam0->f_5, false, false);
	
		PED::SET_PED_TREATED_AS_FRIENDLY(ped, 1, 1);
		PED::SET_PED_CONFIG_FLAG(ped, 150, true);
		PED::SET_PED_FLEE_ATTRIBUTES(ped, 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(ped, 1024, false);
		PED::SET_PED_FLEE_ATTRIBUTES(ped, 32768, true);
		uLocal_23[iLocal_20] = ped;
	}

	if (*uParam0 == 2)
	{
		vehicle = VEHICLE::CREATE_VEHICLE(uParam0->f_1, uParam0->f_2, uParam0->f_5, false, false, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(vehicle, 3);
		uLocal_23[iLocal_20] = vehicle;
	}

	if (*uParam0 == 3)
	{
		object = OBJECT::CREATE_OBJECT(uParam0->f_1, uParam0->f_2, false, false, false);
		uLocal_23[iLocal_20] = object;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_23[iLocal_20]))
		return 0;

	ENTITY::SET_ENTITY_INVINCIBLE(uLocal_23[iLocal_20], true, 0);

	if (uParam0->f_6 == -1)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_23[iLocal_20], uParam0->f_2, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_23[iLocal_20], true);
	}

	if (uParam0->f_8)
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);

	iLocal_20 = iLocal_20 + 1;
	return 1;
}

void func_15(int iParam0, var uParam1) // Position - 0xE2D
{
	Vehicle vehicleIndexFromEntityIndex;
	int num;
	Ped pedIndexFromEntityIndex;

	if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam1))
	{
		vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam1);
		num.f_9 = 49;
		num.f_59 = 2;
		num.f_78 = -1;
		num.f_79 = -1;
		num.f_96 = -1;
		num.f_97 = 1;
		num.f_99 = 132;
		num.f_100 = -1;
	
		if (iParam0 == 0)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "43MLR467", 16);
			num.f_5 = 135;
			num.f_6 = 135;
			num.f_7 = 135;
			num.f_8 = 135;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 171;
			num.f_75 = 63;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 12;
		}
		else if (iParam0 == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "42OTM958", 16);
			num.f_5 = 92;
			num.f_6 = 92;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[4] = 1;
			num.f_9[5] = 1;
			num.f_9[6] = 2;
			num.f_9[10] = 2;
			num.f_9[23] = 8;
			num.f_9[48] = 13;
		}
		else if (iParam0 == 2)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "42PHO918", 16);
			num.f_5 = 128;
			num.f_6 = 111;
			num.f_7 = 128;
			num.f_8 = 128;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 15;
		}
		else if (iParam0 == 3)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "63ADH761", 16);
			num.f_5 = 27;
			num.f_6 = 27;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 2;
			num.f_9[4] = 3;
			num.f_9[5] = 1;
			num.f_9[7] = 5;
			num.f_9[15] = 4;
			num.f_9[23] = 6;
			num.f_9[24] = 1;
		}
		else if (iParam0 == 4)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "47RNO136", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[1] = 2;
			num.f_9[2] = 1;
			num.f_9[5] = 1;
			num.f_9[7] = 4;
			num.f_9[15] = 2;
			num.f_9[23] = 8;
			num.f_9[24] = 1;
			num.f_9[48] = 3;
		}
		else if (iParam0 == 5)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 0, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 0, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "56RAF112", 16);
			num.f_5 = 12;
			num.f_6 = 12;
			num.f_7 = 12;
			num.f_8 = 12;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 2;
		}
		else if (iParam0 == 6)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "66PJT141", 16);
			num.f_5 = 34;
			num.f_6 = 34;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 3;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[27] = 14;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 7)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "40AJF699", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 15;
			num.f_8 = 15;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 14;
		}
		else if (iParam0 == 8)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "82YLM383", 16);
			num.f_5 = 12;
			num.f_6 = 12;
			num.f_7 = 12;
			num.f_8 = 12;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 13;
		}
		else if (iParam0 == 9)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "69TJS608", 16);
			num.f_5 = 88;
			num.f_6 = 19;
			num.f_7 = 88;
			num.f_8 = 88;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 12;
		}
		else if (iParam0 == 10)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "03QMA772", 16);
			num.f_5 = 15;
			num.f_6 = 27;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 2;
			num.f_9[23] = 8;
			num.f_9[24] = 1;
			num.f_9[48] = 3;
		}
		else if (iParam0 == 11)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "45MCA163", 16);
			num = 3;
			num.f_5 = 12;
			num.f_6 = 12;
			num.f_7 = 12;
			num.f_8 = 12;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			MISC::SET_BIT(&(num.f_77), 1);
			num.f_9[48] = 5;
		}
		else if (iParam0 == 12)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "43QZA094", 16);
			num = 3;
			num.f_5 = 88;
			num.f_6 = 88;
			num.f_7 = 88;
			num.f_8 = 88;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 217;
			num.f_75 = 166;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			MISC::SET_BIT(&(num.f_77), 2);
			num.f_9[22] = 1;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 13)
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 5, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 5, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "82BPG904", 16);
			num.f_5 = 34;
			num.f_6 = 34;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 3;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[8] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[27] = 14;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 14)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "61OEN493", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[4] = 1;
			num.f_9[5] = 1;
			num.f_9[6] = 2;
			num.f_9[10] = 2;
			num.f_9[23] = 8;
			num.f_9[48] = 13;
		}
		else if (iParam0 == 15)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "00BUC112", 16);
			num.f_5 = 145;
			num.f_6 = 145;
			num.f_7 = 145;
			num.f_8 = 145;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 176;
			num.f_75 = 18;
			num.f_76 = 89;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 16;
		}
		else if (iParam0 == 16)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "42YAG396", 16);
			num.f_5 = 148;
			num.f_6 = 148;
			num.f_7 = 148;
			num.f_8 = 148;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 15;
		}
		else if (iParam0 == 17)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "80QDM423", 16);
			num.f_5 = 18;
			num.f_6 = 18;
			num.f_7 = 18;
			num.f_8 = 18;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 14;
		}
		else if (iParam0 == 18)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "89AXX718", 16);
			num.f_5 = 111;
			num.f_6 = 111;
			num.f_7 = 111;
			num.f_8 = 111;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 87;
			num.f_75 = 89;
			num.f_76 = 97;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 10;
		}
		else if (iParam0 == 19)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 3, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "46ODB296", 16);
			num.f_5 = 62;
			num.f_6 = 62;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 20)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 3, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "01OWK692", 16);
			num.f_5 = 62;
			num.f_6 = 62;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 21)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 3, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "83NGU235", 16);
			num.f_5 = 62;
			num.f_6 = 62;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[5] = 1;
			num.f_9[23] = 8;
			num.f_9[24] = 1;
			num.f_9[48] = 3;
		}
		else if (iParam0 == 22)
		{
			ENTITY::FREEZE_ENTITY_POSITION(vehicleIndexFromEntityIndex, false);
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "02HJE974", 16);
			num.f_5 = 137;
			num.f_6 = 137;
			num.f_7 = 137;
			num.f_8 = 137;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 143;
			num.f_75 = 47;
			num.f_76 = 85;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 9;
		}
		else if (iParam0 == 23)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "61KDG752", 16);
			num.f_5 = 111;
			num.f_6 = 111;
			num.f_7 = 111;
			num.f_8 = 111;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 240;
			num.f_75 = 240;
			num.f_76 = 240;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 14;
		}
		else if (iParam0 == 24)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "65TLM709", 16);
			num.f_5 = 135;
			num.f_6 = 135;
			num.f_7 = 135;
			num.f_8 = 135;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 10;
		}
		else if (iParam0 == 25)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "03SVZ064", 16);
			num.f_5 = 31;
			num.f_6 = 31;
			num.f_7 = 31;
			num.f_8 = 31;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 15;
		}
		else if (iParam0 == 26)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "01PMT053", 16);
			num.f_5 = 67;
			num.f_6 = 67;
			num.f_7 = 67;
			num.f_8 = 67;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 12;
		}
		else if (iParam0 == 27)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "81QBV287", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 3;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[8] = 1;
			num.f_9[23] = 3;
			num.f_9[48] = 7;
		}
	
		func_16(vehicleIndexFromEntityIndex, &num, false, true, false);
	}
	else if (ENTITY::IS_ENTITY_A_PED(*uParam1))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
	
		if (iParam0 == 28)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 29)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 30)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 31)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 32)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 33)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 34)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 2, 0, false, 1);
		}
		else if (iParam0 == 35)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 36)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 37)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 38)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 39)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 40)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 41)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 42)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 4, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 43)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 44)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 0, 0, false, 1);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 45)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 46)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 47)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 48)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 49)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
		}
		else if (iParam0 == 50)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 51)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 52)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 53)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 54)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 55)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 56)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
		}
		else if (iParam0 == 57)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 58)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 59)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 60)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 61)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 62)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
		}
		else if (iParam0 == 63)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 64)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 0, 0, false, 1);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 65)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 66)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 67)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 68)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
	}

	return;
}

void func_16(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x34E7
{
	Hash entityModel;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (PLAYER::PLAYER_ID() != _INVALID_PLAYER_INDEX())
				uParam1->f_100 = PLAYER::PLAYER_ID();
		
			if (uParam1->f_70 == 0)
				uParam1->f_70 = 1;
		
			func_82(veParam0, uParam1, bParam2, bParam3);
		
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, true);
				}
			}
		
			if (func_81(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (uParam1->f_9[44] == 2)
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
				else
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
		
			if (func_80(ENTITY::GET_ENTITY_MODEL(veParam0)))
			{
				if (IS_BIT_SET(uParam1->f_103, 0) || func_79(ENTITY::GET_ENTITY_MODEL(veParam0)))
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
					func_78(veParam0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
					func_77(veParam0);
				}
			}
		
			if (!(uParam1->f_78 == -1) && uParam1->f_9[14] == -1)
				AUDIO::OVERRIDE_VEH_HORN(veParam0, true, uParam1->f_78);
		
			if (!(uParam1->f_79 == -1))
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(veParam0, uParam1->f_79);
		
			if (func_76(uParam1->f_66, &num) && uParam1->f_80 != num)
				uParam1->f_80 = num;
		
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(veParam0, uParam1->f_80);
		
			if (uParam1->f_97 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(veParam0, uParam1->f_97);
		
			if (uParam1->f_99 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, uParam1->f_99);
		
			if (func_75(veParam0))
				func_69(veParam0, func_72(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam0) > 1 && uParam1->f_98 >= 0)
				VEHICLE::SET_VEHICLE_LIVERY2(veParam0, uParam1->f_98);
		
			if (IS_BIT_SET(uParam1->f_95, 0))
				func_39(veParam0, &(uParam1->f_81));
		
			if (!func_29(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_21(veParam0);
		
			if (func_20(entityModel))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						break;
				
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 0, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						break;
				
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 1, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 3, false);
						break;
				
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						break;
				
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						
							if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
							else
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						}
						break;
				}
			}
		
			if (func_18(ENTITY::GET_ENTITY_MODEL(veParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
					
						if (uParam1->f_9[16] == 5)
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21454 + 0.05f);
						else
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21454);
					
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				}
			}
		
			switch (uParam1->f_94)
			{
				case 0:
					break;
			
				case 1:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
					{
						if (IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", INT))
					{
						DECORATOR::DECOR_SET_INT(veParam0, "Player_Vehicle", -1);
					}
					break;
			
				case 2:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
						if (IS_GAMER_HANDLE_VALID(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						else
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", -1);
					break;
			
				case 3:
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x3A12
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL func_18(Hash hParam0) // Position - 0x3A22
{
	return func_81(hParam0) && !func_19(hParam0);
}

BOOL func_19(Hash hParam0) // Position - 0x3A3C
{
	switch (hParam0)
	{
		case 610429990:
		case 802856453:
		case -122993285:
		case -863358884:
		case 1121330119:
			return true;
	}

	return false;
}

BOOL func_20(Hash hParam0) // Position - 0x3A71
{
	switch (hParam0)
	{
		case 1653666139:
		case 1945374990:
		case 219613597:
		case -44799464:
		case 444994115:
		case -27326686:
		case -801550069:
		case 668439077:
		case -688189648:
		case 540101442:
		case 628003514:
		case 1637620610:
		case -1812949672:
		case 679453769:
		case -1694081890:
		case -1375060657:
		case -1106120762:
		case 1537277726:
		case -755532233:
		case -1374500452:
		case 1909700336:
		case -2042350822:
		case -1293924613:
		case -1478704292:
		case 1239571361:
		case 1009171724:
		case -1924800695:
		case -1744505657:
		case -2061049099:
		case 373261600:
		case 1742022738:
		case 1721676810:
		case 840387324:
		case -715746948:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 2139203625:
		case -1890996696:
		case 2038858402:
			return true;
	}

	return false;
}

void func_21(Vehicle veParam0) // Position - 0x3B78
{
	Hash entityModel;

	if (Global_262145.f_19899)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veParam0))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
				entityModel.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0));
			
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", INT))
				{
					if (!DECORATOR::DECOR_EXIST_ON(veParam0, "RandomID"))
					{
						entityModel.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(veParam0, "RandomID", entityModel.f_2);
					}
					else
					{
						entityModel.f_2 = DECORATOR::DECOR_GET_INT(veParam0, "RandomID");
					}
				}
			
				func_22(entityModel);
			}
		}
	}

	return;
}

void func_22(var uParam0, var uParam1, var uParam2) // Position - 0x3C07
{
	Hash eventData;

	eventData = -1251853784;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = uParam0;
	eventData.f_3.f_1 = uParam0.f_1;
	eventData.f_3.f_2 = uParam0.f_2;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 6, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true), eventData);
	return;
}

int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x3C48
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != PLAYER::PLAYER_ID() || includeLocalPlayer)
				if (includeSpectators)
					MISC::SET_BIT(&address, i);
				else if (!func_24(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_24(Player plParam0, int iParam1) // Position - 0x3CAD
{
	BOOL flag;

	if (!func_27(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_25(-1, false) == 8;
	else
		flag = Global_1845221[plParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_25(int iParam0, BOOL bParam1) // Position - 0x3D06
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_26();

	if (Global_1575064[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

int func_26() // Position - 0x3D47
{
	return Global_1574926;
}

BOOL func_27(Player plParam0) // Position - 0x3D53
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x3D75
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_29(int iParam0) // Position - 0x3DD5
{
	int i;

	if (func_38())
	{
		for (i = 0; i < 62; i = i + 1)
		{
			if (func_37(i) == iParam0)
				if (func_30(i))
					return true;
		}
	}

	return false;
}

BOOL func_30(int iParam0) // Position - 0x3E10
{
	return func_31(iParam0, 6, true);
}

BOOL func_31(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3E20
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101740.f_1421[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_36() == 0)
			return IS_BIT_SET(func_32(func_35(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114135.f_668[iParam0], iParam1);

	return false;
}

int func_32(int iParam0, int iParam1) // Position - 0x3E80
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_33(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_33(int iParam0, int iParam1) // Position - 0x3EAF
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_34(iParam1));
}

int func_34(int iParam0) // Position - 0x3EC4
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_26();
	
		if (num2 > -1)
		{
			Global_2751934 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2751934 = 1;
		}
	}

	return num;
}

int func_35(int iParam0) // Position - 0x3EF8
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 13519;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		case 61:
			return 12447;
	
		default:
			break;
	}

	return 15468;
}

int func_36() // Position - 0x43B0
{
	return Global_33087;
}

int func_37(int iParam0) // Position - 0x43BB
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	}

	return 6;
}

BOOL func_38() // Position - 0x46FE
{
	return Global_101740.f_400 > 0;
}

int func_39(Vehicle veParam0, Any* panParam1) // Position - 0x470F
{
	int vehicleCrewEmblemRequestState;
	Player playerFromGamerHandle;

	if (!func_49(veParam0, panParam1))
		return 1;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 0)
	{
		if (!func_47(veParam0))
		{
			playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
		
			if (func_42(&veParam0, playerFromGamerHandle))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (vehicleCrewEmblemRequestState >= 3)
	{
		return 1;
	}
	else if (func_40(veParam0))
	{
	}

	return 0;
}

BOOL func_40(Vehicle veParam0) // Position - 0x478C
{
	int vehicleCrewEmblemRequestState;
	int networkTime;
	int num;
	int num2;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 1 || vehicleCrewEmblemRequestState == 2)
	{
		if (vehicleCrewEmblemRequestState == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				networkTime = NETWORK::GET_NETWORK_TIME();
			else
				networkTime = MISC::GET_GAME_TIMER();
		
			num = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(networkTime, Global_1577965));
			num2 = 20000;
		
			if (Global_1836691)
				num2 = 2000;
		
			if (num > num2)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(veParam0);
				func_41(veParam0);
				return false;
			}
		}
	
		return true;
	}

	return false;
}

void func_41(Vehicle veParam0) // Position - 0x4819
{
	int _int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");

	if (!IS_BIT_SET(_int, 16))
	{
		MISC::SET_BIT(&_int, 16);
		DECORATOR::DECOR_SET_INT(veParam0, "MPBitset", _int);
	}

	return;
}

BOOL func_42(var uParam0, Player plParam1) // Position - 0x4879
{
	func_46();

	if (Global_1574633.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0))
	{
		Global_1943806.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
	
		if (Global_1943806.f_11 < 0f)
			Global_1943806.f_11 = 0f;
	}

	func_44(*uParam0, &Global_1943806, &(Global_1943806.f_1), &(Global_1943806.f_4), &(Global_1943806.f_7), &(Global_1943806.f_10));
	Global_1943806.f_1.f_2 = Global_1943806.f_1.f_2 - Global_1943806.f_11;

	if (Global_1943806.f_4.f_2 < 0f)
		Global_1943806.f_12 = 1;

	Global_1943806.f_13 = 200;

	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == 1581459400 || ENTITY::GET_ENTITY_MODEL(*uParam0) == 1561920505)
		Global_1943806.f_13 = 255;

	if (Global_1943806.f_12)
	{
		if (func_43(uParam0, plParam1, Global_1943806, Global_1943806.f_1, Global_1943806.f_4, Global_1943806.f_7, Global_1943806.f_10, 0, Global_1943806.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1577965 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1577965 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}
	else
	{
		Global_1943806.f_14 = { Global_1943806.f_1 };
		Global_1943806.f_14 = Global_1943806.f_14 * -1f;
		Global_1943806.f_17 = { Global_1943806.f_4 };
		Global_1943806.f_17 = Global_1943806.f_17 * -1f;
		Global_1943806.f_20 = { Global_1943806.f_7 };
		Global_1943806.f_20.f_1 = Global_1943806.f_20.f_1 * -1f;
		Global_1943806.f_20.f_2 = Global_1943806.f_20.f_2 * -1f;
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 0))
			Global_1943806.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 0);
		else
			Global_1943806.f_23 = 3;
	
		Global_1943806.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 1))
			Global_1943806.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
		else
			Global_1943806.f_24 = 3;
	
		if (Global_1943806.f_23 == 0 && func_43(uParam0, plParam1, Global_1943806, Global_1943806.f_1, Global_1943806.f_4, Global_1943806.f_7, Global_1943806.f_10, 0, Global_1943806.f_13) || Global_1943806.f_23 != 0 && Global_1943806.f_24 == 0 && func_43(uParam0, plParam1, Global_1943806, Global_1943806.f_14, Global_1943806.f_17, Global_1943806.f_20, Global_1943806.f_10, 1, Global_1943806.f_13) || Global_1943806.f_24 != 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1577965 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1577965 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}

	return false;
}

BOOL func_43(var uParam0, Player plParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3 vParam6, var uParam7, var uParam8, Vector3 vParam9, var uParam10, var uParam11, float fParam12, int iParam13, int iParam14) // Position - 0x4B24
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(plParam1), iParam2, vParam3, vParam6, vParam9, fParam12, iParam13, iParam14);
}

int func_44(Vehicle veParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x4B4D
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");

	if (!func_45(Global_1943832, 0f, 0f, 0f, false) && !func_45(Global_1943835, 0f, 0f, 0f, false) && !func_45(Global_1943838, 0f, 0f, 0f, false) && !(Global_1943841 == 0f))
	{
		*uParam2 = { Global_1943832 };
		*uParam3 = { Global_1943835 };
		*uParam4 = { Global_1943838 };
		*fParam5 = Global_1943841;
		return 1;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 80636076:
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1995326987:
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1216765807:
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1672195559:
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case -1809822327:
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1903012613:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2140431165:
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case -808831384:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 142944341:
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1041692462:
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -114291515:
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -891462355:
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 1126868326:
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -16948145:
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 850565707:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -344943009:
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case 1069929536:
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.65f;
			break;
	
		case -1435919434:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -682211828:
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case -304802106:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 736902334:
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1696146015:
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 11251904:
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case 2072687711:
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2006918058:
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case -789894171:
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1311154784:
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 330661258:
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1045541610:
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 108773431:
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case 2006142190:
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1130810103:
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1770332643:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1670998136:
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1177543287:
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -394074634:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.75f;
			break;
	
		case -566387422:
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -685276541:
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1883002148:
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1291952903:
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -5153954:
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -591610296:
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 55628203:
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -391594584:
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -89291282:
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1137532101:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1909141499:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 499169875:
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1289225626:
		case 2016857647:
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1800170043:
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -1775728740:
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1543762099:
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 884422927:
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 301427732:
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.14f;
			break;
	
		case 37348240:
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 418536135:
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.25f;
			break;
	
		case -1289722222:
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 886934177:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1177863319:
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -624529134:
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1051415893:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case 544021352:
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.475f;
			break;
	
		case 1269098716:
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2124201592:
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case 914654722:
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2064372143:
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -310465116:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -433375717:
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case -634879114:
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1032823388:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1461482751:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1348744438:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -511601230:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -808457413:
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -909201658:
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -377465520:
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1830407356:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2095439403:
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case 1507916787:
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.425f;
			break;
	
		case -1450650718:
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case -1883869285:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1150599089:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1651067813:
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1645267888:
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1934452204:
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1737773231:
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -667151410:
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1207771834:
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2045594037:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -14495224:
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2136773105:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 627094268:
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -893578776:
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case -227741703:
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1685021548:
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case -599568815:
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1189015600:
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 989381445:
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1255452397:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -746882698:
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1221512915:
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1349725314:
			*uParam2 = { 0f, 1.18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 873639469:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1337041428:
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.49f;
			break;
	
		case -1477580979:
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1545842587:
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2098947590:
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1723137093:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 970598228:
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case 1123216662:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 384071873:
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 699456151:
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case -1311240698:
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case -1894894188:
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1008861746:
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 464687292:
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1531094468:
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1762279763:
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 338562499:
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -140902153:
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -825837129:
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1622444098:
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case 523724515:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1777363799:
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 65402552:
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case -1122289213:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1193103848:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 758895617:
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 92612664:
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1488164764:
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 767087018:
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 486987393:
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1403128555:
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1297672541:
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*fParam5 = 0.33f;
			break;
	
		case -142942670:
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case 408192225:
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1836027715:
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case 117401876:
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7125f;
			break;
	
		case 841808271:
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2625f;
			break;
	
		case 75131841:
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case 1373123368:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case -1205801634:
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.325f;
			break;
	
		case -431692672:
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1237253773:
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1078682497:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1011753235:
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -159126838:
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case 1265391242:
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.16f;
			break;
	
		case -1089039904:
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -589178377:
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 729783779:
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -326143852:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 723973206:
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3875f;
			break;
	
		case 1923400478:
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4375f;
			break;
	
		case 1039032026:
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2875f;
			break;
	
		case 941800958:
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1753414259:
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 296357396:
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2107990196:
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1372848492:
		case 410882957:
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.435f;
			break;
	
		case 640818791:
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case -1566741232:
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1987142870:
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -498054846:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1581459400:
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case -1479664699:
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 349605904:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 784565758:
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1663218586:
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1353081087:
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -2119578145:
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1790546981:
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1013450936:
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case -1361687965:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 525509695:
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1896491931:
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2040426790:
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2006667053:
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2039755226:
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 223258115:
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case -1797613329:
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -899509638:
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 16646064:
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case -1126264336:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1119641113:
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -831834716:
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2068293287:
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1878062887:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 634118882:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 470404958:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 666166960:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 906642318:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 704435172:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -2030171296:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -604842630:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1660945322:
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1943285540:
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1485523546:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1489967196:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -888242983:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1922255844:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1102544804:
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 972671128:
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 633712403:
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -295689028:
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -602287871:
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1274868363:
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1757836725:
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1426219628:
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1829802492:
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 2123327359:
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 234062309:
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1475773103:
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1930048799:
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case 1203490606:
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -432008408:
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1549126457:
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 683047626:
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1232836011:
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -777172681:
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1887331236:
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -2115793025:
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1404136503:
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 822018448:
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case 2035069708:
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case -255678177:
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1606187161:
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case 1873600305:
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -405626514:
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1009268949:
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -570033273:
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -609625092:
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.095f;
			break;
	
		case -1558399629:
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1026149675:
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case -618617997:
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1289178744:
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1842748181:
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case -2022483795:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -239841468:
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1790834270:
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 196747873:
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 627535535:
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -757735410:
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -2048333973:
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -482719877:
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1034187331:
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1093792632:
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -1758137366:
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 941494461:
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 777714999:
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1886268224:
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1074745671:
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1180875963:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 272929391:
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 989294410:
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case -1405937764:
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.2f;
			break;
	
		case 719660200:
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -982130927:
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 159274291:
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 223240013:
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -32236122:
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 433954513:
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 884483972:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case -1210451983:
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case 1356124575:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1504306544:
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1939284556:
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 917809321:
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 177270108:
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 387748548:
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1392481335:
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -998177792:
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1242608589:
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case 1841130506:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 2049897956:
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case -2118308144:
		case -426933872:
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1483171323:
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 886810209:
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1693015116:
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -692292317:
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.34f;
			break;
	
		case -1435527158:
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -212993243:
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1561920505:
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.36f;
			break;
	
		case -1848994066:
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1741861769:
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1104234922:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1871995513:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1352136073:
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -313185164:
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -2079788230:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 600450546:
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -410205223:
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 867799010:
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1529242755:
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 903794909:
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1532697517:
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 15219735:
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 661493923:
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 838982985:
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -391595372:
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case -121446169:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 1909189272:
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.225f;
			break;
	
		case 1617472902:
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1267543371:
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 931280609:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1046206681:
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1259134696:
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1115909093:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1031562256:
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case -376434238:
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -986944621:
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1134706562:
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2120700196:
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -362690998:
		case -214906006:
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1466692365:
		case -988501280:
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 1254014755:
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 219613597:
		case -44799464:
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1945374990:
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1653666139:
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.38f;
			break;
	
		case 500482303:
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2044532910:
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -638562243:
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -420911112:
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 321186144:
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -54332285:
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 2069146067:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case -1988428699:
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 668439077:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case -1694081890:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case -2042350822:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case 2139203625:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1890996696:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 2038858402:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -801550069:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 679453769:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1909700336:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1566607184:
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1591739866:
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 1279262537:
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -688189648:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1375060657:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1293924613:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2096690334:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1009171724:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1924800695:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1744505657:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 444994115:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1637620610:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -755532233:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 628003514:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1537277726:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1239571361:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -331467772:
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1721676810:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 840387324:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -715746948:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -507495760:
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2061049099:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 373261600:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1742022738:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1168952148:
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1456744817:
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -49115651:
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 540101442:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1106120762:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1478704292:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1349095620:
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 686471183:
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 310284501:
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1323778901:
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 722226637:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case 1934384720:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -362150785:
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1854776567:
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -208911803:
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -664141241:
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -941272559:
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -882629065:
		case 1690421418:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1620126302:
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1829436850:
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -447711397:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1416466158:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1804415708:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -324618589:
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1044193113:
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1862507111:
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -682108547:
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 833469436:
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 83136452:
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1118611807:
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 987469656:
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -834353991:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1456336509:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 872704284:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 409049982:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 394110044:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case 1693751655:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 2031587082:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 960812448:
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1756021720:
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1132721664:
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1284356689:
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2122646867:
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.24f;
			break;
	
		case 2134119907:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 1717532765:
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case -2098954619:
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case -913589546:
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.205f;
			break;
	
		case 1802742206:
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.135f;
			break;
	
		case 67753863:
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.21f;
			break;
	
		case -1810806490:
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -631322662:
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -838099166:
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1728685474:
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -1358197432:
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1107404867:
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1429622905:
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1045911276:
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1149725334:
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1455990255:
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 1644055914:
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1858654120:
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case -1193912403:
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1582061455:
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1726022652:
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 579912970:
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1377217886:
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1540373595:
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 426742808:
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1755697647:
		case 258105345:
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -452604007:
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -291021213:
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case -1244461404:
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1416471345:
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 736672010:
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1507230520:
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2038480341:
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1304459735:
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1527436269:
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -915234475:
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -261346873:
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1532171089:
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -619930876:
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 359875117:
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 655665811:
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case 1141395928:
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 629969764:
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -670086588:
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case 461465043:
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1353120668:
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.045f;
			break;
	
		case 1993851908:
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 662793086:
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 15214558:
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -754687673:
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 40817712:
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -64075878:
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -294678663:
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1855505138:
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -893984159:
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 274946574:
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -165394758:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1758379524:
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -994371320:
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -768236378:
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1706945532:
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -1356880839:
		case -986656474:
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 775514032:
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -505223465:
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case -1386336041:
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1748565021:
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1384502824:
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1035489563:
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 996383885:
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1249788006:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7f;
			break;
	
		case 268758436:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1076201208:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 669204833:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1550581940:
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1933242328:
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2100457220:
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -461850249:
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -131348178:
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.6f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case -1763675285:
			*uParam2 = { -1f, 0.2f, 0.43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -654498607:
			*uParam2 = { -0.003f, 2.764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1336514315:
			*uParam2 = { -1.5f, 0.4f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.24f;
			break;
	
		case 1447690049:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 165968051:
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -536105557:
			*uParam2 = { -1f, 0.128f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.42f;
			break;
	
		case -979292575:
			*uParam2 = { -1f, 0.088f, 0.438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 610429990:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 802856453:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1479935577:
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case -1681653521:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1624083468:
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 821121576:
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -181562642:
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1763273939:
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1923534526:
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case -38879449:
			*uParam2 = { 0f, 2.1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -441209695:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -465825307:
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case -1029730482:
			*uParam2 = { -1.6f, 0.585f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -478639183:
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case -741120335:
			*uParam2 = { -1f, 0.15f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.46f;
			break;
	
		case -768044142:
			*uParam2 = { -1f, 0.229f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.36f;
			break;
	
		case -178442374:
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.41f;
			break;
	
		case -1372798934:
			*uParam2 = { -1f, 0.475f, 0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1240172147:
		case -143587026:
			*uParam2 = { 0f, 1.141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1249425552:
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1307736079:
			*uParam2 = { -1f, 0.315f, 0.1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0455f };
			*fParam5 = 0.4f;
			break;
	
		case 1452003510:
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.41f;
			break;
	
		case -223461503:
			*uParam2 = { -1f, -0.0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2375f;
			break;
	
		case 1121330119:
			*uParam2 = { -1f, 0f, 0.2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1579902654:
			*uParam2 = { -1f, 0f, 0.0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1896488056:
			*uParam2 = { -1.229f, 0.6f, 0.361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -999594302:
			*uParam2 = { 0f, 1.71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1881415402:
			*uParam2 = { -1f, 0.175f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1958428933:
			*uParam2 = { -1f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -946047670:
			*uParam2 = { -1f, 0f, 0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1968807591:
			*uParam2 = { 0f, 1.0569f, 1f };
			*uParam3 = { 0f, -0.5995f, -1f };
			*uParam4 = { -0.4071f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1992041063:
			*uParam2 = { -1f, 0.2073f, 0.1513f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0285f };
			*fParam5 = 0.365f;
			break;
	
		case -660007725:
		case 1484920335:
		case 127317925:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.335f;
			break;
	
		case 1534326199:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.335f;
			break;
	
		case -973016778:
			*uParam2 = { -1f, 0.2805f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.445f;
			break;
	}

	return 1;
}

BOOL func_45(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xA865
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_46() // Position - 0xA8AC
{
	Global_1943806 = 0;
	Global_1943806.f_1 = { 0f, 0f, 0f };
	Global_1943806.f_4 = { 0f, 0f, 0f };
	Global_1943806.f_7 = { 0f, 0f, 0f };
	Global_1943806.f_10 = 0f;
	Global_1943806.f_11 = 0f;
	Global_1943806.f_12 = 0;
	Global_1943806.f_13 = 0;
	Global_1943806.f_14 = { 0f, 0f, 0f };
	Global_1943806.f_17 = { 0f, 0f, 0f };
	Global_1943806.f_20 = { 0f, 0f, 0f };
	Global_1943806.f_23 = 0;
	Global_1943806.f_24 = 0;
	return;
}

BOOL func_47(Vehicle veParam0) // Position - 0xA925
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0) || func_48(veParam0))
			return true;

	return false;
}

BOOL func_48(Vehicle veParam0) // Position - 0xA95D
{
	int _int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
			{
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
				return IS_BIT_SET(_int, 16);
			}
		}
	}

	return false;
}

BOOL func_49(Vehicle veParam0, Any* panParam1) // Position - 0xA9A8
{
	Player playerFromGamerHandle;
	BOOL flag;
	int num;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	else
		playerFromGamerHandle = _INVALID_PLAYER_INDEX();

	flag = false;

	if (playerFromGamerHandle == PLAYER::PLAYER_ID())
		if (func_61(15, false))
			flag = true;
		else if (func_57(true))
			flag = true;
	else
		flag = true;

	if (!flag && ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false) && NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1))
	{
		num = Global_2359296[func_56() /*5571*/].f_681.f_2;
	
		if (num > -1 && num < 547)
			if (IS_BIT_SET(Global_1586535[num /*143*/].f_104, 8))
				flag = true;
	}

	if (!(ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || !(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1)) || playerFromGamerHandle == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(playerFromGamerHandle, false, false) || !flag || func_50(veParam0))
		return false;

	return true;
}

BOOL func_50(Vehicle veParam0) // Position - 0xAB05
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (func_52(PLAYER::PLAYER_ID()) == 3)
		if (func_51(veParam0) != -1)
			return true;

	if (Global_1943831)
		return true;

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 788045382:
		case -1453280962:
		case -2128233223:
		case -1269889662:
		case 699456151:
		case -1311240698:
		case -349601129:
		case 743478836:
		case 301427732:
		case -1661854193:
		case 534258863:
		case -827162039:
		case -312295511:
		case -1860900134:
		case 2071877360:
		case -591651781:
		case -401643538:
		case 349315417:
		case -915704871:
		case 237764926:
		case -631760477:
		case -1106353882:
		case -777172681:
		case 86520421:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case -1071380347:
		case 741090084:
		case -27326686:
		case -1812949672:
		case -1374500452:
		case -1232836011:
		case 2067820283:
		case 482197771:
		case 819197656:
		case 6774487:
		case 1491277511:
		case -440768424:
		case -1523428744:
		case -674927303:
		case -1590337689:
		case 301304410:
		case 340154634:
		case -1960756985:
		case -1254331310:
		case 408825843:
		case 740289177:
		case 1492612435:
		case 1181339704:
		case 1086534307:
		case -102335483:
		case -210308634:
		case -857356038:
		case -1492917079:
		case 298565713:
		case -10917683:
		case 1234311532:
		case 562680400:
		case 1897744184:
		case -1924433270:
		case 1502869817:
		case -1881846085:
		case 177270108:
		case 387748548:
		case 1489874736:
		case -1988428699:
		case -286046740:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 916547552:
		case -48031959:
		case -907477130:
		case -1444114309:
		case -768236378:
		case -1576586413:
		case -1627077503:
		case 1447690049:
		case -1696319096:
		case -122993285:
		case -1233767450:
		case -1674384553:
		case -1973172295:
		case -863358884:
		case 372621319:
		case 167522317:
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
		case -1321131184:
		case 2042703219:
		case -1948949064:
		case 1891140410:
			return true;
	
		case 65402552:
		case 1026149675:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) != -1)
				return true;
			break;
	
		case 384071873:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) == 1)
				return true;
			break;
	
		case -2098954619:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 7)
				return true;
			break;
	
		case 67753863:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 5 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 6)
				return true;
			break;
	}

	return false;
}

int func_51(Vehicle veParam0) // Position - 0xAE44
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_52(Player plParam0) // Position - 0xAE73
{
	if (func_55(plParam0) == 233)
		return func_53(plParam0);

	return -1;
}

int func_53(Player plParam0) // Position - 0xAE90
{
	if (func_54(plParam0, false))
		return Global_1887549[plParam0 /*611*/].f_10.f_182;

	return -1;
}

BOOL func_54(Player plParam0, BOOL bParam1) // Position - 0xAEB3
{
	if (func_27(plParam0))
		if (Global_1887549[plParam0 /*611*/].f_10.f_33 != -1 || bParam1 && Global_1887549[plParam0 /*611*/].f_10.f_32 != -1)
			return true;

	return false;
}

int func_55(Player plParam0) // Position - 0xAEF7
{
	if (func_27(plParam0))
		if (func_54(plParam0, false))
			return Global_1887549[plParam0 /*611*/].f_10.f_33;

	return -1;
}

int func_56() // Position - 0xAF23
{
	int num;

	num = 0;
	return num;
}

BOOL func_57(BOOL bParam0) // Position - 0xAF30
{
	return func_58(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_58(Player plParam0, BOOL bParam1) // Position - 0xAF42
{
	return func_59(plParam0, bParam1, 1);
}

int func_59(Player plParam0, BOOL bParam1, int iParam2) // Position - 0xAF53
{
	Player player;

	if (!func_27(plParam0))
		return 0;

	if (!bParam1)
		if (func_60(plParam0, iParam2))
			return 0;

	player = Global_1887549[plParam0 /*611*/].f_10;

	if (func_27(player) && Global_1887549[player /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_60(Player plParam0, int iParam1) // Position - 0xAFAF
{
	if (func_27(plParam0))
		if (func_27(Global_1887549[plParam0 /*611*/].f_10))
			if (Global_1887549[plParam0 /*611*/].f_10 == plParam0 && Global_1887549[plParam0 /*611*/].f_10.f_431 == iParam1)
				return true;

	return false;
}

BOOL func_61(int iParam0, BOOL bParam1) // Position - 0xAFFE
{
	int num;
	int num2;

	if (bParam1)
		if (iParam0 == 15)
			return true;

	if (func_66(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return true;
		}
	}

	num = func_63(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_62(num2));
}

int func_62(int iParam0) // Position - 0xB05C
{
	return iParam0 % 32;
}

int func_63(int iParam0) // Position - 0xB069
{
	int num;

	num = func_32(func_64(iParam0), -1);
	return num;
}

int func_64(int iParam0) // Position - 0xB080
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_65(num);

	switch (num2)
	{
		case 0:
			return 1291;
	}

	return 1291;
}

int func_65(int iParam0) // Position - 0xB0AD
{
	return iParam0 / 32;
}

BOOL func_66(Player plParam0) // Position - 0xB0BA
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_67(plParam0) && Global_2657991[plParam0 /*467*/].f_324.f_11 == plParam0)
			return true;

	return false;
}

BOOL func_67(Player plParam0) // Position - 0xB0EF
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657991[plParam0 /*467*/].f_324.f_8 != -1)
				return func_68(Global_2657991[plParam0 /*467*/].f_324.f_8) == 22;

	return false;
}

int func_68(int iParam0) // Position - 0xB136
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	
		case 172:
			return 30;
	
		case 173:
			return 31;
	}

	return -1;
}

void func_69(Vehicle veParam0, int iParam1) // Position - 0xB652
{
	int num;
	int num2;

	num2 = func_71(iParam1);
	func_70(num2, &num);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, num);
	return;
}

BOOL func_70(int iParam0, var uParam1) // Position - 0xB673
{
	*uParam1 = -1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
	
		case 1:
			*uParam1 = 5;
			break;
	
		case 2:
			*uParam1 = 6;
			break;
	
		case 3:
			*uParam1 = 7;
			break;
	
		case 4:
			*uParam1 = 111;
			break;
	
		case 5:
			*uParam1 = 112;
			break;
	
		case 6:
			*uParam1 = 107;
			break;
	
		case 7:
			*uParam1 = 104;
			break;
	
		case 8:
			*uParam1 = 98;
			break;
	
		case 9:
			*uParam1 = 100;
			break;
	
		case 10:
			*uParam1 = 102;
			break;
	
		case 11:
			*uParam1 = 99;
			break;
	
		case 12:
			*uParam1 = 105;
			break;
	
		case 13:
			*uParam1 = 106;
			break;
	
		case 14:
			*uParam1 = 37;
			break;
	
		case 15:
			*uParam1 = 90;
			break;
	
		case 16:
			*uParam1 = 88;
			break;
	
		case 17:
			*uParam1 = 89;
			break;
	
		case 18:
			*uParam1 = 91;
			break;
	
		case 19:
			*uParam1 = 38;
			break;
	
		case 20:
			*uParam1 = 138;
			break;
	
		case 21:
			*uParam1 = 36;
			break;
	
		case 22:
			*uParam1 = 27;
			break;
	
		case 23:
			*uParam1 = 28;
			break;
	
		case 24:
			*uParam1 = 29;
			break;
	
		case 25:
			*uParam1 = 150;
			break;
	
		case 26:
			*uParam1 = 30;
			break;
	
		case 27:
			*uParam1 = 31;
			break;
	
		case 28:
			*uParam1 = 32;
			break;
	
		case 29:
			*uParam1 = 35;
			break;
	
		case 30:
			*uParam1 = 135;
			break;
	
		case 31:
			*uParam1 = 137;
			break;
	
		case 32:
			*uParam1 = 136;
			break;
	
		case 33:
			*uParam1 = 71;
			break;
	
		case 34:
			*uParam1 = 145;
			break;
	
		case 35:
			*uParam1 = 63;
			break;
	
		case 36:
			*uParam1 = 64;
			break;
	
		case 37:
			*uParam1 = 65;
			break;
	
		case 38:
			*uParam1 = 66;
			break;
	
		case 39:
			*uParam1 = 67;
			break;
	
		case 40:
			*uParam1 = 68;
			break;
	
		case 41:
			*uParam1 = 69;
			break;
	
		case 42:
			*uParam1 = 73;
			break;
	
		case 43:
			*uParam1 = 70;
			break;
	
		case 44:
			*uParam1 = 74;
			break;
	
		case 45:
			*uParam1 = 51;
			break;
	
		case 46:
			*uParam1 = 53;
			break;
	
		case 47:
			*uParam1 = 54;
			break;
	
		case 48:
			*uParam1 = 92;
			break;
	}

	return *uParam1 != -1;
}

int func_71(int iParam0) // Position - 0xB935
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 36;
	
		case 2:
			return 35;
	
		case 3:
			return 46;
	
		case 4:
			return 48;
	
		case 5:
			return 16;
	
		case 6:
			return 14;
	
		case 7:
			return 19;
	
		case 8:
			return 22;
	
		case 9:
			return 31;
	
		case 10:
			return 30;
	
		case 11:
			return 33;
	
		case 12:
			return 34;
	
		default:
		
	}

	return 0;
}

int func_72(int iParam0, int iParam1, int iParam2) // Position - 0xB9D3
{
	if (iParam0 == 222 && iParam1 == 222 && iParam2 == 255)
		return 0;

	if (iParam0 == 2 && iParam1 == 21 && iParam2 == 255)
		return 1;

	if (iParam0 == 3 && iParam1 == 83 && iParam2 == 255)
		return 2;

	if (iParam0 == 0 && iParam1 == 255 && iParam2 == 140)
		return 3;

	if (iParam0 == 94 && iParam1 == 255 && iParam2 == 1)
		return 4;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 0)
		return 5;

	if (iParam0 == 255 && iParam1 == 150 && iParam2 == 5)
		return 6;

	if (iParam0 == 255 && iParam1 == 62 && iParam2 == 0)
		return 7;

	if (iParam0 == 255 && iParam1 == 1 && iParam2 == 1)
		return 8;

	if (iParam0 == 255 && iParam1 == 50 && iParam2 == 100)
		return 9;

	if (iParam0 == 255 && iParam1 == 5 && iParam2 == 190)
		return 10;

	if (iParam0 == 35 && iParam1 == 1 && iParam2 == 255)
		return 11;

	if (iParam0 == 15 && iParam1 == 3 && iParam2 == 255)
		return 12;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_73() && Global_1576240)
		if (iParam0 == Global_1576241 && iParam1 == Global_1576242 && iParam2 == Global_1576243)
			return 13;

	return 0;
}

BOOL func_73() // Position - 0xBBB5
{
	var gamerHandle;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			gamerHandle = { GET_LOCAL_GAMER_HANDLE() };
		
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
				return true;
		}
	}

	return false;
}

struct<13> GET_LOCAL_GAMER_HANDLE() // Position - 0xBBFD
{
	var gamerHandle;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	return gamerHandle;
}

BOOL func_75(Vehicle veParam0) // Position - 0xBC12
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case -1812949672:
			return true;
	}

	return false;
}

BOOL func_76(int iParam0, var uParam1) // Position - 0xBC33
{
	*uParam1 = -1f;

	switch (iParam0)
	{
		case -312295511:
			*uParam1 = 1f;
			break;
	
		case 682434785:
			*uParam1 = 1f;
			break;
	
		case -1912017790:
			*uParam1 = 1f;
			break;
	
		case -1523619738:
			*uParam1 = 0.2f;
			break;
	
		case -32878452:
			*uParam1 = 0.15f;
			break;
	
		case -1007528109:
			*uParam1 = 0.3f;
			break;
	
		case -42959138:
			*uParam1 = 0.5f;
			break;
	
		case -1763555241:
			*uParam1 = 0.3f;
			break;
	
		case -749299473:
			*uParam1 = 0.4f;
			break;
	
		case 1565978651:
			*uParam1 = 0.3f;
			break;
	
		case 1036591958:
			*uParam1 = 0.4f;
			break;
	
		case -1386191424:
			*uParam1 = 0.4f;
			break;
	
		case -975345305:
			*uParam1 = 0.4f;
			break;
	
		case -392675425:
			*uParam1 = 0.3f;
			break;
	
		case -1700874274:
			*uParam1 = 0.5f;
			break;
	
		case 1043222410:
			*uParam1 = 0.15f;
			break;
	
		case -1435527158:
			*uParam1 = 0.6f;
			break;
	
		case 668439077:
			*uParam1 = 1f;
			break;
	
		case -1694081890:
			*uParam1 = 1f;
			break;
	
		case -2042350822:
			*uParam1 = 1f;
			break;
	
		case 2139203625:
			*uParam1 = 1f;
			break;
	
		case -1890996696:
			*uParam1 = 1f;
			break;
	
		case 2038858402:
			*uParam1 = 1f;
			break;
	
		case -801550069:
			*uParam1 = 1f;
			break;
	
		case 679453769:
			*uParam1 = 1f;
			break;
	
		case 1909700336:
			*uParam1 = 1f;
			break;
	
		case -27326686:
			*uParam1 = 1f;
			break;
	
		case -1812949672:
			*uParam1 = 1f;
			break;
	
		case -1374500452:
			*uParam1 = 1f;
			break;
	
		case -688189648:
			*uParam1 = 1f;
			break;
	
		case -1375060657:
			*uParam1 = 1f;
			break;
	
		case -1293924613:
			*uParam1 = 1f;
			break;
	
		case 1009171724:
			*uParam1 = 1f;
			break;
	
		case -1924800695:
			*uParam1 = 1f;
			break;
	
		case -1744505657:
			*uParam1 = 1f;
			break;
	
		case 444994115:
			*uParam1 = 1f;
			break;
	
		case 1637620610:
			*uParam1 = 1f;
			break;
	
		case -755532233:
			*uParam1 = 1f;
			break;
	
		case 628003514:
			*uParam1 = 1f;
			break;
	
		case 1537277726:
			*uParam1 = 1f;
			break;
	
		case 1239571361:
			*uParam1 = 1f;
			break;
	
		case 1721676810:
			*uParam1 = 1f;
			break;
	
		case 840387324:
			*uParam1 = 1f;
			break;
	
		case -715746948:
			*uParam1 = 1f;
			break;
	
		case -1146969353:
			*uParam1 = 1f;
			break;
	
		case 1542143200:
			*uParam1 = 1f;
			break;
	
		case -579747861:
			*uParam1 = 1f;
			break;
	
		case -2061049099:
			*uParam1 = 1f;
			break;
	
		case 373261600:
			*uParam1 = 1f;
			break;
	
		case 1742022738:
			*uParam1 = 1f;
			break;
	
		case 540101442:
			*uParam1 = 1f;
			break;
	
		case -1106120762:
			*uParam1 = 1f;
			break;
	
		case -1478704292:
			*uParam1 = 1f;
			break;
	}

	return *uParam1 != -1f;
}

void func_77(Vehicle veParam0) // Position - 0xBF34
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", BOOL))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MLJ"))
				DECORATOR::DECOR_REMOVE(veParam0, "MLJ");

	return;
}

void func_78(Vehicle veParam0) // Position - 0xBF69
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", BOOL))
			if (!DECORATOR::DECOR_EXIST_ON(veParam0, "MLJ"))
				DECORATOR::DECOR_SET_BOOL(veParam0, "MLJ", true);

	return;
}

BOOL func_79(Hash hParam0) // Position - 0xBFA0
{
	switch (hParam0)
	{
		case 1484920335:
			return true;
	}

	return false;
}

BOOL func_80(Hash hParam0) // Position - 0xBFBD
{
	if (!Global_79539 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	switch (hParam0)
	{
		case -1566741232:
			return IS_BIT_SET(*Global_262145.f_36136, 0);
	
		case 661493923:
			return IS_BIT_SET(*Global_262145.f_36136, 1);
	
		case -891462355:
			return IS_BIT_SET(*Global_262145.f_36136, 2);
	
		case -2098947590:
			return IS_BIT_SET(*Global_262145.f_36136, 3);
	
		case 788045382:
			return IS_BIT_SET(*Global_262145.f_36136, 4);
	
		case -1453280962:
			return IS_BIT_SET(*Global_262145.f_36136, 5);
	
		case 418536135:
			return IS_BIT_SET(*Global_262145.f_36136, 6);
	
		case 906642318:
			return IS_BIT_SET(*Global_262145.f_36136, 7);
	
		case 1032823388:
			return IS_BIT_SET(*Global_262145.f_36136, 8);
	
		case -1461482751:
			return IS_BIT_SET(*Global_262145.f_36136, 9);
	
		case -988501280:
		case -1466692365:
			return IS_BIT_SET(*Global_262145.f_36136, 10);
	
		case 903794909:
			return IS_BIT_SET(*Global_262145.f_36136, 11);
	
		case 917809321:
			return IS_BIT_SET(*Global_262145.f_36136, 12);
	
		case -324618589:
			return IS_BIT_SET(*Global_262145.f_36136, 13);
	
		case -1670998136:
			return IS_BIT_SET(*Global_262145.f_36136, 14);
	
		case 736902334:
			return IS_BIT_SET(*Global_262145.f_36136, 15);
	
		case 758895617:
			return IS_BIT_SET(*Global_262145.f_36136, 16);
	
		case 704435172:
			return IS_BIT_SET(*Global_262145.f_36136, 17);
	
		case 470404958:
			return IS_BIT_SET(*Global_262145.f_36136, 18);
	
		case -114291515:
			return IS_BIT_SET(*Global_262145.f_36136, 19);
	
		case -1233767450:
			return IS_BIT_SET(*Global_262145.f_36136, 20);
	
		case 1737348074:
			return IS_BIT_SET(*Global_262145.f_36136, 21);
	
		case -994371320:
			return IS_BIT_SET(*Global_262145.f_36136, 22);
	
		case -1403128555:
			return IS_BIT_SET(*Global_262145.f_36136, 23);
	
		case -1582061455:
		case -1763273939:
			return IS_BIT_SET(*Global_262145.f_36136, 24);
	
		case -1232836011:
			return IS_BIT_SET(*Global_262145.f_36136, 25);
	
		case -326143852:
			return IS_BIT_SET(*Global_262145.f_36136, 26);
	
		case -1249788006:
			return IS_BIT_SET(*Global_262145.f_36136, 27);
	
		case -1933242328:
			return IS_BIT_SET(*Global_262145.f_36136, 28);
	
		case -1349095620:
			return IS_BIT_SET(*Global_262145.f_36136, 29);
	
		case 1141395928:
			return IS_BIT_SET(*Global_262145.f_36136, 30);
	
		case -1507230520:
		case -181562642:
			return IS_BIT_SET(*Global_262145.f_36137, 0);
	
		case 1086534307:
			return IS_BIT_SET(*Global_262145.f_36137, 1);
	
		case -570033273:
			return IS_BIT_SET(*Global_262145.f_36137, 2);
	
		case -405626514:
			return IS_BIT_SET(*Global_262145.f_36137, 3);
	
		case -223461503:
			return IS_BIT_SET(*Global_262145.f_36137, 4);
	
		case -1674384553:
			return IS_BIT_SET(*Global_262145.f_36137, 5);
	
		case 1249425552:
			return IS_BIT_SET(*Global_262145.f_36137, 6);
	
		case 1452003510:
			return IS_BIT_SET(*Global_262145.f_36137, 7);
	
		case 1475773103:
			return IS_BIT_SET(*Global_262145.f_36137, 8);
	
		case 1934384720:
			return IS_BIT_SET(*Global_262145.f_36137, 9);
	
		case -1726022652:
			return IS_BIT_SET(*Global_262145.f_36137, 10);
	
		case -664141241:
			return IS_BIT_SET(*Global_262145.f_36137, 11);
	
		case -1758379524:
			return IS_BIT_SET(*Global_262145.f_36137, 12);
	
		case -1948949064:
			return IS_BIT_SET(*Global_262145.f_36137, 13);
	
		case -1321131184:
			return IS_BIT_SET(*Global_262145.f_36137, 14);
	
		case 2042703219:
			return IS_BIT_SET(*Global_262145.f_36137, 15);
	
		case 1891140410:
			return IS_BIT_SET(*Global_262145.f_36137, 16);
	
		case -682108547:
			return IS_BIT_SET(*Global_262145.f_36137, 17);
	
		case -1358197432:
			return IS_BIT_SET(*Global_262145.f_36137, 18);
	
		case 1392481335:
			return IS_BIT_SET(*Global_262145.f_36137, 19);
	
		case -1620126302:
			return IS_BIT_SET(*Global_262145.f_36137, 20);
	
		case -941272559:
			return IS_BIT_SET(*Global_262145.f_36137, 21);
	
		case 1484920335:
			return IS_BIT_SET(*Global_262145.f_36137, 22);
	
		case 1992041063:
			return IS_BIT_SET(*Global_262145.f_36137, 23);
	
		case 394110044:
			return IS_BIT_SET(*Global_262145.f_36137, 24);
	
		case 127317925:
			return IS_BIT_SET(*Global_262145.f_36137, 25);
	
		case 1534326199:
			return IS_BIT_SET(*Global_262145.f_36137, 26);
	
		case -973016778:
			return IS_BIT_SET(*Global_262145.f_36137, 27);
	
		case -660007725:
			return IS_BIT_SET(*Global_262145.f_36137, 28);
	
		default:
		
	}

	return false;
}

BOOL func_81(Hash hParam0) // Position - 0xC533
{
	switch (hParam0)
	{
		case 1532171089:
		case -261346873:
		case -619930876:
		case 461465043:
		case -670086588:
		case -915234475:
		case 40817712:
		case -505223465:
		case 669204833:
		case 1076201208:
		case 1447690049:
		case 165968051:
		case 610429990:
		case 802856453:
		case -38879449:
		case -122993285:
		case -863358884:
		case 167522317:
		case 1121330119:
		case -946047670:
			return true;
	}

	return false;
}

void func_82(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC5C2
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_107(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_106(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_106(num + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_106(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_106(num2 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_106(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_106(i));
				}
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_106(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_106(j));
				}
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_106(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_106(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_106(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_106(l));
				}
			}
		}
		else if (uParam1->f_66 == -980573366)
		{
			if (IS_BIT_SET(uParam1->f_77, func_106(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_106(4));
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == 1693751655)
		{
			MISC::SET_BIT(&(uParam1->f_77), func_106(1));
		}
		else if (uParam1->f_66 == 37348240)
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_106(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_106(m));
				}
			}
		}
	
		if (uParam1->f_66 == 433954513)
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_104(uParam1->f_5) || func_104(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_103(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_102())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_101(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_100(veParam0, uParam1->f_69);
				else
					func_100(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_91(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_106(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == 819197656 || ENTITY::GET_ENTITY_MODEL(veParam0) == -777172681 || ENTITY::GET_ENTITY_MODEL(veParam0) == -1232836011)
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_85() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, -2118308144) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, func_84(true)))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (!IS_BIT_SET(uParam1->f_77, 22) && func_83(veParam0, 5f))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", true);
		else
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", false);
	}

	return;
}

BOOL func_83(Vehicle veParam0, float fParam1) // Position - 0xCCC7
{
	float entityCoords;
	var groundZ;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false))
			if (MISC::ABSF(entityCoords.f_2 - groundZ) > fParam1)
				return true;
		else if (entityCoords.f_2 > PATHFIND::GET_APPROX_FLOOR_FOR_POINT(entityCoords, entityCoords.f_1) + fParam1)
			return true;
		else if (entityCoords.f_2 > 300f)
			return true;
	}

	return false;
}

Hash func_84(BOOL bParam0) // Position - 0xCD38
{
	if (bParam0)
		return -426933872;

	return -2118308144;
}

BOOL func_85() // Position - 0xCD52
{
	if (*Global_4718592.f_118493 == 6 || *Global_4718592.f_118493 == 7 || *Global_4718592.f_118493 == 18 || *Global_4718592.f_118493 == 19 && Global_4718592.f_2 == 20)
		return false;

	if (func_89(7))
		if (func_87(Global_2672939.f_4.f_16) || func_86(Global_2672939.f_4.f_16))
			return false;

	return true;
}

BOOL func_86(int iParam0) // Position - 0xCDE1
{
	int num;

	num = iParam0;

	if (num != -1)
		return Global_1882780[num /*149*/].f_82.f_66 != 0;

	return false;
}

BOOL func_87(int iParam0) // Position - 0xCE05
{
	int num;

	num = iParam0;

	if (num != -1)
		return func_88(iParam0, 9);

	return false;
}

BOOL func_88(int iParam0, int iParam1) // Position - 0xCE23
{
	return IS_BIT_SET(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

BOOL func_89(int iParam0) // Position - 0xCE3B
{
	return func_90(&(Global_2672939.f_194), iParam0);
}

BOOL func_90(var uParam0, int iParam1) // Position - 0xCE4F
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_91(var uParam0, var uParam1, var uParam2) // Position - 0xCE72
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
			{
				if (modType == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (modType == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_98(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_96(ENTITY::GET_ENTITY_MODEL(*uParam0)) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_94(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_94(*uParam0, uParam1->[38] - 1), false);

	func_93(uParam0);

	if (func_92(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_92(Vehicle veParam0) // Position - 0xD04B
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/))
						return true;
			}
		}
	}

	return false;
}

void func_93(var uParam0) // Position - 0xD127
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case -1045911276:
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_94(Vehicle veParam0, int iParam1) // Position - 0xD17E
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case -1797613329:
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case -2039755226:
				return 3;
		}
	
		value = func_95(veParam0, 38) + 1;
		value2 = func_95(veParam0, 24) + 1;
		num = SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

int func_95(Vehicle veParam0, int iParam1) // Position - 0xD267
{
	int i;

	if (STREAMING::IS_MODEL_VALID(Global_153027) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_153027) && Global_153028 == iParam1)
		return Global_153029;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_98(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_96(Hash hParam0) // Position - 0xD2C9
{
	if (func_97(hParam0, 1))
		return true;

	switch (hParam0)
	{
		case 1891140410:
			return true;
	}

	return false;
}

BOOL func_97(Hash hParam0, int iParam1) // Position - 0xD2F4
{
	switch (hParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return true;
	
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 223258115:
			if (!Global_262145.f_14701)
				return false;
			else
				return true;
			break;
	
		case -1797613329:
			if (!Global_262145.f_14702)
				return false;
			else
				return true;
			break;
	
		case -899509638:
			if (!Global_262145.f_14700)
				return false;
			else
				return true;
			break;
	
		case -1126264336:
			if (!Global_262145.f_14703)
				return false;
			else
				return true;
			break;
	
		case 1119641113:
			if (!Global_262145.f_14705)
				return false;
			else
				return true;
			break;
	
		case -2039755226:
			if (!Global_262145.f_14704)
				return false;
			else
				return true;
			break;
	
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -2022483795:
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1790834270:
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -757735410:
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 196747873:
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1093792632:
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -482719877:
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1074745671:
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1356124575:
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -1924433270:
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}

	return false;
}

BOOL func_98(Vehicle veParam0, int iParam1, int iParam2) // Position - 0xD6D3
{
	if (!func_99() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_99() // Position - 0xD6F7
{
	return false;
}

void func_100(Vehicle veParam0, int iParam1) // Position - 0xD700
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == -1558399629 || ENTITY::GET_ENTITY_MODEL(veParam0) == -1804415708)
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_101(int iParam0) // Position - 0xD778
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_102() // Position - 0xD798
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

BOOL func_103(Vehicle veParam0) // Position - 0xD7A9
{
	int _int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				return IS_BIT_SET(_int, 4);
			}
		}
	}

	return false;
}

int func_104(var uParam0) // Position - 0xD7F1
{
	if (!func_99() && func_105(uParam0))
		return 1;

	return 0;
}

BOOL func_105(int iParam0) // Position - 0xD811
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

int func_106(int iParam0) // Position - 0xD864
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

BOOL func_107(Vehicle veParam0) // Position - 0xD914
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_52(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_51(veParam0) != -1)
				return true;

	return false;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0xD99B
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xD9E8
{
	return -1;
}

BOOL func_110(var uParam0, int iParam1) // Position - 0xD9F1
{
	if (iParam1 == 0)
	{
		*uParam0 = 2;
		uParam0->f_1 = -1582061455;
		uParam0->f_2 = { -2186.969f, 1133.193f, 29.14f };
		uParam0->f_5 = 104.776f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
		uParam0->f_1 = -1582061455;
		uParam0->f_2 = { -2165.045f, 1086.494f, 28.037f };
		uParam0->f_5 = 84.029f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 2;
		uParam0->f_1 = -1582061455;
		uParam0->f_2 = { -2158.909f, 1122.865f, 28.029f };
		uParam0->f_5 = 275.171f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 2;
		uParam0->f_1 = 223258115;
		uParam0->f_2 = { -2203.007f, 1125.796f, 29.203f };
		uParam0->f_5 = 104.647f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 2;
		uParam0->f_1 = 223258115;
		uParam0->f_2 = { -2178.267f, 1095.497f, 28.097f };
		uParam0->f_5 = 272.49f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 2;
		uParam0->f_1 = 223258115;
		uParam0->f_2 = { -2146.942f, 1084.26f, 28.097f };
		uParam0->f_5 = 64.843f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 6)
	{
		*uParam0 = 2;
		uParam0->f_1 = 223258115;
		uParam0->f_2 = { -2202.77f, 1084.578f, 29.203f };
		uParam0->f_5 = 264.647f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 7)
	{
		*uParam0 = 2;
		uParam0->f_1 = 736672010;
		uParam0->f_2 = { -2186.986f, 1086.496f, 29.312f };
		uParam0->f_5 = 102.525f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 8)
	{
		*uParam0 = 2;
		uParam0->f_1 = 736672010;
		uParam0->f_2 = { -2177.141f, 1126.924f, 28.199f };
		uParam0->f_5 = 282.22f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 9)
	{
		*uParam0 = 2;
		uParam0->f_1 = 736672010;
		uParam0->f_2 = { -2187.171f, 1123.06f, 29.311f };
		uParam0->f_5 = 98.927f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 10)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1717532765;
		uParam0->f_2 = { -2185.955f, 1109.241f, 29.236f };
		uParam0->f_5 = 86.364f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 11)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1717532765;
		uParam0->f_2 = { -2164.252f, 1097.661f, 28.131f };
		uParam0->f_5 = 99.416f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 12)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1717532765;
		uParam0->f_2 = { -2198.294f, 1148.431f, 29.217f };
		uParam0->f_5 = 94.89f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 13)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1717532765;
		uParam0->f_2 = { -2186.849f, 1129.136f, 29.225f };
		uParam0->f_5 = 274.523f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2204.765f, 1116.982f, 29.323f };
		uParam0->f_5 = 309.354f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 15)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2177.001f, 1133.992f, 28.21f };
		uParam0->f_5 = 285.879f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 16)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2145.605f, 1093.173f, 28.217f };
		uParam0->f_5 = 104.282f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 17)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2158.942f, 1094.775f, 28.218f };
		uParam0->f_5 = 254.94f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 18)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2176.339f, 1117.263f, 28.211f };
		uParam0->f_5 = 259.999f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 19)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1896491931;
		uParam0->f_2 = { -2201.448f, 1088.407f, 29.227f };
		uParam0->f_5 = 65.053f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 20)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1896491931;
		uParam0->f_2 = { -2177.569f, 1107.335f, 28.116f };
		uParam0->f_5 = 122.728f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 21)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1896491931;
		uParam0->f_2 = { -2164.509f, 1119.274f, 28.114f };
		uParam0->f_5 = 96.929f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 22)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1896491931;
		uParam0->f_2 = { -2177.436f, 1084.843f, 28.132f };
		uParam0->f_5 = 275.551f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 23)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1377217886;
		uParam0->f_2 = { -2164.164f, 1093.637f, 27.969f };
		uParam0->f_5 = 81.181f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 24)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1377217886;
		uParam0->f_2 = { -2164.076f, 1126.173f, 27.967f };
		uParam0->f_5 = 82.019f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 25)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1377217886;
		uParam0->f_2 = { -2186.993f, 1089.684f, 29.079f };
		uParam0->f_5 = 78.939f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 26)
	{
		*uParam0 = 2;
		uParam0->f_1 = 1377217886;
		uParam0->f_2 = { -2158.688f, 1086.626f, 27.975f };
		uParam0->f_5 = 262.371f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 27)
	{
		*uParam0 = 2;
		uParam0->f_1 = 2134119907;
		uParam0->f_2 = { -2164.622f, 1113.476f, 28.228f };
		uParam0->f_5 = 82.948f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 28)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2185.534f, 1135.436f, 29.771f };
		uParam0->f_5 = 121.266f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 29)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2189.618f, 1133.607f, 29.771f };
		uParam0->f_5 = 248.176f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 30)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2155.376f, 1123.575f, 28.659f };
		uParam0->f_5 = 40.814f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 31)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2190.006f, 1132.5f, 29.771f };
		uParam0->f_5 = 299.343f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 32)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2202.929f, 1119.595f, 29.771f };
		uParam0->f_5 = 174.043f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 33)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2199.087f, 1084.818f, 29.772f };
		uParam0->f_5 = 40.426f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 34)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2165.921f, 1126.391f, 28.359f };
		uParam0->f_5 = 85.228f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 35)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2067.447f, 984.539f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 36)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2061.541f, 984.165f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 37)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2053.578f, 984.469f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 38)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -1972.939f, 1237.736f, 28.668f };
		uParam0->f_5 = 192.002f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 39)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2167.451f, 1093.677f, 28.666f };
		uParam0->f_5 = 74.105f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 40)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2189.986f, 1109.881f, 29.771f };
		uParam0->f_5 = 262.922f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 41)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2176.759f, 1105.552f, 28.662f };
		uParam0->f_5 = 291.142f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 42)
	{
		*uParam0 = 1;
		uParam0->f_1 = -49756853;
		uParam0->f_2 = { -2146.979f, 1083.111f, 28.686f };
		uParam0->f_5 = 2.5f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 43)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2186.592f, 1135.125f, 29.771f };
		uParam0->f_5 = 302.826f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 44)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2166.739f, 1076.728f, 28.668f };
		uParam0->f_5 = 195.814f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 45)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2161.535f, 1078.041f, 28.668f };
		uParam0->f_5 = 190.814f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 46)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2173.829f, 1134.234f, 28.658f };
		uParam0->f_5 = 81.91f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 47)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2173.818f, 1127.106f, 28.659f };
		uParam0->f_5 = 81.708f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 48)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2155.852f, 1124.458f, 28.659f };
		uParam0->f_5 = 204.001f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 49)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2204.262f, 1123.472f, 29.771f };
		uParam0->f_5 = 243.383f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 50)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2203.077f, 1121.944f, 29.771f };
		uParam0->f_5 = 356.754f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 51)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2202.377f, 1123.428f, 29.771f };
		uParam0->f_5 = 108.708f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 52)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2201.697f, 1118.357f, 29.771f };
		uParam0->f_5 = 116.051f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 53)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2173.74f, 1128.388f, 28.659f };
		uParam0->f_5 = 123.225f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 54)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2199.776f, 1085.704f, 29.772f };
		uParam0->f_5 = 230.454f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 55)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2174.801f, 1095.769f, 28.665f };
		uParam0->f_5 = 109.413f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 56)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2188.647f, 1109.457f, 29.771f };
		uParam0->f_5 = 95.778f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 57)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2167.494f, 1113.8f, 28.659f };
		uParam0->f_5 = 276.041f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 58)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2202.1f, 1148.97f, 29.771f };
		uParam0->f_5 = 192.541f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 59)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2201.614f, 1147.849f, 29.771f };
		uParam0->f_5 = 17.325f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 60)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2063.803f, 984.474f, 28.668f };
		uParam0->f_5 = 351.802f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 61)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2062.927f, 984.191f, 28.668f };
		uParam0->f_5 = 357.402f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 62)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2052.328f, 984.154f, 28.668f };
		uParam0->f_5 = 7.602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 63)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -1962.712f, 1237.788f, 28.668f };
		uParam0->f_5 = 192.001f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 64)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -1971.941f, 1238.135f, 28.668f };
		uParam0->f_5 = 147.341f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 65)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2167.429f, 1096.591f, 28.666f };
		uParam0->f_5 = 279.722f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 66)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2168.691f, 1094.195f, 28.666f };
		uParam0->f_5 = 263.663f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 67)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2175.549f, 1105.981f, 28.662f };
		uParam0->f_5 = 106.49f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 68)
	{
		*uParam0 = 1;
		uParam0->f_1 = 1751120084;
		uParam0->f_2 = { -2146.711f, 1080.604f, 28.667f };
		uParam0->f_5 = 44.585f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 69)
	{
		*uParam0 = 3;
		uParam0->f_1 = 974883178;
		uParam0->f_2 = { -2188.0664f, 1133.2179f, 29.6579f };
		uParam0->f_5 = 196.052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 70)
	{
		*uParam0 = 3;
		uParam0->f_1 = 974883178;
		uParam0->f_2 = { -2164.229f, 1097.166f, 29.24f };
		uParam0->f_5 = 196.052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 71)
	{
		*uParam0 = 3;
		uParam0->f_1 = 974883178;
		uParam0->f_2 = { -2187.425f, 1119.407f, 30.001f };
		uParam0->f_5 = 196.052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 72)
	{
		*uParam0 = 3;
		uParam0->f_1 = 974883178;
		uParam0->f_2 = { -2186.842f, 1086.662f, 30.177f };
		uParam0->f_5 = 196.052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 73)
	{
		*uParam0 = 3;
		uParam0->f_1 = 974883178;
		uParam0->f_2 = { -2185.955f, 1109.241f, 30.236f };
		uParam0->f_5 = 196.052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 74)
	{
		*uParam0 = 3;
		uParam0->f_1 = 974883178;
		uParam0->f_2 = { -2190.006f, 1132.5f, 35f };
		uParam0->f_5 = 196.052f;
		uParam0->f_8 = 1;
	}

	return *uParam0 != 0;
}

void func_111() // Position - 0xEAF1
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1768762336) == 0 || Global_1836593 == 0)
		iLocal_18 = 3;

	if (iLocal_19 != 0)
		iLocal_18 = 3;

	if (iLocal_19 == 0)
		iLocal_19 = Global_1836593;

	Global_1836588 = 0;
	iLocal_18 = 1;
	return;
}


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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
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
	sLocal_16 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	func_44(&uScriptParam_0);

	while (true)
	{
		func_43();
	
		if (func_34())
			break;
	
		func_15();
	}

	func_1();
	return;
}

void func_1() // Position - 0x85
{
	func_3(&uLocal_35);
	func_2();
	return;
}

void func_2() // Position - 0x97
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3(var uParam0) // Position - 0xA3
{
	var unk;

	func_4(false, true, true, false, false, false, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_6))
		CAM::DESTROY_CAM(uParam0->f_6, false);

	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	*uParam0 = { unk };
	return;
}

void func_4(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xDA
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_14(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21066.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_13())
				Global_21066.f_1 = 3;
		
			Global_22425 = 5;
		}
	
		func_12(true, bParam3, bParam2, false);
		Global_64314 = 1;
		Global_76643 = 1;
		Global_79537 = 1;
	}
	else
	{
		func_14(0);
		HUD::THEFEED_RESUME();
		Global_64314 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_12(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID()) && !func_6(PLAYER::PLAYER_ID(), 0) && !func_5() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
	
		Global_79537 = 0;
	}

	return;
}

BOOL func_5() // Position - 0x229
{
	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 14);
}

BOOL func_6(Player plParam0, int iParam1) // Position - 0x243
{
	BOOL flag;

	if (!func_9(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_7(-1, false) == 8;
	else
		flag = Global_1845221[plParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_7(int iParam0, BOOL bParam1) // Position - 0x29C
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_8();

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

int func_8() // Position - 0x2DD
{
	return Global_1574926;
}

BOOL func_9(Player plParam0) // Position - 0x2E9
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_10(Player plParam0) // Position - 0x30B
{
	if (func_6(plParam0, 0))
		return true;

	if (func_11())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_11() // Position - 0x34A
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_12(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x358
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_13() // Position - 0x38B
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_14(int iParam0) // Position - 0x3B2
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 13);
	else
		MISC::CLEAR_BIT(&Global_8919, 13);

	return;
}

void func_15() // Position - 0x3D5
{
	if (func_16(&uLocal_35))
		func_1();

	return;
}

BOOL func_16(var uParam0) // Position - 0x3EA
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	func_31(true);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	func_25(0);

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		HUD::SET_PAUSE_MENU_ACTIVE(false);

	switch (func_24(uParam0))
	{
		case 0:
			func_19(uParam0);
			break;
	
		case 1:
			func_17(uParam0);
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17(var uParam0) // Position - 0x448
{
	int localSceneFromNetworkId;

	localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_5);

	if (PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.9f)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, true, false, 0);
		func_18(uParam0, 2);
	}

	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x494
{
	*uParam0 = iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x4A1
{
	char* animDict;

	animDict = func_21();
	STREAMING::REQUEST_ANIM_DICT(animDict);

	if (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
		return;

	CAM::DO_SCREEN_FADE_IN(800);
	func_18(uParam0, 1);
	func_20(uParam0);
	return;
}

void func_20(var uParam0) // Position - 0x4D6
{
	char* animDict;

	animDict = func_21();
	uParam0->f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, false, false, 1065353216, 0, 1065353216);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_5, animDict, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_5);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "HS4F_IG25_BEACH", 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	uParam0->f_6 = CAM::CREATE_CAMERA(964613260, true);
	CAM::PLAY_CAM_ANIM(uParam0->f_6, "action_camera", animDict, uParam0->f_1, 0f, 0f, uParam0->f_4, false, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	STREAMING::REMOVE_ANIM_DICT(animDict);
	return;
}

char* func_21() // Position - 0x582
{
	if (func_22())
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";

	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

BOOL func_22() // Position - 0x59A
{
	return func_23(PLAYER::PLAYER_ID());
}

BOOL func_23(Player plParam0) // Position - 0x5AA
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == -1667301416)
		return 1;

	return 0;
}

int func_24(var uParam0) // Position - 0x5C9
{
	return *uParam0;
}

void func_25(int iParam0) // Position - 0x5D4
{
	if (func_30())
		return;

	if (!(Global_21066.f_1 == 1))
	{
		if (func_29(0))
			func_26(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

void func_26(int iParam0) // Position - 0x607
{
	if (func_30())
		return;

	if (Global_21284)
		if (func_28())
			func_27(true, true);
		else
			func_27(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_13())
		Global_21066.f_1 = 3;

	return;
}

void func_27(BOOL bParam0, BOOL bParam1) // Position - 0x691
{
	if (bParam0)
	{
		if (func_29(0))
		{
			Global_21284 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
		
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == true)
	{
		Global_21284 = false;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	}

	return;
}

BOOL func_28() // Position - 0x705
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_29(int iParam0) // Position - 0x713
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

BOOL func_30() // Position - 0x76A
{
	return IS_BIT_SET(Global_1957675, 19);
}

void func_31(BOOL bParam0) // Position - 0x779
{
	if (bParam0)
		func_33();

	func_32(4, -1);
	func_32(6, -1);
	func_32(7, -1);
	func_32(3, -1);
	func_32(1, -1);
	func_32(2, -1);
	func_32(11, -1);
	func_32(13, -1);
	func_32(14, -1);
	func_32(16, -1);
	return;
}

void func_32(int iParam0, int iParam1) // Position - 0x7CA
{
	MISC::SET_BIT(&(Global_1673654.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1673654.f_170[iParam1] = 1;
			break;
	}

	return;
}

void func_33() // Position - 0x800
{
	Global_2739811.f_4667 = 0;
	return;
}

BOOL func_34() // Position - 0x810
{
	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
		return true;

	return false;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x824
{
	if (Global_1575056 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_42())
		return true;

	if (Global_2699004)
		return true;

	if (func_41())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_39())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x8A8
{
	switch (func_38())
	{
		case 0:
			return func_37();
	
		case 2:
			return -47565502;
	}

	return 0;
}

Hash func_37() // Position - 0x8DB
{
	switch (Global_2699111)
	{
		case 0:
			return -931834499;
	
		default:
		
	}

	return -931834499;
}

int func_38() // Position - 0x8FF
{
	return Global_33087;
}

BOOL func_39() // Position - 0x90A
{
	return Global_2684718.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x919
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_41() // Position - 0x930
{
	return Global_2696416;
}

BOOL func_42() // Position - 0x93C
{
	return Global_2684718.f_695;
}

void func_43() // Position - 0x94B
{
	SYSTEM::WAIT(0);
	return;
}

void func_44(var uParam0) // Position - 0x958
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_45(&uLocal_35, *uParam0, uParam0->f_3);
	return;
}

void func_45(var uParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4) // Position - 0x976
{
	func_47(uParam0, vParam1);
	func_46(uParam0, uParam4);
	func_4(true, true, true, false, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam1, true, false, false, true);

	if (CAM::IS_SCREEN_FADED_OUT())
		STREAMING::LOAD_ALL_OBJECTS_NOW();

	return;
}

void func_46(var uParam0, var uParam1) // Position - 0x9B6
{
	uParam0->f_4 = uParam1;
	return;
}

void func_47(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x9C4
{
	uParam0->f_1 = { uParam1 };
	return;
}


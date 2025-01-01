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
	int iLocal_19 = 0;
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
	int iLocal_22 = 0;
	BOOL bLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	BOOL bLocal_34 = 0;
	Object obLocal_35 = 0;
	Object obLocal_36 = 0;
	Object obLocal_37 = 0;
	Object obLocal_38 = 0;
	Object obLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	Cam caLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	BOOL bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	Object obScriptParam_0 = 0;
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
	sLocal_16 = "NULL";
	iLocal_19 = 3;
	bLocal_23 = true;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "NULL", 64);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "NULL", 64);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_69();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
	{
		obLocal_35 = obScriptParam_0;
		obLocal_38 = obScriptParam_0;
	}

	while (true)
	{
		SYSTEM::WAIT(0);
		func_68();
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		{
			if (iLocal_41 != -1 && func_67() && !func_66() && !func_65(iLocal_41))
				func_69();
		
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
				func_69();
		
			if (func_64(13) || func_64(14))
				func_69();
		
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obScriptParam_0, 0))
				func_69();
		
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_63();
				
					if (ENTITY::GET_ENTITY_HEALTH(obScriptParam_0) < 950)
						func_69();
				
					switch (iLocal_27)
					{
						case 0:
							func_60();
						
							if (iLocal_41 == 5)
							{
								if (func_59(18) == true && func_59(20) == false)
								{
									obLocal_39 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
								
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(obLocal_39))
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(obLocal_39, 9);
								
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
						
							if (iLocal_41 == -1)
							{
								func_69();
							}
							else
							{
								func_58();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_33148[iLocal_41 /*11*/].f_2 = 0;
								Global_33148[iLocal_41 /*11*/].f_6 = 1;
								Global_33148[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_33148[iLocal_41 /*11*/].f_1 = 0;
								Global_33148[iLocal_41 /*11*/].f_4 = 0;
								Global_33148[iLocal_41 /*11*/].f_7 = 0;
								Global_33148[iLocal_41 /*11*/].f_8 = 0;
								Global_33148[iLocal_41 /*11*/].f_10 = 0;
								fLocal_28 = -4f;
								func_56(&uLocal_24);
								func_54();
								func_53();
								SYSTEM::WAIT(0);
								iLocal_27 = 1;
							}
							break;
					
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								SYSTEM::WAIT(0);
							else if (ENTITY::IS_ENTITY_STATIC(obLocal_35) && ENTITY::IS_ENTITY_UPRIGHT(obLocal_35, 1119092736))
								if (func_45() || Global_33148[iLocal_41 /*11*/].f_5)
									iLocal_27 = 2;
							else
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
							break;
					
						case 2:
							func_54();
						
							if (!func_65(iLocal_41))
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
							
								if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/))
									HUD::CLEAR_HELP(true);
							}
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
								if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_35))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_35, true, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
								if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_37))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_37, true, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
								if (ENTITY::IS_ENTITY_VISIBLE(obLocal_36))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_36, false, false);
						
							if (!MISC::ARE_STRINGS_EQUAL(&uLocal_44, "NULL"))
								AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_44, false);
						
							GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
							SYSTEM::WAIT(0);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(obLocal_38);
						
							if (!func_65(iLocal_41))
							{
								if (Global_33148[iLocal_41 /*11*/] == 3 || Global_33148[iLocal_41 /*11*/] == 2 || Global_33148[iLocal_41 /*11*/] == -1)
									Global_33148[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							
								GRAPHICS::SET_TV_CHANNEL(Global_33148[iLocal_41 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_28);
							}
							else
							{
								iLocal_42 = Global_33148[iLocal_41 /*11*/];
								iLocal_43 = Global_33148[iLocal_41 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_42, func_42(iLocal_43), Global_33148[iLocal_41 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_42);
							
								if (Global_33148[iLocal_41 /*11*/].f_7)
								{
									Global_33148[iLocal_41 /*11*/].f_5 = 0;
									Global_33148[iLocal_41 /*11*/].f_7 = 0;
								}
							}
						
							Global_33148[iLocal_41 /*11*/].f_2 = 1;
							func_41(133, 1);
							func_41(131, 1);
							func_41(132, 1);
							iLocal_27 = 3;
							break;
					
						case 3:
							if (Global_33148[iLocal_41 /*11*/].f_4)
								iLocal_27 = 6;
						
							if (Global_33148[iLocal_41 /*11*/].f_7 && func_65(iLocal_41))
							{
								Global_33148[iLocal_41 /*11*/].f_7 = 0;
								iLocal_27 = 6;
							}
						
							if (!func_39(iLocal_41))
							{
								func_38();
								iLocal_27 = 5;
							}
							else
							{
								func_36();
							
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
									GRAPHICS::SET_TV_CHANNEL(Global_33148[iLocal_41 /*11*/]);
							
								if (func_16())
									iLocal_27 = 6;
							}
							break;
					
						case 5:
							if (func_39(iLocal_41))
								iLocal_27 = 2;
						
							if (Global_33148[iLocal_41 /*11*/].f_4)
								iLocal_27 = 6;
							break;
					
						case 6:
							func_1();
						
							if (iLocal_40 != -1)
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
						
							Global_33148[iLocal_41 /*11*/].f_5 = 0;
							Global_33148[iLocal_41 /*11*/].f_4 = 0;
							Global_33148[iLocal_41 /*11*/].f_1 = 0;
							Global_33148[iLocal_41 /*11*/].f_2 = 0;
							Global_33148[iLocal_41 /*11*/].f_7 = 0;
							Global_33148[iLocal_41 /*11*/].f_8 = 0;
							Global_33148[iLocal_41 /*11*/].f_10 = 0;
							iLocal_27 = 1;
							break;
					}
				}
			}
		}
		else
		{
			func_69();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}

	func_69();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x4E6 (1254)
{
	if (iLocal_41 != -1)
		Global_33148[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();

	fLocal_28 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5")) == 0)
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_44, "NULL"))
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_44, true);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		HUD::CLEAR_HELP(true);

	func_3();
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
		if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_36))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_36, true, false);

	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	func_2();
	return;
}

void func_2() // Position - 0x590 (1424)
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_85 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_85 = 0;
		}
	}

	return;
}

void func_3() // Position - 0x5AC (1452)
{
	if (!(iLocal_33 == -1))
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
		{
			if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(obLocal_35, false, false);
			
				if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_scre_off"))
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
		ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);

	return;
}

void func_4() // Position - 0x643 (1603)
{
	if (bLocal_83)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		if (CAM::IS_CAM_ACTIVE(caLocal_76))
			CAM::SET_CAM_ACTIVE(caLocal_76, false);
	
		CAM::DESTROY_CAM(caLocal_76, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_29, 1, 0, 2);
		
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_34 == true)
				{
					bLocal_34 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
		
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_60, "NULL"))
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
				AUDIO::STOP_AUDIO_SCENE(&uLocal_60);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_37, true, false);
	
		func_5(false, true, false, false, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		bLocal_83 = false;
	}

	return;
}

void func_5(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x70F (1807)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_15(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21066.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_14())
				Global_21066.f_1 = 3;
		
			Global_22425 = 5;
		}
	
		func_13(true, bParam3, bParam2, false);
		Global_64314 = 1;
		Global_76643 = 1;
		Global_79537 = 1;
	}
	else
	{
		func_15(0);
		HUD::THEFEED_RESUME();
		Global_64314 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_13(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID(), 0) && !func_6() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_79537 = 0;
	}

	return;
}

BOOL func_6() // Position - 0x85E (2142)
{
	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 14);
}

BOOL func_7(Player plParam0, int iParam1) // Position - 0x878 (2168)
{
	BOOL flag;

	if (!func_10(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_8(-1, false) == 8;
	else
		flag = Global_1845221[plParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_8(int iParam0, BOOL bParam1) // Position - 0x8D1 (2257)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_9();

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

int func_9() // Position - 0x912 (2322)
{
	return Global_1574926;
}

BOOL func_10(Player plParam0) // Position - 0x91E (2334)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_11(Player plParam0) // Position - 0x940 (2368)
{
	if (func_7(plParam0, 0))
		return true;

	if (func_12())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_12() // Position - 0x97F (2431)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_13(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x98D (2445)
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

BOOL func_14() // Position - 0x9C0 (2496)
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_15(int iParam0) // Position - 0x9E7 (2535)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 13);
	else
		MISC::CLEAR_BIT(&Global_8919, 13);

	return;
}

BOOL func_16() // Position - 0xA0A (2570)
{
	if (!func_65(iLocal_41))
	{
		if (func_32(&uLocal_24) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_86, 1f, 1f, 1.5f, false, true, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && !func_31(8, -1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_29, 90f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_40 == -1)
			{
				func_30();
				_CONTEXT_ADD_HELP_TEXT(&iLocal_40, 3, "TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			}
			else if (func_27(iLocal_40, true))
			{
				_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
				func_56(&uLocal_24);
				Global_33148[iLocal_41 /*11*/].f_7 = 0;
			
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
			
				return true;
			}
		
			func_17();
		}
		else
		{
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
				HUD::CLEAR_HELP(true);
		
			func_2();
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		}
	}

	return false;
}

void func_17() // Position - 0xB16 (2838)
{
	if (bLocal_83 == false)
	{
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
			_CONTEXT_ADD_HELP_TEXT(&iLocal_40, 3, "TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			func_26();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		if (bLocal_34)
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
		func_24(true, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
		func_18(0);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
			func_4();
		}
	}

	return;
}

void func_18(int iParam0) // Position - 0xBD0 (3024)
{
	if (func_23())
		return;

	if (!(Global_21066.f_1 == 1))
	{
		if (func_22(0))
			func_19(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

void func_19(int iParam0) // Position - 0xC03 (3075)
{
	if (func_23())
		return;

	if (Global_21284)
		if (func_21())
			func_20(true, true);
		else
			func_20(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_14())
		Global_21066.f_1 = 3;

	return;
}

void func_20(BOOL bParam0, BOOL bParam1) // Position - 0xC8D (3213)
{
	if (bParam0)
	{
		if (func_22(0))
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

BOOL func_21() // Position - 0xD01 (3329)
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_22(int iParam0) // Position - 0xD0F (3343)
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

BOOL func_23() // Position - 0xD66 (3430)
{
	return IS_BIT_SET(Global_1957675, 19);
}

void func_24(BOOL bParam0, BOOL bParam1) // Position - 0xD75 (3445)
{
	int num;
	int num2;
	float tvVolume;

	num = 64;

	if (bParam0)
	{
		if (func_25(false))
		{
			if (!bLocal_20)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
			
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
					GRAPHICS::SET_TV_CHANNEL(1);
				else
					GRAPHICS::SET_TV_CHANNEL(0);
			
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			bLocal_20 = false;
		}
	}

	if (bParam1)
	{
		num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) - 127;
	
		if (!bLocal_21)
		{
			if (num2 > 0 + num)
			{
				tvVolume = GRAPHICS::GET_TV_VOLUME();
				tvVolume = tvVolume - 0.5f;
			
				if (tvVolume < -36f)
					tvVolume = -36f;
			
				GRAPHICS::SET_TV_VOLUME(tvVolume);
				iLocal_22 = MISC::GET_GAME_TIMER();
				bLocal_21 = true;
			}
		
			if (num2 < 0 - num)
			{
				tvVolume = GRAPHICS::GET_TV_VOLUME();
				tvVolume = tvVolume + 0.5f;
			
				if (tvVolume > 0f)
					tvVolume = 0f;
			
				GRAPHICS::SET_TV_VOLUME(tvVolume);
				iLocal_22 = MISC::GET_GAME_TIMER();
				bLocal_21 = true;
			}
		
			if (num2 < 0 + num && num2 > 0 - num)
			{
				bLocal_23 = true;
			}
			else if (bLocal_23)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (tvVolume != -36f && tvVolume != 0f)
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
				
					bLocal_23 = false;
				}
			}
		}
	
		if (bLocal_21)
			if (num2 == 0 || MISC::GET_GAME_TIMER() > iLocal_22 + 24)
				bLocal_21 = false;
	}

	return;
}

BOOL func_25(BOOL bParam0) // Position - 0xEBC (3772)
{
	int num;
	int num2;

	num = 64;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) - 127;

	if (bParam0 || SYSTEM::TIMERA() > 300)
	{
		if (num2 > 0 + num || num2 < 0 - num)
		{
			SYSTEM::SETTIMERA(0);
			return true;
		}
	}

	return false;
}

void func_26() // Position - 0xF08 (3848)
{
	float fov;

	fov = 50f;

	if (bLocal_83 == false)
	{
		caLocal_76 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uLocal_77, uLocal_80, fov, false, 2);
		CAM::SET_CAM_FAR_CLIP(caLocal_76, 100f);
		CAM::SET_CAM_ACTIVE(caLocal_76, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				bLocal_34 = true;
			}
		
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_29, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_60, "NULL"))
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
				AUDIO::START_AUDIO_SCENE(&uLocal_60);
	
		func_5(true, true, false, false, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
		bLocal_83 = true;
	}

	return;
}

BOOL func_27(int iParam0, BOOL bParam1) // Position - 0xFDF (4063)
{
	int num;

	num = func_28(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_22(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44941[num /*32*/] == true && Global_44941[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_44941[num /*32*/].f_29)
					return false;
		
			Global_44941[num /*32*/].f_5 = 1;
			Global_44941[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44941[num /*32*/] == false;
			Global_44941[num /*32*/].f_7;
		}
	}

	return false;
}

int func_28(int iParam0) // Position - 0x1097 (4247)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44941[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x10D2 (4306)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			_CONTEXT_REMOVE_HELP_TEXT(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44941[i /*32*/])
		{
			Global_44941[i /*32*/] = true;
			Global_44941[i /*32*/].f_1 = Global_45142;
			Global_45142 = Global_45142 + 1;
			Global_44941[i /*32*/].f_4 = 0;
			Global_44941[i /*32*/].f_29 = 0;
			Global_44941[i /*32*/].f_5 = 0;
			Global_44941[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44941[i /*32*/].f_8), sParam2, 16);
			Global_44941[i /*32*/].f_6 = iParam3;
			Global_44941[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44941[i /*32*/].f_7 = 0;
			Global_44941[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44941[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44941[i /*32*/].f_13), sParam4, 64);
				Global_44941[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44941[i /*32*/].f_12 = 0;
				Global_44941[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44941[i /*32*/].f_1;
			return;
		}
	}

	return;
}

void func_30() // Position - 0x11FD (4605)
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_85 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			iLocal_85 = 1;
		}
	}

	return;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x121D (4637)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673654.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673654.f_1048, iParam0);
}

float func_32(var uParam0) // Position - 0x1255 (4693)
{
	if (func_35(uParam0))
		if (func_34(uParam0))
			return uParam0->f_2;
		else
			return func_33(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_33(BOOL bParam0) // Position - 0x1291 (4753)
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_34(var uParam0) // Position - 0x12E9 (4841)
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_35(var uParam0) // Position - 0x12F6 (4854)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_36() // Position - 0x1303 (4867)
{
	float xScale;

	xScale = 1f;
	func_37(&xScale);
	HUD::SET_TEXT_RENDER_ID(iLocal_33);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, xScale, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	return;
}

void func_37(var uParam0) // Position - 0x1344 (4932)
{
	float aspectRatio;
	float num;
	float num2;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (aspectRatio <= 16f / 9f)
	{
		num = aspectRatio / 16f / 9f;
		num2 = *uParam0;
		*uParam0 = num2 * num;
	}

	return;
}

void func_38() // Position - 0x1381 (4993)
{
	Global_33148[iLocal_41 /*11*/].f_7 = 0;
	Global_33148[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_28 = GRAPHICS::GET_TV_VOLUME();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
		AUDIO::STOP_AUDIO_SCENE(&uLocal_60);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		HUD::CLEAR_HELP(true);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_53();
	return;
}

BOOL func_39(int iParam0) // Position - 0x1401 (5121)
{
	var unk;

	unk = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
	
		case 4:
			if (unk.f_2 < 74f)
				return true;
			break;
	
		case 5:
			if (unk.f_2 > 75f)
				return true;
			break;
	}

	return false;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x1476 (5238)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_41(int iParam0, int iParam1) // Position - 0x1489 (5257)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60050[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60050[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60050[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60050[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

char* func_42(int iParam0) // Position - 0x14E6 (5350)
{
	char* str;

	switch (iParam0)
	{
		case 1:
			str = "PL_STD_CNT";
			break;
	
		case 2:
			str = "PL_STD_WZL";
			break;
	
		case 3:
			str = "PL_LO_CNT";
			break;
	
		case 4:
			str = "PL_LO_WZL";
			break;
	
		case 7:
			str = "PL_SP_WORKOUT";
			break;
	
		case 8:
			str = "PL_SP_INV";
			break;
	
		case 9:
			str = "PL_SP_INV_EXP";
			break;
	
		case 5:
			str = "PL_LO_RS";
			break;
	
		case 6:
			str = "PL_LO_RS_CUTSCENE";
			break;
	
		case 10:
			str = "PL_SP_PLSH1_INTRO";
			break;
	
		case 11:
			str = "PL_LES1_FAME_OR_SHAME";
			break;
	
		case 12:
			str = "PL_STD_WZL_FOS_EP2";
			break;
	
		case 13:
			str = "PL_MP_WEAZEL";
			break;
	
		case 14:
			str = "PL_MP_CCTV";
			break;
	}

	return str;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x15C5 (5573)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x15D8 (5592)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_28(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44941[num /*32*/])
		{
			Global_44941[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_45() // Position - 0x162F (5679)
{
	if (func_32(&uLocal_24) < 1f)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_86, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_29, 90f) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (func_31(8, -1))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (Global_98591)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (Global_33148[iLocal_41 /*11*/].f_8)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (iLocal_40 == -1)
	{
		_CONTEXT_ADD_HELP_TEXT(&iLocal_40, 3, "TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/, 0, 0, 0, 0);
		return false;
	}

	if (func_27(iLocal_40, true))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		func_56(&uLocal_24);
		Global_33148[iLocal_41 /*11*/].f_7 = 1;
	
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
	
		func_46(309, 0, 0);
		return true;
	}

	return false;
}

void func_46(int iParam0, int iParam1, int iParam2) // Position - 0x175E (5982)
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_114135.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114135.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114135.f_10198[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114135.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114135.f_10198[iParam0 /*12*/].f_10 = iParam1;
		Global_114135.f_10198[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_47();

	return;
}

void func_47() // Position - 0x1844 (6212)
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113871 = 0;
	Global_113872 = 0;
	Global_113873 = 0;
	Global_113874 = 0;
	Global_113875 = 0;
	Global_113876 = 0;
	Global_113877 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114135.f_10198.f_3853;
	Global_114135.f_10198.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114135.f_10198[num /*12*/].f_5 == 1)
		{
			switch (Global_114135.f_10198[num /*12*/].f_6)
			{
				case 1:
					Global_113871 = Global_113871 + 1;
					num2 = num2 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113872 = Global_113872 + 1;
					num3 = num3 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113873 = Global_113873 + 1;
					num4 = num4 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113874 = Global_113874 + 1;
					num5 = num5 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113875 = Global_113875 + 1;
					num6 = num6 + (Global_114135.f_10198[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113876 = Global_113876 + 1;
					num7 = num7 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113877 = Global_113877 + 1;
					num8 = num8 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113854 > 0)
		if (Global_113871 == Global_113854)
			num2 = 55f;

	if (Global_113855 > 0)
		if (Global_113872 == Global_113855)
			num3 = 10f;

	if (Global_113856 > 0)
		if (Global_113873 == Global_113856)
			num4 = 0f;

	if (Global_113857 > 0)
		if (Global_113874 == Global_113857)
			num5 = 10f;

	if (Global_113858 > 0)
	{
		if (Global_113875 == Global_113858 || (Global_113858 * 10) / Global_113875 < 41 || Global_113875 > Global_113861 || Global_113875 == Global_113861)
		{
			if (!IS_BIT_SET(Global_114135.f_10198.f_3856, 14))
			{
				if (Global_113875 == Global_113858)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113858, 0);
					MISC::SET_BIT(&(Global_114135.f_10198.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113859 > 0)
		if (Global_113876 == Global_113859)
			num7 = 15f;

	if (Global_113860 > 0)
		if (Global_113877 == Global_113860)
			num8 = 5f;

	Global_114135.f_10198.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113875 > Global_113861 || Global_113875 == Global_113861)
		value2 = Global_113861;
	else
		value2 = Global_113875;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113871, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113854, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113872, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113855, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113873, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113856, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113874, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113857, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113861, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113877 + Global_113876, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113860 + Global_113859, true);
	Global_113878 = (Global_113871 * 100) / Global_113854;
	Global_113880 = ((Global_113873 + Global_113872) * 100) / (Global_113856 + Global_113855);
	Global_113879 = ((Global_113874 + value2) * 100) / (Global_113857 + Global_113861);
	Global_113881 = ((Global_113876 + Global_113877) * 100) / (Global_113859 + Global_113860);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114135.f_10198.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113878, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113879, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113880, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_114135.f_10198.f_3853))
		func_51(13, SYSTEM::FLOOR(Global_114135.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79539)
		{
			if (func_50() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113869 = 0;
			
				if (!Global_64308)
					func_48();
			}
		}
	}

	return;
}

int func_48() // Position - 0x1D02 (7426)
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101727.f_8)
		if (Global_101727.f_10 > 0)
			return 0;
	else if (Global_101727.f_10 > 1)
		return 0;

	Global_101727.f_10 = Global_101727.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1D4D (7501)
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

int func_50() // Position - 0x1D75 (7541)
{
	return Global_33087;
}

BOOL func_51(int iParam0, int iParam1) // Position - 0x1D80 (7552)
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1DD1 (7633)
{
	if (iParam2 == -1)
		iParam2 = func_9();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_53() // Position - 0x1DEF (7663)
{
	SYSTEM::WAIT(0);

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_33 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}

	return;
}

void func_54() // Position - 0x1E1B (7707)
{
	Hash entityModel;

	if (iLocal_41 == 4)
		func_55();

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");

	SYSTEM::WAIT(0);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_35))
		func_69();

	entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_35);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
	HUD::LINK_NAMED_RENDERTARGET(entityModel);
	SYSTEM::WAIT(0);

	if (iLocal_41 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_35))
				func_69();
		
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_35))
				func_69();
		
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
		
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel))
				HUD::LINK_NAMED_RENDERTARGET(entityModel);
		
			SYSTEM::WAIT(0);
		}
	}

	iLocal_33 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
	return;
}

void func_55() // Position - 0x1ED9 (7897)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
		if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2"))
			return;

	obLocal_35 = 0;
	obLocal_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), uLocal_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_35, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_35, true);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_35, false, false);
	obLocal_37 = 0;
	obLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), uLocal_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_37, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_37, true);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
	return;
}

void func_56(int* piParam0) // Position - 0x1F58 (8024)
{
	func_57(piParam0, 0f);
	return;
}

void func_57(int* piParam0, float fParam1) // Position - 0x1F67 (8039)
{
	piParam0->f_1 = func_33(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_58() // Position - 0x1F92 (8082)
{
	return;
}

BOOL func_59(int iParam0) // Position - 0x1F9A (8090)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_330[iParam0 /*6*/];
}

void func_60() // Position - 0x1FC6 (8134)
{
	uLocal_29 = { ENTITY::GET_ENTITY_COORDS(obLocal_35, true) };
	fLocal_32 = ENTITY::GET_ENTITY_HEADING(obLocal_35);
	func_62();

	if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(uLocal_29, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			iLocal_41 = 0;
			uLocal_77 = { -9.8135f, -1440.9128f, 31.3654f };
			uLocal_80 = { 0f, 0f, -134.3211f };
			uLocal_86 = { -9.3078f, -1440.931f, 30.1015f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(uLocal_29, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			uLocal_77 = { 1978.2303f, 3819.6504f, 34.2724f };
			uLocal_80 = { 0f, 0f, -105.15f };
			uLocal_86 = { 1978.3303f, 3819.717f, 32.4501f };
			func_61();
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(uLocal_29, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			uLocal_77 = { 2.5724f, 527.9989f, 176.1619f };
			uLocal_80 = { 0f, 0f, -29.9488f };
			uLocal_86 = { 3.6654f, 529.8486f, 173.6281f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(uLocal_29, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			uLocal_77 = { -1160.5024f, -1520.7598f, 10.7393f };
			uLocal_80 = { 0f, 0f, 60.061f };
			uLocal_86 = { -1160.143f, -1520.4946f, 9.6555f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(uLocal_29, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			uLocal_77 = { -802.8972f, 172.537f, 74.5801f };
			uLocal_80 = { 0f, 0f, -69.0273f };
			uLocal_86 = { -800.7292f, 173.2194f, 71.8348f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(uLocal_29, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			uLocal_77 = { -808.3051f, 171.2623f, 77.2822f };
			uLocal_80 = { 1.8886f, 0f, 110.9232f };
			uLocal_86 = { -809.962f, 170.919f, 75.7407f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_MICHAELS_HOUSE", 64);
		}
	}

	return;
}

void func_61() // Position - 0x22B5 (8885)
{
	obLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), uLocal_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_36, fLocal_32);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_36, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_36, true);
	return;
}

void func_62() // Position - 0x22E7 (8935)
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_42(1), false);

	if (func_59(22))
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(12), false);
	else
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(2), false);

	return;
}

void func_63() // Position - 0x231D (8989)
{
	if (iLocal_41 == -1)
		return;

	if (Global_33148[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_84 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_38, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_35, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_36, false, false);
		
			iLocal_84 = 0;
		}
	}
	else if (iLocal_84 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_38, true, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_35, true, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, true, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_36, true, false);
	
		iLocal_84 = 1;
	}

	return;
}

BOOL func_64(int iParam0) // Position - 0x23D8 (9176)
{
	return Global_44181 == iParam0;
}

BOOL func_65(int iParam0) // Position - 0x23E6 (9190)
{
	if (iParam0 != -1)
		if (Global_33148[iParam0 /*11*/].f_5)
			return true;

	return false;
}

BOOL func_66() // Position - 0x2405 (9221)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_67() // Position - 0x2422 (9250)
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 20);

	return false;
}

void func_68() // Position - 0x2445 (9285)
{
	return;
}

void func_69() // Position - 0x244D (9293)
{
	if (iLocal_41 == -1)
		SCRIPT::TERMINATE_THIS_THREAD();

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);

	if (iLocal_41 != -1)
	{
		func_1();
		Global_33148[iLocal_41 /*11*/].f_6 = 0;
		Global_33148[iLocal_41 /*11*/].f_7 = 0;
		Global_33148[iLocal_41 /*11*/].f_8 = 0;
		Global_33148[iLocal_41 /*11*/].f_4 = 0;
		Global_33148[iLocal_41 /*11*/].f_5 = 0;
		Global_33148[iLocal_41 /*11*/].f_2 = 0;
		Global_33148[iLocal_41 /*11*/] = -1;
		Global_33148[iLocal_41 /*11*/].f_1 = 0;
		Global_33148[iLocal_41 /*11*/].f_10 = 0;
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		HUD::CLEAR_HELP(true);

	SYSTEM::WAIT(0);
	func_70();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
		AUDIO::STOP_AUDIO_SCENE(&uLocal_60);

	AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_70() // Position - 0x2514 (9492)
{
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&obLocal_35);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
	{
		OBJECT::DELETE_OBJECT(&obLocal_37);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
	{
		OBJECT::DELETE_OBJECT(&obLocal_36);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}

	return;
}


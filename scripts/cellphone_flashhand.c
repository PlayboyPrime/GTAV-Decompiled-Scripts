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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	BOOL bLocal_72 = 0;
	int iLocal_73 = 0;
	BOOL bLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	float fLocal_81 = 0f;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	BOOL bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	BOOL bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	BOOL bLocal_110 = 0;
	int iLocal_111 = 0;
	Vehicle veLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	BOOL bLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	BOOL bLocal_121 = 0;
	int iLocal_122 = 0;
#endregion

void main() // Position - 0x0
{
	var txdName;
	var gamerHandle;
	int num;
	float num2;
	float num3;
	int num4;
	int seatIndex;
	BOOL flag;
	int num5;

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
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = (0.05f + 0.275f) - 0.01f;
	fLocal_64 = 0.73f;
	fLocal_65 = 0.55f;
	fLocal_66 = 0.73f;
	fLocal_67 = 0.45f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_21142 = 145;
	MISC::CLEAR_BIT(&Global_8801, 8);
	MISC::CLEAR_BIT(&Global_8800, 14);
	MISC::CLEAR_BIT(&Global_4543084, 3);
	MISC::CLEAR_BIT(&Global_8801, 10);
	MISC::CLEAR_BIT(&Global_8800, 17);
	MISC::CLEAR_BIT(&Global_8800, 9);
	MISC::CLEAR_BIT(&Global_8800, 26);
	MISC::CLEAR_BIT(&Global_8800, 23);
	MISC::CLEAR_BIT(&Global_8801, 24);
	MISC::CLEAR_BIT(&Global_8801, 25);
	MISC::CLEAR_BIT(&Global_8801, 27);
	MISC::CLEAR_BIT(&Global_8801, 26);
	MISC::CLEAR_BIT(&Global_8800, 30);
	Global_2749863 = 0;
	iLocal_120 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_20896 = 0;
	bLocal_72 = false;
	Global_20874 = 0;
	Global_20914 = 0;
	Global_20915 = 0;
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_20861 = { Global_20893 };
	Global_20934 = 4;
	Global_20935 = 0;
	Global_9405 = 1;
	Global_20910 = Global_20934;

	if (Global_20912 == false)
	{
		Global_20913 = 0;
	
		if (Global_79389)
		{
			if (func_123())
				Global_20911 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			else
				Global_20911 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
		
			iLocal_86 = 1;
			iLocal_86 == 1;
		}
		else if (Global_20873)
		{
			Global_20918 = true;
			Global_20911 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_20911 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&Global_113969.f_14054[Global_20930 /*20*/]);
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911) && Global_20913 == 0)
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
				Global_20913 = 1;
		
			if (MISC::IS_PC_VERSION())
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
					if (SYSTEM::TIMERA() > 2000)
						Global_20913 = 1;
		
			if (Global_20929 == 1)
				func_122();
		}
	
		if (Global_20913 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
				func_121(Global_20911, "SHUTDOWN_MOVIE");
		
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20911);
			Global_20871 = 0;
			Global_20912 = false;
			Global_21143 = 0;
		
			if (Global_113969.f_14054.f_84 == 1)
			{
				Global_113969.f_14054.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
		
			Global_20874 = 1;
			Global_20930.f_1 = 3;
			func_120();
			Global_20918 = false;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_8800, 9);
			MISC::CLEAR_BIT(&Global_8800, 27);
			MISC::CLEAR_BIT(&Global_8800, 30);
			MISC::CLEAR_BIT(&Global_8801, 5);
			MISC::CLEAR_BIT(&Global_8801, 21);
			MISC::CLEAR_BIT(&Global_8802, 2);
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			Global_21145 = false;
			Global_23346 = 0;
			Global_23345 = 0;
			Global_22299 = false;
			func_118();
			func_116();
			Global_4543363 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		Global_20854 = 0.1f;
		Global_20855 = 0.38f;
		Global_20856 = 0.195f;
		Global_20857 = 0.05f;
	
		if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
		
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_114(Global_20911, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
		}
	
		Global_20913 == 0;
		func_113();
	
		if (Global_79389)
			TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Michael", 24);
	
		Global_20912 = true;
	}

	Global_8803 = 99;
	func_112();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	if (HUD::IS_RADAR_HIDDEN())
		Global_23300 = 1;
	else
		Global_23300 = 0;

	func_114(Global_20911, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_20872 = 1;

	if (Global_79389)
	{
		Global_21147 = false;
	
		if (func_123())
			if (Global_1836577 == 1)
				Global_4543360 = 4;
			else
				Global_4543360 = 2;
		else
			Global_4543360 = func_108(2030, -1);
	
		if (Global_4543360 < 1 || Global_4543360 > 7)
			Global_4543360 = 1;
	
		func_114(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_4543360), -1082130432, -1082130432, -1082130432, -1082130432);
		func_107();
	
		if (func_123())
			if (Global_1836577 == 1)
				Global_4543361 = 16;
			else
				Global_4543361 = 9;
		else
			Global_4543361 = func_108(2029, -1);
	
		if (Global_4543361 == 0)
		{
			gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			num = 0;
			NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false;
			Global_4543364 == 1;
		
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4543364 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&gamerHandle, &txdName))
				{
				}
				else
				{
					num = 1;
				}
			
				if (num == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&txdName);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_114(Global_20911, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_114(Global_20911, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_114(Global_20911, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4543361), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_20873)
			Global_21147 = false;
		else if (Global_113969.f_14054.f_88 == 1 || Global_113969.f_14054.f_89 == true)
			Global_21147 = false;
		else
			Global_21147 = false;
	
		func_114(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_9604 == 0)
			func_114(Global_20911, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
	
		func_107();
	}

	iLocal_87 = func_105();

	if (Global_20873 == false)
		func_93();

	Global_20908 = 0;
	Global_21146 = false;
	MISC::CLEAR_BIT(&Global_8800, 9);
	Global_2696167 = false;

	if (func_88(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
		Global_2696167 = true;

	func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_86();
	func_85();
	func_84(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_20919, true);
	SYSTEM::SETTIMERB(0);

	while (Global_20930.f_1 < 6 && Global_20913 == 0)
	{
		SYSTEM::WAIT(0);
	
		if (SYSTEM::TIMERB() > 10000)
			Global_20913 = 1;
	
		if (Global_20930.f_1 < 4)
			Global_20913 = 1;
	}

	if (Global_20930.f_1 == 5 || Global_20930.f_1 == 6)
	{
		if (func_83(14))
			func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		else
			func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
	
		if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
			func_114(Global_20911, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		else
			func_114(Global_20911, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_20918)
			func_82(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		else
			func_82(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_20918)
			func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
		else
			func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_21147 == false)
		{
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else if (Global_79389)
		{
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			if (Global_21146 == true)
				if (Global_20918)
					func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20918)
				func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		
			MISC::SET_BIT(&Global_8800, 17);
		}
	}

	Global_20916 = 1;
	func_81();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_104 = NETWORK::GET_NETWORK_TIME();
	else
		iLocal_99 = MISC::GET_GAME_TIMER();

	if (Global_21143 == 1)
	{
		if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_113969.f_14054.f_84 == 0)
			{
				Global_113969.f_14054.f_84 = 1;
			
				if (Global_20875 == 0)
				{
					num2 = 0.75f;
					num3 = 0.8f;
				}
				else
				{
					num2 = 0.65f;
					num3 = 0.77f;
				}
			
				num2 == num3;
				_DISPLAY_HELP_TEXT("CELL_7052" /*Sleep Mode is active.~n~The game story is paused. To continue it, enter the SETTINGS menu, select PROFILE then NORMAL MODE or trigger an existing mission.*/, 10000);
			}
		}
	}

	if (Global_79389 == false)
		iLocal_16 = MISC::GET_GAME_TIMER() + 375;

	if (func_79())
		iLocal_78 = 1;
	else
		iLocal_78 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_79 = 1;
		
			if (func_79())
				func_78();
		}
		else
		{
			iLocal_79 = 0;
		}
	}

	if (MISC::IS_PC_VERSION())
	{
		if (Global_79389 == false)
		{
			iLocal_101 = MISC::GET_GAME_TIMER();
			iLocal_103 = 0;
		}
	}

	MISC::CLEAR_BIT(&Global_8802, 9);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (IS_BIT_SET(Global_4543084, 24))
		{
			if (!Global_21146)
			{
				if (Global_20930.f_1 == 6 || Global_20930.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4543084, 24);
					func_86();
					func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_84(1);
				
					if (Global_20930.f_1 == 6)
						func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
				}
			}
		}
	
		if (func_77())
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	
		if (Global_79389 == false)
		{
			if (bLocal_74)
				if (Global_20930.f_1 == 6 || Global_20930.f_1 == 7)
					bLocal_74 = false;
		
			if (Global_20930.f_1 > 4)
			{
				if (IS_BIT_SET(Global_8800, 14) && Global_4543363 == 0 && Global_20870 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_76())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_75);
						
							if (Global_20876[Global_20875 /*3*/].f_1 != uLocal_75.f_1)
								func_74();
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_75);
						
							if (Global_20883[Global_20875 /*3*/].f_1 != uLocal_75.f_1)
							{
								!func_77();
							
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1870099198) < 1)
									func_72();
							}
						}
					
						if (iLocal_79 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_79 = 1;
								func_72();
								func_78();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_79 = 0;
							func_74();
						
							if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
								if (Global_22286 != 2)
									func_71();
						}
					
						if (iLocal_78 == 0)
						{
							if (func_79())
							{
								iLocal_78 = 1;
							
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
									func_78();
							
								func_74();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
								if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
						
							if (func_79() == false)
							{
								iLocal_78 = 0;
								func_72();
							}
						}
					}
				}
			}
		}
	
		if (Global_2696167 == true)
		{
			if (!func_88(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-50326605) == 0)
				{
					if (Global_20930.f_1 > 3)
					{
						Global_20915 = 1;
						func_70();
						func_67(0);
						Global_2696167 = false;
					}
				}
			}
		}
	
		if (Global_21148 == 0)
		{
			if (Global_44042 != 15 || Global_8805 == 1 || _IS_MISSION_REPEAT_ACTIVE(false))
			{
				if (!Global_21146)
				{
					if (Global_20930.f_1 == 6)
					{
						Global_8806 = 42;
						func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_86();
						func_85();
						func_84(1);
						func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21148 = 1;
			}
		}
		else if (Global_44042 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8805 == 0)
		{
			if (!Global_21146)
			{
				if (Global_20930.f_1 == 6)
				{
					Global_8806 = 255;
					func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_86();
					func_85();
					func_84(1);
					func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21148 = 0;
		}
	
		if (Global_21149 == 0)
		{
			if (IS_BIT_SET(Global_8801, 3))
			{
				if (!Global_21146)
				{
					if (Global_20930.f_1 == 6)
					{
						func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_86();
						func_85();
						func_84(1);
						func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21149 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_8801, 3))
		{
			if (!Global_21146)
			{
				if (Global_20930.f_1 == 6)
				{
					func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_86();
					func_85();
					func_84(1);
					func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21149 = 0;
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_20858.f_1 != Global_20876[Global_20875 /*3*/].f_1 || func_79())
			{
				if (Global_20930.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(361769742) == 0)
						if (Global_79389)
							if (Global_20930.f_1 == 9)
								if (Global_22339 == 1 || IS_BIT_SET(Global_8801, 23))
									PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20899);
							else
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20899);
						else
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20899);
				
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1641206367) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20900);
					
						if (IS_BIT_SET(Global_8800, 17))
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20901);
					}
				
					if (!func_65() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1641206367) == 0)
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20902);
				}
			}
		
			Global_20858.f_1 == Global_20876[Global_20875 /*3*/].f_1;
		}
	
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_76498)
			{
				if (!func_77())
				{
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
				}
			
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20904);
			
				if (!func_65())
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20905);
			
				if (Global_20930.f_1 > 4)
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20907);
			}
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20898, 0))
		{
			bLocal_96 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (iLocal_73 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20899))
			{
				Global_8804 = 1;
				iLocal_73 = 0;
			}
		
			if (!(Global_20930.f_1 > 3))
				iLocal_73 = 0;
		}
	
		if (bLocal_96)
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20898))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_20930.f_1 = 3;
					func_62();
				}
			}
			else
			{
				bLocal_96 = false;
			}
		}
	
		Global_9408 = MISC::GET_GAME_TIMER();
	
		if (Global_20917)
		{
			func_81();
			Global_20916 = 1;
			Global_20917 = false;
		}
	
		if (Global_21145 == false)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
			func_55();
			func_54();
			HUD::SET_TEXT_RENDER_ID(iLocal_84);
		
			if (Global_20916 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			
				if (Global_20873)
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20911, Global_20850, Global_20851, Global_20852, Global_20853, 255, 255, 255, 255, 0);
				else
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20911, Global_20850, Global_20851, Global_20852, Global_20853, 255, 255, 255, 255, 0);
			
				func_112();
			}
		
			if (Global_20870 == 1)
			{
				if (Global_20930.f_1 > 3)
					func_53();
			}
			else if (Global_20930.f_1 > 3)
			{
				if (Global_4543363 == 1)
					func_52();
			
				if (IS_BIT_SET(Global_8801, 25))
				{
					if (Global_79389 == true)
						func_51();
				}
				else if (!IS_BIT_SET(Global_8801, 24))
				{
					if (IS_BIT_SET(Global_8801, 26))
					{
						if (func_64(FRONTEND_CONTROL, Global_20897, 0))
						{
							MISC::SET_BIT(&Global_8801, 25);
							MISC::CLEAR_BIT(&Global_8801, 26);
							MISC::CLEAR_BIT(&Global_8802, 2);
						}
					}
				}
				else if (Global_79389 == true)
				{
					func_50();
				}
			}
		}
	
		if (bLocal_72)
		{
			if (Global_20930.f_1 == 6)
				func_46();
		}
		else if (!IS_BIT_SET(Global_8800, 23))
		{
			if (Global_20930.f_1 == 5 || Global_20930.f_1 == 6)
			{
				if (Global_21145 == false)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-50326605) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1870099198) < 1)
					{
						if (Global_20873 == false)
							if (IS_BIT_SET(Global_8800, 14))
								if (!Global_79389)
									if (iLocal_73 == 0)
										if (!func_83(14))
											func_45();
										else if (Global_2696167)
											func_44();
								else if (IS_BIT_SET(Global_8802, 9))
									func_43();
								else
									func_24();
					
						if (IS_BIT_SET(Global_8800, 9))
						{
							func_22(0, 0, 1, true);
						}
						else if (Global_23345 == 0)
						{
							if (!IS_BIT_SET(Global_4543084, 3))
							{
								if (Global_79389)
									func_21();
							
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_79389)
								func_21();
						
							if (!IS_BIT_SET(Global_4543084, 3))
							{
								if (Global_23345 == 1)
								{
									if (IS_BIT_SET(Global_4543084, 1))
									{
										if (IS_BIT_SET(Global_8800, 14))
										{
											if (Global_79389)
												func_22(7, 0, 1, false);
											else
												Global_23346 = 0;
										
											Global_23345 = 0;
											MISC::CLEAR_BIT(&Global_4543084, 1);
										}
									}
									else if (IS_BIT_SET(Global_8800, 14))
									{
										func_22(7, 0, 1, false);
										Global_23345 = 0;
									}
								}
								else
								{
									if (Global_23345 == 3)
									{
										func_22(1, 0, 1, false);
										Global_23345 = 0;
									}
								
									if (Global_23345 == 2)
									{
										func_22(14, 0, 1, false);
										Global_23345 = 0;
									}
								
									if (Global_23345 == 4)
									{
										func_22(23, 0, 1, false);
										Global_23345 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_8807[Global_20933 /*15*/].f_5)))
		{
			if (Global_20933 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[Global_20933 /*15*/].f_9) == 0)
					Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[Global_20933 /*15*/].f_5), CONTACTS_APP);
			}
			else
			{
				num4 = 0;
			
				if (Global_20933 == 23)
					IS_BIT_SET(Global_4543084, 4) == false && Global_1836172 == false;
			
				if (Global_20933 == 2 || num4 == 1)
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[Global_20933 /*15*/].f_9) == 0)
						Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[Global_20933 /*15*/].f_5), APP_INTERNET);
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[Global_20933 /*15*/].f_9) == 0)
					Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[Global_20933 /*15*/].f_5), CELLPHONE);
			}
		
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8807[Global_20933 /*15*/].f_5));
			Global_8803 = 99;
			MISC::CLEAR_BIT(&Global_8800, 23);
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (Global_20930.f_1 == 1)
			func_9();
	
		if (Global_20930.f_1 == 0)
			func_9();
	
		if (Global_20930.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_22299)
			{
				if (Global_20930.f_1 == 9)
				{
					if (Global_79389)
					{
						if (!IS_BIT_SET(Global_8801, 31))
						{
							if (!IS_BIT_SET(Global_8801, 27))
							{
								if (func_8())
								{
									if (!IS_BIT_SET(Global_8800, 9))
									{
										if (func_64(FRONTEND_CONTROL, Global_20902, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!(Global_20929 == 1))
												{
													if (Global_20930.f_1 > 6)
													{
														MISC::SET_BIT(&Global_8801, 24);
														MISC::SET_BIT(&Global_8801, 27);
														MISC::CLEAR_BIT(&Global_8801, 26);
														MISC::CLEAR_BIT(&Global_8801, 25);
														MISC::SET_BIT(&(Global_2738935.f_1847), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		
			if (Global_20913 == 1)
			{
				Global_20915 = 1;
				func_67(0);
			}
		
			if (Global_20914 == 1)
			{
				Global_20915 = 1;
				func_67(0);
			}
		
			if (Global_79389)
			{
				if (!IS_BIT_SET(Global_8802, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2746026.f_1 == true)
						{
						}
						else
						{
							func_70();
							func_67(0);
						}
					}
				}
			}
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
						MISC::SET_BIT(&Global_8801, 4);
				
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919896)
						{
							func_5(true, true);
							MISC::SET_BIT(&Global_8800, 14);
						}
						else
						{
							Global_20915 = 1;
							func_70();
							func_67(0);
						}
					}
				}
			
				if (func_83(14))
					if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
						bLocal_121 = false;
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						bLocal_121 = true;
			
				if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136899894) > 0 || Global_79651 == 1 || func_3(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || GRAPHICS::GET_USINGNIGHTVISION() || bLocal_121)
					if (!Global_20873)
						MISC::SET_BIT(&Global_8801, 4);
			
				if (MISC::IS_PC_VERSION())
				{
					if (Global_79389 == false)
					{
						if (iLocal_103 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_101 = MISC::GET_GAME_TIMER();
									iLocal_103 = 1;
								}
							}
						}
						else
						{
							iLocal_102 = MISC::GET_GAME_TIMER();
							iLocal_105 = iLocal_102 - iLocal_101;
						
							if (iLocal_105 < 4000)
								MISC::SET_BIT(&Global_8801, 4);
							else
								iLocal_103 = 0;
						}
					}
				}
			
				if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				{
					if (Global_79389)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
					
						if (iLocal_111 != -1569615261 && Global_20930.f_1 < 7)
							MISC::SET_BIT(&Global_8801, 4);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_112 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == 771711535 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1066334226)
						bLocal_115 = true;
					else
						bLocal_115 = false;
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == 782665360 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1006919392 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -692292317 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1435527158 || bLocal_115 || VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_112, false) == false)
						MISC::SET_BIT(&Global_8801, 4);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1600252419 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1860900134 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -2096818938 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == 1917016601 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1255698084 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -114627507 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1924433270 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -32236122 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == 1897744184 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1881846085 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == 1180875963 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == 682434785 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -749299473 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -32878452 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == 1043222410 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -692292317)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_112))
						{
							seatIndex = func_2(PLAYER::PLAYER_PED_ID(), veLocal_112);
						
							if (seatIndex != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1860900134 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -114627507)
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == 1917016601 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1255698084)
									if (seatIndex == 2 || seatIndex == 1)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == 1180875963)
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == 682434785)
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1924433270)
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == -32236122)
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == 1897744184)
									if (seatIndex == 0)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1881846085)
									if (seatIndex == -1)
										MISC::SET_BIT(&Global_8801, 4);
							
								if (VEHICLE::IS_TURRET_SEAT(veLocal_112, seatIndex))
									MISC::SET_BIT(&Global_8801, 4);
							}
						}
					}
				
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK))
					{
						if (Global_79389 == false)
						{
							if (Global_20930.f_1 == 6 || Global_20930.f_1 == 7)
							{
								flag = true;
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == 886810209 && ENTITY::IS_ENTITY_IN_WATER(veLocal_112))
									flag = false;
							
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(veLocal_112)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veLocal_112)) || ENTITY::GET_ENTITY_MODEL(veLocal_112) == 771711535 || ENTITY::GET_ENTITY_MODEL(veLocal_112) == -1066334226)
									flag = false;
							
								if (flag)
									func_67(0);
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_ATTACK))
						if (Global_79389 == false)
							if (Global_20930.f_1 == 6 || Global_20930.f_1 == 7)
								func_67(0);
				
					bLocal_115 = false;
				}
			
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919896)
					{
						func_5(true, true);
					}
					else
					{
						Global_20915 = 1;
						func_70();
						func_67(0);
					}
				}
			
				if (Global_79389 == false)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20915 = 1;
							func_70();
							func_67(0);
						}
					}
				
					if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_20915 = 1;
							func_70();
							func_67(0);
						}
					}
				}
				else if (func_77())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20915 = 1;
							func_70();
							func_67(0);
						}
					}
				}
			
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_77())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						
							if (iLocal_111 == 100416529 || iLocal_111 == 205991906 || iLocal_111 == 856002082)
								bLocal_110 = true;
							else
								bLocal_110 = false;
						
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_110)
								{
									Global_20915 = 1;
									func_70();
									func_67(0);
								}
							}
						}
					}
				}
			
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_20915 = 1;
					func_70();
					func_67(0);
				}
			
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_20915 = 1;
					func_70();
					func_67(0);
				}
			
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_20915 = 1;
					func_70();
					func_67(0);
				}
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79389 == false)
					{
						Global_20915 = 1;
						func_70();
						func_67(0);
					}
				}
			}
			else
			{
				num5 = 0;
			
				if (Global_79389 && Global_2746026.f_1 && Global_2746026.f_37 && Global_20930.f_1 == 9)
				{
					num5 = 1;
				
					if (!IS_BIT_SET(Global_8801, 24))
					{
						if (IS_BIT_SET(Global_8801, 26))
						{
							MISC::SET_BIT(&Global_8801, 25);
							MISC::CLEAR_BIT(&Global_8801, 26);
							MISC::CLEAR_BIT(&Global_8802, 2);
						}
					}
				}
			
				if (num5 == 0)
				{
					Global_20915 = 1;
					func_70();
					func_67(0);
				}
			}
		}
	
		if (Global_20908 == 1)
			func_1();
	
		if (Global_20929 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20899);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20900);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}

	return;
}

void func_1() // Position - 0x1EC7
{
	if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20899) && !PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20898))
		Global_20908 = 0;

	return;
}

int func_2(Ped pedParam0, Vehicle veParam1) // Position - 0x1EED
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, -1, false) == pedParam0)
				return -1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 0, false) == pedParam0)
				return 0;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 1, false) == pedParam0)
				return 1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 2, false) == pedParam0)
				return 2;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 3, false) == pedParam0)
				return 3;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 4, false) == pedParam0)
				return 4;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 5, false) == pedParam0)
				return 5;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 6, false) == pedParam0)
				return 6;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 7, false) == pedParam0)
				return 3;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 8, false) == pedParam0)
				return 4;
		}
	}

	return -2;
}

BOOL func_3(Ped pedParam0) // Position - 0x1FC6
{
	if (pedParam0 == 0)
		return false;

	if (func_4(pedParam0) == -1)
		return false;

	return true;
}

int func_4(Ped pedParam0) // Position - 0x1FE7
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45036[i /*5*/] == -1))
			if (pedParam0 == Global_45036[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_5(BOOL bParam0, BOOL bParam1) // Position - 0x2030
{
	if (bParam0)
	{
		if (func_6(0))
		{
			Global_21145 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
		
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == true)
	{
		Global_21145 = false;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	}

	return;
}

BOOL func_6(int iParam0) // Position - 0x20A4
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_20930.f_1 > 3)
		return true;

	return false;
}

BOOL func_7() // Position - 0x20FB
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_8() // Position - 0x2109
{
	return Global_2746026.f_1;
}

void func_9() // Position - 0x2117
{
	float num;
	var unk;
	float num2;

	Global_23345 = 0;
	Global_23346 = 0;
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20900);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);

	if (Global_20896 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
	
		if (func_76())
			iLocal_16 = MISC::GET_GAME_TIMER();
		else
			iLocal_16 = 0;
	
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_20896 = 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (Global_113969.f_14054.f_84 == 1)
	{
		Global_113969.f_14054.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}

	num = 350f;

	if (IS_BIT_SET(Global_8800, 30) || IS_BIT_SET(Global_8802, 2))
		num = 25f;

	unk = { Global_20890 };

	if (Global_20915 == 1)
		unk = { -45f, 45f, 25f };

	if (IS_BIT_SET(Global_8801, 26) || IS_BIT_SET(Global_8800, 30) || IS_BIT_SET(Global_8802, 2))
		uLocal_117 = { Global_20876[Global_20875 /*3*/] };
	else
		uLocal_117 = { Global_20883[Global_20875 /*3*/] };

	num2 = func_15(uLocal_117, Global_20876[Global_20875 /*3*/], Global_20890, unk, num, false);

	if (!bLocal_85 && num2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		bLocal_85 = true;
	}

	if (bLocal_85 && MISC::GET_GAME_TIMER() - iLocal_16 > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20900);
		Global_20930.f_1 == 3;
		Global_20930.f_1 == 1;
		Global_20930.f_1 == 0;
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_20871 = 0;
		Global_20912 = false;
		Global_21143 = 0;
	
		if (Global_113969.f_14054.f_84 == 1)
		{
			Global_113969.f_14054.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
	
		Global_20874 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	
		Global_23300 == 0;
		Global_21145 = false;
	
		if (func_12(0))
			func_11();
	
		MISC::CLEAR_BIT(&Global_8801, 8);
		MISC::CLEAR_BIT(&Global_8800, 14);
		MISC::CLEAR_BIT(&Global_8800, 9);
		MISC::CLEAR_BIT(&Global_8800, 27);
		MISC::CLEAR_BIT(&Global_8800, 30);
		MISC::CLEAR_BIT(&Global_8801, 5);
		MISC::CLEAR_BIT(&Global_8801, 19);
		MISC::CLEAR_BIT(&Global_8801, 21);
		MISC::CLEAR_BIT(&Global_8801, 24);
		MISC::CLEAR_BIT(&Global_8801, 25);
		MISC::CLEAR_BIT(&Global_8801, 27);
		MISC::CLEAR_BIT(&Global_8801, 26);
		MISC::CLEAR_BIT(&Global_8802, 2);
		Global_2749863 = 0;
		iLocal_120 = 0;
	
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_10();
	
		SYSTEM::SETTIMERA(0);
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_20928))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20900);
			
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_84);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20911, Global_20850, Global_20851, Global_20852, Global_20853, 255, 255, 255, 255, 0);
				}
			
				if (SYSTEM::TIMERA() > 5000)
					SCRIPT::TERMINATE_THREAD(Global_20928);
			}
		}
	
		Global_20918 = false;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
			func_121(Global_20911, "SHUTDOWN_MOVIE");
	
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20911);
		Global_20896 = 0;
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20900);
	
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (Global_2746026.f_1)
				if (Global_79389)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				else
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20919, true);
	
		func_118();
		func_116();
		Global_22299 = false;
		Global_4543363 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_10() // Position - 0x2490
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9 || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}

	return;
}

void func_11() // Position - 0x24E7
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8800, 25);
	MISC::SET_BIT(&Global_8801, 11);
	return;
}

BOOL func_12(int iParam0) // Position - 0x2564
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2586
{
	return func_14(iParam0, Global_44042);
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x2597
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

float func_15(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0x2778
{
	var position;
	float num;
	float num2;
	float num3;

	if (Global_4543363 == 0)
	{
		if (IS_BIT_SET(Global_8800, 14) && Global_20930.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&position);
		
			if (Global_20883[Global_20875 /*3*/].f_1 == position.f_1)
				Global_4543363 = 1;
		}
	}

	if (func_76() && Global_4543363 == 0)
		return 2f;

	if (iLocal_16 == 0)
		iLocal_16 = MISC::GET_GAME_TIMER();

	num = func_17(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER() - iLocal_16) / fParam12, 0f, 1f);

	if (num < 1f)
	{
		num2 = num;
	
		if (bParam13)
		{
			num2 = num2 - 1f;
			num3 = 0.670158f;
			num2 = (num2 * num2 * (((num3 + 1f) * num2) + num3)) + 1f;
		}
		else
		{
			num2 = SYSTEM::SIN(num * 90f);
		}
	
		Global_20858 = { func_16(uParam0, uParam3, num2) };
		Global_20861 = { func_16(fParam6, fParam9, num2) };
	}
	else
	{
		Global_20858 = { uParam3 };
		Global_20861 = { fParam9 };
	}

	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20861, 0);
	return num;
}

Vector3 func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x2887
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_17(float fParam0, float fParam1, float fParam2) // Position - 0x28A1
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_18() // Position - 0x28C8
{
	if (Global_20908 == 0)
	{
		if (func_64(FRONTEND_CONTROL, Global_20902, 0))
		{
			if (Global_79389 == false)
			{
				if (Global_21147)
				{
					if (Global_21146 == false)
					{
						Global_21146 = true;
						func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_84(2);
						func_19();
						func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20935), -1082130432, -1082130432, -1082130432);
						Global_20910 = Global_20935;
					}
					else
					{
						Global_21146 = false;
						func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_84(1);
						func_19();
						func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
						Global_20910 = Global_20934;
					}
				}
			}
		}
	}

	return;
}

void func_19() // Position - 0x29A1
{
	if (Global_21147 == false)
	{
		func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
	else if (Global_79389)
	{
		func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
	else
	{
		if (Global_21146 == true)
			if (Global_20918)
				func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
		else if (Global_20918)
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
		else
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
	
		MISC::SET_BIT(&Global_8800, 17);
	}

	return;
}

void func_20() // Position - 0x2A7A
{
	if (IS_BIT_SET(Global_8801, 10) || iLocal_120 == 1)
	{
		Global_9407 = MISC::GET_GAME_TIMER();
		Global_9406 = 0;
		Global_20908 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
		iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		bLocal_72 = true;
	}
	else if (Global_20908 == 0)
	{
		if (func_64(FRONTEND_CONTROL, Global_20899, 0))
		{
			if (iLocal_73 == 0)
			{
				Global_9407 = MISC::GET_GAME_TIMER();
				Global_9406 = 0;
				Global_20908 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
				iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				bLocal_72 = true;
			}
		}
	}

	return;
}

void func_21() // Position - 0x2AF9
{
	if (Global_20908 == 0)
	{
		if (func_64(FRONTEND_CONTROL, Global_20897, 1))
		{
			if (func_108(2092, -1) == 1)
			{
				if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 0)
				{
					if (!IS_BIT_SET(Global_8801, 3))
					{
						if (!Global_20873)
						{
							if (!IS_BIT_SET(Global_4543084, 3))
							{
								if (!IS_BIT_SET(Global_8800, 14))
								{
									Global_20908 = 1;
									MISC::SET_BIT(&Global_4543084, 3);
									func_22(3, 0, 1, false);
									Global_23345 = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_22(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2B70
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_79389 == false)
	{
		if (func_83(14))
		{
			if (Global_23345 == 2 || Global_23345 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (Global_20930.f_1 == 9)
		return 0;

	if (iParam2 == 0)
		if (func_6(0) == true)
			return 0;

	if (Global_20896 == 1)
		return 0;

	if (Global_20930.f_1 == 7)
		return 0;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20927))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) == 0)
		{
			if (Global_20930.f_1 < 4)
			{
				func_23("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) == 0)
					Global_20927 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_20912)
	{
		SYSTEM::WAIT(0);
	}

	func_86();
	func_85();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
	{
		Global_9406 = 0;
		Global_20930.f_1 = 7;
		func_23(&(Global_8807[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
				Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
			Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[iParam0 /*15*/].f_5), CELLPHONE);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8807[iParam0 /*15*/].f_5));
		return 1;
	}

	return 1;
}

void func_23(char* sParam0) // Position - 0x2CD6
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_24() // Position - 0x2CF6
{
	if (func_42())
	{
		if (Global_20910 == 2 || Global_20910 == 5 || Global_20910 == 8 && func_64(FRONTEND_CONTROL, Global_20905, 0))
		{
			Global_20910 = 0;
			func_40();
			Global_20934 = Global_20910;
			func_35(true);
			return;
		}
	}

	if (Global_20909)
		if (SYSTEM::TIMERA() > 50)
			Global_20909 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[1])
					{
						func_33();
						Global_20910 = 1;
					}
					break;
			
				case 1:
					if (Global_9369[2])
					{
						func_33();
						Global_20910 = 2;
					}
					break;
			
				case 2:
					if (Global_9369[3])
					{
						func_33();
						func_31();
						Global_20910 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20910 = 4;
					}
					break;
			
				case 3:
					if (Global_9369[4])
					{
						func_33();
						Global_20910 = 4;
					}
					break;
			
				case 4:
					if (Global_9369[5])
					{
						func_33();
						Global_20910 = 5;
					}
					break;
			
				case 5:
					if (Global_9369[6])
					{
						func_33();
						func_31();
						Global_20910 = 6;
					}
					break;
			
				case 6:
					if (Global_9369[7])
					{
						func_33();
						Global_20910 = 7;
					}
					break;
			
				case 7:
					if (Global_9369[8])
					{
						func_33();
						Global_20910 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20910 = 0;
					}
					break;
			
				case 8:
					if (Global_9369[0])
					{
						func_33();
						func_31();
						Global_20910 = 0;
					}
					else
					{
						func_29();
						func_31();
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[8])
					{
						func_29();
						func_26();
						Global_20910 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20910 = 7;
					}
					break;
			
				case 1:
					if (Global_9369[0])
					{
						func_29();
						Global_20910 = 0;
					}
					else if (Global_9369[8])
					{
						func_26();
						func_33();
					}
					else
					{
						func_26();
					}
					break;
			
				case 2:
					if (Global_9369[1])
					{
						func_29();
						Global_20910 = 1;
					}
					break;
			
				case 3:
					if (Global_9369[2])
					{
						func_29();
						func_26();
						Global_20910 = 2;
					}
					break;
			
				case 4:
					if (Global_9369[3])
					{
						func_29();
						Global_20910 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_21150 = 1;
						Global_20910 = 2;
					}
					break;
			
				case 5:
					if (Global_9369[4])
					{
						func_29();
						Global_20910 = 4;
					}
					break;
			
				case 6:
					if (Global_9369[5])
					{
						func_26();
						func_29();
						Global_20910 = 5;
					}
					break;
			
				case 7:
					if (Global_9369[6])
					{
						func_29();
						Global_20910 = 6;
					}
					break;
			
				case 8:
					if (Global_9369[7])
					{
						func_29();
						Global_20910 = 7;
					}
					break;
			}
		}
	}

	if (Global_20909 == false)
	{
		if (func_64(FRONTEND_CONTROL, Global_20905, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 2:
					if (Global_9369[0] == true)
					{
						Global_20910 = 0;
					}
					else
					{
						Global_20910 = 1;
						Global_21150 = 1;
					}
					break;
			
				case 5:
					Global_20910 = 3;
					break;
			
				case 6:
					Global_20910 = 7;
					break;
			
				case 7:
					if (Global_9369[Global_20910 + 1] == true)
					{
						Global_20910 = 8;
					}
					else
					{
						Global_20910 = 6;
						Global_21150 = 1;
					}
					break;
			
				case 8:
					Global_20910 = 6;
					break;
			
				default:
					Global_20910 = Global_20910 + 1;
					break;
			}
		
			if (Global_21150 == 1)
				func_29();
			else
				func_33();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20904, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 0:
					Global_20910 = 2;
					break;
			
				case 1:
					if (Global_9369[0] == true)
					{
						Global_20910 = 0;
					}
					else
					{
						Global_20910 = 2;
						Global_21150 = 1;
					}
					break;
			
				case 3:
					Global_20910 = 5;
					break;
			
				case 6:
					if (Global_9369[8] == true)
					{
						Global_20910 = 8;
					}
					else
					{
						Global_20910 = 7;
						Global_21150 = 1;
					}
					break;
			
				default:
					Global_20910 = Global_20910 - 1;
					break;
			}
		
			if (Global_21150 == 1)
				func_33();
			else
				func_29();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20906, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[6])
						Global_20910 = 6;
					break;
			
				case 1:
					if (Global_9369[7])
					{
						Global_20910 = 7;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 4;
					}
					break;
			
				case 2:
					if (Global_9369[8])
					{
						Global_20910 = 8;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 5;
					}
					break;
			
				case 3:
					if (Global_9369[0])
					{
						Global_20910 = 0;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 6;
					}
					break;
			
				case 4:
					if (Global_9369[1])
						Global_20910 = 1;
					break;
			
				case 5:
					if (Global_9369[2])
						Global_20910 = 2;
					break;
			
				case 6:
					if (Global_9369[3])
						Global_20910 = 3;
					break;
			
				case 7:
					if (Global_9369[4])
						Global_20910 = 4;
					break;
			
				case 8:
					if (Global_9369[5])
						Global_20910 = 5;
					break;
			}
		
			if (Global_21150 == 1)
				func_31();
			else
				func_26();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20907, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[3])
						Global_20910 = 3;
					break;
			
				case 1:
					if (Global_9369[4])
						Global_20910 = 4;
					break;
			
				case 2:
					if (Global_9369[5])
						Global_20910 = 5;
					break;
			
				case 3:
					if (Global_9369[6])
						Global_20910 = 6;
					break;
			
				case 4:
					if (Global_9369[7])
					{
						Global_20910 = 7;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 1;
					}
					break;
			
				case 5:
					if (Global_9369[8])
					{
						Global_20910 = 8;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 2;
					}
					break;
			
				case 6:
					if (Global_9369[0])
					{
						Global_20910 = 0;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 3;
					}
					break;
			
				case 7:
					if (Global_9369[1])
						Global_20910 = 1;
					break;
			
				case 8:
					if (Global_9369[2])
						Global_20910 = 2;
					break;
			}
		
			if (Global_21150 == 1)
				func_26();
			else
				func_31();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	if (Global_8807[23 /*15*/].f_10 == 57)
	{
		if (Global_20909 == true && Global_20910 == 8)
		{
			if (iLocal_122 == 0)
			{
				iLocal_122 = 1;
				func_25(12);
			}
		}
	}

	return;
}

void func_25(int iParam0) // Position - 0x3399
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2738935.f_5249.f_7[num], offset);
	return;
}

void func_26() // Position - 0x33C2
{
	func_114(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_27();
	return;
}

void func_27() // Position - 0x33FF
{
	if (func_28())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

BOOL func_28() // Position - 0x3422
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag;

	if (Global_79389)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4543362 || flag)
		return true;

	return true;
}

void func_29() // Position - 0x3469
{
	func_114(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_30();
	return;
}

void func_30() // Position - 0x34A6
{
	if (func_28())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(3);
		else
			MOBILE::CELL_SET_INPUT(4);

	return;
}

void func_31() // Position - 0x34C9
{
	func_114(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_32();
	return;
}

void func_32() // Position - 0x3506
{
	if (func_28())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_33() // Position - 0x3529
{
	func_114(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_34();
	return;
}

void func_34() // Position - 0x3566
{
	if (func_28())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(4);
		else
			MOBILE::CELL_SET_INPUT(3);

	return;
}

void func_35(BOOL bParam0) // Position - 0x3589
{
	int i;
	int num;

	MISC::SET_BIT(&Global_8802, 9);

	if (bParam0)
		func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	func_39();
	func_38();

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9333[i] = 0;
	}

	num = 0;
	func_37(10, "CELL_16" /*Settings*/, num, "appSettings", 24, 1, 1, 0, 0);
	Global_9369[num] = true;
	Global_9333[num] = 10;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[10 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[10 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_36(&Global_8807[10 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (bParam0)
	{
		func_114(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_36(char* sParam0) // Position - 0x3697
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x36A9
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8807[iParam0 /*15*/], sParam1, 16);
	Global_8807[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8807[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8807[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8807[iParam0 /*15*/].f_10 = iParam4;
	Global_8807[iParam0 /*15*/].f_11 = iParam5;
	Global_8807[iParam0 /*15*/].f_12 = iParam6;
	Global_8807[iParam0 /*15*/].f_13 = iParam7;
	Global_8807[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8807[iParam0 /*15*/].f_12 == 0)
		Global_8807[iParam0 /*15*/].f_12 = 0;

	if (Global_8807[iParam0 /*15*/].f_13 == 0)
		Global_8807[iParam0 /*15*/].f_13 = 0;

	if (Global_8807[iParam0 /*15*/].f_14 == 0)
		Global_8807[iParam0 /*15*/].f_14 = 0;

	return;
}

void func_38() // Position - 0x375F
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9369[i] = false;
	}

	return;
}

void func_39() // Position - 0x3782
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_36(&Global_8807[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	func_114(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	return;
}

void func_40() // Position - 0x3812
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_41();
	}

	return;
}

void func_41() // Position - 0x3838
{
	if (func_28())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_42() // Position - 0x384C
{
	return false;
}

void func_43() // Position - 0x3855
{
	if (Global_20910 == 0 || Global_20910 == 3 || Global_20910 == 6 && func_64(FRONTEND_CONTROL, Global_20904, 0))
	{
		Global_20910 = Global_20910 + 2;
		func_40();
		MISC::CLEAR_BIT(&Global_8802, 9);
		func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_84(1);
		func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		func_39();
		func_86();
		func_84(1);
		func_114(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		return;
	}

	if (Global_20909)
		if (SYSTEM::TIMERA() > 50)
			Global_20909 = false;

	if (Global_20909 == false)
	{
		if (func_64(FRONTEND_CONTROL, Global_20905, 0) || func_64(FRONTEND_CONTROL, Global_20904, 0) || func_64(FRONTEND_CONTROL, Global_20906, 0) || func_64(FRONTEND_CONTROL, Global_20907, 0))
		{
			Global_21150 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_44() // Position - 0x39A2
{
	if (Global_20909)
		if (SYSTEM::TIMERA() > 50)
			Global_20909 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20910)
			{
				case 6:
					if (Global_9369[7])
					{
						func_33();
						Global_20910 = 7;
					}
					break;
			
				case 7:
					if (Global_9369[6])
					{
						func_29();
						Global_20910 = 6;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20910)
			{
				case 6:
					if (Global_9369[7])
					{
						func_33();
						Global_20910 = 7;
					}
					break;
			
				case 7:
					if (Global_9369[6])
					{
						func_29();
						Global_20910 = 6;
					}
					break;
			}
		}
	}

	if (Global_20909 == false)
	{
		if (func_64(FRONTEND_CONTROL, Global_20905, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 2:
					Global_20910 = 0;
					break;
			
				case 5:
					Global_20910 = 3;
					break;
			
				case 7:
					if (Global_9369[Global_20910 + 1] == true)
					{
						Global_20910 = 8;
					}
					else
					{
						Global_20910 = 6;
						Global_21150 = 1;
					}
					break;
			
				case 8:
					Global_20910 = 6;
					break;
			
				default:
					Global_20910 = Global_20910 + 1;
					break;
			}
		
			if (Global_21150 == 1)
				func_29();
			else
				func_33();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20904, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 0:
					Global_20910 = 2;
					break;
			
				case 3:
					Global_20910 = 5;
					break;
			
				case 6:
					if (Global_9369[8] == true)
					{
						Global_20910 = 8;
					}
					else
					{
						Global_20910 = 7;
						Global_21150 = 1;
					}
					break;
			
				default:
					Global_20910 = Global_20910 - 1;
					break;
			}
		
			if (Global_21150 == 1)
				func_33();
			else
				func_29();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_45() // Position - 0x3B60
{
	if (Global_20909)
		if (SYSTEM::TIMERA() > 50)
			Global_20909 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[1])
					{
						func_33();
						Global_20910 = 1;
					}
					break;
			
				case 1:
					if (Global_9369[2])
					{
						func_33();
						Global_20910 = 2;
					}
					break;
			
				case 2:
					if (Global_9369[3])
					{
						func_33();
						func_31();
						Global_20910 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20910 = 4;
					}
					break;
			
				case 3:
					if (Global_9369[4])
					{
						func_33();
						Global_20910 = 4;
					}
					break;
			
				case 4:
					if (Global_9369[5])
					{
						func_33();
						Global_20910 = 5;
					}
					break;
			
				case 5:
					if (Global_9369[6])
					{
						func_33();
						func_31();
						Global_20910 = 6;
					}
					break;
			
				case 6:
					if (Global_9369[7])
					{
						func_33();
						Global_20910 = 7;
					}
					break;
			
				case 7:
					if (Global_9369[8])
					{
						func_33();
						Global_20910 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20910 = 0;
					}
					break;
			
				case 8:
					if (Global_9369[0])
					{
						func_33();
						func_31();
						Global_20910 = 0;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[8])
					{
						func_29();
						func_26();
						Global_20910 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20910 = 7;
					}
					break;
			
				case 1:
					if (Global_9369[0])
					{
						func_29();
						Global_20910 = 0;
					}
					break;
			
				case 2:
					if (Global_9369[1])
					{
						func_29();
						Global_20910 = 1;
					}
					break;
			
				case 3:
					if (Global_9369[2])
					{
						func_29();
						func_26();
						Global_20910 = 2;
					}
					break;
			
				case 4:
					if (Global_9369[3])
					{
						func_29();
						Global_20910 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_21150 = 1;
						Global_20910 = 2;
					}
					break;
			
				case 5:
					if (Global_9369[4])
					{
						func_29();
						Global_20910 = 4;
					}
					break;
			
				case 6:
					if (Global_9369[5])
					{
						func_26();
						func_29();
						Global_20910 = 5;
					}
					break;
			
				case 7:
					if (Global_9369[6])
					{
						func_29();
						Global_20910 = 6;
					}
					break;
			
				case 8:
					if (Global_9369[7])
					{
						func_29();
						Global_20910 = 7;
					}
					break;
			}
		}
	}

	if (Global_20909 == false)
	{
		if (func_64(FRONTEND_CONTROL, Global_20905, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 2:
					Global_20910 = 0;
					break;
			
				case 5:
					Global_20910 = 3;
					break;
			
				case 7:
					if (Global_9369[Global_20910 + 1] == true)
					{
						Global_20910 = 8;
					}
					else
					{
						Global_20910 = 6;
						Global_21150 = 1;
					}
					break;
			
				case 8:
					Global_20910 = 6;
					break;
			
				default:
					Global_20910 = Global_20910 + 1;
					break;
			}
		
			if (Global_21150 == 1)
				func_29();
			else
				func_33();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20904, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 0:
					Global_20910 = 2;
					break;
			
				case 3:
					Global_20910 = 5;
					break;
			
				case 6:
					if (Global_9369[8] == true)
					{
						Global_20910 = 8;
					}
					else
					{
						Global_20910 = 7;
						Global_21150 = 1;
					}
					break;
			
				default:
					Global_20910 = Global_20910 - 1;
					break;
			}
		
			if (Global_21150 == 1)
				func_33();
			else
				func_29();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20906, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[6])
						Global_20910 = 6;
					break;
			
				case 1:
					if (Global_9369[7])
						Global_20910 = 7;
					break;
			
				case 2:
					if (Global_9369[8])
					{
						Global_20910 = 8;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 5;
					}
					break;
			
				case 3:
					if (Global_9369[0])
						Global_20910 = 0;
					break;
			
				case 4:
					if (Global_9369[1])
						Global_20910 = 1;
					break;
			
				case 5:
					if (Global_9369[2])
						Global_20910 = 2;
					break;
			
				case 6:
					if (Global_9369[3])
						Global_20910 = 3;
					break;
			
				case 7:
					if (Global_9369[4])
						Global_20910 = 4;
					break;
			
				case 8:
					if (Global_9369[5])
						Global_20910 = 5;
					break;
			}
		
			if (Global_21150 == 1)
				func_31();
			else
				func_26();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_64(FRONTEND_CONTROL, Global_20907, 0))
		{
			Global_21150 = 0;
		
			switch (Global_20910)
			{
				case 0:
					if (Global_9369[3])
						Global_20910 = 3;
					break;
			
				case 1:
					if (Global_9369[4])
						Global_20910 = 4;
					break;
			
				case 2:
					if (Global_9369[5])
						Global_20910 = 5;
					break;
			
				case 3:
					if (Global_9369[6])
						Global_20910 = 6;
					break;
			
				case 4:
					if (Global_9369[7])
						Global_20910 = 7;
					break;
			
				case 5:
					if (Global_9369[8])
					{
						Global_20910 = 8;
					}
					else
					{
						Global_21150 = 1;
						Global_20910 = 2;
					}
					break;
			
				case 6:
					if (Global_9369[0])
						Global_20910 = 0;
					break;
			
				case 7:
					if (Global_9369[1])
						Global_20910 = 1;
					break;
			
				case 8:
					if (Global_9369[2])
						Global_20910 = 2;
					break;
			}
		
			if (Global_21150 == 1)
				func_26();
			else
				func_31();
		
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_46() // Position - 0x40F6
{
	int num;
	Vehicle vehiclePedIsIn;
	char* str;

	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_71))
	{
		bLocal_72 = false;
		iLocal_70 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_71);
	
		if (Global_21146 == false)
			Global_20934 = iLocal_70;
		else
			Global_20935 = iLocal_70;
	
		if (iLocal_70 < 0)
			iLocal_70 = 0;
	
		Global_20933 = Global_9333[iLocal_70];
	
		if (IS_BIT_SET(Global_8801, 10))
		{
			Global_20933 = 2;
			MISC::CLEAR_BIT(&Global_8801, 10);
		}
	
		if (iLocal_120 == 1)
		{
			Global_20934 = 1;
			Global_20933 = 0;
			Global_2749863 = 0;
			iLocal_120 = 0;
		}
	
		num = 0;
	
		if (Global_79389)
			Global_20933 == 24 && func_42();
	
		if (SCRIPT::IS_THREAD_ACTIVE(Global_20928))
			num = 1;
	
		if (Global_20933 == 3)
		{
			if (IS_BIT_SET(Global_8801, 3))
			{
				num = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || GRAPHICS::GET_USINGNIGHTVISION())
					num = 1;
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == false)
						num = 1;
				
					vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0f)
						num = 1;
				}
			
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
					num = 1;
			
				if (Global_79389)
				{
					if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
					
						if (iLocal_111 != -1569615261)
							num = 1;
					}
				}
			}
		}
	
		if (Global_20933 == 2)
			if (IS_BIT_SET(Global_8801, 6))
				num = 1;
	
		if (Global_20933 == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8807[Global_20933 /*15*/], "CELL_BENWEB" /*Benny's*/))
			if (IS_BIT_SET(Global_8801, 6))
				num = 1;
	
		if (Global_79389)
		{
			if (Global_20933 == 15 || Global_20933 == 5)
			{
			}
			else
			{
				if (Global_20933 == 23)
				{
					IS_BIT_SET(Global_4543084, 4) == false && Global_1836172 == false && IS_BIT_SET(Global_4543084, 20) == false && IS_BIT_SET(Global_4543084, 22) == false;
				
					if (IS_BIT_SET(Global_4543084, 20) == true && IS_BIT_SET(Global_4543084, 4) == false && Global_1836172 == false && IS_BIT_SET(Global_4543084, 22) == false && IS_BIT_SET(Global_4543084, 26) == false)
					{
						num = 1;
						MISC::SET_BIT(&Global_4543084, 21);
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						if (Global_20933 == 3)
							num = 1;
			
				if (Global_76497 && Global_20933 == 2)
				{
					num = 1;
					str = func_49();
				
					if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
						_DISPLAY_HELP_TEXT(str, -1);
				}
			
				if (func_123())
				{
					if (Global_20933 == 10)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/))
							_DISPLAY_HELP_TEXT("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/, -1);
					
						num = 1;
					}
				}
			
				if (num == 0)
				{
					func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8800, 17);
					Global_20930.f_1 = 7;
				
					if (IS_BIT_SET(Global_8800, 23))
					{
					}
					else
					{
						func_40();
						STATS::_PLAYSTATS_FLOW_HIGH(Global_2672855.f_4.f_11, "PhoneApp", false, Global_8807[Global_20933 /*15*/].f_9);
						SCRIPT::REQUEST_SCRIPT(&(Global_8807[Global_20933 /*15*/].f_5));
						MISC::SET_BIT(&Global_8800, 23);
					}
				}
				else
				{
					Global_20933 == 2 || Global_20933 == 3;
					func_47();
				}
			}
		}
		else
		{
			switch (Global_20933)
			{
				case 3:
					if (Global_113022 == 1)
						num = 1;
					break;
			
				case 8:
					num = 1;
					break;
			
				case 15:
					num = 1;
					break;
			
				case 16:
					num = 1;
					MISC::SET_BIT(&Global_8800, 26);
					break;
			
				case 5:
					num = 1;
					break;
			
				case 20:
					num = 1;
				
					if (Global_21148 == 0)
					{
						if (Global_8804 == 0 && iLocal_73 == 0 && Global_44042 == 15)
						{
							iLocal_73 = 1;
							func_40();
							!Global_113969.f_14054.f_85;
						}
					}
					else
					{
						func_47();
					}
					break;
			
				default:
					break;
			}
		
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
				if (Global_20933 != 0)
					num = 1;
		
			if (func_83(14))
				if (Global_20933 != 3 && Global_20933 != 14)
					num = 1;
		
			if (num == 0)
			{
				func_40();
				func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
				Global_20930.f_1 = 7;
			
				if (IS_BIT_SET(Global_8800, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_8807[Global_20933 /*15*/].f_5));
					MISC::SET_BIT(&Global_8800, 23);
				}
			}
			else if (Global_20933 != 20)
			{
				if (Global_113969.f_14054.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1357264198) > 0)
					{
						if (Global_20933 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									_DISPLAY_HELP_TEXT("CELL_38" /*You cannot use the Snapmatic application while in cover.*/, -1);
									Global_113969.f_14054.f_86 = 1;
								}
							}
						}
					}
				}
			
				func_47();
			}
		}
	}

	return;
}

void func_47() // Position - 0x4601
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x4623
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_49() // Position - 0x4636
{
	return "BLOCK_APP_WEB" /*The Internet app is currently unavailable. Please try again later.*/;
}

void func_50() // Position - 0x4642
{
	if (Global_20896 == 0)
	{
		if (func_15(Global_20883[Global_20875 /*3*/], Global_20876[Global_20875 /*3*/], Global_20890, Global_20890, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8801, 24);
			MISC::SET_BIT(&Global_8801, 26);
		}
	}

	return;
}

void func_51() // Position - 0x4693
{
	if (Global_20896 == 0)
	{
		if (func_15(Global_20876[Global_20875 /*3*/], Global_20883[Global_20875 /*3*/], Global_20890, Global_20890, 350f, true) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8801, 25);
		
			if (Global_22299)
				MISC::CLEAR_BIT(&Global_8801, 27);
		}
	}

	return;
}

void func_52() // Position - 0x46EA
{
	if (Global_20896 == 0 && Global_20870 == 0)
	{
		if (func_15(Global_20883[Global_20875 /*3*/], Global_20876[Global_20875 /*3*/], Global_20890, Global_20890, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			Global_4543363 = 0;
		}
	}

	return;
}

void func_53() // Position - 0x4739
{
	float num;
	float num2;

	if (IS_BIT_SET(Global_8802, 2))
	{
		MISC::SET_BIT(&Global_8801, 8);
		MISC::SET_BIT(&Global_8800, 14);
		Global_20870 = 0;
		iLocal_16 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20890, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1870099198) < 1)
	{
		num = func_15(Global_20876[Global_20875 /*3*/], Global_20883[Global_20875 /*3*/], Global_20893, Global_20890, 450f, true);
	
		if (num >= 1f)
		{
			MISC::SET_BIT(&Global_8801, 8);
			MISC::SET_BIT(&Global_8800, 14);
			Global_20870 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8802, 2);
			iLocal_80 = 0;
		}
		else if (num >= 0.75f)
		{
			MISC::SET_BIT(&Global_8801, 8);
		}
	}
	else
	{
		if (iLocal_80 == 0)
		{
			fLocal_81 = { Global_20883[Global_20875 /*3*/] };
			fLocal_81 = fLocal_81 - 10f;
			fLocal_81.f_1 = fLocal_81.f_1 + 20f;
			iLocal_80 = 1;
		}
	
		num2 = func_15(Global_20876[Global_20875 /*3*/], fLocal_81, -90f, 0f, 90f, -90f, 0f, 90f, 450f, true);
	
		if (num2 >= 1f)
		{
			MISC::SET_BIT(&Global_8801, 8);
			MISC::SET_BIT(&Global_8800, 14);
			Global_20870 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8802, 2);
			iLocal_80 = 0;
		}
		else if (num2 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8801, 8);
		}
	}

	return;
}

void func_54() // Position - 0x488C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_105 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_104);
	}
	else
	{
		iLocal_100 = MISC::GET_GAME_TIMER();
		iLocal_105 = iLocal_100 - iLocal_99;
	}

	if (iLocal_105 > 4000)
	{
		iLocal_87 = func_105();
		AUDIO::IS_MOBILE_PHONE_CALL_ONGOING();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_104 = NETWORK::GET_NETWORK_TIME();
		else
			iLocal_99 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_55() // Position - 0x48E2
{
	if (Global_20929 == 1)
	{
		func_122();
	
		if (Global_20908 == 0)
		{
			if (func_64(FRONTEND_CONTROL, Global_20900, 0))
			{
				if (IS_BIT_SET(Global_8801, 8))
				{
					if (Global_22333 == false)
					{
						func_47();
						Global_20908 = 1;
						Global_20929 = 3;
						Global_22335 = 1;
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
	
		if (Global_20908 == 0)
		{
			if (func_64(FRONTEND_CONTROL, Global_20899, 0))
			{
				if (IS_BIT_SET(Global_8801, 8))
				{
					func_40();
					Global_20908 = 1;
					Global_20929 = 2;
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				
					func_61();
					func_60();
				}
			}
		}
	}
	else
	{
		if (iLocal_97 == 0)
		{
			if (IS_BIT_SET(Global_8800, 27))
			{
				iLocal_97 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_20930.f_1 > 3)
				if (SYSTEM::TIMERB() > 1500)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
							if (Global_20873)
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							else if (!IS_BIT_SET(Global_8802, 5))
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
		
			if (!IS_BIT_SET(Global_8800, 27))
			{
				iLocal_97 = 0;
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	
		if (Global_20929 == 0)
		{
			if (Global_20908 == 0)
			{
				if (func_64(FRONTEND_CONTROL, Global_20898, 0) || Global_2749863 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (IS_BIT_SET(Global_8801, 8))
							{
								switch (Global_20930.f_1)
								{
									case 3:
										break;
								
									case 4:
										break;
								
									case 6:
										if (Global_21145 == false)
										{
											if (Global_21146 == true)
											{
												func_47();
												Global_21146 = false;
												func_114(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_86();
												func_85();
												func_84(1);
												func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_20919, true);
											
												iLocal_16 = 0;
												Global_20930.f_1 = 3;
											}
										}
										break;
								
									case 5:
										Global_20930.f_1 = 3;
										break;
								
									case 7:
										IS_BIT_SET(Global_8800, 23) == true;
									
										if (Global_9408 - Global_9407 > Global_9409 && IS_BIT_SET(Global_8800, 23) == false)
										{
											if (IS_BIT_SET(Global_8801, 0))
											{
											}
											else
											{
												func_47();
												Global_9406 = 1;
												Global_20930.f_1 = 6;
											
												if (Global_79389)
													func_114(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_4543360), -1082130432, -1082130432, -1082130432, -1082130432);
											
												Global_8803 = 99;
											
												if (Global_2749863 == 0)
													func_56();
											}
										}
										break;
								
									case 8:
										break;
								
									case 10:
										if (Global_8115 == 132)
										{
											if (Global_2746026.f_1 || IS_BIT_SET(Global_8801, 20))
											{
												func_47();
												func_78();
											}
										}
										else
										{
											func_47();
											func_78();
											Global_22335 = 1;
										}
										break;
								
									case 9:
										if (Global_22286 == 0)
											Global_20930.f_1 = 3;
										break;
								
									default:
										break;
								}
							
								if (Global_2749863 == 1)
								{
									iLocal_120 = 1;
									Global_2749863 = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_56() // Position - 0x4C0F
{
	int value;
	var unk;

	if (Global_20913 == 1)
		return;

	if (Global_20930.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		if (Global_79389)
			return;
	
		SYSTEM::WAIT(0);
	}

	switch (Global_20930.f_1)
	{
		case 6:
			func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_84(Global_9405);
		
			if (Global_9405 == 1)
			{
				func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
		
			if (Global_20918)
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21147 == false)
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == true)
					if (Global_20918)
						func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20918)
					func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_8800, 17);
			}
		
			if (Global_79389)
			{
				value = Global_20934;
				func_114(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
				func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_114(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_82(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		
			if (IS_BIT_SET(Global_8800, 20))
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20873)
					func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20929 == 1)
			{
				func_107();
				func_114(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300" /*CHAR_DEFAULT*/);
					func_36("CELL_217" /*INCOMING CALL*/);
					func_36("CELL_217" /*INCOMING CALL*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_59(Global_8115, Global_20930) == 0)
				{
					func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
			
				func_114(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_114(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_107();
			
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300" /*CHAR_DEFAULT*/);
					func_36("CELL_219" /*CONNECTED*/);
					func_36("CELL_219" /*CONNECTED*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22544)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_59(Global_8115, Global_20930) == 0)
					{
						func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_114(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &unk, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
			
				func_114(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_57();
			break;
	
		default:
			break;
	}

	return;
}

void func_57() // Position - 0x51F9
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		func_58();
	
		if (Global_20929 == 1)
		{
			if (Global_20918)
				func_82(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_82(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_22333)
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8800, 20))
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20918)
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			func_82(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		
			if (IS_BIT_SET(Global_8800, 20))
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20873)
					func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_58() // Position - 0x537A
{
	if (Global_79389)
	{
		func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}

	return;
}

int func_59(int iParam0, eCharacter echParam1) // Position - 0x53AA
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2169[iParam0 /*29*/].f_24[echParam1];
}

void func_60() // Position - 0x53D4
{
	if (Global_22299)
	{
		if (Global_79389)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_82(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2738935.f_1847), 15);
				}
			}
		}
	}

	return;
}

void func_61() // Position - 0x5423
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		if (!Global_22294)
		{
			func_82(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_82(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		
			if (IS_BIT_SET(Global_8800, 20))
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20873)
					func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_82(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_22299)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_36("CELL_300" /*CHAR_DEFAULT*/);
				func_36("CELL_219" /*CONNECTED*/);
				func_36("CELL_219" /*CONNECTED*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_59(Global_8115, Global_20930) == 0)
			{
				func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_219" /*CONNECTED*/, "CELL_195" /*Unknown*/, 0);
			}
			else
			{
				func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_219" /*CONNECTED*/, &(Global_2169[Global_8115 /*29*/].f_3), 0);
			}
		}
	
		func_114(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_62() // Position - 0x55D0
{
	Global_21152 = 0;
	func_63();
	return;
}

void func_63() // Position - 0x55E0
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20929 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23297 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = Global_20932;
		return;
	}

	return;
}

BOOL func_64(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x5617
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

BOOL func_65() // Position - 0x5689
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(361769742) > 0)
		return true;

	return false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x56A6
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

void func_67(int iParam0) // Position - 0x56CE
{
	if (func_69())
		return;

	if (Global_21145)
		if (func_7())
			func_5(true, true);
		else
			func_5(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_68())
		Global_20930.f_1 = 3;

	return;
}

BOOL func_68() // Position - 0x5758
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_69() // Position - 0x577F
{
	return IS_BIT_SET(Global_1956920, 19);
}

void func_70() // Position - 0x578E
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}

	return;
}

void func_71() // Position - 0x57B7
{
	int num;
	int num2;
	int pedPropIndex;

	num = 0;
	num2 = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (func_79() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			num2 = 1;

	if (!Global_79389)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && num2 == 0)
		{
			pedPropIndex = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
		
			if (Global_79389)
				if (pedPropIndex == 15 || pedPropIndex == 16 || pedPropIndex == 17 || pedPropIndex == 18 || pedPropIndex == 19 || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					num = 1;
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				num = 1;
		
			if (!Global_20873)
			{
				if (Global_8115 != 128)
				{
					if (num == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_79389)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
							
								MISC::SET_BIT(&Global_8800, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_72() // Position - 0x58DB
{
	if (IS_BIT_SET(Global_8800, 14) && Global_4543363 == 0 && Global_20870 == 0)
	{
		if (func_77())
		{
		}
		else
		{
			func_73();
		}
	
		if (Global_20930.f_1 == 9)
			if (Global_22299 == false)
				bLocal_74 = true;
	}

	return;
}

void func_73() // Position - 0x5923
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_20883[Global_20875 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_20870 = 1;
	}

	return;
}

void func_74() // Position - 0x594A
{
	if (IS_BIT_SET(Global_8800, 14) && Global_4543363 == 0 && Global_20870 == 0)
	{
		if (bLocal_74 == false)
		{
			if (IS_BIT_SET(Global_8801, 26))
			{
				MISC::CLEAR_BIT(&Global_8801, 24);
				MISC::CLEAR_BIT(&Global_8801, 25);
				MISC::CLEAR_BIT(&Global_8801, 27);
				MISC::CLEAR_BIT(&Global_8801, 26);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						func_73();
					else if (func_76() == false)
						func_73();
			}
		}
	
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			if (func_76())
				func_75();
		}
		else if (func_77())
		{
		}
		else if (func_76())
		{
			func_75();
		}
	
		if (Global_20930.f_1 == 9)
			if (Global_22299 == false)
				bLocal_74 = true;
	}

	return;
}

void func_75() // Position - 0x5A20
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_20876[Global_20875 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_4543363 = 1;
	}

	return;
}

BOOL func_76() // Position - 0x5A48
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
			if (Global_20873 == false)
				if (Global_8115 != 128)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						Global_22286 != 2;
	
		if (func_83(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919896))
			return false;
	
		if (Global_113017)
			return false;
	}

	if (Global_79389)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON && camActiveViewModeContext == ON_FOOT || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
	{
		num = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1030275036 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -616331036 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 782665360 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 771711535 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1066334226 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 1070967343)
					num = 0;
			}
		}
	}

	if (Global_4543362 || num == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(361769742) > 0 || Global_113969.f_14054.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-622120100) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

BOOL func_77() // Position - 0x5C91
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-50326605) > 0)
		return true;

	return false;
}

void func_78() // Position - 0x5CAE
{
	if (!Global_79389)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (IS_BIT_SET(Global_8800, 11))
			{
				if (!Global_20873)
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
			
				if (Global_79389)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
			
				MISC::CLEAR_BIT(&Global_8800, 11);
			}
		}
	}

	return;
}

BOOL func_79() // Position - 0x5D15
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;

	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		return true;

	return false;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x5D39
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_81() // Position - 0x5D50
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_84);
	iLocal_84 == -1;
	return;
}

void func_82(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, char* sParam10, const char* sParam11) // Position - 0x5D64
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_36(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_36(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_36(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_36(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_36(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_83(int iParam0) // Position - 0x5E17
{
	return Global_44042 == iParam0;
}

void func_84(int iParam0) // Position - 0x5E25
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_23354 = 0;
	Global_9405 = iParam0;
	func_38();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_83(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == false)
						{
							Global_9333[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value = 42;
									Global_21149 = 1;
								}
								else
								{
									value = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696167)
								if (num == 14)
									func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
						
							Global_9369[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == false)
						{
							Global_9333[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113969.f_14144[j /*104*/].f_24 != 0)
										if (Global_113969.f_14144[j /*104*/].f_28 == 0)
											if (Global_113969.f_14144[j /*104*/].f_99[Global_20930] == 1)
												Global_23354 = Global_23354 + 1;
								}
							
								func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79389)
								{
									value2 = 0;
									value2 = Global_4541818;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541819[k /*104*/].f_24 != 0)
											if (Global_4541819[k /*104*/].f_28 == 0)
												if (Global_4541819[k /*104*/].f_99[Global_20930] == 1)
													value2 = value2 + 1;
									}
								
									func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case CHAR_MICHAEL:
											value3 = Global_45261;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45262;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45263;
											break;
									
										default:
											break;
									}
								
									func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8801, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value5 = 42;
									Global_21149 = 1;
								}
								else
								{
									value5 = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8807[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1882108.f_1;
								func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_82(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9369[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_85() // Position - 0x63A8
{
	if (Global_79389 == false)
	{
		Global_8807[14 /*15*/].f_4 = -99;
		Global_8807[4 /*15*/].f_4 = -99;
	
		if (Global_2696167)
		{
			if (func_83(14))
			{
				func_37(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_37(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_37(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_37(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_86() // Position - 0x6436
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 34; i = i + 1)
	{
		Global_8807[i /*15*/].f_4 = -99;
	}

	if (Global_79389 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_87(num2, Global_20930) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_37(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_37(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44042 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8805 == 0)
		{
			func_37(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 0;
			Global_8806 = 255;
		}
		else
		{
			func_37(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 1;
			Global_8806 = 42;
		}
	
		if (num == 1)
			func_37(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_37(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_37(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_113969.f_14054.f_89 == true)
			func_37(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_113969.f_14054.f_88 == 1)
			func_37(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_37(25, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_37(27, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_37(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_37(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_37(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_37(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
		func_37(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4543084, 4))
			func_37(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_37(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_37(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_37(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_37(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_37(23, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_37(24, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_37(25, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_37(26, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_37(27, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_37(33, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4543084, 4))
			if (Global_1836172)
				func_37(23, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4543084, 20))
				func_37(23, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4543084, 22))
				func_37(23, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4543084, 26))
				if (func_123())
					func_37(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_37(23, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4543084, 4) == false && Global_1836172 == false && IS_BIT_SET(Global_4543084, 20) == false && IS_BIT_SET(Global_4543084, 22) == false && IS_BIT_SET(Global_4543084, 26) == false)
			if (func_123())
				func_37(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_37(23, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

int func_87(int iParam0, eCharacter echParam1) // Position - 0x69E1
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2169[iParam0 /*29*/].f_19[echParam1];
}

BOOL func_88(int iParam0) // Position - 0x6A0B
{
	int num;

	iParam0 == 1;

	if (iParam0 == 0)
		if (func_91() == 0)
			return false;

	if (func_89(&num) && MISC::GET_PROFILE_SETTING(903) == 1)
		return true;

	if (!func_89(&num))
		if (num == 6)
			return true;
		else if (num == 7)
			return true;
		else if (num == 8)
			return true;
		else if (num == 10)
			return true;
		else if (num == 12)
			return true;
		else if (num == 13)
			return true;
		else if (num == 11)
			return true;

	return false;
}

BOOL func_89(int* piParam0) // Position - 0x6AAE
{
	if (func_90())
	{
		*piParam0 = 11;
		return true;
	}

	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(piParam0);
}

BOOL func_90() // Position - 0x6ACC
{
	return Global_33226;
}

int func_91() // Position - 0x6AD7
{
	if (IS_PLAYSTATION_PLATFORM())
	{
		if (!NETWORK::NETWORK_IS_NP_AVAILABLE())
		{
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 4)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 2)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 1)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
				return 0;
		}
	}

	return 1;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x6B1F
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_93() // Position - 0x6B35
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_113 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));

	switch (iLocal_113)
	{
		case 0:
			iLocal_88 = 5;
			break;
	
		case 1:
			iLocal_88 = 5;
			break;
	
		case 2:
			iLocal_88 = 4;
			break;
	
		case 3:
			iLocal_88 = 4;
			break;
	
		case 4:
			iLocal_88 = 3;
			break;
	
		case 5:
			iLocal_88 = 2;
			break;
	
		default:
			iLocal_88 = 3;
			break;
	}

	iLocal_114 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);

	if (iLocal_114 < 2)
		if (iLocal_88 > 2)
			iLocal_88 = iLocal_88 - 1;

	if (bLocal_115 == true || func_94())
		iLocal_88 = 0;

	func_114(Global_20911, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_87), SYSTEM::TO_FLOAT(iLocal_88), -1082130432, -1082130432, -1082130432);
	return;
}

BOOL func_94() // Position - 0x6C05
{
	eCharacter character;
	var entityCoords;
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (func_99(character))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			for (i = 0; i < Global_113969.f_7691.f_136; i = i + 1)
			{
				if (IS_BIT_SET(Global_113969.f_7691[i /*15*/].f_2, character))
					if (func_97(entityCoords, func_98(i)))
						return true;
			}
		
			for (i = 0; i < Global_113969.f_7691.f_764; i = i + 1)
			{
				if (IS_BIT_SET(Global_113969.f_7691.f_651[i /*14*/].f_2, character))
					if (func_97(entityCoords, func_96(i)))
						return true;
			}
		
			for (i = 0; i < Global_113969.f_7691.f_866; i = i + 1)
			{
				if (IS_BIT_SET(Global_113969.f_7691.f_765[i /*10*/].f_2, character))
					if (func_97(entityCoords, func_95(i)))
						return true;
			}
		}
	}

	return false;
}

int func_95(int iParam0) // Position - 0x6D05
{
	return Global_113969.f_7691.f_765[iParam0 /*10*/].f_7;
}

int func_96(int iParam0) // Position - 0x6D1D
{
	return Global_113969.f_7691.f_651[iParam0 /*14*/].f_7;
}

BOOL func_97(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x6D35
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_44043)
			return false;
	
		if (SYSTEM::VDIST2(vParam0, Global_44043[iParam3 /*5*/]) <= Global_44043[iParam3 /*5*/].f_3 * Global_44043[iParam3 /*5*/].f_3)
			return true;
		else if (Global_44043[iParam3 /*5*/].f_4 != -1)
			return func_97(vParam0, Global_44043[iParam3 /*5*/].f_4);
	}

	return false;
}

int func_98(int iParam0) // Position - 0x6DA0
{
	return Global_113969.f_7691[iParam0 /*15*/].f_7;
}

BOOL func_99(eCharacter echParam0) // Position - 0x6DB5
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x6DC1
{
	func_101();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_101() // Position - 0x6DDA
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_99(character) && !func_83(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_99(Global_113969.f_2366.f_539.f_4321))
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
			
				Global_113969.f_2366.f_539.f_4323 = character;
				Global_113969.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113969.f_2366.f_539.f_4321 = 145;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x6ED7
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x6F14
{
	if (func_99(character))
		return func_104(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_104(eCharacter echParam0) // Position - 0x6F39
{
	return Global_2169[echParam0 /*29*/];
}

int func_105() // Position - 0x6F48
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	return Global_113969.f_14054[Global_20930 /*20*/].f_8;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x6F62
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_107() // Position - 0x6F79
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930 == CHAR_MICHAEL)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == CHAR_FRANKLIN)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == CHAR_TREVOR)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == CHAR_MULTIPLAYER)
		{
			switch (Global_4543360)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

int func_108(int iParam0, int iParam1) // Position - 0x71F0
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_109(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_109(int iParam0, int iParam1) // Position - 0x721F
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_110(iParam1));
}

int func_110(int iParam0) // Position - 0x7234
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_111();
	
		if (num2 > -1)
		{
			Global_2750950 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750950 = 1;
		}
	}

	return num;
}

int func_111() // Position - 0x7268
{
	return Global_1574926;
}

void func_112() // Position - 0x7274
{
	if (func_83(14))
	{
		if (Global_2696167)
		{
			if (Global_20930.f_1 == 6)
			{
				if (Global_20910 == 7)
				{
					func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_20910 = 6;
					func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_20930.f_1 == 6)
		{
			func_114(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}

	iLocal_90 = CLOCK::GET_CLOCK_MINUTES();

	if (iLocal_90 != Global_8803)
	{
		Global_8803 = iLocal_90;
		iLocal_89 = CLOCK::GET_CLOCK_HOURS();
		iLocal_91 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	
		switch (iLocal_91)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_920" /*Sun*/, 16);
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_921" /*Mon*/, 16);
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_922" /*Tue*/, 16);
				break;
		
			case 3:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_923" /*Wed*/, 16);
				break;
		
			case 4:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_924" /*Thu*/, 16);
				break;
		
			case 5:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_925" /*Fri*/, 16);
				break;
		
			case 6:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_926" /*Sat*/, 16);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_92, "CELL_206" /*BACK*/, 16);
				break;
		}
	
		func_82(Global_20911, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1f, -1f, -1f, &uLocal_92, 0, 0, 0, 0);
	
		if (Global_20873 == false)
			func_93();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}

	return;
}

void func_113() // Position - 0x73F4
{
	if (Global_79389)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_20873)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_20930)
		{
			case CHAR_MICHAEL:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		
			case CHAR_TREVOR:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
		
			case CHAR_FRANKLIN:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		}
	}

	Global_20893 = { -90f, -130f, 0f };

	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_20875 = 0;
		Global_20876[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f, -113f };
		Global_20883[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f, -113f };
	}
	else
	{
		Global_20875 = 0;
		Global_20876[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f, -91.5f };
		Global_20883[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f, -91.5f };
	}

	Global_20858 = { Global_20876[Global_20875 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20876[Global_20875 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20893, 0);
	Global_20870 = 1;
	return;
}

void func_114(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7559
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL IS_XBOX_PLATFORM() // Position - 0x75BC
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_116() // Position - 0x75D2
{
	Global_2746026.f_1 = 0;
	Global_2746026 = 0;
	Global_2746026.f_2 = 0;
	Global_2746026.f_33 = -1;
	Global_2746026.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2746026.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2746026.f_39[0 /*16*/], "", 64);
	Global_2746026.f_38 = 0;
	Global_2746026.f_56 = 0;
	Global_2746026.f_57 = 0;
	Global_2746026.f_58 = -2;
	Global_2746026.f_3 = 0;
	func_117(&(Global_2746026.f_20));
	return;
}

void func_117(Any* panParam0) // Position - 0x7645
{
	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	panParam0->f_4 = 0;
	panParam0->f_5 = 0;
	panParam0->f_6 = 0;
	panParam0->f_7 = 0;
	panParam0->f_8 = 0;
	panParam0->f_9 = 0;
	panParam0->f_10 = 0;
	panParam0->f_11 = 0;
	panParam0->f_12 = 0;
	return;
}

void func_118() // Position - 0x768D
{
	Global_2746026.f_2 = 1;
	Global_2746026.f_38 = 1;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
		
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2746026 = 0;
			Global_2746026.f_2 = 0;
		}
		else if (IS_GAMER_HANDLE_VALID(Global_2746026.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2746026.f_20)))
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2746026.f_20)))
					func_116();
		}
		else
		{
			func_116();
		}
	}
	else
	{
		func_116();
	}

	if (Global_2746026.f_37)
		func_67(0);

	Global_2746026.f_37 = 0;
	Global_2746026.f_3 = 0;
	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x772D
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_120() // Position - 0x773D
{
	Global_21152 = 0;
	func_10();
	return;
}

void func_121(int iParam0, char* sParam1) // Position - 0x774D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_122() // Position - 0x7762
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20899);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20899);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20900);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	}

	if (Global_79389)
		Global_113969.f_14054[3 /*20*/].f_10 = func_108(1198, -1);

	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (MISC::GET_GAME_TIMER() - iLocal_116 >= 300 || iLocal_116 == 0 || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_113969.f_14054[Global_20930 /*20*/].f_10 == 1)
	{
		if (MISC::GET_GAME_TIMER() - iLocal_116 >= 300 || iLocal_116 == 0 || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_79389)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&Global_9605[3 /*2811*/][1 /*281*/].f_144[func_108(1199, -1) /*6*/], "Silent Ringtone Dummy"))
					AUDIO::PLAY_PED_RINGTONE(&Global_9605[3 /*2811*/][1 /*281*/].f_144[func_108(1199, -1) /*6*/], PLAYER::PLAYER_PED_ID(), true);
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14054[Global_20930 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!(Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1))
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_113969.f_14054[Global_20930 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_113969.f_14054[Global_20930 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}

	return;
}

BOOL func_123() // Position - 0x7938
{
	if (Global_79389)
		if (Global_1836576 || Global_1836577 == 1)
			return true;

	return false;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x795F
{
	if (func_83(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
				Global_20930 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
				Global_20930 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
				Global_20930 = CHAR_TREVOR;
			else
				Global_20930 = CHAR_MICHAEL;
	}
	else
	{
		Global_20930 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20930 == _CHAR_NULL)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_79389)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_20930 > CHAR_MULTIPLAYER)
			Global_20930 = CHAR_MULTIPLAYER;
	}

	return;
}


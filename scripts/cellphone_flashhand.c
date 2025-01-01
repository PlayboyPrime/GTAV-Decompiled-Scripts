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

void main() // Position - 0x0 (0)
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
	Global_21281 = 145;
	MISC::CLEAR_BIT(&Global_8920, 8);
	MISC::CLEAR_BIT(&Global_8919, 14);
	MISC::CLEAR_BIT(&Global_4546023, 3);
	MISC::CLEAR_BIT(&Global_8920, 10);
	MISC::CLEAR_BIT(&Global_8919, 17);
	MISC::CLEAR_BIT(&Global_8919, 9);
	MISC::CLEAR_BIT(&Global_8919, 26);
	MISC::CLEAR_BIT(&Global_8919, 23);
	MISC::CLEAR_BIT(&Global_8920, 24);
	MISC::CLEAR_BIT(&Global_8920, 25);
	MISC::CLEAR_BIT(&Global_8920, 27);
	MISC::CLEAR_BIT(&Global_8920, 26);
	MISC::CLEAR_BIT(&Global_8919, 30);
	Global_2750847 = 0;
	iLocal_120 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_21032 = 0;
	bLocal_72 = false;
	Global_21010 = 0;
	Global_21050 = 0;
	Global_21051 = 0;
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_20997 = { Global_21029 };
	Global_21070 = 4;
	Global_21071 = 0;
	Global_9541 = 1;
	Global_21046 = Global_21070;

	if (Global_21048 == false)
	{
		Global_21049 = 0;
	
		if (Global_79539)
		{
			if (func_156())
				Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			else
				Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
		
			iLocal_86 = 1;
			iLocal_86 == 1;
		}
		else if (Global_21009)
		{
			Global_21054 = true;
			Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&Global_114135.f_14055[Global_21066 /*20*/]);
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047) && Global_21049 == 0)
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
				Global_21049 = 1;
		
			if (MISC::IS_PC_VERSION())
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
					if (SYSTEM::TIMERA() > 2000)
						Global_21049 = 1;
		
			if (Global_21065 == 1)
				func_155();
		}
	
		if (Global_21049 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
				func_154(Global_21047, "SHUTDOWN_MOVIE");
		
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21047);
			Global_21007 = 0;
			Global_21048 = false;
			Global_21282 = 0;
		
			if (Global_114135.f_14055.f_84 == 1)
			{
				Global_114135.f_14055.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
		
			Global_21010 = 1;
			Global_21066.f_1 = 3;
			func_153();
			Global_21054 = false;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_8919, 9);
			MISC::CLEAR_BIT(&Global_8919, 27);
			MISC::CLEAR_BIT(&Global_8919, 30);
			MISC::CLEAR_BIT(&Global_8920, 5);
			MISC::CLEAR_BIT(&Global_8920, 21);
			MISC::CLEAR_BIT(&Global_8921, 2);
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			Global_21284 = false;
			Global_23485 = 0;
			Global_23484 = 0;
			Global_22438 = false;
			func_151();
			func_149();
			Global_4546302 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		Global_20990 = 0.1f;
		Global_20991 = 0.38f;
		Global_20992 = 0.195f;
		Global_20993 = 0.05f;
	
		if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
		
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
		}
	
		Global_21049 == 0;
		func_146();
	
		if (Global_79539)
			TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Michael", 24);
	
		Global_21048 = true;
	}

	Global_8922 = 99;
	func_145();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	if (HUD::IS_RADAR_HIDDEN())
		Global_23439 = 1;
	else
		Global_23439 = 0;

	func_147(Global_21047, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_21008 = 1;

	if (Global_79539)
	{
		Global_21286 = false;
	
		if (func_156())
			if (Global_1836587 == 1)
				Global_4546299 = 4;
			else
				Global_4546299 = 2;
		else
			Global_4546299 = func_142(2030, -1);
	
		if (Global_4546299 < 1 || Global_4546299 > 7)
			Global_4546299 = 1;
	
		func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_4546299), -1082130432, -1082130432, -1082130432, -1082130432);
		func_141();
	
		if (func_156())
			if (Global_1836587 == 1)
				Global_4546300 = 16;
			else
				Global_4546300 = 9;
		else
			Global_4546300 = func_142(2029, -1);
	
		if (Global_4546300 == 0)
		{
			gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			num = 0;
			NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false;
			Global_4546303 == 1;
		
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4546303 == 0)
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
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&txdName);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4546300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_21009)
			Global_21286 = false;
		else if (Global_114135.f_14055.f_88 == 1 || Global_114135.f_14055.f_89 == true)
			Global_21286 = false;
		else
			Global_21286 = false;
	
		func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_9740 == 0)
			func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
	
		func_141();
	}

	iLocal_87 = func_139();

	if (Global_21009 == false)
		func_127();

	Global_21044 = 0;
	Global_21285 = false;
	MISC::CLEAR_BIT(&Global_8919, 9);
	Global_2696411 = false;

	if (func_122(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
		Global_2696411 = true;

	func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_120();
	func_119();
	func_118(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_21055, true);
	SYSTEM::SETTIMERB(0);

	while (Global_21066.f_1 < 6 && Global_21049 == 0)
	{
		SYSTEM::WAIT(0);
	
		if (SYSTEM::TIMERB() > 10000)
			Global_21049 = 1;
	
		if (Global_21066.f_1 < 4)
			Global_21049 = 1;
	}

	if (Global_21066.f_1 == 5 || Global_21066.f_1 == 6)
	{
		if (func_117(14))
			func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		else
			func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
	
		if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
			func_147(Global_21047, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		else
			func_147(Global_21047, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_21054)
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		else
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_21054)
			func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
		else
			func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_21286 == false)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else if (Global_79539)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else
		{
			if (Global_21285 == true)
				if (Global_21054)
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_21054)
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		
			MISC::SET_BIT(&Global_8919, 17);
		}
	}

	Global_21052 = 1;
	func_115();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_104 = NETWORK::GET_NETWORK_TIME();
	else
		iLocal_99 = MISC::GET_GAME_TIMER();

	if (Global_21282 == 1)
	{
		if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_114135.f_14055.f_84 == 0)
			{
				Global_114135.f_14055.f_84 = 1;
			
				if (Global_21011 == 0)
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

	if (Global_79539 == false)
		iLocal_16 = MISC::GET_GAME_TIMER() + 375;

	if (func_113())
		iLocal_78 = 1;
	else
		iLocal_78 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_79 = 1;
		
			if (func_113())
				func_112();
		}
		else
		{
			iLocal_79 = 0;
		}
	}

	if (MISC::IS_PC_VERSION())
	{
		if (Global_79539 == false)
		{
			iLocal_101 = MISC::GET_GAME_TIMER();
			iLocal_103 = 0;
		}
	}

	MISC::CLEAR_BIT(&Global_8921, 9);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (IS_BIT_SET(Global_4546023, 24))
		{
			if (!Global_21285)
			{
				if (Global_21066.f_1 >= 6)
				{
					MISC::CLEAR_BIT(&Global_4546023, 24);
					func_120();
					func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_118(1);
				
					if (Global_21066.f_1 == 6)
					{
						if (IS_BIT_SET(Global_8921, 9))
						{
							MISC::CLEAR_BIT(&Global_8921, 9);
							Global_21046 = 4;
							Global_21070 = Global_21046;
						}
					
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
	
		if (Global_79539)
			if (Global_21066.f_1 == 6)
				if (func_111())
					func_110();
			else if (Global_21066.f_1 == 7)
				func_105(10, 23, 5, 0, 26216);
	
		if (func_104())
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	
		if (Global_79539 == false)
		{
			if (bLocal_74)
				if (Global_21066.f_1 == 6 || Global_21066.f_1 == 7)
					bLocal_74 = false;
		
			if (Global_21066.f_1 > 4)
			{
				if (IS_BIT_SET(Global_8919, 14) && Global_4546302 == 0 && Global_21006 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_103())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_75);
						
							if (Global_21012[Global_21011 /*3*/].f_1 != uLocal_75.f_1)
								func_101();
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_75);
						
							if (Global_21019[Global_21011 /*3*/].f_1 != uLocal_75.f_1)
							{
								!func_104();
							
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
									func_99();
							}
						}
					
						if (iLocal_79 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_79 = 1;
								func_99();
								func_112();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_79 = 0;
							func_101();
						
							if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
								if (Global_22425 != 2)
									func_98();
						}
					
						if (iLocal_78 == 0)
						{
							if (func_113())
							{
								iLocal_78 = 1;
							
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
									func_112();
							
								func_101();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
								if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
						
							if (func_113() == false)
							{
								iLocal_78 = 0;
								func_99();
							}
						}
					}
				}
			}
		}
	
		if (Global_2696411 == true)
		{
			if (!func_122(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (Global_21066.f_1 > 3)
					{
						Global_21051 = 1;
						func_97();
						func_94(0);
						Global_2696411 = false;
					}
				}
			}
		}
	
		if (Global_21287 == 0)
		{
			if (Global_44181 != 15 || Global_8924 == 1 || _IS_MISSION_REPEAT_ACTIVE(false))
			{
				if (!Global_21285)
				{
					if (Global_21066.f_1 == 6)
					{
						Global_8925 = 42;
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120();
						func_119();
						func_118(1);
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21287 = 1;
			}
		}
		else if (Global_44181 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8924 == 0)
		{
			if (!Global_21285)
			{
				if (Global_21066.f_1 == 6)
				{
					Global_8925 = 255;
					func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_120();
					func_119();
					func_118(1);
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21287 = 0;
		}
	
		if (Global_21288 == 0)
		{
			if (IS_BIT_SET(Global_8920, 3))
			{
				if (!Global_21285 && !IS_BIT_SET(Global_8921, 9))
				{
					if (Global_21066.f_1 == 6)
					{
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120();
						func_119();
						func_118(1);
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21288 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_8920, 3))
		{
			if (!Global_21285 && !IS_BIT_SET(Global_8921, 9))
			{
				if (Global_21066.f_1 == 6)
				{
					func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_120();
					func_119();
					func_118(1);
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21288 = 0;
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_20994.f_1 != Global_21012[Global_21011 /*3*/].f_1 || func_113())
			{
				if (Global_21066.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) == 0)
						if (Global_79539)
							if (Global_21066.f_1 == 9)
								if (Global_22478 == 1 || IS_BIT_SET(Global_8920, 23))
									PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21035);
							else
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21035);
						else
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21035);
				
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21036);
					
						if (IS_BIT_SET(Global_8919, 17))
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21037);
					}
				
					if (!func_92() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21038);
				}
			}
		
			Global_20994.f_1 == Global_21012[Global_21011 /*3*/].f_1;
		}
	
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_76640)
			{
				if (!func_104())
				{
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
				}
			
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21040);
			
				if (!func_92())
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21041);
			
				if (Global_21066.f_1 > 4)
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21043);
			}
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21034, 0))
		{
			bLocal_96 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (iLocal_73 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21035))
			{
				Global_8923 = 1;
				iLocal_73 = 0;
			}
		
			if (!(Global_21066.f_1 > 3))
				iLocal_73 = 0;
		}
	
		if (bLocal_96)
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21034))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_21066.f_1 = 3;
					func_89();
				}
			}
			else
			{
				bLocal_96 = false;
			}
		}
	
		Global_9544 = MISC::GET_GAME_TIMER();
	
		if (Global_21053)
		{
			func_115();
			Global_21052 = 1;
			Global_21053 = false;
		}
	
		if (Global_21284 == false)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
			func_82();
			func_81();
			HUD::SET_TEXT_RENDER_ID(iLocal_84);
		
			if (Global_21052 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			
				if (Global_21009)
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21047, Global_20986, Global_20987, Global_20988, Global_20989, 255, 255, 255, 255, 0);
				else
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21047, Global_20986, Global_20987, Global_20988, Global_20989, 255, 255, 255, 255, 0);
			
				func_145();
			}
		
			if (Global_21006 == 1)
			{
				if (Global_21066.f_1 > 3)
					func_80();
			}
			else if (Global_21066.f_1 > 3)
			{
				if (Global_4546302 == 1)
					func_79();
			
				if (IS_BIT_SET(Global_8920, 25))
				{
					if (Global_79539 == true)
						func_78();
				}
				else if (!IS_BIT_SET(Global_8920, 24))
				{
					if (IS_BIT_SET(Global_8920, 26))
					{
						if (func_91(FRONTEND_CONTROL, Global_21033, 0))
						{
							MISC::SET_BIT(&Global_8920, 25);
							MISC::CLEAR_BIT(&Global_8920, 26);
							MISC::CLEAR_BIT(&Global_8921, 2);
						}
					}
				}
				else if (Global_79539 == true)
				{
					func_77();
				}
			}
		}
	
		if (bLocal_72)
		{
			if (Global_21066.f_1 == 6)
				func_51();
		}
		else if (!IS_BIT_SET(Global_8919, 23) && !Global_78307)
		{
			if (Global_21066.f_1 == 5 || Global_21066.f_1 == 6)
			{
				if (Global_21284 == false)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
					{
						if (Global_21009 == false)
							if (IS_BIT_SET(Global_8919, 14))
								if (!Global_79539)
									if (iLocal_73 == 0)
										if (!func_117(14))
											func_50();
										else if (Global_2696411)
											func_49();
								else if (IS_BIT_SET(Global_8921, 9))
									func_47();
								else
									func_24();
					
						if (IS_BIT_SET(Global_8919, 9))
						{
							func_22(0, 0, 1, true);
						}
						else if (Global_23484 == 0)
						{
							if (!IS_BIT_SET(Global_4546023, 3))
							{
								if (Global_79539)
									func_21();
							
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_79539)
								func_21();
						
							if (!IS_BIT_SET(Global_4546023, 3))
							{
								if (Global_23484 == 1)
								{
									if (IS_BIT_SET(Global_4546023, 1))
									{
										if (IS_BIT_SET(Global_8919, 14))
										{
											if (Global_79539)
												func_22(7, 0, 1, false);
											else
												Global_23485 = 0;
										
											Global_23484 = 0;
											MISC::CLEAR_BIT(&Global_4546023, 1);
										}
									}
									else if (IS_BIT_SET(Global_8919, 14))
									{
										func_22(7, 0, 1, false);
										Global_23484 = 0;
									}
								}
								else
								{
									if (Global_23484 == 3)
									{
										func_22(1, 0, 1, false);
										Global_23484 = 0;
									}
								
									if (Global_23484 == 2)
									{
										func_22(14, 0, 1, false);
										Global_23484 = 0;
									}
								
									if (Global_23484 == 4)
									{
										func_22(24, 0, 1, false);
										Global_23484 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_8926[Global_21069 /*15*/].f_5)))
		{
			if (Global_21069 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[Global_21069 /*15*/].f_9) == 0)
					Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5), CONTACTS_APP);
			}
			else
			{
				num4 = 0;
			
				if (Global_21069 == 24)
					IS_BIT_SET(Global_4546023, 4) == false && Global_1836180 == false;
			
				if (Global_21069 == 2 || num4 == 1)
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[Global_21069 /*15*/].f_9) == 0)
						Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5), APP_INTERNET);
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[Global_21069 /*15*/].f_9) == 0)
					Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5), CELLPHONE);
			}
		
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8926[Global_21069 /*15*/].f_5));
			Global_8922 = 99;
			MISC::CLEAR_BIT(&Global_8919, 23);
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (Global_21066.f_1 == 1)
			func_9();
	
		if (Global_21066.f_1 == 0)
			func_9();
	
		if (Global_21066.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_22438)
			{
				if (Global_21066.f_1 == 9)
				{
					if (Global_79539)
					{
						if (!IS_BIT_SET(Global_8920, 31))
						{
							if (!IS_BIT_SET(Global_8920, 27))
							{
								if (func_8())
								{
									if (!IS_BIT_SET(Global_8919, 9))
									{
										if (func_91(FRONTEND_CONTROL, Global_21038, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!(Global_21065 == 1))
												{
													if (Global_21066.f_1 > 6)
													{
														MISC::SET_BIT(&Global_8920, 24);
														MISC::SET_BIT(&Global_8920, 27);
														MISC::CLEAR_BIT(&Global_8920, 26);
														MISC::CLEAR_BIT(&Global_8920, 25);
														MISC::SET_BIT(&(Global_2739811.f_1863), 17);
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
		
			if (Global_21049 == 1)
			{
				Global_21051 = 1;
				func_94(0);
			}
		
			if (Global_21050 == 1)
			{
				Global_21051 = 1;
				func_94(0);
			}
		
			if (Global_79539)
			{
				if (!IS_BIT_SET(Global_8921, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2746945.f_1 == true)
						{
						}
						else
						{
							func_97();
							func_94(0);
						}
					}
				}
			}
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
						MISC::SET_BIT(&Global_8920, 4);
				
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254)
						{
							func_5(true, true);
							MISC::SET_BIT(&Global_8919, 14);
						}
						else
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
				}
			
				if (func_117(14))
					if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
						bLocal_121 = false;
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						bLocal_121 = true;
			
				if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0 || Global_79801 == 1 || func_3(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || GRAPHICS::GET_USINGNIGHTVISION() || bLocal_121)
					if (!Global_21009)
						MISC::SET_BIT(&Global_8920, 4);
			
				if (MISC::IS_PC_VERSION())
				{
					if (Global_79539 == false)
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
								MISC::SET_BIT(&Global_8920, 4);
							else
								iLocal_103 = 0;
						}
					}
				}
			
				if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				{
					if (Global_79539)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
					
						if (iLocal_111 != joaat("WEAPON_UNARMED") && Global_21066.f_1 < 7)
							MISC::SET_BIT(&Global_8920, 4);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_112 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("submersible2"))
						bLocal_115 = true;
					else
						bLocal_115 = false;
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("cutter") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("chernobog") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("khanjali") || bLocal_115 || VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_112, false) == false)
						MISC::SET_BIT(&Global_8920, 4);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("technical") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("limo2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent3") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("halftrack") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("dune3") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trailersmall2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("technical2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("boxville5") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("mogul") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("bombushka") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("tula") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_112))
						{
							seatIndex = func_2(PLAYER::PLAYER_PED_ID(), veLocal_112);
						
							if (seatIndex != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("limo2"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash2"))
									if (seatIndex == 2 || seatIndex == 1)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("technical2"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("boxville5"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent3"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("halftrack"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("dune3"))
									if (seatIndex == 0)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trailersmall2"))
									if (seatIndex == -1)
										MISC::SET_BIT(&Global_8920, 4);
							
								if (VEHICLE::IS_TURRET_SEAT(veLocal_112, seatIndex))
									MISC::SET_BIT(&Global_8920, 4);
							}
						}
					}
				
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK))
					{
						if (Global_79539 == false)
						{
							if (Global_21066.f_1 == 6 || Global_21066.f_1 == 7)
							{
								flag = true;
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(veLocal_112))
									flag = false;
							
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(veLocal_112)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veLocal_112)) || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("submersible2"))
									flag = false;
							
								if (flag)
									func_94(0);
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_ATTACK))
						if (Global_79539 == false)
							if (Global_21066.f_1 == 6 || Global_21066.f_1 == 7)
								func_94(0);
				
					bLocal_115 = false;
				}
			
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254)
					{
						func_5(true, true);
					}
					else
					{
						Global_21051 = 1;
						func_97();
						func_94(0);
					}
				}
			
				if (Global_79539 == false)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
				
					if (Global_21066.f_1 == 9 || Global_21066.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
				}
				else if (func_104())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
				}
			
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_104())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						
							if (iLocal_111 == joaat("WEAPON_SNIPERRIFLE") || iLocal_111 == joaat("WEAPON_HEAVYSNIPER") || iLocal_111 == joaat("WEAPON_REMOTESNIPER"))
								bLocal_110 = true;
							else
								bLocal_110 = false;
						
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_110)
								{
									Global_21051 = 1;
									func_97();
									func_94(0);
								}
							}
						}
					}
				}
			
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
			
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
			
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79539 == false)
					{
						Global_21051 = 1;
						func_97();
						func_94(0);
					}
				}
			}
			else
			{
				num5 = 0;
			
				if (Global_79539 && Global_2746945.f_1 && Global_2746945.f_37 && Global_21066.f_1 == 9)
				{
					num5 = 1;
				
					if (!IS_BIT_SET(Global_8920, 24))
					{
						if (IS_BIT_SET(Global_8920, 26))
						{
							MISC::SET_BIT(&Global_8920, 25);
							MISC::CLEAR_BIT(&Global_8920, 26);
							MISC::CLEAR_BIT(&Global_8921, 2);
						}
					}
				}
			
				if (num5 == 0)
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
			}
		}
	
		if (Global_21044 == 1)
			func_1();
	
		if (Global_21065 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21035);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21036);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}

	return;
}

void func_1() // Position - 0x1F2B (7979)
{
	if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21035) && !PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21034))
		Global_21044 = 0;

	return;
}

int func_2(Ped pedParam0, Vehicle veParam1) // Position - 0x1F51 (8017)
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

BOOL func_3(Ped pedParam0) // Position - 0x202A (8234)
{
	if (pedParam0 == 0)
		return false;

	if (func_4(pedParam0) == -1)
		return false;

	return true;
}

int func_4(Ped pedParam0) // Position - 0x204B (8267)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45178[i /*5*/] == -1))
			if (pedParam0 == Global_45178[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_5(BOOL bParam0, BOOL bParam1) // Position - 0x2094 (8340)
{
	if (bParam0)
	{
		if (func_6(0))
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

BOOL func_6(int iParam0) // Position - 0x2108 (8456)
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

BOOL func_7() // Position - 0x215F (8543)
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_8() // Position - 0x216D (8557)
{
	return Global_2746945.f_1;
}

void func_9() // Position - 0x217B (8571)
{
	float num;
	var unk;
	float num2;

	Global_23484 = 0;
	Global_23485 = 0;
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21036);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);

	if (Global_21032 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
	
		if (func_103())
			iLocal_16 = MISC::GET_GAME_TIMER();
		else
			iLocal_16 = 0;
	
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_21032 = 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (Global_114135.f_14055.f_84 == 1)
	{
		Global_114135.f_14055.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}

	num = 350f;

	if (IS_BIT_SET(Global_8919, 30) || IS_BIT_SET(Global_8921, 2))
		num = 25f;

	unk = { Global_21026 };

	if (Global_21051 == 1)
		unk = { -45f, 45f, 25f };

	if (IS_BIT_SET(Global_8920, 26) || IS_BIT_SET(Global_8919, 30) || IS_BIT_SET(Global_8921, 2))
		uLocal_117 = { Global_21012[Global_21011 /*3*/] };
	else
		uLocal_117 = { Global_21019[Global_21011 /*3*/] };

	num2 = func_15(uLocal_117, Global_21012[Global_21011 /*3*/], Global_21026, unk, num, false);

	if (!bLocal_85 && num2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		bLocal_85 = true;
	}

	if (bLocal_85 && MISC::GET_GAME_TIMER() - iLocal_16 > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21036);
		Global_21066.f_1 == 3;
		Global_21066.f_1 == 1;
		Global_21066.f_1 == 0;
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_21007 = 0;
		Global_21048 = false;
		Global_21282 = 0;
	
		if (Global_114135.f_14055.f_84 == 1)
		{
			Global_114135.f_14055.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
	
		Global_21010 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	
		Global_23439 == 0;
		Global_21284 = false;
	
		if (func_12(0))
			func_11();
	
		MISC::CLEAR_BIT(&Global_8920, 8);
		MISC::CLEAR_BIT(&Global_8919, 14);
		MISC::CLEAR_BIT(&Global_8919, 9);
		MISC::CLEAR_BIT(&Global_8919, 27);
		MISC::CLEAR_BIT(&Global_8919, 30);
		MISC::CLEAR_BIT(&Global_8920, 5);
		MISC::CLEAR_BIT(&Global_8920, 19);
		MISC::CLEAR_BIT(&Global_8920, 21);
		MISC::CLEAR_BIT(&Global_8920, 24);
		MISC::CLEAR_BIT(&Global_8920, 25);
		MISC::CLEAR_BIT(&Global_8920, 27);
		MISC::CLEAR_BIT(&Global_8920, 26);
		MISC::CLEAR_BIT(&Global_8921, 2);
		Global_2750847 = 0;
		iLocal_120 = 0;
	
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_10();
	
		SYSTEM::SETTIMERA(0);
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[2 /*15*/].f_9) == 0 && !Global_78307)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_21064))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21036);
			
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_84);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21047, Global_20986, Global_20987, Global_20988, Global_20989, 255, 255, 255, 255, 0);
				}
			
				if (SYSTEM::TIMERA() > 5000)
					SCRIPT::TERMINATE_THREAD(Global_21064);
			}
		}
	
		Global_21054 = false;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
			func_154(Global_21047, "SHUTDOWN_MOVIE");
	
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21047);
		Global_21032 = 0;
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21036);
	
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (Global_2746945.f_1)
				if (Global_79539)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				else
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21055, true);
	
		func_151();
		func_149();
		Global_22438 = false;
		Global_4546302 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_10() // Position - 0x24FF (9471)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9 || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}

	return;
}

void func_11() // Position - 0x2556 (9558)
{
	if (Global_9741[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9741[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9741[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9741[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9741[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9741[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8919, 25);
	MISC::SET_BIT(&Global_8920, 11);
	return;
}

BOOL func_12(int iParam0) // Position - 0x25D3 (9683)
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x25F5 (9717)
{
	return func_14(iParam0, Global_44181);
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x2606 (9734)
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

float func_15(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0x27E7 (10215)
{
	var position;
	float num;
	float num2;
	float num3;

	if (Global_4546302 == 0)
	{
		if (IS_BIT_SET(Global_8919, 14) && Global_21066.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&position);
		
			if (Global_21019[Global_21011 /*3*/].f_1 == position.f_1)
				Global_4546302 = 1;
		}
	}

	if (func_103() && Global_4546302 == 0)
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
	
		Global_20994 = { func_16(uParam0, uParam3, num2) };
		Global_20997 = { func_16(fParam6, fParam9, num2) };
	}
	else
	{
		Global_20994 = { uParam3 };
		Global_20997 = { fParam9 };
	}

	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20997, 0);
	return num;
}

Vector3 func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x28F6 (10486)
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_17(float fParam0, float fParam1, float fParam2) // Position - 0x2910 (10512)
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_18() // Position - 0x2937 (10551)
{
	if (Global_21044 == 0)
	{
		if (func_91(FRONTEND_CONTROL, Global_21038, 0))
		{
			if (Global_79539 == false)
			{
				if (Global_21286)
				{
					if (Global_21285 == false)
					{
						Global_21285 = true;
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(2);
						func_19();
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21071), -1082130432, -1082130432, -1082130432);
						Global_21046 = Global_21071;
					}
					else
					{
						Global_21285 = false;
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(1);
						func_19();
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
						Global_21046 = Global_21070;
					}
				}
			}
		}
	}

	return;
}

void func_19() // Position - 0x2A10 (10768)
{
	if (Global_21286 == false)
	{
		func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
	else if (Global_79539)
	{
		func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
	else
	{
		if (Global_21285 == true)
			if (Global_21054)
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
		else if (Global_21054)
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
		else
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
	
		MISC::SET_BIT(&Global_8919, 17);
	}

	return;
}

void func_20() // Position - 0x2AE9 (10985)
{
	if (IS_BIT_SET(Global_8920, 10) || iLocal_120 == 1)
	{
		Global_9543 = MISC::GET_GAME_TIMER();
		Global_9542 = 0;
		Global_21044 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
		iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		bLocal_72 = true;
	}
	else if (Global_21044 == 0)
	{
		if (func_91(FRONTEND_CONTROL, Global_21035, 0))
		{
			if (iLocal_73 == 0)
			{
				Global_9543 = MISC::GET_GAME_TIMER();
				Global_9542 = 0;
				Global_21044 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
				iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				bLocal_72 = true;
			}
		}
	}

	return;
}

void func_21() // Position - 0x2B68 (11112)
{
	if (Global_21044 == 0)
	{
		if (func_91(FRONTEND_CONTROL, Global_21033, 1))
		{
			if (func_142(2092, -1) == 1)
			{
				if (Global_114135.f_14055[Global_21066 /*20*/].f_17 == 0)
				{
					if (!IS_BIT_SET(Global_8920, 3))
					{
						if (!Global_21009)
						{
							if (!IS_BIT_SET(Global_4546023, 3))
							{
								if (!IS_BIT_SET(Global_8919, 14))
								{
									Global_21044 = 1;
									MISC::SET_BIT(&Global_4546023, 3);
									func_22(3, 0, 1, false);
									Global_23484 = 0;
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

int func_22(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2BDF (11231)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_79539 == false)
	{
		if (func_117(14))
		{
			if (Global_23484 == 2 || Global_23484 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (Global_21066.f_1 == 9)
		return 0;

	if (iParam2 == 0)
		if (func_6(0) == true)
			return 0;

	if (Global_21032 == 1)
		return 0;

	if (Global_21066.f_1 == 7)
		return 0;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21063))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21066.f_1 < 4)
			{
				func_23("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					Global_21063 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_21048)
	{
		SYSTEM::WAIT(0);
	}

	func_120();
	func_119();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
	{
		Global_9542 = 0;
		Global_21066.f_1 = 7;
		func_23(&(Global_8926[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
				Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
			Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), CELLPHONE);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8926[iParam0 /*15*/].f_5));
		return 1;
	}

	return 1;
}

void func_23(char* sParam0) // Position - 0x2D45 (11589)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_24() // Position - 0x2D65 (11621)
{
	if (func_46())
	{
		if (Global_21046 == 2 || Global_21046 == 5 || Global_21046 == 8 && func_91(FRONTEND_CONTROL, Global_21041, 0))
		{
			Global_21046 = 0;
			func_44();
			func_39();
			return;
		}
	}

	if (Global_21045)
		if (SYSTEM::TIMERA() > 50)
			Global_21045 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		func_35();

	if (Global_21045 == false)
	{
		if (func_91(FRONTEND_CONTROL, Global_21041, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 2:
					if (Global_9504[0] == true)
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21046 = 1;
						Global_21289 = true;
					}
					break;
			
				case 5:
					Global_21046 = 3;
					break;
			
				case 6:
					Global_21046 = 7;
					break;
			
				case 7:
					if (Global_9504[Global_21046 + 1] == true)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 6;
						Global_21289 = true;
					}
					break;
			
				case 8:
					Global_21046 = 6;
					break;
			
				default:
					Global_21046 = Global_21046 + 1;
					break;
			}
		
			if (Global_21289 == true)
				func_33();
			else
				func_31();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21040, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
					Global_21046 = 2;
					break;
			
				case 1:
					if (Global_9504[0] == true)
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21046 = 2;
						Global_21289 = true;
					}
					break;
			
				case 3:
					Global_21046 = 5;
					break;
			
				case 6:
					if (Global_9504[8] == true)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 7;
						Global_21289 = true;
					}
					break;
			
				default:
					Global_21046 = Global_21046 - 1;
					break;
			}
		
			if (Global_21289 == true)
				func_31();
			else
				func_33();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21042, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[6])
						Global_21046 = 6;
					break;
			
				case 1:
					if (Global_9504[7])
					{
						Global_21046 = 7;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 4;
					}
					break;
			
				case 2:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 5;
					}
					break;
			
				case 3:
					if (Global_9504[0])
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 6;
					}
					break;
			
				case 4:
					if (Global_9504[1])
						Global_21046 = 1;
					break;
			
				case 5:
					if (Global_9504[2])
						Global_21046 = 2;
					break;
			
				case 6:
					if (Global_9504[3])
						Global_21046 = 3;
					break;
			
				case 7:
					if (Global_9504[4])
						Global_21046 = 4;
					break;
			
				case 8:
					if (Global_9504[5])
						Global_21046 = 5;
					break;
			}
		
			if (Global_21289 == true)
				func_29();
			else
				func_26();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21043, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[3])
						Global_21046 = 3;
					break;
			
				case 1:
					if (Global_9504[4])
						Global_21046 = 4;
					break;
			
				case 2:
					if (Global_9504[5])
						Global_21046 = 5;
					break;
			
				case 3:
					if (Global_9504[6])
						Global_21046 = 6;
					break;
			
				case 4:
					if (Global_9504[7])
					{
						Global_21046 = 7;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 1;
					}
					break;
			
				case 5:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 2;
					}
					break;
			
				case 6:
					if (Global_9504[0])
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 3;
					}
					break;
			
				case 7:
					if (Global_9504[1])
						Global_21046 = 1;
					break;
			
				case 8:
					if (Global_9504[2])
						Global_21046 = 2;
					break;
			}
		
			if (Global_21289 == true)
				func_26();
			else
				func_29();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	if (Global_8926[24 /*15*/].f_10 == 57)
	{
		if (Global_21045 == true && Global_21046 == 8)
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

void func_25(int iParam0) // Position - 0x318A (12682)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2739811.f_5265.f_7[num], offset);
	return;
}

void func_26() // Position - 0x31B3 (12723)
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_27();
	return;
}

void func_27() // Position - 0x31F0 (12784)
{
	if (func_28())
		if (Global_21289 == false)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

BOOL func_28() // Position - 0x3213 (12819)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag;

	if (Global_79539)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4546301 || flag)
		return true;

	return true;
}

void func_29() // Position - 0x325A (12890)
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_30();
	return;
}

void func_30() // Position - 0x3297 (12951)
{
	if (func_28())
		if (Global_21289 == false)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_31() // Position - 0x32BA (12986)
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_32();
	return;
}

void func_32() // Position - 0x32F7 (13047)
{
	if (func_28())
		if (Global_21289 == false)
			MOBILE::CELL_SET_INPUT(4);
		else
			MOBILE::CELL_SET_INPUT(3);

	return;
}

void func_33() // Position - 0x331A (13082)
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_34();
	return;
}

void func_34() // Position - 0x3357 (13143)
{
	if (func_28())
		if (Global_21289 == false)
			MOBILE::CELL_SET_INPUT(3);
		else
			MOBILE::CELL_SET_INPUT(4);

	return;
}

void func_35() // Position - 0x337A (13178)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
	{
		switch (Global_21046)
		{
			case 0:
				if (Global_9504[1])
				{
					func_31();
					Global_21046 = 1;
				}
				break;
		
			case 1:
				if (Global_9504[2])
				{
					func_31();
					Global_21046 = 2;
				}
				break;
		
			case 2:
				if (Global_9504[3])
				{
					func_31();
					func_29();
					Global_21046 = 3;
				}
				else
				{
					func_33();
					func_29();
					Global_21046 = 4;
				}
				break;
		
			case 3:
				if (Global_9504[4])
				{
					func_31();
					Global_21046 = 4;
				}
				break;
		
			case 4:
				if (Global_9504[5])
				{
					func_31();
					Global_21046 = 5;
				}
				break;
		
			case 5:
				if (Global_9504[6])
				{
					func_31();
					func_29();
					Global_21046 = 6;
				}
				break;
		
			case 6:
				if (Global_9504[7])
				{
					func_31();
					Global_21046 = 7;
				}
				break;
		
			case 7:
				if (Global_9504[8])
				{
					func_31();
					Global_21046 = 8;
				}
				else if (func_46())
				{
					func_39();
					func_33();
					func_29();
					Global_21046 = 0;
				}
				else
				{
					func_33();
					func_29();
					Global_21046 = 0;
				}
				break;
		
			case 8:
				if (func_46())
				{
					func_39();
					func_31();
					func_29();
					Global_21046 = 0;
					return;
				}
			
				if (Global_9504[0])
				{
					func_31();
					func_29();
					Global_21046 = 0;
				}
				else
				{
					func_33();
					func_29();
				}
				break;
		}
	}

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
	{
		switch (Global_21046)
		{
			case 0:
				if (IS_BIT_SET(Global_8921, 9))
				{
					func_36();
					func_33();
					func_26();
					Global_21046 = 8;
					return;
				}
			
				if (Global_9504[8])
				{
					func_33();
					func_26();
					Global_21046 = 8;
				}
				else
				{
					func_31();
					func_26();
					Global_21046 = 7;
				}
				break;
		
			case 1:
				if (Global_9504[0])
				{
					func_33();
					Global_21046 = 0;
				}
				else if (IS_BIT_SET(Global_8921, 9))
				{
					func_36();
					func_31();
					func_26();
					Global_21046 = 8;
				}
				else if (Global_9504[8])
				{
					func_26();
					func_31();
				}
				else
				{
					func_26();
				}
				break;
		
			case 2:
				if (Global_9504[1])
				{
					func_33();
					Global_21046 = 1;
				}
				break;
		
			case 3:
				if (Global_9504[2])
				{
					func_33();
					func_26();
					Global_21046 = 2;
				}
				break;
		
			case 4:
				if (Global_9504[3])
				{
					func_33();
					Global_21046 = 3;
				}
				else
				{
					func_26();
					func_31();
					Global_21289 = true;
					Global_21046 = 2;
				}
				break;
		
			case 5:
				if (Global_9504[4])
				{
					func_33();
					Global_21046 = 4;
				}
				break;
		
			case 6:
				if (Global_9504[5])
				{
					func_26();
					func_33();
					Global_21046 = 5;
				}
				break;
		
			case 7:
				if (Global_9504[6])
				{
					func_33();
					Global_21046 = 6;
				}
				break;
		
			case 8:
				if (Global_9504[7])
				{
					func_33();
					Global_21046 = 7;
				}
				break;
		}
	}

	return;
}

void func_36() // Position - 0x366B (13931)
{
	MISC::CLEAR_BIT(&Global_8921, 9);
	func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_118(1);
	func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	func_37();
	func_120();
	func_118(1);
	func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	return;
}

void func_37() // Position - 0x3710 (14096)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_38(&Global_8926[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	return;
}

void func_38(char* sParam0) // Position - 0x37A0 (14240)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_39() // Position - 0x37B2 (14258)
{
	Global_21070 = Global_21046;
	func_40(true);
	return;
}

void func_40(BOOL bParam0) // Position - 0x37C5 (14277)
{
	int i;

	MISC::SET_BIT(&Global_8921, 9);

	if (bParam0)
		func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	func_37();
	func_43();

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9467[i] = 0;
		Global_9504[i] = false;
	}

	func_41(10, "CELL_16" /*Settings*/, 0, "appSettings", 24);

	if (bParam0)
	{
		func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4) // Position - 0x387D (14461)
{
	func_42(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_9504[iParam2] = true;
	Global_9467[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_38(&Global_8926[iParam0 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x38ED (14573)
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8926[iParam0 /*15*/], sParam1, 16);
	Global_8926[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8926[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8926[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8926[iParam0 /*15*/].f_10 = iParam4;
	Global_8926[iParam0 /*15*/].f_11 = iParam5;
	Global_8926[iParam0 /*15*/].f_12 = iParam6;
	Global_8926[iParam0 /*15*/].f_13 = iParam7;
	Global_8926[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8926[iParam0 /*15*/].f_12 == 0)
		Global_8926[iParam0 /*15*/].f_12 = 0;

	if (Global_8926[iParam0 /*15*/].f_13 == 0)
		Global_8926[iParam0 /*15*/].f_13 = 0;

	if (Global_8926[iParam0 /*15*/].f_14 == 0)
		Global_8926[iParam0 /*15*/].f_14 = 0;

	return;
}

void func_43() // Position - 0x39A3 (14755)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9504[i] = false;
	}

	return;
}

void func_44() // Position - 0x39C6 (14790)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21055, true);
		func_45();
	}

	return;
}

void func_45() // Position - 0x39EC (14828)
{
	if (func_28())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_46() // Position - 0x3A00 (14848)
{
	if (func_106())
		return true;

	return false;
}

void func_47() // Position - 0x3A14 (14868)
{
	if (Global_21046 == 0 || Global_21046 == 3 || Global_21046 == 6 && func_91(FRONTEND_CONTROL, Global_21040, 0))
	{
		Global_21046 = Global_21046 + 2;
		func_44();
		func_36();
		return;
	}

	if (Global_21045)
		if (SYSTEM::TIMERA() > 50)
			Global_21045 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		func_35();

	func_48();
	return;
}

void func_48() // Position - 0x3A7E (14974)
{
	BOOL flag;

	if (!Global_21045)
	{
		flag = false;
	
		if (func_91(FRONTEND_CONTROL, Global_21041, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
				case 3:
				case 6:
					if (Global_9504[Global_21046 + 1])
					{
						Global_21046 = Global_21046 + 1;
					}
					else if (Global_9504[Global_21046 + 2])
					{
						Global_21046 = Global_21046 + 2;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			
				case 1:
				case 4:
				case 7:
					if (Global_9504[Global_21046 + 1])
					{
						Global_21046 = Global_21046 + 1;
					}
					else if (Global_9504[Global_21046 - 1])
					{
						Global_21046 = Global_21046 - 1;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			
				case 2:
				case 5:
				case 8:
					if (Global_9504[Global_21046 - 2])
					{
						Global_21046 = Global_21046 - 2;
					}
					else if (Global_9504[Global_21046 - 1])
					{
						Global_21046 = Global_21046 - 1;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21289)
					func_31();
				else
					func_33();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21040, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 1:
				case 4:
				case 7:
					if (Global_9504[Global_21046 - 1])
					{
						Global_21046 = Global_21046 - 1;
					}
					else if (Global_9504[Global_21046 + 1])
					{
						Global_21046 = Global_21046 + 1;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			
				case 2:
				case 5:
				case 8:
					if (Global_9504[Global_21046 - 1])
					{
						Global_21046 = Global_21046 - 1;
					}
					else if (Global_9504[Global_21046 - 2])
					{
						Global_21046 = Global_21046 - 2;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21289)
					func_33();
				else
					func_31();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21042, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9504[Global_21046 + 6])
					{
						Global_21046 = Global_21046 + 6;
					}
					else if (Global_9504[Global_21046 + 3])
					{
						Global_21046 = Global_21046 + 3;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			
				case 3:
				case 4:
				case 5:
					if (Global_9504[Global_21046 - 3])
					{
						Global_21046 = Global_21046 - 3;
					}
					else if (Global_9504[Global_21046 + 3])
					{
						Global_21046 = Global_21046 + 3;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			
				case 6:
				case 7:
				case 8:
					if (Global_9504[Global_21046 - 3])
					{
						Global_21046 = Global_21046 - 3;
					}
					else if (Global_9504[Global_21046 - 6])
					{
						Global_21046 = Global_21046 - 6;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21289)
					func_26();
				else
					func_29();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21043, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9504[Global_21046 + 3])
					{
						Global_21046 = Global_21046 + 3;
					}
					else if (Global_9504[Global_21046 + 6])
					{
						Global_21046 = Global_21046 + 6;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			
				case 3:
				case 4:
				case 5:
					if (Global_9504[Global_21046 + 3])
					{
						Global_21046 = Global_21046 + 3;
					}
					else if (Global_9504[Global_21046 - 3])
					{
						Global_21046 = Global_21046 - 3;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			
				case 6:
				case 7:
				case 8:
					if (Global_9504[Global_21046 - 6])
					{
						Global_21046 = Global_21046 - 6;
					}
					else if (Global_9504[Global_21046 - 3])
					{
						Global_21046 = Global_21046 - 3;
						Global_21289 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21289)
					func_29();
				else
					func_26();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_49() // Position - 0x3F47 (16199)
{
	if (Global_21045)
		if (SYSTEM::TIMERA() > 50)
			Global_21045 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_21046)
			{
				case 6:
					if (Global_9504[7])
					{
						func_31();
						Global_21046 = 7;
					}
					break;
			
				case 7:
					if (Global_9504[6])
					{
						func_33();
						Global_21046 = 6;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_21046)
			{
				case 6:
					if (Global_9504[7])
					{
						func_31();
						Global_21046 = 7;
					}
					break;
			
				case 7:
					if (Global_9504[6])
					{
						func_33();
						Global_21046 = 6;
					}
					break;
			}
		}
	}

	if (Global_21045 == false)
	{
		if (func_91(FRONTEND_CONTROL, Global_21041, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 2:
					Global_21046 = 0;
					break;
			
				case 5:
					Global_21046 = 3;
					break;
			
				case 7:
					if (Global_9504[Global_21046 + 1] == true)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 6;
						Global_21289 = true;
					}
					break;
			
				case 8:
					Global_21046 = 6;
					break;
			
				default:
					Global_21046 = Global_21046 + 1;
					break;
			}
		
			if (Global_21289 == true)
				func_33();
			else
				func_31();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21040, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
					Global_21046 = 2;
					break;
			
				case 3:
					Global_21046 = 5;
					break;
			
				case 6:
					if (Global_9504[8] == true)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 7;
						Global_21289 = true;
					}
					break;
			
				default:
					Global_21046 = Global_21046 - 1;
					break;
			}
		
			if (Global_21289 == true)
				func_31();
			else
				func_33();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_50() // Position - 0x4106 (16646)
{
	if (Global_21045)
		if (SYSTEM::TIMERA() > 50)
			Global_21045 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[1])
					{
						func_31();
						Global_21046 = 1;
					}
					break;
			
				case 1:
					if (Global_9504[2])
					{
						func_31();
						Global_21046 = 2;
					}
					break;
			
				case 2:
					if (Global_9504[3])
					{
						func_31();
						func_29();
						Global_21046 = 3;
					}
					else
					{
						func_33();
						func_29();
						Global_21046 = 4;
					}
					break;
			
				case 3:
					if (Global_9504[4])
					{
						func_31();
						Global_21046 = 4;
					}
					break;
			
				case 4:
					if (Global_9504[5])
					{
						func_31();
						Global_21046 = 5;
					}
					break;
			
				case 5:
					if (Global_9504[6])
					{
						func_31();
						func_29();
						Global_21046 = 6;
					}
					break;
			
				case 6:
					if (Global_9504[7])
					{
						func_31();
						Global_21046 = 7;
					}
					break;
			
				case 7:
					if (Global_9504[8])
					{
						func_31();
						Global_21046 = 8;
					}
					else
					{
						func_33();
						func_29();
						Global_21046 = 0;
					}
					break;
			
				case 8:
					if (Global_9504[0])
					{
						func_31();
						func_29();
						Global_21046 = 0;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[8])
					{
						func_33();
						func_26();
						Global_21046 = 8;
					}
					else
					{
						func_31();
						func_26();
						Global_21046 = 7;
					}
					break;
			
				case 1:
					if (Global_9504[0])
					{
						func_33();
						Global_21046 = 0;
					}
					break;
			
				case 2:
					if (Global_9504[1])
					{
						func_33();
						Global_21046 = 1;
					}
					break;
			
				case 3:
					if (Global_9504[2])
					{
						func_33();
						func_26();
						Global_21046 = 2;
					}
					break;
			
				case 4:
					if (Global_9504[3])
					{
						func_33();
						Global_21046 = 3;
					}
					else
					{
						func_26();
						func_31();
						Global_21289 = true;
						Global_21046 = 2;
					}
					break;
			
				case 5:
					if (Global_9504[4])
					{
						func_33();
						Global_21046 = 4;
					}
					break;
			
				case 6:
					if (Global_9504[5])
					{
						func_26();
						func_33();
						Global_21046 = 5;
					}
					break;
			
				case 7:
					if (Global_9504[6])
					{
						func_33();
						Global_21046 = 6;
					}
					break;
			
				case 8:
					if (Global_9504[7])
					{
						func_33();
						Global_21046 = 7;
					}
					break;
			}
		}
	}

	if (Global_21045 == false)
	{
		if (func_91(FRONTEND_CONTROL, Global_21041, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 2:
					Global_21046 = 0;
					break;
			
				case 5:
					Global_21046 = 3;
					break;
			
				case 7:
					if (Global_9504[Global_21046 + 1] == true)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 6;
						Global_21289 = true;
					}
					break;
			
				case 8:
					Global_21046 = 6;
					break;
			
				default:
					Global_21046 = Global_21046 + 1;
					break;
			}
		
			if (Global_21289 == true)
				func_33();
			else
				func_31();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21040, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
					Global_21046 = 2;
					break;
			
				case 3:
					Global_21046 = 5;
					break;
			
				case 6:
					if (Global_9504[8] == true)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 7;
						Global_21289 = true;
					}
					break;
			
				default:
					Global_21046 = Global_21046 - 1;
					break;
			}
		
			if (Global_21289 == true)
				func_31();
			else
				func_33();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21042, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[6])
						Global_21046 = 6;
					break;
			
				case 1:
					if (Global_9504[7])
						Global_21046 = 7;
					break;
			
				case 2:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 5;
					}
					break;
			
				case 3:
					if (Global_9504[0])
						Global_21046 = 0;
					break;
			
				case 4:
					if (Global_9504[1])
						Global_21046 = 1;
					break;
			
				case 5:
					if (Global_9504[2])
						Global_21046 = 2;
					break;
			
				case 6:
					if (Global_9504[3])
						Global_21046 = 3;
					break;
			
				case 7:
					if (Global_9504[4])
						Global_21046 = 4;
					break;
			
				case 8:
					if (Global_9504[5])
						Global_21046 = 5;
					break;
			}
		
			if (Global_21289 == true)
				func_29();
			else
				func_26();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_91(FRONTEND_CONTROL, Global_21043, 0))
		{
			Global_21289 = false;
		
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[3])
						Global_21046 = 3;
					break;
			
				case 1:
					if (Global_9504[4])
						Global_21046 = 4;
					break;
			
				case 2:
					if (Global_9504[5])
						Global_21046 = 5;
					break;
			
				case 3:
					if (Global_9504[6])
						Global_21046 = 6;
					break;
			
				case 4:
					if (Global_9504[7])
						Global_21046 = 7;
					break;
			
				case 5:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = true;
						Global_21046 = 2;
					}
					break;
			
				case 6:
					if (Global_9504[0])
						Global_21046 = 0;
					break;
			
				case 7:
					if (Global_9504[1])
						Global_21046 = 1;
					break;
			
				case 8:
					if (Global_9504[2])
						Global_21046 = 2;
					break;
			}
		
			if (Global_21289 == true)
				func_26();
			else
				func_29();
		
			Global_21045 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_51() // Position - 0x4698 (18072)
{
	int num;
	Vehicle vehiclePedIsIn;
	char* str;

	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_71))
	{
		bLocal_72 = false;
		iLocal_70 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_71);
	
		if (Global_21285 == false)
			Global_21070 = iLocal_70;
		else
			Global_21071 = iLocal_70;
	
		if (iLocal_70 < 0)
			iLocal_70 = 0;
	
		Global_21069 = Global_9467[iLocal_70];
	
		if (IS_BIT_SET(Global_8920, 10))
		{
			Global_21069 = 2;
			MISC::CLEAR_BIT(&Global_8920, 10);
		}
	
		if (iLocal_120 == 1)
		{
			Global_21070 = 1;
			Global_21069 = 0;
			Global_2750847 = 0;
			iLocal_120 = 0;
		}
	
		num = 0;
	
		if (Global_79539)
			Global_21069 == 25 && func_46();
	
		if (SCRIPT::IS_THREAD_ACTIVE(Global_21064))
			num = 1;
	
		if (Global_21069 == 3)
		{
			if (IS_BIT_SET(Global_8920, 3))
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
			
				if (Global_79539)
				{
					if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
					
						if (iLocal_111 != joaat("WEAPON_UNARMED"))
							num = 1;
					}
				}
			}
		}
	
		if (Global_21069 == 2)
			if (IS_BIT_SET(Global_8920, 6))
				num = 1;
	
		if (Global_21069 == 24 && MISC::ARE_STRINGS_EQUAL(&Global_8926[Global_21069 /*15*/], "CELL_BENWEB" /*Benny's*/))
			if (IS_BIT_SET(Global_8920, 6))
				num = 1;
	
		if (Global_79539)
		{
			if (Global_21069 == 15 || Global_21069 == 5)
			{
			}
			else
			{
				if (Global_21069 == 24)
				{
					IS_BIT_SET(Global_4546023, 4) == false && Global_1836180 == false && IS_BIT_SET(Global_4546023, 20) == false && IS_BIT_SET(Global_4546023, 22) == false;
				
					if (IS_BIT_SET(Global_4546023, 20) == true && IS_BIT_SET(Global_4546023, 4) == false && Global_1836180 == false && IS_BIT_SET(Global_4546023, 22) == false && IS_BIT_SET(Global_4546023, 26) == false)
					{
						num = 1;
						MISC::SET_BIT(&Global_4546023, 21);
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						if (Global_21069 == 3)
							num = 1;
			
				if (Global_76639 && Global_21069 == 2)
				{
					num = 1;
					str = func_76();
				
					if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
						_DISPLAY_HELP_TEXT(str, -1);
				}
			
				if (Global_21069 == 23)
					func_53(&num);
			
				if (func_156())
				{
					if (Global_21069 == 10)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/))
							_DISPLAY_HELP_TEXT("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/, -1);
					
						num = 1;
					}
				}
			
				if (num == 0)
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8919, 17);
					Global_21066.f_1 = 7;
				
					if (IS_BIT_SET(Global_8919, 23))
					{
					}
					else
					{
						func_44();
						STATS::_PLAYSTATS_FLOW_HIGH(Global_2672939.f_4.f_11, "PhoneApp", false, Global_8926[Global_21069 /*15*/].f_9);
						Global_1942261.f_35 = 133;
						SCRIPT::REQUEST_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5));
						MISC::SET_BIT(&Global_8919, 23);
					}
				}
				else
				{
					Global_21069 == 2 || Global_21069 == 3;
					func_52();
				}
			}
		}
		else
		{
			switch (Global_21069)
			{
				case 3:
					if (Global_113188 == 1)
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
					MISC::SET_BIT(&Global_8919, 26);
					break;
			
				case 5:
					num = 1;
					break;
			
				case 20:
					num = 1;
				
					if (Global_21287 == 0)
					{
						if (Global_8923 == 0 && iLocal_73 == 0 && Global_44181 == 15)
						{
							iLocal_73 = 1;
							func_44();
							!Global_114135.f_14055.f_85;
						}
					}
					else
					{
						func_52();
					}
					break;
			
				default:
					break;
			}
		
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
				if (Global_21069 != 0)
					num = 1;
		
			if (func_117(14))
				if (Global_21069 != 3 && Global_21069 != 14)
					num = 1;
		
			if (num == 0)
			{
				func_44();
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
				Global_21066.f_1 = 7;
			
				if (IS_BIT_SET(Global_8919, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5));
					MISC::SET_BIT(&Global_8919, 23);
				}
			}
			else if (Global_21069 != 20)
			{
				if (Global_114135.f_14055.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_21069 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									_DISPLAY_HELP_TEXT("CELL_38" /*You cannot use the Snapmatic application while in cover.*/, -1);
									Global_114135.f_14055.f_86 = 1;
								}
							}
						}
					}
				}
			
				func_52();
			}
		}
	}

	return;
}

void func_52() // Position - 0x4BB9 (19385)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21055, true);

	return;
}

void func_53(var uParam0) // Position - 0x4BDB (19419)
{
	if (func_71(false))
	{
		*uParam0 = 1;
	
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HROBA_INGNG_BLK" /*The Darnell Inc. phone app is unavailable while working for another Boss.*/))
			_DISPLAY_HELP_TEXT("HROBA_INGNG_BLK" /*The Darnell Inc. phone app is unavailable while working for another Boss.*/, -1);
	}
	else if (func_68(PLAYER::PLAYER_ID()) || func_64(PLAYER::PLAYER_ID()) || func_63() || func_61(PLAYER::PLAYER_ID()) || func_59() || func_58(0) || func_57() || Global_1057440 != -1 || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 5 || func_54(PLAYER::PLAYER_ID(), true, false) || Global_1981870)
	{
		*uParam0 = 1;
	
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HROBA_GFAIL_BLK" /*The Darnell Inc. phone app is unavailable right now.*/))
			_DISPLAY_HELP_TEXT("HROBA_GFAIL_BLK" /*The Darnell Inc. phone app is unavailable right now.*/, -1);
	}

	return;
}

BOOL func_54(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4CA9 (19625)
{
	if (bParam1)
		if (func_55(plParam0))
			return true;

	!bParam2;

	if (Global_1845221[plParam0 /*889*/] == -1)
		return false;

	return true;
}

BOOL func_55(Player plParam0) // Position - 0x4CDB (19675)
{
	return func_56(plParam0);
}

BOOL func_56(Player plParam0) // Position - 0x4CE9 (19689)
{
	return IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_11.f_1, 0);
}

BOOL func_57() // Position - 0x4D00 (19712)
{
	if (Global_2739811.f_298)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_2739811.f_297) == 0)
		{
			Global_2739811.f_298 = 0;
			Global_2739811.f_297 = -1;
		}
	}

	return Global_2739811.f_298;
}

BOOL func_58(int iParam0) // Position - 0x4D38 (19768)
{
	return false;
}

BOOL func_59() // Position - 0x4D41 (19777)
{
	return func_60(*Global_4718592.f_128476);
}

BOOL func_60(var uParam0) // Position - 0x4D57 (19799)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_262145.f_31059[i] == uParam0)
			return 1;
	}

	return 0;
}

BOOL func_61(Player plParam0) // Position - 0x4D86 (19846)
{
	return func_62(&(Global_2657991[plParam0 /*467*/].f_446), 0);
}

BOOL func_62(var uParam0, int iParam1) // Position - 0x4D9F (19871)
{
	return IS_BIT_SET(*uParam0, iParam1);
}

BOOL func_63() // Position - 0x4DAD (19885)
{
	return Global_1835498;
}

int func_64(Player plParam0) // Position - 0x4DB9 (19897)
{
	if (func_67(plParam0))
		return 1;

	if (func_65(plParam0))
		return 1;

	return 0;
}

BOOL func_65(Player plParam0) // Position - 0x4DDC (19932)
{
	return func_66(plParam0, 20);
}

BOOL func_66(Player plParam0, int iParam1) // Position - 0x4DEC (19948)
{
	return IS_BIT_SET(Global_1887549[plParam0 /*611*/].f_10.f_4, iParam1);
}

BOOL func_67(Player plParam0) // Position - 0x4E04 (19972)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1887549[player /*611*/].f_1, 7);

	return false;
}

int func_68(Player plParam0) // Position - 0x4E27 (20007)
{
	if (func_70(plParam0))
		return 1;

	if (func_69(plParam0))
		return 1;

	return 0;
}

BOOL func_69(Player plParam0) // Position - 0x4E4A (20042)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_66(plParam0, 9);

	return false;
}

BOOL func_70(Player plParam0) // Position - 0x4E68 (20072)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1887549[player /*611*/].f_1, 0);

	return false;
}

BOOL func_71(BOOL bParam0) // Position - 0x4E8B (20107)
{
	return func_72(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_72(Player plParam0, BOOL bParam1) // Position - 0x4E9D (20125)
{
	if (!func_74(plParam0))
		return false;

	if (!bParam1)
		if (func_73(plParam0))
			return false;

	return func_74(Global_1887549[plParam0 /*611*/].f_10);
}

BOOL func_73(Player plParam0) // Position - 0x4ED5 (20181)
{
	if (func_74(plParam0))
		if (func_74(Global_1887549[plParam0 /*611*/].f_10))
			return Global_1887549[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

BOOL func_74(Player plParam0) // Position - 0x4F0A (20234)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x4F2C (20268)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_76() // Position - 0x4F3F (20287)
{
	return "BLOCK_APP_WEB" /*The Internet app is currently unavailable. Please try again later.*/;
}

void func_77() // Position - 0x4F4B (20299)
{
	if (Global_21032 == 0)
	{
		if (func_15(Global_21019[Global_21011 /*3*/], Global_21012[Global_21011 /*3*/], Global_21026, Global_21026, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8920, 24);
			MISC::SET_BIT(&Global_8920, 26);
		}
	}

	return;
}

void func_78() // Position - 0x4F9C (20380)
{
	if (Global_21032 == 0)
	{
		if (func_15(Global_21012[Global_21011 /*3*/], Global_21019[Global_21011 /*3*/], Global_21026, Global_21026, 350f, true) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8920, 25);
		
			if (Global_22438)
				MISC::CLEAR_BIT(&Global_8920, 27);
		}
	}

	return;
}

void func_79() // Position - 0x4FF3 (20467)
{
	if (Global_21032 == 0 && Global_21006 == 0)
	{
		if (func_15(Global_21019[Global_21011 /*3*/], Global_21012[Global_21011 /*3*/], Global_21026, Global_21026, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			Global_4546302 = 0;
		}
	}

	return;
}

void func_80() // Position - 0x5042 (20546)
{
	float num;
	float num2;

	if (IS_BIT_SET(Global_8921, 2))
	{
		MISC::SET_BIT(&Global_8920, 8);
		MISC::SET_BIT(&Global_8919, 14);
		Global_21006 = 0;
		iLocal_16 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21026, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
	{
		num = func_15(Global_21012[Global_21011 /*3*/], Global_21019[Global_21011 /*3*/], Global_21029, Global_21026, 450f, true);
	
		if (num >= 1f)
		{
			MISC::SET_BIT(&Global_8920, 8);
			MISC::SET_BIT(&Global_8919, 14);
			Global_21006 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8921, 2);
			iLocal_80 = 0;
		}
		else if (num >= 0.75f)
		{
			MISC::SET_BIT(&Global_8920, 8);
		}
	}
	else
	{
		if (iLocal_80 == 0)
		{
			fLocal_81 = { Global_21019[Global_21011 /*3*/] };
			fLocal_81 = fLocal_81 - 10f;
			fLocal_81.f_1 = fLocal_81.f_1 + 20f;
			iLocal_80 = 1;
		}
	
		num2 = func_15(Global_21012[Global_21011 /*3*/], fLocal_81, -90f, 0f, 90f, -90f, 0f, 90f, 450f, true);
	
		if (num2 >= 1f)
		{
			MISC::SET_BIT(&Global_8920, 8);
			MISC::SET_BIT(&Global_8919, 14);
			Global_21006 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8921, 2);
			iLocal_80 = 0;
		}
		else if (num2 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8920, 8);
		}
	}

	return;
}

void func_81() // Position - 0x5195 (20885)
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
		iLocal_87 = func_139();
		AUDIO::IS_MOBILE_PHONE_CALL_ONGOING();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_104 = NETWORK::GET_NETWORK_TIME();
		else
			iLocal_99 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_82() // Position - 0x51EB (20971)
{
	if (Global_21065 == 1)
	{
		func_155();
	
		if (Global_21044 == 0)
		{
			if (func_91(FRONTEND_CONTROL, Global_21036, 0))
			{
				if (IS_BIT_SET(Global_8920, 8))
				{
					if (Global_22472 == false)
					{
						func_52();
						Global_21044 = 1;
						Global_21065 = 3;
						Global_22474 = 1;
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
	
		if (Global_21044 == 0)
		{
			if (func_91(FRONTEND_CONTROL, Global_21035, 0))
			{
				if (IS_BIT_SET(Global_8920, 8))
				{
					func_44();
					Global_21044 = 1;
					Global_21065 = 2;
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				
					func_88();
					func_87();
				}
			}
		}
	}
	else
	{
		if (iLocal_97 == 0)
		{
			if (IS_BIT_SET(Global_8919, 27))
			{
				iLocal_97 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_21066.f_1 > 3)
				if (SYSTEM::TIMERB() > 1500)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
							if (Global_21009)
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							else if (!IS_BIT_SET(Global_8921, 5))
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
		
			if (!IS_BIT_SET(Global_8919, 27))
			{
				iLocal_97 = 0;
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	
		if (Global_21065 == 0)
		{
			if (Global_21044 == 0)
			{
				if (func_91(FRONTEND_CONTROL, Global_21034, 0) || Global_2750847 == 1 && !Global_78307)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (IS_BIT_SET(Global_8920, 8))
							{
								switch (Global_21066.f_1)
								{
									case 3:
										break;
								
									case 4:
										break;
								
									case 6:
										if (Global_21284 == false)
										{
											if (Global_21285 == true)
											{
												func_52();
												Global_21285 = false;
												func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_120();
												func_119();
												func_118(1);
												func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_21055, true);
											
												iLocal_16 = 0;
												Global_21066.f_1 = 3;
											}
										}
										break;
								
									case 5:
										Global_21066.f_1 = 3;
										break;
								
									case 7:
										IS_BIT_SET(Global_8919, 23) == true;
									
										if (Global_9544 - Global_9543 > Global_9545 && IS_BIT_SET(Global_8919, 23) == false)
										{
											if (IS_BIT_SET(Global_8920, 0))
											{
											}
											else
											{
												func_52();
												Global_9542 = 1;
												Global_21066.f_1 = 6;
											
												if (Global_79539)
													func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_4546299), -1082130432, -1082130432, -1082130432, -1082130432);
											
												Global_8922 = 99;
											
												if (Global_2750847 == 0)
													func_83();
											}
										}
										break;
								
									case 8:
										break;
								
									case 10:
										if (Global_8234 == 132)
										{
											if (Global_2746945.f_1 || IS_BIT_SET(Global_8920, 20))
											{
												func_52();
												func_112();
											}
										}
										else
										{
											func_52();
											func_112();
											Global_22474 = 1;
										}
										break;
								
									case 9:
										if (Global_22425 == 0)
											Global_21066.f_1 = 3;
										break;
								
									default:
										break;
								}
							
								if (Global_2750847 == 1)
								{
									iLocal_120 = 1;
									Global_2750847 = 0;
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

void func_83() // Position - 0x5522 (21794)
{
	var unk;

	if (Global_21049 == 1)
		return;

	if (Global_21066.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		if (Global_79539)
			return;
	
		SYSTEM::WAIT(0);
	}

	switch (Global_21066.f_1)
	{
		case 6:
			func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_118(Global_9541);
		
			if (Global_9541 == 1)
			{
				func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21070;
			}
			else
			{
				func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21071), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21071;
			}
		
			if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21286 == false)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else if (Global_79539)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else
			{
				if (Global_21285 == true)
					if (Global_21054)
						func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_21054)
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_8919, 17);
			}
		
			if (Global_79539)
			{
				Global_21046 = Global_21070;
			
				if (func_46() && IS_BIT_SET(Global_8921, 9))
					func_40(false);
			
				func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		
			if (IS_BIT_SET(Global_8919, 20))
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_21009)
					func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_21065 == 1)
			{
				func_141();
				func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300" /*CHAR_DEFAULT*/);
					func_38("CELL_217" /*INCOMING CALL*/);
					func_38("CELL_217" /*INCOMING CALL*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_86(Global_8234, Global_21066) == 0)
				{
					func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2201[Global_8234 /*29*/].f_3), 0);
				}
			
				func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22425 == 4 || Global_22425 == 3)
			{
				func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_141();
			
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300" /*CHAR_DEFAULT*/);
					func_38("CELL_219" /*CONNECTED*/);
					func_38("CELL_219" /*CONNECTED*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22683)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_86(Global_8234, Global_21066) == 0)
					{
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), &unk, &(Global_2201[Global_8234 /*29*/].f_3), 0);
					}
				}
			
				func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_84();
			break;
	
		default:
			break;
	}

	return;
}

void func_84() // Position - 0x5B29 (23337)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		func_85();
	
		if (Global_21065 == 1)
		{
			if (Global_21054)
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_22472)
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8919, 20))
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_21054)
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		
			if (IS_BIT_SET(Global_8919, 20))
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_21009)
					func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_85() // Position - 0x5CAA (23722)
{
	if (Global_79539)
	{
		func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}

	return;
}

int func_86(int iParam0, eCharacter echParam1) // Position - 0x5CDA (23770)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2201[iParam0 /*29*/].f_24[echParam1];
}

void func_87() // Position - 0x5D04 (23812)
{
	if (Global_22438)
	{
		if (Global_79539)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2739811.f_1863), 15);
				}
			}
		}
	}

	return;
}

void func_88() // Position - 0x5D53 (23891)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		if (!Global_22433)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		
			if (IS_BIT_SET(Global_8919, 20))
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_21009)
					func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_22438)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_38("CELL_300" /*CHAR_DEFAULT*/);
				func_38("CELL_219" /*CONNECTED*/);
				func_38("CELL_219" /*CONNECTED*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_86(Global_8234, Global_21066) == 0)
			{
				func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_219" /*CONNECTED*/, "CELL_195" /*Unknown*/, 0);
			}
			else
			{
				func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_219" /*CONNECTED*/, &(Global_2201[Global_8234 /*29*/].f_3), 0);
			}
		}
	
		func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_89() // Position - 0x5F00 (24320)
{
	Global_21291 = 0;
	func_90();
	return;
}

void func_90() // Position - 0x5F10 (24336)
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21065 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23436 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = Global_21068;
		return;
	}

	return;
}

BOOL func_91(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x5F47 (24391)
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

BOOL func_92() // Position - 0x5FB9 (24505)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
		return true;

	return false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x5FD6 (24534)
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

void func_94(int iParam0) // Position - 0x5FFE (24574)
{
	if (func_96())
		return;

	if (Global_21284)
		if (func_7())
			func_5(true, true);
		else
			func_5(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_95())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_95() // Position - 0x6088 (24712)
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

BOOL func_96() // Position - 0x60AF (24751)
{
	return IS_BIT_SET(Global_1957675, 19);
}

void func_97() // Position - 0x60BE (24766)
{
	if (Global_21066.f_1 == 9 || Global_21066.f_1 == 10)
	{
		Global_22478 = 0;
		Global_22474 = 1;
	}

	return;
}

void func_98() // Position - 0x60E7 (24807)
{
	int num;
	int num2;
	int pedPropIndex;

	num = 0;
	num2 = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (func_113() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			num2 = 1;

	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && num2 == 0)
		{
			pedPropIndex = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
		
			if (Global_79539)
				if (pedPropIndex == 15 || pedPropIndex == 16 || pedPropIndex == 17 || pedPropIndex == 18 || pedPropIndex == 19 || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					num = 1;
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				num = 1;
		
			if (!Global_21009)
			{
				if (Global_8234 != 128)
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
								if (Global_79539)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
							
								MISC::SET_BIT(&Global_8919, 11);
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

void func_99() // Position - 0x620B (25099)
{
	if (IS_BIT_SET(Global_8919, 14) && Global_4546302 == 0 && Global_21006 == 0)
	{
		if (func_104())
		{
		}
		else
		{
			func_100();
		}
	
		if (Global_21066.f_1 == 9)
			if (Global_22438 == false)
				bLocal_74 = true;
	}

	return;
}

void func_100() // Position - 0x6253 (25171)
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_21019[Global_21011 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_21006 = 1;
	}

	return;
}

void func_101() // Position - 0x627A (25210)
{
	if (IS_BIT_SET(Global_8919, 14) && Global_4546302 == 0 && Global_21006 == 0)
	{
		if (bLocal_74 == false)
		{
			if (IS_BIT_SET(Global_8920, 26))
			{
				MISC::CLEAR_BIT(&Global_8920, 24);
				MISC::CLEAR_BIT(&Global_8920, 25);
				MISC::CLEAR_BIT(&Global_8920, 27);
				MISC::CLEAR_BIT(&Global_8920, 26);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						func_100();
					else if (func_103() == false)
						func_100();
			}
		}
	
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		{
			if (func_103())
				func_102();
		}
		else if (func_104())
		{
		}
		else if (func_103())
		{
			func_102();
		}
	
		if (Global_21066.f_1 == 9)
			if (Global_22438 == false)
				bLocal_74 = true;
	}

	return;
}

void func_102() // Position - 0x6350 (25424)
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_21012[Global_21011 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_4546302 = 1;
	}

	return;
}

BOOL func_103() // Position - 0x6378 (25464)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
			if (Global_21009 == false)
				if (Global_8234 != 128)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						Global_22425 != 2;
	
		if (func_117(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254))
			return false;
	
		if (Global_113183)
			return false;
	}

	if (Global_79539)
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
			
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("seashark") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("seashark2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("submersible2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("toro"))
					num = 0;
			}
		}
	}

	if (Global_4546301 || num == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114135.f_14055.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

BOOL func_104() // Position - 0x65C1 (26049)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		return true;

	return false;
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, function funcParam4) // Position - 0x65DE (26078)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) > 0)
	{
		funcParam4(Global_8926[iParam0 /*15*/].f_4 != iParam3);
	
		if (StackVal && StackVal && !IS_BIT_SET(Global_8921, 9))
		{
			MISC::SET_BIT(&Global_8921, 9);
			Global_21046 = iParam3;
			Global_21070 = Global_21046;
		}
		else
		{
			funcParam4(Global_8926[iParam1 /*15*/].f_4 == iParam2);
		
			if (StackVal && !StackVal && IS_BIT_SET(Global_8921, 9))
			{
				MISC::CLEAR_BIT(&Global_8921, 9);
				Global_21046 = iParam2;
				Global_21070 = Global_21046;
			}
		}
	}

	return;
}

BOOL func_106() // Position - 0x6668 (26216)
{
	return func_107() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

BOOL func_107() // Position - 0x667E (26238)
{
	return _STAT_GET_PACKED_BOOL(9539, -1);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x668E (26254)
{
	if (iParam1 == -1)
		iParam1 = func_109();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_109() // Position - 0x66AA (26282)
{
	return Global_1574926;
}

void func_110() // Position - 0x66B6 (26294)
{
	if (!IS_BIT_SET(Global_4546023, 24))
		if (Global_21066.f_1 > 4)
			MISC::SET_BIT(&Global_4546023, 24);

	return;
}

BOOL func_111() // Position - 0x66DC (26332)
{
	if (Global_8926[23 /*15*/].f_4 != 5 && func_106() && !IS_BIT_SET(Global_8921, 9) || Global_8926[23 /*15*/].f_4 == 5 && !func_106())
		return true;

	return false;
}

void func_112() // Position - 0x6727 (26407)
{
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (IS_BIT_SET(Global_8919, 11))
			{
				if (!Global_21009)
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
			
				if (Global_79539)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
			
				MISC::CLEAR_BIT(&Global_8919, 11);
			}
		}
	}

	return;
}

BOOL func_113() // Position - 0x678E (26510)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;

	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		return true;

	return false;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x67B2 (26546)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_115() // Position - 0x67C9 (26569)
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_84);
	iLocal_84 == -1;
	return;
}

void func_116(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, char* sParam10, const char* sParam11) // Position - 0x67DD (26589)
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
		func_38(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_38(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_38(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_38(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_38(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_117(int iParam0) // Position - 0x6890 (26768)
{
	return Global_44181 == iParam0;
}

void func_118(int iParam0) // Position - 0x689E (26782)
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

	Global_23493 = 0;
	Global_9541 = iParam0;
	func_43();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_117(14))
		{
			while (num < 35)
			{
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9504[i] == false)
						{
							Global_9467[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value = 42;
									Global_21288 = 1;
								}
								else
								{
									value = 255;
									Global_21288 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696411)
								if (num == 14)
									func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
						
							Global_9504[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 35)
			{
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9504[i] == false)
						{
							Global_9467[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114135.f_14145[j /*104*/].f_24 != 0)
										if (Global_114135.f_14145[j /*104*/].f_28 == 0)
											if (Global_114135.f_14145[j /*104*/].f_99[Global_21066] == 1)
												Global_23493 = Global_23493 + 1;
								}
							
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23493), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79539)
								{
									value2 = 0;
									value2 = Global_4542452;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4542454[k /*296*/].f_24 != 0)
											if (Global_4542454[k /*296*/].f_28 == 0)
												if (Global_4542454[k /*296*/].f_291[Global_21066] == 1)
													value2 = value2 + 1;
									}
								
									func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21066)
									{
										case CHAR_MICHAEL:
											value3 = Global_45403;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45404;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45405;
											break;
									
										default:
											break;
									}
								
									func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8920, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value5 = 42;
									Global_21288 = 1;
								}
								else
								{
									value5 = 255;
									Global_21288 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 24 && MISC::ARE_STRINGS_EQUAL(&Global_8926[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[num /*15*/].f_10 == 57 && num == 24)
							{
								value6 = 0;
								value6 = Global_1882240.f_1;
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9504[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_119() // Position - 0x6E25 (28197)
{
	if (Global_79539 == false)
	{
		Global_8926[14 /*15*/].f_4 = -99;
		Global_8926[4 /*15*/].f_4 = -99;
	
		if (Global_2696411)
		{
			if (func_117(14))
			{
				func_42(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_42(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_42(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_42(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_120() // Position - 0x6EB3 (28339)
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 35; i = i + 1)
	{
		Global_8926[i /*15*/].f_4 = -99;
	}

	if (Global_79539 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_121(num2, Global_21066) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_42(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_42(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44181 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8924 == 0)
		{
			func_42(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 0;
			Global_8925 = 255;
		}
		else
		{
			func_42(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 1;
			Global_8925 = 42;
		}
	
		if (num == 1)
			func_42(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_42(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_42(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_42(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114135.f_14055.f_89 == true)
			func_42(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114135.f_14055.f_88 == 1)
			func_42(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_42(26, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_42(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_42(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_42(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (func_106())
			func_42(23, "CELL_HACKER_ROB" /*Darnell Inc.*/, 5, "appHackerDen", 62, 1, 1, 0, 0);
		else
			func_42(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
	
		func_42(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_42(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_42(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546023, 4))
			func_42(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_42(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_42(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_42(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_42(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_42(24, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_42(25, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_42(26, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_42(27, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_42(28, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_42(34, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4546023, 4))
			if (Global_1836180)
				func_42(24, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 20))
				func_42(24, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 22))
				func_42(24, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 26))
				if (func_156())
					func_42(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_42(24, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546023, 4) == false && Global_1836180 == false && IS_BIT_SET(Global_4546023, 20) == false && IS_BIT_SET(Global_4546023, 22) == false && IS_BIT_SET(Global_4546023, 26) == false)
			if (func_156())
				func_42(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_42(24, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

int func_121(int iParam0, eCharacter echParam1) // Position - 0x747D (29821)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2201[iParam0 /*29*/].f_19[echParam1];
}

BOOL func_122(int iParam0) // Position - 0x74A7 (29863)
{
	int num;

	iParam0 == 1;

	if (iParam0 == 0)
		if (func_125() == 0)
			return false;

	if (func_123(&num) && MISC::GET_PROFILE_SETTING(903) == 1)
		return true;

	if (!func_123(&num))
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

BOOL func_123(int* piParam0) // Position - 0x754A (30026)
{
	if (func_124())
	{
		*piParam0 = 11;
		return true;
	}

	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(piParam0);
}

BOOL func_124() // Position - 0x7568 (30056)
{
	return Global_33365;
}

int func_125() // Position - 0x7573 (30067)
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

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x75BB (30139)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_127() // Position - 0x75D1 (30161)
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

	if (bLocal_115 == true || func_128())
		iLocal_88 = 0;

	func_147(Global_21047, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_87), SYSTEM::TO_FLOAT(iLocal_88), -1082130432, -1082130432, -1082130432);
	return;
}

BOOL func_128() // Position - 0x76A1 (30369)
{
	eCharacter character;
	var entityCoords;
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (func_133(character))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			for (i = 0; i < Global_114135.f_7692.f_136; i = i + 1)
			{
				if (IS_BIT_SET(Global_114135.f_7692[i /*15*/].f_2, character))
					if (func_131(entityCoords, func_132(i)))
						return true;
			}
		
			for (i = 0; i < Global_114135.f_7692.f_764; i = i + 1)
			{
				if (IS_BIT_SET(Global_114135.f_7692.f_651[i /*14*/].f_2, character))
					if (func_131(entityCoords, func_130(i)))
						return true;
			}
		
			for (i = 0; i < Global_114135.f_7692.f_866; i = i + 1)
			{
				if (IS_BIT_SET(Global_114135.f_7692.f_765[i /*10*/].f_2, character))
					if (func_131(entityCoords, func_129(i)))
						return true;
			}
		}
	}

	return false;
}

int func_129(int iParam0) // Position - 0x77A1 (30625)
{
	return Global_114135.f_7692.f_765[iParam0 /*10*/].f_7;
}

int func_130(int iParam0) // Position - 0x77B9 (30649)
{
	return Global_114135.f_7692.f_651[iParam0 /*14*/].f_7;
}

BOOL func_131(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x77D1 (30673)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_44182)
			return false;
	
		if (SYSTEM::VDIST2(vParam0, Global_44182[iParam3 /*5*/]) <= Global_44182[iParam3 /*5*/].f_3 * Global_44182[iParam3 /*5*/].f_3)
			return true;
		else if (Global_44182[iParam3 /*5*/].f_4 != -1)
			return func_131(vParam0, Global_44182[iParam3 /*5*/].f_4);
	}

	return false;
}

int func_132(int iParam0) // Position - 0x783C (30780)
{
	return Global_114135.f_7692[iParam0 /*15*/].f_7;
}

BOOL func_133(eCharacter echParam0) // Position - 0x7851 (30801)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x785D (30813)
{
	func_135();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_135() // Position - 0x7876 (30838)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_133(character) && !func_117(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_133(Global_114135.f_2367.f_539.f_4321))
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
			
				Global_114135.f_2367.f_539.f_4323 = character;
				Global_114135.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114135.f_2367.f_539.f_4321 = 145;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x7973 (31091)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x79B0 (31152)
{
	if (func_133(character))
		return func_138(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_138(eCharacter echParam0) // Position - 0x79D5 (31189)
{
	return Global_2201[echParam0 /*29*/];
}

int func_139() // Position - 0x79E4 (31204)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	return Global_114135.f_14055[Global_21066 /*20*/].f_8;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x79FE (31230)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_141() // Position - 0x7A15 (31253)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066 == CHAR_MICHAEL)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
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
	
		if (Global_21066 == CHAR_FRANKLIN)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
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
	
		if (Global_21066 == CHAR_TREVOR)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
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
	
		if (Global_21066 == CHAR_MULTIPLAYER)
		{
			switch (Global_4546299)
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

int func_142(int iParam0, int iParam1) // Position - 0x7C8C (31884)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_143(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_143(int iParam0, int iParam1) // Position - 0x7CBB (31931)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_144(iParam1));
}

int func_144(int iParam0) // Position - 0x7CD0 (31952)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_109();
	
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

void func_145() // Position - 0x7D04 (32004)
{
	if (func_117(14))
	{
		if (Global_2696411)
		{
			if (Global_21066.f_1 == 6)
			{
				if (Global_21046 == 7)
				{
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_21046 = 6;
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_21066.f_1 == 6)
		{
			func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}

	iLocal_90 = CLOCK::GET_CLOCK_MINUTES();

	if (iLocal_90 != Global_8922)
	{
		Global_8922 = iLocal_90;
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
	
		func_116(Global_21047, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1f, -1f, -1f, &uLocal_92, 0, 0, 0, 0);
	
		if (Global_21009 == false)
			func_127();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}

	return;
}

void func_146() // Position - 0x7E84 (32388)
{
	if (Global_79539)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_21009)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_21066)
		{
			case CHAR_MICHAEL:
				TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		
			case CHAR_TREVOR:
				TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
		
			case CHAR_FRANKLIN:
				TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		}
	}

	Global_21029 = { -90f, -130f, 0f };

	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_21011 = 0;
		Global_21012[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f, -113f };
		Global_21019[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f, -113f };
	}
	else
	{
		Global_21011 = 0;
		Global_21012[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f, -91.5f };
		Global_21019[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f, -91.5f };
	}

	Global_20994 = { Global_21012[Global_21011 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21012[Global_21011 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21029, 0);
	Global_21006 = 1;
	return;
}

void func_147(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7FE9 (32745)
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

BOOL IS_XBOX_PLATFORM() // Position - 0x804F (32847)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_149() // Position - 0x8065 (32869)
{
	Global_2746945.f_1 = 0;
	Global_2746945 = 0;
	Global_2746945.f_2 = 0;
	Global_2746945.f_33 = -1;
	Global_2746945.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2746945.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2746945.f_39[0 /*16*/], "", 64);
	Global_2746945.f_38 = 0;
	Global_2746945.f_56 = 0;
	Global_2746945.f_57 = 0;
	Global_2746945.f_58 = -2;
	Global_2746945.f_3 = 0;
	func_150(&(Global_2746945.f_20));
	return;
}

void func_150(Any* panParam0) // Position - 0x80D8 (32984)
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

void func_151() // Position - 0x8120 (33056)
{
	Global_2746945.f_2 = 1;
	Global_2746945.f_38 = 1;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
		
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2746945 = 0;
			Global_2746945.f_2 = 0;
		}
		else if (IS_GAMER_HANDLE_VALID(Global_2746945.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2746945.f_20)))
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2746945.f_20)))
					func_149();
		}
		else
		{
			func_149();
		}
	}
	else
	{
		func_149();
	}

	if (Global_2746945.f_37)
		func_94(0);

	Global_2746945.f_37 = 0;
	Global_2746945.f_3 = 0;
	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x81C0 (33216)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_153() // Position - 0x81D0 (33232)
{
	Global_21291 = 0;
	func_10();
	return;
}

void func_154(int iParam0, char* sParam1) // Position - 0x81E0 (33248)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_155() // Position - 0x81F5 (33269)
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21035);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21035);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21036);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	}

	if (Global_79539)
		Global_114135.f_14055[3 /*20*/].f_10 = func_142(1198, -1);

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
	else if (Global_114135.f_14055[Global_21066 /*20*/].f_10 == 1)
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
			if (Global_79539)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&Global_9741[3 /*2811*/][1 /*281*/].f_144[func_142(1199, -1) /*6*/], "Silent Ringtone Dummy"))
					AUDIO::PLAY_PED_RINGTONE(&Global_9741[3 /*2811*/][1 /*281*/].f_144[func_142(1199, -1) /*6*/], PLAYER::PLAYER_PED_ID(), true);
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_114135.f_14055[Global_21066 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!(Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 1))
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_114135.f_14055[Global_21066 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_114135.f_14055[Global_21066 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}

	return;
}

BOOL func_156() // Position - 0x83CB (33739)
{
	if (Global_79539)
		if (Global_1836586 || Global_1836587 == 1)
			return true;

	return false;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x83F2 (33778)
{
	if (func_117(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
				Global_21066 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
				Global_21066 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
				Global_21066 = CHAR_TREVOR;
			else
				Global_21066 = CHAR_MICHAEL;
	}
	else
	{
		Global_21066 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21066 == _CHAR_NULL)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_79539)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_21066 > CHAR_MULTIPLAYER)
			Global_21066 = CHAR_MULTIPLAYER;
	}

	return;
}


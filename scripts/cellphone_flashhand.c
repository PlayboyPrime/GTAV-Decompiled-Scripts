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
	Global_21441 = 145;
	MISC::CLEAR_BIT(&Global_9076, 8);
	MISC::CLEAR_BIT(&Global_9075, 14);
	MISC::CLEAR_BIT(&Global_4546610, 3);
	MISC::CLEAR_BIT(&Global_9076, 10);
	MISC::CLEAR_BIT(&Global_9075, 17);
	MISC::CLEAR_BIT(&Global_9075, 9);
	MISC::CLEAR_BIT(&Global_9075, 26);
	MISC::CLEAR_BIT(&Global_9075, 23);
	MISC::CLEAR_BIT(&Global_9076, 24);
	MISC::CLEAR_BIT(&Global_9076, 25);
	MISC::CLEAR_BIT(&Global_9076, 27);
	MISC::CLEAR_BIT(&Global_9076, 26);
	MISC::CLEAR_BIT(&Global_9075, 30);
	Global_2751110 = 0;
	iLocal_120 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_21188 = 0;
	bLocal_72 = false;
	Global_21166 = 0;
	Global_21206 = 0;
	Global_21207 = 0;
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_21153 = { Global_21185 };
	Global_21226 = 4;
	Global_21227 = 0;
	Global_9697 = 1;
	Global_21202 = Global_21226;

	if (Global_21204 == false)
	{
		Global_21205 = 0;
	
		if (Global_79744)
		{
			if (func_159())
				Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			else
				Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
		
			iLocal_86 = 1;
			iLocal_86 == 1;
		}
		else if (Global_21165)
		{
			Global_21210 = true;
			Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&Global_114344.f_14055[Global_21222 /*20*/]);
		}
	
		BUILTIN::SETTIMERA(0);
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203) && Global_21205 == 0)
		{
			BUILTIN::WAIT(0);
		
			if (BUILTIN::TIMERA() > 20000)
				Global_21205 = 1;
		
			if (MISC::IS_PC_VERSION())
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
					if (BUILTIN::TIMERA() > 2000)
						Global_21205 = 1;
		
			if (Global_21221 == 1)
				func_158();
		}
	
		if (Global_21205 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
				func_157(Global_21203, "SHUTDOWN_MOVIE");
		
			BUILTIN::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21203);
			Global_21163 = 0;
			Global_21204 = false;
			Global_21442 = 0;
		
			if (Global_114344.f_14055.f_84 == 1)
			{
				Global_114344.f_14055.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
		
			Global_21166 = 1;
			Global_21222.f_1 = 3;
			func_156();
			Global_21210 = false;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_9075, 9);
			MISC::CLEAR_BIT(&Global_9075, 27);
			MISC::CLEAR_BIT(&Global_9075, 30);
			MISC::CLEAR_BIT(&Global_9076, 5);
			MISC::CLEAR_BIT(&Global_9076, 21);
			MISC::CLEAR_BIT(&Global_9077, 2);
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			Global_21444 = false;
			Global_23645 = 0;
			Global_23644 = 0;
			Global_22598 = false;
			func_154();
			func_152();
			Global_4546889 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		Global_21146 = 0.1f;
		Global_21147 = 0.38f;
		Global_21148 = 0.195f;
		Global_21149 = 0.05f;
	
		if (MISC::IS_XBOX360_VERSION() || func_151() || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 2f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 1f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 3f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 2f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 1f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 3f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
			}
		
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 2f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 1f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 3f, BUILTIN::TO_FLOAT(iLocal_106), BUILTIN::TO_FLOAT(iLocal_107), BUILTIN::TO_FLOAT(iLocal_108), -1082130432);
			}
		}
	
		Global_21205 == 0;
		func_149();
	
		if (Global_79744)
			TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Michael", 24);
	
		Global_21204 = true;
	}

	Global_9078 = 99;
	func_148();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	if (HUD::IS_RADAR_HIDDEN())
		Global_23599 = 1;
	else
		Global_23599 = 0;

	func_150(Global_21203, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_21164 = 1;

	if (Global_79744)
	{
		Global_21446 = false;
	
		if (func_159())
			if (Global_1836591 == 1)
				Global_4546886 = 4;
			else
				Global_4546886 = 2;
		else
			Global_4546886 = func_145(2030, -1);
	
		if (Global_4546886 < 1 || Global_4546886 > 7)
			Global_4546886 = 1;
	
		func_150(Global_21203, "SET_THEME", BUILTIN::TO_FLOAT(Global_4546886), -1082130432, -1082130432, -1082130432, -1082130432);
		func_144();
	
		if (func_159())
			if (Global_1836591 == 1)
				Global_4546887 = 16;
			else
				Global_4546887 = 9;
		else
			Global_4546887 = func_145(2029, -1);
	
		if (Global_4546887 == 0)
		{
			gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			num = 0;
			NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false;
			Global_4546890 == 1;
		
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4546890 == 0)
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
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&txdName);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_150(Global_21203, "SET_BACKGROUND_IMAGE", BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_150(Global_21203, "SET_BACKGROUND_IMAGE", BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_150(Global_21203, "SET_BACKGROUND_IMAGE", BUILTIN::TO_FLOAT(Global_4546887), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_21165)
			Global_21446 = false;
		else if (Global_114344.f_14055.f_88 == 1 || Global_114344.f_14055.f_89 == true)
			Global_21446 = false;
		else
			Global_21446 = false;
	
		func_150(Global_21203, "SET_THEME", BUILTIN::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_9896 == 0)
			func_150(Global_21203, "SET_BACKGROUND_IMAGE", BUILTIN::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
	
		func_144();
	}

	iLocal_87 = func_142();

	if (Global_21165 == false)
		func_130();

	Global_21200 = 0;
	Global_21445 = false;
	MISC::CLEAR_BIT(&Global_9075, 9);
	Global_2696533 = false;

	if (func_124(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
		Global_2696533 = true;

	func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_122();
	func_121();
	func_120(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_21211, true);
	BUILTIN::SETTIMERB(0);

	while (Global_21222.f_1 < 6 && Global_21205 == 0)
	{
		BUILTIN::WAIT(0);
	
		if (BUILTIN::TIMERB() > 10000)
			Global_21205 = 1;
	
		if (Global_21222.f_1 < 4)
			Global_21205 = 1;
	}

	if (Global_21222.f_1 == 5 || Global_21222.f_1 == 6)
	{
		if (func_119(14))
			func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		else
			func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
	
		if (Global_9897[Global_21222 /*2811*/][0 /*281*/].f_259 == 2)
			func_150(Global_21203, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		else
			func_150(Global_21203, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_21210)
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		else
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_21210)
			func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
		else
			func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_21446 == false)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		}
		else if (Global_79744)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		}
		else
		{
			if (Global_21445 == true)
				if (Global_21210)
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_21210)
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		
			MISC::SET_BIT(&Global_9075, 17);
		}
	}

	Global_21208 = 1;
	func_117();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_104 = NETWORK::GET_NETWORK_TIME();
	else
		iLocal_99 = MISC::GET_GAME_TIMER();

	if (Global_21442 == 1)
	{
		if (Global_9897[Global_21222 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_114344.f_14055.f_84 == 0)
			{
				Global_114344.f_14055.f_84 = 1;
			
				if (Global_21167 == 0)
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

	if (Global_79744 == false)
		iLocal_16 = MISC::GET_GAME_TIMER() + 375;

	if (func_115())
		iLocal_78 = 1;
	else
		iLocal_78 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_79 = 1;
		
			if (func_115())
				func_114();
		}
		else
		{
			iLocal_79 = 0;
		}
	}

	if (MISC::IS_PC_VERSION())
	{
		if (Global_79744 == false)
		{
			iLocal_101 = MISC::GET_GAME_TIMER();
			iLocal_103 = 0;
		}
	}

	MISC::CLEAR_BIT(&Global_9077, 9);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (IS_BIT_SET(Global_4546610, 24))
		{
			if (!Global_21445)
			{
				if (Global_21222.f_1 >= 6)
				{
					MISC::CLEAR_BIT(&Global_4546610, 24);
					func_122();
					func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_120(1);
				
					if (Global_21222.f_1 == 6)
					{
						if (IS_BIT_SET(Global_9077, 9))
						{
							MISC::CLEAR_BIT(&Global_9077, 9);
							Global_21202 = 4;
							Global_21226 = Global_21202;
						}
					
						func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
	
		if (Global_79744)
			if (Global_21222.f_1 == 6)
				if (func_113())
					func_112();
			else if (Global_21222.f_1 == 7)
				func_107(10, 23, 5, 0, 26362);
	
		if (func_106())
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	
		if (Global_79744 == false)
		{
			if (bLocal_74)
				if (Global_21222.f_1 == 6 || Global_21222.f_1 == 7)
					bLocal_74 = false;
		
			if (Global_21222.f_1 > 4)
			{
				if (IS_BIT_SET(Global_9075, 14) && Global_4546889 == 0 && Global_21162 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_105())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_75);
						
							if (Global_21168[Global_21167 /*3*/].f_1 != uLocal_75.f_1)
								func_103();
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_75);
						
							if (Global_21175[Global_21167 /*3*/].f_1 != uLocal_75.f_1)
							{
								!func_106();
							
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
									func_101();
							}
						}
					
						if (iLocal_79 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_79 = 1;
								func_101();
								func_114();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_79 = 0;
							func_103();
						
							if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
								if (Global_22585 != 2)
									func_100();
						}
					
						if (iLocal_78 == 0)
						{
							if (func_115())
							{
								iLocal_78 = 1;
							
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
									func_114();
							
								func_103();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
								if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
						
							if (func_115() == false)
							{
								iLocal_78 = 0;
								func_101();
							}
						}
					}
				}
			}
		}
	
		if (Global_2696533 == true)
		{
			if (!func_124(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (Global_21222.f_1 > 3)
					{
						Global_21207 = 1;
						func_99();
						func_96(0);
						Global_2696533 = false;
					}
				}
			}
		}
	
		if (Global_21447 == 0)
		{
			if (Global_44375 != 15 || Global_9080 == 1 || func_95(false))
			{
				if (!Global_21445)
				{
					if (Global_21222.f_1 == 6)
					{
						Global_9081 = 42;
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_122();
						func_121();
						func_120(1);
						func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21447 = 1;
			}
		}
		else if (Global_44375 == 15 && func_95(false) == false && Global_9080 == 0)
		{
			if (!Global_21445)
			{
				if (Global_21222.f_1 == 6)
				{
					Global_9081 = 255;
					func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_122();
					func_121();
					func_120(1);
					func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21447 = 0;
		}
	
		if (Global_21448 == 0)
		{
			if (IS_BIT_SET(Global_9076, 3))
			{
				if (!Global_21445 && !IS_BIT_SET(Global_9077, 9))
				{
					if (Global_21222.f_1 == 6)
					{
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_122();
						func_121();
						func_120(1);
						func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21448 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_9076, 3))
		{
			if (!Global_21445 && !IS_BIT_SET(Global_9077, 9))
			{
				if (Global_21222.f_1 == 6)
				{
					func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_122();
					func_121();
					func_120(1);
					func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21448 = 0;
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_21150.f_1 != Global_21168[Global_21167 /*3*/].f_1 || func_115())
			{
				if (Global_21222.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) == 0)
						if (Global_79744)
							if (Global_21222.f_1 == 9)
								if (Global_22638 == 1 || IS_BIT_SET(Global_9076, 23))
									PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21191);
							else
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21191);
						else
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21191);
				
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21192);
					
						if (IS_BIT_SET(Global_9075, 17))
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21193);
					}
				
					if (!func_94() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21194);
				}
			}
		
			Global_21150.f_1 == Global_21168[Global_21167 /*3*/].f_1;
		}
	
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_76838)
			{
				if (!func_106())
				{
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
				}
			
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21196);
			
				if (!func_94())
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21197);
			
				if (Global_21222.f_1 > 4)
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21199);
			}
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21190, 0))
		{
			bLocal_96 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (iLocal_73 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21191))
			{
				Global_9079 = 1;
				iLocal_73 = 0;
			}
		
			if (!(Global_21222.f_1 > 3))
				iLocal_73 = 0;
		}
	
		if (bLocal_96)
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21190))
			{
				if (BUILTIN::TIMERA() > 5000)
				{
					Global_21222.f_1 = 3;
					func_91();
				}
			}
			else
			{
				bLocal_96 = false;
			}
		}
	
		Global_9700 = MISC::GET_GAME_TIMER();
	
		if (Global_21209)
		{
			func_117();
			Global_21208 = 1;
			Global_21209 = false;
		}
	
		if (Global_21444 == false)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
			func_84();
			func_83();
			HUD::SET_TEXT_RENDER_ID(iLocal_84);
		
			if (Global_21208 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			
				if (Global_21165)
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21203, Global_21142, Global_21143, Global_21144, Global_21145, 255, 255, 255, 255, 0);
				else
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21203, Global_21142, Global_21143, Global_21144, Global_21145, 255, 255, 255, 255, 0);
			
				func_148();
			}
		
			if (Global_21162 == 1)
			{
				if (Global_21222.f_1 > 3)
					func_82();
			}
			else if (Global_21222.f_1 > 3)
			{
				if (Global_4546889 == 1)
					func_81();
			
				if (IS_BIT_SET(Global_9076, 25))
				{
					if (Global_79744 == true)
						func_80();
				}
				else if (!IS_BIT_SET(Global_9076, 24))
				{
					if (IS_BIT_SET(Global_9076, 26))
					{
						if (func_93(FRONTEND_CONTROL, Global_21189, 0))
						{
							MISC::SET_BIT(&Global_9076, 25);
							MISC::CLEAR_BIT(&Global_9076, 26);
							MISC::CLEAR_BIT(&Global_9077, 2);
						}
					}
				}
				else if (Global_79744 == true)
				{
					func_79();
				}
			}
		}
	
		if (bLocal_72)
		{
			if (Global_21222.f_1 == 6)
				func_51();
		}
		else if (!IS_BIT_SET(Global_9075, 23) && !Global_78513)
		{
			if (Global_21222.f_1 == 5 || Global_21222.f_1 == 6)
			{
				if (Global_21444 == false)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
					{
						if (Global_21165 == false)
							if (IS_BIT_SET(Global_9075, 14))
								if (!Global_79744)
									if (iLocal_73 == 0)
										if (!func_119(14))
											func_50();
										else if (Global_2696533)
											func_49();
								else if (IS_BIT_SET(Global_9077, 9))
									func_47();
								else
									func_24();
					
						if (IS_BIT_SET(Global_9075, 9))
						{
							func_22(0, 0, 1, true);
						}
						else if (Global_23644 == 0)
						{
							if (!IS_BIT_SET(Global_4546610, 3))
							{
								if (Global_79744)
									func_21();
							
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_79744)
								func_21();
						
							if (!IS_BIT_SET(Global_4546610, 3))
							{
								if (Global_23644 == 1)
								{
									if (IS_BIT_SET(Global_4546610, 1))
									{
										if (IS_BIT_SET(Global_9075, 14))
										{
											if (Global_79744)
												func_22(7, 0, 1, false);
											else
												Global_23645 = 0;
										
											Global_23644 = 0;
											MISC::CLEAR_BIT(&Global_4546610, 1);
										}
									}
									else if (IS_BIT_SET(Global_9075, 14))
									{
										func_22(7, 0, 1, false);
										Global_23644 = 0;
									}
								}
								else
								{
									if (Global_23644 == 3)
									{
										func_22(1, 0, 1, false);
										Global_23644 = 0;
									}
								
									if (Global_23644 == 2)
									{
										func_22(14, 0, 1, false);
										Global_23644 = 0;
									}
								
									if (Global_23644 == 4)
									{
										func_22(24, 0, 1, false);
										Global_23644 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_9082[Global_21225 /*15*/].f_5)))
		{
			if (Global_21225 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[Global_21225 /*15*/].f_9) == 0)
					Global_21220 = BUILTIN::START_NEW_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5), CONTACTS_APP);
			}
			else
			{
				num4 = 0;
			
				if (Global_21225 == 24)
					IS_BIT_SET(Global_4546610, 4) == false && Global_1836183 == false;
			
				if (Global_21225 == 2 || num4 == 1)
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[Global_21225 /*15*/].f_9) == 0)
						Global_21220 = BUILTIN::START_NEW_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5), APP_INTERNET);
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[Global_21225 /*15*/].f_9) == 0)
					Global_21220 = BUILTIN::START_NEW_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5), 2600);
			}
		
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9082[Global_21225 /*15*/].f_5));
			Global_9078 = 99;
			MISC::CLEAR_BIT(&Global_9075, 23);
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (Global_21222.f_1 == 1)
			func_9();
	
		if (Global_21222.f_1 == 0)
			func_9();
	
		if (Global_21222.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_22598)
			{
				if (Global_21222.f_1 == 9)
				{
					if (Global_79744)
					{
						if (!IS_BIT_SET(Global_9076, 31))
						{
							if (!IS_BIT_SET(Global_9076, 27))
							{
								if (func_8())
								{
									if (!IS_BIT_SET(Global_9075, 9))
									{
										if (func_93(FRONTEND_CONTROL, Global_21194, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!(Global_21221 == 1))
												{
													if (Global_21222.f_1 > 6)
													{
														MISC::SET_BIT(&Global_9076, 24);
														MISC::SET_BIT(&Global_9076, 27);
														MISC::CLEAR_BIT(&Global_9076, 26);
														MISC::CLEAR_BIT(&Global_9076, 25);
														MISC::SET_BIT(&(Global_2740054.f_1864), 17);
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
		
			if (Global_21205 == 1)
			{
				Global_21207 = 1;
				func_96(0);
			}
		
			if (Global_21206 == 1)
			{
				Global_21207 = 1;
				func_96(0);
			}
		
			if (Global_79744)
			{
				if (!IS_BIT_SET(Global_9077, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2747205.f_1 == true)
						{
						}
						else
						{
							func_99();
							func_96(0);
						}
					}
				}
			}
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
						MISC::SET_BIT(&Global_9076, 4);
				
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (IS_BIT_SET(Global_4718592.f_38, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922251)
						{
							func_5(true, true);
							MISC::SET_BIT(&Global_9075, 14);
						}
						else
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
				}
			
				if (func_119(14))
					if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[1 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[2 /*29*/])
						bLocal_121 = false;
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						bLocal_121 = true;
			
				if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0 || Global_80006 == 1 || func_3(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || GRAPHICS::GET_USINGNIGHTVISION() || bLocal_121)
					if (!Global_21165)
						MISC::SET_BIT(&Global_9076, 4);
			
				if (MISC::IS_PC_VERSION())
				{
					if (Global_79744 == false)
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
								MISC::SET_BIT(&Global_9076, 4);
							else
								iLocal_103 = 0;
						}
					}
				}
			
				if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				{
					if (Global_79744)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
					
						if (iLocal_111 != joaat("WEAPON_UNARMED") && Global_21222.f_1 < 7)
							MISC::SET_BIT(&Global_9076, 4);
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
						MISC::SET_BIT(&Global_9076, 4);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("technical") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("limo2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent3") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("halftrack") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("dune3") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trailersmall2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("technical2") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("boxville5") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("mogul") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("bombushka") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("tula") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_112))
						{
							seatIndex = func_2(PLAYER::PLAYER_PED_ID(), veLocal_112);
						
							if (seatIndex != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("limo2"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trash2"))
									if (seatIndex == 2 || seatIndex == 1)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("technical2"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("boxville5"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("insurgent3"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("halftrack"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("dune3"))
									if (seatIndex == 0)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("trailersmall2"))
									if (seatIndex == -1)
										MISC::SET_BIT(&Global_9076, 4);
							
								if (VEHICLE::IS_TURRET_SEAT(veLocal_112, seatIndex))
									MISC::SET_BIT(&Global_9076, 4);
							}
						}
					}
				
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK))
					{
						if (Global_79744 == false)
						{
							if (Global_21222.f_1 == 6 || Global_21222.f_1 == 7)
							{
								flag = true;
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(veLocal_112))
									flag = false;
							
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(veLocal_112)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veLocal_112)) || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(veLocal_112) == joaat("submersible2"))
									flag = false;
							
								if (flag)
									func_96(0);
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_ATTACK))
						if (Global_79744 == false)
							if (Global_21222.f_1 == 6 || Global_21222.f_1 == 7)
								func_96(0);
				
					bLocal_115 = false;
				}
			
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (IS_BIT_SET(Global_4718592.f_38, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922251)
					{
						func_5(true, true);
					}
					else
					{
						Global_21207 = 1;
						func_99();
						func_96(0);
					}
				}
			
				if (Global_79744 == false)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
				
					if (Global_21222.f_1 == 9 || Global_21222.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
				}
				else if (func_106())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
				}
			
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_106())
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
									Global_21207 = 1;
									func_99();
									func_96(0);
								}
							}
						}
					}
				}
			
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
			
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
			
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79744 == false)
					{
						Global_21207 = 1;
						func_99();
						func_96(0);
					}
				}
			}
			else
			{
				num5 = 0;
			
				if (Global_79744 && Global_2747205.f_1 && Global_2747205.f_37 && Global_21222.f_1 == 9)
				{
					num5 = 1;
				
					if (!IS_BIT_SET(Global_9076, 24))
					{
						if (IS_BIT_SET(Global_9076, 26))
						{
							MISC::SET_BIT(&Global_9076, 25);
							MISC::CLEAR_BIT(&Global_9076, 26);
							MISC::CLEAR_BIT(&Global_9077, 2);
						}
					}
				}
			
				if (num5 == 0)
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
			}
		}
	
		if (Global_21200 == 1)
			func_1();
	
		if (Global_21221 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21191);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21192);
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
	if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21191) && !PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_21190))
		Global_21200 = 0;

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
		if (!(Global_45376[i /*5*/] == -1))
			if (pedParam0 == Global_45376[i /*5*/].f_1)
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
			Global_21444 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21159);
		
			Global_21150 = { Global_21168[Global_21167 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
		}
	}
	else if (Global_21444 == true)
	{
		Global_21444 = false;
		Global_21150 = { Global_21175[Global_21167 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21159);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
	}

	return;
}

BOOL func_6(int iParam0) // Position - 0x2108 (8456)
{
	if (iParam0 == 1)
		if (Global_21222.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21222.f_1 > 3)
		return true;

	return false;
}

BOOL func_7() // Position - 0x215F (8543)
{
	return IS_BIT_SET(Global_1959772, 5);
}

BOOL func_8() // Position - 0x216D (8557)
{
	return Global_2747205.f_1;
}

void func_9() // Position - 0x217B (8571)
{
	float num;
	var unk;
	float num2;

	Global_23644 = 0;
	Global_23645 = 0;
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21192);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);

	if (Global_21188 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
	
		if (func_105())
			iLocal_16 = MISC::GET_GAME_TIMER();
		else
			iLocal_16 = 0;
	
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_21188 = 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (Global_114344.f_14055.f_84 == 1)
	{
		Global_114344.f_14055.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}

	num = 350f;

	if (IS_BIT_SET(Global_9075, 30) || IS_BIT_SET(Global_9077, 2))
		num = 25f;

	unk = { Global_21182 };

	if (Global_21207 == 1)
		unk = { -45f, 45f, 25f };

	if (IS_BIT_SET(Global_9076, 26) || IS_BIT_SET(Global_9075, 30) || IS_BIT_SET(Global_9077, 2))
		uLocal_117 = { Global_21168[Global_21167 /*3*/] };
	else
		uLocal_117 = { Global_21175[Global_21167 /*3*/] };

	num2 = func_15(uLocal_117, Global_21168[Global_21167 /*3*/], Global_21182, unk, num, false);

	if (!bLocal_85 && num2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		bLocal_85 = true;
	}

	if (bLocal_85 && MISC::GET_GAME_TIMER() - iLocal_16 > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21192);
		Global_21222.f_1 == 3;
		Global_21222.f_1 == 1;
		Global_21222.f_1 == 0;
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_21163 = 0;
		Global_21204 = false;
		Global_21442 = 0;
	
		if (Global_114344.f_14055.f_84 == 1)
		{
			Global_114344.f_14055.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
	
		Global_21166 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	
		Global_23599 == 0;
		Global_21444 = false;
	
		if (func_12(0))
			func_11();
	
		MISC::CLEAR_BIT(&Global_9076, 8);
		MISC::CLEAR_BIT(&Global_9075, 14);
		MISC::CLEAR_BIT(&Global_9075, 9);
		MISC::CLEAR_BIT(&Global_9075, 27);
		MISC::CLEAR_BIT(&Global_9075, 30);
		MISC::CLEAR_BIT(&Global_9076, 5);
		MISC::CLEAR_BIT(&Global_9076, 19);
		MISC::CLEAR_BIT(&Global_9076, 21);
		MISC::CLEAR_BIT(&Global_9076, 24);
		MISC::CLEAR_BIT(&Global_9076, 25);
		MISC::CLEAR_BIT(&Global_9076, 27);
		MISC::CLEAR_BIT(&Global_9076, 26);
		MISC::CLEAR_BIT(&Global_9077, 2);
		Global_2751110 = 0;
		iLocal_120 = 0;
	
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_10();
	
		BUILTIN::SETTIMERA(0);
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[2 /*15*/].f_9) == 0 && !Global_78513)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_21220))
			{
				BUILTIN::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21192);
			
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_84);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21203, Global_21142, Global_21143, Global_21144, Global_21145, 255, 255, 255, 255, 0);
				}
			
				if (BUILTIN::TIMERA() > 5000)
					SCRIPT::TERMINATE_THREAD(Global_21220);
			}
		}
	
		Global_21210 = false;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
			func_157(Global_21203, "SHUTDOWN_MOVIE");
	
		BUILTIN::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21203);
		Global_21188 = 0;
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21192);
	
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (Global_2747205.f_1)
				if (Global_79744)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				else
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21211, true);
	
		func_154();
		func_152();
		Global_22598 = false;
		Global_4546889 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_10() // Position - 0x24FF (9471)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23596 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21222.f_1 == 9 || Global_21221 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22585 = 6;
		Global_21222.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22585 = 6;
		return;
	}

	return;
}

void func_11() // Position - 0x2556 (9558)
{
	if (Global_9897[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9897[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9897[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9897[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9897[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9897[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_9075, 25);
	MISC::SET_BIT(&Global_9076, 11);
	return;
}

BOOL func_12(int iParam0) // Position - 0x25D3 (9683)
{
	if (Global_44375 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x25F5 (9717)
{
	return func_14(iParam0, Global_44375);
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

	if (Global_4546889 == 0)
	{
		if (IS_BIT_SET(Global_9075, 14) && Global_21222.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&position);
		
			if (Global_21175[Global_21167 /*3*/].f_1 == position.f_1)
				Global_4546889 = 1;
		}
	}

	if (func_105() && Global_4546889 == 0)
		return 2f;

	if (iLocal_16 == 0)
		iLocal_16 = MISC::GET_GAME_TIMER();

	num = func_17(BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER() - iLocal_16) / fParam12, 0f, 1f);

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
			num2 = BUILTIN::SIN(num * 90f);
		}
	
		Global_21150 = { func_16(uParam0, uParam3, num2) };
		Global_21153 = { func_16(fParam6, fParam9, num2) };
	}
	else
	{
		Global_21150 = { uParam3 };
		Global_21153 = { fParam9 };
	}

	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21153, 0);
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
	if (Global_21200 == 0)
	{
		if (func_93(FRONTEND_CONTROL, Global_21194, 0))
		{
			if (Global_79744 == false)
			{
				if (Global_21446)
				{
					if (Global_21445 == false)
					{
						Global_21445 = true;
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(2);
						func_19();
						func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21227), -1082130432, -1082130432, -1082130432);
						Global_21202 = Global_21227;
					}
					else
					{
						Global_21445 = false;
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(1);
						func_19();
						func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
						Global_21202 = Global_21226;
					}
				}
			}
		}
	}

	return;
}

void func_19() // Position - 0x2A10 (10768)
{
	if (Global_21446 == false)
	{
		func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9075, 17);
	}
	else if (Global_79744)
	{
		func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9075, 17);
	}
	else
	{
		if (Global_21445 == true)
			if (Global_21210)
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
		else if (Global_21210)
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
		else
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
	
		MISC::SET_BIT(&Global_9075, 17);
	}

	return;
}

void func_20() // Position - 0x2AE9 (10985)
{
	if (IS_BIT_SET(Global_9076, 10) || iLocal_120 == 1)
	{
		Global_9699 = MISC::GET_GAME_TIMER();
		Global_9698 = 0;
		Global_21200 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "GET_CURRENT_SELECTION");
		iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		bLocal_72 = true;
	}
	else if (Global_21200 == 0)
	{
		if (func_93(FRONTEND_CONTROL, Global_21191, 0))
		{
			if (iLocal_73 == 0)
			{
				Global_9699 = MISC::GET_GAME_TIMER();
				Global_9698 = 0;
				Global_21200 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "GET_CURRENT_SELECTION");
				iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				bLocal_72 = true;
			}
		}
	}

	return;
}

void func_21() // Position - 0x2B68 (11112)
{
	if (Global_21200 == 0)
	{
		if (func_93(FRONTEND_CONTROL, Global_21189, 1))
		{
			if (func_145(2092, -1) == 1)
			{
				if (Global_114344.f_14055[Global_21222 /*20*/].f_17 == 0)
				{
					if (!IS_BIT_SET(Global_9076, 3))
					{
						if (!Global_21165)
						{
							if (!IS_BIT_SET(Global_4546610, 3))
							{
								if (!IS_BIT_SET(Global_9075, 14))
								{
									Global_21200 = 1;
									MISC::SET_BIT(&Global_4546610, 3);
									func_22(3, 0, 1, false);
									Global_23644 = 0;
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

	if (Global_79744 == false)
	{
		if (func_119(14))
		{
			if (Global_23644 == 2 || Global_23644 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (Global_21222.f_1 == 9)
		return 0;

	if (iParam2 == 0)
		if (func_6(0) == true)
			return 0;

	if (Global_21188 == 1)
		return 0;

	if (Global_21222.f_1 == 7)
		return 0;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21219))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21222.f_1 < 4)
			{
				func_23("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					Global_21219 = BUILTIN::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_21204)
	{
		BUILTIN::WAIT(0);
	}

	func_122();
	func_121();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) == 0)
	{
		Global_9698 = 0;
		Global_21222.f_1 = 7;
		func_23(&(Global_9082[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) == 0)
				Global_21220 = BUILTIN::START_NEW_SCRIPT(&(Global_9082[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) == 0)
			Global_21220 = BUILTIN::START_NEW_SCRIPT(&(Global_9082[iParam0 /*15*/].f_5), 2600);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9082[iParam0 /*15*/].f_5));
		return 1;
	}

	return 1;
}

void func_23(char* sParam0) // Position - 0x2D45 (11589)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		BUILTIN::WAIT(0);
	}

	return;
}

void func_24() // Position - 0x2D65 (11621)
{
	if (func_46())
	{
		if (Global_21202 == 2 || Global_21202 == 5 || Global_21202 == 8 && func_93(FRONTEND_CONTROL, Global_21197, 0))
		{
			Global_21202 = 0;
			func_44();
			func_39();
			return;
		}
	}

	if (Global_21201)
		if (BUILTIN::TIMERA() > 50)
			Global_21201 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		func_35();

	if (Global_21201 == false)
	{
		if (func_93(FRONTEND_CONTROL, Global_21197, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 2:
					if (Global_9660[0] == true)
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21202 = 1;
						Global_21449 = true;
					}
					break;
			
				case 5:
					Global_21202 = 3;
					break;
			
				case 6:
					Global_21202 = 7;
					break;
			
				case 7:
					if (Global_9660[Global_21202 + 1] == true)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 6;
						Global_21449 = true;
					}
					break;
			
				case 8:
					Global_21202 = 6;
					break;
			
				default:
					Global_21202 = Global_21202 + 1;
					break;
			}
		
			if (Global_21449 == true)
				func_33();
			else
				func_31();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21196, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
					Global_21202 = 2;
					break;
			
				case 1:
					if (Global_9660[0] == true)
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21202 = 2;
						Global_21449 = true;
					}
					break;
			
				case 3:
					Global_21202 = 5;
					break;
			
				case 6:
					if (Global_9660[8] == true)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 7;
						Global_21449 = true;
					}
					break;
			
				default:
					Global_21202 = Global_21202 - 1;
					break;
			}
		
			if (Global_21449 == true)
				func_31();
			else
				func_33();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21198, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[6])
						Global_21202 = 6;
					break;
			
				case 1:
					if (Global_9660[7])
					{
						Global_21202 = 7;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 4;
					}
					break;
			
				case 2:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 5;
					}
					break;
			
				case 3:
					if (Global_9660[0])
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 6;
					}
					break;
			
				case 4:
					if (Global_9660[1])
						Global_21202 = 1;
					break;
			
				case 5:
					if (Global_9660[2])
						Global_21202 = 2;
					break;
			
				case 6:
					if (Global_9660[3])
						Global_21202 = 3;
					break;
			
				case 7:
					if (Global_9660[4])
						Global_21202 = 4;
					break;
			
				case 8:
					if (Global_9660[5])
						Global_21202 = 5;
					break;
			}
		
			if (Global_21449 == true)
				func_29();
			else
				func_26();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21199, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[3])
						Global_21202 = 3;
					break;
			
				case 1:
					if (Global_9660[4])
						Global_21202 = 4;
					break;
			
				case 2:
					if (Global_9660[5])
						Global_21202 = 5;
					break;
			
				case 3:
					if (Global_9660[6])
						Global_21202 = 6;
					break;
			
				case 4:
					if (Global_9660[7])
					{
						Global_21202 = 7;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 1;
					}
					break;
			
				case 5:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 2;
					}
					break;
			
				case 6:
					if (Global_9660[0])
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 3;
					}
					break;
			
				case 7:
					if (Global_9660[1])
						Global_21202 = 1;
					break;
			
				case 8:
					if (Global_9660[2])
						Global_21202 = 2;
					break;
			}
		
			if (Global_21449 == true)
				func_26();
			else
				func_29();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	}

	if (Global_9082[24 /*15*/].f_10 == 57)
	{
		if (Global_21201 == true && Global_21202 == 8)
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
	MISC::SET_BIT(&Global_2740054.f_5271.f_7[num], offset);
	return;
}

void func_26() // Position - 0x31B3 (12723)
{
	func_150(Global_21203, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_27();
	return;
}

void func_27() // Position - 0x31F0 (12784)
{
	if (func_28())
		if (Global_21449 == false)
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

	if (Global_79744)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4546888 || flag)
		return true;

	return true;
}

void func_29() // Position - 0x325A (12890)
{
	func_150(Global_21203, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_30();
	return;
}

void func_30() // Position - 0x3297 (12951)
{
	if (func_28())
		if (Global_21449 == false)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_31() // Position - 0x32BA (12986)
{
	func_150(Global_21203, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_32();
	return;
}

void func_32() // Position - 0x32F7 (13047)
{
	if (func_28())
		if (Global_21449 == false)
			MOBILE::CELL_SET_INPUT(4);
		else
			MOBILE::CELL_SET_INPUT(3);

	return;
}

void func_33() // Position - 0x331A (13082)
{
	func_150(Global_21203, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_34();
	return;
}

void func_34() // Position - 0x3357 (13143)
{
	if (func_28())
		if (Global_21449 == false)
			MOBILE::CELL_SET_INPUT(3);
		else
			MOBILE::CELL_SET_INPUT(4);

	return;
}

void func_35() // Position - 0x337A (13178)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
	{
		switch (Global_21202)
		{
			case 0:
				if (Global_9660[1])
				{
					func_31();
					Global_21202 = 1;
				}
				break;
		
			case 1:
				if (Global_9660[2])
				{
					func_31();
					Global_21202 = 2;
				}
				break;
		
			case 2:
				if (Global_9660[3])
				{
					func_31();
					func_29();
					Global_21202 = 3;
				}
				else
				{
					func_33();
					func_29();
					Global_21202 = 4;
				}
				break;
		
			case 3:
				if (Global_9660[4])
				{
					func_31();
					Global_21202 = 4;
				}
				break;
		
			case 4:
				if (Global_9660[5])
				{
					func_31();
					Global_21202 = 5;
				}
				break;
		
			case 5:
				if (Global_9660[6])
				{
					func_31();
					func_29();
					Global_21202 = 6;
				}
				break;
		
			case 6:
				if (Global_9660[7])
				{
					func_31();
					Global_21202 = 7;
				}
				break;
		
			case 7:
				if (Global_9660[8])
				{
					func_31();
					Global_21202 = 8;
				}
				else if (func_46())
				{
					func_39();
					func_33();
					func_29();
					Global_21202 = 0;
				}
				else
				{
					func_33();
					func_29();
					Global_21202 = 0;
				}
				break;
		
			case 8:
				if (func_46())
				{
					func_39();
					func_31();
					func_29();
					Global_21202 = 0;
					return;
				}
			
				if (Global_9660[0])
				{
					func_31();
					func_29();
					Global_21202 = 0;
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
		switch (Global_21202)
		{
			case 0:
				if (IS_BIT_SET(Global_9077, 9))
				{
					func_36();
					func_33();
					func_26();
					Global_21202 = 8;
					return;
				}
			
				if (Global_9660[8])
				{
					func_33();
					func_26();
					Global_21202 = 8;
				}
				else
				{
					func_31();
					func_26();
					Global_21202 = 7;
				}
				break;
		
			case 1:
				if (Global_9660[0])
				{
					func_33();
					Global_21202 = 0;
				}
				else if (IS_BIT_SET(Global_9077, 9))
				{
					func_36();
					func_31();
					func_26();
					Global_21202 = 8;
				}
				else if (Global_9660[8])
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
				if (Global_9660[1])
				{
					func_33();
					Global_21202 = 1;
				}
				break;
		
			case 3:
				if (Global_9660[2])
				{
					func_33();
					func_26();
					Global_21202 = 2;
				}
				break;
		
			case 4:
				if (Global_9660[3])
				{
					func_33();
					Global_21202 = 3;
				}
				else
				{
					func_26();
					func_31();
					Global_21449 = true;
					Global_21202 = 2;
				}
				break;
		
			case 5:
				if (Global_9660[4])
				{
					func_33();
					Global_21202 = 4;
				}
				break;
		
			case 6:
				if (Global_9660[5])
				{
					func_26();
					func_33();
					Global_21202 = 5;
				}
				break;
		
			case 7:
				if (Global_9660[6])
				{
					func_33();
					Global_21202 = 6;
				}
				break;
		
			case 8:
				if (Global_9660[7])
				{
					func_33();
					Global_21202 = 7;
				}
				break;
		}
	}

	return;
}

void func_36() // Position - 0x366B (13931)
{
	MISC::CLEAR_BIT(&Global_9077, 9);
	func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_120(1);
	func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
	func_37();
	func_122();
	func_120(1);
	func_150(Global_21203, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
	func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
	return;
}

void func_37() // Position - 0x3710 (14096)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_38(&Global_9082[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	func_150(Global_21203, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
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
	Global_21226 = Global_21202;
	func_40(true);
	return;
}

void func_40(BOOL bParam0) // Position - 0x37C5 (14277)
{
	int i;

	MISC::SET_BIT(&Global_9077, 9);

	if (bParam0)
		func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	func_37();
	func_43();

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9623[i] = 0;
		Global_9660[i] = false;
	}

	func_41(10, "CELL_16" /*Settings*/, 0, "appSettings", 24);

	if (bParam0)
	{
		func_150(Global_21203, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
		func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4) // Position - 0x387D (14461)
{
	func_42(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_9660[iParam2] = true;
	Global_9623[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_38(&Global_9082[iParam0 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x38ED (14573)
{
	TEXT_LABEL_ASSIGN_STRING(&Global_9082[iParam0 /*15*/], sParam1, 16);
	Global_9082[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_9082[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9082[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9082[iParam0 /*15*/].f_10 = iParam4;
	Global_9082[iParam0 /*15*/].f_11 = iParam5;
	Global_9082[iParam0 /*15*/].f_12 = iParam6;
	Global_9082[iParam0 /*15*/].f_13 = iParam7;
	Global_9082[iParam0 /*15*/].f_14 = iParam8;

	if (Global_9082[iParam0 /*15*/].f_12 == 0)
		Global_9082[iParam0 /*15*/].f_12 = 0;

	if (Global_9082[iParam0 /*15*/].f_13 == 0)
		Global_9082[iParam0 /*15*/].f_13 = 0;

	if (Global_9082[iParam0 /*15*/].f_14 == 0)
		Global_9082[iParam0 /*15*/].f_14 = 0;

	return;
}

void func_43() // Position - 0x39A3 (14755)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9660[i] = false;
	}

	return;
}

void func_44() // Position - 0x39C6 (14790)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21211, true);
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
	if (func_108())
		return true;

	return false;
}

void func_47() // Position - 0x3A14 (14868)
{
	if (Global_21202 == 0 || Global_21202 == 3 || Global_21202 == 6 && func_93(FRONTEND_CONTROL, Global_21196, 0))
	{
		Global_21202 = Global_21202 + 2;
		func_44();
		func_36();
		return;
	}

	if (Global_21201)
		if (BUILTIN::TIMERA() > 50)
			Global_21201 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		func_35();

	func_48();
	return;
}

void func_48() // Position - 0x3A7E (14974)
{
	BOOL flag;

	if (!Global_21201)
	{
		flag = false;
	
		if (func_93(FRONTEND_CONTROL, Global_21197, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
				case 3:
				case 6:
					if (Global_9660[Global_21202 + 1])
					{
						Global_21202 = Global_21202 + 1;
					}
					else if (Global_9660[Global_21202 + 2])
					{
						Global_21202 = Global_21202 + 2;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			
				case 1:
				case 4:
				case 7:
					if (Global_9660[Global_21202 + 1])
					{
						Global_21202 = Global_21202 + 1;
					}
					else if (Global_9660[Global_21202 - 1])
					{
						Global_21202 = Global_21202 - 1;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			
				case 2:
				case 5:
				case 8:
					if (Global_9660[Global_21202 - 2])
					{
						Global_21202 = Global_21202 - 2;
					}
					else if (Global_9660[Global_21202 - 1])
					{
						Global_21202 = Global_21202 - 1;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21449)
					func_31();
				else
					func_33();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21196, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 1:
				case 4:
				case 7:
					if (Global_9660[Global_21202 - 1])
					{
						Global_21202 = Global_21202 - 1;
					}
					else if (Global_9660[Global_21202 + 1])
					{
						Global_21202 = Global_21202 + 1;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			
				case 2:
				case 5:
				case 8:
					if (Global_9660[Global_21202 - 1])
					{
						Global_21202 = Global_21202 - 1;
					}
					else if (Global_9660[Global_21202 - 2])
					{
						Global_21202 = Global_21202 - 2;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21449)
					func_33();
				else
					func_31();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21198, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9660[Global_21202 + 6])
					{
						Global_21202 = Global_21202 + 6;
					}
					else if (Global_9660[Global_21202 + 3])
					{
						Global_21202 = Global_21202 + 3;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			
				case 3:
				case 4:
				case 5:
					if (Global_9660[Global_21202 - 3])
					{
						Global_21202 = Global_21202 - 3;
					}
					else if (Global_9660[Global_21202 + 3])
					{
						Global_21202 = Global_21202 + 3;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			
				case 6:
				case 7:
				case 8:
					if (Global_9660[Global_21202 - 3])
					{
						Global_21202 = Global_21202 - 3;
					}
					else if (Global_9660[Global_21202 - 6])
					{
						Global_21202 = Global_21202 - 6;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21449)
					func_26();
				else
					func_29();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21199, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9660[Global_21202 + 3])
					{
						Global_21202 = Global_21202 + 3;
					}
					else if (Global_9660[Global_21202 + 6])
					{
						Global_21202 = Global_21202 + 6;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			
				case 3:
				case 4:
				case 5:
					if (Global_9660[Global_21202 + 3])
					{
						Global_21202 = Global_21202 + 3;
					}
					else if (Global_9660[Global_21202 - 3])
					{
						Global_21202 = Global_21202 - 3;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			
				case 6:
				case 7:
				case 8:
					if (Global_9660[Global_21202 - 6])
					{
						Global_21202 = Global_21202 - 6;
					}
					else if (Global_9660[Global_21202 - 3])
					{
						Global_21202 = Global_21202 - 3;
						Global_21449 = true;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						flag = true;
					}
					break;
			}
		
			if (!flag)
				if (!Global_21449)
					func_29();
				else
					func_26();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	}

	return;
}

void func_49() // Position - 0x3F47 (16199)
{
	if (Global_21201)
		if (BUILTIN::TIMERA() > 50)
			Global_21201 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_21202)
			{
				case 6:
					if (Global_9660[7])
					{
						func_31();
						Global_21202 = 7;
					}
					break;
			
				case 7:
					if (Global_9660[6])
					{
						func_33();
						Global_21202 = 6;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_21202)
			{
				case 6:
					if (Global_9660[7])
					{
						func_31();
						Global_21202 = 7;
					}
					break;
			
				case 7:
					if (Global_9660[6])
					{
						func_33();
						Global_21202 = 6;
					}
					break;
			}
		}
	}

	if (Global_21201 == false)
	{
		if (func_93(FRONTEND_CONTROL, Global_21197, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 2:
					Global_21202 = 0;
					break;
			
				case 5:
					Global_21202 = 3;
					break;
			
				case 7:
					if (Global_9660[Global_21202 + 1] == true)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 6;
						Global_21449 = true;
					}
					break;
			
				case 8:
					Global_21202 = 6;
					break;
			
				default:
					Global_21202 = Global_21202 + 1;
					break;
			}
		
			if (Global_21449 == true)
				func_33();
			else
				func_31();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21196, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
					Global_21202 = 2;
					break;
			
				case 3:
					Global_21202 = 5;
					break;
			
				case 6:
					if (Global_9660[8] == true)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 7;
						Global_21449 = true;
					}
					break;
			
				default:
					Global_21202 = Global_21202 - 1;
					break;
			}
		
			if (Global_21449 == true)
				func_31();
			else
				func_33();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	}

	return;
}

void func_50() // Position - 0x4106 (16646)
{
	if (Global_21201)
		if (BUILTIN::TIMERA() > 50)
			Global_21201 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[1])
					{
						func_31();
						Global_21202 = 1;
					}
					break;
			
				case 1:
					if (Global_9660[2])
					{
						func_31();
						Global_21202 = 2;
					}
					break;
			
				case 2:
					if (Global_9660[3])
					{
						func_31();
						func_29();
						Global_21202 = 3;
					}
					else
					{
						func_33();
						func_29();
						Global_21202 = 4;
					}
					break;
			
				case 3:
					if (Global_9660[4])
					{
						func_31();
						Global_21202 = 4;
					}
					break;
			
				case 4:
					if (Global_9660[5])
					{
						func_31();
						Global_21202 = 5;
					}
					break;
			
				case 5:
					if (Global_9660[6])
					{
						func_31();
						func_29();
						Global_21202 = 6;
					}
					break;
			
				case 6:
					if (Global_9660[7])
					{
						func_31();
						Global_21202 = 7;
					}
					break;
			
				case 7:
					if (Global_9660[8])
					{
						func_31();
						Global_21202 = 8;
					}
					else
					{
						func_33();
						func_29();
						Global_21202 = 0;
					}
					break;
			
				case 8:
					if (Global_9660[0])
					{
						func_31();
						func_29();
						Global_21202 = 0;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[8])
					{
						func_33();
						func_26();
						Global_21202 = 8;
					}
					else
					{
						func_31();
						func_26();
						Global_21202 = 7;
					}
					break;
			
				case 1:
					if (Global_9660[0])
					{
						func_33();
						Global_21202 = 0;
					}
					break;
			
				case 2:
					if (Global_9660[1])
					{
						func_33();
						Global_21202 = 1;
					}
					break;
			
				case 3:
					if (Global_9660[2])
					{
						func_33();
						func_26();
						Global_21202 = 2;
					}
					break;
			
				case 4:
					if (Global_9660[3])
					{
						func_33();
						Global_21202 = 3;
					}
					else
					{
						func_26();
						func_31();
						Global_21449 = true;
						Global_21202 = 2;
					}
					break;
			
				case 5:
					if (Global_9660[4])
					{
						func_33();
						Global_21202 = 4;
					}
					break;
			
				case 6:
					if (Global_9660[5])
					{
						func_26();
						func_33();
						Global_21202 = 5;
					}
					break;
			
				case 7:
					if (Global_9660[6])
					{
						func_33();
						Global_21202 = 6;
					}
					break;
			
				case 8:
					if (Global_9660[7])
					{
						func_33();
						Global_21202 = 7;
					}
					break;
			}
		}
	}

	if (Global_21201 == false)
	{
		if (func_93(FRONTEND_CONTROL, Global_21197, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 2:
					Global_21202 = 0;
					break;
			
				case 5:
					Global_21202 = 3;
					break;
			
				case 7:
					if (Global_9660[Global_21202 + 1] == true)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 6;
						Global_21449 = true;
					}
					break;
			
				case 8:
					Global_21202 = 6;
					break;
			
				default:
					Global_21202 = Global_21202 + 1;
					break;
			}
		
			if (Global_21449 == true)
				func_33();
			else
				func_31();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21196, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
					Global_21202 = 2;
					break;
			
				case 3:
					Global_21202 = 5;
					break;
			
				case 6:
					if (Global_9660[8] == true)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 7;
						Global_21449 = true;
					}
					break;
			
				default:
					Global_21202 = Global_21202 - 1;
					break;
			}
		
			if (Global_21449 == true)
				func_31();
			else
				func_33();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21198, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[6])
						Global_21202 = 6;
					break;
			
				case 1:
					if (Global_9660[7])
						Global_21202 = 7;
					break;
			
				case 2:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 5;
					}
					break;
			
				case 3:
					if (Global_9660[0])
						Global_21202 = 0;
					break;
			
				case 4:
					if (Global_9660[1])
						Global_21202 = 1;
					break;
			
				case 5:
					if (Global_9660[2])
						Global_21202 = 2;
					break;
			
				case 6:
					if (Global_9660[3])
						Global_21202 = 3;
					break;
			
				case 7:
					if (Global_9660[4])
						Global_21202 = 4;
					break;
			
				case 8:
					if (Global_9660[5])
						Global_21202 = 5;
					break;
			}
		
			if (Global_21449 == true)
				func_29();
			else
				func_26();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_93(FRONTEND_CONTROL, Global_21199, 0))
		{
			Global_21449 = false;
		
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[3])
						Global_21202 = 3;
					break;
			
				case 1:
					if (Global_9660[4])
						Global_21202 = 4;
					break;
			
				case 2:
					if (Global_9660[5])
						Global_21202 = 5;
					break;
			
				case 3:
					if (Global_9660[6])
						Global_21202 = 6;
					break;
			
				case 4:
					if (Global_9660[7])
						Global_21202 = 7;
					break;
			
				case 5:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = true;
						Global_21202 = 2;
					}
					break;
			
				case 6:
					if (Global_9660[0])
						Global_21202 = 0;
					break;
			
				case 7:
					if (Global_9660[1])
						Global_21202 = 1;
					break;
			
				case 8:
					if (Global_9660[2])
						Global_21202 = 2;
					break;
			}
		
			if (Global_21449 == true)
				func_26();
			else
				func_29();
		
			Global_21201 = true;
			BUILTIN::SETTIMERA(0);
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
	
		if (Global_21445 == false)
			Global_21226 = iLocal_70;
		else
			Global_21227 = iLocal_70;
	
		if (iLocal_70 < 0)
			iLocal_70 = 0;
	
		Global_21225 = Global_9623[iLocal_70];
	
		if (IS_BIT_SET(Global_9076, 10))
		{
			Global_21225 = 2;
			MISC::CLEAR_BIT(&Global_9076, 10);
		}
	
		if (iLocal_120 == 1)
		{
			Global_21226 = 1;
			Global_21225 = 0;
			Global_2751110 = 0;
			iLocal_120 = 0;
		}
	
		num = 0;
	
		if (Global_79744)
			Global_21225 == 25 && func_46();
	
		if (SCRIPT::IS_THREAD_ACTIVE(Global_21220))
			num = 1;
	
		if (Global_21225 == 3)
		{
			if (IS_BIT_SET(Global_9076, 3))
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
			
				if (Global_79744)
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
	
		if (Global_21225 == 2)
			if (IS_BIT_SET(Global_9076, 6))
				num = 1;
	
		if (Global_21225 == 24 && MISC::ARE_STRINGS_EQUAL(&Global_9082[Global_21225 /*15*/], "CELL_BENWEB" /*Benny's*/))
			if (IS_BIT_SET(Global_9076, 6))
				num = 1;
	
		if (Global_79744)
		{
			if (Global_21225 == 15 || Global_21225 == 5)
			{
			}
			else
			{
				if (Global_21225 == 24)
				{
					IS_BIT_SET(Global_4546610, 4) == false && Global_1836183 == false && IS_BIT_SET(Global_4546610, 20) == false && IS_BIT_SET(Global_4546610, 22) == false;
				
					if (IS_BIT_SET(Global_4546610, 20) == true && IS_BIT_SET(Global_4546610, 4) == false && Global_1836183 == false && IS_BIT_SET(Global_4546610, 22) == false && IS_BIT_SET(Global_4546610, 26) == false)
					{
						num = 1;
						MISC::SET_BIT(&Global_4546610, 21);
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						if (Global_21225 == 3)
							num = 1;
			
				if (Global_76837 && Global_21225 == 2)
				{
					num = 1;
					str = func_78();
				
					if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
						_DISPLAY_HELP_TEXT(str, -1);
				}
			
				if (Global_21225 == 23)
					func_53(&num);
			
				if (func_159())
				{
					if (Global_21225 == 10)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/))
							_DISPLAY_HELP_TEXT("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/, -1);
					
						num = 1;
					}
				}
			
				if (num == 0)
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_9075, 17);
					Global_21222.f_1 = 7;
				
					if (IS_BIT_SET(Global_9075, 23))
					{
					}
					else
					{
						func_44();
						STATS::_PLAYSTATS_FLOW_HIGH(Global_2672964.f_4.f_11, "PhoneApp", false, Global_9082[Global_21225 /*15*/].f_9);
						Global_1944267.f_35 = 133;
						SCRIPT::REQUEST_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5));
						MISC::SET_BIT(&Global_9075, 23);
					}
				}
				else
				{
					Global_21225 == 2 || Global_21225 == 3;
					func_52();
				}
			}
		}
		else
		{
			switch (Global_21225)
			{
				case 3:
					if (Global_113397 == 1)
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
					MISC::SET_BIT(&Global_9075, 26);
					break;
			
				case 5:
					num = 1;
					break;
			
				case 20:
					num = 1;
				
					if (Global_21447 == 0)
					{
						if (Global_9079 == 0 && iLocal_73 == 0 && Global_44375 == 15)
						{
							iLocal_73 = 1;
							func_44();
							!Global_114344.f_14055.f_85;
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
				if (Global_21225 != 0)
					num = 1;
		
			if (func_119(14))
				if (Global_21225 != 3 && Global_21225 != 14)
					num = 1;
		
			if (num == 0)
			{
				func_44();
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9075, 17);
				Global_21222.f_1 = 7;
			
				if (IS_BIT_SET(Global_9075, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5));
					MISC::SET_BIT(&Global_9075, 23);
				}
			}
			else if (Global_21225 != 20)
			{
				if (Global_114344.f_14055.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_21225 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									_DISPLAY_HELP_TEXT("CELL_38" /*You cannot use the Snapmatic application while in cover.*/, -1);
									Global_114344.f_14055.f_86 = 1;
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
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21211, true);

	return;
}

void func_53(var uParam0) // Position - 0x4BDB (19419)
{
	if (func_75(false))
	{
		*uParam0 = 1;
	
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HROBA_INGNG_BLK" /*The Darnell Inc. phone app is unavailable while working for another Boss.*/))
			_DISPLAY_HELP_TEXT("HROBA_INGNG_BLK" /*The Darnell Inc. phone app is unavailable while working for another Boss.*/, -1);
	}
	else if (func_72(PLAYER::PLAYER_ID()) || func_68(PLAYER::PLAYER_ID()) || func_67() || func_65(PLAYER::PLAYER_ID()) || func_63() || func_62(0) || func_61() || Global_1057440 != -1 || Global_1845225[PLAYER::PLAYER_ID() /*874*/] == 5 || func_58(PLAYER::PLAYER_ID(), true, false) || Global_1984708)
	{
		*uParam0 = 1;
	
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HROBA_GFAIL_BLK" /*The Darnell Inc. phone app is unavailable right now.*/))
			_DISPLAY_HELP_TEXT("HROBA_GFAIL_BLK" /*The Darnell Inc. phone app is unavailable right now.*/, -1);
	}
	else if (!func_75(true) && func_55() >= func_54())
	{
		*uParam0 = 1;
	
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("APPR_REG_BOSSF1"))
			_DISPLAY_HELP_TEXT("APPR_REG_BOSSF1", -1);
	}

	return;
}

int func_54() // Position - 0x4CDC (19676)
{
	return Global_262145.f_12821;
}

int func_55() // Position - 0x4CEB (19691)
{
	int i;
	int num;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			if (func_56(player))
				num = num + 1;
	}

	return num;
}

BOOL func_56(Player plParam0) // Position - 0x4D28 (19752)
{
	if (func_57(plParam0))
		if (func_57(Global_1888737[plParam0 /*611*/].f_10))
			return Global_1888737[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

BOOL func_57(Player plParam0) // Position - 0x4D5D (19805)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_58(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4D7F (19839)
{
	if (bParam1)
		if (func_59(plParam0))
			return true;

	!bParam2;

	if (Global_1845225[plParam0 /*874*/] == -1)
		return false;

	return true;
}

BOOL func_59(Player plParam0) // Position - 0x4DB1 (19889)
{
	return func_60(plParam0);
}

BOOL func_60(Player plParam0) // Position - 0x4DBF (19903)
{
	return IS_BIT_SET(Global_1845225[plParam0 /*874*/].f_11.f_1, 0);
}

BOOL func_61() // Position - 0x4DD6 (19926)
{
	if (Global_2740054.f_298)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_2740054.f_297) == 0)
		{
			Global_2740054.f_298 = 0;
			Global_2740054.f_297 = -1;
		}
	}

	return Global_2740054.f_298;
}

BOOL func_62(int iParam0) // Position - 0x4E0E (19982)
{
	return false;
}

BOOL func_63() // Position - 0x4E17 (19991)
{
	return func_64(*Global_4718592.f_131616);
}

BOOL func_64(var uParam0) // Position - 0x4E2D (20013)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_262145.f_31058[i] == uParam0)
			return 1;
	}

	return 0;
}

BOOL func_65(Player plParam0) // Position - 0x4E5C (20060)
{
	return func_66(&(Global_2658016[plParam0 /*467*/].f_446), 0);
}

BOOL func_66(var uParam0, int iParam1) // Position - 0x4E75 (20085)
{
	return IS_BIT_SET(*uParam0, iParam1);
}

BOOL func_67() // Position - 0x4E83 (20099)
{
	return Global_1835499;
}

int func_68(Player plParam0) // Position - 0x4E8F (20111)
{
	if (func_71(plParam0))
		return 1;

	if (func_69(plParam0))
		return 1;

	return 0;
}

BOOL func_69(Player plParam0) // Position - 0x4EB2 (20146)
{
	return func_70(plParam0, 20);
}

BOOL func_70(Player plParam0, int iParam1) // Position - 0x4EC2 (20162)
{
	return IS_BIT_SET(Global_1888737[plParam0 /*611*/].f_10.f_4, iParam1);
}

BOOL func_71(Player plParam0) // Position - 0x4EDA (20186)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1888737[player /*611*/].f_1, 7);

	return false;
}

int func_72(Player plParam0) // Position - 0x4EFD (20221)
{
	if (func_74(plParam0))
		return 1;

	if (func_73(plParam0))
		return 1;

	return 0;
}

BOOL func_73(Player plParam0) // Position - 0x4F20 (20256)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_70(plParam0, 9);

	return false;
}

BOOL func_74(Player plParam0) // Position - 0x4F3E (20286)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1888737[player /*611*/].f_1, 0);

	return false;
}

BOOL func_75(BOOL bParam0) // Position - 0x4F61 (20321)
{
	return func_76(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_76(Player plParam0, BOOL bParam1) // Position - 0x4F73 (20339)
{
	if (!func_57(plParam0))
		return false;

	if (!bParam1)
		if (func_56(plParam0))
			return false;

	return func_57(Global_1888737[plParam0 /*611*/].f_10);
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x4FAB (20395)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_78() // Position - 0x4FBE (20414)
{
	return "BLOCK_APP_WEB" /*The Internet app is currently unavailable. Please try again later.*/;
}

void func_79() // Position - 0x4FCA (20426)
{
	if (Global_21188 == 0)
	{
		if (func_15(Global_21175[Global_21167 /*3*/], Global_21168[Global_21167 /*3*/], Global_21182, Global_21182, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9076, 24);
			MISC::SET_BIT(&Global_9076, 26);
		}
	}

	return;
}

void func_80() // Position - 0x501B (20507)
{
	if (Global_21188 == 0)
	{
		if (func_15(Global_21168[Global_21167 /*3*/], Global_21175[Global_21167 /*3*/], Global_21182, Global_21182, 350f, true) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9076, 25);
		
			if (Global_22598)
				MISC::CLEAR_BIT(&Global_9076, 27);
		}
	}

	return;
}

void func_81() // Position - 0x5072 (20594)
{
	if (Global_21188 == 0 && Global_21162 == 0)
	{
		if (func_15(Global_21175[Global_21167 /*3*/], Global_21168[Global_21167 /*3*/], Global_21182, Global_21182, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			Global_4546889 = 0;
		}
	}

	return;
}

void func_82() // Position - 0x50C1 (20673)
{
	float num;
	float num2;

	if (IS_BIT_SET(Global_9077, 2))
	{
		MISC::SET_BIT(&Global_9076, 8);
		MISC::SET_BIT(&Global_9075, 14);
		Global_21162 = 0;
		iLocal_16 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21182, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
	{
		num = func_15(Global_21168[Global_21167 /*3*/], Global_21175[Global_21167 /*3*/], Global_21185, Global_21182, 450f, true);
	
		if (num >= 1f)
		{
			MISC::SET_BIT(&Global_9076, 8);
			MISC::SET_BIT(&Global_9075, 14);
			Global_21162 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9077, 2);
			iLocal_80 = 0;
		}
		else if (num >= 0.75f)
		{
			MISC::SET_BIT(&Global_9076, 8);
		}
	}
	else
	{
		if (iLocal_80 == 0)
		{
			fLocal_81 = { Global_21175[Global_21167 /*3*/] };
			fLocal_81 = fLocal_81 - 10f;
			fLocal_81.f_1 = fLocal_81.f_1 + 20f;
			iLocal_80 = 1;
		}
	
		num2 = func_15(Global_21168[Global_21167 /*3*/], fLocal_81, -90f, 0f, 90f, -90f, 0f, 90f, 450f, true);
	
		if (num2 >= 1f)
		{
			MISC::SET_BIT(&Global_9076, 8);
			MISC::SET_BIT(&Global_9075, 14);
			Global_21162 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9077, 2);
			iLocal_80 = 0;
		}
		else if (num2 >= 0.75f)
		{
			MISC::SET_BIT(&Global_9076, 8);
		}
	}

	return;
}

void func_83() // Position - 0x5214 (21012)
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
		iLocal_87 = func_142();
		AUDIO::IS_MOBILE_PHONE_CALL_ONGOING();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_104 = NETWORK::GET_NETWORK_TIME();
		else
			iLocal_99 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_84() // Position - 0x526A (21098)
{
	if (Global_21221 == 1)
	{
		func_158();
	
		if (Global_21200 == 0)
		{
			if (func_93(FRONTEND_CONTROL, Global_21192, 0))
			{
				if (IS_BIT_SET(Global_9076, 8))
				{
					if (Global_22632 == false)
					{
						func_52();
						Global_21200 = 1;
						Global_21221 = 3;
						Global_22634 = 1;
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
	
		if (Global_21200 == 0)
		{
			if (func_93(FRONTEND_CONTROL, Global_21191, 0))
			{
				if (IS_BIT_SET(Global_9076, 8))
				{
					func_44();
					Global_21200 = 1;
					Global_21221 = 2;
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				
					func_90();
					func_89();
				}
			}
		}
	}
	else
	{
		if (iLocal_97 == 0)
		{
			if (IS_BIT_SET(Global_9075, 27))
			{
				iLocal_97 = 1;
				BUILTIN::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_21222.f_1 > 3)
				if (BUILTIN::TIMERB() > 1500)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
							if (Global_21165)
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							else if (!IS_BIT_SET(Global_9077, 5))
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
		
			if (!IS_BIT_SET(Global_9075, 27))
			{
				iLocal_97 = 0;
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	
		if (Global_21221 == 0)
		{
			if (Global_21200 == 0)
			{
				if (func_93(FRONTEND_CONTROL, Global_21190, 0) || Global_2751110 == 1 && !Global_78513)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (IS_BIT_SET(Global_9076, 8))
							{
								switch (Global_21222.f_1)
								{
									case 3:
										break;
								
									case 4:
										break;
								
									case 6:
										if (Global_21444 == false)
										{
											if (Global_21445 == true)
											{
												func_52();
												Global_21445 = false;
												func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_122();
												func_121();
												func_120(1);
												func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_21211, true);
											
												iLocal_16 = 0;
												Global_21222.f_1 = 3;
											}
										}
										break;
								
									case 5:
										Global_21222.f_1 = 3;
										break;
								
									case 7:
										IS_BIT_SET(Global_9075, 23) == true;
									
										if (Global_9700 - Global_9699 > Global_9701 && IS_BIT_SET(Global_9075, 23) == false)
										{
											if (IS_BIT_SET(Global_9076, 0))
											{
											}
											else
											{
												func_52();
												Global_9698 = 1;
												Global_21222.f_1 = 6;
											
												if (Global_79744)
													func_150(Global_21203, "SET_THEME", BUILTIN::TO_FLOAT(Global_4546886), -1082130432, -1082130432, -1082130432, -1082130432);
											
												Global_9078 = 99;
											
												if (Global_2751110 == 0)
													func_85();
											}
										}
										break;
								
									case 8:
										break;
								
									case 10:
										if (Global_8390 == 132)
										{
											if (Global_2747205.f_1 || IS_BIT_SET(Global_9076, 20))
											{
												func_52();
												func_114();
											}
										}
										else
										{
											func_52();
											func_114();
											Global_22634 = 1;
										}
										break;
								
									case 9:
										if (Global_22585 == 0)
											Global_21222.f_1 = 3;
										break;
								
									default:
										break;
								}
							
								if (Global_2751110 == 1)
								{
									iLocal_120 = 1;
									Global_2751110 = 0;
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

void func_85() // Position - 0x55A1 (21921)
{
	var unk;

	if (Global_21205 == 1)
		return;

	if (Global_21222.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
	{
		if (Global_79744)
			return;
	
		BUILTIN::WAIT(0);
	}

	switch (Global_21222.f_1)
	{
		case 6:
			func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(Global_9697);
		
			if (Global_9697 == 1)
			{
				func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
				Global_21202 = Global_21226;
			}
			else
			{
				func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21227), -1082130432, -1082130432, -1082130432);
				Global_21202 = Global_21227;
			}
		
			if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21446 == false)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9075, 17);
			}
			else if (Global_79744)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9075, 17);
			}
			else
			{
				if (Global_21445 == true)
					if (Global_21210)
						func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_21210)
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_9075, 17);
			}
		
			if (Global_79744)
			{
				Global_21202 = Global_21226;
			
				if (func_46() && IS_BIT_SET(Global_9077, 9))
					func_40(false);
			
				func_150(Global_21203, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
				func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		
			if (IS_BIT_SET(Global_9075, 20))
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_21165)
					func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_21221 == 1)
			{
				func_144();
				func_150(Global_21203, "SET_THEME", BUILTIN::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_22598)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22600);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300" /*CHAR_DEFAULT*/);
					func_38("CELL_217" /*INCOMING CALL*/);
					func_38("CELL_217" /*INCOMING CALL*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_88(Global_8390, Global_21222) == 0)
				{
					func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_120[Global_8390 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_2241[Global_8390 /*29*/].f_3), &(Global_2241[Global_8390 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2241[Global_8390 /*29*/].f_3), 0);
				}
			
				func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22585 == 4 || Global_22585 == 3)
			{
				func_150(Global_21203, "SET_THEME", BUILTIN::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_144();
			
				if (Global_22598)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22600);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300" /*CHAR_DEFAULT*/);
					func_38("CELL_219" /*CONNECTED*/);
					func_38("CELL_219" /*CONNECTED*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22843)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_88(Global_8390, Global_21222) == 0)
					{
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8390 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_2241[Global_8390 /*29*/].f_3), &(Global_2241[Global_8390 /*29*/].f_7), &unk, &(Global_2241[Global_8390 /*29*/].f_3), 0);
					}
				}
			
				func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_86();
			break;
	
		default:
			break;
	}

	return;
}

void func_86() // Position - 0x5BA8 (23464)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
	{
		func_87();
	
		if (Global_21221 == 1)
		{
			if (Global_21210)
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_22632)
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_9075, 20))
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_21210)
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		}
		else
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		
			if (IS_BIT_SET(Global_9075, 20))
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_21165)
					func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_87() // Position - 0x5D29 (23849)
{
	if (Global_79744)
	{
		func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9075, 17);
	}

	return;
}

int func_88(int iParam0, eCharacter echParam1) // Position - 0x5D59 (23897)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2241[iParam0 /*29*/].f_24[echParam1];
}

void func_89() // Position - 0x5D83 (23939)
{
	if (Global_22598)
	{
		if (Global_79744)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2740054.f_1864), 15);
				}
			}
		}
	}

	return;
}

void func_90() // Position - 0x5DD2 (24018)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
	{
		if (!Global_22593)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		
			if (IS_BIT_SET(Global_9075, 20))
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_21165)
					func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_22598)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22600);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_38("CELL_300" /*CHAR_DEFAULT*/);
				func_38("CELL_219" /*CONNECTED*/);
				func_38("CELL_219" /*CONNECTED*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_88(Global_8390, Global_21222) == 0)
			{
				func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8390 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_219" /*CONNECTED*/, "CELL_195" /*Unknown*/, 0);
			}
			else
			{
				func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_2241[Global_8390 /*29*/].f_3), &(Global_2241[Global_8390 /*29*/].f_7), "CELL_219" /*CONNECTED*/, &(Global_2241[Global_8390 /*29*/].f_3), 0);
			}
		}
	
		func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_91() // Position - 0x5F7F (24447)
{
	Global_21451 = 0;
	func_92();
	return;
}

void func_92() // Position - 0x5F8F (24463)
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21221 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23596 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22585 = 6;
		Global_21222.f_1 = Global_21224;
		return;
	}

	return;
}

BOOL func_93(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x5FC6 (24518)
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

BOOL func_94() // Position - 0x6038 (24632)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
		return true;

	return false;
}

BOOL func_95(BOOL bParam0) // Position - 0x6055 (24661)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79993, 0);
}

void func_96(int iParam0) // Position - 0x607D (24701)
{
	if (func_98())
		return;

	if (Global_21444)
		if (func_7())
			func_5(true, true);
		else
			func_5(false, false);

	if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
		MISC::SET_BIT(&Global_9076, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22585 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9075, 30);
	else
		MISC::CLEAR_BIT(&Global_9075, 30);

	if (!func_97())
		Global_21222.f_1 = 3;

	return;
}

BOOL func_97() // Position - 0x6107 (24839)
{
	if (Global_21222.f_1 == 1 || Global_21222.f_1 == 0)
		return true;

	return false;
}

BOOL func_98() // Position - 0x612E (24878)
{
	return IS_BIT_SET(Global_1959772, 19);
}

void func_99() // Position - 0x613D (24893)
{
	if (Global_21222.f_1 == 9 || Global_21222.f_1 == 10)
	{
		Global_22638 = 0;
		Global_22634 = 1;
	}

	return;
}

void func_100() // Position - 0x6166 (24934)
{
	int num;
	int num2;
	int pedPropIndex;

	num = 0;
	num2 = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (func_115() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			num2 = 1;

	if (!Global_79744)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && num2 == 0)
		{
			pedPropIndex = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
		
			if (Global_79744)
				if (pedPropIndex == 15 || pedPropIndex == 16 || pedPropIndex == 17 || pedPropIndex == 18 || pedPropIndex == 19 || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					num = 1;
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				num = 1;
		
			if (!Global_21165)
			{
				if (Global_8390 != 128)
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
								if (Global_79744)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
							
								MISC::SET_BIT(&Global_9075, 11);
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

void func_101() // Position - 0x628A (25226)
{
	if (IS_BIT_SET(Global_9075, 14) && Global_4546889 == 0 && Global_21162 == 0)
	{
		if (func_106())
		{
		}
		else
		{
			func_102();
		}
	
		if (Global_21222.f_1 == 9)
			if (Global_22598 == false)
				bLocal_74 = true;
	}

	return;
}

void func_102() // Position - 0x62D2 (25298)
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_21175[Global_21167 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_21162 = 1;
	}

	return;
}

void func_103() // Position - 0x62F9 (25337)
{
	if (IS_BIT_SET(Global_9075, 14) && Global_4546889 == 0 && Global_21162 == 0)
	{
		if (bLocal_74 == false)
		{
			if (IS_BIT_SET(Global_9076, 26))
			{
				MISC::CLEAR_BIT(&Global_9076, 24);
				MISC::CLEAR_BIT(&Global_9076, 25);
				MISC::CLEAR_BIT(&Global_9076, 27);
				MISC::CLEAR_BIT(&Global_9076, 26);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						func_102();
					else if (func_105() == false)
						func_102();
			}
		}
	
		if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
		{
			if (func_105())
				func_104();
		}
		else if (func_106())
		{
		}
		else if (func_105())
		{
			func_104();
		}
	
		if (Global_21222.f_1 == 9)
			if (Global_22598 == false)
				bLocal_74 = true;
	}

	return;
}

void func_104() // Position - 0x63CF (25551)
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_21168[Global_21167 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_4546889 = 1;
	}

	return;
}

BOOL func_105() // Position - 0x63F7 (25591)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
			if (Global_21165 == false)
				if (Global_8390 != 128)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						Global_22585 != 2;
	
		if (func_119(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_38, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922251))
			return false;
	
		if (Global_113392)
			return false;
	}

	if (Global_79744)
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

	if (Global_4546888 || num == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114344.f_14055.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

BOOL func_106() // Position - 0x6640 (26176)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		return true;

	return false;
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3, function funcParam4) // Position - 0x665D (26205)
{
	if (SCRIPT::DOES_SCRIPT_WITH_NAME_HASH_EXIST(Global_9082[iParam0 /*15*/].f_9) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) > 0)
	{
		funcParam4(Global_9082[iParam0 /*15*/].f_4 != iParam3);
	
		if (StackVal && StackVal && !IS_BIT_SET(Global_9077, 9))
		{
			MISC::SET_BIT(&Global_9077, 9);
			Global_21202 = iParam3;
			Global_21226 = Global_21202;
		}
		else
		{
			funcParam4(Global_9082[iParam1 /*15*/].f_4 == iParam2);
		
			if (StackVal && !StackVal && IS_BIT_SET(Global_9077, 9))
			{
				MISC::CLEAR_BIT(&Global_9077, 9);
				Global_21202 = iParam2;
				Global_21226 = Global_21202;
			}
		}
	}

	return;
}

BOOL func_108() // Position - 0x66FA (26362)
{
	return func_109() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

BOOL func_109() // Position - 0x6710 (26384)
{
	return _STAT_GET_PACKED_BOOL(9539, -1);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x6720 (26400)
{
	if (iParam1 == -1)
		iParam1 = func_111();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_111() // Position - 0x673C (26428)
{
	return Global_1574927;
}

void func_112() // Position - 0x6748 (26440)
{
	if (!IS_BIT_SET(Global_4546610, 24))
		if (Global_21222.f_1 > 4)
			MISC::SET_BIT(&Global_4546610, 24);

	return;
}

BOOL func_113() // Position - 0x676E (26478)
{
	if (Global_9082[23 /*15*/].f_4 != 5 && func_108() && !IS_BIT_SET(Global_9077, 9) || Global_9082[23 /*15*/].f_4 == 5 && !func_108())
		return true;

	return false;
}

void func_114() // Position - 0x67B9 (26553)
{
	if (!Global_79744)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (IS_BIT_SET(Global_9075, 11))
			{
				if (!Global_21165)
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
			
				if (Global_79744)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
			
				MISC::CLEAR_BIT(&Global_9075, 11);
			}
		}
	}

	return;
}

BOOL func_115() // Position - 0x6820 (26656)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;

	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		return true;

	return false;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x6844 (26692)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_117() // Position - 0x685B (26715)
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_84);
	iLocal_84 == -1;
	return;
}

void func_118(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, char* sParam10, const char* sParam11) // Position - 0x686F (26735)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam6));

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

BOOL func_119(int iParam0) // Position - 0x6922 (26914)
{
	return Global_44375 == iParam0;
}

void func_120(int iParam0) // Position - 0x6930 (26928)
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

	Global_23654 = 0;
	Global_9697 = iParam0;
	func_43();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_119(14))
		{
			while (num < 35)
			{
				if (iParam0 == Global_9082[num /*15*/].f_11)
				{
					if (i == Global_9082[num /*15*/].f_4)
					{
						if (Global_9660[i] == false)
						{
							Global_9623[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_9076, 3))
								{
									value = 42;
									Global_21448 = 1;
								}
								else
								{
									value = 255;
									Global_21448 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696533)
								if (num == 14)
									func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23648), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
						
							Global_9660[i] = true;
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
				if (iParam0 == Global_9082[num /*15*/].f_11)
				{
					if (i == Global_9082[num /*15*/].f_4)
					{
						if (Global_9660[i] == false)
						{
							Global_9623[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114344.f_14145[j /*104*/].f_24 != 0)
										if (Global_114344.f_14145[j /*104*/].f_28 == 0)
											if (Global_114344.f_14145[j /*104*/].f_99[Global_21222] == 1)
												Global_23654 = Global_23654 + 1;
								}
							
								func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23654), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79744)
								{
									value2 = 0;
									value2 = Global_4543039;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4543041[k /*296*/].f_24 != 0)
											if (Global_4543041[k /*296*/].f_28 == 0)
												if (Global_4543041[k /*296*/].f_291[Global_21222] == 1)
													value2 = value2 + 1;
									}
								
									func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value2), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21222)
									{
										case CHAR_MICHAEL:
											value3 = Global_45601;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45602;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45603;
											break;
									
										default:
											break;
									}
								
									func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value3), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_23648), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9081);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_9076, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_9076, 3))
								{
									value5 = 42;
									Global_21448 = 1;
								}
								else
								{
									value5 = 255;
									Global_21448 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 24 && MISC::ARE_STRINGS_EQUAL(&Global_9082[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_9076, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&Global_9082[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9082[num /*15*/].f_10 == 57 && num == 24)
							{
								value6 = 0;
								value6 = Global_1881764.f_1;
								func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(value6), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_118(Global_21203, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9082[num /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_9082[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9660[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_121() // Position - 0x6EB7 (28343)
{
	if (Global_79744 == false)
	{
		Global_9082[14 /*15*/].f_4 = -99;
		Global_9082[4 /*15*/].f_4 = -99;
	
		if (Global_2696533)
		{
			if (func_119(14))
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

void func_122() // Position - 0x6F45 (28485)
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 35; i = i + 1)
	{
		Global_9082[i /*15*/].f_4 = -99;
	}

	if (Global_79744 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_123(num2, Global_21222) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_42(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_42(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44375 == 15 && func_95(false) == false && Global_9080 == 0)
		{
			func_42(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21447 = 0;
			Global_9081 = 255;
		}
		else
		{
			func_42(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21447 = 1;
			Global_9081 = 42;
		}
	
		if (num == 1)
			func_42(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_42(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_42(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_42(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114344.f_14055.f_89 == true)
			func_42(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114344.f_14055.f_88 == 1)
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
	
		if (func_108())
			func_42(23, "CELL_HACKER_ROB" /*Darnell Inc.*/, 5, "appHackerDen", 62, 1, 1, 0, 0);
		else
			func_42(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
	
		func_42(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_42(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_42(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546610, 4))
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
	
		if (!IS_BIT_SET(Global_4546610, 4))
			if (Global_1836183)
				func_42(24, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546610, 20))
				func_42(24, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546610, 22))
				func_42(24, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546610, 26))
				if (func_159())
					func_42(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_42(24, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546610, 4) == false && Global_1836183 == false && IS_BIT_SET(Global_4546610, 20) == false && IS_BIT_SET(Global_4546610, 22) == false && IS_BIT_SET(Global_4546610, 26) == false)
			if (func_159())
				func_42(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_42(24, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

int func_123(int iParam0, eCharacter echParam1) // Position - 0x750F (29967)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2241[iParam0 /*29*/].f_19[echParam1];
}

BOOL func_124(int iParam0) // Position - 0x7539 (30009)
{
	int num;

	iParam0 == 1;

	if (iParam0 == 0)
		if (func_128() == 0)
			return false;

	if (func_126(&num) && MISC::GET_PROFILE_SETTING(903) == 1)
		return true;

	if (!func_126(&num))
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
		else if (func_125(num))
			return true;

	return false;
}

BOOL func_125(int iParam0) // Position - 0x75EC (30188)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
			return true;
	}

	return false;
}

BOOL func_126(int* piParam0) // Position - 0x761B (30235)
{
	if (func_127())
	{
		*piParam0 = 11;
		return true;
	}

	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(piParam0);
}

BOOL func_127() // Position - 0x7639 (30265)
{
	return Global_33559;
}

int func_128() // Position - 0x7644 (30276)
{
	if (func_129())
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

BOOL func_129() // Position - 0x768C (30348)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_130() // Position - 0x76A2 (30370)
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

	if (bLocal_115 == true || func_131())
		iLocal_88 = 0;

	func_150(Global_21203, "SET_PROVIDER_ICON", BUILTIN::TO_FLOAT(iLocal_87), BUILTIN::TO_FLOAT(iLocal_88), -1082130432, -1082130432, -1082130432);
	return;
}

BOOL func_131() // Position - 0x7772 (30578)
{
	eCharacter character;
	var entityCoords;
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (func_136(character))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			for (i = 0; i < Global_114344.f_7692.f_136; i = i + 1)
			{
				if (IS_BIT_SET(Global_114344.f_7692[i /*15*/].f_2, character))
					if (func_134(entityCoords, func_135(i)))
						return true;
			}
		
			for (i = 0; i < Global_114344.f_7692.f_764; i = i + 1)
			{
				if (IS_BIT_SET(Global_114344.f_7692.f_651[i /*14*/].f_2, character))
					if (func_134(entityCoords, func_133(i)))
						return true;
			}
		
			for (i = 0; i < Global_114344.f_7692.f_866; i = i + 1)
			{
				if (IS_BIT_SET(Global_114344.f_7692.f_765[i /*10*/].f_2, character))
					if (func_134(entityCoords, func_132(i)))
						return true;
			}
		}
	}

	return false;
}

int func_132(int iParam0) // Position - 0x7872 (30834)
{
	return Global_114344.f_7692.f_765[iParam0 /*10*/].f_7;
}

int func_133(int iParam0) // Position - 0x788A (30858)
{
	return Global_114344.f_7692.f_651[iParam0 /*14*/].f_7;
}

BOOL func_134(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x78A2 (30882)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_44376)
			return false;
	
		if (BUILTIN::VDIST2(vParam0, Global_44376[iParam3 /*5*/]) <= Global_44376[iParam3 /*5*/].f_3 * Global_44376[iParam3 /*5*/].f_3)
			return true;
		else if (Global_44376[iParam3 /*5*/].f_4 != -1)
			return func_134(vParam0, Global_44376[iParam3 /*5*/].f_4);
	}

	return false;
}

int func_135(int iParam0) // Position - 0x790D (30989)
{
	return Global_114344.f_7692[iParam0 /*15*/].f_7;
}

BOOL func_136(eCharacter echParam0) // Position - 0x7922 (31010)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x792E (31022)
{
	func_138();
	return Global_114344.f_2367.f_539.f_4321;
}

void func_138() // Position - 0x7947 (31047)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114344.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_136(character) && !func_119(14) || Global_113292)
			{
				if (Global_114344.f_2367.f_539.f_4321 != character && func_136(Global_114344.f_2367.f_539.f_4321))
					Global_114344.f_2367.f_539.f_4322 = Global_114344.f_2367.f_539.f_4321;
			
				Global_114344.f_2367.f_539.f_4323 = character;
				Global_114344.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114344.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114344.f_2367.f_539.f_4323 = Global_114344.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114344.f_2367.f_539.f_4321 = 145;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x7A44 (31300)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x7A81 (31361)
{
	if (func_136(character))
		return func_141(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_141(eCharacter echParam0) // Position - 0x7AA6 (31398)
{
	return Global_2241[echParam0 /*29*/];
}

int func_142() // Position - 0x7AB5 (31413)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	return Global_114344.f_14055[Global_21222 /*20*/].f_8;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x7ACF (31439)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_144() // Position - 0x7AE6 (31462)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21222 == CHAR_MICHAEL)
		{
			switch (Global_114344.f_14055[Global_21222 /*20*/].f_6)
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
	
		if (Global_21222 == CHAR_FRANKLIN)
		{
			switch (Global_114344.f_14055[Global_21222 /*20*/].f_6)
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
	
		if (Global_21222 == CHAR_TREVOR)
		{
			switch (Global_114344.f_14055[Global_21222 /*20*/].f_6)
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
	
		if (Global_21222 == CHAR_MULTIPLAYER)
		{
			switch (Global_4546886)
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

int func_145(int iParam0, int iParam1) // Position - 0x7D5D (32093)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15525)
	{
		statHash = func_146(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_146(int iParam0, int iParam1) // Position - 0x7D8C (32140)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_147(iParam1));
}

int func_147(int iParam0) // Position - 0x7DA1 (32161)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_111();
	
		if (num2 > -1)
		{
			Global_2752197 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752197 = 1;
		}
	}

	return num;
}

void func_148() // Position - 0x7DD5 (32213)
{
	if (func_119(14))
	{
		if (Global_2696533)
		{
			if (Global_21222.f_1 == 6)
			{
				if (Global_21202 == 7)
				{
					func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_21202 = 6;
					func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_21222.f_1 == 6)
		{
			func_150(Global_21203, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}

	iLocal_90 = CLOCK::GET_CLOCK_MINUTES();

	if (iLocal_90 != Global_9078)
	{
		Global_9078 = iLocal_90;
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
	
		func_118(Global_21203, "SET_TITLEBAR_TIME", BUILTIN::TO_FLOAT(iLocal_89), BUILTIN::TO_FLOAT(iLocal_90), -1f, -1f, -1f, &uLocal_92, 0, 0, 0, 0);
	
		if (Global_21165 == false)
			func_130();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}

	return;
}

void func_149() // Position - 0x7F55 (32597)
{
	if (Global_79744)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_21165)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_21222)
		{
			case CHAR_MICHAEL:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		
			case CHAR_TREVOR:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
		
			case CHAR_FRANKLIN:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_21211, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		}
	}

	Global_21185 = { -90f, -130f, 0f };

	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_21167 = 0;
		Global_21168[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f, -113f };
		Global_21175[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f, -113f };
	}
	else
	{
		Global_21167 = 0;
		Global_21168[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f, -91.5f };
		Global_21175[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f, -91.5f };
	}

	Global_21150 = { Global_21168[Global_21167 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21168[Global_21167 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21185, 0);
	Global_21162 = 1;
	return;
}

void func_150(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x80BC (32956)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_151() // Position - 0x811F (33055)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_152() // Position - 0x8135 (33077)
{
	Global_2747205.f_1 = 0;
	Global_2747205 = 0;
	Global_2747205.f_2 = 0;
	Global_2747205.f_33 = -1;
	Global_2747205.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2747205.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2747205.f_39[0 /*16*/], "", 64);
	Global_2747205.f_38 = 0;
	Global_2747205.f_56 = 0;
	Global_2747205.f_57 = 0;
	Global_2747205.f_58 = -2;
	Global_2747205.f_3 = 0;
	func_153(&(Global_2747205.f_20));
	return;
}

void func_153(Any* panParam0) // Position - 0x81A8 (33192)
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

void func_154() // Position - 0x81F0 (33264)
{
	Global_2747205.f_2 = 1;
	Global_2747205.f_38 = 1;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				BUILTIN::WAIT(0);
			}
		
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2747205 = 0;
			Global_2747205.f_2 = 0;
		}
		else if (IS_GAMER_HANDLE_VALID(Global_2747205.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2747205.f_20)))
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2747205.f_20)))
					func_152();
		}
		else
		{
			func_152();
		}
	}
	else
	{
		func_152();
	}

	if (Global_2747205.f_37)
		func_96(0);

	Global_2747205.f_37 = 0;
	Global_2747205.f_3 = 0;
	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x8290 (33424)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_156() // Position - 0x82A0 (33440)
{
	Global_21451 = 0;
	func_10();
	return;
}

void func_157(int iParam0, char* sParam1) // Position - 0x82B0 (33456)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_158() // Position - 0x82C5 (33477)
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21191);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21191);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_21192);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	}

	if (Global_79744)
		Global_114344.f_14055[3 /*20*/].f_10 = func_145(1198, -1);

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
	else if (Global_114344.f_14055[Global_21222 /*20*/].f_10 == 1)
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
			if (Global_79744)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&Global_9897[3 /*2811*/][1 /*281*/].f_144[func_145(1199, -1) /*6*/], "Silent Ringtone Dummy"))
					AUDIO::PLAY_PED_RINGTONE(&Global_9897[3 /*2811*/][1 /*281*/].f_144[func_145(1199, -1) /*6*/], PLAYER::PLAYER_PED_ID(), true);
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_114344.f_14055[Global_21222 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!(Global_9897[Global_21222 /*2811*/][0 /*281*/].f_259 == 1))
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_114344.f_14055[Global_21222 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_114344.f_14055[Global_21222 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}

	return;
}

BOOL func_159() // Position - 0x849B (33947)
{
	if (Global_79744)
		if (Global_1836590 || Global_1836591 == 1)
			return true;

	return false;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x84C2 (33986)
{
	if (func_119(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[0 /*29*/])
				Global_21222 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[1 /*29*/])
				Global_21222 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[2 /*29*/])
				Global_21222 = CHAR_TREVOR;
			else
				Global_21222 = CHAR_MICHAEL;
	}
	else
	{
		Global_21222 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21222 == _CHAR_NULL)
			Global_21222 = CHAR_MULTIPLAYER;
	
		if (Global_79744)
			Global_21222 = CHAR_MULTIPLAYER;
	
		if (Global_21222 > CHAR_MULTIPLAYER)
			Global_21222 = CHAR_MULTIPLAYER;
	}

	return;
}


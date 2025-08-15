#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	BOOL bLocal_2 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_9();

	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	MISC::CLEAR_BIT(&(Global_114370.f_10020.f_25), 1);
	func_6();
	SCRIPT::SET_NO_LOADING_SCREEN(true);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	iLocal_0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_0))
	{
		func_6();
		BUILTIN::WAIT(0);
	}

	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		func_6();
		BUILTIN::WAIT(0);
	}

	func_5("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = MISC::GET_GAME_TIMER() + 8000 + BUILTIN::ROUND(2f * 1000f);

	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_6();
	
		if (!IS_BIT_SET(Global_114370.f_10020.f_25, 1))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_0, 255, 255, 255, 255, 0);
		
			if (!bLocal_2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1)
				{
					func_4("TITLE");
					bLocal_2 = true;
					iLocal_1 = MISC::GET_GAME_TIMER() + BUILTIN::ROUND(2f * 1000f);
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1)
			{
				MISC::SET_BIT(&(Global_114370.f_10020.f_25), 1);
				func_3(1, 1);
				func_1();
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_9();
	return;
}

int func_1() // Position - 0x123 (291)
{
	if (func_2(false))
		return 0;

	if (Global_101956.f_8)
		if (Global_101956.f_10 > 0)
			return 0;
	else if (Global_101956.f_10 > 1)
		return 0;

	Global_101956.f_10 = Global_101956.f_10 + 1;
	return 1;
}

BOOL func_2(BOOL bParam0) // Position - 0x16E (366)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80017, 0);
}

void func_3(int iParam0, int iParam1) // Position - 0x196 (406)
{
	Global_101956.f_7 = iParam0;
	Global_101956.f_8 = iParam1;
	return;
}

void func_4(char* sParam0) // Position - 0x1AE (430)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "HIDE_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_5(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x1D5 (469)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "SHOW_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_6() // Position - 0x226 (550)
{
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	func_7();
	return;
}

void func_7() // Position - 0x243 (579)
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_8();
	return;
}

void func_8() // Position - 0x253 (595)
{
	Global_24009.f_134 = 1;
	return;
}

void func_9() // Position - 0x261 (609)
{
	MISC::SET_BIT(&(Global_114370.f_10020.f_25), 1);

	if (iLocal_0 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


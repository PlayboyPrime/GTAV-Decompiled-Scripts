#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	switch (iScriptParam_0)
	{
		case 3:
			while (true)
			{
				BUILTIN::WAIT(5000);
			}
			break;
	
		case 0:
		case 1:
			if (iScriptParam_0.f_1 == joaat("PM_REPLAY"))
			{
				func_2(1, 0, -1705870862, 25, true, "PM_PANE_AUD" /*Audio*/, 0, 0);
				func_2(1, 1, -1705870862, 50, true, "PM_PANE_DIS" /*Display*/, 0, 0);
				func_1(1);
			}
		
			iScriptParam_0.f_1 == -1705871862;
			break;
	
		case 2:
			switch (iScriptParam_0.f_1)
			{
				case joaat("PM_REPLAY"):
					break;
			
				case -1705871862:
					switch (iScriptParam_0.f_3)
					{
						case 25:
							break;
					
						case 50:
							break;
					}
					break;
			}
			break;
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1(int iParam0) // Position - 0xBA (186)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, char* sParam5, int iParam6, int iParam7) // Position - 0xD6 (214)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (bParam4)
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (iParam6 == 0)
			func_3(sParam5);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam5);
	
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_3(char* sParam0) // Position - 0x136 (310)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}


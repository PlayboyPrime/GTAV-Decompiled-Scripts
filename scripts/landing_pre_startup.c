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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (STREAMING::IS_GAME_INSTALLED())
	{
		SCRIPT::REQUEST_SCRIPT(func_4());
		func_2(0);
	}

	while (LANDINGPAGE::IS_LANDING_PAGE_ACTIVE())
	{
		BUILTIN::WAIT(0);
	}

	while (!MISC::IS_SESSION_INITIALIZED())
	{
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x66 (102)
{
	char* scriptName;

	scriptName = func_4();
	SCRIPT::REQUEST_SCRIPT(scriptName);

	while (!SCRIPT::HAS_SCRIPT_LOADED(scriptName))
	{
		SCRIPT::REQUEST_SCRIPT(scriptName);
		BUILTIN::WAIT(0);
	}

	BUILTIN::START_NEW_SCRIPT(scriptName, DEFAULT);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
	return;
}

void func_2(int iParam0) // Position - 0xA2 (162)
{
	int i;

	for (i = 0; i < 14; i = i + 1)
	{
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(func_3(i));
	}

	switch (iParam0)
	{
		case 0:
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("standard_global_reg"));
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("standard_global_init"));
			break;
	}

	return;
}

Hash func_3(int iParam0) // Position - 0xE9 (233)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_registration");
	
		case 1:
			return joaat("mp_fm_registration");
	
		case 2:
			return joaat("tunables_registration");
	
		case 3:
			return joaat("sc_lb_global_block");
	
		case 4:
			return joaat("mp_save_game_global_block");
	
		case 5:
			return joaat("mp_prop_global_block");
	
		case 6:
			return joaat("mp_prop_special_global_block");
	
		case 7:
			return joaat("title_update_registration");
	
		case 8:
			return joaat("title_update_registration_2");
	
		case 9:
			return joaat("globals_fmmc_struct_registration");
	
		case 10:
			return joaat("globals_fmmcstruct2_registration");
	
		case 11:
			return -1999920335;
	
		case 12:
			return joaat("sp_dlc_registration");
	
		case 13:
			return joaat("sp_pilotschool_reg");
	
		default:
		
	}

	return -1;
}

char* func_4() // Position - 0x1BD (445)
{
	char* str;

	str = "startup";

	if (!STREAMING::IS_GAME_INSTALLED())
		str = "startup_install";

	return str;
}


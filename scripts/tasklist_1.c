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
	var uLocal_16 = 3;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 3;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_11();

	while (true)
	{
		BUILTIN::WAIT(250);
	
		switch (iLocal_25)
		{
			case 0:
				if (uLocal_16[0])
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[1 /*42*/], "CL_C1A" /*Killer photo*/, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_23722[1 /*42*/].f_4), "CL_C1A_BR" /*Kill some gang members and take a photo of the corpses.*/, 16);
					Global_23722[1 /*42*/].f_8 = 0;
					Global_23722[1 /*42*/].f_9 = 2;
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[1 /*42*/].f_10[1 /*4*/], "CL_C1A_J1" /*Gang members killed ~1~/~1~*/, 16);
					Global_23722[1 /*42*/].f_37[1] = false;
					Global_23722[1 /*42*/].f_32[1] = 3;
					Global_23722[1 /*42*/].f_27[1] = 0;
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[1 /*42*/].f_10[2 /*4*/], "CL_C1A_J2" /*Photos taken of dead gang members ~1~/~1~*/, 16);
					Global_23722[1 /*42*/].f_37[2] = false;
					Global_23722[1 /*42*/].f_32[2] = 3;
					Global_23722[1 /*42*/].f_27[2] = 0;
				
					for (iLocal_20 = 0; iLocal_20 < Global_23722[1 /*42*/].f_32[1]; iLocal_20 = iLocal_20 + 1)
					{
						Global_33353[iLocal_20] = false;
						Global_33349[iLocal_20] = false;
					}
				
					func_4(1, 1, true, 1);
					func_3("CL_ADDED" /*Job ~a~ added to phone checklist*/, "CL_C1A" /*Killer photo*/, 3000, 1);
					iLocal_25 = 1;
				}
				break;
		
			case 1:
				for (iLocal_20 = 0; iLocal_20 < Global_23722[1 /*42*/].f_32[1]; iLocal_20 = iLocal_20 + 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_21[iLocal_20]))
						{
							if (PED::IS_PED_INJURED(uLocal_21[iLocal_20]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_21[iLocal_20], PLAYER::PLAYER_PED_ID(), true))
								{
									if (!Global_33349[iLocal_20])
									{
										Global_23722[1 /*42*/].f_27[1] = Global_23722[1 /*42*/].f_27[1] + 1;
										func_2("CL_C1A_J1" /*Gang members killed ~1~/~1~*/, Global_23722[1 /*42*/].f_27[1], Global_23722[1 /*42*/].f_32[1], 2000, 1);
										Global_33349[iLocal_20] = true;
									}
								
									if (ENTITY::IS_ENTITY_DEAD(uLocal_21[iLocal_20], false))
									{
										if (!Global_33353[iLocal_20])
										{
											if (MOBILE::CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(uLocal_21[iLocal_20]) && func_1())
											{
												Global_23722[1 /*42*/].f_27[2] = Global_23722[1 /*42*/].f_27[2] + 1;
												func_2("CL_C1A_J2" /*Photos taken of dead gang members ~1~/~1~*/, Global_23722[1 /*42*/].f_27[2], Global_23722[1 /*42*/].f_32[2], 2000, 1);
												Global_33353[iLocal_20] = true;
											}
										}
									}
								
									if (Global_23722[1 /*42*/].f_27[1] >= Global_23722[1 /*42*/].f_32[1] && Global_23722[1 /*42*/].f_27[2] >= Global_23722[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE" /*~a~ job complete.*/, "CL_C1A" /*Killer photo*/, 3000, 1);
										Global_23722[1 /*42*/].f_8 = 1;
										iLocal_25 = 2;
									}
								}
							}
						}
					}
				}
				break;
		
			case 2:
				break;
		}
	
		BUILTIN::WAIT(250);
	
		switch (iLocal_26)
		{
			case 0:
				if (uLocal_16[1])
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[2 /*42*/], "CL_C1B" /*Bike Pro*/, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_23722[2 /*42*/].f_4), "CL_C1B_BR" /*Perform various bike stunts.*/, 16);
					Global_23722[2 /*42*/].f_8 = 0;
					Global_23722[2 /*42*/].f_9 = 3;
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[2 /*42*/].f_10[1 /*4*/], "CL_C1B_J1" /*Hold a wheelie for 200m without crashing.*/, 16);
					Global_23722[2 /*42*/].f_37[1] = false;
					Global_23722[2 /*42*/].f_32[1] = -1;
					Global_23722[2 /*42*/].f_27[1] = -1;
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[2 /*42*/].f_10[2 /*4*/], "CL_C1B_J2" /*Successfully perform a stoppie.*/, 16);
					Global_23722[2 /*42*/].f_37[2] = false;
					Global_23722[2 /*42*/].f_32[2] = -1;
					Global_23722[2 /*42*/].f_27[2] = -1;
					TEXT_LABEL_ASSIGN_STRING(&Global_23722[2 /*42*/].f_10[3 /*4*/], "CL_C1B_J3" /*Perform a 360 flip on a bike.*/, 16);
					Global_23722[2 /*42*/].f_37[3] = false;
					Global_23722[2 /*42*/].f_32[3] = -1;
					Global_23722[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, true, 1);
					func_3("CL_ADDED" /*Job ~a~ added to phone checklist*/, "CL_C1B" /*Bike Pro*/, 3000, 1);
					iLocal_26 = 1;
				}
				break;
		
			case 1:
				!Global_23722[2 /*42*/].f_37[1];
				!Global_23722[2 /*42*/].f_37[2];
				!Global_23722[2 /*42*/].f_37[3];
			
				if (Global_23722[2 /*42*/].f_37[1] == true && Global_23722[2 /*42*/].f_37[2] == true && Global_23722[2 /*42*/].f_37[3] == true)
				{
					func_3("CL_COMPLETE" /*~a~ job complete.*/, "CL_C1B" /*Bike Pro*/, 3000, 1);
					Global_23722[2 /*42*/].f_8 = 1;
					iLocal_26 = 2;
				}
				break;
		
			case 2:
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0x438 (1080)
{
	if (Global_23638)
		return true;

	return false;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x44E (1102)
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, false);
	return;
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x473 (1139)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
	return;
}

int func_4(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x492 (1170)
{
	if (func_10())
		return 0;

	if (func_5(iParam0, iParam1, bParam2, iParam3) == 1)
		return 1;

	return 0;
}

int func_5(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x4BD (1213)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsidetask")) > 0)
		return 0;

	if (func_8() == 0)
	{
		func_7();
		return 0;
	}

	func_6(Global_23721);
	Global_23891[Global_23721 /*9*/].f_1 = iParam1;
	Global_23891[Global_23721 /*9*/] = iParam0;

	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23891[Global_23721 /*9*/].f_8 = iParam3;
	}

	bParam2;
	return 1;
}

void func_6(int iParam0) // Position - 0x521 (1313)
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_23891[iParam0 /*9*/].f_2 = clockSeconds;
	Global_23891[iParam0 /*9*/].f_2.f_1 = clockMinutes;
	Global_23891[iParam0 /*9*/].f_2.f_2 = clockHours;
	Global_23891[iParam0 /*9*/].f_2.f_3 = clockDayOfMonth;
	Global_23891[iParam0 /*9*/].f_2.f_4 = num;
	Global_23891[iParam0 /*9*/].f_2.f_5 = clockYear;
	return;
}

void func_7() // Position - 0x59B (1435)
{
	return;
}

int func_8() // Position - 0x5A3 (1443)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_23891[i /*9*/].f_8 == 0)
		{
			Global_23721 = i;
			return 1;
		}
	}

	i = 0;
	Global_23721 = 3;
	Global_23891[Global_23721 /*9*/].f_2 = -1;
	Global_23891[Global_23721 /*9*/].f_2.f_1 = 0;
	Global_23891[Global_23721 /*9*/].f_2.f_2 = 0;
	Global_23891[Global_23721 /*9*/].f_2.f_3 = 0;
	Global_23891[Global_23721 /*9*/].f_2.f_5 = 99999;

	while (i < 2)
	{
		if (Global_23891[i /*9*/].f_8 == 0 || Global_23891[i /*9*/].f_8 == 1)
			if (!func_9(Global_23891[i /*9*/].f_2, Global_23891[Global_23721 /*9*/].f_2))
				Global_23721 = i;
	
		i = i + 1;
	}

	if (Global_23721 == 3)
		return 0;

	return 1;
}

BOOL func_9(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x67D (1661)
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

BOOL func_10() // Position - 0x768 (1896)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 0)
		return true;

	return false;
}

void func_11() // Position - 0x78F (1935)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


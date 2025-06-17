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
	BOOL bLocal_16 = 0;
	BOOL bLocal_17 = 0;
	BOOL bLocal_18 = 0;
	BOOL bLocal_19 = 0;
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_14();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_8();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21239.f_1 != 9)
		{
			if (!bLocal_16)
			{
				bLocal_16 = true;
			}
			else if (Global_21221)
			{
				if (!bLocal_17)
				{
					bLocal_17 = true;
					func_7(Global_21220, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_21220, true);
					func_7(Global_21220, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
		
			if (func_2())
				func_14();
		}
	
		if (func_1())
			func_14();
	}

	return;
}

BOOL func_1() // Position - 0xDC (220)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 3 || Global_21239.f_1 == 0 || Global_21183 == 1)
	{
		Global_21226 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x11F (287)
{
	if (Global_9715 == 1 || Global_21239.f_1 < 7)
	{
		Global_21226 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x148 (328)
{
	if (!bLocal_18)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP))
		{
			bLocal_18 = true;
			func_7(Global_21220, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP))
	{
		bLocal_18 = false;
	}

	if (!bLocal_19)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN))
		{
			bLocal_19 = true;
			func_7(Global_21220, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN))
	{
		bLocal_19 = false;
	}

	if (!bLocal_20)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
		{
			bLocal_20 = true;
			func_7(Global_21220, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
	{
		bLocal_20 = false;
	}

	if (!bLocal_21)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
		{
			bLocal_21 = true;
			func_7(Global_21220, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
	{
		bLocal_21 = false;
	}

	return;
}

void func_4(int iParam0, BOOL bParam1) // Position - 0x25C (604)
{
	int num;
	int value;
	BOOL flag;
	int num2;
	int num3;
	int value2;
	char* str;

	if (Global_98979 == Global_98980)
		if (!bParam1)
			return;

	if (iParam0 == 0)
		return;

	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
		return;

	func_8();
	num = Global_98983;
	value = Global_98982;
	flag = true;
	num2 = 0;
	num3 = 0;
	value2 = 0;

	while (flag)
	{
		num3 = num2;
		num2 = Global_98984[num /*25*/][value];
	
		if (!(num2 == num3))
		{
			if (!(num2 == 0))
			{
				switch (num)
				{
					case 0:
						str = "fSu" /*SUNDAY*/;
						break;
				
					case 1:
						str = "fMo" /*MONDAY*/;
						break;
				
					case 2:
						str = "fTu" /*TUESDAY*/;
						break;
				
					case 3:
						str = "fWe" /*WEDNESDAY*/;
						break;
				
					case 4:
						str = "fTh" /*THURSDAY*/;
						break;
				
					case 5:
						str = "fFr" /*FRIDAY*/;
						break;
				
					case 6:
						str = "fSa" /*SATURDAY*/;
						break;
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(-1f);
				func_6(str);
				func_6(func_5(num2));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				value2 = value2 + 1;
			}
		}
	
		value = value + 1;
	
		if (value > 23)
		{
			value = 0;
			num = num + 1;
		}
	
		if (num > 6)
			num = 0;
	
		if (num == Global_98983 && value == Global_98982)
			flag = false;
	}

	Global_98980 = Global_98979;
	return;
}

char* func_5(int iParam0) // Position - 0x3D0 (976)
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0" /*NOT SET!*/;
	
		case 1:
			return "ORG_EV_1" /*House Viewing*/;
	}

	return "ORG_EV_0" /*NOT SET!*/;
}

void func_6(char* sParam0) // Position - 0x400 (1024)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_7(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x412 (1042)
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

void func_8() // Position - 0x475 (1141)
{
	int clockMonth;
	int clockDayOfMonth;
	int clockHours;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	int j;
	int num6;
	int num7;

	if (!Global_98978)
	{
		Global_99162 = CLOCK::GET_CLOCK_MONTH();
		Global_99161 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		Global_99160 = CLOCK::GET_CLOCK_HOURS();
		Global_98978 = true;
		Global_98983 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		Global_98982 = CLOCK::GET_CLOCK_HOURS();
		func_12();
		return;
	}

	clockMonth = CLOCK::GET_CLOCK_MONTH();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	num = Global_99162;
	num2 = Global_99161;
	num3 = Global_99160;
	num4 = 0;
	num5 = 0;
	i = 0;
	j = 0;
	num6 = 0;
	num7 = func_9(num2, num, clockDayOfMonth, clockMonth);

	if (num7 > 0)
	{
		num6 = 0;
	
		if (num7 > 7)
		{
			i = 0;
			j = 0;
		
			for (i = 0; i < 7; i = i + 1)
			{
				for (j = 0; j < 24; j = j + 1)
				{
					if (!(Global_98984[num4 /*25*/][num5] == 0))
					{
						Global_98979 = Global_98979 + 1;
						Global_98981 = Global_98981 - 1;
					}
				
					Global_98984[num4 /*25*/][num5] = 0;
				}
			}
		}
		else if (num7 > 1)
		{
			num6 = num6 + ((num7 - 1) * 24);
		}
	
		num6 = num6 + (24 - num3);
		num6 = num6 + (24 - 24 - clockHours);
		i = 0;
		num5 = Global_98982;
		num4 = Global_98983;
	
		for (i = 0; i < num6; i = i + 1)
		{
			if (num5 > 23)
			{
				num5 = 0;
				num4 = num4 + 1;
			}
		
			if (num4 > 6)
				num4 = 0;
		
			if (!(Global_98984[num4 /*25*/][num5] == 0))
			{
				Global_98979 = Global_98979 + 1;
				Global_98981 = Global_98981 - 1;
			}
		
			Global_98984[num4 /*25*/][num5] = 0;
			num5 = num5 + 1;
		}
	
		Global_98982 = num5 - 1;
		Global_98983 = num4;
	}
	else
	{
		if (num3 > clockHours)
		{
			Global_99162 = clockMonth;
			Global_99161 = clockDayOfMonth;
			Global_99160 = clockHours;
			Global_98983 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
			Global_98982 = CLOCK::GET_CLOCK_HOURS();
			return;
		}
	
		if (num3 == clockHours)
		{
			return;
		}
		else
		{
			num6 = clockHours - num3;
			i = 0;
			num5 = Global_98982;
			num4 = Global_98983;
		
			for (i = 0; i < num6; i = i + 1)
			{
				if (!(Global_98984[num4 /*25*/][num5] == 0))
				{
					Global_98979 = Global_98979 + 1;
					Global_98981 = Global_98981 - 1;
				}
			
				Global_98984[num4 /*25*/][num5] = 0;
				num5 = num5 + 1;
			
				if (num5 > 23)
				{
					num5 = 0;
					num4 = num4 + 1;
				}
			
				if (num4 > 6)
					num4 = 0;
			}
		
			Global_98982 = num5;
			Global_98983 = num4;
		}
	}

	Global_98979 > Global_98980;

	if (num == clockMonth && num3 == clockHours && num2 == clockDayOfMonth)
	{
	}
	else
	{
		Global_99162 = clockMonth;
		Global_99161 = clockDayOfMonth;
		Global_99160 = clockHours;
	}

	return;
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x712 (1810)
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	i = 0;

	if (!(iParam1 == iParam3))
	{
		if (iParam1 < iParam3)
		{
			num = func_10(iParam1) - func_10(iParam1) - iParam0;
			num2 = 0;
		
			if (iParam3 > iParam1 + 1)
			{
				num3 = iParam3 - iParam1;
				num4 = iParam1 + 1;
				i = 0;
			
				for (i = 0; i < num3; i = i + 1)
				{
					if (num4 > 11)
						num4 = 0;
				
					num2 = num2 + func_10(num4);
					num4 = num4 + 1;
				}
			}
		
			num5 = func_10(iParam3) - iParam2;
			num6 = num + num2 + num5;
			return num6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
			return 0;
	
		if (iParam2 == iParam0)
			return 0;
	
		return iParam2 - iParam0;
	}

	return 0;
}

int func_10(int iParam0) // Position - 0x7C5 (1989)
{
	return func_11(iParam0);
}

int func_11(int iParam0) // Position - 0x7D3 (2003)
{
	switch (iParam0)
	{
		case 8:
			return 30;
	
		case 3:
			return 30;
	
		case 5:
			return 30;
	
		case 10:
			return 30;
	
		case 1:
			return 28;
	
		default:
		
	}

	return 31;
}

void func_12() // Position - 0x81F (2079)
{
	int i;
	int j;

	Global_98982 = 0;
	Global_98983 = 0;
	i = 0;
	j = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		for (j = 0; j < 24; j = j + 1)
		{
			Global_98984[i /*25*/][j] = 0;
		}
	}

	func_13();
	return;
}

void func_13() // Position - 0x86D (2157)
{
	Global_98982 = 0;
	Global_98983 = 0;
	Global_99160 = CLOCK::GET_CLOCK_HOURS();
	Global_99161 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	Global_99162 = CLOCK::GET_CLOCK_MONTH();
	return;
}

void func_14() // Position - 0x897 (2199)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


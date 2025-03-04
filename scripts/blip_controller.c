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
	char* sLocal_19 = 0;
	char* sLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	BOOL bLocal_43 = 0;
	BOOL bLocal_44 = 0;
	BOOL bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	Interior inLocal_49 = 0;
	BOOL bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 7;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	eCharacter echLocal_61 = CHAR_MICHAEL;
	eCharacter echLocal_62 = CHAR_MICHAEL;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	BOOL bLocal_69 = 0;
	BOOL bLocal_70 = 0;
	BOOL bLocal_71 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int i;
	int num;
	int j;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	int num5;
	int num6;
	BOOL flag3;
	int num7;

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
	sLocal_19 = "CHECKPOINT_NORMAL";
	sLocal_20 = "CHECKPOINT_MISSED";
	sLocal_21 = "CHECKPOINT_PERFECT";
	uLocal_22 = { 1694.7395f, 3276.5024f, 41.2796f };
	uLocal_25 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_37 = 80f;
	fLocal_38 = 140f;
	fLocal_39 = 180f;
	bLocal_48 = true;
	iLocal_51 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_52();

	for (i = 0; i <= 61; i = i + 1)
	{
		if (func_51(i))
		{
			num = func_50(i);
			func_47(num, func_48(i));
		}
	}

	func_46(91, true);
	func_46(92, true);
	Global_33482 = true;

	while (Global_33484)
	{
		MISC::GET_GAME_TIMER() % 250 == 0;
		SYSTEM::WAIT(0);
	}

	j = 0;

	for (j = 0; j < 7; j = j + 1)
	{
		uLocal_53[j] = -1;
	}

	MISC::SET_BIT(&(Global_33485[j /*23*/].f_11), 18);
	j = 0;

	for (j = 0; j < 263; j = j + 1)
	{
		MISC::SET_BIT(&(Global_33485[j /*23*/].f_11), 18);
	}

	bLocal_69 = Global_39536;
	flag = false;
	func_45();
	func_43();

	while (true)
	{
		if (!flag)
			func_42();
	
		flag = func_35();
	
		if (flag)
			Global_33482 = true;
	
		num2 = 0;
		num3 = 0;
		j = 0;
	
		if (Global_33482)
		{
			func_45();
			func_43();
			num4 = 0;
		
			for (j = 0; j < 263; j = j + 1)
			{
				flag2 = IS_BIT_SET(Global_33485[j /*23*/].f_11, 18);
			
				if (!flag2)
				{
					if (func_34(j))
					{
						num3 = num3 + 1;
						flag2 = true;
					}
				}
			
				num2 = num2 + 1;
			
				if (flag2)
				{
					num5 = 0;
					num6 = 0;
				
					if (Global_39536)
					{
						num5 = num5 + 1;
						num6 = num6 + 1;
					}
					else
					{
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 13))
						{
							if (func_33())
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 1))
						{
							if (!bLocal_48)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 2))
						{
							if (bLocal_48)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 7))
						{
							if (!func_32(15))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 16))
						{
							if (!_CAN_ENTER_FREEROAM_STATE(Global_33485[j /*23*/].f_22))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 14))
						{
							if (func_32(5))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 8))
						{
							if (Global_33485[j /*23*/].f_16 != 4 && Global_33485[j /*23*/].f_16 != 8)
							{
								if (!func_29(j))
									num5 = num5 + 1;
							
								num6 = num6 + 1;
							}
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 19))
						{
							switch (echLocal_62)
							{
								case CHAR_FRANKLIN:
								case CHAR_MICHAEL:
								case CHAR_TREVOR:
									break;
							
								default:
									num5 = num5 + 1;
									break;
							}
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 27))
						{
							if (bLocal_43)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (Global_33485[j /*23*/].f_16 == 1)
							func_23();
					}
				
					if (num6 > 0)
						if (num5 > 0)
							MISC::CLEAR_BIT(&(Global_33485[j /*23*/].f_11), 0);
						else if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 15))
							MISC::SET_BIT(&(Global_33485[j /*23*/].f_11), 0);
					else if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 15))
						MISC::SET_BIT(&(Global_33485[j /*23*/].f_11), 0);
				
					if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 0) && IS_BIT_SET(Global_33485[j /*23*/].f_11, 3))
					{
						flag3 = false;
					
						if (!HUD::DOES_BLIP_EXIST(Global_33485[j /*23*/].f_19))
						{
							while (!(HUD::GET_NUMBER_OF_ACTIVE_BLIPS() < 150))
							{
								SYSTEM::WAIT(2000);
							}
						
							if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 19))
							{
								switch (echLocal_62)
								{
									case CHAR_FRANKLIN:
									case CHAR_MICHAEL:
									case CHAR_TREVOR:
										if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 28))
										{
											Global_33485[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_33485[j /*23*/][0 /*3*/], Global_33485[j /*23*/].f_10);
											HUD::SET_BLIP_ALPHA(Global_33485[j /*23*/].f_19, 128);
											HUD::SHOW_HEIGHT_ON_BLIP(Global_33485[j /*23*/].f_19, false);
										}
										else
										{
											Global_33485[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_33485[j /*23*/][echLocal_62 /*3*/]);
											HUD::SET_BLIP_SPRITE(Global_33485[j /*23*/].f_19, Global_33485[j /*23*/].f_12[echLocal_62]);
										}
										break;
								
									default:
										Global_33485[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 28))
							{
								Global_33485[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_33485[j /*23*/][0 /*3*/], Global_33485[j /*23*/].f_10);
								HUD::SET_BLIP_ALPHA(Global_33485[j /*23*/].f_19, 128);
								HUD::SHOW_HEIGHT_ON_BLIP(Global_33485[j /*23*/].f_19, false);
							}
							else
							{
								Global_33485[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_33485[j /*23*/][0 /*3*/]);
								HUD::SET_BLIP_SPRITE(Global_33485[j /*23*/].f_19, Global_33485[j /*23*/].f_12[0]);
							}
						
							if (Global_33485[j /*23*/].f_16 == 1)
								flag3 = true;
						}
						else
						{
							if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 19))
							{
								switch (echLocal_62)
								{
									case CHAR_FRANKLIN:
									case CHAR_MICHAEL:
									case CHAR_TREVOR:
										HUD::SET_BLIP_COORDS(Global_33485[j /*23*/].f_19, Global_33485[j /*23*/][echLocal_62 /*3*/]);
										break;
								
									default:
										break;
								}
							}
							else
							{
								HUD::SET_BLIP_COORDS(Global_33485[j /*23*/].f_19, Global_33485[j /*23*/][0 /*3*/]);
							}
						
							if (IS_BIT_SET(Global_33485[j /*23*/].f_11, 9))
							{
								if (bLocal_45)
								{
									HUD::SET_BLIP_FLASHES(Global_33485[j /*23*/].f_19, true);
									bLocal_45 = false;
								}
								else
								{
									HUD::SET_BLIP_FLASHES_ALTERNATE(Global_33485[j /*23*/].f_19, true);
									bLocal_45 = true;
								}
							
								HUD::SET_BLIP_FLASH_TIMER(Global_33485[j /*23*/].f_19, 10000);
								MISC::CLEAR_BIT(&(Global_33485[j /*23*/].f_11), 9);
							}
							else
							{
								HUD::SET_BLIP_FLASHES(Global_33485[j /*23*/].f_19, false);
							}
						}
					
						func_20(Global_33485[j /*23*/].f_19, j);
					
						if (flag3)
							func_19(j);
					
						num3 = num3 + 1;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_33485[j /*23*/].f_19))
						{
							HUD::REMOVE_BLIP(&(Global_33485[j /*23*/].f_19));
							num3 = num3 + 1;
						
							if (Global_33485[j /*23*/].f_16 == 1)
								func_18(j);
						}
					
						Global_33485[j /*23*/].f_19 = 0;
					}
				}
			
				MISC::CLEAR_BIT(&(Global_33485[j /*23*/].f_11), 18);
				num7 = 30;
			
				if (CAM::IS_SCREEN_FADED_OUT())
					num7 = 250;
			
				if (num3 > num7)
				{
					SYSTEM::WAIT(0);
					num3 = 0;
				}
			
				if (num2 / 20 > num4)
				{
					num4 = num2 / 20;
					SYSTEM::WAIT(0);
				}
			}
		}
	
		Global_33482 = Global_33483;
		Global_33483 = false;
	
		if (num2 == 0)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(500);
			echLocal_62 = _GET_CURRENT_PLAYER_CHARACTER();
		}
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x716 (1814)
{
	func_2();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_2() // Position - 0x72F (1839)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_3(character) && !func_32(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_3(Global_114162.f_2367.f_539.f_4321))
					Global_114162.f_2367.f_539.f_4322 = Global_114162.f_2367.f_539.f_4321;
			
				Global_114162.f_2367.f_539.f_4323 = character;
				Global_114162.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114162.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114162.f_2367.f_539.f_4323 = Global_114162.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114162.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_3(eCharacter echParam0) // Position - 0x82C (2092)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x838 (2104)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x875 (2165)
{
	if (func_3(character))
		return func_6(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_6(eCharacter echParam0) // Position - 0x89A (2202)
{
	return Global_2201[echParam0 /*29*/];
}

void func_7() // Position - 0x8A9 (2217)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
	{
		if (func_10(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_10(126))
				{
					if (func_9(138))
						func_8(138, false, false);
				
					if (!func_9(139))
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) == 0)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
								func_8(139, true, false);
				}
				else
				{
					if (func_9(139))
						func_8(139, false, false);
				
					if (!func_9(138))
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) == 0)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
								func_8(138, true, false);
				}
			}
		}
	}

	return;
}

void func_8(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x985 (2437)
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33485[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33485[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 18);
	
		if (Global_33482 == true)
			Global_33483 = 1;
	
		Global_33482 = true;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33485[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33485[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33485[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

BOOL func_9(int iParam0) // Position - 0xA85 (2693)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33485[num /*23*/].f_19);
}

BOOL func_10(int iParam0) // Position - 0xAC1 (2753)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114162.f_9089.f_99.f_58[iParam0];
}

void func_11() // Position - 0xAEE (2798)
{
	Vector3 vector;
	int num;
	float num2;
	int i;
	float distanceBetweenCoords;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		return;

	vector = { _GET_PLAYER_COORDS(PLAYER::GET_PLAYER_INDEX()) };
	num = -1;
	num2 = 1000000f;
	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Global_33485[uLocal_53[i] /*23*/].f_19))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, HUD::GET_BLIP_COORDS(Global_33485[uLocal_53[i] /*23*/].f_19), true);
			
				if (distanceBetweenCoords < num2)
				{
					num2 = distanceBetweenCoords;
					num = i;
				}
			}
		}
	}

	if (iLocal_51 == num)
		return;

	iLocal_51 = num;

	if (num == -1)
		return;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] != -1)
			if (i == num)
				if (HUD::DOES_BLIP_EXIST(Global_33485[uLocal_53[i] /*23*/].f_19))
					func_16(uLocal_53[i]);
			else if (HUD::DOES_BLIP_EXIST(Global_33485[uLocal_53[i] /*23*/].f_19))
				func_12(uLocal_53[i]);
	}

	return;
}

void func_12(int iParam0) // Position - 0xBF2 (3058)
{
	func_15(iParam0, false, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

void func_13(int iParam0, BOOL bParam1) // Position - 0xC10 (3088)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33485[num /*23*/].f_11, 4))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 4);
	else
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 4);

	if (Global_33482 == true)
		Global_33483 = 1;

	Global_33482 = true;
	MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 18);
	return;
}

void func_14(int iParam0, BOOL bParam1) // Position - 0xC93 (3219)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33485[num /*23*/].f_11, 5))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 5);
	else
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 5);

	if (Global_33482 == true)
		Global_33483 = 1;

	Global_33482 = true;
	MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 18);
	return;
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD16 (3350)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33485[num /*23*/].f_11, 6))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 6);
	else
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 6);

	if (bParam2)
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 11);
	else
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 11);

	if (Global_33482 == true)
		Global_33483 = 1;

	Global_33482 = true;
	MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 18);
	return;
}

void func_16(int iParam0) // Position - 0xDBF (3519)
{
	func_15(iParam0, true, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0xDDD (3549)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_18(int iParam0) // Position - 0xDF0 (3568)
{
	int i;

	if (iLocal_52 < 1)
		return;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] == iParam0)
		{
			iLocal_52 = iLocal_52 - 1;
			uLocal_53[i] = -1;
		
			if (iParam0 == iLocal_51)
				iLocal_51 = -1;
		
			return;
		}
	}

	return;
}

void func_19(int iParam0) // Position - 0xE3B (3643)
{
	int i;
	int num;

	if (iLocal_52 == 7)
		return;

	i = 0;
	num = -1;

	for (i = 0; i < iLocal_52; i = i + 1)
	{
		if (uLocal_53[i] == iParam0)
			return;
	}

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] == -1)
		{
			num = i;
			i = 7;
		}
	}

	uLocal_53[num] = iParam0;
	iLocal_52 = iLocal_52 + 1;
	return;
}

void func_20(Blip blParam0, int iParam1) // Position - 0xEA4 (3748)
{
	eCharacter character;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	character = _GET_CURRENT_PLAYER_CHARACTER();
	HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(blParam0, true);
	HUD::SET_BLIP_PRIORITY(blParam0, 2);
	HUD::SET_BLIP_COLOUR(blParam0, func_22(iParam1));

	if (Global_33485[iParam1 /*23*/].f_16 == 4 || Global_33485[iParam1 /*23*/].f_16 == 8)
	{
		switch (character)
		{
			case CHAR_MICHAEL:
				HUD::SET_BLIP_COLOUR(blParam0, 42);
				break;
		
			case CHAR_FRANKLIN:
				HUD::SET_BLIP_COLOUR(blParam0, 43);
				break;
		
			case CHAR_TREVOR:
				HUD::SET_BLIP_COLOUR(blParam0, 44);
				break;
		}
	}

	if (!IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 28))
		HUD::SET_BLIP_SCALE(blParam0, 1f);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_33485[iParam1 /*23*/].f_20)))
		if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_33485[iParam1 /*23*/].f_20)))
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blParam0, &(Global_33485[iParam1 /*23*/].f_20));

	flag = IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 4);
	flag2 = IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 5);
	flag3 = IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 6);
	flag4 = false;

	if (func_21(0))
		flag4 = IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 11);

	if (flag3 && !flag4)
		HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, false);
	else
		HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, true);

	if (flag2 && flag)
	{
		HUD::SET_BLIP_DISPLAY(blParam0, 4);
	}
	else
	{
		if (flag2)
			HUD::SET_BLIP_DISPLAY(blParam0, 5);
	
		if (flag)
			HUD::SET_BLIP_DISPLAY(blParam0, 3);
	}

	switch (Global_33485[iParam1 /*23*/].f_16)
	{
		case 7:
			HUD::SET_BLIP_PRIORITY(blParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, false);
			break;
	
		case 6:
		case 5:
			HUD::SET_BLIP_PRIORITY(blParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, false);
			break;
	
		case 1:
			HUD::SET_BLIP_PRIORITY(blParam0, 3);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, true);
			break;
	
		case 9:
			HUD::SET_BLIP_PRIORITY(blParam0, 1);
			HUD::SET_BLIP_CATEGORY(blParam0, 10);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, false);
			break;
	
		case 4:
		case 8:
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, true);
		
			if (Global_33485[iParam1 /*23*/].f_16 == 4)
				HUD::SET_BLIP_PRIORITY(blParam0, 7);
			else
				HUD::SET_BLIP_PRIORITY(blParam0, 5);
		
			if (IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(blParam0, 0);
					}
					else
					{
						if (Global_33485[iParam1 /*23*/].f_17 == CHAR_MICHAEL)
							HUD::SET_BLIP_COLOUR(blParam0, 42);
					
						if (Global_33485[iParam1 /*23*/].f_17 == CHAR_FRANKLIN)
							HUD::SET_BLIP_COLOUR(blParam0, 43);
					
						if (Global_33485[iParam1 /*23*/].f_17 == CHAR_TREVOR)
							HUD::SET_BLIP_COLOUR(blParam0, 44);
					
						if (Global_33485[iParam1 /*23*/].f_16 == 8)
						{
							HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 5));
							HUD::SET_BLIP_PRIORITY(blParam0, 3);
							HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, true);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(blParam0, true);
							HUD::SET_BLIP_SCALE(blParam0, 0.77f);
						}
						else
						{
							HUD::SET_BLIP_SCALE(blParam0, 0.72f);
						}
					}
				}
				else
				{
					if (IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 28))
						HUD::SET_BLIP_ALPHA(blParam0, 128);
				
					if (Global_33485[iParam1 /*23*/].f_16 == 8)
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(blParam0, false);
				}
			}
			break;
	
		default:
			HUD::SET_BLIP_PRIORITY(blParam0, 5);
			break;
	}

	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, true);
			break;
	}

	if (IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 19))
	{
		switch (character)
		{
			case CHAR_FRANKLIN:
			case CHAR_MICHAEL:
			case CHAR_TREVOR:
				HUD::SET_BLIP_COORDS(Global_33485[iParam1 /*23*/].f_19, Global_33485[iParam1 /*23*/][character /*3*/]);
				break;
		}
	}

	if (IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 17))
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(blParam0, true);
	else
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(blParam0, false);

	if (IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 20))
		HUD::SHOW_TICK_ON_BLIP(blParam0, true);
	else
		HUD::SHOW_TICK_ON_BLIP(blParam0, false);

	if (IS_BIT_SET(Global_33485[iParam1 /*23*/].f_11, 29))
		HUD::SET_BLIP_COLOUR(blParam0, 39);

	return;
}

BOOL func_21(int iParam0) // Position - 0x128B (4747)
{
	if (Global_44199 == 15)
		return 0;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return 0;

	return 1;
}

int func_22(int iParam0) // Position - 0x12AD (4781)
{
	int num;
	int bitsInRange;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0;

	bitsInRange = MISC::GET_BITS_IN_RANGE(Global_33485[num /*23*/].f_11, 21, 26);
	return bitsInRange;
}

void func_23() // Position - 0x12F0 (4848)
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		func_24(i);
	}

	return;
}

void func_24(int iParam0) // Position - 0x1310 (4880)
{
	BOOL flag;

	if (iParam0 == 10)
		return;

	if (Global_96726[iParam0 /*10*/].f_7 == 263)
		return;

	flag = false;

	if (IS_BIT_SET(Global_114162.f_7233[iParam0], 0))
		if (Global_96726[iParam0 /*10*/].f_9 != _GET_CURRENT_PLAYER_CHARACTER_0())
			flag = true;
		else if (!func_26(iParam0))
			flag = true;

	if (iParam0 == 5)
		if (func_25(6))
			flag = false;

	if (func_21(14))
		flag = false;

	func_8(Global_96726[iParam0 /*10*/].f_7, flag, false);
	return;
}

BOOL func_25(int iParam0) // Position - 0x139A (5018)
{
	return IS_BIT_SET(Global_114162.f_7233[iParam0], 0);
}

BOOL func_26(int iParam0) // Position - 0x13AF (5039)
{
	int i;
	var interiorType;
	Interior interiorAtCoordsWithType;

	if (Global_101765.f_397 == 0)
		return false;

	if (iParam0 == 10)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (func_26(i))
				return true;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_27(iParam0, &interiorType);
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_96726[iParam0 /*10*/].f_3, &interiorType);
	
		if (interiorAtCoordsWithType != 0 && Global_101765.f_397 == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_27(int iParam0, char* sParam1) // Position - 0x1434 (5172)
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
			break;
	
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
			break;
	
		case 8:
		case 7:
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
			break;
	}

	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x1508 (5384)
{
	func_2();
	return Global_114162.f_2367.f_539.f_4321;
}

BOOL func_29(int iParam0) // Position - 0x1521 (5409)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	if (!IS_BIT_SET(Global_33485[num /*23*/].f_11, 8))
		return false;

	if (Global_33485[num /*23*/].f_17 == _GET_CURRENT_PLAYER_CHARACTER())
		return true;

	if (!IS_BIT_SET(Global_33485[num /*23*/].f_11, 10))
		return false;

	if (Global_33485[num /*23*/].f_18 == _GET_CURRENT_PLAYER_CHARACTER())
		return true;

	return false;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x15A1 (5537)
{
	return func_31(iParam0, Global_44199);
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x15B2 (5554)
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

BOOL func_32(int iParam0) // Position - 0x1793 (6035)
{
	return Global_44199 == iParam0;
}

BOOL func_33() // Position - 0x17A1 (6049)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
		return true;

	return false;
}

BOOL func_34(int iParam0) // Position - 0x17BA (6074)
{
	if (bLocal_66 && IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 13))
	{
		MISC::SET_BIT(&(Global_33485[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_67 && IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 7) || IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 11) || IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 16))
	{
		MISC::SET_BIT(&(Global_33485[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_68 && IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 14))
	{
		MISC::SET_BIT(&(Global_33485[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_63 && IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 10) || IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 8) || IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 19))
	{
		MISC::SET_BIT(&(Global_33485[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_64)
	{
		MISC::SET_BIT(&(Global_33485[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_70 && IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 27))
	{
		MISC::SET_BIT(&(Global_33485[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_71 && IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 1) || IS_BIT_SET(Global_33485[iParam0 /*23*/].f_11, 2) || Global_33485[iParam0 /*23*/].f_16 == 1)
	{
		MISC::SET_BIT(&(Global_33485[iParam0 /*23*/].f_11), 18);
		return true;
	}

	return false;
}

BOOL func_35() // Position - 0x1939 (6457)
{
	int num;

	num = 0;

	if (func_41())
	{
		if (!bLocal_65)
		{
			bLocal_65 = true;
			num = 1;
		}
	}

	if (func_40())
	{
		if (!bLocal_66)
		{
			bLocal_66 = true;
			num = 1;
		}
	}

	if (func_39())
	{
		if (!bLocal_67)
		{
			bLocal_67 = true;
			num = 1;
		}
	}

	if (func_38())
	{
		if (!bLocal_68)
		{
			bLocal_68 = true;
			num = 1;
		}
	}

	bLocal_64 = false;

	if (Global_39536 != bLocal_69)
	{
		bLocal_69 = Global_39536;
	
		if (!bLocal_64)
		{
			bLocal_64 = true;
			num = 1;
		}
	}

	if (func_36())
	{
		if (!bLocal_71)
		{
			bLocal_71 = true;
			num = 1;
		}
	}

	echLocal_62 = _GET_CURRENT_PLAYER_CHARACTER();

	if (echLocal_62 != echLocal_61)
	{
		echLocal_61 = echLocal_62;
		bLocal_63 = true;
		num = 1;
	}

	bLocal_44 = bLocal_43;

	if (func_10(130))
		bLocal_43 = true;

	if (func_10(131))
		bLocal_43 = false;

	if (bLocal_43 != bLocal_44)
	{
		if (!bLocal_70)
			num = 1;
	
		bLocal_70 = true;
	}

	return num;
}

BOOL func_36() // Position - 0x1A07 (6663)
{
	Interior interiorFromEntity;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
		return false;

	interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));

	if (inLocal_49 != interiorFromEntity)
	{
		inLocal_49 = interiorFromEntity;
	
		if (interiorFromEntity == 0 || func_37(interiorFromEntity, false))
			bLocal_48 = true;
		else
			bLocal_48 = false;
	
		return true;
	}

	return false;
}

BOOL func_37(Interior inParam0, BOOL bParam1) // Position - 0x1A5E (6750)
{
	int i;

	i = 0;

	for (i = 0; i <= 60; i = i + 1)
	{
		if (bParam1 && Global_33[i] == 0)
		{
		}
		else if (Global_33[i] == inParam0)
		{
			return true;
		}
	}

	return false;
}

BOOL func_38() // Position - 0x1AA3 (6819)
{
	if (bLocal_50 != func_21(0))
	{
		bLocal_50 = func_21(0);
		return true;
	}

	return false;
}

BOOL func_39() // Position - 0x1AC1 (6849)
{
	BOOL flag;

	flag = Global_39537;
	Global_39537 = false;
	flag;
	return flag;
}

BOOL func_40() // Position - 0x1AD9 (6873)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_47)
	{
		iLocal_47 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return true;
	}

	return false;
}

BOOL func_41() // Position - 0x1AFD (6909)
{
	if (Global_44199 != 15)
		return false;

	if (CLOCK::GET_CLOCK_HOURS() != iLocal_46)
	{
		iLocal_46 = CLOCK::GET_CLOCK_HOURS();
		return true;
	}

	return false;
}

void func_42() // Position - 0x1B25 (6949)
{
	bLocal_63 = false;
	bLocal_64 = false;
	bLocal_65 = false;
	bLocal_66 = false;
	bLocal_67 = false;
	bLocal_68 = false;
	bLocal_69 = false;
	bLocal_70 = false;
	bLocal_71 = false;
	return;
}

void func_43() // Position - 0x1B48 (6984)
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(112, true, false);
		func_8(113, true, false);
		func_8(114, true, false);
	}

	return;
}

int func_44(int iParam0) // Position - 0x1B7D (7037)
{
	if (iParam0 == 94 || iParam0 == -1)
		return 0;

	return Global_114162.f_9089.f_330[iParam0 /*6*/];
}

void func_45() // Position - 0x1BA9 (7081)
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(156, 1, false);
		func_8(157, true, false);
		func_8(161, true, false);
		func_8(160, true, false);
		func_8(158, true, false);
		func_12(158);
		func_8(159, true, false);
		func_12(159);
	}

	return;
}

void func_46(int iParam0, BOOL bParam1) // Position - 0x1C02 (7170)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33485[num /*23*/].f_11, 2))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 2);
	else
		MISC::CLEAR_BIT(&(Global_33485[num /*23*/].f_11), 2);

	if (Global_33482 == true)
		Global_33483 = 1;

	Global_33482 = true;
	MISC::SET_BIT(&(Global_33485[num /*23*/].f_11), 18);
	return;
}

void func_47(int iParam0, char* sParam1) // Position - 0x1C85 (7301)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_33485[num /*23*/].f_20), sParam1, 8);

	if (HUD::DOES_BLIP_EXIST(Global_33485[num /*23*/].f_19))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_33485[num /*23*/].f_19, sParam1);

	return;
}

char* func_48(int iParam0) // Position - 0x1CDF (7391)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL" /*Barber Shop*/;
	
		case 1:
			return "SB_BAR" /*Barber Shop*/;
	
		case 2:
			return "SB_BAR" /*Barber Shop*/;
	
		case 3:
			return "SB_BAR" /*Barber Shop*/;
	
		case 4:
			return "SB_BAR" /*Barber Shop*/;
	
		case 5:
			return "SB_BAR" /*Barber Shop*/;
	
		case 6:
			return "SB_BAR" /*Barber Shop*/;
	
		case 7:
			return func_49(iParam0, 0, false);
	
		case 8:
			return func_49(iParam0, 0, false);
	
		case 9:
			return func_49(iParam0, 0, false);
	
		case 10:
			return func_49(iParam0, 0, false);
	
		case 11:
			return func_49(iParam0, 0, false);
	
		case 12:
			return func_49(iParam0, 0, false);
	
		case 13:
			return func_49(iParam0, 0, false);
	
		case 14:
			return func_49(iParam0, 0, false);
	
		case 15:
			return func_49(iParam0, 0, false);
	
		case 16:
			return func_49(iParam0, 0, false);
	
		case 17:
			return func_49(iParam0, 0, false);
	
		case 18:
			return func_49(iParam0, 0, false);
	
		case 19:
			return func_49(iParam0, 0, false);
	
		case 20:
			return func_49(iParam0, 0, false);
	
		case 21:
			return func_49(iParam0, 0, false);
	
		case 22:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 23:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 24:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 25:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 26:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 27:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 28:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 29:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 30:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 31:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 32:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 33:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 34:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 35:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 36:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 37:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 38:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 39:
			return func_49(iParam0, 0, false);
	
		case 40:
			return func_49(iParam0, 0, false);
	
		case 41:
			return func_49(iParam0, 0, false);
	
		case 42:
			return func_49(iParam0, 0, false);
	
		case 43:
			return func_49(iParam0, 0, false);
	
		case 44:
			return func_49(iParam0, 0, false);
	
		case 45:
			return func_49(iParam0, 0, false);
	
		case 46:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 47:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 48:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 49:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 52:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 50:
			return "SB_BAR" /*Barber Shop*/;
	
		case 51:
			return "S_CL_BL" /*Casino Store*/;
	
		case 53:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 54:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 55:
			return func_49(iParam0, 0, false);
	
		case 56:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 57:
			return func_49(iParam0, 0, false);
	
		case 58:
			return func_49(iParam0, 0, false);
	
		case 59:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 60:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 61:
			return "SB_AMU" /*Ammu-Nation*/;
	}

	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2125 (8485)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /*Empty Shop*/;
	
		case 0:
			return "S_H_01" /*Bob Mulét Hair & Beauty*/;
	
		case 1:
			return "S_H_02" /*Herr Kutz Barber*/;
	
		case 2:
			return "S_H_03" /*Beachcombover Barbers*/;
	
		case 3:
			return "S_H_04" /*O'Sheas Barbers*/;
	
		case 4:
			return "S_H_05" /*Herr Kutz Barber*/;
	
		case 5:
			return "S_H_06" /*Hair On Hawick Barbers*/;
	
		case 6:
			return "S_H_07" /*Herr Kutz Barber*/;
	
		case 7:
			return "S_CL_01" /*Discount Store*/;
	
		case 8:
			return "S_CL_02" /*Discount Store*/;
	
		case 9:
			return "S_CL_03" /*Binco Clothing*/;
	
		case 10:
			return "S_CL_04" /*Discount Store*/;
	
		case 11:
			return "S_CL_05" /*Discount Store*/;
	
		case 12:
			return "S_CL_06" /*Binco Clothing*/;
	
		case 13:
			return "S_CL_07" /*Discount Store*/;
	
		case 14:
			return "S_CM_01" /*Suburban*/;
	
		case 15:
			return "S_CM_03" /*Suburban*/;
	
		case 16:
			return "S_CM_04" /*Suburban*/;
	
		case 17:
			return "S_CM_05" /*Suburban*/;
	
		case 18:
			return "S_CH_01" /*Ponsonbys*/;
	
		case 19:
			return "S_CH_02" /*Ponsonbys*/;
	
		case 20:
			return "S_CH_03" /*Ponsonbys*/;
	
		case 21:
			return "S_CA_01" /*Vespucci Movie Masks*/;
	
		case 22:
			return "S_T_01" /*Blazing Tattoo*/;
	
		case 23:
			return "S_T_02" /*Alamo Tattoo Studio*/;
	
		case 24:
			return "S_T_03" /*Paleto Tattoo Studio*/;
	
		case 25:
			return "S_T_04" /*The Pit*/;
	
		case 26:
			return "S_T_05" /*Los Santos Tattoos*/;
	
		case 27:
			return "S_T_06" /*Ink Inc Tattoos*/;
	
		case 28:
			return "S_G_01" /*Ammu-Nation*/;
	
		case 29:
			return "S_G_02" /*Ammu-Nation*/;
	
		case 30:
			return "S_G_03" /*Ammu-Nation*/;
	
		case 31:
			return "S_G_04" /*Ammu-Nation*/;
	
		case 32:
			return "S_G_05" /*Ammu-Nation*/;
	
		case 33:
			return "S_G_06" /*Ammu-Nation*/;
	
		case 34:
			return "S_G_07" /*Ammu-Nation*/;
	
		case 35:
			return "S_G_08" /*Ammu-Nation*/;
	
		case 36:
			return "S_G_09" /*Ammu-Nation*/;
	
		case 37:
			return "S_G_10" /*Ammu-Nation*/;
	
		case 38:
			return "S_G_11" /*Ammu-Nation*/;
	
		case 39:
			return "S_MO_01" /*Los Santos Customs*/;
	
		case 40:
			return "S_MO_05" /*Los Santos Customs*/;
	
		case 41:
			return "S_MO_06" /*Los Santos Customs*/;
	
		case 42:
			return "S_MO_07" /*Beeker's Garage*/;
	
		case 43:
			return "S_MO_08" /*Los Santos Customs*/;
	
		case 44:
			return "S_MO_09" /*Benny's Original Motor Works*/;
	
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 5:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 11:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					else
						return "S_MO_B" /*Bunker Vehicle Workshop*/;
					break;
			
				case 10:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					else
						return "S_MO_T" /*Weapon & Vehicle Workshop*/;
					break;
			
				case 12:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					else
						return "S_MO_HA" /*Hangar Aircraft Workshop*/;
					break;
			
				case 13:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 14:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 15:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 23:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_DEN";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 16:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 17:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 18:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET_HSW";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 19:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 20:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 21:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 22:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_VINEWOOD_PREMIUM_GARAGE";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			}
		
			return "S_MO_11" /*Custom Auto Shop*/;
	
		case 46:
			return "S_G_12" /*MOC Armory*/;
	
		case 47:
			return "S_G_13" /*Avenger Armory*/;
	
		case 48:
			return "S_G_14" /*Terrorbyte Armory*/;
	
		case 49:
			return "S_G_15" /*Arena Armory*/;
	
		case 52:
			return "S_G_16" /*Arcade Armory*/;
	
		case 53:
			return "S_G_17" /*Kosatka Armory*/;
	
		case 50:
			return "S_H_08" /*Penthouse Barber*/;
	
		case 51:
			return "S_CL_09" /*Casino Store*/;
	
		case 54:
			return "S_T_07" /*LS Car Meet Tattoos*/;
	
		case 55:
			return "S_CL_10" /*Merch Shop*/;
	
		case 56:
			return "S_G_18" /*Fixer Armory*/;
	
		case 57:
			return "S_CL_11" /*Record A Studios*/;
	
		case 58:
			return "S_G_19" /*Gun Van*/;
	
		case 59:
			return "S_G_20";
	
		case 60:
			return "S_G_21";
	
		case 61:
			return "S_G_22";
	}

	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0) // Position - 0x271F (10015)
{
	switch (iParam0)
	{
		case -1:
			return 263;
	
		case 0:
			return 19;
	
		case 1:
			return 20;
	
		case 2:
			return 21;
	
		case 3:
			return 22;
	
		case 4:
			return 23;
	
		case 5:
			return 24;
	
		case 6:
			return 25;
	
		case 7:
			return 26;
	
		case 8:
			return 27;
	
		case 9:
			return 28;
	
		case 10:
			return 29;
	
		case 11:
			return 30;
	
		case 12:
			return 31;
	
		case 13:
			return 32;
	
		case 14:
			return 33;
	
		case 15:
			return 35;
	
		case 16:
			return 36;
	
		case 17:
			return 37;
	
		case 18:
			return 38;
	
		case 19:
			return 39;
	
		case 20:
			return 40;
	
		case 21:
			return 41;
	
		case 22:
			return 42;
	
		case 23:
			return 43;
	
		case 24:
			return 44;
	
		case 25:
			return 45;
	
		case 26:
			return 46;
	
		case 27:
			return 47;
	
		case 28:
			return 48;
	
		case 29:
			return 49;
	
		case 30:
			return 50;
	
		case 31:
			return 51;
	
		case 32:
			return 52;
	
		case 33:
			return 53;
	
		case 34:
			return 54;
	
		case 35:
			return 55;
	
		case 36:
			return 56;
	
		case 37:
			return 57;
	
		case 38:
			return 58;
	
		case 39:
			return 59;
	
		case 40:
			return 60;
	
		case 41:
			return 61;
	
		case 42:
			return 62;
	
		case 43:
			return 63;
	
		case 44:
			return 64;
	
		case 45:
			return 64;
	
		case 46:
			return 48;
	
		case 47:
			return 48;
	
		case 48:
			return 48;
	
		case 49:
			return 48;
	
		case 52:
			return 48;
	
		case 50:
			return 25;
	
		case 51:
			return 40;
	
		case 53:
			return 48;
	
		case 54:
			return 42;
	
		case 55:
			return 40;
	
		case 56:
			return 48;
	
		case 57:
			return 40;
	
		case 58:
			return 48;
	
		case 59:
			return 48;
	
		case 60:
			return 48;
	
		case 61:
			return 48;
	
		default:
			break;
	}

	return 263;
}

BOOL func_51(int iParam0) // Position - 0x2AA7 (10919)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return true;
	
		case 44:
			break;
	}

	return false;
}

void func_52() // Position - 0x2BCF (11215)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


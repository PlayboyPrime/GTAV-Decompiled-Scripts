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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 20;
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
	var uLocal_72 = 20;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	BOOL bLocal_93 = 0;
	int iLocal_94 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int i;

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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_94 = -15;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_137();

	func_136();
	func_134();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (func_131(4) || Global_98583)
			func_137();
	
		if (func_130())
		{
			bLocal_93 = false;
			iLocal_47 = (iLocal_47 + 1) % 60;
		
			for (i = 0; i < 63; i = i + 1)
			{
				if (i % 60 == iLocal_47 || Global_113222[i /*10*/].f_2)
					func_83(i);
			}
		
			func_76();
			func_54();
			func_49();
			func_46();
			func_4();
		}
		else if (!bLocal_93)
		{
			func_1();
		}
	}

	return;
}

void func_1() // Position - 0x121 (289)
{
	int num;
	int i;
	int j;

	for (i = 0; i < 20; i = i + 1)
	{
		func_3(uLocal_72[i], 0, false);
		uLocal_51[i] = 0;
	}

	for (j = 0; j < 63; j = j + 1)
	{
		num = j;
	
		if (Global_113222[num /*10*/].f_8 != -1)
		{
			func_3(uLocal_72[Global_113222[num /*10*/].f_8], false, false);
			func_2(&(Global_113222[num /*10*/].f_8));
		}
	
		Global_113222[num /*10*/].f_7 = 0;
	}

	bLocal_93 = true;
	return;
}

void func_2(int iParam0) // Position - 0x1A4 (420)
{
	if (*iParam0 > -1 && *iParam0 < 20)
		uLocal_51[*iParam0] = 0;

	*iParam0 = -1;
	return;
}

void func_3(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CB (459)
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33467[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	
		if (Global_33464 == 1)
			Global_33465 = 1;
	
		Global_33464 = 1;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33467[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

void func_4() // Position - 0x2CB (715)
{
	BOOL flag;
	int i;
	var unk;
	int num;

	if (!func_45(58))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_44(17))
			{
				if (!func_43(74))
				{
					if (iLocal_94 == -15)
					{
						iLocal_94 = func_42();
						func_34(&iLocal_94, 0, 5, 0, 0, 0, 0);
					}
					else if (func_23(iLocal_94))
					{
						flag = false;
					
						for (i = 243; i <= 262; i = i + 1)
						{
							num = i;
							func_18(58, &unk);
						
							if (func_16(unk.f_6, func_17(num, 0), false))
							{
								if (HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19))
								{
									HUD::SET_BLIP_FLASHES(Global_33467[num /*23*/].f_19, true);
									HUD::SET_BLIP_FLASH_TIMER(Global_33467[num /*23*/].f_19, 10000);
								
									switch (_GET_CURRENT_PLAYER_CHARACTER())
									{
										case CHAR_FRANKLIN:
											func_6("AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
									
										case CHAR_MICHAEL:
											func_6("AM_H_RCFS_M" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ Switch to Franklin to play this mission.*/, 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
									}
								
									iLocal_94 = func_42();
									func_34(&iLocal_94, 0, 0, 8, 0, 0, 0);
									flag = true;
								}
							}
						}
					
						if (!flag)
						{
							iLocal_94 = func_42();
							func_34(&iLocal_94, 0, 5, 0, 0, 0, 0);
						}
					}
				}
				else
				{
					func_5(58);
				}
			}
		}
	}

	return;
}

void func_5(int iParam0) // Position - 0x3FF (1023)
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114135.f_20414.f_150[i], offset);

	return;
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x441 (1089)
{
	func_7(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_7(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x462 (1122)
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_114135.f_20414.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114135.f_20414[i /*16*/], sParam0))
			return;
	}

	if (Global_114135.f_20414.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_4), sParam1, 16);
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_9 = iParam5;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_11 = iParam6;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_12 = iParam2;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_13 = iParam7;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_14 = iParam8;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_10 = -1;
	
		Global_114135.f_20414.f_145 = Global_114135.f_20414.f_145 + 1;
		func_8();
	}

	return;
}

void func_8() // Position - 0x635 (1589)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114135.f_20414.f_146[i] = 0;
	}

	for (i = 0; i < Global_114135.f_20414.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114135.f_20414[i /*16*/].f_11, 0))
			if (Global_114135.f_20414[i /*16*/].f_12 > Global_114135.f_20414.f_146[0])
				Global_114135.f_20414.f_146[0] = Global_114135.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114135.f_20414[i /*16*/].f_11, 1))
			if (Global_114135.f_20414[i /*16*/].f_12 > Global_114135.f_20414.f_146[1])
				Global_114135.f_20414.f_146[1] = Global_114135.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114135.f_20414[i /*16*/].f_11, 2))
			if (Global_114135.f_20414[i /*16*/].f_12 > Global_114135.f_20414.f_146[2])
				Global_114135.f_20414.f_146[2] = Global_114135.f_20414[i /*16*/].f_12;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x74C (1868)
{
	func_10();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_10() // Position - 0x765 (1893)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_12(character) && !func_11(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_12(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_11(int iParam0) // Position - 0x862 (2146)
{
	return Global_44181 == iParam0;
}

BOOL func_12(eCharacter echParam0) // Position - 0x870 (2160)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x87C (2172)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x8B9 (2233)
{
	if (func_12(character))
		return func_15(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_15(eCharacter echParam0) // Position - 0x8DE (2270)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_16(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x8ED (2285)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

Vector3 func_17(int iParam0, int iParam1) // Position - 0x934 (2356)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0f, 0f, 0f;

	return Global_33467[num /*23*/][iParam1 /*3*/];
}

void func_18(int iParam0, var uParam1) // Position - 0x972 (2418)
{
	switch (iParam0)
	{
		case 0:
			func_19(uParam1, "Abigail1", func_21(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 1:
			func_19(uParam1, "Abigail2", func_21(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 2:
			func_19(uParam1, "Barry1", func_21(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 3:
			func_19(uParam1, "Barry2", func_21(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 4:
			func_19(uParam1, "Barry3", func_21(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 5:
			func_19(uParam1, "Barry3A", func_21(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 6:
			func_19(uParam1, "Barry3C", func_21(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 7:
			func_19(uParam1, "Barry4", func_21(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_20(iParam0), 0, 0);
			break;
	
		case 8:
			func_19(uParam1, "Dreyfuss1", func_21(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 9:
			func_19(uParam1, "Epsilon1", func_21(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 10:
			func_19(uParam1, "Epsilon2", func_21(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 11:
			func_19(uParam1, "Epsilon3", func_21(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 12:
			func_19(uParam1, "Epsilon4", func_21(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 13:
			func_19(uParam1, "Epsilon5", func_21(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 14:
			func_19(uParam1, "Epsilon6", func_21(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 15:
			func_19(uParam1, "Epsilon7", func_21(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 16:
			func_19(uParam1, "Epsilon8", func_21(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 17:
			func_19(uParam1, "Extreme1", func_21(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 18:
			func_19(uParam1, "Extreme2", func_21(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 19:
			func_19(uParam1, "Extreme3", func_21(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 20:
			func_19(uParam1, "Extreme4", func_21(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 21:
			func_19(uParam1, "Fanatic1", func_21(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_20(iParam0), 1, 0);
			break;
	
		case 22:
			func_19(uParam1, "Fanatic2", func_21(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_20(iParam0), 1, 0);
			break;
	
		case 23:
			func_19(uParam1, "Fanatic3", func_21(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_20(iParam0), 0, 1);
			break;
	
		case 24:
			func_19(uParam1, "Hao1", func_21(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_20(iParam0), 0, 1);
			break;
	
		case 25:
			func_19(uParam1, "Hunting1", func_21(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 26:
			func_19(uParam1, "Hunting2", func_21(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 27:
			func_19(uParam1, "Josh1", func_21(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 28:
			func_19(uParam1, "Josh2", func_21(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 29:
			func_19(uParam1, "Josh3", func_21(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 30:
			func_19(uParam1, "Josh4", func_21(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 31:
			func_19(uParam1, "Maude1", func_21(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 32:
			func_19(uParam1, "Minute1", func_21(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 33:
			func_19(uParam1, "Minute2", func_21(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 34:
			func_19(uParam1, "Minute3", func_21(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 35:
			func_19(uParam1, "MrsPhilips1", func_21(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 36:
			func_19(uParam1, "MrsPhilips2", func_21(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 37:
			func_19(uParam1, "Nigel1", func_21(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 38:
			func_19(uParam1, "Nigel1A", func_21(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 39:
			func_19(uParam1, "Nigel1B", func_21(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
	
		case 40:
			func_19(uParam1, "Nigel1C", func_21(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
	
		case 41:
			func_19(uParam1, "Nigel1D", func_21(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
	
		case 42:
			func_19(uParam1, "Nigel2", func_21(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 43:
			func_19(uParam1, "Nigel3", func_21(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 44:
			func_19(uParam1, "Omega1", func_21(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 45:
			func_19(uParam1, "Omega2", func_21(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 46:
			func_19(uParam1, "Paparazzo1", func_21(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 47:
			func_19(uParam1, "Paparazzo2", func_21(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 48:
			func_19(uParam1, "Paparazzo3", func_21(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 49:
			func_19(uParam1, "Paparazzo3A", func_21(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 50:
			func_19(uParam1, "Paparazzo3B", func_21(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 51:
			func_19(uParam1, "Paparazzo4", func_21(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 52:
			func_19(uParam1, "Rampage1", func_21(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 54:
			func_19(uParam1, "Rampage3", func_21(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 55:
			func_19(uParam1, "Rampage4", func_21(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 56:
			func_19(uParam1, "Rampage5", func_21(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 53:
			func_19(uParam1, "Rampage2", func_21(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 57:
			func_19(uParam1, "TheLastOne", func_21(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 58:
			func_19(uParam1, "Tonya1", func_21(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 59:
			func_19(uParam1, "Tonya2", func_21(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 60:
			func_19(uParam1, "Tonya3", func_21(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 61:
			func_19(uParam1, "Tonya4", func_21(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 62:
			func_19(uParam1, "Tonya5", func_21(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_19(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x1B08 (6920)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_20(int iParam0) // Position - 0x1B99 (7065)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_21(int iParam0) // Position - 0x1EDF (7903)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_22(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_22(int iParam0) // Position - 0x1F16 (7958)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

BOOL func_23(int iParam0) // Position - 0x2362 (9058)
{
	return func_24(func_42(), iParam0);
}

BOOL func_24(int iParam0, int iParam1) // Position - 0x2374 (9076)
{
	int num;
	int num2;

	if (!func_32(iParam1) || !func_32(iParam0))
		return 1;

	num = func_30(iParam0);
	num2 = func_30(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_29(iParam0);
	num2 = func_29(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_28(iParam0);
	num2 = func_28(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_27(iParam0);
	num2 = func_27(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_26(iParam0);
	num2 = func_26(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_25(iParam0);
	num2 = func_25(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_25(int iParam0) // Position - 0x2480 (9344)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_26(int iParam0) // Position - 0x2493 (9363)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_27(int iParam0) // Position - 0x24A6 (9382)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_28(int iParam0) // Position - 0x24B9 (9401)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_29(int iParam0) // Position - 0x24CB (9419)
{
	return iParam0 & 15;
}

int func_30(int iParam0) // Position - 0x24D8 (9432)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_31(BOOL bParam0, var uParam1, var uParam2) // Position - 0x24FA (9466)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_32(int iParam0) // Position - 0x2511 (9489)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_25(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_26(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_27(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_30(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_29(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_28(iParam0);

	if (num6 < 1 || num6 > func_33(num5, num4))
		return false;

	return true;
}

int func_33(int iParam0, int iParam1) // Position - 0x25ED (9709)
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x268F (9871)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_30(*iParam0);
	i = func_29(*iParam0);
	num2 = func_28(*iParam0);
	j = func_27(*iParam0);
	k = func_26(*iParam0);
	l = func_25(*iParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_33(i, num); num2 > m; m = func_33(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_35(iParam0, l, k, j, num2, i, num);
	return;
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2811 (10257)
{
	func_41(uParam0, iParam1);
	func_40(uParam0, iParam2);
	func_39(uParam0, iParam3);
	func_38(uParam0, iParam5);
	func_37(uParam0, iParam4);
	func_36(uParam0, iParam6);
	return;
}

void func_36(var uParam0, int iParam1) // Position - 0x2849 (10313)
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_37(var uParam0, int iParam1) // Position - 0x28CF (10447)
{
	int num;
	int num2;

	num = func_29(*uParam0);
	num2 = func_30(*uParam0);

	if (iParam1 < 1 || iParam1 > func_33(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_38(var uParam0, int iParam1) // Position - 0x2920 (10528)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_39(var uParam0, int iParam1) // Position - 0x2953 (10579)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_40(var uParam0, int iParam1) // Position - 0x298D (10637)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_41(var uParam0, int iParam1) // Position - 0x29C8 (10696)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_42() // Position - 0x2A04 (10756)
{
	var unk;

	func_41(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_40(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_39(&unk, CLOCK::GET_CLOCK_HOURS());
	func_37(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_38(&unk, CLOCK::GET_CLOCK_MONTH());
	func_36(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

BOOL func_43(int iParam0) // Position - 0x2A4A (10826)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_99.f_58[iParam0];
}

BOOL func_44(int iParam0) // Position - 0x2A77 (10871)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_330[iParam0 /*6*/];
}

BOOL func_45(int iParam0) // Position - 0x2AA3 (10915)
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114135.f_20414.f_150[i], num);

	return false;
}

void func_46() // Position - 0x2AE3 (10979)
{
	if (!func_45(39))
		if (IS_BIT_SET(Global_114135.f_18578[27 /*6*/], 3))
			if (func_47("FS_HELP1" /*Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city.*/) == 2)
				func_6("FS_HELP1" /*Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city.*/, 1, 0, 2000, 10000, 7, 0, 0, 0);
			else if (func_47("FS_HELP1" /*Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city.*/) == 1)
				func_5(39);

	return;
}

int func_47(char* sParam0) // Position - 0x2B3A (11066)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112775))
		return 1;

	if (func_48(sParam0))
		return 0;

	return 2;
}

BOOL func_48(char* sParam0) // Position - 0x2B61 (11105)
{
	int i;

	for (i = 0; i < Global_114135.f_20414.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114135.f_20414[i /*16*/]))
			return true;
	}

	return false;
}

void func_49() // Position - 0x2B9C (11164)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (!func_45(55))
			if (func_53(5) && func_51(PLAYER::PLAYER_PED_ID(), func_52(5), true) < func_50(5) || func_53(6) && func_51(PLAYER::PLAYER_PED_ID(), func_52(6), true) < func_50(6))
				if (func_47("BARSTASH2" /*Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry.*/) == 2)
					func_6("BARSTASH2" /*Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry.*/, 1, 0, 2000, 10000, 2, 0, 0, 0);
				else if (func_47("BARSTASH2" /*Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry.*/) == 1)
					func_5(55);

	return;
}

float func_50(int iParam0) // Position - 0x2C33 (11315)
{
	if (iParam0 == 5 || iParam0 == 6)
		return 250f;
	else if (iParam0 == 38)
		return 35f;
	else if (iParam0 == 39)
		return 37.5f;
	else if (iParam0 == 40)
		return 45f;
	else if (iParam0 == 41)
		return 150f;
	else if (iParam0 == 49 || iParam0 == 50)
		return 90f;

	return 250f;
}

float func_51(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2CBF (11455)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

Vector3 func_52(int iParam0) // Position - 0x2CF9 (11513)
{
	if (iParam0 == 5)
		return 1161.31f, -1326.52f, 34.23f;
	else if (iParam0 == 6)
		return -533.15f, -1691.25f, 18.21f;
	else if (iParam0 == 38)
		return -565.8f, 293.14f, 90.8f;
	else if (iParam0 == 39)
		return -1036.65f, 363.59f, 79.82f;
	else if (iParam0 == 40)
		return -620.37f, -264.39f, 37.81f;
	else if (iParam0 == 41)
		return -1115.96f, 31.42f, 53.8f;
	else if (iParam0 == 49)
		return 305.52f, 157.19f, 102.94f;
	else if (iParam0 == 50)
		return 1040.96f, -534.42f, 60.17f;

	return 0f, 0f, 0f;
}

BOOL func_53(int iParam0) // Position - 0x2DDF (11743)
{
	return Global_113222[iParam0 /*10*/].f_1;
}

void func_54() // Position - 0x2DF1 (11761)
{
	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (!func_43(114))
		{
			if (IS_BIT_SET(Global_114135.f_18578[46 /*6*/], 3))
			{
				func_72(552744224, 6, 2, 50, 60000, 10000, -1, 181, -1, 0, 1);
				func_71(114, 1);
			}
		}
		else if (!func_43(83))
		{
			if (IS_BIT_SET(Global_114135.f_18578[51 /*6*/], 3))
			{
				if (func_70(552744224))
				{
					func_56(552744224);
					func_55(181, 0);
				}
			}
		}
	}

	return;
}

void func_55(int iParam0, int iParam1) // Position - 0x2E76 (11894)
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_114135.f_8617[iParam0] = 1;
	Global_114135.f_8617.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

int func_56(int iParam0) // Position - 0x2EB3 (11955)
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (Global_114135.f_7692[i /*15*/] == iParam0)
		{
			if (Global_44728 != i)
			{
				func_69(i);
				func_61(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_61(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
		{
			func_60(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_764; i = i + 1)
	{
		if (Global_114135.f_7692.f_651[i /*14*/] == iParam0)
		{
			func_58(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (Global_114135.f_7692.f_765[i /*10*/] == iParam0)
		{
			func_57(i);
			num = 1;
		}
	}

	return num;
}

void func_57(int iParam0) // Position - 0x2FDA (12250)
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114135.f_7692.f_866)
		return;

	if (Global_114135.f_7692.f_866 > 1)
	{
		for (i = iParam0; i <= Global_114135.f_7692.f_866 - 2; i = i + 1)
		{
			Global_114135.f_7692.f_765[i /*10*/] = { Global_114135.f_7692.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_114135.f_7692.f_866 > 0)
	{
		Global_114135.f_7692.f_765[Global_114135.f_7692.f_866 - 1 /*10*/] = { unk };
		Global_114135.f_7692.f_866 = Global_114135.f_7692.f_866 - 1;
	}

	return;
}

void func_58(int iParam0) // Position - 0x3093 (12435)
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114135.f_7692.f_764)
		return;

	if (Global_114135.f_7692.f_764 > 1)
	{
		for (i = iParam0; i <= Global_114135.f_7692.f_764 - 2; i = i + 1)
		{
			Global_114135.f_7692.f_651[i /*14*/] = { Global_114135.f_7692.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_114135.f_7692.f_764 > 0)
	{
		Global_114135.f_7692.f_651[Global_114135.f_7692.f_764 - 1 /*14*/] = { unk };
		Global_114135.f_7692.f_764 = Global_114135.f_7692.f_764 - 1;
	}

	func_59(CHAR_MICHAEL);
	func_59(CHAR_FRANKLIN);
	func_59(CHAR_TREVOR);
	return;
}

void func_59(eCharacter echParam0) // Position - 0x315B (12635)
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_12(echParam0))
		return;

	for (i = 0; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_114135.f_7692[i /*15*/].f_2, echParam0))
			if (Global_114135.f_7692[i /*15*/].f_3 > num)
				num = Global_114135.f_7692[i /*15*/].f_3;
	}

	for (j = 0; j < Global_114135.f_7692.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_114135.f_7692.f_651[j /*14*/].f_2, echParam0))
			if (Global_114135.f_7692.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_114135.f_7692.f_919[echParam0] = num;
	return;
}

void func_60(int iParam0) // Position - 0x3219 (12825)
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_114135.f_7692.f_650 - 2; j = j + 1)
			{
				Global_114135.f_7692.f_199[j /*15*/] = { Global_114135.f_7692.f_199[j + 1 /*15*/] };
			}
		
			Global_114135.f_7692.f_199[Global_114135.f_7692.f_650 - 1 /*15*/] = { unk };
			Global_114135.f_7692.f_650 = Global_114135.f_7692.f_650 - 1;
			return;
		}
	}

	return;
}

void func_61(int iParam0) // Position - 0x32C6 (12998)
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_62(Global_114135.f_7692.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_114135.f_7692.f_198 - 2; j = j + 1)
			{
				Global_114135.f_7692.f_137[j /*15*/] = { Global_114135.f_7692.f_137[j + 1 /*15*/] };
			}
		
			Global_114135.f_7692.f_137[Global_114135.f_7692.f_198 - 1 /*15*/] = { unk };
			Global_114135.f_7692.f_198 = Global_114135.f_7692.f_198 - 1;
			return;
		}
	}

	return;
}

int func_62(int iParam0) // Position - 0x3382 (13186)
{
	int num;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (func_68(iParam0, Global_21066) == 1)
		{
			func_67(iParam0, Global_21066, 0);
		
			if (func_66(iParam0, Global_21066) == 0)
			{
				num = Global_21066;
				func_63(iParam0, num);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_63(int iParam0, int iParam1) // Position - 0x33D8 (13272)
{
	int num;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			num = iParam1;
			func_65(iParam0, num, 0);
			func_64(iParam0, num, 0);
		}
	}

	return;
}

void func_64(int iParam0, int iParam1, int iParam2) // Position - 0x340D (13325)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_65(int iParam0, int iParam1, int iParam2) // Position - 0x3452 (13394)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

int func_66(int iParam0, int iParam1) // Position - 0x3497 (13463)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[iParam0 /*29*/].f_24[iParam1];
}

void func_67(int iParam0, int iParam1, int iParam2) // Position - 0x34C1 (13505)
{
	Global_2201[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114135.f_28055[iParam0 /*29*/].f_19[iParam1] = iParam2;

	return;
}

int func_68(int iParam0, int iParam1) // Position - 0x34F2 (13554)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[iParam0 /*29*/].f_19[iParam1];
}

void func_69(eCharacter echParam0) // Position - 0x351C (13596)
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < 0 || echParam0 >= Global_114135.f_7692.f_136)
		return;

	num = Global_114135.f_7692[echParam0 /*15*/].f_2;

	if (Global_114135.f_7692.f_136 > 1)
	{
		for (i = echParam0; i <= Global_114135.f_7692.f_136 - 2; i = i + 1)
		{
			Global_114135.f_7692[i /*15*/] = { Global_114135.f_7692[i + 1 /*15*/] };
		}
	}

	if (Global_114135.f_7692.f_136 > 0)
	{
		Global_114135.f_7692[Global_114135.f_7692.f_136 - 1 /*15*/] = { unk };
		Global_114135.f_7692.f_136 = Global_114135.f_7692.f_136 - 1;
	}

	for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_59(i);
	}

	return;
}

BOOL func_70(int iParam0) // Position - 0x35F4 (13812)
{
	int i;

	for (i = 0; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (Global_114135.f_7692[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_764; i = i + 1)
	{
		if (Global_114135.f_7692.f_651[i /*14*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (Global_114135.f_7692.f_765[i /*10*/] == iParam0)
			return true;
	}

	return false;
}

void func_71(int iParam0, BOOL bParam1) // Position - 0x36F0 (14064)
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114135.f_9089.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114135.f_9089.f_99.f_58[iParam0] = bParam1;
	return;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x3735 (14133)
{
	int num;

	if (func_74(false))
		return 0;

	if (iParam4 < 0)
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 == 76)
		return 0;

	if (iParam7 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_114135.f_7692.f_764 < 8)
	{
		num = iParam0;
		num.f_3 = func_73(iParam1);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_13 = iParam10;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_114135.f_7692.f_651[Global_114135.f_7692.f_764 /*14*/] = { num };
		Global_114135.f_7692.f_764 = Global_114135.f_7692.f_764 + 1;
		func_59(CHAR_MICHAEL);
		func_59(CHAR_FRANKLIN);
		func_59(CHAR_TREVOR);
		return 1;
	}

	return 0;
}

int func_73(int iParam0) // Position - 0x384D (14413)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

BOOL func_74(BOOL bParam0) // Position - 0x38B7 (14519)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x38DF (14559)
{
	int profileSetting;

	if (Global_153015 == 2)
		return true;
	else if (Global_153015 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

void func_76() // Position - 0x3997 (14743)
{
	int num;
	var unk;

	iLocal_48 = iLocal_48 + 1;
	iLocal_49 = iLocal_49 + 1;

	if (iLocal_48 >= 63)
	{
		iLocal_48 = 0;
		iLocal_49 = 0;
		iLocal_50 = 0;
	}
	else if (iLocal_49 > 31)
	{
		iLocal_49 = 0;
		iLocal_50 = iLocal_50 + 1;
	}

	num = iLocal_48;

	if (!func_82(num) || num == 52)
	{
		if (!IS_BIT_SET(Global_114135.f_18578.f_390[iLocal_50], iLocal_49))
		{
			func_18(num, &unk);
		
			if (num == 58)
				MISC::SET_BIT(&Global_114135.f_18578.f_390[iLocal_50], iLocal_49);
			else if (HUD::GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(unk.f_6))
				MISC::SET_BIT(&Global_114135.f_18578.f_390[iLocal_50], iLocal_49);
			else if (Global_113222[num /*10*/].f_8 != -1)
				if (uLocal_51[Global_113222[num /*10*/].f_8])
					if (IS_BIT_SET(Global_33467[uLocal_72[Global_113222[num /*10*/].f_8] /*23*/].f_11, 6))
						func_81(uLocal_72[Global_113222[num /*10*/].f_8]);
		}
		else if (Global_113222[num /*10*/].f_8 != -1)
		{
			if (uLocal_51[Global_113222[num /*10*/].f_8])
				if (!IS_BIT_SET(Global_33467[uLocal_72[Global_113222[num /*10*/].f_8] /*23*/].f_11, 6))
					func_77(uLocal_72[Global_113222[num /*10*/].f_8]);
		}
	}

	return;
}

void func_77(var uParam0) // Position - 0x3AE0 (15072)
{
	func_80(uParam0, true, false);
	func_79(uParam0, true);
	func_78(uParam0, true);
	return;
}

void func_78(int iParam0, BOOL bParam1) // Position - 0x3AFE (15102)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33467[num /*23*/].f_11, 4))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 4);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 4);

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_79(int iParam0, BOOL bParam1) // Position - 0x3B81 (15233)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33467[num /*23*/].f_11, 5))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 5);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 5);

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_80(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3C04 (15364)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33467[num /*23*/].f_11, 6))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 6);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 6);

	if (bParam2)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 11);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 11);

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_81(int iParam0) // Position - 0x3CAD (15533)
{
	func_80(iParam0, false, false);
	func_79(iParam0, true);
	func_78(iParam0, true);
	return;
}

BOOL func_82(int iParam0) // Position - 0x3CCB (15563)
{
	if (iParam0 == 52 || iParam0 == 53 || iParam0 == 54 || iParam0 == 55 || iParam0 == 56)
		return true;

	return false;
}

void func_83(int iParam0) // Position - 0x3D0C (15628)
{
	var unk;
	var unk33;
	int randomIntInRange;
	BOOL flag;
	var unk34;
	var unk35;
	var unk36;
	int num;
	int num2;
	int num3;
	var unk53;
	BOOL flag2;
	BOOL flag3;
	float num4;
	int num5;
	int num6;
	char* str;

	if (iParam0 == -1)
		return;

	func_18(iParam0, &unk);
	Global_113222[iParam0 /*10*/].f_2 = 0;

	if (!IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 1))
		if (!unk.f_23)
			MISC::SET_BIT(&Global_114135.f_18578[iParam0 /*6*/], 1);

	if (IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 0) && !IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 3))
	{
		if (!Global_114135.f_18578[iParam0 /*6*/].f_1)
		{
			unk33 = func_42();
			func_34(&unk33, 0, 0, unk.f_15, 0, 0, 0);
		
			if (iParam0 == 57)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(3, 11);
				randomIntInRange = randomIntInRange * 30;
				func_34(&unk33, 0, 0, randomIntInRange, 0, 0, 0);
			}
		
			Global_114135.f_18578[iParam0 /*6*/].f_2 = unk33;
			Global_114135.f_18578[iParam0 /*6*/].f_1 = 1;
		}
	
		if (IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 1))
		{
			if (!IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 2))
			{
				flag = true;
			
				if (unk.f_14 != -1)
					if (!func_43(unk.f_14))
						flag = false;
			
				if (func_128(iParam0))
					flag = false;
			
				if (func_126(iParam0))
					flag = false;
			
				if (func_125(unk.f_30))
					flag = false;
			
				if (unk.f_15 > 0 && flag)
				{
					if (!func_23(Global_114135.f_18578[iParam0 /*6*/].f_2))
					{
						func_122(Global_114135.f_18578[iParam0 /*6*/].f_2, &unk34, &unk35, &unk36, &num, &num2, &num3);
					
						if (num3 > 0 || num2 > 0 || num > 10)
						{
							unk53 = { func_21(iParam0) };
							Global_114135.f_18578[iParam0 /*6*/].f_2 = func_42();
							func_34(&(Global_114135.f_18578[iParam0 /*6*/].f_2), 0, 0, unk.f_15, 0, 0, 0);
						}
					
						flag = false;
					}
				}
			
				if (!func_121(unk.f_27, unk.f_28))
					flag = false;
			
				if (flag)
				{
					MISC::SET_BIT(&Global_114135.f_18578[iParam0 /*6*/], 2);
					Global_113222[iParam0 /*10*/].f_4 = 0;
					Global_113222[iParam0 /*10*/].f_6 = 0;
					Global_113222[iParam0 /*10*/].f_5 = 0;
				
					if (iParam0 == 35)
					{
						Global_113222[iParam0 /*10*/].f_3 = 0;
						BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_MrsPhilips");
					}
					else if (iParam0 == 58)
					{
						Global_113222[iParam0 /*10*/].f_3 = 0;
						BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_Tonya");
					}
					else
					{
						Global_113222[iParam0 /*10*/].f_3 = 1;
					}
				}
			}
		}
	}

	if (IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 2) && !IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 3))
	{
		flag2 = true;
	
		if (func_128(iParam0))
			flag2 = false;
	
		if (func_126(iParam0))
			flag2 = false;
	
		if (func_125(unk.f_30))
			flag2 = false;
	
		if (flag2)
			if (!func_121(unk.f_27, unk.f_28))
				flag2 = false;
	
		if (!flag2)
			MISC::CLEAR_BIT(&Global_114135.f_18578[iParam0 /*6*/], 2);
	}

	flag3 = true;

	if (Global_113222[iParam0 /*10*/].f_1)
	{
		Global_113222[iParam0 /*10*/].f_2 = 1;
		Global_113222[iParam0 /*10*/].f_1 = 0;
		Global_113222[iParam0 /*10*/].f_3 = 1;
	}
	else if (Global_113222[iParam0 /*10*/].f_3)
	{
		if (unk.f_4 == 0 || unk.f_4 == 2 || unk.f_4 == 3 || unk.f_4 == 11 || unk.f_4 == 16 || unk.f_4 == 17)
			num4 = 100f;
		else
			num4 = 209f;
	
		if (!func_120() && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, false) > num4)
		{
			Global_113222[iParam0 /*10*/].f_3 = 0;
		}
		else
		{
			if (iParam0 == 10 && Global_114135.f_7265[109] != 1)
				func_107(109, 1);
		
			flag3 = false;
		}
	}

	num5 = 0;

	if (flag3 && !IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 3) && IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 0) && IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 1) && IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 2))
	{
		if (iParam0 == 58 && func_106())
		{
		}
		else
		{
			num5 = 2;
		}
	}

	if (Global_113222[iParam0 /*10*/].f_7 != num5)
	{
		if (func_105(&(Global_113222[iParam0 /*10*/].f_8)))
		{
			if (func_16(unk.f_6, 0f, 0f, 0f, false))
			{
			}
			else
			{
				num6 = uLocal_72[Global_113222[iParam0 /*10*/].f_8];
			
				if (num5 == 0)
				{
					func_3(num6, false, false);
					func_104(num6, false);
					func_2(&(Global_113222[iParam0 /*10*/].f_8));
				}
				else if (num5 == 2)
				{
					if (func_103(iParam0))
					{
						func_102(num6, true);
						func_101(num6, func_52(iParam0));
						func_100(num6, func_50(iParam0));
					}
					else
					{
						func_102(num6, false);
						func_99(num6, unk.f_9);
						func_101(num6, unk.f_6);
					}
				
					func_96(num6, iParam0);
					func_95(num6);
				
					if (func_94(unk.f_26, 1))
						func_93(num6, true, 1, false);
				
					if (func_94(unk.f_26, 0))
						func_93(num6, true, 0, false);
				
					if (func_94(unk.f_26, CHAR_TREVOR))
						func_93(num6, true, 2, false);
				
					if (func_82(iParam0) && iParam0 != 52)
						func_81(num6);
				
					if (func_82(iParam0))
						if (func_91(iParam0))
							func_104(num6, true);
				
					if (iParam0 == 58)
						func_90(num6, 4);
					else
						func_90(num6, 8);
				
					func_3(num6, true, false);
				}
			}
		
			Global_113222[iParam0 /*10*/].f_7 = num5;
		}
	}

	if (!IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 4))
	{
		if (MISC::GET_HASH_KEY(&(unk.f_10)) == MISC::GET_HASH_KEY(""))
		{
			MISC::SET_BIT(&Global_114135.f_18578[iParam0 /*6*/], 4);
		}
		else if (num5 == 2)
		{
			if (func_94(unk.f_26, _GET_CURRENT_PLAYER_CHARACTER()))
			{
				if (!func_89() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (iParam0 == 58)
						{
							if (func_88(243))
							{
								if (func_87(243))
								{
									func_6(&(unk.f_10), 1, 0, -1, 10000, unk.f_26, 0, 0, 0);
									func_55(63, 1000);
									MISC::SET_BIT(&Global_114135.f_18578[iParam0 /*6*/], 4);
								}
							}
						}
						else if (iParam0 == 5 || iParam0 == 38 || iParam0 == 49)
						{
							func_6(&(unk.f_10), 1, 5000, -1, 10000, unk.f_26, 0, 0, 0);
							MISC::SET_BIT(&Global_114135.f_18578[iParam0 /*6*/], 4);
						}
						else
						{
							func_6(&(unk.f_10), 1, 0, -1, 10000, unk.f_26, 0, 0, 0);
							MISC::SET_BIT(&Global_114135.f_18578[iParam0 /*6*/], 4);
						}
					}
				}
			}
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!func_45(35))
		{
			if (IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 2) && !IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 3))
			{
				if (!func_94(unk.f_26, _GET_CURRENT_PLAYER_CHARACTER()) && !func_103(iParam0) && !func_82(iParam0) && !func_86(iParam0) && !func_85(iParam0) && !Global_113222[iParam0 /*10*/].f_3)
				{
					if (SYSTEM::VDIST2(unk.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 81f)
					{
						str = "";
					
						if (IS_BIT_SET(unk.f_26, 1))
							str = "TRIG_RC_F" /*Return as Franklin to start this Strangers and Freaks mission.*/;
						else if (IS_BIT_SET(unk.f_26, 0))
							str = "TRIG_RC_M" /*Return as Michael to start this Strangers and Freaks mission.*/;
						else
							str = "TRIG_RC_T" /*Return as Trevor to start this Strangers and Freaks mission.*/;
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
						{
							switch (func_47(str))
							{
								case 2:
									func_6(str, 1, 0, 1000, 10000, func_84(), 0, 0, 0);
									break;
							
								case 1:
									func_5(35);
									TEXT_LABEL_ASSIGN_STRING(&Global_112775, "", 16);
									break;
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_84() // Position - 0x44DA (17626)
{
	func_10();

	switch (Global_114135.f_2367.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

BOOL func_85(int iParam0) // Position - 0x4520 (17696)
{
	if (iParam0 == 2)
		if (IS_BIT_SET(Global_114135.f_18578[3 /*6*/], 3) && Global_113222[3 /*10*/].f_3 == true)
			return true;
	else if (iParam0 == 3)
		if (IS_BIT_SET(Global_114135.f_18578[2 /*6*/], 3) && Global_113222[2 /*10*/].f_3 == true)
			return true;

	return false;
}

BOOL func_86(int iParam0) // Position - 0x457E (17790)
{
	if (iParam0 == 2 || iParam0 == 3)
		if (IS_BIT_SET(Global_114135.f_18578[2 /*6*/], 0) && IS_BIT_SET(Global_114135.f_18578[3 /*6*/], 0))
			if (!IS_BIT_SET(Global_114135.f_18578[2 /*6*/], 3) && !IS_BIT_SET(Global_114135.f_18578[3 /*6*/], 3))
				return true;

	return false;
}

BOOL func_87(int iParam0) // Position - 0x45DE (17886)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19);
}

BOOL func_88(int iParam0) // Position - 0x461A (17946)
{
	int num;
	BOOL flag;
	BOOL flag2;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	flag = IS_BIT_SET(Global_33467[num /*23*/].f_11, 0);
	flag2 = IS_BIT_SET(Global_33467[num /*23*/].f_11, 15);

	if (flag && flag2)
		return true;

	return false;
}

BOOL func_89() // Position - 0x4675 (18037)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

void func_90(int iParam0, int iParam1) // Position - 0x468F (18063)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (Global_33467[num /*23*/].f_16 == iParam1)
		return;

	Global_33467[num /*23*/].f_16 = iParam1;

	switch (iParam1)
	{
		case 1:
			Global_33467[num /*23*/].f_12[0] = 40;
			break;
	
		case 3:
			Global_33467[num /*23*/].f_12[0] = 60;
			break;
	}

	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	return;
}

BOOL func_91(int iParam0) // Position - 0x472C (18220)
{
	int num;
	int num2;

	if (!func_82(iParam0))
		return false;

	num = 194;
	num2 = iParam0 - 52;

	if (func_43(108) == true)
		return true;

	if (Global_114135.f_2356[num2 /*2*/] >= 1)
		return true;

	if (IS_BIT_SET(Global_114135.f_18578[iParam0 /*6*/], 3))
		return true;

	return func_92(num + num2, 0);
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x478C (18316)
{
	if (Global_114135.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		iParam1 == 1;
		return 1;
	}

	return 0;
}

void func_93(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x47B3 (18355)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1)
	{
		if (!bParam3)
		{
			Global_33467[num /*23*/].f_17 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_33467[num /*23*/].f_11, 8))
				MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
		
			MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 8);
		}
		else
		{
			Global_33467[num /*23*/].f_18 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_33467[num /*23*/].f_11, 10))
				MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
		
			MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 10);
		}
	
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	}
	else
	{
		func_95(iParam0);
	}

	return;
}

BOOL func_94(int iParam0, eCharacter echParam1) // Position - 0x487B (18555)
{
	switch (echParam1)
	{
		case 0:
		case 1:
		case 2:
			return IS_BIT_SET(iParam0, echParam1);
	
		default:
		
	}

	return false;
}

void func_95(int iParam0) // Position - 0x48A5 (18597)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (IS_BIT_SET(Global_33467[num /*23*/].f_11, 8) || IS_BIT_SET(Global_33467[num /*23*/].f_11, 10))
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);

	MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 8);
	MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 10);
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_96(int iParam0, int iParam1) // Position - 0x4930 (18736)
{
	func_98(iParam0, 0);

	if (iParam1 == 1)
	{
		func_97(iParam0, "B_ABI" /*Abigail*/);
	}
	else if (iParam1 == 2 || iParam1 == 3 || iParam1 == 4 || iParam1 == 7)
	{
		if (IS_BIT_SET(Global_114135.f_18578[2 /*6*/], 3) || IS_BIT_SET(Global_114135.f_18578[3 /*6*/], 3) || IS_BIT_SET(Global_114135.f_18578[4 /*6*/], 3))
		{
			func_97(iParam0, "B_BAR" /*Barry*/);
		}
		else
		{
			func_97(iParam0, "BLIP_66" /*Strangers and Freaks*/);
			func_99(iParam0, 66);
		}
	}
	else if (iParam1 == 5 || iParam1 == 6)
	{
		func_97(iParam0, "B_STA" /*Weed Stash*/);
	}
	else if (iParam1 == 8)
	{
		func_97(iParam0, "B_DRE" /*Killer*/);
	}
	else if (iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || iParam1 == 15 || iParam1 == 16)
	{
		func_97(iParam0, "B_EPS" /*Epsilon*/);
	}
	else if (iParam1 == 18 || iParam1 == 19 || iParam1 == 20)
	{
		func_97(iParam0, "B_EXT" /*Dom*/);
	}
	else if (iParam1 == 21 || iParam1 == 22 || iParam1 == 23)
	{
		if (IS_BIT_SET(Global_114135.f_18578[21 /*6*/], 3) || IS_BIT_SET(Global_114135.f_18578[22 /*6*/], 3) || IS_BIT_SET(Global_114135.f_18578[23 /*6*/], 3))
		{
			func_97(iParam0, "B_FAN" /*Mary-Ann*/);
		}
		else
		{
			func_97(iParam0, "BLIP_66" /*Strangers and Freaks*/);
			func_99(iParam0, 66);
		}
	}
	else if (iParam1 == 26)
	{
		func_97(iParam0, "B_HUN" /*Cletus*/);
	}
	else if (iParam1 == 28 || iParam1 == 29 || iParam1 == 30)
	{
		func_97(iParam0, "B_JOS" /*Josh*/);
	}
	else if (iParam1 == 33 || iParam1 == 34)
	{
		func_97(iParam0, "B_MIN" /*Minute Men*/);
	}
	else if (iParam1 == 38 || iParam1 == 39 || iParam1 == 40 || iParam1 == 41)
	{
		func_97(iParam0, "B_CEL" /*Celebrity Item*/);
	}
	else if (iParam1 == 42 || iParam1 == 43)
	{
		func_97(iParam0, "B_NIG" /*Nigel*/);
	}
	else if (iParam1 == 45)
	{
		func_97(iParam0, "B_OME" /*Omega*/);
	}
	else if (iParam1 == 47 || iParam1 == 48 || iParam1 == 51)
	{
		func_97(iParam0, "B_PAP" /*Beverly*/);
	}
	else if (iParam1 == 49 || iParam1 == 50)
	{
		func_97(iParam0, "B_PHO" /*Photo Opportunity*/);
	}
	else if (iParam1 == 52)
	{
		func_97(iParam0, "BLIP_66" /*Strangers and Freaks*/);
	}
	else if (iParam1 == 53 || iParam1 == 54 || iParam1 == 55 || iParam1 == 56)
	{
		func_97(iParam0, "BLIP_84" /*Rampage*/);
	}
	else if (iParam1 == 59 || iParam1 == 60 || iParam1 == 61 || iParam1 == 62)
	{
		func_97(iParam0, "B_TON" /*Tonya*/);
	}
	else
	{
		func_97(iParam0, "BLIP_66" /*Strangers and Freaks*/);
	}

	return;
}

void func_97(int iParam0, char* sParam1) // Position - 0x4C94 (19604)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_33467[num /*23*/].f_20), sParam1, 8);

	if (HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_33467[num /*23*/].f_19, sParam1);

	return;
}

void func_98(int iParam0, int iParam1) // Position - 0x4CEE (19694)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	MISC::SET_BITS_IN_RANGE(&(Global_33467[num /*23*/].f_11), 21, 26, iParam1);

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_99(int iParam0, int iParam1) // Position - 0x4D4C (19788)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (Global_33467[num /*23*/].f_12[0] == iParam1)
		return;

	Global_33467[num /*23*/].f_12[0] = iParam1;

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_100(int iParam0, float fParam1) // Position - 0x4DBA (19898)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	Global_33464 = 1;
	Global_33467[num /*23*/].f_10 = fParam1;
	Global_39517 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_101(int iParam0, float fParam1, var uParam2, var uParam3) // Position - 0x4E0A (19978)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (fParam1 == Global_33467[num /*23*/][0 /*3*/] && fParam1.f_1 == Global_33467[num /*23*/][0 /*3*/].f_1 && fParam1.f_2 == Global_33467[num /*23*/][0 /*3*/].f_2)
		return;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	Global_33467[num /*23*/][0 /*3*/] = { fParam1 };
	Global_39517 = 1;
	return;
}

void func_102(int iParam0, BOOL bParam1) // Position - 0x4E9E (20126)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 28);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 28);

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

BOOL func_103(int iParam0) // Position - 0x4F10 (20240)
{
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 38 || iParam0 == 39 || iParam0 == 40 || iParam0 == 41 || iParam0 == 49 || iParam0 == 50)
		return true;

	return false;
}

void func_104(int iParam0, BOOL bParam1) // Position - 0x4F70 (20336)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33467[num /*23*/].f_11, 20))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 20);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 20);

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 20);
	return;
}

BOOL func_105(int iParam0) // Position - 0x4FF6 (20470)
{
	int i;

	if (*iParam0 != -1)
		return true;

	for (i = 0; i < 20; i = i + 1)
	{
		if (!uLocal_51[i])
		{
			*iParam0 = i;
			uLocal_51[i] = 1;
			return true;
		}
	}

	return false;
}

BOOL func_106() // Position - 0x5037 (20535)
{
	if (Global_79800)
		return true;
	else if (Global_64302 && !Global_64308)
		return true;

	return false;
}

void func_107(int iParam0, int iParam1) // Position - 0x5061 (20577)
{
	int num;

	if (iParam0 != 226)
	{
		if (Global_79539)
			num = Global_43715[iParam0];
		else
			num = Global_114135.f_7265[iParam0];
	
		if (num != iParam1 || IS_BIT_SET(Global_39541[iParam0 / 32], iParam0 % 32))
		{
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2)
			{
				MISC::SET_BIT(&Global_39550[iParam0 / 32], iParam0 % 32);
				Global_40013[iParam0] = iParam1;
			}
			else if (Global_79539)
			{
				Global_43715[iParam0] = iParam1;
			}
			else
			{
				Global_114135.f_7265[iParam0] = iParam1;
			}
		
			MISC::SET_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
			func_109(iParam0);
		
			if (IS_BIT_SET(Global_39541[iParam0 / 32], iParam0 % 32))
				func_108(iParam0);
		}
	}

	return;
}

void func_108(int iParam0) // Position - 0x514E (20814)
{
	if (!IS_BIT_SET(Global_40484.f_228[iParam0 / 32], iParam0 % 23))
	{
		MISC::SET_BIT(&Global_40484.f_228[iParam0 / 32], iParam0 % 23);
		Global_40484[Global_40484.f_227] = iParam0;
		Global_40484.f_227 = Global_40484.f_227 + 1;
	}

	return;
}

void func_109(int iParam0) // Position - 0x5199 (20889)
{
	Vector3 vector;
	BOOL flag;
	BOOL flag2;
	int num;
	float distanceBetweenCoords;
	Interior interior;
	Interior interiorAtCoords;
	BOOL flag3;
	Interior interiorFromEntity;
	Interior interiorAtCoords2;

	if (!func_117())
		return;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	vector = { func_116(iParam0) };

	if (IS_BIT_SET(vector.f_4, 2))
		func_114(iParam0, &vector);

	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
			return;

	flag = false;
	flag2 = false;
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);

	if (IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32) && Global_40013[iParam0] == 2 && distanceBetweenCoords > 210f)
	{
		MISC::CLEAR_BIT(&Global_39550[iParam0 / 32], iParam0 % 32);
		Global_39559[iParam0] = 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (IS_BIT_SET(Global_39786[iParam0 / 32], iParam0 % 32))
		{
			if (distanceBetweenCoords < 25f)
			{
				if (Global_101740.f_397 == 0)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						Global_101740.f_397 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			
				interior = Global_101740.f_397;
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(vector);
			
				if (interior == interiorAtCoords && interior != 0)
				{
					MISC::SET_BIT(&Global_39550[iParam0 / 32], iParam0 % 32);
					Global_40013[iParam0] = 3;
					MISC::SET_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
				}
			}
		
			MISC::CLEAR_BIT(&Global_39786[iParam0 / 32], iParam0 % 32);
		}
	}

	if (IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32))
	{
		num = Global_40013[iParam0];
	}
	else if (IS_BIT_SET(vector.f_4, 0))
	{
		if (Global_114135.f_9089)
			num = func_111(iParam0);
		else
			num = 0;
	
		if (func_11(14))
			num = 0;
	}
	else if (IS_BIT_SET(vector.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_110())
			num = 0;
		else
			num = 1;
	}
	else
	{
		num = Global_114135.f_7265[iParam0];
	}

	if (Global_40240[iParam0] != num)
		flag = true;

	if (IS_BIT_SET(Global_39541[iParam0 / 32], iParam0 % 32))
		if (!IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32) || Global_39559[iParam0] == 0 && Global_40013[iParam0] != 2)
			flag = true;

	if (flag)
	{
		if (!Global_39540)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))
				OBJECT::ADD_DOOR_TO_SYSTEM(vector.f_5, vector.f_3, vector, false, false, false, 0);
		
			switch (num)
			{
				case 1:
					if (IS_BIT_SET(vector.f_4, 3))
					{
						flag3 = true;
					}
					else if (distanceBetweenCoords > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(vector.f_5)) <= 0.015f)
					{
						interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						interiorAtCoords2 = INTERIOR::GET_INTERIOR_AT_COORDS(vector);
					
						if (interiorFromEntity != interiorAtCoords2 || interiorFromEntity == 0)
							flag3 = true;
					}
				
					if (flag3)
					{
						if (vector.f_6 != 0f)
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
					
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
						flag2 = true;
					}
					break;
			
				case 4:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 2:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 0:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, true);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 3:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, 0, false, true);
					flag2 = true;
					break;
			
				case 5:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 6:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				default:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			}
		}
	
		if (flag2)
		{
			MISC::CLEAR_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
			Global_40240[iParam0] = num;
		}
	}

	if (IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32) && Global_40013[iParam0] != 2)
	{
		MISC::SET_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
		func_108(iParam0);
	
		if (Global_39559[iParam0] < 2)
			Global_39559[iParam0] = Global_39559[iParam0] + 1;
	}

	return;
}

BOOL func_110() // Position - 0x565F (22111)
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return false;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (Global_114135.f_9089.f_99.f_58[65])
				return true;
			break;
	
		case CHAR_FRANKLIN:
			if (Global_114135.f_9089.f_99.f_58[66])
				return true;
			break;
	
		case CHAR_TREVOR:
			if (Global_114135.f_9089.f_99.f_58[65])
				return true;
			break;
	}

	return false;
}

int func_111(int iParam0) // Position - 0x56DE (22238)
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (func_112(iParam0))
		return 1;

	if (iParam0 == 49)
	{
		if (character == CHAR_FRANKLIN)
			if (IS_BIT_SET(Global_114135.f_7233[5], 0) || IS_BIT_SET(Global_114135.f_7233[6], 0))
				return 0;
	
		if (func_12(character))
			if (IS_BIT_SET(Global_96690[5], character))
				return 0;
	}

	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (character == CHAR_MICHAEL)
				if (IS_BIT_SET(Global_114135.f_7233[0], 0))
					return 0;
		
			if (func_12(character))
				if (IS_BIT_SET(Global_96690[0], character))
					if (iParam0 != 40)
						return 0;
					else
						return 1;
			break;
	
		case 47:
		case 48:
		case 49:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_114135.f_7233[5], 0))
					return 0;
		
			if (func_12(character))
				if (IS_BIT_SET(Global_96690[5], character))
					return 0;
			break;
	
		case 50:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_114135.f_7233[6], 0))
					return 0;
		
			if (func_12(character))
				if (IS_BIT_SET(Global_96690[6], character))
					return 0;
			break;
	
		case 51:
		case 52:
			if (character == CHAR_TREVOR)
			{
				if (IS_BIT_SET(Global_114135.f_7233[2], 0))
					return 0;
			
				if (func_12(character))
					if (IS_BIT_SET(Global_96690[2], character))
						return 0;
			}
			else if (character == CHAR_MICHAEL)
			{
				if (IS_BIT_SET(Global_114135.f_7233[1], 0))
					return 0;
			
				if (func_12(character))
					if (IS_BIT_SET(Global_96690[1], character))
						return 0;
			}
			break;
	
		case 53:
			if (character == CHAR_TREVOR)
				if (IS_BIT_SET(Global_114135.f_7233[3], 0))
					return 0;
		
			if (func_12(character))
				if (IS_BIT_SET(Global_96690[3], character))
					return 0;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_112(int iParam0) // Position - 0x5906 (22790)
{
	Hash entityModel;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(func_113(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
			
				switch (entityModel)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return true;
				}
			}
		}
	}

	return false;
}

Vehicle func_113(Vehicle veParam0) // Position - 0x5972 (22898)
{
	return veParam0;
}

void func_114(int iParam0, var uParam1) // Position - 0x597C (22908)
{
	int num;
	int num2;

	if (!IS_BIT_SET(uParam1->f_4, 2))
		return;

	num = func_42();
	num2 = func_27(num);

	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_115(iParam0))
			{
				if (num2 < 19)
				{
					if (num2 >= 7)
					{
						Global_114135.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_115(iParam0))
			{
				if (num2 < 18)
				{
					if (num2 >= 7)
					{
						Global_114135.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 141:
		case 142:
			if (func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0 && !Global_114135.f_9089.f_99.f_58[4])
				{
					if (num2 < 21)
					{
						if (num2 >= 7)
						{
							Global_114135.f_7265[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_114135.f_9089.f_99.f_58[4])
				{
					Global_114135.f_7265[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (Global_114135.f_9089.f_99.f_58[4])
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (num2 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_114135.f_7265[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
					}
				}
				else if (num2 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_114135.f_7265[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
					}
				}
			}
			break;
	
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_115(iParam0))
			{
				if (num2 < 20)
				{
					if (num2 >= 9)
					{
						Global_114135.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 147:
		case 148:
			if (!func_115(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0)
			{
				Global_114135.f_7265[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[70 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2")) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 70:
		case 71:
		case 72:
			if (!func_115(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[26 /*34*/].f_6) == 0)
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
	
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[43 /*34*/].f_6) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 190:
		case 191:
			if (!func_115(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 193:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[93 /*34*/].f_6) > 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 198:
			if (!func_115(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 80:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[10 /*34*/].f_6) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 205:
		case 206:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[47 /*34*/].f_6) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[70 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[48 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[39 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 216:
			if (!func_115(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 217:
		case 218:
			if (!func_115(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_115(iParam0))
			{
				Global_114135.f_7265[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	}

	return;
}

BOOL func_115(int iParam0) // Position - 0x6314 (25364)
{
	var unk;
	int doorState;

	unk = { func_116(iParam0) };
	doorState = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(unk.f_5);
	return doorState == 1 || doorState == 4 || doorState == 2;
}

struct<7> func_116(int iParam0) // Position - 0x6348 (25416)
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 133f, -1711f, 29f };
			unk.f_5 = 1804701345;
			break;
	
		case 1:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -1287.8568f, -1115.7416f, 7.1401f };
			unk.f_5 = 1403601067;
			break;
	
		case 2:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 1932.9518f, 3725.1536f, 32.9944f };
			unk.f_5 = -2031139496;
			break;
	
		case 3:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 1207.8732f, -470.063f, 66.358f };
			unk.f_5 = 1796834809;
			break;
	
		case 4:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -29.8692f, -148.1571f, 57.2265f };
			unk.f_5 = 96153298;
			break;
	
		case 5:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -280.7851f, 6232.7817f, 31.8455f };
			unk.f_5 = -281080954;
			break;
	
		case 6:
			unk.f_3 = joaat("v_ilev_hd_door_l");
			unk = { -824f, -187f, 38f };
			unk = { -823.2001f, -187.0831f, 37.819f };
			unk.f_5 = 183249434;
			break;
	
		case 7:
			unk.f_3 = joaat("v_ilev_hd_door_r");
			unk = { -823f, -188f, 38f };
			unk = { -822.4442f, -188.3924f, 37.819f };
			unk.f_5 = 758345384;
			break;
	
		case 8:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 82.3186f, -1392.7518f, 29.5261f };
			unk.f_5 = -1069262641;
			break;
	
		case 9:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 82.3186f, -1390.4758f, 29.5261f };
			unk.f_5 = 1968521986;
			break;
	
		case 10:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 1686.9832f, 4821.7407f, 42.2131f };
			unk.f_5 = -2143706301;
			break;
	
		case 11:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 1687.2817f, 4819.4844f, 42.2131f };
			unk.f_5 = -1403421822;
			break;
	
		case 12:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 418.637f, -806.457f, 29.6396f };
			unk.f_5 = -1950137670;
			break;
	
		case 13:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 418.637f, -808.733f, 29.6396f };
			unk.f_5 = 1226259807;
			break;
	
		case 14:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -1096.6613f, 2705.4458f, 19.2578f };
			unk.f_5 = 1090833557;
			break;
	
		case 15:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -1094.9652f, 2706.9636f, 19.2578f };
			unk.f_5 = 897332612;
			break;
	
		case 16:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 1196.825f, 2703.221f, 38.3726f };
			unk.f_5 = 1095946640;
			break;
	
		case 17:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 1199.101f, 2703.221f, 38.3726f };
			unk.f_5 = 801975945;
			break;
	
		case 18:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -818.7642f, -1079.5444f, 11.4781f };
			unk.f_5 = -167996547;
			break;
	
		case 19:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -816.7932f, -1078.4065f, 11.4781f };
			unk.f_5 = -1935818563;
			break;
	
		case 20:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -0.0564f, 6517.461f, 32.0278f };
			unk.f_5 = 1891185217;
			break;
	
		case 21:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -1.7253f, 6515.9136f, 32.0278f };
			unk.f_5 = 1236591681;
			break;
	
		case 22:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { -1201.4349f, -776.8566f, 17.9918f };
			unk.f_5 = 1980808685;
			break;
	
		case 23:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { 617.2458f, 2751.0222f, 42.7578f };
			unk.f_5 = 1352749757;
			break;
	
		case 24:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { 127.8201f, -211.8274f, 55.2275f };
			unk.f_5 = -566554453;
			break;
	
		case 25:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { -3167.75f, 1055.5358f, 21.5329f };
			unk.f_5 = 1284749450;
			break;
	
		case 26:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -716.6754f, -155.42f, 37.6749f };
			unk.f_5 = 261851994;
			break;
	
		case 27:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -715.6154f, -157.2561f, 37.6749f };
			unk.f_5 = 217646625;
			break;
	
		case 28:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -157.0924f, -306.4413f, 39.994f };
			unk.f_5 = 1801139578;
			break;
	
		case 29:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -156.4022f, -304.4366f, 39.994f };
			unk.f_5 = -2123275866;
			break;
	
		case 30:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -1454.7819f, -231.7927f, 50.0565f };
			unk.f_5 = 1312689981;
			break;
	
		case 31:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -1456.2007f, -233.3682f, 50.0565f };
			unk.f_5 = -595055661;
			break;
	
		case 32:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { 321.81f, 178.36f, 103.68f };
			unk.f_5 = -265260897;
			break;
	
		case 33:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1859.89f, 3749.79f, 33.18f };
			unk.f_5 = -1284867488;
			break;
	
		case 34:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { -289.1752f, 6199.1123f, 31.637f };
			unk.f_5 = 302307081;
			break;
	
		case 35:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { -1155.4541f, -1424.0079f, 5.0461f };
			unk.f_5 = -681886015;
			break;
	
		case 36:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { 1321.2856f, -1650.5967f, 52.3663f };
			unk.f_5 = -2086556500;
			break;
	
		case 37:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { -3167.7888f, 1074.7668f, 20.9209f };
			unk.f_5 = -1496386696;
			break;
	
		case 38:
			unk.f_3 = joaat("v_ilev_mm_doorm_l");
			unk = { -817f, 179f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2097039789;
			break;
	
		case 39:
			unk.f_3 = joaat("v_ilev_mm_doorm_r");
			unk = { -816f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2127416656;
			break;
	
		case 40:
			unk.f_3 = joaat("prop_ld_garaged_01");
			unk = { -815f, 186f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1986583853;
			unk.f_6 = 6.5f;
			break;
	
		case 41:
			unk.f_3 = joaat("prop_bh1_48_backdoor_l");
			unk = { -797f, 177f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 776026812;
			break;
	
		case 42:
			unk.f_3 = joaat("prop_bh1_48_backdoor_r");
			unk = { -795f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 698422331;
			break;
	
		case 43:
			unk.f_3 = joaat("prop_bh1_48_backdoor_l");
			unk = { -793f, 181f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 535076355;
			break;
	
		case 44:
			unk.f_3 = joaat("prop_bh1_48_backdoor_r");
			unk = { -794f, 183f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 474675599;
			break;
	
		case 45:
			unk.f_3 = joaat("prop_bh1_48_gate_1");
			unk = { -849f, 179f, 70f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1978427516;
			break;
	
		case 46:
			unk.f_3 = joaat("v_ilev_mm_windowwc");
			unk = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1700375831;
			break;
	
		case 47:
			unk.f_3 = joaat("v_ilev_fa_frontdoor");
			unk = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 613961892;
			break;
	
		case 48:
			unk.f_3 = joaat("v_ilev_fh_frntdoor");
			unk = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -272570634;
			break;
	
		case 49:
			unk.f_3 = joaat("prop_sc1_21_g_door_01");
			unk = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1040675994;
			break;
	
		case 50:
			unk.f_3 = joaat("v_ilev_fh_frontdoor");
			unk = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 1201219326;
			break;
	
		case 51:
			unk.f_3 = joaat("v_ilev_trevtraildr");
			unk = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = joaat("DOORHASH_T_TRAILER_CS");
			break;
	
		case 52:
			unk.f_3 = joaat("prop_cs4_10_tr_gd_01");
			unk = { 1972.7874f, 3824.5537f, 32.5831f };
			unk.f_5 = 1113956670;
			unk.f_6 = 12f;
			break;
	
		case 53:
			unk.f_3 = joaat("v_ilev_trev_doorfront");
			unk = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1361617046;
			break;
	}

	switch (iParam0)
	{
		case 54:
			unk.f_3 = joaat("prop_com_ls_door_01");
			unk = { -1145.9f, -1991.14f, 14.18f };
			unk.f_5 = -1871080926;
			unk.f_6 = 25f;
			break;
	
		case 55:
			unk.f_3 = joaat("prop_id2_11_gdoor");
			unk = { 723.12f, -1088.83f, 23.28f };
			unk.f_5 = 1168079979;
			unk.f_6 = 25f;
			break;
	
		case 56:
			unk.f_3 = joaat("prop_com_ls_door_01");
			unk = { -356.09f, -134.77f, 40.01f };
			unk.f_5 = 1206354175;
			unk.f_6 = 25f;
			break;
	
		case 57:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 108.8502f, 6617.8765f, 32.673f };
			unk.f_5 = -1038180727;
			unk.f_6 = 25f;
			break;
	
		case 58:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 114.3206f, 6623.226f, 32.7161f };
			unk.f_5 = 1200466273;
			unk.f_6 = 25f;
			break;
	
		case 59:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 1182.3054f, 2645.2422f, 38.807f };
			unk.f_5 = 1391004277;
			unk.f_6 = 25f;
			break;
	
		case 60:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 1174.6542f, 2645.2422f, 38.6826f };
			unk.f_5 = -459199009;
			unk.f_6 = 25f;
			break;
	
		case 225:
			unk.f_3 = joaat("lr_prop_supermod_door_01");
			unk = { -205.7007f, -1310.6917f, 30.2957f };
			unk.f_5 = -288764223;
			unk.f_6 = 25f;
			break;
	
		case 61:
			unk.f_3 = joaat("v_ilev_janitor_frontdoor");
			unk = { -107.5401f, -9.0258f, 70.6696f };
			unk.f_5 = -252283844;
			break;
	
		case 62:
			unk.f_3 = joaat("v_ilev_ss_door8");
			unk = { 717f, -975f, 25f };
			unk.f_5 = -826072862;
			break;
	
		case 63:
			unk.f_3 = joaat("v_ilev_ss_door7");
			unk = { 719f, -975f, 25f };
			unk.f_5 = 763780711;
			break;
	
		case 64:
			unk.f_3 = joaat("v_ilev_ss_door02");
			unk = { 709.9813f, -963.5311f, 30.5453f };
			unk.f_5 = -874851305;
			break;
	
		case 65:
			unk.f_3 = joaat("v_ilev_ss_door03");
			unk = { 709.9894f, -960.6675f, 30.5453f };
			unk.f_5 = -1480820165;
			break;
	
		case 66:
			unk.f_3 = joaat("v_ilev_store_door");
			unk = { 707.8046f, -962.4564f, 30.5453f };
			unk.f_5 = 949391213;
			break;
	
		case 67:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1393f, 3599f, 35f };
			unk.f_5 = 212192855;
			break;
	
		case 68:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1395f, 3600f, 35f };
			unk.f_5 = -126474752;
			break;
	
		case 69:
			unk.f_3 = joaat("v_ilev_ss_door04");
			unk = { 1387f, 3614f, 39f };
			unk.f_5 = 1765671336;
			break;
	
		case 70:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1083.5471f, -1975.4354f, 31.6222f };
			unk.f_5 = 792295685;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 71:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1065.237f, -2006.0791f, 32.2329f };
			unk.f_5 = 563273144;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 72:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1085.3069f, -2018.5613f, 41.6289f };
			unk.f_5 = -726993043;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 73:
			unk.f_3 = joaat("v_ilev_bank4door02");
			unk = { -111f, 6464f, 32f };
			unk.f_5 = 178228075;
			break;
	
		case 74:
			unk.f_3 = joaat("v_ilev_bank4door01");
			unk = { -110f, 6462f, 32f };
			unk.f_5 = 1852297978;
			break;
	
		case 75:
			unk.f_3 = joaat("v_ilev_lester_doorfront");
			unk = { 1274f, -1721f, 55f };
			unk.f_5 = -565026078;
			break;
	
		case 76:
			unk.f_3 = joaat("v_ilev_lester_doorveranda");
			unk = { 1271.89f, -1707.57f, 53.79f };
			unk.f_5 = 1646172266;
			break;
	
		case 77:
			unk.f_3 = joaat("v_ilev_lester_doorveranda");
			unk = { 1270.77f, -1708.1f, 53.75f };
			unk.f_5 = 204467342;
			break;
	
		case 78:
			unk.f_3 = joaat("v_ilev_deviantfrontdoor");
			unk = { -127.5f, -1456.18f, 37.94f };
			unk.f_5 = 2047070410;
			break;
	
		case 79:
			unk.f_3 = joaat("prop_com_gar_door_01");
			unk = { 483.56f, -1316.08f, 32.18f };
			unk.f_5 = 1417775309;
			break;
	
		case 80:
			unk.f_3 = joaat("v_ilev_cs_door");
			unk = { 483f, -1312f, 29f };
			unk.f_5 = -106474626;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 81:
			unk.f_3 = joaat("prop_strip_door_01");
			unk = { 128f, -1299f, 29f };
			unk.f_5 = 1840510598;
			break;
	
		case 82:
			unk.f_3 = joaat("prop_magenta_door");
			unk = { 96f, -1285f, 29f };
			unk.f_5 = 1382825971;
			break;
	
		case 83:
			unk.f_3 = joaat("prop_motel_door_09");
			unk = { 549f, -1773f, 34f };
			unk.f_5 = 232536303;
			break;
	
		case 84:
			unk.f_3 = joaat("v_ilev_gangsafedoor");
			unk = { 974f, -1839f, 36f };
			unk.f_5 = 1267246609;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 85:
			unk.f_3 = joaat("v_ilev_gangsafedoor");
			unk = { 977f, -105f, 75f };
			unk.f_5 = -1900237971;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 86:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1391f, 1163f, 114f };
			unk.f_5 = 2077901353;
			break;
	
		case 87:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1391f, 1161f, 114f };
			unk.f_5 = -2102079126;
			break;
	
		case 88:
			unk.f_3 = joaat("prop_cs6_03_door_l");
			unk = { 1396f, 1143f, 115f };
			unk.f_5 = -1905793212;
			break;
	
		case 89:
			unk.f_3 = joaat("prop_cs6_03_door_r");
			unk = { 1396f, 1141f, 115f };
			unk.f_5 = -1797032505;
			break;
	
		case 90:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1409f, 1146f, 114f };
			unk.f_5 = -62235167;
			break;
	
		case 91:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1409f, 1148f, 114f };
			unk.f_5 = -1727188163;
			break;
	
		case 92:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1408f, 1159f, 114f };
			unk.f_5 = -562748873;
			break;
	
		case 93:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1408f, 1161f, 114f };
			unk.f_5 = 1976429759;
			break;
	
		case 94:
			unk.f_3 = joaat("prop_gar_door_01");
			unk = { -1067f, -1666f, 5f };
			unk.f_5 = 1341041543;
			break;
	
		case 95:
			unk.f_3 = joaat("prop_gar_door_02");
			unk = { -1065f, -1669f, 5f };
			unk.f_5 = -1631467220;
			break;
	
		case 96:
			unk.f_3 = joaat("prop_map_door_01");
			unk = { -1104.66f, -1638.48f, 4.68f };
			unk.f_5 = -1788473129;
			break;
	
		case 97:
			unk.f_3 = joaat("v_ilev_fib_door1");
			unk = { -31.72f, -1101.85f, 26.57f };
			unk.f_5 = -1831288286;
			break;
	
		case 98:
			unk.f_3 = joaat("v_ilev_tort_door");
			unk = { 134.4f, -2204.1f, 7.52f };
			unk.f_5 = 963876966;
			break;
	
		case 99:
			unk.f_3 = joaat("v_ilev_bl_shutter2");
			unk = { 3628f, 3747f, 28f };
			unk.f_5 = 1773088812;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 100:
			unk.f_3 = joaat("v_ilev_bl_shutter2");
			unk = { 3621f, 3752f, 28f };
			unk.f_5 = -1332101528;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 101:
			unk.f_3 = joaat("v_ilev_rc_door3_l");
			unk = { -608.73f, -1610.32f, 27.16f };
			unk.f_5 = -1811763714;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 102:
			unk.f_3 = joaat("v_ilev_rc_door3_r");
			unk = { -611.32f, -1610.09f, 27.16f };
			unk.f_5 = 1608500665;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 103:
			unk.f_3 = joaat("v_ilev_rc_door3_l");
			unk = { -592.94f, -1631.58f, 27.16f };
			unk.f_5 = -1456048340;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 104:
			unk.f_3 = joaat("v_ilev_rc_door3_r");
			unk = { -592.71f, -1628.99f, 27.16f };
			unk.f_5 = 943854909;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 105:
			unk.f_3 = joaat("v_ilev_ss_door04");
			unk = { 1991f, 3053f, 47f };
			unk.f_5 = -89065356;
			break;
	
		case 106:
			unk.f_3 = joaat("v_ilev_fh_door4");
			unk = { 1988.3529f, 3054.411f, 47.3204f };
			unk.f_5 = -925491840;
			break;
	
		case 107:
			unk.f_3 = joaat("prop_epsilon_door_l");
			unk = { -700.17f, 47.31f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 108:
			unk.f_3 = joaat("prop_epsilon_door_r");
			unk = { -697.94f, 48.35f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 109:
			unk.f_3 = joaat("v_ilev_epsstoredoor");
			unk = { 241.3574f, 361.0488f, 105.8963f };
			unk.f_5 = 1538555582;
			break;
	
		case 110:
			unk.f_3 = joaat("prop_ch2_09c_garage_door");
			unk = { -689.11f, 506.97f, 110.64f };
			unk.f_5 = -961994186;
			break;
	
		case 111:
			unk.f_3 = joaat("v_ilev_door_orangesolid");
			unk = { -1055.96f, -236.43f, 44.17f };
			unk.f_5 = -1772472848;
			break;
	
		case 112:
			unk.f_3 = joaat("prop_magenta_door");
			unk = { 29f, 3661f, 41f };
			unk.f_5 = -46374650;
			break;
	
		case 113:
			unk.f_3 = joaat("prop_cs4_05_tdoor");
			unk = { 32f, 3667f, 41f };
			unk.f_5 = -358302761;
			break;
	
		case 114:
			unk.f_3 = joaat("v_ilev_housedoor1");
			unk = { 87f, -1959f, 21f };
			unk.f_5 = -1237936041;
			break;
	
		case 115:
			unk.f_3 = joaat("v_ilev_fh_frntdoor");
			unk = { 0f, -1823f, 30f };
			unk.f_5 = 1487374207;
			break;
	
		case 116:
			unk.f_3 = joaat("p_cut_door_03");
			unk = { 23.34f, -1897.6f, 23.05f };
			unk.f_5 = -199126299;
			break;
	
		case 117:
			unk.f_3 = joaat("p_cut_door_02");
			unk = { 524.2f, 3081.14f, 41.16f };
			unk.f_5 = -897071863;
			break;
	
		case 118:
			unk.f_3 = joaat("v_ilev_po_door");
			unk = { -1910.58f, -576.01f, 19.25f };
			unk.f_5 = -864465775;
			break;
	
		case 119:
			unk.f_3 = joaat("prop_ss1_10_door_l");
			unk = { -720.39f, 256.86f, 80.29f };
			unk.f_5 = -208439480;
			break;
	
		case 120:
			unk.f_3 = joaat("prop_ss1_10_door_r");
			unk = { -718.42f, 257.79f, 80.29f };
			unk.f_5 = -1001088805;
			break;
	
		case 121:
			unk.f_3 = joaat("v_ilev_fibl_door02");
			unk = { 106.38f, -742.7f, 46.18f };
			unk.f_5 = 756894459;
			break;
	
		case 122:
			unk.f_3 = joaat("v_ilev_fibl_door01");
			unk = { 105.76f, -746.65f, 46.18f };
			unk.f_5 = 476981677;
			break;
	
		case 123:
			unk.f_3 = joaat("v_ilev_ct_door01");
			unk = { -2343.53f, 3265.37f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 124:
			unk.f_3 = joaat("v_ilev_ct_door01");
			unk = { -2342.23f, 3267.62f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 125:
			unk.f_3 = joaat("ap1_02_door_l");
			unk = { -1041.9326f, -2748.1675f, 22.0308f };
			unk.f_5 = 169965357;
			break;
	
		case 126:
			unk.f_3 = joaat("ap1_02_door_r");
			unk = { -1044.8408f, -2746.4888f, 22.0308f };
			unk.f_5 = 311232516;
			break;
	
		case 128:
			unk.f_3 = joaat("v_ilev_fb_doorshortl");
			unk = { -1045.1199f, -232.004f, 39.4379f };
			unk.f_5 = -1563127729;
			break;
	
		case 129:
			unk.f_3 = joaat("v_ilev_fb_doorshortr");
			unk = { -1046.5161f, -229.3581f, 39.4379f };
			unk.f_5 = 759145763;
			break;
	
		case 130:
			unk.f_3 = joaat("v_ilev_fb_door01");
			unk = { -1083.6201f, -260.4167f, 38.1867f };
			unk.f_5 = -84399179;
			break;
	
		case 131:
			unk.f_3 = joaat("v_ilev_fb_door02");
			unk = { -1080.9744f, -259.0204f, 38.1867f };
			unk.f_5 = -461898059;
			break;
	
		case 127:
			unk.f_3 = joaat("v_ilev_gtdoor");
			unk = { -1042.57f, -240.6f, 38.11f };
			unk.f_5 = 1259065971;
			break;
	
		case 132:
			unk.f_3 = joaat("prop_damdoor_01");
			unk = { 1385.2578f, -2079.9495f, 52.7638f };
			unk.f_5 = -884051216;
			break;
	
		case 133:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { 1656.57f, 4849.66f, 42.35f };
			unk.f_5 = 243782214;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 134:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { 1656.25f, 4852.24f, 42.35f };
			unk.f_5 = 714115627;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 135:
			unk.f_3 = joaat("prop_sec_barrier_ld_01a");
			unk = { -1051.4019f, -474.6847f, 36.6199f };
			unk.f_5 = 1668106976;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 136:
			unk.f_3 = joaat("prop_sec_barrier_ld_01a");
			unk = { -1049.2853f, -476.6376f, 36.7584f };
			unk.f_5 = 1382347031;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 137:
			unk.f_3 = joaat("prop_sec_barrier_ld_02a");
			unk = { -1210.9567f, -580.8765f, 27.2373f };
			unk.f_5 = -966790948;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 138:
			unk.f_3 = joaat("prop_sec_barrier_ld_02a");
			unk = { -1212.4453f, -578.4401f, 27.2373f };
			unk.f_5 = -2068750132;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 139:
			unk.f_3 = joaat("v_ilev_roc_door4");
			unk = { -565.1712f, 276.6259f, 83.2863f };
			unk.f_5 = -1716533184;
			break;
	
		case 140:
			unk.f_3 = joaat("v_ilev_roc_door4");
			unk = { -561.2863f, 293.5043f, 87.7771f };
			unk.f_5 = 2146505927;
			break;
	
		case 141:
			unk.f_3 = joaat("p_jewel_door_l");
			unk = { -631.96f, -236.33f, 38.21f };
			unk.f_5 = 1874948872;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 142:
			unk.f_3 = joaat("p_jewel_door_r1");
			unk = { -630.43f, -238.44f, 38.21f };
			unk.f_5 = -1965020851;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 145:
			unk.f_3 = joaat("prop_ld_bankdoors_01");
			unk = { 231.62f, 216.23f, 106.4f };
			unk.f_5 = 1951546856;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 146:
			unk.f_3 = joaat("prop_ld_bankdoors_01");
			unk = { 232.72f, 213.88f, 106.4f };
			unk.f_5 = -431382051;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 143:
			unk.f_3 = joaat("hei_prop_hei_bankdoor_new");
			unk = { 258.32f, 203.84f, 106.43f };
			unk.f_5 = -293975210;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 144:
			unk.f_3 = joaat("hei_prop_hei_bankdoor_new");
			unk = { 260.76f, 202.95f, 106.43f };
			unk.f_5 = -785215289;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 148:
			unk.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			unk = { 256.31f, 220.66f, 106.43f };
			unk.f_5 = -366143778;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 147:
			unk.f_3 = joaat("v_ilev_bk_door");
			unk = { 266.36f, 217.57f, 110.43f };
			unk.f_5 = 440819155;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 149:
			unk.f_3 = joaat("v_ilev_shrf2door");
			unk = { -442.66f, 6015.2217f, 31.8663f };
			unk.f_5 = -588495243;
			break;
	
		case 150:
			unk.f_3 = joaat("v_ilev_shrf2door");
			unk = { -444.4985f, 6017.06f, 31.8663f };
			unk.f_5 = 1815504139;
			break;
	
		case 151:
			unk.f_3 = joaat("v_ilev_shrfdoor");
			unk = { 1855.6848f, 3683.9302f, 34.5928f };
			unk.f_5 = 1344911780;
			break;
	
		case 152:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1223.35f, -172.41f, 39.98f };
			unk.f_5 = -320891223;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 153:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1220.93f, -173.68f, 39.98f };
			unk.f_5 = 1511747875;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 154:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1211.99f, -190.57f, 39.98f };
			unk.f_5 = -1517722103;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 155:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1213.26f, -192.98f, 39.98f };
			unk.f_5 = -1093199712;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 156:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1217.77f, -201.54f, 39.98f };
			unk.f_5 = 1902048492;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 157:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1219.04f, -203.95f, 39.98f };
			unk.f_5 = -444768985;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 158:
			unk.f_3 = joaat("prop_ch3_04_door_01l");
			unk = { 2514.32f, -317.34f, 93.32f };
			unk.f_5 = 404057594;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 159:
			unk.f_3 = joaat("prop_ch3_04_door_01r");
			unk = { 2512.42f, -319.26f, 93.32f };
			unk.f_5 = -1417472813;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 160:
			unk.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			unk = { 2333.23f, 2574.97f, 47.03f };
			unk.f_5 = -1376084479;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 161:
			unk.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			unk = { 2329.65f, 2576.64f, 47.03f };
			unk.f_5 = 457472151;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 162:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 16.1279f, -1114.6055f, 29.9469f };
			unk.f_5 = 1071759151;
			break;
	
		case 163:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 18.572f, -1115.4951f, 29.9469f };
			unk.f_5 = -2119023917;
			break;
	
		case 165:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 1698.1763f, 3751.5056f, 34.8553f };
			unk.f_5 = -1488490473;
			break;
	
		case 166:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 1699.9371f, 3753.4202f, 34.8553f };
			unk.f_5 = -511187813;
			break;
	
		case 167:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 244.7274f, -44.0791f, 70.91f };
			unk.f_5 = -248569395;
			break;
	
		case 168:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 243.8379f, -46.5232f, 70.91f };
			unk.f_5 = 989443413;
			break;
	
		case 169:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 845.3624f, -1024.5391f, 28.3448f };
			unk.f_5 = 2022251829;
			break;
	
		case 170:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 842.7684f, -1024.5391f, 23.3448f };
			unk.f_5 = 649820567;
			break;
	
		case 171:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -326.1122f, 6075.2695f, 31.6047f };
			unk.f_5 = 537455378;
			break;
	
		case 172:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -324.273f, 6077.109f, 31.6047f };
			unk.f_5 = 1121431731;
			break;
	
		case 173:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -665.2424f, -944.3256f, 21.9792f };
			unk.f_5 = -1437380438;
			break;
	
		case 174:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -662.6414f, -944.3256f, 21.9792f };
			unk.f_5 = -946336965;
			break;
	
		case 175:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -1313.8259f, -389.1259f, 36.8457f };
			unk.f_5 = 1893144650;
			break;
	
		case 176:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -1314.465f, -391.6472f, 36.8457f };
			unk.f_5 = 435841678;
			break;
	
		case 177:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -1114.0089f, 2689.77f, 18.7041f };
			unk.f_5 = 948508314;
			break;
	
		case 178:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -1112.0708f, 2691.5046f, 18.7041f };
			unk.f_5 = -1796714665;
			break;
	
		case 179:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -3164.8452f, 1081.3917f, 20.9887f };
			unk.f_5 = -1155247245;
			break;
	
		case 180:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -3163.8115f, 1083.7784f, 20.9887f };
			unk.f_5 = 782482084;
			break;
	
		case 181:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 2570.9045f, 303.3556f, 108.8848f };
			unk.f_5 = -1194470801;
			break;
	
		case 182:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 2568.3037f, 303.3556f, 108.8848f };
			unk.f_5 = -2129698061;
			break;
	
		case 183:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 813.1779f, -2148.2695f, 29.7689f };
			unk.f_5 = 1071759151;
			break;
	
		case 184:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 810.5769f, -2148.2695f, 29.7689f };
			unk.f_5 = -2119023917;
			break;
	
		case 164:
			unk.f_3 = joaat("v_ilev_gc_door01");
			unk = { 6.8179f, -1098.2095f, 29.9469f };
			unk.f_5 = 1487704245;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 185:
			unk.f_3 = joaat("v_ilev_gc_door01");
			unk = { 827.5342f, -2160.4927f, 29.7688f };
			unk.f_5 = 1529812051;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 186:
			unk.f_3 = joaat("prop_lrggate_01c_l");
			unk = { -1107.01f, 289.38f, 64.76f };
			unk.f_5 = 904342475;
			break;
	
		case 187:
			unk.f_3 = joaat("prop_lrggate_01c_r");
			unk = { -1101.62f, 290.36f, 64.76f };
			unk.f_5 = -795418380;
			break;
	
		case 188:
			unk.f_3 = joaat("prop_lrggate_01c_l");
			unk = { -1138.64f, 300.82f, 67.18f };
			unk.f_5 = -1502457334;
			break;
	
		case 189:
			unk.f_3 = joaat("prop_lrggate_01c_r");
			unk = { -1137.05f, 295.59f, 67.18f };
			unk.f_5 = -1994188940;
			break;
	
		case 190:
			unk.f_3 = joaat("v_ilev_bl_doorel_l");
			unk = { -2053.16f, 3239.49f, 30.5f };
			unk.f_5 = -621770121;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 191:
			unk.f_3 = joaat("v_ilev_bl_doorel_r");
			unk = { -2054.39f, 3237.23f, 30.5f };
			unk.f_5 = 1018580481;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 192:
			unk.f_3 = joaat("v_ilev_cbankcountdoor01");
			unk = { -108.91f, 6469.11f, 31.91f };
			unk.f_5 = 421926217;
			break;
	
		case 193:
			unk.f_3 = joaat("prop_fnclink_03gate5");
			unk = { -182.91f, 6168.37f, 32.14f };
			unk.f_5 = -1331552374;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	}

	switch (iParam0)
	{
		case 196:
			unk.f_3 = joaat("v_ilev_csr_door_l");
			unk = { -59.89f, -1092.95f, 26.88f };
			unk.f_5 = -293141277;
			break;
	
		case 197:
			unk.f_3 = joaat("v_ilev_csr_door_r");
			unk = { -60.55f, -1094.75f, 26.89f };
			unk.f_5 = 506750037;
			break;
	
		case 194:
			unk.f_3 = joaat("v_ilev_csr_door_l");
			unk = { -39.13f, -1108.22f, 26.72f };
			unk.f_5 = 1496005418;
			break;
	
		case 195:
			unk.f_3 = joaat("v_ilev_csr_door_r");
			unk = { -37.33f, -1108.87f, 26.72f };
			unk.f_5 = -1863079210;
			break;
	
		case 198:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1943.73f, 3803.63f, 32.31f };
			unk.f_5 = -2018911784;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 199:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { 316.39f, -276.49f, 54.52f };
			unk.f_5 = -93934272;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 200:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { 313.96f, -275.6f, 54.52f };
			unk.f_5 = 667682830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 201:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { -2965.71f, 484.22f, 16.05f };
			unk.f_5 = 1876735830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 202:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { -2965.82f, 481.63f, 16.05f };
			unk.f_5 = -2112857171;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 205:
			unk.f_3 = joaat("v_ilev_abbmaindoor");
			unk = { 962.1f, -2183.83f, 31.06f };
			unk.f_5 = 2046930518;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 206:
			unk.f_3 = joaat("v_ilev_abbmaindoor2");
			unk = { 961.79f, -2187.08f, 31.06f };
			unk.f_5 = 1208502884;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 207:
			unk.f_3 = joaat("prop_ch3_04_door_02");
			unk = { 2508.43f, -336.63f, 115.76f };
			unk.f_5 = 1986432421;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 208:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2255.19f, 322.26f, 184.93f };
			unk.f_5 = -722798986;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 209:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2254.06f, 319.7f, 184.93f };
			unk.f_5 = 204301578;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 210:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2301.13f, 336.91f, 184.93f };
			unk.f_5 = -320140460;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 211:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2298.57f, 338.05f, 184.93f };
			unk.f_5 = 65222916;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 212:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2222.32f, 305.86f, 184.93f };
			unk.f_5 = -920027322;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 213:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2221.19f, 303.3f, 184.93f };
			unk.f_5 = -58432001;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 214:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2280.6f, 265.43f, 184.93f };
			unk.f_5 = -2007378629;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 215:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2278.04f, 266.57f, 184.93f };
			unk.f_5 = 418772613;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 216:
			unk.f_3 = joaat("prop_gar_door_04");
			unk = { 778.31f, -1867.49f, 30.66f };
			unk.f_5 = 1679064921;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 217:
			unk.f_3 = joaat("prop_gate_tep_01_l");
			unk = { -721.35f, 91.01f, 56.68f };
			unk.f_5 = 412198396;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 218:
			unk.f_3 = joaat("prop_gate_tep_01_r");
			unk = { -728.84f, 88.64f, 56.68f };
			unk.f_5 = -1053755588;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 219:
			unk.f_3 = joaat("prop_artgallery_02_dr");
			unk = { -2287.62f, 363.9f, 174.93f };
			unk.f_5 = -53446139;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 220:
			unk.f_3 = joaat("prop_artgallery_02_dl");
			unk = { -2289.78f, 362.91f, 174.93f };
			unk.f_5 = 1333960556;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 221:
			unk.f_3 = joaat("prop_artgallery_02_dr");
			unk = { -2289.86f, 362.88f, 174.93f };
			unk.f_5 = -41786493;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 222:
			unk.f_3 = joaat("prop_artgallery_02_dl");
			unk = { -2292.01f, 361.89f, 174.93f };
			unk.f_5 = 1750120734;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 223:
			unk.f_3 = joaat("prop_fnclink_07gate1");
			unk = { 1803.94f, 3929.01f, 33.72f };
			unk.f_5 = 1661506222;
			break;
	
		case 203:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { -348.81f, -47.26f, 49.39f };
			unk.f_5 = -2116116146;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 204:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { -351.26f, -46.41f, 49.39f };
			unk.f_5 = -74083138;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 224:
			unk.f_3 = joaat("prop_abat_slide");
			unk = { 962.9084f, -2105.8137f, 34.6432f };
			unk.f_5 = -1670085357;
			break;
	}

	return unk;
}

BOOL func_117() // Position - 0x8F54 (36692)
{
	if (func_119() == -1 || func_119() == 999 && !(func_118() == 0))
		return true;

	return false;
}

int func_118() // Position - 0x8F84 (36740)
{
	return Global_33088;
}

int func_119() // Position - 0x8F8F (36751)
{
	return Global_33087;
}

BOOL func_120() // Position - 0x8F9A (36762)
{
	if (Global_101688 == 13 || Global_101688 == 10 || Global_101688 == 11 || Global_101688 == 12)
		return false;

	return true;
}

BOOL func_121(int iParam0, int iParam1) // Position - 0x8FD8 (36824)
{
	int num;

	num = (func_27(func_42()) * 100) + func_26(func_42());

	if (iParam1 > iParam0)
		if (num < iParam0 || num > iParam1)
			return false;
	else if (num < iParam0 && num > iParam1)
		return false;

	return true;
}

void func_122(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x902D (36909)
{
	func_123(func_42(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_123(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x904B (36939)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_24(iParam0, iParam1))
	{
		num = func_29(iParam1);
		num2 = func_30(iParam0);
		num3 = func_30(iParam0) - func_30(iParam1);
		num4 = func_29(iParam0) - func_29(iParam1);
		num5 = func_28(iParam0) - func_28(iParam1);
		num6 = func_27(iParam0) - func_27(iParam1);
		num7 = func_26(iParam0) - func_26(iParam1);
		num8 = func_25(iParam0) - func_25(iParam1);
	}
	else
	{
		num = func_29(iParam0);
		num2 = func_30(iParam1);
		num3 = func_30(iParam1) - func_30(iParam0);
		num4 = func_29(iParam1) - func_29(iParam0);
		num5 = func_28(iParam1) - func_28(iParam0);
		num6 = func_27(iParam1) - func_27(iParam0);
		num7 = func_26(iParam1) - func_26(iParam0);
		num8 = func_25(iParam1) - func_25(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_33(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_124(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_124(float fParam0, float fParam1, float fParam2) // Position - 0x924C (37452)
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

BOOL func_125(BOOL bParam0) // Position - 0x928E (37518)
{
	if (bParam0)
		if (func_43(130) && !func_43(131))
			return true;

	return false;
}

BOOL func_126(int iParam0) // Position - 0x92B5 (37557)
{
	if (func_127(iParam0))
		return false;
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			return true;

	return false;
}

BOOL func_127(int iParam0) // Position - 0x92EA (37610)
{
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 41 || iParam0 == 60 || iParam0 == 61)
		return true;

	return false;
}

BOOL func_128(int iParam0) // Position - 0x9329 (37673)
{
	if (iParam0 == 58 || iParam0 == 59 || iParam0 == 62)
		if (func_129(40) || func_129(41) || func_129(43) || func_129(47))
			return true;

	if (iParam0 == 24)
		if (func_129(41))
			return true;

	return false;
}

BOOL func_129(int iParam0) // Position - 0x9395 (37781)
{
	int i;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_95648[iParam0 /*2*/])
		return true;

	for (i = 0; i < Global_92415; i = i + 1)
	{
		if (Global_92415[i /*5*/] != -1)
			if (Global_79810.f_109[Global_92415[i /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

BOOL func_130() // Position - 0x93FD (37885)
{
	return true;
}

int func_131(int iParam0) // Position - 0x9406 (37894)
{
	if (Global_44181 == 15)
		return 0;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return 0;

	return 1;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x9428 (37928)
{
	return func_133(iParam0, Global_44181);
}

BOOL func_133(int iParam0, int iParam1) // Position - 0x9439 (37945)
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

void func_134() // Position - 0x961A (38426)
{
	int i;

	uLocal_72[0] = 243;
	uLocal_72[1] = 244;
	uLocal_72[2] = 245;
	uLocal_72[3] = 246;
	uLocal_72[4] = 247;
	uLocal_72[5] = 248;
	uLocal_72[6] = 249;
	uLocal_72[7] = 250;
	uLocal_72[8] = 251;
	uLocal_72[9] = 252;
	uLocal_72[10] = 253;
	uLocal_72[11] = 254;
	uLocal_72[12] = 255;
	uLocal_72[13] = 256;
	uLocal_72[14] = 257;
	uLocal_72[15] = 258;
	uLocal_72[16] = 259;
	uLocal_72[17] = 260;
	uLocal_72[18] = 261;
	uLocal_72[19] = 262;

	for (i = 0; i < 20; i = i + 1)
	{
		uLocal_51[i] = 0;
		func_3(uLocal_72[i], false, false);
		func_135(uLocal_72[i], 4);
		func_90(uLocal_72[i], 8);
		func_77(uLocal_72[i]);
		func_98(uLocal_72[i], 0);
		func_99(uLocal_72[i], 66);
		func_95(uLocal_72[i]);
	}

	return;
}

void func_135(int iParam0, int iParam1) // Position - 0x9724 (38692)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 16);
	Global_33467[num /*23*/].f_22 = iParam1;

	if (Global_33464 == 1)
		Global_33465 = 1;

	Global_33464 = 1;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_136() // Position - 0x978A (38794)
{
	int i;

	for (i = 0; i < 63; i = i + 1)
	{
		Global_113222[i /*10*/].f_5 = 0;
		Global_113222[i /*10*/].f_6 = 0;
		Global_113222[i /*10*/].f_4 = 0;
		Global_113222[i /*10*/].f_7 = 0;
		Global_113222[i /*10*/].f_8 = -1;
		Global_113222[i /*10*/].f_9 = -1;
	}

	return;
}

void func_137() // Position - 0x97E7 (38887)
{
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


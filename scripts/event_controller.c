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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_45 = 0f;
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
	var uLocal_62 = 0;
	BOOL bLocal_63 = 0;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = (0.05f + 0.275f) - 0.01f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_154();
		func_1();
	}

	return;
}

void func_1() // Position - 0xA5 (165)
{
	eEventType eventAtIndex;
	Entity eventData;
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	eEventType eventAtIndex2;

	i = 0;
	num = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
		{
			eventAtIndex2 = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
		
			switch (eventAtIndex2)
			{
				case EVENT_VOICE_SESSION_STARTED:
					func_151();
					break;
			
				case EVENT_VOICE_SESSION_ENDED:
					func_150();
					break;
			
				case EVENT_VOICE_CONNECTION_REQUESTED:
					func_144(i);
					break;
			
				case EVENT_VOICE_CONNECTION_RESPONSE:
					func_143(i);
					break;
			
				case EVENT_VOICE_CONNECTION_TERMINATED:
					func_132(i);
					break;
			
				case EVENT_NETWORK_PRESENCE_INVITE:
					func_3(i);
					break;
			}
		}
	}

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i);
		bLocal_63 = true;
	
		switch (eventAtIndex)
		{
			case EVENT_ENTITY_DAMAGED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
			
				if (ENTITY::DOES_ENTITY_EXIST(eventData))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
					{
						if (func_2(num))
						{
							Global_56774.f_1[num] = eventData;
							num = num + 1;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(eventData))
					{
						if (func_2(num3))
						{
							Global_56774.f_25[num3] = eventData;
							num3 = num3 + 1;
						}
					}
				}
				break;
		
			case EVENT_ENTITY_DESTROYED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
			
				if (ENTITY::DOES_ENTITY_EXIST(eventData))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
					{
						if (func_2(num2))
						{
							Global_56774.f_13[num2] = eventData;
							num2 = num2 + 1;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(eventData))
					{
						if (func_2(num4))
						{
							Global_56774.f_37[num4] = eventData;
							num4 = num4 + 1;
						}
					}
				}
				break;
		}
	}

	Global_56774 = num;
	Global_56774.f_12 = num2;
	Global_56774.f_24 = num3;
	Global_56774.f_36 = num4;
	return;
}

BOOL func_2(int iParam0) // Position - 0x24E (590)
{
	return iParam0 < 10;
}

void func_3(int iParam0) // Position - 0x25B (603)
{
	struct<39> eventData;
	int presenceInviteIndexById;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 39))
	{
		presenceInviteIndexById = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(eventData.f_38);
	
		if (presenceInviteIndexById >= 0 && presenceInviteIndexById < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(presenceInviteIndexById) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(presenceInviteIndexById))
			{
				if (NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(presenceInviteIndexById))
					func_67(presenceInviteIndexById);
				else
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(presenceInviteIndexById);
			
				func_66(eventData.f_37, -1);
			}
			else if (func_49())
			{
				func_4(eventData.f_29, eventData, eventData.f_38, eventData.f_16, eventData.f_35, eventData.f_36);
			}
		}
	}

	return;
}

int func_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, int iParam37) // Position - 0x2F8 (760)
{
	BOOL flag;
	BOOL flag2;
	var unk;
	int num;
	int presenceInviteIndexById;
	int presenceInviteSessionId;
	int i;
	var unk17;
	int num2;
	int num3;
	int num4;
	int num5;
	var unk27;
	var unk43;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	BOOL flag3;
	int num11;
	int num12;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	int num13;
	int j;
	int num14;

	flag = false;

	if (iParam37 >= 1000000)
	{
		iParam37 = iParam37 - 1000000;
		flag = true;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_48())
		{
			func_47(iParam22);
			return 0;
		}
	
		if (func_46())
		{
			func_47(iParam22);
			return 0;
		}
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (flag)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&uParam23))
		{
			func_47(iParam22);
			return 0;
		}
	
		if (Global_21182)
		{
			func_47(iParam22);
			return 0;
		}
	
		flag2 = true;
	
		if (!func_45())
		{
			if (!func_44(false))
			{
				if (flag2)
				{
					func_47(iParam22);
					return 0;
				}
			}
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_43(PLAYER::PLAYER_ID()))
		{
			func_47(iParam22);
			return 0;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam6))
	{
		func_47(iParam22);
		return 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		func_47(iParam22);
		return 0;
	}

	unk = { uParam6 };
	num = func_42(unk);

	if (num != -1)
		func_39(num);

	presenceInviteIndexById = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam22);

	if (presenceInviteIndexById != -1)
	{
		presenceInviteSessionId = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(presenceInviteIndexById);
		i = 0;
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (presenceInviteSessionId == Global_2625723[i /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2625723[i /*4*/].f_2)
			{
				Global_2625723[i /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				i = 12;
				func_47(iParam22);
				return 0;
			}
		}
	}

	unk17.f_1 = -1;
	unk17.f_2 = -1;
	unk17.f_9 = -1;
	func_38(&unk17);
	num2 = 0;
	num3 = 0;
	num4 = 63;
	num5 = 0;
	TEXT_LABEL_ASSIGN_STRING(&unk27, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&unk43, "", 64);
	num6 = 0;
	num7 = 0;
	num8 = 0;
	num9 = 1;
	num10 = 0;
	flag3 = false;

	if (func_37(&uParam0, &num2, &num5))
	{
		num4 = 40;
		num7 = 0;
		num5 = num5;
	}
	else if (func_35(&uParam0, &unk17, false))
	{
		num4 = unk17.f_2;
		num2 = func_34(num4, unk17.f_1);
		num3 = func_33(&unk17);
		unk27 = { func_32(&unk17, false) };
		unk43 = { func_31(&unk17) };
		num7 = 1;
		num6 = func_30(&unk17, false);
		flag3 = func_29(&unk17);
		num11 = func_27(&unk17);
		num12 = func_26(&unk17);
		flag4 = func_21(&unk17);
	
		if (!flag4)
			num10 = 1;
	}
	else
	{
		flag5 = false;
	
		if (func_19(PLAYER::PLAYER_ID(), uParam23))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				flag5 = true;
			}
			else
			{
				func_47(iParam22);
				func_17(false);
				return 0;
			}
		}
	
		if (!func_16())
		{
			if (!flag5)
			{
				if (func_14(PLAYER::PLAYER_ID(), uParam23))
				{
					func_47(iParam22);
					func_17(false);
					return 0;
				}
			}
		}
	
		if (!func_13())
		{
			func_47(iParam22);
			flag6 = true;
			func_17(flag6);
			return 0;
		}
	
		flag7 = false;
	
		if (!flag5)
		{
			if (func_7(uParam23, &flag7, true))
			{
				func_47(iParam22);
				func_17(flag7);
				return 0;
			}
		}
	
		num8 = 1;
		num9 = 0;
		num7 = 1;
	}

	num13 = Global_1685357;

	if (num13 >= 12)
		num13 = num13 - 1;

	for (j = num13 - 1; j >= 0; j = j - 1)
	{
		Global_2623445[num13 /*99*/] = { Global_2623445[j /*99*/] };
		num13 = num13 - 1;
	}

	Global_1685357 = Global_1685357 + 1;

	if (Global_1685357 > 12)
		Global_1685357 = 12;

	num14 = 0;
	Global_2623445[num14 /*99*/] = 0;
	Global_2623445[num14 /*99*/].f_1 = 0;
	Global_2623445[num14 /*99*/].f_5 = 0;
	Global_2623445[num14 /*99*/].f_2 = num8;
	Global_2623445[num14 /*99*/].f_3 = 0;
	Global_2623445[num14 /*99*/].f_4 = num9;
	Global_2623445[num14 /*99*/].f_6 = { uParam0 };
	Global_2623445[num14 /*99*/].f_12 = num11;
	Global_2623445[num14 /*99*/].f_13 = num12;
	Global_2623445[num14 /*99*/].f_15 = { uParam6 };
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[num14 /*99*/].f_31), "", 64);
	Global_2623445[num14 /*99*/].f_49 = num4;
	Global_2623445[num14 /*99*/].f_50 = num2;
	Global_2623445[num14 /*99*/].f_51 = num3;
	Global_2623445[num14 /*99*/].f_91 = iParam22;
	Global_2623445[num14 /*99*/].f_57 = { unk27 };
	Global_2623445[num14 /*99*/].f_73 = { unk43 };
	Global_2623445[num14 /*99*/].f_52 = num6;
	Global_2623445[num14 /*99*/].f_53 = 0;
	Global_2623445[num14 /*99*/].f_53.f_1 = 0;
	Global_2623445[num14 /*99*/].f_53.f_2 = 0;
	Global_2623445[num14 /*99*/].f_56 = num7;
	Global_2623445[num14 /*99*/].f_90 = uParam36;
	Global_2623445[num14 /*99*/].f_92 = -1;
	Global_2623445[num14 /*99*/].f_93 = num10;
	Global_2623445[num14 /*99*/].f_94 = Global_2625775;
	Global_2623445[num14 /*99*/].f_95 = flag3;
	Global_2623445[num14 /*99*/].f_98 = NETWORK::NETWORK_IS_FRIEND(&uParam23);

	if (Global_2623445[num14 /*99*/].f_50 == 0)
		if (Global_2623445[num14 /*99*/].f_51 == 1)
			Global_2623445[num14 /*99*/].f_56 = 0;

	Global_2623445[num14 /*99*/].f_96 = func_6(uParam23, num14);
	Global_2623445[num14 /*99*/].f_97 = 0;
	Global_2623445[num14 /*99*/].f_89 = iParam37;
	Global_2625775 = Global_2625775 + 1;
	Global_2623445[num14 /*99*/].f_47 = func_5(uParam23);

	if (Global_2623445[num14 /*99*/].f_47 != -1)
		Global_2623445[num14 /*99*/].f_48 = MISC::GET_GAME_TIMER() + 15000;

	return 1;
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x84B (2123)
{
	var unk;
	int num;

	if (!func_16())
		return -1;

	unk = 1;
	unk[0 /*13*/] = { uParam0 };
	num = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&unk, 1);

	if (num < 0)
		return -1;

	return num;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13) // Position - 0x886 (2182)
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
		return 0;

	if (Global_2623445[iParam13 /*99*/].f_90 > 0)
		return 0;

	return 1;
}

BOOL func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, BOOL bParam14) // Position - 0x8AF (2223)
{
	var gamerHandle1;

	*uParam13 = 0;

	if (func_12(0))
		return false;

	if (func_16())
	{
		if (!func_11())
		{
			*uParam13 = 1;
			return true;
		}
	}

	if (!func_9(1) && !bParam14)
		return true;

	gamerHandle1 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	if (!bParam14 && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &uParam0))
		if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
			return true;

	return false;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x923 (2339)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_9(int iParam0) // Position - 0x93A (2362)
{
	if (MISC::IS_PS3_VERSION() || func_10() && iParam0 == 0)
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == false || NETWORK::_NETWORK_HAVE_PLATFORM_COMMUNICATION_PRIVILEGES() == false)
			return false;
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == false)
		return false;

	if (func_11() == false)
		return false;

	return true;
}

BOOL func_10() // Position - 0x993 (2451)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_11() // Position - 0x9A9 (2473)
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (func_10() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == false && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (func_16() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	return false;
}

BOOL func_12(int iParam0) // Position - 0xA21 (2593)
{
	if (MISC::IS_PS3_VERSION() || func_10() && iParam0 == 0)
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false || NETWORK::_NETWORK_HAVE_PLATFORM_COMMUNICATION_PRIVILEGES() == false)
			return false;
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false)
		return false;

	if (func_11() == false)
		return false;

	return true;
}

BOOL func_13() // Position - 0xA7A (2682)
{
	if (!MISC::IS_XBOX360_VERSION())
		return true;

	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

BOOL func_14(Player plParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xA92 (2706)
{
	if (!func_15(plParam0))
	{
		if (func_16() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1))
				return false;
	
		if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
				return true;
	}

	return false;
}

BOOL func_15(Player plParam0) // Position - 0xAD9 (2777)
{
	switch (plParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_16() // Position - 0xB05 (2821)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_17(BOOL bParam0) // Position - 0xB1B (2843)
{
	int gameTimer;

	if (bParam0)
		if (!MISC::IS_XBOX360_VERSION())
			return;

	if (func_16())
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (gameTimer < Global_2625772)
		return;

	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		return;

	if (bParam0)
		_DISPLAY_HELP_TEXT("INV_NO_XBOXLIVE", -1);
	else
		_DISPLAY_HELP_TEXT("INV_RESTRICT" /*You have received an Invite to user-generated content which is currently restricted by your control settings.*/, -1);

	Global_2625772 = gameTimer + 1800000;
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xB7B (2939)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_19(Player plParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xB92 (2962)
{
	if (!func_15(plParam0))
	{
		if (func_16() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1))
				return false;
	
		if (!func_20())
			return true;
	}

	return false;
}

BOOL func_20() // Position - 0xBCF (3023)
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	if (func_10())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (func_16())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return true;

	return false;
}

BOOL func_21(var uParam0) // Position - 0xC40 (3136)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_25(uParam0))
		return IS_BIT_SET(Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return IS_BIT_SET(Global_2628534.f_1.f_63, 14);
	
		return flag;
	}

	num = func_22(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return IS_BIT_SET(Global_794954.f_4[num /*95*/].f_82, 14);
	
		case 62:
			return IS_BIT_SET(Global_958977.f_1804[num /*95*/].f_82, 14);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

int func_22(var uParam0) // Position - 0xD10 (3344)
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
		return -1;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return 9999;
	
		return -1;
	}

	i = 0;

	switch (uParam0->f_2)
	{
		case 63:
			if (IS_BIT_SET(Global_794954.f_4[uParam0->f_1 /*95*/].f_82, 13))
				if (MISC::ARE_STRINGS_EQUAL(&Global_794954.f_4[uParam0->f_1 /*95*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_794954.f_4[uParam0->f_1 /*95*/].f_82, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (i = 0; i < 1518; i = i + 1)
			{
				if (IS_BIT_SET(Global_794954.f_4[i /*95*/].f_82, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Global_794954.f_4[i /*95*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = i;
						return i;
					}
				}
			}
		
			return -1;
	
		case 62:
			if (IS_BIT_SET(Global_958977.f_1804[uParam0->f_1 /*95*/].f_82, 13))
				if (MISC::ARE_STRINGS_EQUAL(&Global_958977.f_1804[uParam0->f_1 /*95*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_958977.f_1804[uParam0->f_1 /*95*/].f_82, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (i = 0; i < 300; i = i + 1)
			{
				if (IS_BIT_SET(Global_958977.f_1804[i /*95*/].f_82, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Global_958977.f_1804[i /*95*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = i;
						return i;
					}
				}
			}
		
			return -1;
	
		case 40:
			return uParam0->f_1;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (IS_BIT_SET(Global_993502.f_4[uParam0->f_1 /*95*/].f_82, 13))
			if (MISC::ARE_STRINGS_EQUAL(&Global_993502.f_4[uParam0->f_1 /*95*/], &(uParam0->f_3)))
				return uParam0->f_1;
	
		if (IS_BIT_SET(Global_993502.f_4[uParam0->f_1 /*95*/].f_82, 13))
			if (Global_1573131.f_5)
				return -1;
	
		for (i = 0; i < 62; i = i + 1)
		{
			if (IS_BIT_SET(Global_993502.f_4[i /*95*/].f_82, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_993502.f_4[i /*95*/], &(uParam0->f_3)))
				{
					uParam0->f_1 = i;
					return i;
				}
			}
		}
	
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}

	return -1;
}

BOOL func_23(var uParam0) // Position - 0xF66 (3942)
{
	if (Global_2628534)
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628534.f_1), &(uParam0->f_3)))
			return true;

	return false;
}

BOOL func_24(int iParam0) // Position - 0xF8B (3979)
{
	return iParam0 == 9999;
}

BOOL func_25(var uParam0) // Position - 0xF99 (3993)
{
	int num;

	num = uParam0->f_9;

	if (num == -1)
		return false;

	if (!Global_2625777.f_356[num /*75*/])
		return false;

	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2625777.f_356[num /*75*/].f_10), &(uParam0->f_3)))
		return false;

	if (!IS_BIT_SET(Global_2625777.f_356[num /*75*/].f_5, 3))
		return false;

	return true;
}

int func_26(var uParam0) // Position - 0xFF9 (4089)
{
	int num;
	int num2;

	num = 0;
	num2 = func_22(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[num2 /*95*/].f_86;
	
		case 62:
			return num;
	
		default:
		
	}

	return num;
}

int func_27(var uParam0) // Position - 0x1042 (4162)
{
	var unk;
	int num;
	int num2;

	unk.f_2 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_10 = -1;
	unk.f_12 = -1;
	num = 0;
	num2 = func_22(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			unk = { func_28(uParam0) };
			return unk.f_1;
	
		case 62:
			return num;
	
		default:
		
	}

	return num;
}

struct<13> func_28(var uParam0) // Position - 0x10AF (4271)
{
	var unk;
	int num;

	unk.f_2 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_10 = -1;
	unk.f_12 = -1;
	num = func_22(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_144215[num /*13*/];
	
		case 62:
			return Global_958977.f_30305[num /*13*/];
	
		default:
		
	}

	return unk;
}

BOOL func_29(var uParam0) // Position - 0x112C (4396)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_25(uParam0))
		return IS_BIT_SET(Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return IS_BIT_SET(Global_2628534.f_1.f_63, 17);
	
		return flag;
	}

	num = func_22(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return IS_BIT_SET(Global_794954.f_4[num /*95*/].f_82, 17);
	
		case 62:
			return IS_BIT_SET(Global_958977.f_1804[num /*95*/].f_82, 17);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

int func_30(var uParam0, BOOL bParam1) // Position - 0x11FC (4604)
{
	int num;
	int num2;

	num = 0;

	if (!bParam1)
		if (func_25(uParam0))
			if (IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
				return Global_2628668.f_513[uParam0->f_9];

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_54;
	
		return num;
	}

	num2 = func_22(uParam0);

	if (num2 == -1)
		return 0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[num2 /*95*/].f_60;
	
		case 62:
			return Global_958977.f_1804[num2 /*95*/].f_60;
	
		case 40:
			return 0;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[num2 /*95*/].f_60;
	else if (uParam0->f_2 < 32)
		return num;

	return num;
}

struct<16> func_31(var uParam0) // Position - 0x12DB (4827)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NO DESCRIPTION", 64);

	if (func_25(uParam0))
		return Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_28;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_28;
	
		return unk;
	}

	num = func_22(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[num /*95*/].f_38;
	
		case 62:
			return Global_958977.f_1804[num /*95*/].f_38;
	
		case 40:
			return unk;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[num /*95*/].f_38;
	else if (uParam0->f_2 < 32)
		return unk;

	return unk;
}

struct<16> func_32(var uParam0, BOOL bParam1) // Position - 0x13CB (5067)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "UNKNOWN", 64);

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);

	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
				return Global_2628668[uParam0->f_9 /*16*/];
		
			return Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_12;
	
		return unk;
	}

	num = func_22(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[num /*95*/].f_22;
	
		case 62:
			return Global_958977.f_1804[num /*95*/].f_22;
	
		case 40:
			return unk;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[num /*95*/].f_22;
	else if (uParam0->f_2 < 32)
		return unk;

	return unk;
}

int func_33(var uParam0) // Position - 0x14ED (5357)
{
	int num;
	int num2;

	num = -1;

	if (func_25(uParam0))
		return Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_55;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_55;
	
		return num;
	}

	num2 = func_22(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[num2 /*95*/].f_74;
	
		case 62:
			return Global_958977.f_1804[num2 /*95*/].f_74;
	
		case 40:
			return num;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[num2 /*95*/].f_74;
	else if (uParam0->f_2 < 32)
		return num;

	return num;
}

int func_34(Player plParam0, int iParam1) // Position - 0x15BB (5563)
{
	if (func_24(iParam1))
	{
		if (Global_2628534)
			return Global_2628534.f_1.f_53;
	
		return 362;
	}

	switch (plParam0)
	{
		case 63:
			return Global_794954.f_4[iParam1 /*95*/].f_71;
	
		case 62:
			return Global_958977.f_1804[iParam1 /*95*/].f_71;
	
		default:
		
	}

	if (plParam0 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[iParam1 /*95*/].f_71;
	else if (plParam0 < 32)
		return 362;

	return 362;
}

BOOL func_35(const char* sParam0, var uParam1, BOOL bParam2) // Position - 0x1644 (5700)
{
	int i;
	int num;
	int num2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return false;

	i = 0;
	num = -1;
	num2 = 1518;

	if (!bParam2)
		num2 = 1500;

	for (i = 0; i < num2; i = i + 1)
	{
		if (IS_BIT_SET(Global_794954.f_4[i /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_794954.f_4[i /*95*/], sParam0))
			{
				num = Global_794954.f_4[i /*95*/].f_71;
				*uParam1 = func_36(num);
				uParam1->f_1 = i;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794954.f_4[i /*95*/] };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (i = 0; i < 300; i = i + 1)
	{
		if (IS_BIT_SET(Global_958977.f_1804[i /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_958977.f_1804[i /*95*/], sParam0))
			{
				num = Global_958977.f_1804[i /*95*/].f_71;
				*uParam1 = func_36(num);
				uParam1->f_1 = i;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (i = 0; i < 62; i = i + 1)
	{
		if (IS_BIT_SET(Global_993502.f_4[i /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_993502.f_4[i /*95*/], sParam0))
			{
				num = Global_993502.f_4[i /*95*/].f_71;
				*uParam1 = func_36(num);
				uParam1->f_1 = i;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	return false;
}

int func_36(int iParam0) // Position - 0x17D4 (6100)
{
	switch (iParam0)
	{
		case 15:
			return 237;
	
		case 14:
			return 238;
	
		case 122:
			return 242;
	
		case 11:
			return 239;
	
		case 13:
			return 240;
	
		case 12:
			return 241;
	
		case 8:
			return 244;
	
		case 1:
			return 245;
	
		case 5:
			return 243;
	
		case 6:
			return 246;
	
		case 3:
			return 249;
	
		case 0:
			return 247;
	
		case 2:
			return 248;
	
		case 148:
			return 49;
	
		case 151:
			return 52;
	
		case 152:
			return 53;
	
		case 157:
			return 54;
	
		case 153:
			return 55;
	
		case 154:
			return 56;
	
		case 155:
			return 57;
	
		case 159:
			return 58;
	
		case 162:
			return 51;
	
		case 142:
			return 60;
	
		case 160:
			return 62;
	
		case 164:
			return 63;
	
		case 163:
			return 64;
	
		case 166:
			return 65;
	
		case 167:
			return 66;
	
		case 168:
			return 67;
	
		case 169:
			return 68;
	
		case 170:
			return 69;
	
		case 171:
			return 70;
	
		case 172:
			return 71;
	
		case 173:
			return 72;
	
		case 178:
			return 73;
	
		case 188:
			return 74;
	
		case 214:
			return 75;
	
		case 215:
			return 76;
	
		case 216:
			return 77;
	
		case 217:
			return 78;
	
		case 218:
			return 79;
	
		case 219:
			return 80;
	
		case 220:
			return 81;
	
		case 221:
			return 82;
	
		case 179:
			return 84;
	
		case 189:
			return 83;
	
		case 180:
			return 85;
	
		case 182:
			return 87;
	
		case 183:
			return 88;
	
		case 185:
			return 89;
	
		case 186:
			return 90;
	
		case 190:
			return 91;
	
		case 191:
			return 92;
	
		case 192:
			return 93;
	
		case 193:
			return 94;
	
		case 205:
			return 102;
	
		case 194:
			return 95;
	
		case 197:
			return 96;
	
		case 198:
			return 97;
	
		case 195:
			return 98;
	
		case 199:
			return 99;
	
		case 200:
			return 100;
	
		case 201:
			return 101;
	
		case 207:
			return 103;
	
		case 208:
			return 104;
	
		case 209:
			return 105;
	
		case 210:
			return 106;
	
		case 225:
			return 107;
	
		case 226:
			return 108;
	
		case 227:
			return 109;
	
		case 229:
			return 110;
	
		case 230:
			return 111;
	
		case 233:
			return 113;
	
		case 237:
			return 115;
	
		case 238:
			return 116;
	
		case 249:
			return 123;
	
		case 239:
			return 117;
	
		case 240:
			return 118;
	
		case 241:
			return 119;
	
		case 242:
			return 120;
	
		case 244:
			return 121;
	
		case 248:
			return 122;
	
		case 250:
			return 124;
	
		case 243:
			return 125;
	
		case 158:
			return 126;
	
		case 181:
			return 86;
	
		case 150:
			return 127;
	
		case 24:
			return 128;
	
		case 26:
			return 129;
	
		case 256:
			return 130;
	
		case 258:
			return 131;
	
		case 259:
			return 133;
	
		case 271:
			return 134;
	
		case 273:
			return 135;
	
		case 276:
			return 136;
	
		case 277:
			return 137;
	
		case 262:
			return 138;
	
		case 263:
			return 139;
	
		case 264:
			return 140;
	
		case 268:
			return 141;
	
		case 269:
			return 143;
	
		case 270:
			return 144;
	
		case 275:
			return 145;
	
		case 280:
			return 146;
	
		case 281:
			return 147;
	
		case 282:
			return 148;
	
		case 286:
			return 149;
	
		case 267:
			return 151;
	
		case 266:
			return 150;
	
		case 287:
			return 152;
	
		case 289:
			return 153;
	
		case 147:
			return 154;
	
		case 291:
			return 155;
	
		case 292:
			return 156;
	
		case 293:
			return 157;
	
		case 294:
			return 158;
	
		case 295:
			return 159;
	
		case 296:
			return 160;
	
		case 297:
			return 161;
	
		case 298:
			return 162;
	
		case 299:
			return 163;
	
		case 300:
			return 164;
	
		case 301:
			return 165;
	
		case 288:
			return 166;
	
		case 290:
			return 167;
	
		case 304:
			return 168;
	
		case 305:
			return 169;
	
		case 306:
			return 170;
	
		case 307:
			return 171;
	
		case 308:
			return 172;
	
		case 309:
			return 173;
	
		case 310:
			return 174;
	
		case 311:
			return 175;
	
		case 312:
			return 176;
	
		case 313:
			return 177;
	
		case 314:
			return 178;
	
		case 315:
			return 179;
	
		case 316:
			return 180;
	
		case 317:
			return 181;
	
		case 318:
			return 182;
	
		case 320:
			return 183;
	
		case 322:
			return 184;
	
		case 323:
			return 185;
	
		case 324:
			return 186;
	
		case 325:
			return 187;
	
		case 326:
			return 188;
	
		case 327:
			return 189;
	
		case 328:
			return 190;
	
		case 329:
			return 191;
	
		case 330:
			return 192;
	
		case 331:
			return 193;
	
		case 332:
			return 194;
	
		case 333:
			return 195;
	
		case 337:
			return 196;
	
		case 338:
			return 197;
	
		case 339:
			return 198;
	
		case 340:
			return 199;
	
		case 343:
			return 200;
	
		case 344:
			return 201;
	
		case 345:
			return 202;
	
		case 346:
			return 203;
	
		case 347:
			return 204;
	
		case 348:
			return 205;
	
		case 349:
			return 206;
	
		case 350:
			return 207;
	
		case 351:
			return 208;
	
		case 353:
			return 210;
	
		case 354:
			return 211;
	
		case 355:
			return 212;
	
		case 356:
			return 213;
	
		case 357:
			return 214;
	
		case 358:
			return 215;
	
		case 359:
			return 216;
	
		case 360:
			return 217;
	
		case 361:
			return 218;
	
		default:
		
	}

	return 0;
}

BOOL func_37(const char* sParam0, var uParam1, int* piParam2) // Position - 0x1F69 (8041)
{
	int lengthOfLiteralStringInBytes;
	var string1;
	var string12;
	var unk5;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return false;

	lengthOfLiteralStringInBytes = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0);

	if (!(lengthOfLiteralStringInBytes > 12))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&string1, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, 0, 5), 8);

	if (!MISC::ARE_STRINGS_EQUAL(&string1, "FAKE_"))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&string12, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, 5, 12), 16);

	if (MISC::ARE_STRINGS_EQUAL(&string12, "GOLF___"))
		*uParam1 = 11;
	else if (MISC::ARE_STRINGS_EQUAL(&string12, "TENNIS_"))
		*uParam1 = 12;
	else if (MISC::ARE_STRINGS_EQUAL(&string12, "PILOTS_"))
		*uParam1 = 122;
	else if (MISC::ARE_STRINGS_EQUAL(&string12, "SHOOTR_"))
		*uParam1 = 13;
	else if (MISC::ARE_STRINGS_EQUAL(&string12, "DARTS__"))
		*uParam1 = 14;
	else if (MISC::ARE_STRINGS_EQUAL(&string12, "ARMWRS_"))
		*uParam1 = 15;
	else
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk5, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, 12, lengthOfLiteralStringInBytes), 8);

	if (!MISC::STRING_TO_INT(&unk5, piParam2))
		return false;

	return true;
}

void func_38(var uParam0) // Position - 0x2058 (8280)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
	return;
}

void func_39(int iParam0) // Position - 0x207B (8315)
{
	int i;
	int num;
	int j;

	if (iParam0 >= Global_1685357)
		return;

	i = 0;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (MISC::GET_GAME_TIMER() > Global_2625723[i /*4*/].f_2 || Global_2625723[i /*4*/].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2623445[iParam0 /*99*/].f_91 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_2625723[i /*4*/].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2623445[iParam0 /*99*/].f_91);
				Global_2625723[i /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				i = 12;
			}
		}
	}

	if (Global_2623445[iParam0 /*99*/].f_92 != -1)
		HUD::THEFEED_REMOVE_ITEM(Global_2623445[iParam0 /*99*/].f_92);

	if (!Global_2623445[iParam0 /*99*/].f_56)
		if (Global_2623445[iParam0 /*99*/].f_52 != 0)
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_2623445[iParam0 /*99*/].f_52);

	func_47(Global_2623445[iParam0 /*99*/].f_91);
	num = iParam0;

	for (j = num + 1; j < Global_1685357; j = j + 1)
	{
		Global_2623445[num /*99*/] = { Global_2623445[j /*99*/] };
		num = num + 1;
	}

	func_41(num);
	Global_1685357 = Global_1685357 - 1;

	if (Global_1685330)
		if (Global_1685328 > 0)
			func_40();

	return;
}

void func_40() // Position - 0x21C3 (8643)
{
	Global_1685330 = false;
	return;
}

void func_41(int iParam0) // Position - 0x21D0 (8656)
{
	Global_2623445[iParam0 /*99*/] = 0;
	Global_2623445[iParam0 /*99*/].f_1 = 0;
	Global_2623445[iParam0 /*99*/].f_5 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_15), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_31), "", 64);
	Global_2623445[iParam0 /*99*/].f_47 = -1;
	Global_2623445[iParam0 /*99*/].f_48 = MISC::GET_GAME_TIMER();
	Global_2623445[iParam0 /*99*/].f_49 = -1;
	Global_2623445[iParam0 /*99*/].f_50 = -1;
	Global_2623445[iParam0 /*99*/].f_51 = -1;
	Global_2623445[iParam0 /*99*/].f_52 = 0;
	Global_2623445[iParam0 /*99*/].f_53 = 0;
	Global_2623445[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2623445[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2623445[iParam0 /*99*/].f_56 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_57), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_73), "", 64);
	Global_2623445[iParam0 /*99*/].f_89 = 0;
	Global_2623445[iParam0 /*99*/].f_90 = 0;
	Global_2623445[iParam0 /*99*/].f_91 = -1;
	Global_2623445[iParam0 /*99*/].f_92 = -1;
	Global_2623445[iParam0 /*99*/].f_93 = 0;
	Global_2623445[iParam0 /*99*/].f_94 = -1;
	Global_2623445[iParam0 /*99*/].f_95 = 0;
	Global_2623445[iParam0 /*99*/].f_96 = 0;
	Global_2623445[iParam0 /*99*/].f_97 = 0;
	Global_2623445[iParam0 /*99*/].f_98 = 0;
	return;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x2312 (8978)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1685357; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2623445[i /*99*/].f_15)))
			return i;
	}

	return -1;
}

BOOL func_43(Player plParam0) // Position - 0x234B (9035)
{
	return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_140, 22);
}

BOOL func_44(BOOL bParam0) // Position - 0x2361 (9057)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80017, 0);
}

BOOL func_45() // Position - 0x2389 (9097)
{
	if (Global_114370.f_9089.f_330[0 /*6*/])
		return true;

	return false;
}

BOOL func_46() // Position - 0x23A6 (9126)
{
	return IS_BIT_SET(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_140, 2);
}

void func_47(int iParam0) // Position - 0x23BD (9149)
{
	int presenceInviteIndexById;

	presenceInviteIndexById = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam0);

	if (presenceInviteIndexById < 0 || presenceInviteIndexById >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		return;

	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(presenceInviteIndexById))
		return;

	return;
}

BOOL func_48() // Position - 0x23F0 (9200)
{
	return Global_1575041 == 10;
}

BOOL func_49() // Position - 0x23FF (9215)
{
	if (!Global_79768)
		return true;
	else if (func_50())
		return true;

	return false;
}

BOOL func_50() // Position - 0x2422 (9250)
{
	if (!func_63())
		return false;

	if (func_51(false))
		return false;

	return true;
}

BOOL func_51(BOOL bParam0) // Position - 0x2443 (9283)
{
	if (bParam0)
		return func_54();

	return func_52(func_53());
}

BOOL func_52(int iParam0) // Position - 0x245F (9311)
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_53() // Position - 0x2474 (9332)
{
	return Global_1908496[PLAYER::PLAYER_ID() /*313*/].f_273;
}

BOOL func_54() // Position - 0x248A (9354)
{
	return func_61(526, -1) || unk_0xB233964AC562A357() && func_60() != 0 && !func_55(0);
}

BOOL func_55(int iParam0) // Position - 0x24BA (9402)
{
	int num;

	num = func_56(15548, -1);
	return IS_BIT_SET(num, iParam0);
}

int func_56(int iParam0, int iParam1) // Position - 0x24D1 (9425)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17296)
	{
		statHash = func_57(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_57(int iParam0, int iParam1) // Position - 0x2500 (9472)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_58(iParam1));
}

int func_58(int iParam0) // Position - 0x2515 (9493)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_59();
	
		if (num2 > -1)
		{
			Global_2752424 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752424 = 1;
		}
	}

	return num;
}

int func_59() // Position - 0x2549 (9545)
{
	return Global_1574927;
}

int func_60() // Position - 0x2555 (9557)
{
	return unk_0xA0A0D77ECEDD4136();
}

BOOL func_61(int iParam0, int iParam1) // Position - 0x2561 (9569)
{
	Hash statHash;
	int outValue;

	statHash = func_62(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_62(int iParam0, int iParam1) // Position - 0x2585 (9605)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_58(iParam1));
}

BOOL func_63() // Position - 0x259A (9626)
{
	if (Global_1574612)
		return true;

	if (func_65())
		return true;

	if (func_64())
		return true;

	return func_61(120, -1);
}

BOOL func_64() // Position - 0x25CA (9674)
{
	return Global_1575076;
}

BOOL func_65() // Position - 0x25D6 (9686)
{
	return Global_1575078;
}

void func_66(int iParam0, int iParam1) // Position - 0x25E2 (9698)
{
	int num;

	num = iParam1;

	if (num == -1)
		num = func_59();

	Global_1575068[num] = iParam0;
	return;
}

void func_67(int iParam0) // Position - 0x2604 (9732)
{
	func_125();

	if (func_124(1))
	{
		if (!func_114())
		{
			if (!func_102(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					func_101();
			
				func_70(1, false);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_69();
				func_68();
			}
		}
	}

	return;
}

void func_68() // Position - 0x2649 (9801)
{
	Global_1931465.f_7 = 1;
	return;
}

void func_69() // Position - 0x2658 (9816)
{
	Global_1931465.f_6 = 1;
	return;
}

void func_70(int iParam0, BOOL bParam1) // Position - 0x2667 (9831)
{
	if (func_124(iParam0))
	{
		Global_1931465.f_16[iParam0 /*44*/].f_5 = 1;
		func_72(iParam0, false);
		func_71();
	
		if (bParam1)
			Global_1931465 = 1;
	}

	return;
}

void func_71() // Position - 0x269A (9882)
{
	Global_1931465.f_2 = 1;
	return;
}

void func_72(int iParam0, BOOL bParam1) // Position - 0x26A9 (9897)
{
	var unk;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_100();
			_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 81920, false);
			Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_96 = 8;
			func_83();
			func_82();
		}
	
		func_81(iParam0);
		func_80(iParam0);
		func_78();
		func_77();
		func_71();
	}

	unk = { func_76(iParam0) };
	func_75(iParam0);
	func_73(&unk);
	return;
}

void func_73(char* sParam0) // Position - 0x2715 (10005)
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_2684748.f_865), sParam0, 24);

	if (func_74())
		TEXT_LABEL_ASSIGN_STRING(&(Global_1048576.f_44), sParam0, 24);

	return;
}

BOOL func_74() // Position - 0x2739 (10041)
{
	return IS_BIT_SET(Global_2685690.f_1.f_2809, 5);
}

void func_75(int iParam0) // Position - 0x274C (10060)
{
	Global_1931465.f_16[iParam0 /*44*/].f_3 = 1;
	return;
}

struct<6> func_76(int iParam0) // Position - 0x2761 (10081)
{
	return Global_1931465.f_16[iParam0 /*44*/].f_6;
}

void func_77() // Position - 0x2777 (10103)
{
	Global_2684748.f_9 = 100;
	return;
}

void func_78() // Position - 0x2787 (10119)
{
	MISC::SET_BIT(&Global_2684748, 5);
	func_79();
	return;
}

void func_79() // Position - 0x279C (10140)
{
	MISC::SET_BIT(&Global_2684748, 8);
	return;
}

void func_80(int iParam0) // Position - 0x27AE (10158)
{
	Global_1931465.f_8 = iParam0;
	return;
}

void func_81(int iParam0) // Position - 0x27BE (10174)
{
	Global_1931465.f_9 = iParam0;
	return;
}

void func_82() // Position - 0x27CE (10190)
{
	Global_2693808.f_1 = 0;
	return;
}

void func_83() // Position - 0x27DD (10205)
{
	char* str;

	TEXT_LABEL_ASSIGN_STRING(&(Global_2684748.f_865), str, 24);
	return;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x27F0 (10224)
{
	eSetPlayerControlFlags flags;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL toggle;
	BOOL toggle2;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	Ped playerPed;
	eSetPlayerControlFlags flags2;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(false);

	if (func_99())
		if (bParam1)
			return;
		else
			bParam3 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flags = espcfParam2;
		PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		toggle = espcfParam2 & 32768 != 0;
		toggle2 = espcfParam2 & 65536 != 0;
		flag16 = espcfParam2 & 131072 != 0;
		flag17 = espcfParam2 & 262144 != 0;
		flag18 = espcfParam2 & 524288 != 0;
		flag19 = espcfParam2 & 1048576 != 0;
		flag20 = espcfParam2 & 2097152 != 0;
		flag21 = espcfParam2 & 4194304 != 0;
		flag22 = espcfParam2 & 8388608 != 0;
		flag23 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			flag = false;
	
		if (!func_97())
		{
			flag24 = false;
		
			if (bParam1 == true)
				flag24 = true;
		
			if (toggle == false && !flag19)
				flag24 = true;
		
			if (flag10 == true)
				flag24 = true;
		
			if (flag24)
				return;
		}
	
		flag16;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3 == true)
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		
			if (!flag18)
			{
				if (flag17 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				else if (flag14 || !func_94(PLAYER::PLAYER_ID(), 0) && !func_93() && !func_92(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					Global_2658019[plParam0 /*467*/].f_257 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_89(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_88(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
				{
					if (!flag19)
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
				}
				else if (!flag19)
				{
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
				PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed))
					PED::FINALIZE_HEAD_BLEND(playerPed);
			
				PED::SET_PED_CAN_RAGDOLL(playerPed, true);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
				{
					func_87();
					func_86();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2658019[plParam0 /*467*/].f_258 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2697927)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697927 = false;
				}
			
				if (Global_2635523.f_2982)
					Global_2635523.f_2982 = 0;
			}
			else
			{
				if (!func_88(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
				{
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
					{
						if (!flag19)
							ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
					
						if (!toggle)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
					}
				
					if (func_85(*Global_4718592.f_197275))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (Global_1575060)
					flag10 = false;
			
				if (flag10)
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
			
				if (flag3)
					if (!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
		
			flags2 = 0;
		
			if (flag2)
				flags2 = flags2 | SPC_AMBIENT_SCRIPT;
		
			if (flag3)
				flags2 = flags2 | SPC_CLEAR_TASKS;
		
			if (flag4)
				flags2 = flags2 | SPC_REMOVE_FIRES;
		
			if (flag5)
				flags2 = flags2 | SPC_REMOVE_EXPLOSIONS;
		
			if (flag6)
				flags2 = flags2 | SPC_REMOVE_PROJECTILES;
		
			if (flag7)
				flags2 = flags2 | SPC_DEACTIVATE_GADGETS;
		
			if (flag8)
				flags2 = flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
		
			if (flag9)
				flags2 = flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
		
			if (flag10)
				flags2 = flags2 | SPC_ALLOW_PLAYER_DAMAGE;
		
			if (flag11)
				flags2 = flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
		
			if (flag12)
				flags2 = flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
		
			if (flag13)
				flags2 = flags2 | SPC_ALLOW_PAD_SHAKE;
		
			PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
		}
	}

	return;
}

BOOL func_85(int iParam0) // Position - 0x2CA4 (11428)
{
	return iParam0 == 17;
}

void func_86() // Position - 0x2CB1 (11441)
{
	var unk;

	Global_2672967.f_1100 = 0;
	Global_2672967.f_1101 = 0;
	Global_2672967.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672967.f_1107 = -1;
	Global_2672967.f_1108 = 0;
	Global_2635523.f_2993 = { unk };
	return;
}

void func_87() // Position - 0x2CFE (11518)
{
	Global_2635523.f_703 = 0;
	Global_2635523.f_3036 = 0;
	Global_2635523.f_516 = 0;
	Global_2635523.f_607 = 0;
	Global_2658019[PLAYER::PLAYER_ID() /*467*/].f_220 = 0;
	Global_2635523.f_2991 = 0;
	return;
}

BOOL func_88(Ped pedParam0) // Position - 0x2D3C (11580)
{
	int scriptTaskStatus;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
	{
		return true;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 0)
			return true;
	}

	return false;
}

void func_89(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x2D6D (11629)
{
	int num;
	eViewModeContext i;

	ENTITY::IS_ENTITY_DEAD(pedParam1, false);

	if (bParam0 == true)
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
			if (PED::IS_PED_A_PLAYER(pedParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == true)
			{
				func_91();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = ON_FOOT; i < 8; i = i + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_94(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}

	return;
}

void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x2E3D (11837)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_91() // Position - 0x2E59 (11865)
{
	eViewModeContext i;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = ON_FOOT; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_92(Player plParam0) // Position - 0x2EB1 (11953)
{
	if (func_94(plParam0, 0))
		return true;

	if (func_93())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658019[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_93() // Position - 0x2EF0 (12016)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_94(Player plParam0, int iParam1) // Position - 0x2EFE (12030)
{
	BOOL flag;

	if (!func_96(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_95(-1, false) == 8;
	else
		flag = Global_1845274[plParam0 /*877*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_95(int iParam0, BOOL bParam1) // Position - 0x2F57 (12119)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_59();

	if (Global_1575068[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574921[num2];
		bParam1;
	}

	return num;
}

BOOL func_96(Player plParam0) // Position - 0x2F98 (12184)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_97() // Position - 0x2FBA (12218)
{
	if (func_98() == 0)
		return true;

	return false;
}

int func_98() // Position - 0x2FCF (12239)
{
	return Global_1574634.f_18;
}

BOOL func_99() // Position - 0x2FDD (12253)
{
	if (IS_BIT_SET(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_876, 2) && !(Global_2685690.f_2847.f_218 == -1))
		return true;

	return false;
}

void func_100() // Position - 0x300E (12302)
{
	MISC::SET_BIT(&Global_2684748, 7);
	return;
}

void func_101() // Position - 0x301F (12319)
{
	MISC::SET_BIT(&(Global_2684748.f_2), 15);
	return;
}

BOOL func_102(int iParam0) // Position - 0x3033 (12339)
{
	if (iParam0 || func_113())
	{
		if (!func_104(true))
			return true;
	
		if (!func_103())
			return true;
	
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
			return true;
	}

	return false;
}

BOOL func_103() // Position - 0x306F (12399)
{
	return Global_1931465.f_4;
}

BOOL func_104(BOOL bParam0) // Position - 0x307D (12413)
{
	if (!func_110())
		return false;

	if (func_107(func_109(-1), 0) >= 1 || func_61(123, -1) && func_61(133, -1))
	{
		func_106();
		return true;
	}
	else if (bParam0)
	{
		func_105();
	}

	return false;
}

void func_105() // Position - 0x30CE (12494)
{
	Global_1931465.f_5 = 1;
	return;
}

void func_106() // Position - 0x30DD (12509)
{
	Global_1931465.f_4 = 1;
	return;
}

int func_107(int iParam0, int iParam1) // Position - 0x30EC (12524)
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (func_108(num) == iParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_108(num) < iParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((BUILTIN::TO_FLOAT(value) - BUILTIN::TO_FLOAT(value2)) / 2f) + BUILTIN::TO_FLOAT(value2);
		num = BUILTIN::ROUND(value3);
	}

	return 8000;
}

int func_108(int iParam0) // Position - 0x31A7 (12711)
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				return 0;
		
			case 2:
				return 800;
		
			case 3:
				return 2100;
		
			case 4:
				return 3800;
		
			case 5:
				return 6100;
		
			case 6:
				return 9500;
		
			case 7:
				return 12500;
		
			case 8:
				return 16000;
		
			case 9:
				return 19800;
		
			case 10:
				return 24000;
		
			case 11:
				return 28500;
		
			case 12:
				return 33400;
		
			case 13:
				return 38700;
		
			case 14:
				return 44200;
		
			case 15:
				return 50200;
		
			case 16:
				return 56400;
		
			case 17:
				return 63000;
		
			case 18:
				return 69900;
		
			case 19:
				return 77100;
		
			case 20:
				return 84700;
		
			case 21:
				return 92500;
		
			case 22:
				return 100700;
		
			case 23:
				return 109200;
		
			case 24:
				return 118000;
		
			case 25:
				return 127100;
		
			case 26:
				return 136500;
		
			case 27:
				return 146200;
		
			case 28:
				return 156200;
		
			case 29:
				return 166500;
		
			case 30:
				return 177100;
		
			case 31:
				return 188000;
		
			case 32:
				return 199200;
		
			case 33:
				return 210700;
		
			case 34:
				return 222400;
		
			case 35:
				return 234500;
		
			case 36:
				return 246800;
		
			case 37:
				return 259400;
		
			case 38:
				return 272300;
		
			case 39:
				return 285500;
		
			case 40:
				return 299000;
		
			case 41:
				return 312700;
		
			case 42:
				return 326800;
		
			case 43:
				return 341000;
		
			case 44:
				return 355600;
		
			case 45:
				return 370500;
		
			case 46:
				return 385600;
		
			case 47:
				return 401000;
		
			case 48:
				return 416600;
		
			case 49:
				return 432600;
		
			case 50:
				return 448800;
		
			case 51:
				return 465200;
		
			case 52:
				return 482000;
		
			case 53:
				return 499000;
		
			case 54:
				return 516300;
		
			case 55:
				return 533800;
		
			case 56:
				return 551600;
		
			case 57:
				return 569600;
		
			case 58:
				return 588000;
		
			case 59:
				return 606500;
		
			case 60:
				return 625400;
		
			case 61:
				return 644500;
		
			case 62:
				return joaat("pyro_sub_bass_synth");
		
			case 63:
				return 683400;
		
			case 64:
				return 703300;
		
			case 65:
				return 723400;
		
			case 66:
				return 743800;
		
			case 67:
				return 764500;
		
			case 68:
				return 785400;
		
			case 69:
				return 806500;
		
			case 70:
				return 827900;
		
			case 71:
				return 849600;
		
			case 72:
				return 871500;
		
			case 73:
				return 893600;
		
			case 74:
				return 916000;
		
			case 75:
				return 938700;
		
			case 76:
				return 961600;
		
			case 77:
				return 984700;
		
			case 78:
				return 1008100;
		
			case 79:
				return 1031800;
		
			case 80:
				return 1055700;
		
			case 81:
				return 1079800;
		
			case 82:
				return 1104200;
		
			case 83:
				return 1128800;
		
			case 84:
				return 1153700;
		
			case 85:
				return 1178800;
		
			case 86:
				return 1204200;
		
			case 87:
				return 1229800;
		
			case 88:
				return 1255600;
		
			case 89:
				return 1281700;
		
			case 90:
				return 1308100;
		
			case 91:
				return 1334600;
		
			case 92:
				return 1361400;
		
			case 93:
				return 1388500;
		
			case 94:
				return 1415800;
		
			case 95:
				return 1443300;
		
			case 96:
				return 1471100;
		
			case 97:
				return 1499100;
		
			case 98:
				return 1527300;
		
			case 99:
				return 1555800;
		}
	}
	else
	{
		num = iParam0 - 99;
		num2 = (num * (num + 1)) / 2;
		return 1555800 + (num * 28500) + (num2 * 50);
	}

	return 1555800;
}

int func_109(int iParam0) // Position - 0x36EB (14059)
{
	return func_56(640, iParam0);
}

BOOL func_110() // Position - 0x36FC (14076)
{
	if (func_112() && func_111(0))
		return true;

	return false;
}

var func_111(int iParam0) // Position - 0x371A (14106)
{
	return Global_1574538[iParam0];
}

var func_112() // Position - 0x372A (14122)
{
	return func_111(func_59() + 1);
}

int func_113() // Position - 0x373C (14140)
{
	return Global_1931465.f_2;
}

BOOL func_114() // Position - 0x374A (14154)
{
	if (func_123() || !func_121(-1) || !func_119() || !func_116() || func_115())
		return true;

	return false;
}

BOOL func_115() // Position - 0x378A (14218)
{
	return Global_2696569;
}

BOOL func_116() // Position - 0x3796 (14230)
{
	int num;

	if (func_117(&num) == false)
		if (num == 1)
			return false;

	return true;
}

BOOL func_117(int* piParam0) // Position - 0x37B3 (14259)
{
	if (func_118())
	{
		*piParam0 = 11;
		return true;
	}

	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(piParam0);
}

BOOL func_118() // Position - 0x37D1 (14289)
{
	return Global_33576;
}

BOOL func_119() // Position - 0x37DC (14300)
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (func_120(i) == 1)
		{
			i = 2;
			return true;
		}
	}

	return false;
}

int func_120(int iParam0) // Position - 0x3808 (14344)
{
	if (func_61(76, iParam0) == true)
		return 1;

	return 0;
}

BOOL func_121(int iParam0) // Position - 0x3824 (14372)
{
	int profileSetting;
	int profileSetting2;

	profileSetting = func_122(iParam0);
	profileSetting2 = MISC::GET_PROFILE_SETTING(profileSetting);

	if (IS_BIT_SET(profileSetting2, 1))
		return true;

	return false;
}

int func_122(int iParam0) // Position - 0x3848 (14408)
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_59();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

BOOL func_123() // Position - 0x38AB (14507)
{
	return Global_2684748.f_745;
}

BOOL func_124(int iParam0) // Position - 0x38BA (14522)
{
	return Global_1931465.f_16[iParam0 /*44*/].f_4;
}

void func_125() // Position - 0x38CE (14542)
{
	int i;
	int eventIdForType;

	func_131();

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE() && !func_128())
	{
		for (i = 0; i < 5; i = i + 1)
		{
			eventIdForType = SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(func_127(i));
		
			if (eventIdForType > 0)
			{
				Global_1931465.f_16[i /*44*/] = eventIdForType;
				func_126(i, eventIdForType);
			}
		}
	}
	else
	{
		for (i = 0; i < 5; i = i + 1)
		{
			Global_1931465.f_16[i /*44*/].f_4 = 0;
		}
	}

	return;
}

void func_126(int iParam0, int iParam1) // Position - 0x3945 (14661)
{
	BOOL flag;
	var unk;
	var unk17;

	flag = true;

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(iParam1, "contentId", &unk))
		TEXT_LABEL_COPY(&(Global_1931465.f_16[iParam0 /*44*/].f_6), { unk }, 6);
	else
		flag = false;

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(iParam1, "playlist", &unk))
		Global_1931465.f_16[iParam0 /*44*/].f_12 = { unk };
	else
		flag = false;

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(iParam1, &unk))
		Global_1931465.f_16[iParam0 /*44*/].f_28 = { unk };
	else
		flag = false;

	if (iParam0 == 1)
	{
		if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(iParam1, "coronaCountdown", &unk17))
			Global_1931465.f_16[iParam0 /*44*/].f_1 = unk17;
		else
			Global_1931465.f_16[iParam0 /*44*/].f_1 = 120000;
	
		Global_1931465.f_16[iParam0 /*44*/].f_2 = 0;
	
		if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(iParam1, "eventSubType", &unk17))
			Global_1931465.f_16[iParam0 /*44*/].f_2 = unk17;
	}

	if (flag)
	{
		if (iParam0 != 1)
			Global_1931465.f_1 = 1;
	
		Global_1931465.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1931465.f_16[iParam0 /*44*/].f_4 = 0;
	}

	return;
}

char* func_127(int iParam0) // Position - 0x3A53 (14931)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
	
		case 1:
			return "Tournament";
	
		case 2:
			return "LiveStreaming";
	
		case 3:
			return "Sweepstakes";
	
		case 4:
			return "FeaturedPlaylist";
	
		default:
		
	}

	return "";
}

BOOL func_128() // Position - 0x3AA0 (15008)
{
	if (!func_129())
		return true;

	return false;
}

BOOL func_129() // Position - 0x3AB5 (15029)
{
	if (func_130())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_130() // Position - 0x3AD5 (15061)
{
	return Global_2697069;
}

void func_131() // Position - 0x3AE1 (15073)
{
	var unk;

	unk.f_8 = -1;
	unk.f_9 = -1;
	unk.f_16 = 6;
	Global_1931465 = { unk };
	return;
}

void func_132(int iParam0) // Position - 0x3B0C (15116)
{
	struct<21> eventData;

	if (Global_79768)
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
	else
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21228, true);

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 21))
		func_134();

	Global_2747432.f_1 = 0;
	Global_2747432.f_33 = -1;
	Global_2747432.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2747432.f_4), "", 64);
	func_133(&(Global_2747432.f_20));
	return;
}

void func_133(Any* panParam0) // Position - 0x3B74 (15220)
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

void func_134() // Position - 0x3BBC (15292)
{
	Global_2747432.f_2 = 1;
	Global_2747432.f_38 = 1;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				BUILTIN::WAIT(0);
			}
		
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2747432 = 0;
			Global_2747432.f_2 = 0;
		}
		else if (IS_GAMER_HANDLE_VALID(Global_2747432.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2747432.f_20)))
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2747432.f_20)))
					func_141();
		}
		else
		{
			func_141();
		}
	}
	else
	{
		func_141();
	}

	if (Global_2747432.f_37)
		func_135(0);

	Global_2747432.f_37 = 0;
	Global_2747432.f_3 = 0;
	return;
}

void func_135(int iParam0) // Position - 0x3C5C (15452)
{
	if (func_140())
		return;

	if (Global_21461)
		if (func_139())
			func_137(true, true);
		else
			func_137(false, false);

	if (Global_21239.f_1 == 10 || Global_21239.f_1 == 9)
		MISC::SET_BIT(&Global_9076, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22602 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9075, 30);
	else
		MISC::CLEAR_BIT(&Global_9075, 30);

	if (!func_136())
		Global_21239.f_1 = 3;

	return;
}

BOOL func_136() // Position - 0x3CE6 (15590)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 0)
		return true;

	return false;
}

void func_137(BOOL bParam0, BOOL bParam1) // Position - 0x3D0D (15629)
{
	if (bParam0)
	{
		if (func_138(0))
		{
			Global_21461 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21176);
		
			Global_21167 = { Global_21185[Global_21184 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21167);
		}
	}
	else if (Global_21461 == true)
	{
		Global_21461 = false;
		Global_21167 = { Global_21192[Global_21184 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21176);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21167);
	}

	return;
}

BOOL func_138(int iParam0) // Position - 0x3D81 (15745)
{
	if (iParam0 == 1)
		if (Global_21239.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21239.f_1 > 3)
		return true;

	return false;
}

BOOL func_139() // Position - 0x3DD8 (15832)
{
	return IS_BIT_SET(Global_1960332, 5);
}

BOOL func_140() // Position - 0x3DE6 (15846)
{
	return IS_BIT_SET(Global_1960332, 19);
}

void func_141() // Position - 0x3DF5 (15861)
{
	Global_2747432.f_1 = 0;
	Global_2747432 = 0;
	Global_2747432.f_2 = 0;
	Global_2747432.f_33 = -1;
	Global_2747432.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2747432.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2747432.f_39[0 /*16*/], "", 64);
	Global_2747432.f_38 = 0;
	Global_2747432.f_56 = 0;
	Global_2747432.f_57 = 0;
	Global_2747432.f_58 = -2;
	Global_2747432.f_3 = 0;
	func_133(&(Global_2747432.f_20));
	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x3E64 (15972)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_143(int iParam0) // Position - 0x3E74 (15988)
{
	struct<15> eventData;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 15))
	{
		Global_2747432.f_33 = eventData.f_1;
		Global_2747432.f_34 = eventData;
	}

	return;
}

void func_144(int iParam0) // Position - 0x3E9F (16031)
{
	struct<21> eventData;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 21))
	{
		if (Global_2747432.f_3 == 0)
		{
			if (!func_145(&(eventData.f_8)))
			{
				NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
			}
			else
			{
				Global_2747432.f_3 = 1;
				TEXT_LABEL_COPY(&(Global_2747432.f_4), { eventData }, 16);
				Global_2747432.f_20 = { eventData.f_8 };
				TEXT_LABEL_ASSIGN_STRING(&Global_2747432.f_39[0 /*16*/], "", 64);
				Global_2747432.f_58 = -2;
				Global_2747432.f_56 = 0;
				Global_2747432.f_57 = 0;
			}
		}
		else if (!func_145(&(eventData.f_8)))
		{
			NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
		}
		else
		{
			Global_2747432.f_3 = 1;
			TEXT_LABEL_COPY(&(Global_2747432.f_4), { eventData }, 16);
			Global_2747432.f_20 = { eventData.f_8 };
			TEXT_LABEL_ASSIGN_STRING(&Global_2747432.f_39[0 /*16*/], "", 64);
			Global_2747432.f_58 = -2;
			Global_2747432.f_56 = 0;
			Global_2747432.f_57 = 0;
		}
	}

	return;
}

BOOL func_145(Any* panParam0) // Position - 0x3F83 (16259)
{
	if (Global_79768)
	{
		if (func_50() == false)
			return false;
	
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
					return false;
	}

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	Global_2747432.f_1;

	if (Global_21469 == 1)
		return false;

	if (Global_1836766)
		return false;

	if (Global_2747432.f_36)
		return false;

	if (func_136())
		return false;

	if (Global_44392 != 6 && Global_44392 != 8 && Global_44392 != 12 && Global_44392 != 15)
		return false;

	if (func_148() && !func_147(12))
		return false;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		return false;

	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		return false;

	if (!func_146(PLAYER::PLAYER_ID()))
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (Global_80029)
		return false;

	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			return false;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return false;

	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(panParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(panParam0))
		return false;

	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(panParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(panParam0))
		return false;

	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
		if (func_16())
			if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
				return false;
		else if (func_10())
			return false;

	return true;
}

BOOL func_146(Player plParam0) // Position - 0x4107 (16647)
{
	Player player;
	var gamerHandle;

	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	player = -1;

	if (plParam0 != PLAYER::PLAYER_ID())
	{
		player = plParam0;
	
		if (player == -1)
			return false;
	}

	if (MISC::IS_PS3_VERSION() || func_10())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, player))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;

	if (MISC::IS_XBOX360_VERSION() || func_16())
	{
		if (plParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
				return true;
		}
		else
		{
			gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };
		
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&gamerHandle))
				return true;
		}
	}

	if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, player))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;

	return false;
}

BOOL func_147(int iParam0) // Position - 0x41E0 (16864)
{
	return Global_44392 == iParam0;
}

BOOL func_148() // Position - 0x41EE (16878)
{
	if (Global_44392 == 15)
		return false;

	return true;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4203 (16899)
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672967.f_3)
					return Global_2672967.f_2;
				else if (Global_2658019[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_150() // Position - 0x4263 (16995)
{
	func_141();
	return;
}

void func_151() // Position - 0x426F (17007)
{
	Global_2747432.f_1 = 1;
	Global_2747432.f_33 = -1;
	Global_2747432.f_34 = -1;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21220) == true)
	{
		if (Global_21227)
		{
			func_152(Global_21220, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
		
			if (Global_21182)
				func_152(Global_21220, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_152(Global_21220, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}

	return;
}

void func_152(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x42E8 (17128)
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
		func_153(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_153(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_153(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_153(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_153(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_153(const char* sParam0) // Position - 0x439B (17307)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_154() // Position - 0x43AD (17325)
{
	int i;

	if (bLocal_63)
	{
		Global_56774 = 0;
		Global_56774.f_12 = 0;
		Global_56774.f_24 = 0;
		Global_56774.f_36 = 0;
	
		for (i = 0; i < 10; i = i + 1)
		{
			Global_56774.f_1[i] = 0;
			Global_56774.f_13[i] = 0;
			Global_56774.f_25[i] = 0;
			Global_56774.f_37[i] = 0;
		}
	
		bLocal_63 = false;
	}

	return;
}


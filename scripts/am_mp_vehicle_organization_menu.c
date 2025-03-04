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
	int iLocal_18 = 0;
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
	float fLocal_61 = 0f;
	int iLocal_62 = -1;
	var uLocal_63 = -1;
	var uLocal_64 = -1;
	var uLocal_65 = -1;
	var uLocal_66 = -1;
	var uLocal_67 = -1;
	var uLocal_68 = -1;
	var uLocal_69 = -1;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = -1;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 40;
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
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	BOOL bLocal_126 = 0;
	BOOL bLocal_127 = 0;
	BOOL bLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	BOOL bLocal_131 = 0;
	BOOL bLocal_132 = 0;
	BOOL bLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
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
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	iLocal_136 = 200;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	func_299();

	while (true)
	{
		func_298();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_287();
	
		if (func_285(PLAYER::PLAYER_ID()))
			func_287();
	
		if (Global_1942970)
			func_287();
	
		switch (iLocal_125)
		{
			case 0:
				iLocal_62.f_8 = 1;
				iLocal_75 = 0;
				bLocal_133 = true;
				iLocal_125 = 1;
				_STOPWATCH_INITIALIZE(&uLocal_134, true, false);
				HUD::THEFEED_HIDE_THIS_FRAME();
				break;
		
			case 1:
				if (func_271())
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
					func_1();
				}
				else
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
					func_287();
				}
				break;
		
			case 2:
				HUD::THEFEED_HIDE_THIS_FRAME();
				break;
		}
	}

	return;
}

void func_1() // Position - 0x121 (289)
{
	if (!Global_1942969)
		Global_1942969 = true;

	func_270();

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);

	func_269();

	if (func_266(0, 1))
	{
		func_265();
		func_264();
		func_263();
		func_230();
		func_10();
	}

	func_9();
	func_2(0);
	return;
}

void func_2(int iParam0) // Position - 0x17C (380)
{
	if (func_8())
		return;

	if (!(Global_21083.f_1 == 1))
	{
		if (func_7(0))
			func_3(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

void func_3(int iParam0) // Position - 0x1AF (431)
{
	if (func_8())
		return;

	if (Global_21301)
		if (func_6())
			func_5(true, true);
		else
			func_5(false, false);

	if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22442 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_4())
		Global_21083.f_1 = 3;

	return;
}

BOOL func_4() // Position - 0x239 (569)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

void func_5(BOOL bParam0, BOOL bParam1) // Position - 0x260 (608)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_21301 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21020);
		
			Global_21011 = { Global_21029[Global_21028 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21011);
		}
	}
	else if (Global_21301 == true)
	{
		Global_21301 = false;
		Global_21011 = { Global_21036[Global_21028 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21020);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21011);
	}

	return;
}

BOOL func_6() // Position - 0x2D4 (724)
{
	return IS_BIT_SET(Global_1958238, 5);
}

BOOL func_7(int iParam0) // Position - 0x2E2 (738)
{
	if (iParam0 == 1)
		if (Global_21083.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21083.f_1 > 3)
		return true;

	return false;
}

BOOL func_8() // Position - 0x339 (825)
{
	return IS_BIT_SET(Global_1958238, 19);
}

void func_9() // Position - 0x348 (840)
{
	bLocal_126 = false;
	bLocal_127 = false;
	bLocal_128 = false;
	return;
}

void func_10() // Position - 0x359 (857)
{
	int num;

	if (iLocal_62.f_8 == -1)
		return;

	if (func_228(0, -1, false) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		if (!IS_BIT_SET(iLocal_123, 2) || PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL) || Global_1942971)
		{
			num = -1;
		
			if (!bLocal_133)
				num = Global_23987.f_6341;
		
			bLocal_133 = false;
		
			if (Global_2647040.f_1593 == 0)
				func_227(7);
			else
				func_227(6);
		
			func_225(false, false);
			func_224(1, 1, 0, 0, 0);
			func_223(1, 2, 1, 1, 1);
			func_222("VOM_MENU_T");
			func_83();
			func_82(iLocal_75, true, 1);
			func_79();
			func_63();
		
			if (num != -1)
				func_62(num);
		
			Global_1942971 = false;
		
			if (!IS_BIT_SET(iLocal_123, 2))
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				MISC::SET_BIT(&iLocal_123, 2);
			}
		
			_STOPWATCH_DESTROY(&(iLocal_75.f_46));
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&(iLocal_75.f_46), 5000, true))
		{
			Global_1942971 = true;
		}
	
		func_11(true, -1, true, false, true, -1082130432, false, false, -1);
	}

	return;
}

void func_11(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x450 (1104)
{
	int num;
	int r;
	int g;
	int b;
	int a;
	int i;
	int numberOfLinesForString;
	int j;
	int k;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int l;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;
	int num17;
	int num18;
	int num19;
	int num20;
	int num21;
	int num22;
	int num23;
	BOOL flag;
	BOOL flag2;
	float num24;
	float num25;
	float num26;
	float num27;
	float textureResolution;
	BOOL flag3;
	float x;
	float num28;
	float num29;
	float num30;
	float num31;
	int num32;
	int num33;
	int num34;
	int num35;
	float num36;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float num37;
	float num38;
	float num39;
	float num40;
	var unk3;
	var unk4;
	float num41;
	var unk5;
	var unk21;
	float num42;
	float size;
	float size2;
	int num43;
	float num44;
	float num45;
	int m;
	int r2;
	int g2;
	int b2;
	int a2;
	int num46;
	var text;
	float value;
	float value2;
	float num47;
	float num48;
	float num49;

	if (!func_59(&num, false, iParam1))
		return;

	num == -1;

	if (!func_56(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num38 = 0f;

	if (Global_23987)
		if (func_54(29, true, true, &num26, &num27, bParam7))
			num39 = num27 / num26;
		else
			Global_23987 = false;

	if (iParam5 == -1f)
		iParam5 = Global_23986;

	num38 = iParam5 * num39;

	if (MISC::GET_HASH_KEY(&(Global_23987.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num40 = Global_23985;
	else
		num40 = Global_23985 + num38 + 0.034722f + 0f;

	num41 = 1f;
	func_52(bParam7, &unk3, &unk4, &num41);

	if (bParam3)
	{
		if (Global_23987.f_5821 <= 1)
		{
			func_48(Global_23987.f_5821 + 1, "DFLT_MNU_OPT" /*Exit*/, 0, true, 0, false, 0);
			Global_23987.f_6617 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_23987.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23987.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num36 = Global_23985;
			}
			else
			{
				if (Global_23987)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk5, func_47(29), 64);
					TEXT_LABEL_ASSIGN_STRING(&unk21, func_44(29, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_23987.f_7680[29 /*16*/]) == joaat("CREW_LOGO"))
					{
						func_43(Global_23984, Global_23985, iParam5, num38, 0, 0, 0, 255);
						func_42(&unk5, &unk21, Global_23984 + (iParam5 * 0.5f), Global_23985 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						func_42(&unk5, &unk21, Global_23984 + (iParam5 * 0.5f), Global_23985 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_23987.f_9086)
				{
					r = Global_23987.f_9082;
					g = Global_23987.f_9083;
					b = Global_23987.f_9084;
					a = Global_23987.f_9085;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_43(Global_23984, Global_23985 + num38, iParam5, 0.034722f, r, g, b, a);
				num36 = Global_23985 + num38 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_23987.f_1)) != 0)
				{
					func_41();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_23987.f_74; l = l + 1)
					{
						if (Global_23987.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_23987.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_14[num8], Global_23987.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_23987.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23987.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23987.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23987.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23987.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23987.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					func_40(Global_23984 + 0.00390625f, Global_23985 + num38 + 0.00416664f, 0);
				}
			
				if (Global_23987.f_6338)
				{
					func_41();
					func_38((Global_23984 + iParam5) - 0.00390625f - func_39("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6339, Global_23987.f_6340), Global_23985 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6339, Global_23987.f_6340);
				}
				else if (Global_23987.f_6334 > Global_23987.f_5828)
				{
					if (Global_23987.f_6337 != 0)
					{
						func_41();
						func_38((Global_23984 + iParam5) - 0.00390625f - func_39("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6337, Global_23987.f_6336), Global_23985 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6337, Global_23987.f_6336);
					}
				}
			}
		
			numberOfLinesForString = Global_23987.f_6341;
			num2 = 0;
			num42 = num36;
		
			if (Global_23987.f_9096)
			{
				r = Global_23987.f_9092;
				g = Global_23987.f_9093;
				b = Global_23987.f_9094;
				a = Global_23987.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_23987.f_5828 && numberOfLinesForString <= Global_23987.f_5821)
			{
				if (numberOfLinesForString >= 0)
				{
					if (Global_23987.f_6088[numberOfLinesForString])
					{
						if (Global_23987.f_5959[numberOfLinesForString] && numberOfLinesForString != Global_23987.f_6341)
							num36 = num36 + 0.00277776f;
					
						num37 = 0.034722f;
					
						if (Global_23987.f_6348[numberOfLinesForString] != 0f)
							num37 = Global_23987.f_6348[numberOfLinesForString];
					
						num36 = num36 + num37;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			func_42("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num42 + ((num36 - num42) * 0.5f)) - 0.00138888f, iParam5, num36 - num42, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_23987.f_6334 > Global_23987.f_5828)
			{
				if (Global_23987.f_9101)
				{
					r = Global_23987.f_9097;
					g = Global_23987.f_9098;
					b = Global_23987.f_9099;
					a = Global_23987.f_9100;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_43(Global_23984, num36 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num41);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num41);
			
				if (Global_23987.f_9114)
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
				}
			
				func_42("CommonMenu", "shop_arrows_upANDdown", Global_23984 + (iParam5 * 0.5f), num36 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num41, (textureResolution.f_1 / 720f) * num41, 0f, r, g, b, a, false, 0);
				num36 = num36 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_23987.f_5241)) != 0 && Global_23987.f_5323 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_23984 + 0.0046875f;
			
				if (Global_23987.f_5325 != 0)
				{
					func_54(Global_23987.f_5325, true, true, &num26, &num27, bParam7);
					x = (Global_23984 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_37(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23987.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23987.f_5319; l = l + 1)
				{
					if (Global_23987.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23987.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_5262[num8], Global_23987.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23987.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_43(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23987.f_9106)
				{
					r = Global_23987.f_9102;
					g = Global_23987.f_9103;
					b = Global_23987.f_9104;
					a = Global_23987.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_42("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_37(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23987.f_5319; l = l + 1)
				{
					if (Global_23987.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23987.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_5262[num8], Global_23987.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23987.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				func_40(x, num36 + 0.00277776f, 0);
			
				if (Global_23987.f_5325 != 0)
				{
					func_54(Global_23987.f_5325, true, true, &num26, &num27, bParam7);
					func_36(Global_23987.f_5325, true, &num32, &num33, &num34, &num35);
					func_42(func_47(Global_23987.f_5325), func_44(Global_23987.f_5325, true), Global_23984 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23987.f_5247)))
				{
					num36 = num36 + (0.00138888f * 6f);
					func_37(x);
					size = 0.35f;
				
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23987.f_5247))) > 600)
						size = 0.35f * 0.625f;
				
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23987.f_5247));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_43(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_23987.f_9106)
					{
						r = Global_23987.f_9102;
						g = Global_23987.f_9103;
						b = Global_23987.f_9104;
						a = Global_23987.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					func_42("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
					func_37(x);
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_5247));
					func_40(x, num36 + 0.00277776f, 0);
					num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_23987.f_5323 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_23987.f_5324 > Global_23987.f_5323)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), "", 24);
						Global_23987.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23987.f_5247)))
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_23984 + 0.0046875f;
				size2 = 0.35f;
			
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23987.f_5247))) > 600)
					size2 = 0.35f * 0.625f;
			
				func_37(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23987.f_5247));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23987.f_5319; l = l + 1)
				{
					if (Global_23987.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23987.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_5262[num8], Global_23987.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23987.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_43(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23987.f_9106)
				{
					r = Global_23987.f_9102;
					g = Global_23987.f_9103;
					b = Global_23987.f_9104;
					a = Global_23987.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_42("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
				func_37(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_5247));
				func_40(x, num36 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_21)) != 0 && Global_4542374.f_65 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_23984 + 0.0046875f;
			
				if (Global_4542374.f_67 != 0)
				{
					func_54(Global_4542374.f_67, true, true, &num26, &num27, bParam7);
					x = (Global_23984 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_37(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4542374.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542374.f_61; l = l + 1)
				{
					if (Global_4542374.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542374.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[num8], Global_4542374.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542374.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_43(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23987.f_9106)
				{
					r = Global_23987.f_9102;
					g = Global_23987.f_9103;
					b = Global_23987.f_9104;
					a = Global_23987.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_42("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_37(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4542374.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542374.f_61; l = l + 1)
				{
					if (Global_4542374.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542374.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[num8], Global_4542374.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542374.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				func_40(x, num36 + 0.00277776f, 0);
			
				if (Global_4542374.f_67 != 0)
				{
					func_54(Global_4542374.f_67, true, true, &num26, &num27, bParam7);
					func_36(Global_4542374.f_67, true, &num32, &num33, &num34, &num35);
					func_42(func_47(Global_4542374.f_67), func_44(Global_4542374.f_67, true), Global_23984 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4542374.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4542374.f_66 > Global_4542374.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
						Global_4542374.f_65 = -1;
					}
				}
			}
		
			func_27(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_23987.f_6331)
		{
			num11 = 0;
			num15 = 0;
			num12 = 0;
			num13 = 0;
			num14 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;
			num5 = 0;
			num6 = 0;
			num43 = Global_23987.f_5821;
		
			if (Global_23987.f_6332)
				num43 = Global_23987.f_6335 - 1;
		
			num44 = 0f;
			num45 = 0f;
		
			for (j = 0; j <= num43; j = j + 1)
			{
				num37 = 0.034722f;
			
				if (Global_23987.f_6348[numberOfLinesForString] != 0f)
					num37 = Global_23987.f_6348[numberOfLinesForString];
			
				if (Global_23987.f_6332)
					numberOfLinesForString = Global_23987.f_8737[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_23987.f_6341 && num2 < Global_23987.f_5828)
				{
					flag2 = true;
				
					if (Global_23987.f_6342 == numberOfLinesForString)
						num45 = num44;
				
					if (Global_23987.f_5959[numberOfLinesForString])
						num5 = num5 + 1;
				
					num25 = num40 + num44 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_23987.f_6482[numberOfLinesForString] = num25;
				num24 = Global_23984 + 0.0046875f;
				flag3 = false;
				flag = Global_23987.f_6342 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_23987.f_9108)
						HUD::GET_HUD_COLOUR(Global_23987.f_9107, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					func_42("CommonMenu", "Gradient_Nav", Global_23984 + (iParam5 * 0.5f), num40 + num45 + (0.00277776f * (float)num5) + (num37 * 0.5f), iParam5, num37, 0f, r2, g2, b2, a2, false, 0);
					Global_23987.f_6480 = num25;
				}
			
				for (k = 0; k < Global_23987.f_5829; k = k + 1)
				{
					if (IS_BIT_SET(Global_23987.f_5692[numberOfLinesForString], k) || Global_23987.f_5659[k] == 5)
					{
						if (Global_23987.f_6332)
						{
							num11 = Global_23987.f_8753[(num2 * Global_23987.f_5829) + k];
							num12 = Global_23987.f_8794[(num2 * Global_23987.f_5829) + k];
							num13 = Global_23987.f_8835[(num2 * Global_23987.f_5829) + k];
							num14 = Global_23987.f_8876[(num2 * Global_23987.f_5829) + k];
							num15 = Global_23987.f_8917[(num2 * Global_23987.f_5829) + k];
						}
						else
						{
							Global_23987.f_8753[(num2 * Global_23987.f_5829) + k] = num11;
							Global_23987.f_8794[(num2 * Global_23987.f_5829) + k] = num12;
							Global_23987.f_8835[(num2 * Global_23987.f_5829) + k] = num13;
							Global_23987.f_8876[(num2 * Global_23987.f_5829) + k] = num14;
							Global_23987.f_8917[(num2 * Global_23987.f_5829) + k] = num15;
						}
					
						num46 = 0;
						flag7 = false;
					
						if (Global_23987.f_6614[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23987.f_6611[0])
							{
								flag7 = true;
								num46 = 0;
							}
						}
					
						if (Global_23987.f_6614[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23987.f_6611[1])
							{
								flag7 = true;
								num46 = 1;
							}
						}
					
						if (Global_23987.f_5665[k] != -1f)
							num24 = Global_23984 + 0.0046875f + Global_23987.f_5665[k];
					
						if (k < 4 && Global_23987.f_5665[k + 1] != -1f && num24 < Global_23987.f_5665[k + 1])
							num31 = Global_23987.f_5665[k + 1] - num24;
						else
							num31 = (Global_23984 + Global_23986) - 0.0046875f - num24;
					
						if (Global_23987.f_5678[k] && Global_23987.f_6477 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_23987.f_5659[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_23987.f_6332)
									{
										num28 = 0f;
										num29 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_23987.f_2387[num16 /*5*/][l] == 5 || Global_23987.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_23987.f_2130[num16])
												flag5 = true;
										
											func_24(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, num46, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23987.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23987.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_4469[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_4726[num13 + num19], Global_23987.f_4855[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
											num28 = func_21(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_54(Global_23987.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													num29 = num29 + num26;
												
													if (l > 0)
														num29 = num29 - (0.00078125f * 4f);
												
													if (Global_23987.f_4984[num14 + l] == 2 || Global_23987.f_4984[num14 + l] == 54 || Global_23987.f_4984[num14 + l] == 64)
														num29 = num29 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_23987.f_5686[k] == 2)
											x = x + (num31 - (num28 + num29)) + (0.00078125f * 1f);
										else if (Global_23987.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - ((num28 + num29) * 0.5f));
									
										Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
										Global_23987.f_8999[(num2 * Global_23987.f_5829) + k] = num28;
										Global_23987.f_9040[(num2 * Global_23987.f_5829) + k] = num29;
									
										if (Global_23987.f_5686[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_23987.f_5686[m] == 2)
													Global_23987.f_8958[(num2 * Global_23987.f_5829) + m] = Global_23987.f_8958[(num2 * Global_23987.f_5829) + m] - Global_23987.f_5671[k];
											}
										}
									}
									else
									{
										x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
										num28 = Global_23987.f_8999[(num2 * Global_23987.f_5829) + k];
										num29 = Global_23987.f_9040[(num2 * Global_23987.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_54(26, true, false, &num26, &num27, bParam7))
										{
											if (Global_23987.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_54(26, true, true, &num26, &num27, bParam7))
											{
												func_36(26, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_42(func_47(26), func_44(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_54(27, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_54(27, true, true, &num26, &num27, bParam7))
											{
												func_36(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_42(func_47(27), func_44(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23987.f_2387[num16 /*5*/][l] == 5 || Global_23987.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_23987.f_2130[num16])
											flag5 = true;
									
										func_24(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_23987.f_9112 && Global_23987.f_9113 == numberOfLinesForString)
											func_20(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_23987.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_23987.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_4469[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_4726[num13 + num19], Global_23987.f_4855[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_23987.f_4984[num14 + num20] == 2 || Global_23987.f_4984[num14 + num20] == 54 || Global_23987.f_4984[num14 + num20] == 64)
											{
												if (func_54(Global_23987.f_4984[num14 + num20], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (func_54(Global_23987.f_4984[num14 + num20], flag, true, &num26, &num27, bParam7))
													{
														func_36(Global_23987.f_4984[num14 + num20], flag, &num32, &num33, &num34, &num35);
													
														if (i == 1)
															if (Global_23987.f_5686[k] == 2)
																func_42(func_47(Global_23987.f_4984[num14 + num20]), func_44(Global_23987.f_4984[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_42(func_47(Global_23987.f_4984[num14 + num20]), func_44(Global_23987.f_4984[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_23987.f_5686[k] == 2)
										{
											func_40(num24 + x + (0.00078125f * 7f), num25, 0);
										}
										else
										{
											func_40(num24 + x, num25, 0);
										
											if (IS_ROCKSTAR_DEV() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (k == 0)
												{
													if (Global_23987.f_2130[num16])
														flag5 = true;
												
													func_24(false, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, flag5, flag4);
													TEXT_LABEL_ASSIGN_STRING(&text, "TEST_LABEL", 16);
													value = 0f;
													value2 = 55f;
													num47 = 0.0185f;
													num48 = 0.004f;
													num49 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, 0.35f * 0.7f);
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT(num24 - (num49 * 0.6f), num25 + (num47 * 0.75f), 0.0175f, 0.035f, SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value2), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_6341 + num22);
													func_40(num24 - num49, num25 + num48, 0);
													num22 = num22 + 1;
												}
											}
										}
									}
								
									if (num20 > 0)
									{
										x = x + (6f * 0.00078125f);
									
										for (l = 0; l < num20; l = l + 1)
										{
											if (Global_23987.f_4984[num14 + l] != 2 && Global_23987.f_4984[num14 + l] != 54 && Global_23987.f_4984[num14 + l] != 64)
											{
												if (func_54(Global_23987.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (i == 1)
													{
														if (func_54(Global_23987.f_4984[num14 + l], flag, true, &num26, &num27, bParam7))
														{
															func_36(Global_23987.f_4984[num14 + l], flag, &num32, &num33, &num34, &num35);
														
															if (Global_23987.f_4984[num14 + l] == 30)
																func_42(func_47(Global_23987.f_4984[num14 + l]), func_44(Global_23987.f_4984[num14 + l], flag), Global_23984 + (num26 * 0.5f), (num25 + 0.00277776f + (num27 * 0.5f)) - (0.00078125f * 11f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else if (Global_23987.f_5686[k] == 2)
																func_42(func_47(Global_23987.f_4984[num14 + l]), func_44(Global_23987.f_4984[num14 + l], flag), ((num24 + x + num28) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_42(func_47(Global_23987.f_4984[num14 + l]), func_44(Global_23987.f_4984[num14 + l], flag), (num24 + x + num28) - (0.00078125f * 12f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
														}
													}
												
													x = x + (12f * 0.00078125f);
												}
											}
										}
									}
								}
							
								flag3 = true;
								num11 = num11 + 1;
							
								for (l = 0; l < 4; l = l + 1)
								{
									if (Global_23987.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_23987.f_6332)
									{
										func_24(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23987.f_9112 && Global_23987.f_9113 == numberOfLinesForString)
											func_20(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_4469[num12]);
										num28 = func_21(true);
										x = 0f;
									
										if (Global_23987.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_23987.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
										Global_23987.f_8999[(num2 * Global_23987.f_5829) + k] = num28;
									}
									else
									{
										x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
										num28 = Global_23987.f_8999[(num2 * Global_23987.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_54(26, true, false, &num26, &num27, bParam7))
										{
											if (Global_23987.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_54(26, true, true, &num26, &num27, bParam7))
											{
												func_36(26, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_42(func_47(26), func_44(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_54(27, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_54(27, true, true, &num26, &num27, bParam7))
											{
												func_36(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_42(func_47(27), func_44(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_24(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
										func_18(num24 + x, num25, "NUMBER" /*~1~*/, Global_23987.f_4469[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_23987.f_6332)
									{
										func_24(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23987.f_9112 && Global_23987.f_9113 == numberOfLinesForString)
											func_20(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_4726[num13], Global_23987.f_4855[num13]);
										num28 = func_21(true);
										x = 0f;
									
										if (Global_23987.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_23987.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
										Global_23987.f_8999[(num2 * Global_23987.f_5829) + k] = num28;
									}
									else
									{
										x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
										num28 = Global_23987.f_8999[(num2 * Global_23987.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_54(26, true, false, &num26, &num27, false))
										{
											if (Global_23987.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_54(26, true, true, &num26, &num27, bParam7))
											{
												func_36(26, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_42(func_47(26), func_44(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_54(27, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_54(27, true, true, &num26, &num27, bParam7))
											{
												func_36(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_42(func_47(27), func_44(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									func_24(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
									func_14(num24 + x, num25, "NUMBER" /*~1~*/, Global_23987.f_4726[num13], Global_23987.f_4855[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_54(Global_23987.f_4984[num14], flag, false, &num26, &num27, bParam7))
									{
										if (!Global_23987.f_6332)
										{
											num29 = num26;
											x = 0f;
										
											if (Global_23987.f_5686[k] == 2)
												x = x + (num31 - num29) + (0.00078125f * 1f);
											else if (Global_23987.f_5686[k] == 0)
												x = x + (((num31 - num24) * 0.5f) - (num29 * 0.5f));
										
											Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
											Global_23987.f_9040[(num2 * Global_23987.f_5829) + k] = num29;
										}
										else
										{
											x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
											num29 = Global_23987.f_9040[(num2 * Global_23987.f_5829) + k];
										}
									
										if (flag6)
										{
											if (func_54(26, true, false, &num26, &num27, bParam7))
											{
												if (Global_23987.f_5686[k] == 2)
													x = x - (num26 * 2f);
											
												num30 = num26 * 0.5f;
											
												if (func_54(26, true, true, &num26, &num27, bParam7))
												{
													func_36(26, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_42(func_47(26), func_44(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										
											if (func_54(27, true, false, &num26, &num27, bParam7))
											{
												x = x + num26;
												num30 = num26 * 0.5f;
											
												if (func_54(27, true, true, &num26, &num27, bParam7))
												{
													func_36(27, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_42(func_47(27), func_44(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_54(Global_23987.f_4984[num14], flag, true, &num26, &num27, bParam7))
											{
												func_36(Global_23987.f_4984[num14], flag, &num32, &num33, &num34, &num35);
												func_42(func_47(Global_23987.f_4984[num14]), func_44(Global_23987.f_4984[num14], flag), num24 + x + (num26 * 0.5f), (num25 - 0.00277776f) + (num37 * 0.5f), num26 * func_13(Global_23987.f_4984[num14]), num27 * func_13(Global_23987.f_4984[num14]), 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								}
							
								flag3 = true;
								num14 = num14 + 1;
								break;
						
							case 5:
								flag3 = true;
								break;
						}
					
						if (Global_23987.f_5659[k] == 5)
						{
							if (Global_23987.f_5671[k] > 0.05f)
								num24 = num24 + Global_23987.f_5671[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_23987.f_5671[k];
						
							if (Global_23987.f_5678[k])
								if (func_54(26, true, true, &num26, &num27, bParam7))
									num24 = num24 - num26;
						}
					}
					else
					{
						num24 = num24 + Global_23987.f_5671[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_23987.f_8737[num2] = numberOfLinesForString;
						Global_23987.f_6343 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_23987.f_5959[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_23987.f_6348[numberOfLinesForString] != 0f)
							num44 = num44 + Global_23987.f_6348[numberOfLinesForString];
						else
							num44 = num44 + 0.034722f;
					}
				
					if (!Global_23987.f_6331)
					{
						Global_23987.f_6088[numberOfLinesForString] = true;
					
						if (Global_23987.f_5830[numberOfLinesForString])
						{
							if (flag)
								Global_23987.f_6337 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_23987.f_6337 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_23987.f_6331)
			{
				Global_23987.f_6333 = num40 + num44 + (0.00277776f * (float)num5);
				Global_23987.f_6336 = num4;
				Global_23987.f_6334 = num3;
				Global_23987.f_6331 = 1;
			}
		}
	
		if (!Global_23987.f_6332)
		{
			Global_23987.f_6335 = num2;
			Global_23987.f_6332 = 1;
		}
	}

	Global_23987.f_6479 = num36;
	Global_23987.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23987.f_6479);

	if (!Global_23987.f_9081)
		func_2(0);

	Global_23987.f_9081 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_12(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_12(int iParam0) // Position - 0x35EF (13807)
{
	Global_1675263.f_1163 = iParam0;
	return;
}

float func_13(int iParam0) // Position - 0x3600 (13824)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
	}

	return 1f;
}

void func_14(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x366F (13935)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_15(fParam0), fParam1, 0);
	return;
}

float func_15(float fParam0) // Position - 0x3692 (13970)
{
	fParam0 = fParam0 * func_16();
	return fParam0;
}

float func_16() // Position - 0x36A5 (13989)
{
	return 1.7777778f / func_17();
}

float func_17() // Position - 0x36B7 (14007)
{
	return Global_23987.f_9117;
}

void func_18(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x36C5 (14021)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_15(fParam0), fParam1, iParam4);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x36E7 (14055)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_20(BOOL bParam0) // Position - 0x36F8 (14072)
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_23987.f_9109[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_23987.f_9109[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

float func_21(BOOL bParam0) // Position - 0x373E (14142)
{
	return func_22(HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(bParam0));
}

float func_22(float fParam0) // Position - 0x3750 (14160)
{
	fParam0 = fParam0 * func_23();
	return fParam0;
}

float func_23() // Position - 0x3763 (14179)
{
	return func_17() / 1.7777778f;
}

void func_24(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3775 (14197)
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_26(Global_23987.f_6614[iParam4], &r, &g, &b);
		
			if (r < 20 && g < 20 && b < 20)
			{
				if (bParam0 == false)
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			}
			else if (r > 230 && g > 230 && b > 230)
			{
				if (bParam0)
				{
					r = 0;
					g = 0;
					b = 0;
				}
			}
		
			HUD::SET_TEXT_COLOUR(r, g, b, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOWDARK, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOW, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR(255f * 0.8f));
		}
		else
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			HUD::SET_TEXT_COLOUR(r, g, b, a);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}

	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);

	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}

	func_25(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_25(float fParam0, float fParam1) // Position - 0x3923 (14627)
{
	HUD::SET_TEXT_WRAP(func_15(fParam0), func_15(fParam1));
	return;
}

void func_26(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x393B (14651)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
	
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
	
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
	
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
	
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
	
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
	
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
	
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
	
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
	
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
	
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
	
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
	
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
	
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
	
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
	
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
	
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
	
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
	
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
	
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
	
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
	
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
	
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
	
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
	
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
	
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
	
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}

	return;
}

void func_27(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x3BC5 (15301)
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_59(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_56(bParam4, bParam8))
		return;

	if (func_34())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_30(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_23987.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_23987.f_5326; i = i + 1)
			{
				if (Global_23987.f_5625[i] != 365)
					TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5328[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23987.f_5625[i], true), 64);
				else if (Global_23987.f_5640[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5328[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23987.f_5640[i], true), 64);
			}
		
			Global_23987.f_5327 = 0;
		}
	
		if (!Global_23987.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_23987.f_5684 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_23987.f_5326; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_23987.f_5553[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_29(&Global_23987.f_5328[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_23987.f_5553[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_29(&Global_23987.f_5328[j /*16*/]);
					}
				
					if (Global_23987.f_5610[i] == -1)
					{
						func_28(&Global_23987.f_5553[i /*4*/]);
					}
					else
					{
						timestamp = Global_23987.f_5610[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23987.f_5553[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23987.f_5625[i] != 365 && IS_BIT_SET(Global_23987.f_5655, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23987.f_5625[i]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23987.f_5326);
				func_29(&Global_4542374);
			
				if (Global_4542374.f_20 == -1)
				{
					func_28(&(Global_4542374.f_16));
				}
				else
				{
					timestamp2 = Global_23987.f_5610[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_23987.f_5685)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23987.f_5327 = 1;
		}
	
		for (i = 0; i < Global_23987.f_5326; i = i + 1)
		{
			if (Global_23987.f_5610[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23987.f_5553[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4542374.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
			
				if (bParam5)
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				else
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
	
		if (bParam6)
		{
			if (!Global_23987.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_23987.f_9116 = 1;
			}
		}
		else if (Global_23987.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_23987.f_9116 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_23987.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23987.f_6263[num /*10*/], Global_23987.f_5656, Global_23987.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23987.f_6263[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

void func_28(char* sParam0) // Position - 0x40BF (16575)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_29(char* sParam0) // Position - 0x40D1 (16593)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_30(Player plParam0, int iParam1) // Position - 0x40DF (16607)
{
	BOOL flag;

	if (!func_33(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_31(-1, false) == 8;
	else
		flag = Global_1845270[plParam0 /*892*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_31(int iParam0, BOOL bParam1) // Position - 0x4138 (16696)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_32();

	if (Global_1575066[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

int func_32() // Position - 0x4179 (16761)
{
	return Global_1574926;
}

BOOL func_33(Player plParam0) // Position - 0x4185 (16773)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_34() // Position - 0x41A7 (16807)
{
	var position;

	if (Global_21083.f_1 > 3)
		return true;

	if (func_35())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_21028 == 0)
			if (position.f_1 > -119f)
				return true;
			else
				return false;
		else if (position.f_1 > -101f)
			return true;
		else
			return false;
	}

	return false;
}

BOOL func_35() // Position - 0x4215 (16917)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

void func_36(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Position - 0x422F (16943)
{
	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, piParam2, piParam3, piParam4, piParam5);
	*piParam5 = 255;

	switch (iParam0)
	{
		case 28:
			*piParam2 = 194;
			*piParam3 = 80;
			*piParam4 = 80;
			break;
	
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*piParam2 = 0;
				*piParam3 = 0;
				*piParam4 = 0;
			}
			break;
	
		case 57:
			*piParam5 = 100;
			break;
	
		case 65:
			*piParam5 = 100;
			break;
	
		case 58:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	}

	return;
}

void func_37(float fParam0) // Position - 0x4350 (17232)
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	func_25(fParam0, (Global_23984 + Global_23986) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_38(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x43AF (17327)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_15(fParam0), fParam1, 0);
	return;
}

float func_39(char* sParam0, int iParam1, int iParam2) // Position - 0x43D6 (17366)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_41();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return func_21(true);
}

void func_40(float fParam0, float fParam1, int iParam2) // Position - 0x4418 (17432)
{
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_15(fParam0), fParam1, iParam2);
	return;
}

void func_41() // Position - 0x442E (17454)
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_23987.f_9091)
	{
		r = Global_23987.f_9087;
		g = Global_23987.f_9088;
		b = Global_23987.f_9089;
		a = Global_23987.f_9090;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	func_25(Global_23984 + 0.0046875f, (Global_23984 + Global_23986) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_42(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x44B8 (17592)
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_15(fParam2), fParam3, func_15(fParam4), fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12);
	return;
}

void func_43(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x44E6 (17638)
{
	GRAPHICS::DRAW_RECT(func_15(fParam0 + (iParam2 * 0.5f)), fParam1 + (fParam3 * 0.5f), func_15(iParam2), fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

char* func_44(int iParam0, BOOL bParam1) // Position - 0x451D (17693)
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23987.f_7680[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23987.f_7680[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_45(&txdName);
		}
		else
		{
			return func_45(&Global_23987.f_7680[iParam0 /*16*/]);
		}
	}

	switch (iParam0)
	{
		case 3:
			unk[0] = "MP_hostCrown";
			unk[1] = "MP_hostCrown";
			break;
	
		case 21:
			unk[0] = "MP_SpecItem_Coke";
			unk[1] = "MP_SpecItem_Coke";
			break;
	
		case 22:
			unk[0] = "MP_SpecItem_Heroin";
			unk[1] = "MP_SpecItem_Heroin";
			break;
	
		case 23:
			unk[0] = "MP_SpecItem_Weed";
			unk[1] = "MP_SpecItem_Weed";
			break;
	
		case 24:
			unk[0] = "MP_SpecItem_Meth";
			unk[1] = "MP_SpecItem_Meth";
			break;
	
		case 25:
			unk[0] = "MP_SpecItem_Cash";
			unk[1] = "MP_SpecItem_Cash";
			break;
	
		case 1:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 2:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 4:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 6:
			unk[0] = "Shop_Box_CrossB";
			unk[1] = "Shop_Box_Cross";
			break;
	
		case 7:
			unk[0] = "Shop_Box_BlankB";
			unk[1] = "Shop_Box_Blank";
			break;
	
		case 5:
			unk[0] = "Shop_Box_TickB";
			unk[1] = "Shop_Box_Tick";
			break;
	
		case 8:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 9:
			unk[0] = "Shop_Clothing_Icon_B";
			unk[1] = "Shop_Clothing_Icon_A";
			break;
	
		case 10:
			unk[0] = "Shop_GunClub_Icon_B";
			unk[1] = "Shop_GunClub_Icon_A";
			break;
	
		case 17:
			unk[0] = "Shop_Ammo_Icon_B";
			unk[1] = "Shop_Ammo_Icon_A";
			break;
	
		case 18:
			unk[0] = "Shop_Armour_Icon_B";
			unk[1] = "Shop_Armour_Icon_A";
			break;
	
		case 19:
			unk[0] = "Shop_Health_Icon_B";
			unk[1] = "Shop_Health_Icon_A";
			break;
	
		case 20:
			unk[0] = "Shop_MakeUp_Icon_B";
			unk[1] = "Shop_MakeUp_Icon_A";
			break;
	
		case 11:
			unk[0] = "Shop_Tattoos_Icon_B";
			unk[1] = "Shop_Tattoos_Icon_A";
			break;
	
		case 12:
			unk[0] = "Shop_Garage_Icon_B";
			unk[1] = "Shop_Garage_Icon_A";
			break;
	
		case 13:
			unk[0] = "Shop_Garage_Bike_Icon_B";
			unk[1] = "Shop_Garage_Bike_Icon_A";
			break;
	
		case 14:
			unk[0] = "Shop_Barber_Icon_B";
			unk[1] = "Shop_Barber_Icon_A";
			break;
	
		case 15:
			unk[0] = "shop_Lock";
			unk[1] = "shop_Lock";
			break;
	
		case 16:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 26:
			unk[0] = "arrowleft";
			unk[1] = "arrowleft";
			break;
	
		case 27:
			unk[0] = "arrowright";
			unk[1] = "arrowright";
			break;
	
		case 28:
			unk[0] = "MP_AlertTriangle";
			unk[1] = "MP_AlertTriangle";
			break;
	
		case 29:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 31:
			unk[0] = "Shop_Michael_Icon_B";
			unk[1] = "Shop_Michael_Icon_A";
			break;
	
		case 32:
			unk[0] = "Shop_Franklin_Icon_B";
			unk[1] = "Shop_Franklin_Icon_A";
			break;
	
		case 33:
			unk[0] = "Shop_Trevor_Icon_B";
			unk[1] = "Shop_Trevor_Icon_A";
			break;
	
		case 54:
			unk[0] = "SaleIcon";
			unk[1] = "SaleIcon";
			break;
	
		case 55:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 57:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 58:
			unk[0] = "Shop_Lock_Arena";
			unk[1] = "Shop_Lock_Arena";
			break;
	
		case 59:
			unk[0] = "Card_Suit_Clubs";
			unk[1] = "Card_Suit_Clubs";
			break;
	
		case 60:
			unk[0] = "Card_Suit_Hearts";
			unk[1] = "Card_Suit_Hearts";
			break;
	
		case 61:
			unk[0] = "Card_Suit_Spades";
			unk[1] = "Card_Suit_Spades";
			break;
	
		case 62:
			unk[0] = "Card_Suit_Diamonds";
			unk[1] = "Card_Suit_Diamonds";
			break;
	
		case 63:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 65:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 64:
			unk[0] = "Shop_Chips_A";
			unk[1] = "Shop_Chips_B";
			break;
	
		case 0:
			unk[0] = "";
			unk[1] = "";
			break;
	}

	if (bParam1)
		return unk[0];

	return unk[1];
}

char* func_45(char* sParam0) // Position - 0x4A45 (19013)
{
	return sParam0;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x4A4F (19023)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

char* func_47(int iParam0) // Position - 0x4A66 (19046)
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23987.f_6623[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23987.f_6623[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_45(&txdName);
		}
		else
		{
			return func_45(&Global_23987.f_6623[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 54)
		return "MPShopSale";

	return "CommonMenu";
}

void func_48(int iParam0, char* sParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x4ADA (19162)
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_23987.f_5821 > iParam0)
		return;

	if (Global_23987.f_5821 >= 128)
		return;

	if (Global_23987.f_5823 >= 256)
		return;

	if (Global_23987.f_6346 < Global_23987.f_6344)
		return;

	if (Global_23987.f_5821 != iParam0)
	{
		Global_23987.f_5821 = iParam0;
		Global_23987.f_5822 = 0;
	}

	num = Global_23987.f_5659[Global_23987.f_5822];

	if (num != 1)
	{
		while (Global_23987.f_5822 < 4 && num != 1)
		{
			Global_23987.f_5822 = Global_23987.f_5822 + 1;
			num = Global_23987.f_5659[Global_23987.f_5822];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_79[Global_23987.f_5823 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_23987.f_1616[Global_23987.f_5823] = bParam3;
	Global_23987.f_1873[Global_23987.f_5823] = iParam4;
	Global_23987.f_2130[Global_23987.f_5823] = iParam6;
	Global_23987.f_5823 = Global_23987.f_5823 + 1;

	if (!bParam3)
		func_51(Global_23987.f_5821, true);
	else
		func_51(Global_23987.f_5821, false);

	if (iParam2 == 0)
	{
		num2 = func_50(&Global_23987.f_79[Global_23987.f_5823 /*6*/]);
	
		if (Global_23987.f_5678[Global_23987.f_5822])
		{
			func_54(26, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_23987.f_5671[Global_23987.f_5822])
			Global_23987.f_5671[Global_23987.f_5822] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_49(&Global_23987.f_79[Global_23987.f_5823 /*6*/]);
		
			if (num4 > Global_23987.f_6348[iParam0])
				Global_23987.f_6348[iParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_23987.f_5692[iParam0], Global_23987.f_5822);
	Global_23987.f_5822 = Global_23987.f_5822 + 1;
	Global_23987.f_6347 = 1;
	Global_23987.f_6345 = Global_23987.f_5823 - 1;
	Global_23987.f_6346 = 0;
	Global_23987.f_6344 = iParam2;
	return;
}

float func_49(char* sParam0) // Position - 0x4CF6 (19702)
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_50(char* sParam0) // Position - 0x4D12 (19730)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_24(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return func_21(true);
}

void func_51(int iParam0, BOOL bParam1) // Position - 0x4D4F (19791)
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_23987.f_6618[num], iParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_23987.f_6618[num], iParam0 - (num * 32));

	return;
}

void func_52(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Position - 0x4D9B (19867)
{
	float num;
	float value;
	float aspectRatio;

	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(piParam1, piParam2);
		return;
	}

	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(piParam1, piParam2);
	num = SYSTEM::TO_FLOAT(*piParam1);
	value = SYSTEM::TO_FLOAT(*piParam2);
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (func_53(*piParam1, *piParam2))
	{
		*uParam3 = 1f;
		*piParam1 = SYSTEM::ROUND(value * aspectRatio);
		*piParam2 = SYSTEM::ROUND(value);
		return;
	}

	*uParam3 = num / value / aspectRatio;
	*piParam1 = SYSTEM::ROUND(num / *uParam3);
	*piParam2 = SYSTEM::ROUND(value / *uParam3);
	return;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x4E23 (20003)
{
	return SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1) > 3.5f;
}

BOOL func_54(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x4E3E (20030)
{
	var textureDict;
	var textureName;
	int num;
	int num2;
	float num3;
	float textureResolution;
	float num4;

	TEXT_LABEL_ASSIGN_STRING(&textureDict, func_47(iParam0), 64);
	TEXT_LABEL_ASSIGN_STRING(&textureName, func_44(iParam0, bParam1), 64);

	if (MISC::GET_HASH_KEY(&textureName) != 0)
	{
		num3 = 1f;
		func_52(bParam5, &num, &num2, &num3);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(&textureDict, &textureName) };
		num4 = func_55(iParam0) / num3;
		textureResolution = { textureResolution * { num4, num4, num4 } };
	
		if (!bParam2)
		{
			textureResolution = textureResolution - 2f;
			textureResolution.f_1 = textureResolution.f_1 - 2f;
		}
	
		if (iParam0 == 30)
		{
			textureResolution = 288f;
			textureResolution.f_1 = 106f;
		}
	
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&Global_23987.f_7680[29 /*16*/]) == joaat("CREW_LOGO"))
		{
			textureResolution = 106f;
			textureResolution.f_1 = 106f;
		}
	
		*uParam3 = (textureResolution / (float)num) * (float)num / num2;
		*uParam4 = (textureResolution.f_1 / (float)num2 / textureResolution / (float)num) * *uParam3;
	
		if (!bParam5)
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
				*uParam3 = *uParam3 * 1.33f;
	
		if (iParam0 == 29)
		{
			if (*uParam3 > Global_23986)
			{
				*uParam4 = *uParam4 * (Global_23986 / *uParam3);
				*uParam3 = Global_23986;
			}
		}
	
		return true;
	}

	return false;
}

float func_55(int iParam0) // Position - 0x4F6A (20330)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
	
		case 64:
			return 0.8f;
	}

	return 1f;
}

BOOL func_56(BOOL bParam0, BOOL bParam1) // Position - 0x503E (20542)
{
	if (Global_2672942.f_1761.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_58(8, -1) && func_57() != 65 || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_79825 || Global_23987.f_9115 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_101765.f_1490)
		return false;

	return true;
}

int func_57() // Position - 0x50DB (20699)
{
	return Global_1575014;
}

BOOL func_58(int iParam0, int iParam1) // Position - 0x50E7 (20711)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673706.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673706.f_1048, iParam0);
}

BOOL func_59(var uParam0, BOOL bParam1, int iParam2) // Position - 0x511F (20767)
{
	var unk;
	Hash hashKey;
	int i;
	int num;

	if (iParam2 == -1)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam2, 64);
	hashKey = MISC::GET_HASH_KEY(&unk);
	num = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_23987.f_6324[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_23987.f_6324[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_23987.f_6324[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x51BC (20924)
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x521A (21018)
{
	uParam0->f_1 = 0;
	return;
}

void func_62(int iParam0) // Position - 0x5227 (21031)
{
	Global_23987.f_6341 = iParam0;
	return;
}

void func_63() // Position - 0x5237 (21047)
{
	var unk;
	int num;
	int num2;
	var unk5;
	const char* displayNameFromVehicleModel;
	var unk21;
	const char* displayNameFromVehicleModel2;
	var unk37;
	const char* displayNameFromVehicleModel3;
	var unk53;
	const char* displayNameFromVehicleModel4;
	var unk69;
	const char* displayNameFromVehicleModel5;
	var unk85;
	const char* displayNameFromVehicleModel6;
	var unk101;
	const char* displayNameFromVehicleModel7;
	var unk117;
	const char* displayNameFromVehicleModel8;

	func_78("", 0, 0);
	TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	num = iLocal_62;
	func_77(num, &num2, true);

	if (iLocal_62.f_8 == 7)
	{
		unk5 = { func_72(-1, num, true) };
		displayNameFromVehicleModel = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
		TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_CONFM_SNG", 16);
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk5))
			func_70(&unk5);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel))
			func_70(displayNameFromVehicleModel);
	}
	else if (iLocal_62.f_8 == 8)
	{
		unk21 = { func_72(-1, num, true) };
		displayNameFromVehicleModel2 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
		TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_CONFM_SNF", 16);
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk21))
			func_70(&unk21);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel2))
			func_70(displayNameFromVehicleModel2);
	}
	else if (iLocal_62.f_8 == 12)
	{
		unk37 = { func_72(-1, num, true) };
		displayNameFromVehicleModel3 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
		TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_CONFM_SNF", 16);
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk37))
			func_70(&unk37);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel3))
			func_70(displayNameFromVehicleModel3);
	}
	else if (iLocal_62.f_8 == 9)
	{
		unk53 = { func_72(-1, num, true) };
		displayNameFromVehicleModel4 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
	
		if (iLocal_62.f_4 != iLocal_62.f_5)
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_CONFM_SVR", 16);
		else if (iLocal_62.f_9 != 2)
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_CONFM_SVR2", 16);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_CONFM_SVE", 16);
	
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk53))
			func_70(&unk53);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel4))
			func_70(displayNameFromVehicleModel4);
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return;

	switch (iLocal_62.f_9)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_NSP", 16);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_NSRS", 16);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_VPG_ADD", 16);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_VPG_SWAP_G", 16);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_VPG_SWAP_F", 16);
			break;
	
		case 10:
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_DLVRY", 16);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_CSV", 16);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_ESNS", 16);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_SNS", 16);
			break;
	
		case 14:
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_OUT", 16);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, func_68(func_69(iLocal_75.f_2[iLocal_75])), 16);
			break;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
	{
		func_78(&unk, 0, 0);
		return;
	}

	if (iLocal_62.f_8 == 1)
	{
		if (func_64())
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SG", 16);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_EMPTY_G", 16);
	
		func_78(&unk, 0, 0);
	}
	else if (iLocal_62.f_8 == 2)
	{
		if (func_64())
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SF", 16);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_EMPTY_F", 16);
	
		func_78(&unk, 0, 0);
	}
	else if (iLocal_62.f_8 == 10)
	{
		if (func_64())
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SF", 16);
		else if (iLocal_62.f_12)
			TEXT_LABEL_ASSIGN_STRING(&unk, func_68(func_69(iLocal_75.f_2[iLocal_75])), 16);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_EMPTY_F", 16);
	
		func_78(&unk, 0, 0);
	}
	else if (iLocal_62.f_8 == 3)
	{
		if (func_64())
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SV", 16);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_EMPTY_S", 16);
	
		func_78(&unk, 0, 0);
	}
	else if (iLocal_62.f_8 == 4)
	{
		unk69 = { func_72(-1, num, true) };
		displayNameFromVehicleModel5 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
		TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SNG", 16);
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk69))
			func_70(&unk69);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel5))
			func_70(displayNameFromVehicleModel5);
	}
	else if (iLocal_62.f_8 == 5)
	{
		unk85 = { func_72(-1, num, true) };
		displayNameFromVehicleModel6 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
		TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SNF", 16);
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk85))
			func_70(&unk85);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel6))
			func_70(displayNameFromVehicleModel6);
	}
	else if (iLocal_62.f_8 == 11)
	{
		unk101 = { func_72(-1, num, true) };
		displayNameFromVehicleModel7 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
		TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SNG", 16);
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk101))
			func_70(&unk101);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel7))
			func_70(displayNameFromVehicleModel7);
	}
	else if (iLocal_62.f_8 == 6)
	{
		unk117 = { func_72(-1, num, true) };
		displayNameFromVehicleModel8 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(num2));
		TEXT_LABEL_ASSIGN_STRING(&unk, "VOM_HELP_SVR", 16);
		func_78(&unk, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk117))
			func_70(&unk117);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(displayNameFromVehicleModel8))
			func_70(displayNameFromVehicleModel8);
	}

	return;
}

BOOL func_64() // Position - 0x5724 (22308)
{
	return func_65(iLocal_75);
}

BOOL func_65(int iParam0) // Position - 0x5732 (22322)
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);

	if (IS_ROCKSTAR_DEV() && func_67() && func_66() == 2)
		return 0;

	if (!IS_BIT_SET(Global_23987.f_6618[num], iParam0 - (num * 32)))
		return 1;

	return 0;
}

int func_66() // Position - 0x5786 (22406)
{
	return Global_33105;
}

BOOL func_67() // Position - 0x5791 (22417)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CREATOR_RT) && PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CREATOR_LT);

	return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RT) && PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LT);
}

char* func_68(int iParam0) // Position - 0x57CA (22474)
{
	if (Global_1579597)
		return "";

	switch (iParam0)
	{
		case 6000:
			return "FGROUP_ARENA_NO" /*Go to www.arenawar.tv to purchase this garage level.*/;
	
		case 6002:
			return "FGROUP_NCLUB_NO" /*Go to foreclosures.maze-bank.com to purchase this garage level.*/;
	
		case 6001:
			return "FGROUP_OFF_NO" /*Go to www.dynasty8executiverealty.com to purchase this garage level.*/;
	}

	return "";
}

int func_69(int iParam0) // Position - 0x5822 (22562)
{
	if (Global_1579597)
		return -1;

	switch (iParam0)
	{
		case 18:
		case 19:
		case 20:
			return 6000;
	
		case 8:
		case 9:
		case 10:
			return 6001;
	
		case 14:
		case 15:
		case 16:
		case 17:
			return 6002;
	}

	return -1;
}

void func_70(const char* sParam0) // Position - 0x5894 (22676)
{
	if (Global_23987.f_5322 >= 3 || Global_23987.f_5319 >= 4)
		return;

	Global_23987.f_5253[Global_23987.f_5319] = 1;
	Global_23987.f_5319 = Global_23987.f_5319 + 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5270[Global_23987.f_5322 /*16*/], sParam0, 64);
	Global_23987.f_5322 = Global_23987.f_5322 + 1;
	return;
}

Hash func_71(int iParam0) // Position - 0x58F5 (22773)
{
	if (iParam0 > -1)
		return Global_1586542[iParam0 /*143*/].f_66;

	return 0;
}

struct<16> func_72(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5911 (22801)
{
	var unk;

	bParam2;

	if (iParam0 == -1)
		if (func_74(iParam1) != -1)
			unk = { Global_2359296[func_73() /*5571*/].f_7.f_105[func_74(iParam1) /*16*/] };
	else if (iParam0 > -1 && iParam0 < 30)
		unk = { Global_2359296[func_73() /*5571*/].f_7.f_105[iParam0 /*16*/] };
	else
		bParam2;

	return unk;
}

int func_73() // Position - 0x5989 (22921)
{
	int num;

	num = 0;
	return num;
}

int func_74(int iParam0) // Position - 0x5996 (22934)
{
	int num;

	func_76(Global_4282954, &num);

	if (num >= 227 && num < 257 && iParam0 == -1 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !_IS_FMMC_ACTIVE())
		return num - 227;

	if (iParam0 != -1)
		if (iParam0 >= 227 && iParam0 < 257)
			return iParam0 - 227;

	return -1;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x5A05 (23045)
{
	return Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_193 != 0;
}

void func_76(int iParam0, var uParam1) // Position - 0x5A1C (23068)
{
	int i;

	*uParam1 = -1;

	if (iParam0 >= 0)
	{
		for (i = 0; i < 547; i = i + 1)
		{
			if (iParam0 == Global_1938530[i] - 1)
			{
				*uParam1 = i;
				return;
			}
		}
	}

	return;
}

void func_77(int iParam0, var uParam1, BOOL bParam2) // Position - 0x5A59 (23129)
{
	if (Global_262145.f_10656)
		*uParam1 = iParam0;

	if (iParam0 >= 0)
	{
		*uParam1 = Global_1938530[iParam0] - 1;
	
		if (bParam2)
			MISC::GET_FRAME_COUNT() % 5 == 0;
	}
	else
	{
		*uParam1 = -1;
	}

	return;
}

void func_78(char* sParam0, int iParam1, int iParam2) // Position - 0x5A99 (23193)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), sParam0, 24);
	Global_23987.f_5319 = 0;
	Global_23987.f_5320 = 0;
	Global_23987.f_5321 = 0;
	Global_23987.f_5322 = 0;
	Global_23987.f_5323 = iParam1;
	Global_23987.f_5324 = MISC::GET_GAME_TIMER();
	Global_23987.f_5325 = iParam2;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5253[i] = 0;
	}

	return;
}

void func_79() // Position - 0x5AFE (23294)
{
	func_81(-1);
	func_12(1);

	if (iLocal_62.f_8 == 1 || iLocal_62.f_8 == 2 || iLocal_62.f_8 == 3 || iLocal_62.f_8 == 6 || iLocal_62.f_8 == 4 || iLocal_62.f_8 == 5 || iLocal_62.f_8 == 10 || iLocal_62.f_8 == 11)
	{
		if (func_64())
			func_80(INPUT_CELLPHONE_SELECT, "VOM_BTN_S_MV", -1);
	
		func_80(INPUT_CELLPHONE_CANCEL, "VOM_BTN_BCK", -1);
	}
	else if (iLocal_62.f_8 == 8 || iLocal_62.f_8 == 7 || iLocal_62.f_8 == 9 || iLocal_62.f_8 == 12)
	{
		if (func_64())
			func_80(INPUT_CELLPHONE_SELECT, "VOM_BTN_ACC", -1);
	
		func_80(INPUT_CELLPHONE_CANCEL, "VOM_BTN_CNCL", -1);
	}

	return;
}

void func_80(eControlAction ecaParam0, char* sParam1, int iParam2) // Position - 0x5BDC (23516)
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_23987.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4542374, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), sParam1, 16);
		Global_4542374.f_20 = iParam2;
		return;
		return;
	}

	MISC::CLEAR_BIT(&(Global_23987.f_5655), Global_23987.f_5326);
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5328[Global_23987.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5553[Global_23987.f_5326 /*4*/], sParam1, 16);
	Global_23987.f_5610[Global_23987.f_5326] = iParam2;
	Global_23987.f_5625[Global_23987.f_5326] = ecaParam0;
	Global_23987.f_5640[Global_23987.f_5326] = 32;
	Global_23987.f_5326 = Global_23987.f_5326 + 1;
	return;
}

void func_81(int iParam0) // Position - 0x5C8B (23691)
{
	int i;
	int num;

	Global_23987.f_5326 = 0;
	Global_23987.f_5327 = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5553[i /*4*/], "", 16);
		Global_23987.f_5610[i] = -1;
		Global_23987.f_5625[i] = 365;
		Global_23987.f_5640[i] = 32;
	}

	Global_23987.f_5655 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;

	if (MISC::IS_PC_VERSION())
	{
		if (!func_59(&num, false, iParam0))
			return;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23987.f_6263[num /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void func_82(int iParam0, BOOL bParam1, int iParam2) // Position - 0x5D43 (23875)
{
	int i;
	int num;

	Global_23987.f_6342 = iParam0;
	Global_23987.f_6477 = iParam2;

	if (Global_23987.f_6342 < Global_23987.f_6341)
	{
		Global_23987.f_6341 = Global_23987.f_6342;
	}
	else if (Global_23987.f_6332 && Global_23987.f_6342 > Global_23987.f_6343 || !Global_23987.f_6332 && Global_23987.f_6342 >= Global_23987.f_6341 + Global_23987.f_5828)
	{
		for (i = Global_23987.f_6341; i <= Global_23987.f_6342; i = i + 1)
		{
			if (i >= 0 && i < 127)
				if (Global_23987.f_5692[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_23987.f_5828 && Global_23987.f_6341 < 128)
		{
			Global_23987.f_6341 = Global_23987.f_6341 + 1;
			num = 0;
		
			for (i = Global_23987.f_6341; i <= Global_23987.f_6342; i = i + 1)
			{
				if (i >= 0 && i < 127)
					if (Global_23987.f_5692[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_23987.f_6331 = 0;
	Global_23987.f_6332 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
	}

	return;
}

void func_83() // Position - 0x5E93 (24211)
{
	int num;
	int num2;
	BOOL flag;
	var unk;
	int num3;
	Hash hash;
	Hash hash2;
	int num4;
	Hash hash3;
	Hash hash4;
	int num5;
	Hash hash5;
	Hash hash6;
	int num6;
	Hash hash7;
	Hash hash8;
	int num7;
	Hash hash9;
	Hash hash10;
	int num8;
	Hash hash11;
	Hash hash12;
	int num9;
	Hash hash13;
	Hash hash14;
	int num10;
	Hash hash15;
	Hash hash16;

	num = 0;
	num2 = 0;
	flag = false;

	if (iLocal_62.f_8 == 1)
	{
		flag = func_221(&num, &(iLocal_75.f_2), "VOM_T_SG", iLocal_75, false);
		iLocal_62.f_9 = 0;
		iLocal_62.f_6 = -1;
		iLocal_62.f_4 = -1;
	}
	else if (iLocal_62.f_8 == 2)
	{
		flag = func_220(iLocal_62.f_4, &num, "VOM_T_SF", &(iLocal_75.f_2), iLocal_75, false);
		iLocal_62.f_9 = 0;
		iLocal_62.f_2 = -1;
	}
	else if (iLocal_62.f_8 == 10)
	{
		flag = func_219(iLocal_62.f_6, &num, "VOM_T_SF", &(iLocal_75.f_2), iLocal_75, &(iLocal_62.f_12), false);
		iLocal_62.f_9 = 0;
		iLocal_62.f_4 = -1;
		iLocal_62.f_2 = -1;
	}
	else if (iLocal_62.f_8 == 3)
	{
		unk.f_4 = -1;
		unk.f_3 = iLocal_75;
		iLocal_62 = -1;
		flag = func_218(&(iLocal_75.f_2), &num2, &num, "VOM_T_SV", &unk, &(iLocal_62.f_4), iLocal_75, false, iLocal_62.f_2);
		iLocal_62.f_9 = unk.f_2;
	}
	else if (iLocal_62.f_8 == 4)
	{
		num3 = -1;
		func_77(iLocal_62, &num3, true);
		hash = func_71(num3);
		iLocal_62.f_9 = 0;
		iLocal_62.f_5 = -1;
		iLocal_62.f_7 = -1;
		hash2.f_4 = -1;
		hash2 = hash;
		hash2.f_1 = iLocal_62;
		hash2.f_3 = iLocal_75;
		hash2.f_4 = -1;
		flag = func_213(&num, &(iLocal_75.f_2), "VOM_T_SNG", &hash2, false);
		iLocal_62.f_9 = hash2.f_2;
		iLocal_62.f_10 = hash2.f_4;
	}
	else if (iLocal_62.f_8 == 5)
	{
		num4 = -1;
		func_77(iLocal_62, &num4, true);
		hash3 = func_71(num4);
		iLocal_62.f_3 = -1;
		hash4.f_4 = -1;
		hash4 = hash3;
		hash4.f_1 = iLocal_62;
		hash4.f_3 = iLocal_75;
		hash4.f_4 = -1;
		flag = func_210(iLocal_62.f_5, &num, "VOM_T_SNF", &(iLocal_75.f_2), &hash4, false);
		iLocal_62.f_9 = hash4.f_2;
		iLocal_62.f_10 = hash4.f_4;
	}
	else if (iLocal_62.f_8 == 11)
	{
		num5 = -1;
		func_77(iLocal_62, &num5, true);
		hash5 = func_71(num5);
		iLocal_62.f_9 = 0;
		iLocal_62.f_5 = -1;
		hash6.f_4 = -1;
		hash6 = hash5;
		hash6.f_1 = iLocal_62;
		hash6.f_3 = iLocal_75;
		hash6.f_4 = -1;
		flag = func_193(iLocal_62.f_7, &num, &(iLocal_75.f_2), "VOM_T_SNF", &hash6, &(iLocal_62.f_12), false);
		iLocal_62.f_9 = hash6.f_2;
		iLocal_62.f_10 = hash6.f_4;
	}
	else if (iLocal_62.f_8 == 6)
	{
		num6 = -1;
		func_77(iLocal_62, &num6, true);
		hash7 = func_71(num6);
		iLocal_62.f_1 = -1;
		hash8.f_4 = -1;
		hash8 = hash7;
		hash8.f_1 = iLocal_62;
		hash8.f_3 = iLocal_75;
		flag = func_84(&(iLocal_75.f_2), &num2, &num, "VOM_T_SRV", &hash8, &(iLocal_62.f_5), false, iLocal_62.f_3);
		iLocal_62.f_9 = hash8.f_2;
	}
	else if (iLocal_62.f_8 == 7)
	{
		num7 = -1;
		func_77(iLocal_62, &num7, true);
		hash9 = func_71(num7);
		hash10.f_4 = -1;
		hash10 = hash9;
		hash10.f_1 = iLocal_62;
		hash10.f_3 = iLocal_75;
		flag = func_213(&num, &(iLocal_75.f_2), "VOM_T_SNG", &hash10, false);
		iLocal_62.f_9 = hash10.f_2;
	}
	else if (iLocal_62.f_8 == 8)
	{
		num8 = -1;
		func_77(iLocal_62, &num8, true);
		hash11 = func_71(num8);
		hash12.f_4 = -1;
		hash12 = hash11;
		hash12.f_1 = iLocal_62;
		hash12.f_3 = iLocal_75;
		flag = func_210(iLocal_62.f_5, &num, "VOM_T_SNF", &(iLocal_75.f_2), &hash12, false);
		iLocal_62.f_9 = hash12.f_2;
	}
	else if (iLocal_62.f_8 == 12)
	{
		num9 = -1;
		func_77(iLocal_62, &num9, true);
		hash13 = func_71(num9);
		hash14.f_4 = -1;
		hash14 = hash13;
		hash14.f_1 = iLocal_62;
		hash14.f_3 = iLocal_75;
		flag = func_193(iLocal_62.f_7, &num, &(iLocal_75.f_2), "VOM_T_SNF", &hash14, &(iLocal_62.f_12), false);
		iLocal_62.f_9 = hash14.f_2;
	}
	else if (iLocal_62.f_8 == 9)
	{
		num10 = -1;
		func_77(iLocal_62, &num10, true);
		hash15 = func_71(num10);
		hash16.f_4 = -1;
		hash16 = hash15;
		hash16.f_1 = iLocal_62;
		hash16.f_3 = iLocal_75;
		flag = func_84(&(iLocal_75.f_2), &num2, &num, "VOM_T_SRV", &hash16, &(iLocal_62.f_5), false, iLocal_62.f_3);
		iLocal_62.f_9 = hash16.f_2;
	}

	iLocal_75.f_1 = num;
	return;
}

BOOL func_84(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, var uParam5, BOOL bParam6, int iParam7) // Position - 0x628C (25228)
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num6;
	Hash hash;

	func_225(false, false);
	func_222(sParam3);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(false, false, false, false, false);
	num = 0;
	*uParam2 = 0;
	*uParam1 = 0;
	num2 = 0;

	if (!func_191(*uParam5))
		iParam7 = -1;

	if (*uParam5 < 33)
	{
		num6 = func_184(*uParam5, -1);
	
		if (num6 > 0 && !func_175(*uParam5))
		{
			num5 = func_167(-1, num6, bParam6);
		
			if (func_184(*uParam5, -1) <= 131)
				if (Global_1312333[num6 /*1951*/].f_33 == 2)
					num5 = 2;
				else if (Global_1312333[num6 /*1951*/].f_33 == 6)
					num5 = 6;
		
			if (*uParam5 == 13)
				num5 = 11;
			else if (*uParam5 == 18)
				num5 = 10;
			else if (iParam7 >= 0 && func_191(*uParam5))
				num5 = func_166(*uParam5);
		
			for (i = 0; i < num5; i = i + 1)
			{
				flag = false;
				flag2 = false;
				flag3 = false;
				num = 0;
				uParam0->[i] = -1;
				num3 = func_164(*uParam5, -1) + i;
			
				if (iParam7 >= 0)
					num3 = num3 + (num5 * iParam7);
			
				func_77(num3, &num4, true);
			
				if (num3 == uParam4->f_1)
				{
					num = 6;
					flag = true;
					flag2 = false;
				}
				else if (func_163(num3) && !bParam6)
				{
				}
				else if (num4 < 0)
				{
					if (func_150(*uParam4, num3))
					{
						num = 2;
						flag = true;
						flag2 = true;
						flag3 = true;
					}
					else
					{
						num = 7;
						flag = true;
						flag2 = false;
						flag3 = true;
					}
				}
				else if (num4 >= 0 && STREAMING::IS_MODEL_A_VEHICLE(func_71(num4)))
				{
					func_146(num4);
					hash = func_71(num4);
				
					if (func_145(hash) && func_144(hash, num4))
					{
						if (!func_141(hash, true) && !func_140(hash))
						{
							if (IS_BIT_SET(Global_1586542[num4 /*143*/].f_104, 10))
							{
								flag = true;
								flag2 = false;
								flag3 = false;
								num = 10;
							}
							else if (IS_BIT_SET(Global_1586542[num4 /*143*/].f_104, 0) || _GET_ACTIVE_PV_SLOT() == num4 && func_138())
							{
								num = 14;
								flag = true;
								flag3 = false;
								flag2 = false;
							}
							else if (func_150(hash, uParam4->f_1) && func_150(*uParam4, num3))
							{
								flag = true;
								flag2 = true;
								flag3 = false;
								num = 9;
							}
							else
							{
								flag = true;
								flag2 = false;
								flag3 = false;
								num = 8;
							}
						}
					}
					else
					{
						func_96(num4, 0, -1);
						flag3 = true;
						flag = true;
					}
				}
			
				if (uParam4->f_3 == *uParam2)
					uParam4->f_2 = num;
			
				if (flag)
				{
					if (uParam4->f_3 == *uParam2 && flag2)
						num2 = 1;
				
					if (flag3)
					{
						func_48(*uParam2, "MP_MAN_VEH_S" /*Empty*/, 0, flag2, 0, false, 0);
						uParam0->[*uParam1] = -1;
						*uParam1 = *uParam1 + 1;
						*uParam2 = *uParam2 + 1;
					}
					else
					{
						func_85(*uParam2, *uParam5, num4, num3, i, flag2);
						uParam0->[*uParam1] = num4;
						*uParam1 = *uParam1 + 1;
						*uParam2 = *uParam2 + 1;
					}
				}
			}
		}
	}

	return num2;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6592 (26002)
{
	int num;
	var unk;
	var unk7;
	int num2;
	int num3;
	const char* displayNameFromVehicleModel;

	num = 1;

	if (func_95(&Global_1586542[iParam2 /*143*/]))
		num = num + 1;

	if (func_94(func_71(iParam2), Global_1586542[iParam2 /*143*/].f_77, Global_1586542[iParam2 /*143*/].f_9[10]) && func_93(func_71(iParam2)))
		num = num + 1;

	unk7 = { func_72(-1, iParam3, true) };
	num2 = 0;

	if (!func_92(iParam1))
	{
		num3 = func_184(iParam1, -1);
	
		if (num3 >= 0 && num3 <= 131)
			num2 = Global_1312333[num3 /*1951*/].f_33;
	}

	if (IS_BIT_SET(Global_1586542[iParam2 /*143*/].f_104, 1))
	{
		if (IS_BIT_SET(Global_1586542[iParam2 /*143*/].f_104, 2))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_PVNAMEDES", 24);
			TEXT_LABEL_APPEND_INT(&unk, num, 24);
			func_48(iParam0, &unk, num, bParam5, 0, false, 0);
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_PVNAMESCR", 24);
			TEXT_LABEL_APPEND_INT(&unk, num, 24);
			func_48(iParam0, &unk, num, bParam5, 0, false, 0);
		}
	}
	else if (func_90(iParam2))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_PVNAMEIMP", 24);
		TEXT_LABEL_APPEND_INT(&unk, num, 24);
		func_48(iParam0, &unk, num, bParam5, 0, false, 0);
	}
	else if (iParam1 < 33 && iParam4 >= num2 && !func_163(iParam3) && iParam1 != 13 && iParam1 != 14 && iParam1 != 15 && iParam1 != 16 && iParam1 != 17 && iParam1 != 18 && iParam1 != 19 && iParam1 != 20 && iParam1 != 21 && iParam1 != 22 && iParam1 != 25 && iParam1 != 26 && iParam1 != 29 && iParam1 != 30 && iParam1 != 31 && iParam1 != 32)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_PVNAMESTO", 24);
		TEXT_LABEL_APPEND_INT(&unk, num, 24);
		func_48(iParam0, &unk, num, bParam5, 0, false, 0);
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_PVNAME", 24);
		TEXT_LABEL_APPEND_INT(&unk, num, 24);
		func_48(iParam0, &unk, num, bParam5, 0, false, 0);
	}

	displayNameFromVehicleModel = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_71(iParam2));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk7))
		func_89(&unk7, false, false, false);
	else
		func_86(displayNameFromVehicleModel, false);

	if (func_95(&Global_1586542[iParam2 /*143*/]))
		func_86("VEH_LIVERY" /*(Livery)*/, false);

	if (func_94(func_71(iParam2), Global_1586542[iParam2 /*143*/].f_77, Global_1586542[iParam2 /*143*/].f_9[10]) && func_93(func_71(iParam2)))
		func_86("VEH_TOPL" /*Topless*/, false);

	return;
}

void func_86(const char* sParam0, BOOL bParam1) // Position - 0x682D (26669)
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_23987.f_5823 >= 256)
		return;

	if (Global_23987.f_6346 >= 4)
		return;

	if (Global_23987.f_6347 != 1)
		return;

	if (Global_23987.f_6346 >= Global_23987.f_6344)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_79[Global_23987.f_5823 /*6*/], sParam0, 24);
	Global_23987.f_5823 = Global_23987.f_5823 + 1;
	Global_23987.f_2387[Global_23987.f_6345 /*5*/][Global_23987.f_6346] = 1;
	Global_23987.f_6346 = Global_23987.f_6346 + 1;

	if (Global_23987.f_6346 >= Global_23987.f_6344)
	{
		num = func_88();
	
		if (Global_23987.f_5678[Global_23987.f_5822] && Global_23987.f_6346 == Global_23987.f_6344)
		{
			func_54(26, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_23987.f_5671[Global_23987.f_5822 - 1])
			Global_23987.f_5671[Global_23987.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_23987.f_6346 >= Global_23987.f_6344)
		{
			num3 = func_87();
		
			if (num3 > Global_23987.f_6348[Global_23987.f_5821])
				Global_23987.f_6348[Global_23987.f_5821] = num3;
		}
	}

	return;
}

float func_87() // Position - 0x6969 (26985)
{
	int i;
	int num;
	float num2;
	var unk;
	float num3;

	for (i = 0; i < Global_23987.f_6346; i = i + 1)
	{
		if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 4)
			num = num + 1;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_23987.f_4984[(Global_23987.f_5827 - num) + i] != 0)
			if (func_54(Global_23987.f_4984[(Global_23987.f_5827 - num) + i], true, false, &unk, &num3, false))
				if (num3 > num2)
					num2 = num3;
	}

	if (num2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
		return num2;

	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_88() // Position - 0x6A1C (27164)
{
	float num;
	var unk;
	var unk2;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	int num6;
	int num7;
	int num8;
	int num9;

	for (i = 0; i < Global_23987.f_6346; i = i + 1)
	{
		if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 1)
		{
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 8)
		{
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 2)
		{
			num2 = num2 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 3)
		{
			num3 = num3 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 4)
		{
			num4 = num4 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 5)
		{
			num5 = num5 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 6)
		{
			num5 = num5 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 7)
		{
			num5 = num5 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 9)
		{
			num5 = num5 + 1;
		}
	}

	func_24(false, true, false, false, 0, num5 > 0, false);

	if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23987.f_79[Global_23987.f_6345 /*6*/]);

	for (i = 0; i < Global_23987.f_6346; i = i + 1)
	{
		if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 1)
		{
			num6 = num6 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[Global_23987.f_6345 + num6 /*6*/]);
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 8)
		{
			num6 = num6 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[Global_23987.f_6345 + num6 /*6*/]);
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 2)
		{
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_4469[(Global_23987.f_5825 - num2) + num7]);
		
			num7 = num7 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 3)
		{
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_4726[(Global_23987.f_5826 - num3) + num8], Global_23987.f_4855[(Global_23987.f_5826 - num3) + num8]);
		
			num8 = num8 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 5)
		{
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[(Global_23987.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 6)
		{
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696988[(Global_23987.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 7)
		{
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[(Global_23987.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_23987.f_2387[Global_23987.f_6345 /*5*/][i] == 9)
		{
			if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[(Global_23987.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
	}

	if (MISC::GET_HASH_KEY(&Global_23987.f_79[Global_23987.f_6345 /*6*/]) != 0)
		num = func_21(true);

	for (i = 0; i < num4; i = i + 1)
	{
		if (Global_23987.f_4984[(Global_23987.f_5827 - num4) + i] != 0)
		{
			func_54(Global_23987.f_4984[(Global_23987.f_5827 - num4) + i], true, false, &unk, &unk2, false);
			num = num + unk;
		}
	}

	return num;
}

void func_89(char* sParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6E63 (28259)
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_23987.f_5824 >= 50)
		return;

	if (Global_23987.f_6346 >= 4)
		return;

	if (Global_23987.f_6347 != 1)
		return;

	if (Global_23987.f_6346 >= Global_23987.f_6344)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_2696988[Global_23987.f_5824 /*16*/], sParam0, 64);
	Global_23987.f_5824 = Global_23987.f_5824 + 1;

	if (bParam3)
		Global_23987.f_2387[Global_23987.f_6345 /*5*/][Global_23987.f_6346] = 9;
	else
		Global_23987.f_2387[Global_23987.f_6345 /*5*/][Global_23987.f_6346] = 7;

	Global_23987.f_6346 = Global_23987.f_6346 + 1;
	bParam2;

	if (Global_23987.f_6346 >= Global_23987.f_6344)
	{
		num = func_88();
	
		if (Global_23987.f_5678[Global_23987.f_5822] && Global_23987.f_6346 == Global_23987.f_6344)
		{
			func_54(26, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_23987.f_5671[Global_23987.f_5822 - 1])
			Global_23987.f_5671[Global_23987.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_23987.f_6346 >= Global_23987.f_6344)
		{
			num3 = func_87();
		
			if (num3 > Global_23987.f_6348[Global_23987.f_5821])
				Global_23987.f_6348[Global_23987.f_5821] = num3;
		}
	}

	return;
}

BOOL func_90(int iParam0) // Position - 0x6FC2 (28610)
{
	if (func_91(iParam0))
		return IS_BIT_SET(Global_1586542[iParam0 /*143*/].f_104, 6);

	return false;
}

BOOL func_91(int iParam0) // Position - 0x6FE6 (28646)
{
	int num;

	func_76(iParam0, &num);

	if (iParam0 >= 0 && iParam0 <= 547 && !func_163(num))
		return true;

	return false;
}

BOOL func_92(int iParam0) // Position - 0x7019 (28697)
{
	if (iParam0 >= 1000 && iParam0 < 1004)
		return true;

	return false;
}

int func_93(Hash hParam0) // Position - 0x703A (28730)
{
	switch (hParam0)
	{
		case joaat("faction3"):
		case joaat("contender"):
			return 0;
	}

	return 1;
}

int func_94(Hash hParam0, int iParam1, int iParam2) // Position - 0x705D (28765)
{
	switch (hParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!IS_BIT_SET(iParam1, 1))
				return 1;
			break;
	
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!IS_BIT_SET(iParam1, 1))
				return 1;
			break;
	
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!IS_BIT_SET(iParam1, 1) && !IS_BIT_SET(iParam1, 2))
				return 1;
			break;
	
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if (!IS_BIT_SET(iParam1, 1) && !IS_BIT_SET(iParam1, 2) && !IS_BIT_SET(iParam1, 3))
				return 1;
			break;
	
		case joaat("coquette"):
			if (!IS_BIT_SET(iParam1, 1) && iParam2 != 1)
				return 1;
			break;
	
		case joaat("mamba"):
			if (!IS_BIT_SET(iParam1, 2))
				return 1;
			break;
	
		case joaat("pfister811"):
			if (!IS_BIT_SET(iParam1, 0) && iParam2 != 1)
				return 1;
			break;
	
		case joaat("contender"):
		case joaat("kamacho"):
		case -1958428933:
			if (!IS_BIT_SET(iParam1, 0))
				return 1;
			break;
	
		case joaat("manana2"):
			if (IS_BIT_SET(iParam1, 0))
				return 1;
			break;
	}

	return 0;
}

BOOL func_95(var uParam0) // Position - 0x71A7 (29095)
{
	switch (uParam0->f_66)
	{
		case joaat("windsor"):
			if (uParam0->f_67 > 0)
				return true;
			break;
	}

	return false;
}

void func_96(int iParam0, int iParam1, int iParam2) // Position - 0x71CE (29134)
{
	int num;

	func_76(iParam0, &num);

	if (num >= 0)
		func_133(num, -1, iParam2);

	func_120(iParam0, iParam1);
	func_117(&Global_1586542[iParam0 /*143*/]);
	Global_2359296[func_73() /*5571*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_97(iParam0, &Global_1586542[iParam0 /*143*/], false, iParam2, false, false);
	return;
}

int func_97(int iParam0, var uParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x722A (29226)
{
	int i;
	int num;
	int cloudTimeAsInt;

	if (bParam2)
	{
		!bParam4;
		Global_2359296[func_73() /*5571*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}

	!bParam4;
	num = func_116(1411, iParam0);
	func_115(num, uParam1->f_139, iParam3);
	!bParam4;
	num = func_116(1412, iParam0);
	func_115(num, uParam1->f_140, iParam3);
	!bParam4;

	if (func_114(iParam0))
	{
	}
	else
	{
		num = func_116(1413, iParam0);
		func_115(num, *uParam1, iParam3);
		!bParam4;
	
		for (i = 0; i < 49; i = i + 1)
		{
			if (i < 25)
			{
				num = func_116(1414, iParam0) + i;
				func_115(num, uParam1->f_9[i], iParam3);
			}
			else
			{
				num = func_113(iParam0) + (i - 25);
				func_115(num, uParam1->f_9[i], iParam3);
			}
		}
	
		i = 0;
	
		for (i = 0; i < 2; i = i + 1)
		{
			num = func_116(1439, iParam0) + i;
			func_115(num, uParam1->f_59[i], iParam3);
		}
	}

	num = func_116(1441, iParam0);
	func_115(num, uParam1->f_62, iParam3);
	!bParam4;
	num = func_116(1442, iParam0);
	func_115(num, uParam1->f_63, iParam3);
	!bParam4;
	num = func_116(1443, iParam0);
	func_115(num, uParam1->f_64, iParam3);
	!bParam4;

	if (func_114(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_116(1444, iParam0);
		func_115(num, uParam1->f_65, iParam3);
		!bParam4;
	}

	num = func_116(1445, iParam0);
	func_115(num, uParam1->f_67, iParam3);

	if (func_114(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_116(1446, iParam0);
		func_115(num, uParam1->f_68, iParam3);
	}

	num = func_116(1447, iParam0);
	func_115(num, uParam1->f_69, iParam3);
	!bParam4;
	num = func_116(1448, iParam0);
	func_115(num, uParam1->f_70, -1);
	num = func_116(1449, iParam0);
	func_115(num, uParam1->f_71, iParam3);
	num = func_116(1450, iParam0);
	func_115(num, uParam1->f_72, iParam3);
	num = func_116(1451, iParam0);
	func_115(num, uParam1->f_73, iParam3);
	num = func_116(1452, iParam0);
	func_115(num, uParam1->f_5, iParam3);
	num = func_116(1453, iParam0);
	func_115(num, uParam1->f_6, iParam3);
	num = func_116(1454, iParam0);
	func_115(num, uParam1->f_7, iParam3);
	num = func_116(1455, iParam0);
	func_115(num, uParam1->f_8, iParam3);

	if (func_114(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_116(3880, iParam0);
		func_115(num, uParam1->f_74, iParam3);
		num = func_116(3881, iParam0);
		func_115(num, uParam1->f_75, iParam3);
		num = func_116(3882, iParam0);
		func_115(num, uParam1->f_76, iParam3);
		num = func_112(iParam0);
		func_115(num, uParam1->f_97, iParam3);
		num = func_111(iParam0);
		func_115(num, uParam1->f_99, iParam3);
		num = func_110(iParam0);
		func_115(num, uParam1->f_98, iParam3);
		num = func_106(iParam0, false);
		func_115(num, uParam1->f_102, iParam3);
		num = func_105(iParam0);
		_STAT_SET_PACKED_BOOL(num, IS_BIT_SET(uParam1->f_103, 0), -1);
	}

	cloudTimeAsInt = Global_2359296[func_73() /*5571*/].f_681.f_1275;

	if (bParam5)
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	func_103(1629, cloudTimeAsInt, iParam3, true);
	!bParam4;
	func_103(func_101(1, iParam0), uParam1->f_104, iParam3, true);
	!bParam4;
	func_103(func_101(2, iParam0), uParam1->f_105, iParam3, true);
	!bParam4;
	func_103(func_101(3, iParam0), uParam1->f_106, iParam3, true);
	!bParam4;
	func_103(func_101(4, iParam0), uParam1->f_66, iParam3, true);
	func_103(func_101(5, iParam0), uParam1->f_77, iParam3, true);
	!bParam4;
	func_103(func_101(7, iParam0), uParam1->f_141, iParam3, true);

	if (!func_114(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_98(func_101(6, iParam0), &(uParam1->f_1), iParam3);
			!bParam4;
		}
		else
		{
			!bParam4;
		}
	}

	!bParam4;
	return 1;
}

void func_98(int iParam0, const char* sParam1, int iParam2) // Position - 0x768E (30350)
{
	Hash statName;

	statName = func_99(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_LICENSE_PLATE(statName, sParam1);

	return;
}

Hash func_99(int iParam0, int iParam1) // Position - 0x76AF (30383)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_100(iParam1));
}

int func_100(int iParam0) // Position - 0x76C4 (30404)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_32();
	
		if (num2 > -1)
		{
			Global_2752158 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752158 = 1;
		}
	}

	return num;
}

int func_101(int iParam0, int iParam1) // Position - 0x76F8 (30456)
{
	if (iParam1 >= 363)
	{
		return func_102(iParam0, iParam1);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return 1630;
				
					case 1:
						return 1637;
				
					case 2:
						return 1644;
				
					case 3:
						return 1651;
				
					case 4:
						return 1658;
				
					case 5:
						return 1665;
				
					case 6:
						return 1672;
				
					case 7:
						return 1679;
				
					case 8:
						return 1686;
				
					case 9:
						return 1693;
				
					case 10:
						return 1700;
				
					case 11:
						return 1706;
				
					case 12:
						return 1712;
				
					case 13:
						return 1718;
				
					case 14:
						return 1797;
				
					case 15:
						return 1804;
				
					case 16:
						return 1811;
				
					case 17:
						return 1818;
				
					case 18:
						return 1825;
				
					case 19:
						return 1832;
				
					case 20:
						return 1839;
				
					case 21:
						return 1846;
				
					case 22:
						return 1853;
				
					case 23:
						return 1860;
				
					case 24:
						return 1866;
				
					case 25:
						return 1872;
				
					case 26:
						return 2167;
				
					case 27:
						return 2174;
				
					case 28:
						return 2181;
				
					case 29:
						return 2188;
				
					case 30:
						return 2195;
				
					case 31:
						return 2202;
				
					case 32:
						return 2209;
				
					case 33:
						return 2216;
				
					case 34:
						return 2223;
				
					case 35:
						return 2230;
				
					case 36:
						return 2237;
				
					case 37:
						return 2243;
				
					case 38:
						return 2249;
				
					case 39:
						return 2831;
				
					case 40:
						return 2838;
				
					case 41:
						return 2845;
				
					case 42:
						return 2852;
				
					case 43:
						return 2859;
				
					case 44:
						return 2866;
				
					case 45:
						return 2873;
				
					case 46:
						return 2880;
				
					case 47:
						return 2887;
				
					case 48:
						return 2894;
				
					case 49:
						return 2901;
				
					case 50:
						return 2907;
				
					case 51:
						return 2913;
				
					case 52:
						return 2955;
				
					case 53:
						return 2962;
				
					case 54:
						return 2969;
				
					case 55:
						return 2976;
				
					case 56:
						return 2983;
				
					case 57:
						return 2990;
				
					case 58:
						return 2997;
				
					case 59:
						return 3004;
				
					case 60:
						return 3011;
				
					case 61:
						return 3018;
				
					case 62:
						return 3025;
				
					case 63:
						return 3031;
				
					case 64:
						return 3037;
				
					case 65:
						return 3238;
				
					case 66:
						return 3246;
				
					case 67:
						return 3254;
				
					case 68:
						return 3262;
				
					case 69:
						return 3270;
				
					case 70:
						return 3278;
				
					case 71:
						return 3286;
				
					case 72:
						return 3294;
				
					case 73:
						return 3302;
				
					case 74:
						return 3310;
				
					case 75:
						return 3318;
				
					case 76:
						return 3326;
				
					case 77:
						return 3334;
				
					case 78:
						return 3342;
				
					case 79:
						return 3350;
				
					case 80:
						return 3358;
				
					case 81:
						return 3366;
				
					case 82:
						return 3374;
				
					case 83:
						return 3382;
				
					case 84:
						return 3390;
				
					case 85:
						return 3398;
				
					case 86:
						return 3405;
				
					case 87:
						return 3412;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4034;
				
					case 89:
						return 4042;
				
					case 90:
						return 4050;
				
					case 91:
						return 4058;
				
					case 92:
						return 4066;
				
					case 93:
						return 4074;
				
					case 94:
						return 4082;
				
					case 95:
						return 4090;
				
					case 96:
						return 4098;
				
					case 97:
						return 4106;
				
					case 98:
						return 4114;
				
					case 99:
						return 4122;
				
					case 100:
						return 4130;
				
					case 101:
						return 4138;
				
					case 102:
						return 4146;
				
					case 103:
						return 4154;
				
					case 104:
						return 4162;
				
					case 105:
						return 4170;
				
					case 106:
						return 4178;
				
					case 107:
						return 4186;
				
					case 108:
						return 4194;
				
					case 109:
						return 4202;
				
					case 110:
						return 4210;
				
					case 111:
						return 4218;
				
					case 112:
						return 4226;
				
					case 113:
						return 4234;
				
					case 114:
						return 4242;
				
					case 115:
						return 4250;
				
					case 116:
						return 4258;
				
					case 117:
						return 4266;
				
					case 118:
						return 4274;
				
					case 119:
						return 4282;
				
					case 120:
						return 4290;
				
					case 121:
						return 4298;
				
					case 122:
						return 4306;
				
					case 123:
						return 4314;
				
					case 124:
						return 4322;
				
					case 125:
						return 4330;
				
					case 126:
						return 4338;
				
					case 127:
						return 4346;
				
					case 128:
						return 4354;
				
					case 129:
						return 4362;
				
					case 130:
						return 4370;
				
					case 131:
						return 4378;
				
					case 132:
						return 4386;
				
					case 133:
						return 4394;
				
					case 134:
						return 4402;
				
					case 135:
						return 4410;
				
					case 136:
						return 4418;
				
					case 137:
						return 4426;
				
					case 138:
						return 4434;
				
					case 139:
						return 4442;
				
					case 140:
						return 4450;
				
					case 141:
						return 4458;
				
					case 142:
						return 4466;
				
					case 143:
						return 4474;
				
					case 144:
						return 4482;
				
					case 145:
						return 4490;
				
					case 146:
						return 4498;
				
					case 147:
						return 4506;
				
					case 148:
						return 4514;
				
					case 149:
						return 4522;
				
					case 150:
						return 4530;
				
					case 151:
						return 4538;
				
					case 152:
						return 4546;
				
					case 153:
						return 4554;
				
					case 154:
						return 4562;
				
					case 155:
						return 4570;
				
					case 156:
						return 4578;
				
					case 157:
						return 4586;
				
					case 158:
						return 5479;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5928;
				
					case 160:
						return 5935;
				
					case 161:
						return 5942;
				
					case 162:
						return 5949;
				
					case 163:
						return 5956;
				
					case 164:
						return 5963;
				
					case 165:
						return 5970;
				
					case 166:
						return 5977;
				
					case 167:
						return 5984;
				
					case 168:
						return 5991;
				
					case 169:
						return 5998;
				
					case 170:
						return 6005;
				
					case 171:
						return 6012;
				
					case 172:
						return 6019;
				
					case 173:
						return 6026;
				
					case 174:
						return 6033;
				
					case 175:
						return 6040;
				
					case 176:
						return 6047;
				
					case 177:
						return 6054;
				
					case 178:
						return 6061;
				
					case 179:
						return 6068;
				
					case 180:
						return 6075;
				
					case 181:
						return 6082;
				
					case 182:
						return 6089;
				
					case 183:
						return 6096;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6173;
				
					case 185:
						return 6180;
				
					case 186:
						return 6187;
				
					case 187:
						return 6194;
				
					case 188:
						return 6201;
				
					case 189:
						return 6208;
				
					case 190:
						return 6215;
				
					case 191:
						return 6222;
				
					case 192:
						return 6229;
				
					case 193:
						return 6236;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6570;
				
					case 195:
						return 6577;
				
					case 196:
						return 6584;
				
					case 197:
						return 6591;
				
					case 198:
						return 6598;
				
					case 199:
						return 6605;
				
					case 200:
						return 6612;
				
					case 201:
						return 6619;
				
					case 202:
						return 6626;
				
					case 203:
						return 6633;
				
					case 204:
						return 6640;
				
					case 205:
						return 6647;
				
					case 206:
						return 6654;
				
					case 207:
						return 6661;
				
					case 208:
						return 6668;
				
					case 209:
						return 6675;
				
					case 210:
						return 6682;
				
					case 211:
						return 6689;
				
					case 212:
						return 6696;
				
					case 213:
						return 6703;
				
					case 214:
						return 6710;
				
					case 215:
						return 6717;
				
					case 216:
						return 6724;
				
					case 217:
						return 6731;
				
					case 218:
						return 6738;
				
					case 219:
						return 6745;
				
					case 220:
						return 6752;
				
					case 221:
						return 6759;
				
					case 222:
						return 6766;
				
					case 223:
						return 6773;
				
					case 224:
						return 6780;
				
					case 225:
						return 6787;
				
					case 226:
						return 6794;
				
					case 227:
						return 6801;
				
					case 228:
						return 6808;
				
					case 229:
						return 6815;
				
					case 230:
						return 6822;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7292;
				
					case 232:
						return 7299;
				
					case 233:
						return 7306;
				
					case 234:
						return 7313;
				
					case 235:
						return 7320;
				
					case 236:
						return 7327;
				
					case 237:
						return 7334;
				
					case 238:
						return 7341;
				
					case 239:
						return 7348;
				
					case 240:
						return 7355;
				
					case 241:
						return 7362;
				
					case 242:
						return 7369;
				
					case 243:
						return 7376;
				
					case 244:
						return 7383;
				
					case 245:
						return 7390;
				
					case 246:
						return 7397;
				
					case 247:
						return 7404;
				
					case 248:
						return 7411;
				
					case 249:
						return 7418;
				
					case 250:
						return 7425;
				
					case 251:
						return 7432;
				
					case 252:
						return 7439;
				
					case 253:
						return 7446;
				
					case 254:
						return 7453;
				
					case 255:
						return 7460;
				
					case 256:
						return 7467;
				
					case 257:
						return 7474;
				
					case 258:
						return 7481;
				
					case 259:
						return 7488;
				
					case 260:
						return 7495;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8015;
				
					case 262:
						return 8022;
				
					case 263:
						return 8029;
				
					case 264:
						return 8036;
				
					case 265:
						return 8043;
				
					case 266:
						return 8050;
				
					case 267:
						return 8057;
				
					case 268:
						return 8064;
				
					case 269:
						return 8071;
				
					case 270:
						return 8078;
				
					case 271:
						return 8539;
				
					case 272:
						return 8546;
				
					case 273:
						return 8553;
				
					case 274:
						return 8560;
				
					case 275:
						return 8567;
				
					case 276:
						return 8574;
				
					case 277:
						return 8581;
				
					case 278:
						return 8588;
				
					case 279:
						return 8595;
				
					case 280:
						return 8602;
				
					case 281:
						return 8986;
				
					case 282:
						return 8993;
				
					case 283:
						return 9000;
				
					case 284:
						return 9007;
				
					case 285:
						return 9014;
				
					case 286:
						return 9021;
				
					case 287:
						return 9028;
				
					case 288:
						return 9035;
				
					case 289:
						return 9042;
				
					case 290:
						return 9049;
				
					case 291:
						return 9056;
				
					case 292:
						return 9062;
				
					case 293:
						return 9068;
				
					case 294:
						return 9074;
				
					case 295:
						return 9081;
				
					case 296:
						return 9088;
				
					case 297:
						return 9095;
				
					case 298:
						return 9102;
				
					case 299:
						return 9109;
				
					case 300:
						return 9116;
				
					case 301:
						return 9123;
				
					case 302:
						return 9130;
				
					case 303:
						return 9137;
				
					case 304:
						return 9144;
				
					case 305:
						return 9150;
				
					case 306:
						return 9156;
				
					case 307:
						return 9637;
				
					case 308:
						return 9644;
				
					case 309:
						return 9651;
				
					case 310:
						return 9658;
				
					case 311:
						return 9665;
				
					case 312:
						return 9672;
				
					case 313:
						return 9679;
				
					case 314:
						return 9686;
				
					case 315:
						return 9693;
				
					case 316:
						return 9700;
				
					case 317:
						return 9922;
				
					case 318:
						return 9929;
				
					case 319:
						return 9936;
				
					case 320:
						return 9943;
				
					case 321:
						return 9950;
				
					case 322:
						return 9957;
				
					case 323:
						return 9964;
				
					case 324:
						return 9971;
				
					case 325:
						return 9978;
				
					case 326:
						return 9985;
				
					case 327:
						return 9992;
				
					case 328:
						return 9999;
				
					case 329:
						return 10006;
				
					case 330:
						return 10013;
				
					case 331:
						return 10020;
				
					case 332:
						return 10027;
				
					case 333:
						return 10034;
				
					case 334:
						return 10041;
				
					case 335:
						return 10048;
				
					case 336:
						return 10055;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10448;
				
					case 338:
						return 10455;
				
					case 339:
						return 10462;
				
					case 340:
						return 10469;
				
					case 341:
						return 10476;
				
					case 342:
						return 10483;
				
					case 343:
						return 10490;
				
					case 344:
						return 10497;
				
					case 345:
						return 10504;
				
					case 346:
						return 10511;
				
					case 347:
						return 10518;
				
					case 348:
						return 10524;
				
					case 349:
						return 10530;
				
					case 350:
						return 10536;
				
					case 351:
						return 10543;
				
					case 352:
						return 10550;
				
					case 353:
						return 10557;
				
					case 354:
						return 10564;
				
					case 355:
						return 10571;
				
					case 356:
						return 10578;
				
					case 357:
						return 10585;
				
					case 358:
						return 10592;
				
					case 359:
						return 10599;
				
					case 360:
						return 10606;
				
					case 361:
						return 10612;
				
					case 362:
						return 10618;
				
					default:
						break;
				}
				break;
		
			case 2:
				switch (iParam1)
				{
					case 0:
						return 1631;
				
					case 1:
						return 1638;
				
					case 2:
						return 1645;
				
					case 3:
						return 1652;
				
					case 4:
						return 1659;
				
					case 5:
						return 1666;
				
					case 6:
						return 1673;
				
					case 7:
						return 1680;
				
					case 8:
						return 1687;
				
					case 9:
						return 1694;
				
					case 10:
						return 1701;
				
					case 11:
						return 1707;
				
					case 12:
						return 1713;
				
					case 13:
						return 1719;
				
					case 14:
						return 1798;
				
					case 15:
						return 1805;
				
					case 16:
						return 1812;
				
					case 17:
						return 1819;
				
					case 18:
						return 1826;
				
					case 19:
						return 1833;
				
					case 20:
						return 1840;
				
					case 21:
						return 1847;
				
					case 22:
						return 1854;
				
					case 23:
						return 1861;
				
					case 24:
						return 1867;
				
					case 25:
						return 1873;
				
					case 26:
						return 2168;
				
					case 27:
						return 2175;
				
					case 28:
						return 2182;
				
					case 29:
						return 2189;
				
					case 30:
						return 2196;
				
					case 31:
						return 2203;
				
					case 32:
						return 2210;
				
					case 33:
						return 2217;
				
					case 34:
						return 2224;
				
					case 35:
						return 2231;
				
					case 36:
						return 2238;
				
					case 37:
						return 2244;
				
					case 38:
						return 2250;
				
					case 39:
						return 2832;
				
					case 40:
						return 2839;
				
					case 41:
						return 2846;
				
					case 42:
						return 2853;
				
					case 43:
						return 2860;
				
					case 44:
						return 2867;
				
					case 45:
						return 2874;
				
					case 46:
						return 2881;
				
					case 47:
						return 2888;
				
					case 48:
						return 2895;
				
					case 49:
						return 2902;
				
					case 50:
						return 2908;
				
					case 51:
						return 2914;
				
					case 52:
						return 2956;
				
					case 53:
						return 2963;
				
					case 54:
						return 2970;
				
					case 55:
						return 2977;
				
					case 56:
						return 2984;
				
					case 57:
						return 2991;
				
					case 58:
						return 2998;
				
					case 59:
						return 3005;
				
					case 60:
						return 3012;
				
					case 61:
						return 3019;
				
					case 62:
						return 3026;
				
					case 63:
						return 3032;
				
					case 64:
						return 3038;
				
					case 65:
						return 3239;
				
					case 66:
						return 3247;
				
					case 67:
						return 3255;
				
					case 68:
						return 3263;
				
					case 69:
						return 3271;
				
					case 70:
						return 3279;
				
					case 71:
						return 3287;
				
					case 72:
						return 3295;
				
					case 73:
						return 3303;
				
					case 74:
						return 3311;
				
					case 75:
						return 3319;
				
					case 76:
						return 3327;
				
					case 77:
						return 3335;
				
					case 78:
						return 3343;
				
					case 79:
						return 3351;
				
					case 80:
						return 3359;
				
					case 81:
						return 3367;
				
					case 82:
						return 3375;
				
					case 83:
						return 3383;
				
					case 84:
						return 3391;
				
					case 85:
						return 3399;
				
					case 86:
						return 3406;
				
					case 87:
						return 3413;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4035;
				
					case 89:
						return 4043;
				
					case 90:
						return 4051;
				
					case 91:
						return 4059;
				
					case 92:
						return 4067;
				
					case 93:
						return 4075;
				
					case 94:
						return 4083;
				
					case 95:
						return 4091;
				
					case 96:
						return 4099;
				
					case 97:
						return 4107;
				
					case 98:
						return 4115;
				
					case 99:
						return 4123;
				
					case 100:
						return 4131;
				
					case 101:
						return 4139;
				
					case 102:
						return 4147;
				
					case 103:
						return 4155;
				
					case 104:
						return 4163;
				
					case 105:
						return 4171;
				
					case 106:
						return 4179;
				
					case 107:
						return 4187;
				
					case 108:
						return 4195;
				
					case 109:
						return 4203;
				
					case 110:
						return 4211;
				
					case 111:
						return 4219;
				
					case 112:
						return 4227;
				
					case 113:
						return 4235;
				
					case 114:
						return 4243;
				
					case 115:
						return 4251;
				
					case 116:
						return 4259;
				
					case 117:
						return 4267;
				
					case 118:
						return 4275;
				
					case 119:
						return 4283;
				
					case 120:
						return 4291;
				
					case 121:
						return 4299;
				
					case 122:
						return 4307;
				
					case 123:
						return 4315;
				
					case 124:
						return 4323;
				
					case 125:
						return 4331;
				
					case 126:
						return 4339;
				
					case 127:
						return 4347;
				
					case 128:
						return 4355;
				
					case 129:
						return 4363;
				
					case 130:
						return 4371;
				
					case 131:
						return 4379;
				
					case 132:
						return 4387;
				
					case 133:
						return 4395;
				
					case 134:
						return 4403;
				
					case 135:
						return 4411;
				
					case 136:
						return 4419;
				
					case 137:
						return 4427;
				
					case 138:
						return 4435;
				
					case 139:
						return 4443;
				
					case 140:
						return 4451;
				
					case 141:
						return 4459;
				
					case 142:
						return 4467;
				
					case 143:
						return 4475;
				
					case 144:
						return 4483;
				
					case 145:
						return 4491;
				
					case 146:
						return 4499;
				
					case 147:
						return 4507;
				
					case 148:
						return 4515;
				
					case 149:
						return 4523;
				
					case 150:
						return 4531;
				
					case 151:
						return 4539;
				
					case 152:
						return 4547;
				
					case 153:
						return 4555;
				
					case 154:
						return 4563;
				
					case 155:
						return 4571;
				
					case 156:
						return 4579;
				
					case 157:
						return 4587;
				
					case 158:
						return 5480;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5929;
				
					case 160:
						return 5936;
				
					case 161:
						return 5943;
				
					case 162:
						return 5950;
				
					case 163:
						return 5957;
				
					case 164:
						return 5964;
				
					case 165:
						return 5971;
				
					case 166:
						return 5978;
				
					case 167:
						return 5985;
				
					case 168:
						return 5992;
				
					case 169:
						return 5999;
				
					case 170:
						return 6006;
				
					case 171:
						return 6013;
				
					case 172:
						return 6020;
				
					case 173:
						return 6027;
				
					case 174:
						return 6034;
				
					case 175:
						return 6041;
				
					case 176:
						return 6048;
				
					case 177:
						return 6055;
				
					case 178:
						return 6062;
				
					case 179:
						return 6069;
				
					case 180:
						return 6076;
				
					case 181:
						return 6083;
				
					case 182:
						return 6090;
				
					case 183:
						return 6097;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6174;
				
					case 185:
						return 6181;
				
					case 186:
						return 6188;
				
					case 187:
						return 6195;
				
					case 188:
						return 6202;
				
					case 189:
						return 6209;
				
					case 190:
						return 6216;
				
					case 191:
						return 6223;
				
					case 192:
						return 6230;
				
					case 193:
						return 6237;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6571;
				
					case 195:
						return 6578;
				
					case 196:
						return 6585;
				
					case 197:
						return 6592;
				
					case 198:
						return 6599;
				
					case 199:
						return 6606;
				
					case 200:
						return 6613;
				
					case 201:
						return 6620;
				
					case 202:
						return 6627;
				
					case 203:
						return 6634;
				
					case 204:
						return 6641;
				
					case 205:
						return 6648;
				
					case 206:
						return 6655;
				
					case 207:
						return 6662;
				
					case 208:
						return 6669;
				
					case 209:
						return 6676;
				
					case 210:
						return 6683;
				
					case 211:
						return 6690;
				
					case 212:
						return 6697;
				
					case 213:
						return 6704;
				
					case 214:
						return 6711;
				
					case 215:
						return 6718;
				
					case 216:
						return 6725;
				
					case 217:
						return 6732;
				
					case 218:
						return 6739;
				
					case 219:
						return 6746;
				
					case 220:
						return 6753;
				
					case 221:
						return 6760;
				
					case 222:
						return 6767;
				
					case 223:
						return 6774;
				
					case 224:
						return 6781;
				
					case 225:
						return 6788;
				
					case 226:
						return 6795;
				
					case 227:
						return 6802;
				
					case 228:
						return 6809;
				
					case 229:
						return 6816;
				
					case 230:
						return 6823;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7293;
				
					case 232:
						return 7300;
				
					case 233:
						return 7307;
				
					case 234:
						return 7314;
				
					case 235:
						return 7321;
				
					case 236:
						return 7328;
				
					case 237:
						return 7335;
				
					case 238:
						return 7342;
				
					case 239:
						return 7349;
				
					case 240:
						return 7356;
				
					case 241:
						return 7363;
				
					case 242:
						return 7370;
				
					case 243:
						return 7377;
				
					case 244:
						return 7384;
				
					case 245:
						return 7391;
				
					case 246:
						return 7398;
				
					case 247:
						return 7405;
				
					case 248:
						return 7412;
				
					case 249:
						return 7419;
				
					case 250:
						return 7426;
				
					case 251:
						return 7433;
				
					case 252:
						return 7440;
				
					case 253:
						return 7447;
				
					case 254:
						return 7454;
				
					case 255:
						return 7461;
				
					case 256:
						return 7468;
				
					case 257:
						return 7475;
				
					case 258:
						return 7482;
				
					case 259:
						return 7489;
				
					case 260:
						return 7496;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8016;
				
					case 262:
						return 8023;
				
					case 263:
						return 8030;
				
					case 264:
						return 8037;
				
					case 265:
						return 8044;
				
					case 266:
						return 8051;
				
					case 267:
						return 8058;
				
					case 268:
						return 8065;
				
					case 269:
						return 8072;
				
					case 270:
						return 8079;
				
					case 271:
						return 8540;
				
					case 272:
						return 8547;
				
					case 273:
						return 8554;
				
					case 274:
						return 8561;
				
					case 275:
						return 8568;
				
					case 276:
						return 8575;
				
					case 277:
						return 8582;
				
					case 278:
						return 8589;
				
					case 279:
						return 8596;
				
					case 280:
						return 8603;
				
					case 281:
						return 8987;
				
					case 282:
						return 8994;
				
					case 283:
						return 9001;
				
					case 284:
						return 9008;
				
					case 285:
						return 9015;
				
					case 286:
						return 9022;
				
					case 287:
						return 9029;
				
					case 288:
						return 9036;
				
					case 289:
						return 9043;
				
					case 290:
						return 9050;
				
					case 291:
						return 9057;
				
					case 292:
						return 9063;
				
					case 293:
						return 9069;
				
					case 294:
						return 9075;
				
					case 295:
						return 9082;
				
					case 296:
						return 9089;
				
					case 297:
						return 9096;
				
					case 298:
						return 9103;
				
					case 299:
						return 9110;
				
					case 300:
						return 9117;
				
					case 301:
						return 9124;
				
					case 302:
						return 9131;
				
					case 303:
						return 9138;
				
					case 304:
						return 9145;
				
					case 305:
						return 9151;
				
					case 306:
						return 9157;
				
					case 307:
						return 9638;
				
					case 308:
						return 9645;
				
					case 309:
						return 9652;
				
					case 310:
						return 9659;
				
					case 311:
						return 9666;
				
					case 312:
						return 9673;
				
					case 313:
						return 9680;
				
					case 314:
						return 9687;
				
					case 315:
						return 9694;
				
					case 316:
						return 9701;
				
					case 317:
						return 9923;
				
					case 318:
						return 9930;
				
					case 319:
						return 9937;
				
					case 320:
						return 9944;
				
					case 321:
						return 9951;
				
					case 322:
						return 9958;
				
					case 323:
						return 9965;
				
					case 324:
						return 9972;
				
					case 325:
						return 9979;
				
					case 326:
						return 9986;
				
					case 327:
						return 9993;
				
					case 328:
						return 10000;
				
					case 329:
						return 10007;
				
					case 330:
						return 10014;
				
					case 331:
						return 10021;
				
					case 332:
						return 10028;
				
					case 333:
						return 10035;
				
					case 334:
						return 10042;
				
					case 335:
						return 10049;
				
					case 336:
						return 10056;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10449;
				
					case 338:
						return 10456;
				
					case 339:
						return 10463;
				
					case 340:
						return 10470;
				
					case 341:
						return 10477;
				
					case 342:
						return 10484;
				
					case 343:
						return 10491;
				
					case 344:
						return 10498;
				
					case 345:
						return 10505;
				
					case 346:
						return 10512;
				
					case 347:
						return 10519;
				
					case 348:
						return 10525;
				
					case 349:
						return 10531;
				
					case 350:
						return 10537;
				
					case 351:
						return 10544;
				
					case 352:
						return 10551;
				
					case 353:
						return 10558;
				
					case 354:
						return 10565;
				
					case 355:
						return 10572;
				
					case 356:
						return 10579;
				
					case 357:
						return 10586;
				
					case 358:
						return 10593;
				
					case 359:
						return 10600;
				
					case 360:
						return 10607;
				
					case 361:
						return 10613;
				
					case 362:
						return 10619;
				
					default:
						break;
				}
				break;
		
			case 3:
				switch (iParam1)
				{
					case 0:
						return 1632;
				
					case 1:
						return 1639;
				
					case 2:
						return 1646;
				
					case 3:
						return 1653;
				
					case 4:
						return 1660;
				
					case 5:
						return 1667;
				
					case 6:
						return 1674;
				
					case 7:
						return 1681;
				
					case 8:
						return 1688;
				
					case 9:
						return 1695;
				
					case 10:
						return 1702;
				
					case 11:
						return 1708;
				
					case 12:
						return 1714;
				
					case 13:
						return 1720;
				
					case 14:
						return 1799;
				
					case 15:
						return 1806;
				
					case 16:
						return 1813;
				
					case 17:
						return 1820;
				
					case 18:
						return 1827;
				
					case 19:
						return 1834;
				
					case 20:
						return 1841;
				
					case 21:
						return 1848;
				
					case 22:
						return 1855;
				
					case 23:
						return 1862;
				
					case 24:
						return 1868;
				
					case 25:
						return 1874;
				
					case 26:
						return 2169;
				
					case 27:
						return 2176;
				
					case 28:
						return 2183;
				
					case 29:
						return 2190;
				
					case 30:
						return 2197;
				
					case 31:
						return 2204;
				
					case 32:
						return 2211;
				
					case 33:
						return 2218;
				
					case 34:
						return 2225;
				
					case 35:
						return 2232;
				
					case 36:
						return 2239;
				
					case 37:
						return 2245;
				
					case 38:
						return 2251;
				
					case 39:
						return 2833;
				
					case 40:
						return 2840;
				
					case 41:
						return 2847;
				
					case 42:
						return 2854;
				
					case 43:
						return 2861;
				
					case 44:
						return 2868;
				
					case 45:
						return 2875;
				
					case 46:
						return 2882;
				
					case 47:
						return 2889;
				
					case 48:
						return 2896;
				
					case 49:
						return 2903;
				
					case 50:
						return 2909;
				
					case 51:
						return 2915;
				
					case 52:
						return 2957;
				
					case 53:
						return 2964;
				
					case 54:
						return 2971;
				
					case 55:
						return 2978;
				
					case 56:
						return 2985;
				
					case 57:
						return 2992;
				
					case 58:
						return 2999;
				
					case 59:
						return 3006;
				
					case 60:
						return 3013;
				
					case 61:
						return 3020;
				
					case 62:
						return 3027;
				
					case 63:
						return 3033;
				
					case 64:
						return 3039;
				
					case 65:
						return 3240;
				
					case 66:
						return 3248;
				
					case 67:
						return 3256;
				
					case 68:
						return 3264;
				
					case 69:
						return 3272;
				
					case 70:
						return 3280;
				
					case 71:
						return 3288;
				
					case 72:
						return 3296;
				
					case 73:
						return 3304;
				
					case 74:
						return 3312;
				
					case 75:
						return 3320;
				
					case 76:
						return 3328;
				
					case 77:
						return 3336;
				
					case 78:
						return 3344;
				
					case 79:
						return 3352;
				
					case 80:
						return 3360;
				
					case 81:
						return 3368;
				
					case 82:
						return 3376;
				
					case 83:
						return 3384;
				
					case 84:
						return 3392;
				
					case 85:
						return 3400;
				
					case 86:
						return 3407;
				
					case 87:
						return 3414;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4036;
				
					case 89:
						return 4044;
				
					case 90:
						return 4052;
				
					case 91:
						return 4060;
				
					case 92:
						return 4068;
				
					case 93:
						return 4076;
				
					case 94:
						return 4084;
				
					case 95:
						return 4092;
				
					case 96:
						return 4100;
				
					case 97:
						return 4108;
				
					case 98:
						return 4116;
				
					case 99:
						return 4124;
				
					case 100:
						return 4132;
				
					case 101:
						return 4140;
				
					case 102:
						return 4148;
				
					case 103:
						return 4156;
				
					case 104:
						return 4164;
				
					case 105:
						return 4172;
				
					case 106:
						return 4180;
				
					case 107:
						return 4188;
				
					case 108:
						return 4196;
				
					case 109:
						return 4204;
				
					case 110:
						return joaat("twi_01");
				
					case 111:
						return 4220;
				
					case 112:
						return 4228;
				
					case 113:
						return 4236;
				
					case 114:
						return 4244;
				
					case 115:
						return 4252;
				
					case 116:
						return 4260;
				
					case 117:
						return 4268;
				
					case 118:
						return 4276;
				
					case 119:
						return 4284;
				
					case 120:
						return 4292;
				
					case 121:
						return 4300;
				
					case 122:
						return 4308;
				
					case 123:
						return 4316;
				
					case 124:
						return 4324;
				
					case 125:
						return 4332;
				
					case 126:
						return 4340;
				
					case 127:
						return 4348;
				
					case 128:
						return 4356;
				
					case 129:
						return 4364;
				
					case 130:
						return 4372;
				
					case 131:
						return 4380;
				
					case 132:
						return 4388;
				
					case 133:
						return 4396;
				
					case 134:
						return 4404;
				
					case 135:
						return 4412;
				
					case 136:
						return 4420;
				
					case 137:
						return 4428;
				
					case 138:
						return 4436;
				
					case 139:
						return 4444;
				
					case 140:
						return 4452;
				
					case 141:
						return 4460;
				
					case 142:
						return 4468;
				
					case 143:
						return 4476;
				
					case 144:
						return 4484;
				
					case 145:
						return 4492;
				
					case 146:
						return 4500;
				
					case 147:
						return 4508;
				
					case 148:
						return 4516;
				
					case 149:
						return 4524;
				
					case 150:
						return 4532;
				
					case 151:
						return 4540;
				
					case 152:
						return 4548;
				
					case 153:
						return 4556;
				
					case 154:
						return 4564;
				
					case 155:
						return 4572;
				
					case 156:
						return 4580;
				
					case 157:
						return 4588;
				
					case 158:
						return 5481;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5930;
				
					case 160:
						return 5937;
				
					case 161:
						return 5944;
				
					case 162:
						return 5951;
				
					case 163:
						return 5958;
				
					case 164:
						return 5965;
				
					case 165:
						return 5972;
				
					case 166:
						return 5979;
				
					case 167:
						return 5986;
				
					case 168:
						return 5993;
				
					case 169:
						return 6000;
				
					case 170:
						return 6007;
				
					case 171:
						return 6014;
				
					case 172:
						return 6021;
				
					case 173:
						return 6028;
				
					case 174:
						return 6035;
				
					case 175:
						return 6042;
				
					case 176:
						return 6049;
				
					case 177:
						return 6056;
				
					case 178:
						return 6063;
				
					case 179:
						return 6070;
				
					case 180:
						return 6077;
				
					case 181:
						return 6084;
				
					case 182:
						return 6091;
				
					case 183:
						return 6098;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6175;
				
					case 185:
						return 6182;
				
					case 186:
						return 6189;
				
					case 187:
						return 6196;
				
					case 188:
						return 6203;
				
					case 189:
						return 6210;
				
					case 190:
						return 6217;
				
					case 191:
						return 6224;
				
					case 192:
						return 6231;
				
					case 193:
						return 6238;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6572;
				
					case 195:
						return 6579;
				
					case 196:
						return 6586;
				
					case 197:
						return 6593;
				
					case 198:
						return 6600;
				
					case 199:
						return 6607;
				
					case 200:
						return 6614;
				
					case 201:
						return 6621;
				
					case 202:
						return 6628;
				
					case 203:
						return 6635;
				
					case 204:
						return 6642;
				
					case 205:
						return 6649;
				
					case 206:
						return 6656;
				
					case 207:
						return 6663;
				
					case 208:
						return 6670;
				
					case 209:
						return 6677;
				
					case 210:
						return 6684;
				
					case 211:
						return 6691;
				
					case 212:
						return 6698;
				
					case 213:
						return 6705;
				
					case 214:
						return 6712;
				
					case 215:
						return 6719;
				
					case 216:
						return 6726;
				
					case 217:
						return 6733;
				
					case 218:
						return 6740;
				
					case 219:
						return 6747;
				
					case 220:
						return 6754;
				
					case 221:
						return 6761;
				
					case 222:
						return 6768;
				
					case 223:
						return 6775;
				
					case 224:
						return 6782;
				
					case 225:
						return 6789;
				
					case 226:
						return 6796;
				
					case 227:
						return 6803;
				
					case 228:
						return 6810;
				
					case 229:
						return 6817;
				
					case 230:
						return 6824;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7294;
				
					case 232:
						return 7301;
				
					case 233:
						return 7308;
				
					case 234:
						return 7315;
				
					case 235:
						return 7322;
				
					case 236:
						return 7329;
				
					case 237:
						return 7336;
				
					case 238:
						return 7343;
				
					case 239:
						return 7350;
				
					case 240:
						return 7357;
				
					case 241:
						return 7364;
				
					case 242:
						return 7371;
				
					case 243:
						return 7378;
				
					case 244:
						return 7385;
				
					case 245:
						return 7392;
				
					case 246:
						return 7399;
				
					case 247:
						return 7406;
				
					case 248:
						return 7413;
				
					case 249:
						return 7420;
				
					case 250:
						return 7427;
				
					case 251:
						return 7434;
				
					case 252:
						return 7441;
				
					case 253:
						return 7448;
				
					case 254:
						return 7455;
				
					case 255:
						return 7462;
				
					case 256:
						return 7469;
				
					case 257:
						return 7476;
				
					case 258:
						return 7483;
				
					case 259:
						return 7490;
				
					case 260:
						return 7497;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8017;
				
					case 262:
						return 8024;
				
					case 263:
						return 8031;
				
					case 264:
						return 8038;
				
					case 265:
						return 8045;
				
					case 266:
						return 8052;
				
					case 267:
						return 8059;
				
					case 268:
						return 8066;
				
					case 269:
						return 8073;
				
					case 270:
						return 8080;
				
					case 271:
						return 8541;
				
					case 272:
						return 8548;
				
					case 273:
						return 8555;
				
					case 274:
						return 8562;
				
					case 275:
						return 8569;
				
					case 276:
						return 8576;
				
					case 277:
						return 8583;
				
					case 278:
						return 8590;
				
					case 279:
						return 8597;
				
					case 280:
						return 8604;
				
					case 281:
						return 8988;
				
					case 282:
						return 8995;
				
					case 283:
						return 9002;
				
					case 284:
						return 9009;
				
					case 285:
						return 9016;
				
					case 286:
						return 9023;
				
					case 287:
						return 9030;
				
					case 288:
						return 9037;
				
					case 289:
						return 9044;
				
					case 290:
						return 9051;
				
					case 291:
						return 9058;
				
					case 292:
						return 9064;
				
					case 293:
						return 9070;
				
					case 294:
						return 9076;
				
					case 295:
						return 9083;
				
					case 296:
						return 9090;
				
					case 297:
						return 9097;
				
					case 298:
						return 9104;
				
					case 299:
						return 9111;
				
					case 300:
						return 9118;
				
					case 301:
						return 9125;
				
					case 302:
						return 9132;
				
					case 303:
						return 9139;
				
					case 304:
						return 9146;
				
					case 305:
						return 9152;
				
					case 306:
						return 9158;
				
					case 307:
						return 9639;
				
					case 308:
						return 9646;
				
					case 309:
						return 9653;
				
					case 310:
						return 9660;
				
					case 311:
						return 9667;
				
					case 312:
						return 9674;
				
					case 313:
						return 9681;
				
					case 314:
						return 9688;
				
					case 315:
						return 9695;
				
					case 316:
						return 9702;
				
					case 317:
						return 9924;
				
					case 318:
						return 9931;
				
					case 319:
						return 9938;
				
					case 320:
						return 9945;
				
					case 321:
						return 9952;
				
					case 322:
						return 9959;
				
					case 323:
						return 9966;
				
					case 324:
						return 9973;
				
					case 325:
						return 9980;
				
					case 326:
						return 9987;
				
					case 327:
						return 9994;
				
					case 328:
						return 10001;
				
					case 329:
						return 10008;
				
					case 330:
						return 10015;
				
					case 331:
						return 10022;
				
					case 332:
						return 10029;
				
					case 333:
						return 10036;
				
					case 334:
						return 10043;
				
					case 335:
						return 10050;
				
					case 336:
						return 10057;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10450;
				
					case 338:
						return 10457;
				
					case 339:
						return 10464;
				
					case 340:
						return 10471;
				
					case 341:
						return 10478;
				
					case 342:
						return 10485;
				
					case 343:
						return 10492;
				
					case 344:
						return 10499;
				
					case 345:
						return 10506;
				
					case 346:
						return 10513;
				
					case 347:
						return 10520;
				
					case 348:
						return 10526;
				
					case 349:
						return 10532;
				
					case 350:
						return 10538;
				
					case 351:
						return 10545;
				
					case 352:
						return 10552;
				
					case 353:
						return 10559;
				
					case 354:
						return 10566;
				
					case 355:
						return 10573;
				
					case 356:
						return 10580;
				
					case 357:
						return 10587;
				
					case 358:
						return 10594;
				
					case 359:
						return 10601;
				
					case 360:
						return 10608;
				
					case 361:
						return 10614;
				
					case 362:
						return 10620;
				
					default:
						break;
				}
				break;
		
			case 4:
				switch (iParam1)
				{
					case 0:
						return 1633;
				
					case 1:
						return 1640;
				
					case 2:
						return 1647;
				
					case 3:
						return 1654;
				
					case 4:
						return 1661;
				
					case 5:
						return 1668;
				
					case 6:
						return 1675;
				
					case 7:
						return 1682;
				
					case 8:
						return 1689;
				
					case 9:
						return 1696;
				
					case 10:
						return 1703;
				
					case 11:
						return 1709;
				
					case 12:
						return 1715;
				
					case 13:
						return 1721;
				
					case 14:
						return 1800;
				
					case 15:
						return 1807;
				
					case 16:
						return 1814;
				
					case 17:
						return 1821;
				
					case 18:
						return 1828;
				
					case 19:
						return 1835;
				
					case 20:
						return 1842;
				
					case 21:
						return 1849;
				
					case 22:
						return 1856;
				
					case 23:
						return 1863;
				
					case 24:
						return 1869;
				
					case 25:
						return 1875;
				
					case 26:
						return 2170;
				
					case 27:
						return 2177;
				
					case 28:
						return 2184;
				
					case 29:
						return 2191;
				
					case 30:
						return 2198;
				
					case 31:
						return 2205;
				
					case 32:
						return 2212;
				
					case 33:
						return 2219;
				
					case 34:
						return 2226;
				
					case 35:
						return 2233;
				
					case 36:
						return 2240;
				
					case 37:
						return 2246;
				
					case 38:
						return 2252;
				
					case 39:
						return 2834;
				
					case 40:
						return 2841;
				
					case 41:
						return 2848;
				
					case 42:
						return 2855;
				
					case 43:
						return 2862;
				
					case 44:
						return 2869;
				
					case 45:
						return 2876;
				
					case 46:
						return 2883;
				
					case 47:
						return 2890;
				
					case 48:
						return 2897;
				
					case 49:
						return 2904;
				
					case 50:
						return 2910;
				
					case 51:
						return 2916;
				
					case 52:
						return 2958;
				
					case 53:
						return 2965;
				
					case 54:
						return 2972;
				
					case 55:
						return 2979;
				
					case 56:
						return 2986;
				
					case 57:
						return 2993;
				
					case 58:
						return 3000;
				
					case 59:
						return 3007;
				
					case 60:
						return 3014;
				
					case 61:
						return 3021;
				
					case 62:
						return 3028;
				
					case 63:
						return 3034;
				
					case 64:
						return 3040;
				
					case 65:
						return 3241;
				
					case 66:
						return 3249;
				
					case 67:
						return 3257;
				
					case 68:
						return 3265;
				
					case 69:
						return 3273;
				
					case 70:
						return 3281;
				
					case 71:
						return 3289;
				
					case 72:
						return 3297;
				
					case 73:
						return 3305;
				
					case 74:
						return 3313;
				
					case 75:
						return 3321;
				
					case 76:
						return 3329;
				
					case 77:
						return 3337;
				
					case 78:
						return 3345;
				
					case 79:
						return 3353;
				
					case 80:
						return 3361;
				
					case 81:
						return 3369;
				
					case 82:
						return 3377;
				
					case 83:
						return 3385;
				
					case 84:
						return 3393;
				
					case 85:
						return 3401;
				
					case 86:
						return 3408;
				
					case 87:
						return 3415;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4037;
				
					case 89:
						return 4045;
				
					case 90:
						return 4053;
				
					case 91:
						return 4061;
				
					case 92:
						return 4069;
				
					case 93:
						return 4077;
				
					case 94:
						return 4085;
				
					case 95:
						return 4093;
				
					case 96:
						return 4101;
				
					case 97:
						return 4109;
				
					case 98:
						return 4117;
				
					case 99:
						return 4125;
				
					case 100:
						return 4133;
				
					case 101:
						return 4141;
				
					case 102:
						return 4149;
				
					case 103:
						return 4157;
				
					case 104:
						return 4165;
				
					case 105:
						return 4173;
				
					case 106:
						return 4181;
				
					case 107:
						return 4189;
				
					case 108:
						return 4197;
				
					case 109:
						return 4205;
				
					case 110:
						return 4213;
				
					case 111:
						return 4221;
				
					case 112:
						return 4229;
				
					case 113:
						return 4237;
				
					case 114:
						return 4245;
				
					case 115:
						return 4253;
				
					case 116:
						return 4261;
				
					case 117:
						return 4269;
				
					case 118:
						return 4277;
				
					case 119:
						return 4285;
				
					case 120:
						return 4293;
				
					case 121:
						return 4301;
				
					case 122:
						return 4309;
				
					case 123:
						return 4317;
				
					case 124:
						return 4325;
				
					case 125:
						return 4333;
				
					case 126:
						return 4341;
				
					case 127:
						return 4349;
				
					case 128:
						return 4357;
				
					case 129:
						return 4365;
				
					case 130:
						return 4373;
				
					case 131:
						return 4381;
				
					case 132:
						return 4389;
				
					case 133:
						return 4397;
				
					case 134:
						return 4405;
				
					case 135:
						return 4413;
				
					case 136:
						return 4421;
				
					case 137:
						return 4429;
				
					case 138:
						return 4437;
				
					case 139:
						return 4445;
				
					case 140:
						return 4453;
				
					case 141:
						return 4461;
				
					case 142:
						return 4469;
				
					case 143:
						return 4477;
				
					case 144:
						return 4485;
				
					case 145:
						return 4493;
				
					case 146:
						return 4501;
				
					case 147:
						return 4509;
				
					case 148:
						return 4517;
				
					case 149:
						return 4525;
				
					case 150:
						return 4533;
				
					case 151:
						return 4541;
				
					case 152:
						return 4549;
				
					case 153:
						return 4557;
				
					case 154:
						return 4565;
				
					case 155:
						return 4573;
				
					case 156:
						return 4581;
				
					case 157:
						return 4589;
				
					case 158:
						return 5482;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5931;
				
					case 160:
						return 5938;
				
					case 161:
						return 5945;
				
					case 162:
						return 5952;
				
					case 163:
						return 5959;
				
					case 164:
						return 5966;
				
					case 165:
						return 5973;
				
					case 166:
						return 5980;
				
					case 167:
						return 5987;
				
					case 168:
						return 5994;
				
					case 169:
						return 6001;
				
					case 170:
						return 6008;
				
					case 171:
						return 6015;
				
					case 172:
						return 6022;
				
					case 173:
						return 6029;
				
					case 174:
						return 6036;
				
					case 175:
						return 6043;
				
					case 176:
						return 6050;
				
					case 177:
						return 6057;
				
					case 178:
						return 6064;
				
					case 179:
						return 6071;
				
					case 180:
						return 6078;
				
					case 181:
						return 6085;
				
					case 182:
						return 6092;
				
					case 183:
						return 6099;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6176;
				
					case 185:
						return 6183;
				
					case 186:
						return 6190;
				
					case 187:
						return 6197;
				
					case 188:
						return 6204;
				
					case 189:
						return 6211;
				
					case 190:
						return 6218;
				
					case 191:
						return 6225;
				
					case 192:
						return 6232;
				
					case 193:
						return 6239;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6573;
				
					case 195:
						return 6580;
				
					case 196:
						return 6587;
				
					case 197:
						return 6594;
				
					case 198:
						return 6601;
				
					case 199:
						return 6608;
				
					case 200:
						return 6615;
				
					case 201:
						return 6622;
				
					case 202:
						return 6629;
				
					case 203:
						return 6636;
				
					case 204:
						return 6643;
				
					case 205:
						return 6650;
				
					case 206:
						return 6657;
				
					case 207:
						return 6664;
				
					case 208:
						return 6671;
				
					case 209:
						return 6678;
				
					case 210:
						return 6685;
				
					case 211:
						return 6692;
				
					case 212:
						return 6699;
				
					case 213:
						return 6706;
				
					case 214:
						return 6713;
				
					case 215:
						return 6720;
				
					case 216:
						return 6727;
				
					case 217:
						return 6734;
				
					case 218:
						return 6741;
				
					case 219:
						return 6748;
				
					case 220:
						return 6755;
				
					case 221:
						return 6762;
				
					case 222:
						return 6769;
				
					case 223:
						return 6776;
				
					case 224:
						return 6783;
				
					case 225:
						return 6790;
				
					case 226:
						return 6797;
				
					case 227:
						return 6804;
				
					case 228:
						return 6811;
				
					case 229:
						return 6818;
				
					case 230:
						return 6825;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7295;
				
					case 232:
						return 7302;
				
					case 233:
						return 7309;
				
					case 234:
						return 7316;
				
					case 235:
						return 7323;
				
					case 236:
						return 7330;
				
					case 237:
						return 7337;
				
					case 238:
						return 7344;
				
					case 239:
						return 7351;
				
					case 240:
						return 7358;
				
					case 241:
						return 7365;
				
					case 242:
						return 7372;
				
					case 243:
						return joaat("PRI2_HIJLF");
				
					case 244:
						return 7386;
				
					case 245:
						return 7393;
				
					case 246:
						return 7400;
				
					case 247:
						return 7407;
				
					case 248:
						return 7414;
				
					case 249:
						return 7421;
				
					case 250:
						return 7428;
				
					case 251:
						return 7435;
				
					case 252:
						return 7442;
				
					case 253:
						return 7449;
				
					case 254:
						return 7456;
				
					case 255:
						return 7463;
				
					case 256:
						return 7470;
				
					case 257:
						return 7477;
				
					case 258:
						return 7484;
				
					case 259:
						return 7491;
				
					case 260:
						return 7498;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8018;
				
					case 262:
						return 8025;
				
					case 263:
						return 8032;
				
					case 264:
						return 8039;
				
					case 265:
						return 8046;
				
					case 266:
						return 8053;
				
					case 267:
						return 8060;
				
					case 268:
						return 8067;
				
					case 269:
						return 8074;
				
					case 270:
						return 8081;
				
					case 271:
						return 8542;
				
					case 272:
						return 8549;
				
					case 273:
						return 8556;
				
					case 274:
						return 8563;
				
					case 275:
						return 8570;
				
					case 276:
						return 8577;
				
					case 277:
						return 8584;
				
					case 278:
						return 8591;
				
					case 279:
						return 8598;
				
					case 280:
						return 8605;
				
					case 281:
						return 8989;
				
					case 282:
						return 8996;
				
					case 283:
						return 9003;
				
					case 284:
						return 9010;
				
					case 285:
						return 9017;
				
					case 286:
						return 9024;
				
					case 287:
						return 9031;
				
					case 288:
						return 9038;
				
					case 289:
						return 9045;
				
					case 290:
						return 9052;
				
					case 291:
						return 9059;
				
					case 292:
						return 9065;
				
					case 293:
						return 9071;
				
					case 294:
						return 9077;
				
					case 295:
						return 9084;
				
					case 296:
						return 9091;
				
					case 297:
						return 9098;
				
					case 298:
						return 9105;
				
					case 299:
						return 9112;
				
					case 300:
						return 9119;
				
					case 301:
						return 9126;
				
					case 302:
						return 9133;
				
					case 303:
						return 9140;
				
					case 304:
						return 9147;
				
					case 305:
						return 9153;
				
					case 306:
						return 9159;
				
					case 307:
						return 9640;
				
					case 308:
						return 9647;
				
					case 309:
						return 9654;
				
					case 310:
						return 9661;
				
					case 311:
						return 9668;
				
					case 312:
						return 9675;
				
					case 313:
						return 9682;
				
					case 314:
						return 9689;
				
					case 315:
						return 9696;
				
					case 316:
						return 9703;
				
					case 317:
						return 9925;
				
					case 318:
						return 9932;
				
					case 319:
						return 9939;
				
					case 320:
						return 9946;
				
					case 321:
						return 9953;
				
					case 322:
						return 9960;
				
					case 323:
						return 9967;
				
					case 324:
						return 9974;
				
					case 325:
						return 9981;
				
					case 326:
						return 9988;
				
					case 327:
						return 9995;
				
					case 328:
						return 10002;
				
					case 329:
						return 10009;
				
					case 330:
						return 10016;
				
					case 331:
						return 10023;
				
					case 332:
						return 10030;
				
					case 333:
						return 10037;
				
					case 334:
						return 10044;
				
					case 335:
						return 10051;
				
					case 336:
						return 10058;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10451;
				
					case 338:
						return 10458;
				
					case 339:
						return 10465;
				
					case 340:
						return 10472;
				
					case 341:
						return 10479;
				
					case 342:
						return 10486;
				
					case 343:
						return 10493;
				
					case 344:
						return 10500;
				
					case 345:
						return 10507;
				
					case 346:
						return 10514;
				
					case 347:
						return 10521;
				
					case 348:
						return 10527;
				
					case 349:
						return 10533;
				
					case 350:
						return 10539;
				
					case 351:
						return 10546;
				
					case 352:
						return 10553;
				
					case 353:
						return 10560;
				
					case 354:
						return 10567;
				
					case 355:
						return 10574;
				
					case 356:
						return 10581;
				
					case 357:
						return 10588;
				
					case 358:
						return 10595;
				
					case 359:
						return 10602;
				
					case 360:
						return 10609;
				
					case 361:
						return 10615;
				
					case 362:
						return 10621;
				
					default:
						break;
				}
				break;
		
			case 5:
				switch (iParam1)
				{
					case 0:
						return 1634;
				
					case 1:
						return 1641;
				
					case 2:
						return 1648;
				
					case 3:
						return 1655;
				
					case 4:
						return 1662;
				
					case 5:
						return 1669;
				
					case 6:
						return 1676;
				
					case 7:
						return 1683;
				
					case 8:
						return 1690;
				
					case 9:
						return 1697;
				
					case 10:
						return 1704;
				
					case 11:
						return 1710;
				
					case 12:
						return 1716;
				
					case 13:
						return 1722;
				
					case 14:
						return 1801;
				
					case 15:
						return 1808;
				
					case 16:
						return 1815;
				
					case 17:
						return 1822;
				
					case 18:
						return 1829;
				
					case 19:
						return 1836;
				
					case 20:
						return 1843;
				
					case 21:
						return 1850;
				
					case 22:
						return 1857;
				
					case 23:
						return 1864;
				
					case 24:
						return 1870;
				
					case 25:
						return 1876;
				
					case 26:
						return 2171;
				
					case 27:
						return 2178;
				
					case 28:
						return 2185;
				
					case 29:
						return 2192;
				
					case 30:
						return 2199;
				
					case 31:
						return 2206;
				
					case 32:
						return 2213;
				
					case 33:
						return 2220;
				
					case 34:
						return 2227;
				
					case 35:
						return 2234;
				
					case 36:
						return 2241;
				
					case 37:
						return 2247;
				
					case 38:
						return 2253;
				
					case 39:
						return 2835;
				
					case 40:
						return 2842;
				
					case 41:
						return 2849;
				
					case 42:
						return 2856;
				
					case 43:
						return 2863;
				
					case 44:
						return 2870;
				
					case 45:
						return 2877;
				
					case 46:
						return 2884;
				
					case 47:
						return 2891;
				
					case 48:
						return 2898;
				
					case 49:
						return 2905;
				
					case 50:
						return 2911;
				
					case 51:
						return 2917;
				
					case 52:
						return 2959;
				
					case 53:
						return 2966;
				
					case 54:
						return 2973;
				
					case 55:
						return 2980;
				
					case 56:
						return 2987;
				
					case 57:
						return 2994;
				
					case 58:
						return 3001;
				
					case 59:
						return 3008;
				
					case 60:
						return 3015;
				
					case 61:
						return 3022;
				
					case 62:
						return 3029;
				
					case 63:
						return 3035;
				
					case 64:
						return 3041;
				
					case 65:
						return 3242;
				
					case 66:
						return 3250;
				
					case 67:
						return 3258;
				
					case 68:
						return 3266;
				
					case 69:
						return 3274;
				
					case 70:
						return 3282;
				
					case 71:
						return 3290;
				
					case 72:
						return 3298;
				
					case 73:
						return 3306;
				
					case 74:
						return 3314;
				
					case 75:
						return 3322;
				
					case 76:
						return 3330;
				
					case 77:
						return 3338;
				
					case 78:
						return 3346;
				
					case 79:
						return 3354;
				
					case 80:
						return 3362;
				
					case 81:
						return 3370;
				
					case 82:
						return 3378;
				
					case 83:
						return 3386;
				
					case 84:
						return 3394;
				
					case 85:
						return 3402;
				
					case 86:
						return 3409;
				
					case 87:
						return 3416;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4038;
				
					case 89:
						return 4046;
				
					case 90:
						return 4054;
				
					case 91:
						return 4062;
				
					case 92:
						return 4070;
				
					case 93:
						return 4078;
				
					case 94:
						return 4086;
				
					case 95:
						return 4094;
				
					case 96:
						return 4102;
				
					case 97:
						return 4110;
				
					case 98:
						return 4118;
				
					case 99:
						return 4126;
				
					case 100:
						return 4134;
				
					case 101:
						return 4142;
				
					case 102:
						return 4150;
				
					case 103:
						return 4158;
				
					case 104:
						return 4166;
				
					case 105:
						return 4174;
				
					case 106:
						return 4182;
				
					case 107:
						return 4190;
				
					case 108:
						return 4198;
				
					case 109:
						return 4206;
				
					case 110:
						return 4214;
				
					case 111:
						return 4222;
				
					case 112:
						return 4230;
				
					case 113:
						return 4238;
				
					case 114:
						return 4246;
				
					case 115:
						return 4254;
				
					case 116:
						return 4262;
				
					case 117:
						return 4270;
				
					case 118:
						return 4278;
				
					case 119:
						return 4286;
				
					case 120:
						return 4294;
				
					case 121:
						return 4302;
				
					case 122:
						return 4310;
				
					case 123:
						return 4318;
				
					case 124:
						return 4326;
				
					case 125:
						return 4334;
				
					case 126:
						return 4342;
				
					case 127:
						return 4350;
				
					case 128:
						return 4358;
				
					case 129:
						return 4366;
				
					case 130:
						return 4374;
				
					case 131:
						return 4382;
				
					case 132:
						return 4390;
				
					case 133:
						return 4398;
				
					case 134:
						return 4406;
				
					case 135:
						return 4414;
				
					case 136:
						return 4422;
				
					case 137:
						return 4430;
				
					case 138:
						return 4438;
				
					case 139:
						return 4446;
				
					case 140:
						return 4454;
				
					case 141:
						return 4462;
				
					case 142:
						return 4470;
				
					case 143:
						return 4478;
				
					case 144:
						return 4486;
				
					case 145:
						return 4494;
				
					case 146:
						return 4502;
				
					case 147:
						return 4510;
				
					case 148:
						return 4518;
				
					case 149:
						return 4526;
				
					case 150:
						return 4534;
				
					case 151:
						return 4542;
				
					case 152:
						return 4550;
				
					case 153:
						return 4558;
				
					case 154:
						return 4566;
				
					case 155:
						return 4574;
				
					case 156:
						return 4582;
				
					case 157:
						return 4590;
				
					case 158:
						return 5483;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5932;
				
					case 160:
						return 5939;
				
					case 161:
						return 5946;
				
					case 162:
						return 5953;
				
					case 163:
						return 5960;
				
					case 164:
						return 5967;
				
					case 165:
						return 5974;
				
					case 166:
						return 5981;
				
					case 167:
						return 5988;
				
					case 168:
						return 5995;
				
					case 169:
						return 6002;
				
					case 170:
						return 6009;
				
					case 171:
						return 6016;
				
					case 172:
						return 6023;
				
					case 173:
						return 6030;
				
					case 174:
						return 6037;
				
					case 175:
						return 6044;
				
					case 176:
						return 6051;
				
					case 177:
						return 6058;
				
					case 178:
						return 6065;
				
					case 179:
						return 6072;
				
					case 180:
						return 6079;
				
					case 181:
						return 6086;
				
					case 182:
						return 6093;
				
					case 183:
						return 6100;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6177;
				
					case 185:
						return 6184;
				
					case 186:
						return 6191;
				
					case 187:
						return 6198;
				
					case 188:
						return 6205;
				
					case 189:
						return 6212;
				
					case 190:
						return 6219;
				
					case 191:
						return 6226;
				
					case 192:
						return 6233;
				
					case 193:
						return 6240;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6574;
				
					case 195:
						return 6581;
				
					case 196:
						return 6588;
				
					case 197:
						return 6595;
				
					case 198:
						return 6602;
				
					case 199:
						return 6609;
				
					case 200:
						return 6616;
				
					case 201:
						return 6623;
				
					case 202:
						return 6630;
				
					case 203:
						return 6637;
				
					case 204:
						return 6644;
				
					case 205:
						return 6651;
				
					case 206:
						return 6658;
				
					case 207:
						return 6665;
				
					case 208:
						return 6672;
				
					case 209:
						return 6679;
				
					case 210:
						return 6686;
				
					case 211:
						return 6693;
				
					case 212:
						return 6700;
				
					case 213:
						return 6707;
				
					case 214:
						return 6714;
				
					case 215:
						return 6721;
				
					case 216:
						return 6728;
				
					case 217:
						return 6735;
				
					case 218:
						return 6742;
				
					case 219:
						return 6749;
				
					case 220:
						return 6756;
				
					case 221:
						return 6763;
				
					case 222:
						return 6770;
				
					case 223:
						return 6777;
				
					case 224:
						return 6784;
				
					case 225:
						return 6791;
				
					case 226:
						return 6798;
				
					case 227:
						return 6805;
				
					case 228:
						return 6812;
				
					case 229:
						return 6819;
				
					case 230:
						return 6826;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7296;
				
					case 232:
						return 7303;
				
					case 233:
						return 7310;
				
					case 234:
						return 7317;
				
					case 235:
						return 7324;
				
					case 236:
						return 7331;
				
					case 237:
						return 7338;
				
					case 238:
						return 7345;
				
					case 239:
						return 7352;
				
					case 240:
						return 7359;
				
					case 241:
						return 7366;
				
					case 242:
						return 7373;
				
					case 243:
						return 7380;
				
					case 244:
						return 7387;
				
					case 245:
						return 7394;
				
					case 246:
						return 7401;
				
					case 247:
						return 7408;
				
					case 248:
						return 7415;
				
					case 249:
						return 7422;
				
					case 250:
						return 7429;
				
					case 251:
						return 7436;
				
					case 252:
						return 7443;
				
					case 253:
						return 7450;
				
					case 254:
						return 7457;
				
					case 255:
						return 7464;
				
					case 256:
						return 7471;
				
					case 257:
						return 7478;
				
					case 258:
						return 7485;
				
					case 259:
						return 7492;
				
					case 260:
						return 7499;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8019;
				
					case 262:
						return 8026;
				
					case 263:
						return 8033;
				
					case 264:
						return 8040;
				
					case 265:
						return 8047;
				
					case 266:
						return 8054;
				
					case 267:
						return 8061;
				
					case 268:
						return 8068;
				
					case 269:
						return 8075;
				
					case 270:
						return 8082;
				
					case 271:
						return 8543;
				
					case 272:
						return 8550;
				
					case 273:
						return 8557;
				
					case 274:
						return 8564;
				
					case 275:
						return 8571;
				
					case 276:
						return 8578;
				
					case 277:
						return 8585;
				
					case 278:
						return 8592;
				
					case 279:
						return 8599;
				
					case 280:
						return 8606;
				
					case 281:
						return 8990;
				
					case 282:
						return 8997;
				
					case 283:
						return 9004;
				
					case 284:
						return 9011;
				
					case 285:
						return 9018;
				
					case 286:
						return 9025;
				
					case 287:
						return 9032;
				
					case 288:
						return 9039;
				
					case 289:
						return 9046;
				
					case 290:
						return 9053;
				
					case 291:
						return 9060;
				
					case 292:
						return 9066;
				
					case 293:
						return 9072;
				
					case 294:
						return 9078;
				
					case 295:
						return 9085;
				
					case 296:
						return 9092;
				
					case 297:
						return 9099;
				
					case 298:
						return 9106;
				
					case 299:
						return 9113;
				
					case 300:
						return 9120;
				
					case 301:
						return 9127;
				
					case 302:
						return 9134;
				
					case 303:
						return 9141;
				
					case 304:
						return 9148;
				
					case 305:
						return 9154;
				
					case 306:
						return 9160;
				
					case 307:
						return 9641;
				
					case 308:
						return 9648;
				
					case 309:
						return 9655;
				
					case 310:
						return 9662;
				
					case 311:
						return 9669;
				
					case 312:
						return 9676;
				
					case 313:
						return 9683;
				
					case 314:
						return 9690;
				
					case 315:
						return 9697;
				
					case 316:
						return 9704;
				
					case 317:
						return 9926;
				
					case 318:
						return 9933;
				
					case 319:
						return 9940;
				
					case 320:
						return 9947;
				
					case 321:
						return 9954;
				
					case 322:
						return 9961;
				
					case 323:
						return 9968;
				
					case 324:
						return 9975;
				
					case 325:
						return 9982;
				
					case 326:
						return 9989;
				
					case 327:
						return 9996;
				
					case 328:
						return 10003;
				
					case 329:
						return 10010;
				
					case 330:
						return 10017;
				
					case 331:
						return 10024;
				
					case 332:
						return 10031;
				
					case 333:
						return 10038;
				
					case 334:
						return 10045;
				
					case 335:
						return 10052;
				
					case 336:
						return 10059;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10452;
				
					case 338:
						return 10459;
				
					case 339:
						return 10466;
				
					case 340:
						return 10473;
				
					case 341:
						return 10480;
				
					case 342:
						return 10487;
				
					case 343:
						return 10494;
				
					case 344:
						return 10501;
				
					case 345:
						return 10508;
				
					case 346:
						return 10515;
				
					case 347:
						return 10522;
				
					case 348:
						return 10528;
				
					case 349:
						return 10534;
				
					case 350:
						return 10540;
				
					case 351:
						return 10547;
				
					case 352:
						return 10554;
				
					case 353:
						return 10561;
				
					case 354:
						return 10568;
				
					case 355:
						return 10575;
				
					case 356:
						return 10582;
				
					case 357:
						return 10589;
				
					case 358:
						return 10596;
				
					case 359:
						return 10603;
				
					case 360:
						return 10610;
				
					case 361:
						return 10616;
				
					case 362:
						return 10622;
				
					default:
						break;
				}
				break;
		
			case 6:
				switch (iParam1)
				{
					case 0:
						return 1636;
				
					case 1:
						return 1643;
				
					case 2:
						return 1650;
				
					case 3:
						return 1657;
				
					case 4:
						return 1664;
				
					case 5:
						return 1671;
				
					case 6:
						return 1678;
				
					case 7:
						return 1685;
				
					case 8:
						return 1692;
				
					case 9:
						return 1699;
				
					case 13:
						return 1724;
				
					case 14:
						return 1803;
				
					case 15:
						return 1810;
				
					case 16:
						return 1817;
				
					case 17:
						return 1824;
				
					case 18:
						return 1831;
				
					case 19:
						return 1838;
				
					case 20:
						return 1845;
				
					case 21:
						return 1852;
				
					case 22:
						return 1859;
				
					case 26:
						return 2173;
				
					case 27:
						return 2180;
				
					case 28:
						return 2187;
				
					case 29:
						return 2194;
				
					case 30:
						return 2201;
				
					case 31:
						return 2208;
				
					case 32:
						return 2215;
				
					case 33:
						return 2222;
				
					case 34:
						return 2229;
				
					case 35:
						return 2236;
				
					case 39:
						return 2837;
				
					case 40:
						return 2844;
				
					case 41:
						return 2851;
				
					case 42:
						return 2858;
				
					case 43:
						return 2865;
				
					case 44:
						return 2872;
				
					case 45:
						return 2879;
				
					case 46:
						return 2886;
				
					case 47:
						return 2893;
				
					case 48:
						return 2900;
				
					case 52:
						return 2961;
				
					case 53:
						return 2968;
				
					case 54:
						return 2975;
				
					case 55:
						return 2982;
				
					case 56:
						return 2989;
				
					case 57:
						return 2996;
				
					case 58:
						return 3003;
				
					case 59:
						return 3010;
				
					case 60:
						return 3017;
				
					case 61:
						return 3024;
				
					case 65:
						return 3245;
				
					case 66:
						return 3253;
				
					case 67:
						return 3261;
				
					case 68:
						return 3269;
				
					case 69:
						return 3277;
				
					case 70:
						return 3285;
				
					case 71:
						return 3293;
				
					case 72:
						return 3301;
				
					case 73:
						return 3309;
				
					case 74:
						return 3317;
				
					case 75:
						return 3325;
				
					case 76:
						return 3333;
				
					case 77:
						return 3341;
				
					case 78:
						return 3349;
				
					case 79:
						return 3357;
				
					case 80:
						return 3365;
				
					case 81:
						return 3373;
				
					case 82:
						return 3381;
				
					case 83:
						return 3389;
				
					case 84:
						return 3397;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4041;
				
					case 89:
						return 4049;
				
					case 90:
						return 4057;
				
					case 91:
						return 4065;
				
					case 92:
						return 4073;
				
					case 93:
						return 4081;
				
					case 94:
						return 4089;
				
					case 95:
						return 4097;
				
					case 96:
						return 4105;
				
					case 97:
						return 4113;
				
					case 98:
						return 4121;
				
					case 99:
						return 4129;
				
					case 100:
						return 4137;
				
					case 101:
						return 4145;
				
					case 102:
						return 4153;
				
					case 103:
						return 4161;
				
					case 104:
						return 4169;
				
					case 105:
						return 4177;
				
					case 106:
						return 4185;
				
					case 107:
						return 4193;
				
					case 108:
						return 4201;
				
					case 109:
						return 4209;
				
					case 110:
						return 4217;
				
					case 111:
						return 4225;
				
					case 112:
						return 4233;
				
					case 113:
						return 4241;
				
					case 114:
						return 4249;
				
					case 115:
						return 4257;
				
					case 116:
						return 4265;
				
					case 117:
						return 4273;
				
					case 118:
						return 4281;
				
					case 119:
						return 4289;
				
					case 120:
						return 4297;
				
					case 121:
						return 4305;
				
					case 122:
						return 4313;
				
					case 123:
						return 4321;
				
					case 124:
						return 4329;
				
					case 125:
						return 4337;
				
					case 126:
						return 4345;
				
					case 127:
						return 4353;
				
					case 128:
						return 4361;
				
					case 129:
						return 4369;
				
					case 130:
						return 4377;
				
					case 131:
						return 4385;
				
					case 132:
						return 4393;
				
					case 133:
						return 4401;
				
					case 134:
						return 4409;
				
					case 135:
						return 4417;
				
					case 136:
						return 4425;
				
					case 137:
						return 4433;
				
					case 138:
						return 4441;
				
					case 139:
						return 4449;
				
					case 140:
						return 4457;
				
					case 141:
						return 4465;
				
					case 142:
						return 4473;
				
					case 143:
						return 4481;
				
					case 144:
						return 4489;
				
					case 145:
						return 4497;
				
					case 146:
						return 4505;
				
					case 147:
						return 4513;
				
					case 148:
						return 4521;
				
					case 149:
						return 4529;
				
					case 150:
						return 4537;
				
					case 151:
						return 4545;
				
					case 152:
						return 4553;
				
					case 153:
						return 4561;
				
					case 154:
						return 4569;
				
					case 155:
						return 4577;
				
					case 156:
						return 4585;
				
					case 157:
						return 4593;
				
					case 158:
						return 5486;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5934;
				
					case 160:
						return 5941;
				
					case 161:
						return 5948;
				
					case 162:
						return 5955;
				
					case 163:
						return 5962;
				
					case 164:
						return 5969;
				
					case 165:
						return 5976;
				
					case 166:
						return 5983;
				
					case 167:
						return 5990;
				
					case 168:
						return 5997;
				
					case 169:
						return 6004;
				
					case 170:
						return 6011;
				
					case 171:
						return 6018;
				
					case 172:
						return 6025;
				
					case 173:
						return 6032;
				
					case 174:
						return 6039;
				
					case 175:
						return 6046;
				
					case 176:
						return 6053;
				
					case 177:
						return 6060;
				
					case 178:
						return 6067;
				
					case 179:
						return 6074;
				
					case 180:
						return 6081;
				
					case 181:
						return 6088;
				
					case 182:
						return 6095;
				
					case 183:
						return 6102;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6179;
				
					case 185:
						return 6186;
				
					case 186:
						return 6193;
				
					case 187:
						return 6200;
				
					case 188:
						return 6207;
				
					case 189:
						return 6214;
				
					case 190:
						return 6221;
				
					case 191:
						return 6228;
				
					case 192:
						return 6235;
				
					case 193:
						return 6242;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6576;
				
					case 195:
						return 6583;
				
					case 196:
						return 6590;
				
					case 197:
						return 6597;
				
					case 198:
						return 6604;
				
					case 199:
						return 6611;
				
					case 200:
						return 6618;
				
					case 201:
						return 6625;
				
					case 202:
						return 6632;
				
					case 203:
						return 6639;
				
					case 204:
						return 6646;
				
					case 205:
						return 6653;
				
					case 206:
						return 6660;
				
					case 207:
						return 6667;
				
					case 208:
						return 6674;
				
					case 209:
						return 6681;
				
					case 210:
						return 6688;
				
					case 211:
						return 6695;
				
					case 212:
						return 6702;
				
					case 213:
						return 6709;
				
					case 214:
						return 6716;
				
					case 215:
						return 6723;
				
					case 216:
						return 6730;
				
					case 217:
						return 6737;
				
					case 218:
						return 6744;
				
					case 219:
						return 6751;
				
					case 220:
						return 6758;
				
					case 221:
						return 6765;
				
					case 222:
						return 6772;
				
					case 223:
						return 6779;
				
					case 224:
						return 6786;
				
					case 225:
						return 6793;
				
					case 226:
						return 6800;
				
					case 227:
						return 6807;
				
					case 228:
						return 6814;
				
					case 229:
						return 6821;
				
					case 230:
						return 6828;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7298;
				
					case 232:
						return 7305;
				
					case 233:
						return 7312;
				
					case 234:
						return 7319;
				
					case 235:
						return 7326;
				
					case 236:
						return 7333;
				
					case 237:
						return 7340;
				
					case 238:
						return 7347;
				
					case 239:
						return 7354;
				
					case 240:
						return 7361;
				
					case 241:
						return 7368;
				
					case 242:
						return 7375;
				
					case 243:
						return 7382;
				
					case 244:
						return 7389;
				
					case 245:
						return 7396;
				
					case 246:
						return 7403;
				
					case 247:
						return 7410;
				
					case 248:
						return 7417;
				
					case 249:
						return 7424;
				
					case 250:
						return 7431;
				
					case 251:
						return 7438;
				
					case 252:
						return 7445;
				
					case 253:
						return 7452;
				
					case 254:
						return 7459;
				
					case 255:
						return 7466;
				
					case 256:
						return 7473;
				
					case 257:
						return 7480;
				
					case 258:
						return 7487;
				
					case 259:
						return 7494;
				
					case 260:
						return 7501;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8021;
				
					case 262:
						return 8028;
				
					case 263:
						return 8035;
				
					case 264:
						return 8042;
				
					case 265:
						return 8049;
				
					case 266:
						return 8056;
				
					case 267:
						return 8063;
				
					case 268:
						return 8070;
				
					case 269:
						return 8077;
				
					case 270:
						return 8084;
				
					case 271:
						return 8545;
				
					case 272:
						return 8552;
				
					case 273:
						return 8559;
				
					case 274:
						return 8566;
				
					case 275:
						return 8573;
				
					case 276:
						return 8580;
				
					case 277:
						return 8587;
				
					case 278:
						return 8594;
				
					case 279:
						return 8601;
				
					case 280:
						return 8608;
				
					case 281:
						return 8992;
				
					case 282:
						return 8999;
				
					case 283:
						return 9006;
				
					case 284:
						return 9013;
				
					case 285:
						return 9020;
				
					case 286:
						return 9027;
				
					case 287:
						return 9034;
				
					case 288:
						return 9041;
				
					case 289:
						return 9048;
				
					case 290:
						return 9055;
				
					case 294:
						return 9080;
				
					case 295:
						return 9087;
				
					case 296:
						return 9094;
				
					case 297:
						return 9101;
				
					case 298:
						return 9108;
				
					case 299:
						return 9115;
				
					case 300:
						return 9122;
				
					case 301:
						return 9129;
				
					case 302:
						return 9136;
				
					case 303:
						return 9143;
				
					case 307:
						return 9643;
				
					case 308:
						return 9650;
				
					case 309:
						return 9657;
				
					case 310:
						return 9664;
				
					case 311:
						return 9671;
				
					case 312:
						return 9678;
				
					case 313:
						return 9685;
				
					case 314:
						return 9692;
				
					case 315:
						return 9699;
				
					case 316:
						return 9706;
				
					case 317:
						return 9928;
				
					case 318:
						return 9935;
				
					case 319:
						return 9942;
				
					case 320:
						return 9949;
				
					case 321:
						return 9956;
				
					case 322:
						return 9963;
				
					case 323:
						return 9970;
				
					case 324:
						return 9977;
				
					case 325:
						return 9984;
				
					case 326:
						return 9991;
				
					case 327:
						return 9998;
				
					case 328:
						return 10005;
				
					case 329:
						return 10012;
				
					case 330:
						return 10019;
				
					case 331:
						return 10026;
				
					case 332:
						return 10033;
				
					case 333:
						return 10040;
				
					case 334:
						return 10047;
				
					case 335:
						return 10054;
				
					case 336:
						return 10061;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10454;
				
					case 338:
						return 10461;
				
					case 339:
						return 10468;
				
					case 340:
						return 10475;
				
					case 341:
						return 10482;
				
					case 342:
						return 10489;
				
					case 343:
						return 10496;
				
					case 344:
						return 10503;
				
					case 345:
						return 10510;
				
					case 346:
						return 10517;
				
					case 350:
						return 10542;
				
					case 351:
						return 10549;
				
					case 352:
						return 10556;
				
					case 353:
						return 10563;
				
					case 354:
						return 10570;
				
					case 355:
						return 10577;
				
					case 356:
						return 10584;
				
					case 357:
						return 10591;
				
					case 358:
						return 10598;
				
					case 359:
						return 10605;
				
					default:
						break;
				}
				break;
		
			case 7:
				switch (iParam1)
				{
					case 0:
						return 1635;
				
					case 1:
						return 1642;
				
					case 2:
						return 1649;
				
					case 3:
						return 1656;
				
					case 4:
						return 1663;
				
					case 5:
						return 1670;
				
					case 6:
						return 1677;
				
					case 7:
						return 1684;
				
					case 8:
						return 1691;
				
					case 9:
						return 1698;
				
					case 10:
						return 1705;
				
					case 11:
						return 1711;
				
					case 12:
						return 1717;
				
					case 13:
						return 1723;
				
					case 14:
						return 1802;
				
					case 15:
						return 1809;
				
					case 16:
						return 1816;
				
					case 17:
						return 1823;
				
					case 18:
						return 1830;
				
					case 19:
						return 1837;
				
					case 20:
						return 1844;
				
					case 21:
						return 1851;
				
					case 22:
						return 1858;
				
					case 23:
						return 1865;
				
					case 24:
						return 1871;
				
					case 25:
						return 1877;
				
					case 26:
						return 2172;
				
					case 27:
						return 2179;
				
					case 28:
						return 2186;
				
					case 29:
						return 2193;
				
					case 30:
						return 2200;
				
					case 31:
						return 2207;
				
					case 32:
						return 2214;
				
					case 33:
						return 2221;
				
					case 34:
						return 2228;
				
					case 35:
						return 2235;
				
					case 36:
						return 2242;
				
					case 37:
						return 2248;
				
					case 38:
						return 2254;
				
					case 39:
						return 2836;
				
					case 40:
						return 2843;
				
					case 41:
						return 2850;
				
					case 42:
						return 2857;
				
					case 43:
						return 2864;
				
					case 44:
						return 2871;
				
					case 45:
						return 2878;
				
					case 46:
						return 2885;
				
					case 47:
						return 2892;
				
					case 48:
						return 2899;
				
					case 49:
						return 2906;
				
					case 50:
						return 2912;
				
					case 51:
						return 2918;
				
					case 52:
						return 2960;
				
					case 53:
						return 2967;
				
					case 54:
						return 2974;
				
					case 55:
						return 2981;
				
					case 56:
						return 2988;
				
					case 57:
						return 2995;
				
					case 58:
						return 3002;
				
					case 59:
						return 3009;
				
					case 60:
						return 3016;
				
					case 61:
						return 3023;
				
					case 62:
						return 3030;
				
					case 63:
						return 3036;
				
					case 64:
						return 3042;
				
					case 65:
						return 3243;
				
					case 66:
						return 3251;
				
					case 67:
						return 3259;
				
					case 68:
						return 3267;
				
					case 69:
						return 3275;
				
					case 70:
						return 3283;
				
					case 71:
						return 3291;
				
					case 72:
						return 3299;
				
					case 73:
						return 3307;
				
					case 74:
						return 3315;
				
					case 75:
						return 3323;
				
					case 76:
						return 3331;
				
					case 77:
						return 3340;
				
					case 78:
						return 3348;
				
					case 79:
						return 3355;
				
					case 80:
						return 3363;
				
					case 81:
						return 3371;
				
					case 82:
						return 3379;
				
					case 83:
						return 3387;
				
					case 84:
						return 3395;
				
					case 85:
						return 3403;
				
					case 86:
						return joaat("TNFUD_GO2_2A");
				
					case 87:
						return 3417;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4039;
				
					case 89:
						return 4047;
				
					case 90:
						return 4055;
				
					case 91:
						return 4063;
				
					case 92:
						return 4071;
				
					case 93:
						return 4079;
				
					case 94:
						return 4087;
				
					case 95:
						return 4095;
				
					case 96:
						return 4103;
				
					case 97:
						return 4111;
				
					case 98:
						return 4119;
				
					case 99:
						return 4127;
				
					case 100:
						return 4136;
				
					case 101:
						return 4144;
				
					case 102:
						return 4151;
				
					case 103:
						return 4159;
				
					case 104:
						return 4167;
				
					case 105:
						return 4175;
				
					case 106:
						return 4183;
				
					case 107:
						return 4191;
				
					case 108:
						return 4199;
				
					case 109:
						return 4207;
				
					case 110:
						return 4215;
				
					case 111:
						return 4223;
				
					case 112:
						return 4231;
				
					case 113:
						return 4239;
				
					case 114:
						return 4247;
				
					case 115:
						return 4255;
				
					case 116:
						return 4263;
				
					case 117:
						return 4271;
				
					case 118:
						return 4279;
				
					case 119:
						return 4287;
				
					case 120:
						return 4296;
				
					case 121:
						return 4304;
				
					case 122:
						return 4311;
				
					case 123:
						return 4319;
				
					case 124:
						return 4327;
				
					case 125:
						return 4335;
				
					case 126:
						return 4343;
				
					case 127:
						return 4351;
				
					case 128:
						return 4359;
				
					case 129:
						return 4367;
				
					case 130:
						return 4375;
				
					case 131:
						return 4383;
				
					case 132:
						return 4391;
				
					case 133:
						return 4399;
				
					case 134:
						return 4407;
				
					case 135:
						return 4415;
				
					case 136:
						return 4423;
				
					case 137:
						return 4431;
				
					case 138:
						return 4439;
				
					case 139:
						return 4447;
				
					case 140:
						return 4456;
				
					case 141:
						return 4464;
				
					case 142:
						return 4471;
				
					case 143:
						return 4479;
				
					case 144:
						return 4487;
				
					case 145:
						return 4495;
				
					case 146:
						return 4503;
				
					case 147:
						return 4511;
				
					case 148:
						return 4519;
				
					case 149:
						return 4527;
				
					case 150:
						return 4535;
				
					case 151:
						return 4543;
				
					case 152:
						return 4551;
				
					case 153:
						return 4559;
				
					case 154:
						return 4567;
				
					case 155:
						return 4575;
				
					case 156:
						return 4583;
				
					case 157:
						return 4591;
				
					case 158:
						return 5484;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5933;
				
					case 160:
						return 5940;
				
					case 161:
						return 5947;
				
					case 162:
						return 5954;
				
					case 163:
						return 5961;
				
					case 164:
						return 5968;
				
					case 165:
						return 5975;
				
					case 166:
						return 5982;
				
					case 167:
						return 5989;
				
					case 168:
						return 5996;
				
					case 169:
						return 6003;
				
					case 170:
						return 6010;
				
					case 171:
						return 6017;
				
					case 172:
						return 6024;
				
					case 173:
						return 6031;
				
					case 174:
						return 6038;
				
					case 175:
						return 6045;
				
					case 176:
						return 6052;
				
					case 177:
						return 6059;
				
					case 178:
						return 6066;
				
					case 179:
						return 6073;
				
					case 180:
						return 6080;
				
					case 181:
						return 6087;
				
					case 182:
						return 6094;
				
					case 183:
						return 6101;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6178;
				
					case 185:
						return 6185;
				
					case 186:
						return 6192;
				
					case 187:
						return 6199;
				
					case 188:
						return 6206;
				
					case 189:
						return 6213;
				
					case 190:
						return 6220;
				
					case 191:
						return 6227;
				
					case 192:
						return 6234;
				
					case 193:
						return 6241;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6575;
				
					case 195:
						return 6582;
				
					case 196:
						return 6589;
				
					case 197:
						return 6596;
				
					case 198:
						return 6603;
				
					case 199:
						return 6610;
				
					case 200:
						return 6617;
				
					case 201:
						return 6624;
				
					case 202:
						return 6631;
				
					case 203:
						return 6638;
				
					case 204:
						return 6645;
				
					case 205:
						return 6652;
				
					case 206:
						return 6659;
				
					case 207:
						return 6666;
				
					case 208:
						return 6673;
				
					case 209:
						return 6680;
				
					case 210:
						return 6687;
				
					case 211:
						return 6694;
				
					case 212:
						return 6701;
				
					case 213:
						return 6708;
				
					case 214:
						return 6715;
				
					case 215:
						return 6722;
				
					case 216:
						return 6729;
				
					case 217:
						return 6736;
				
					case 218:
						return 6743;
				
					case 219:
						return 6750;
				
					case 220:
						return 6757;
				
					case 221:
						return 6764;
				
					case 222:
						return 6771;
				
					case 223:
						return 6778;
				
					case 224:
						return 6785;
				
					case 225:
						return 6792;
				
					case 226:
						return 6799;
				
					case 227:
						return 6806;
				
					case 228:
						return 6813;
				
					case 229:
						return 6820;
				
					case 230:
						return 6827;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7297;
				
					case 232:
						return 7304;
				
					case 233:
						return 7311;
				
					case 234:
						return 7318;
				
					case 235:
						return 7325;
				
					case 236:
						return 7332;
				
					case 237:
						return 7339;
				
					case 238:
						return 7346;
				
					case 239:
						return 7353;
				
					case 240:
						return 7360;
				
					case 241:
						return 7367;
				
					case 242:
						return 7374;
				
					case 243:
						return 7381;
				
					case 244:
						return 7388;
				
					case 245:
						return 7395;
				
					case 246:
						return 7402;
				
					case 247:
						return 7409;
				
					case 248:
						return 7416;
				
					case 249:
						return 7423;
				
					case 250:
						return 7430;
				
					case 251:
						return 7437;
				
					case 252:
						return 7444;
				
					case 253:
						return 7451;
				
					case 254:
						return 7458;
				
					case 255:
						return 7465;
				
					case 256:
						return 7472;
				
					case 257:
						return 7479;
				
					case 258:
						return 7486;
				
					case 259:
						return 7493;
				
					case 260:
						return 7500;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8020;
				
					case 262:
						return 8027;
				
					case 263:
						return 8034;
				
					case 264:
						return 8041;
				
					case 265:
						return 8048;
				
					case 266:
						return 8055;
				
					case 267:
						return 8062;
				
					case 268:
						return 8069;
				
					case 269:
						return 8076;
				
					case 270:
						return 8083;
				
					case 271:
						return 8544;
				
					case 272:
						return 8551;
				
					case 273:
						return 8558;
				
					case 274:
						return 8565;
				
					case 275:
						return 8572;
				
					case 276:
						return 8579;
				
					case 277:
						return 8586;
				
					case 278:
						return 8593;
				
					case 279:
						return 8600;
				
					case 280:
						return 8607;
				
					case 281:
						return 8991;
				
					case 282:
						return 8998;
				
					case 283:
						return 9005;
				
					case 284:
						return 9012;
				
					case 285:
						return 9019;
				
					case 286:
						return 9026;
				
					case 287:
						return 9033;
				
					case 288:
						return 9040;
				
					case 289:
						return 9047;
				
					case 290:
						return 9054;
				
					case 291:
						return 9061;
				
					case 292:
						return 9067;
				
					case 293:
						return 9073;
				
					case 294:
						return 9079;
				
					case 295:
						return 9086;
				
					case 296:
						return 9093;
				
					case 297:
						return 9100;
				
					case 298:
						return 9107;
				
					case 299:
						return 9114;
				
					case 300:
						return 9121;
				
					case 301:
						return 9128;
				
					case 302:
						return 9135;
				
					case 303:
						return 9142;
				
					case 304:
						return 9149;
				
					case 305:
						return 9155;
				
					case 306:
						return 9161;
				
					case 307:
						return 9642;
				
					case 308:
						return 9649;
				
					case 309:
						return 9656;
				
					case 310:
						return 9663;
				
					case 311:
						return 9670;
				
					case 312:
						return 9677;
				
					case 313:
						return 9684;
				
					case 314:
						return 9691;
				
					case 315:
						return 9698;
				
					case 316:
						return 9705;
				
					case 317:
						return 9927;
				
					case 318:
						return 9934;
				
					case 319:
						return 9941;
				
					case 320:
						return 9948;
				
					case 321:
						return 9955;
				
					case 322:
						return 9962;
				
					case 323:
						return 9969;
				
					case 324:
						return 9976;
				
					case 325:
						return 9983;
				
					case 326:
						return 9990;
				
					case 327:
						return 9997;
				
					case 328:
						return 10004;
				
					case 329:
						return 10011;
				
					case 330:
						return 10018;
				
					case 331:
						return 10025;
				
					case 332:
						return 10032;
				
					case 333:
						return 10039;
				
					case 334:
						return 10046;
				
					case 335:
						return 10053;
				
					case 336:
						return 10060;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10453;
				
					case 338:
						return 10460;
				
					case 339:
						return 10467;
				
					case 340:
						return 10474;
				
					case 341:
						return 10481;
				
					case 342:
						return 10488;
				
					case 343:
						return 10495;
				
					case 344:
						return 10502;
				
					case 345:
						return 10509;
				
					case 346:
						return 10516;
				
					case 347:
						return 10523;
				
					case 348:
						return 10529;
				
					case 349:
						return 10535;
				
					case 350:
						return 10541;
				
					case 351:
						return 10548;
				
					case 352:
						return 10555;
				
					case 353:
						return 10562;
				
					case 354:
						return 10569;
				
					case 355:
						return 10576;
				
					case 356:
						return 10583;
				
					case 357:
						return 10590;
				
					case 358:
						return 10597;
				
					case 359:
						return 10604;
				
					case 360:
						return 10611;
				
					case 361:
						return 10617;
				
					case 362:
						return 10623;
				
					default:
						break;
				}
				break;
		}
	}

	return 1630;
}

int func_102(int iParam0, int iParam1) // Position - 0xEEA0 (61088)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 363:
					return 11436;
			
				case 364:
					return 11443;
			
				case 365:
					return 11450;
			
				case 366:
					return 11457;
			
				case 367:
					return 11464;
			
				case 368:
					return 11471;
			
				case 369:
					return 11478;
			
				case 370:
					return 11485;
			
				case 371:
					return 11492;
			
				case 372:
					return 11499;
			
				case 373:
					return 11506;
			
				case 374:
					return 11513;
			
				case 375:
					return 11520;
			
				case 376:
					return 11527;
			
				case 377:
					return 11534;
			
				case 378:
					return 11541;
			
				case 379:
					return 11548;
			
				case 380:
					return 11555;
			
				case 381:
					return 11562;
			
				case 382:
					return 11569;
			
				case 383:
					return 11576;
			
				case 384:
					return 11583;
			
				case 385:
					return 11590;
			
				case 386:
					return 11597;
			
				case 387:
					return 11604;
			
				case 388:
					return 11611;
			
				case 389:
					return 11618;
			
				case 390:
					return 11625;
			
				case 391:
					return 11632;
			
				case 392:
					return 11639;
			
				case 393:
					return 11646;
			
				case 394:
					return 11653;
			
				case 395:
					return 11660;
			
				case 396:
					return 11667;
			
				case 397:
					return 11674;
			
				case 398:
					return 11681;
			
				case 399:
					return 11688;
			
				case 400:
					return 11695;
			
				case 401:
					return 11702;
			
				case 402:
					return 11709;
			
				case 403:
					return 11716;
			
				case 404:
					return 11723;
			
				case 405:
					return 11730;
			
				case 406:
					return 11737;
			
				case 407:
					return 11744;
			
				case 408:
					return 11751;
			
				case 409:
					return 11758;
			
				case 410:
					return 11765;
			
				case 411:
					return 11772;
			
				case 412:
					return 11779;
			
				case 413:
					return 11786;
			
				case 414:
					return 11793;
			
				case 415:
					return 15511;
			
				case 416:
					return 15518;
			
				case 417:
					return 15525;
			
				case 418:
					return 15532;
			
				case 419:
					return 15539;
			
				case 420:
					return 15546;
			
				case 421:
					return 15553;
			
				case 422:
					return 15560;
			
				case 423:
					return 15567;
			
				case 424:
					return 15574;
			
				case 425:
					return 15581;
			
				case 426:
					return 15588;
			
				case 427:
					return 15595;
			
				case 428:
					return 15602;
			
				case 429:
					return 15609;
			
				case 430:
					return 15616;
			
				case 431:
					return 15623;
			
				case 432:
					return 15630;
			
				case 433:
					return 15637;
			
				case 434:
					return 15644;
			
				case 435:
					return 15651;
			
				case 436:
					return 15658;
			
				case 437:
					return 15665;
			
				case 438:
					return 15672;
			
				case 439:
					return 15679;
			
				case 440:
					return 15686;
			
				case 441:
					return 15693;
			
				case 442:
					return 15700;
			
				case 443:
					return 15707;
			
				case 444:
					return 15714;
			
				case 445:
					return 15721;
			
				case 446:
					return 15728;
			
				case 447:
					return 15735;
			
				case 448:
					return 15742;
			
				case 449:
					return 15749;
			
				case 450:
					return 15756;
			
				case 451:
					return 15763;
			
				case 452:
					return 15770;
			
				case 453:
					return 15777;
			
				case 454:
					return 15784;
			
				case 455:
					return 15791;
			
				case 456:
					return 15798;
			
				case 457:
					return 15805;
			
				case 458:
					return 15812;
			
				case 459:
					return 15819;
			
				case 460:
					return 15826;
			
				case 461:
					return 15833;
			
				case 462:
					return 15840;
			
				case 463:
					return 15847;
			
				case 464:
					return 15854;
			
				case 465:
					return 15861;
			
				case 466:
					return 15868;
			
				case 467:
					return 15875;
			
				case 468:
					return 15882;
			
				case 469:
					return 15889;
			
				case 470:
					return 15896;
			
				case 471:
					return 15903;
			
				case 472:
					return 15910;
			
				case 473:
					return 15917;
			
				case 474:
					return 15924;
			
				case 475:
					return 15931;
			
				case 476:
					return 15938;
			
				case 477:
					return 15945;
			
				case 478:
					return 15952;
			
				case 479:
					return 15959;
			
				case 480:
					return 15966;
			
				case 481:
					return 15973;
			
				case 482:
					return 15980;
			
				case 483:
					return 15987;
			
				case 484:
					return 15994;
			
				case 485:
					return 16001;
			
				case 486:
					return 16008;
			
				case 487:
					return 16015;
			
				case 488:
					return 16022;
			
				case 489:
					return 16029;
			
				case 490:
					return 16036;
			
				case 491:
					return 16043;
			
				case 492:
					return 16050;
			
				case 493:
					return 16057;
			
				case 494:
					return 16064;
			
				case 495:
					return 16071;
			
				case 496:
					return 16078;
			
				case 497:
					return 16085;
			
				case 498:
					return 16092;
			
				case 499:
					return 16099;
			
				case 500:
					return 16106;
			
				case 501:
					return 16113;
			
				case 502:
					return 16120;
			
				case 503:
					return 16127;
			
				case 504:
					return 16134;
			
				case 505:
					return 16141;
			
				case 506:
					return 16148;
			
				case 507:
					return 16155;
			
				case 508:
					return 16162;
			
				case 509:
					return 16169;
			
				case 510:
					return 16176;
			
				case 511:
					return 16183;
			
				case 512:
					return 16190;
			
				case 513:
					return 16197;
			
				case 514:
					return 16204;
			
				case 515:
					return 12261;
			
				case 516:
					return 12268;
			
				case 517:
					return 12463;
			
				case 518:
					return 12470;
			
				case 519:
					return 12477;
			
				case 520:
					return 12484;
			
				case 521:
					return 12491;
			
				case 522:
					return 12498;
			
				case 523:
					return 12505;
			
				case 524:
					return 12512;
			
				case 525:
					return 12519;
			
				case 526:
					return 12526;
			
				case 527:
					return 12533;
			
				case 528:
					return joaat("AR_EXECUTION_BACK_LEFT_ANIMAL_ENTER");
			
				case 529:
					return 12547;
			
				case 530:
					return 12554;
			
				case 531:
					return 12561;
			
				case 532:
					return 12568;
			
				case 533:
					return 12575;
			
				case 534:
					return 12582;
			
				case 535:
					return 12589;
			
				case 536:
					return 12596;
			
				case 537:
					return 12603;
			
				case 538:
					return 12610;
			
				case 539:
					return 12617;
			
				case 540:
					return 12624;
			
				case 541:
					return 12631;
			
				case 542:
					return 12638;
			
				case 543:
					return 12645;
			
				case 544:
					return 12652;
			
				case 545:
					return 12659;
			
				case 546:
					return 12666;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 363:
					return 11437;
			
				case 364:
					return 11444;
			
				case 365:
					return 11451;
			
				case 366:
					return 11458;
			
				case 367:
					return 11465;
			
				case 368:
					return 11472;
			
				case 369:
					return 11479;
			
				case 370:
					return 11486;
			
				case 371:
					return 11493;
			
				case 372:
					return 11500;
			
				case 373:
					return 11507;
			
				case 374:
					return 11514;
			
				case 375:
					return 11521;
			
				case 376:
					return 11528;
			
				case 377:
					return 11535;
			
				case 378:
					return 11542;
			
				case 379:
					return 11549;
			
				case 380:
					return 11556;
			
				case 381:
					return 11563;
			
				case 382:
					return 11570;
			
				case 383:
					return 11577;
			
				case 384:
					return 11584;
			
				case 385:
					return 11591;
			
				case 386:
					return 11598;
			
				case 387:
					return 11605;
			
				case 388:
					return 11612;
			
				case 389:
					return 11619;
			
				case 390:
					return 11626;
			
				case 391:
					return 11633;
			
				case 392:
					return 11640;
			
				case 393:
					return 11647;
			
				case 394:
					return 11654;
			
				case 395:
					return 11661;
			
				case 396:
					return 11668;
			
				case 397:
					return 11675;
			
				case 398:
					return 11682;
			
				case 399:
					return 11689;
			
				case 400:
					return 11696;
			
				case 401:
					return 11703;
			
				case 402:
					return 11710;
			
				case 403:
					return 11717;
			
				case 404:
					return 11724;
			
				case 405:
					return 11731;
			
				case 406:
					return 11738;
			
				case 407:
					return 11745;
			
				case 408:
					return 11752;
			
				case 409:
					return 11759;
			
				case 410:
					return 11766;
			
				case 411:
					return 11773;
			
				case 412:
					return 11780;
			
				case 413:
					return 11787;
			
				case 414:
					return 11794;
			
				case 415:
					return 15512;
			
				case 416:
					return 15519;
			
				case 417:
					return 15526;
			
				case 418:
					return 15533;
			
				case 419:
					return 15540;
			
				case 420:
					return 15547;
			
				case 421:
					return 15554;
			
				case 422:
					return 15561;
			
				case 423:
					return 15568;
			
				case 424:
					return 15575;
			
				case 425:
					return 15582;
			
				case 426:
					return 15589;
			
				case 427:
					return 15596;
			
				case 428:
					return 15603;
			
				case 429:
					return 15610;
			
				case 430:
					return 15617;
			
				case 431:
					return 15624;
			
				case 432:
					return 15631;
			
				case 433:
					return 15638;
			
				case 434:
					return 15645;
			
				case 435:
					return 15652;
			
				case 436:
					return 15659;
			
				case 437:
					return 15666;
			
				case 438:
					return 15673;
			
				case 439:
					return 15680;
			
				case 440:
					return 15687;
			
				case 441:
					return 15694;
			
				case 442:
					return 15701;
			
				case 443:
					return 15708;
			
				case 444:
					return 15715;
			
				case 445:
					return 15722;
			
				case 446:
					return 15729;
			
				case 447:
					return 15736;
			
				case 448:
					return 15743;
			
				case 449:
					return 15750;
			
				case 450:
					return 15757;
			
				case 451:
					return 15764;
			
				case 452:
					return 15771;
			
				case 453:
					return 15778;
			
				case 454:
					return 15785;
			
				case 455:
					return 15792;
			
				case 456:
					return 15799;
			
				case 457:
					return 15806;
			
				case 458:
					return 15813;
			
				case 459:
					return 15820;
			
				case 460:
					return 15827;
			
				case 461:
					return 15834;
			
				case 462:
					return 15841;
			
				case 463:
					return 15848;
			
				case 464:
					return 15855;
			
				case 465:
					return 15862;
			
				case 466:
					return 15869;
			
				case 467:
					return 15876;
			
				case 468:
					return 15883;
			
				case 469:
					return 15890;
			
				case 470:
					return 15897;
			
				case 471:
					return 15904;
			
				case 472:
					return 15911;
			
				case 473:
					return 15918;
			
				case 474:
					return 15925;
			
				case 475:
					return 15932;
			
				case 476:
					return 15939;
			
				case 477:
					return 15946;
			
				case 478:
					return 15953;
			
				case 479:
					return 15960;
			
				case 480:
					return 15967;
			
				case 481:
					return 15974;
			
				case 482:
					return 15981;
			
				case 483:
					return 15988;
			
				case 484:
					return 15995;
			
				case 485:
					return 16002;
			
				case 486:
					return 16009;
			
				case 487:
					return 16016;
			
				case 488:
					return 16023;
			
				case 489:
					return 16030;
			
				case 490:
					return 16037;
			
				case 491:
					return 16044;
			
				case 492:
					return 16051;
			
				case 493:
					return 16058;
			
				case 494:
					return 16065;
			
				case 495:
					return 16072;
			
				case 496:
					return 16079;
			
				case 497:
					return 16086;
			
				case 498:
					return 16093;
			
				case 499:
					return 16100;
			
				case 500:
					return 16107;
			
				case 501:
					return 16114;
			
				case 502:
					return 16121;
			
				case 503:
					return 16128;
			
				case 504:
					return 16135;
			
				case 505:
					return 16142;
			
				case 506:
					return 16149;
			
				case 507:
					return 16156;
			
				case 508:
					return 16163;
			
				case 509:
					return 16170;
			
				case 510:
					return 16177;
			
				case 511:
					return 16184;
			
				case 512:
					return 16191;
			
				case 513:
					return 16198;
			
				case 514:
					return 16205;
			
				case 515:
					return 12262;
			
				case 516:
					return 12269;
			
				case 517:
					return 12464;
			
				case 518:
					return 12471;
			
				case 519:
					return 12478;
			
				case 520:
					return 12485;
			
				case 521:
					return 12492;
			
				case 522:
					return 12499;
			
				case 523:
					return 12506;
			
				case 524:
					return 12513;
			
				case 525:
					return 12520;
			
				case 526:
					return 12527;
			
				case 527:
					return 12534;
			
				case 528:
					return 12541;
			
				case 529:
					return 12548;
			
				case 530:
					return 12555;
			
				case 531:
					return 12562;
			
				case 532:
					return 12569;
			
				case 533:
					return 12576;
			
				case 534:
					return 12583;
			
				case 535:
					return 12590;
			
				case 536:
					return 12597;
			
				case 537:
					return 12604;
			
				case 538:
					return 12611;
			
				case 539:
					return 12618;
			
				case 540:
					return 12625;
			
				case 541:
					return 12632;
			
				case 542:
					return 12639;
			
				case 543:
					return 12646;
			
				case 544:
					return 12653;
			
				case 545:
					return 12660;
			
				case 546:
					return 12667;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 363:
					return 11438;
			
				case 364:
					return 11445;
			
				case 365:
					return 11452;
			
				case 366:
					return 11459;
			
				case 367:
					return 11466;
			
				case 368:
					return 11473;
			
				case 369:
					return 11480;
			
				case 370:
					return 11487;
			
				case 371:
					return 11494;
			
				case 372:
					return 11501;
			
				case 373:
					return 11508;
			
				case 374:
					return 11515;
			
				case 375:
					return 11522;
			
				case 376:
					return 11529;
			
				case 377:
					return 11536;
			
				case 378:
					return 11543;
			
				case 379:
					return 11550;
			
				case 380:
					return 11557;
			
				case 381:
					return 11564;
			
				case 382:
					return 11571;
			
				case 383:
					return 11578;
			
				case 384:
					return 11585;
			
				case 385:
					return 11592;
			
				case 386:
					return 11599;
			
				case 387:
					return 11606;
			
				case 388:
					return 11613;
			
				case 389:
					return 11620;
			
				case 390:
					return 11627;
			
				case 391:
					return 11634;
			
				case 392:
					return 11641;
			
				case 393:
					return 11648;
			
				case 394:
					return 11655;
			
				case 395:
					return 11662;
			
				case 396:
					return 11669;
			
				case 397:
					return 11676;
			
				case 398:
					return 11683;
			
				case 399:
					return 11690;
			
				case 400:
					return 11697;
			
				case 401:
					return 11704;
			
				case 402:
					return 11711;
			
				case 403:
					return 11718;
			
				case 404:
					return 11725;
			
				case 405:
					return 11732;
			
				case 406:
					return 11739;
			
				case 407:
					return 11746;
			
				case 408:
					return 11753;
			
				case 409:
					return 11760;
			
				case 410:
					return 11767;
			
				case 411:
					return 11774;
			
				case 412:
					return 11781;
			
				case 413:
					return 11788;
			
				case 414:
					return 11795;
			
				case 415:
					return 15513;
			
				case 416:
					return 15520;
			
				case 417:
					return 15527;
			
				case 418:
					return 15534;
			
				case 419:
					return 15541;
			
				case 420:
					return 15548;
			
				case 421:
					return 15555;
			
				case 422:
					return 15562;
			
				case 423:
					return 15569;
			
				case 424:
					return 15576;
			
				case 425:
					return 15583;
			
				case 426:
					return 15590;
			
				case 427:
					return 15597;
			
				case 428:
					return 15604;
			
				case 429:
					return 15611;
			
				case 430:
					return 15618;
			
				case 431:
					return 15625;
			
				case 432:
					return 15632;
			
				case 433:
					return 15639;
			
				case 434:
					return 15646;
			
				case 435:
					return 15653;
			
				case 436:
					return 15660;
			
				case 437:
					return 15667;
			
				case 438:
					return 15674;
			
				case 439:
					return 15681;
			
				case 440:
					return 15688;
			
				case 441:
					return 15695;
			
				case 442:
					return 15702;
			
				case 443:
					return 15709;
			
				case 444:
					return 15716;
			
				case 445:
					return 15723;
			
				case 446:
					return 15730;
			
				case 447:
					return 15737;
			
				case 448:
					return 15744;
			
				case 449:
					return 15751;
			
				case 450:
					return 15758;
			
				case 451:
					return 15765;
			
				case 452:
					return 15772;
			
				case 453:
					return 15779;
			
				case 454:
					return 15786;
			
				case 455:
					return 15793;
			
				case 456:
					return 15800;
			
				case 457:
					return 15807;
			
				case 458:
					return 15814;
			
				case 459:
					return 15821;
			
				case 460:
					return 15828;
			
				case 461:
					return 15835;
			
				case 462:
					return 15842;
			
				case 463:
					return 15849;
			
				case 464:
					return 15856;
			
				case 465:
					return 15863;
			
				case 466:
					return 15870;
			
				case 467:
					return 15877;
			
				case 468:
					return 15884;
			
				case 469:
					return 15891;
			
				case 470:
					return 15898;
			
				case 471:
					return 15905;
			
				case 472:
					return 15912;
			
				case 473:
					return 15919;
			
				case 474:
					return 15926;
			
				case 475:
					return 15933;
			
				case 476:
					return 15940;
			
				case 477:
					return 15947;
			
				case 478:
					return 15954;
			
				case 479:
					return 15961;
			
				case 480:
					return 15968;
			
				case 481:
					return 15975;
			
				case 482:
					return 15982;
			
				case 483:
					return 15989;
			
				case 484:
					return 15996;
			
				case 485:
					return 16003;
			
				case 486:
					return 16010;
			
				case 487:
					return 16017;
			
				case 488:
					return 16024;
			
				case 489:
					return 16031;
			
				case 490:
					return 16038;
			
				case 491:
					return 16045;
			
				case 492:
					return 16052;
			
				case 493:
					return 16059;
			
				case 494:
					return 16066;
			
				case 495:
					return 16073;
			
				case 496:
					return 16080;
			
				case 497:
					return 16087;
			
				case 498:
					return 16094;
			
				case 499:
					return 16101;
			
				case 500:
					return 16108;
			
				case 501:
					return 16115;
			
				case 502:
					return 16122;
			
				case 503:
					return 16129;
			
				case 504:
					return 16136;
			
				case 505:
					return 16143;
			
				case 506:
					return 16150;
			
				case 507:
					return 16157;
			
				case 508:
					return 16164;
			
				case 509:
					return 16171;
			
				case 510:
					return 16178;
			
				case 511:
					return 16185;
			
				case 512:
					return 16192;
			
				case 513:
					return 16199;
			
				case 514:
					return 16206;
			
				case 515:
					return 12263;
			
				case 516:
					return 12270;
			
				case 517:
					return 12465;
			
				case 518:
					return 12472;
			
				case 519:
					return 12479;
			
				case 520:
					return 12486;
			
				case 521:
					return 12493;
			
				case 522:
					return 12500;
			
				case 523:
					return 12507;
			
				case 524:
					return 12514;
			
				case 525:
					return 12521;
			
				case 526:
					return 12528;
			
				case 527:
					return 12535;
			
				case 528:
					return 12542;
			
				case 529:
					return 12549;
			
				case 530:
					return 12556;
			
				case 531:
					return 12563;
			
				case 532:
					return 12570;
			
				case 533:
					return 12577;
			
				case 534:
					return 12584;
			
				case 535:
					return 12591;
			
				case 536:
					return 12598;
			
				case 537:
					return 12605;
			
				case 538:
					return 12612;
			
				case 539:
					return 12619;
			
				case 540:
					return 12626;
			
				case 541:
					return 12633;
			
				case 542:
					return 12640;
			
				case 543:
					return 12647;
			
				case 544:
					return 12654;
			
				case 545:
					return 12661;
			
				case 546:
					return 12668;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 363:
					return 11439;
			
				case 364:
					return 11446;
			
				case 365:
					return 11453;
			
				case 366:
					return 11460;
			
				case 367:
					return 11467;
			
				case 368:
					return 11474;
			
				case 369:
					return 11481;
			
				case 370:
					return 11488;
			
				case 371:
					return 11495;
			
				case 372:
					return 11502;
			
				case 373:
					return 11509;
			
				case 374:
					return 11516;
			
				case 375:
					return 11523;
			
				case 376:
					return 11530;
			
				case 377:
					return 11537;
			
				case 378:
					return 11544;
			
				case 379:
					return 11551;
			
				case 380:
					return 11558;
			
				case 381:
					return 11565;
			
				case 382:
					return 11572;
			
				case 383:
					return 11579;
			
				case 384:
					return 11586;
			
				case 385:
					return 11593;
			
				case 386:
					return 11600;
			
				case 387:
					return 11607;
			
				case 388:
					return 11614;
			
				case 389:
					return 11621;
			
				case 390:
					return 11628;
			
				case 391:
					return 11635;
			
				case 392:
					return 11642;
			
				case 393:
					return 11649;
			
				case 394:
					return 11656;
			
				case 395:
					return 11663;
			
				case 396:
					return 11670;
			
				case 397:
					return 11677;
			
				case 398:
					return 11684;
			
				case 399:
					return 11691;
			
				case 400:
					return 11698;
			
				case 401:
					return 11705;
			
				case 402:
					return 11712;
			
				case 403:
					return 11719;
			
				case 404:
					return 11726;
			
				case 405:
					return 11733;
			
				case 406:
					return 11740;
			
				case 407:
					return 11747;
			
				case 408:
					return 11754;
			
				case 409:
					return 11761;
			
				case 410:
					return 11768;
			
				case 411:
					return 11775;
			
				case 412:
					return 11782;
			
				case 413:
					return 11789;
			
				case 414:
					return 11796;
			
				case 415:
					return 15514;
			
				case 416:
					return 15521;
			
				case 417:
					return 15528;
			
				case 418:
					return 15535;
			
				case 419:
					return 15542;
			
				case 420:
					return 15549;
			
				case 421:
					return 15556;
			
				case 422:
					return 15563;
			
				case 423:
					return 15570;
			
				case 424:
					return 15577;
			
				case 425:
					return 15584;
			
				case 426:
					return 15591;
			
				case 427:
					return 15598;
			
				case 428:
					return 15605;
			
				case 429:
					return 15612;
			
				case 430:
					return 15619;
			
				case 431:
					return 15626;
			
				case 432:
					return 15633;
			
				case 433:
					return 15640;
			
				case 434:
					return 15647;
			
				case 435:
					return 15654;
			
				case 436:
					return 15661;
			
				case 437:
					return 15668;
			
				case 438:
					return 15675;
			
				case 439:
					return 15682;
			
				case 440:
					return 15689;
			
				case 441:
					return 15696;
			
				case 442:
					return 15703;
			
				case 443:
					return 15710;
			
				case 444:
					return 15717;
			
				case 445:
					return 15724;
			
				case 446:
					return 15731;
			
				case 447:
					return 15738;
			
				case 448:
					return 15745;
			
				case 449:
					return 15752;
			
				case 450:
					return 15759;
			
				case 451:
					return 15766;
			
				case 452:
					return 15773;
			
				case 453:
					return 15780;
			
				case 454:
					return 15787;
			
				case 455:
					return 15794;
			
				case 456:
					return 15801;
			
				case 457:
					return 15808;
			
				case 458:
					return 15815;
			
				case 459:
					return 15822;
			
				case 460:
					return 15829;
			
				case 461:
					return 15836;
			
				case 462:
					return 15843;
			
				case 463:
					return 15850;
			
				case 464:
					return 15857;
			
				case 465:
					return 15864;
			
				case 466:
					return 15871;
			
				case 467:
					return 15878;
			
				case 468:
					return 15885;
			
				case 469:
					return 15892;
			
				case 470:
					return 15899;
			
				case 471:
					return 15906;
			
				case 472:
					return 15913;
			
				case 473:
					return 15920;
			
				case 474:
					return 15927;
			
				case 475:
					return 15934;
			
				case 476:
					return 15941;
			
				case 477:
					return 15948;
			
				case 478:
					return 15955;
			
				case 479:
					return 15962;
			
				case 480:
					return 15969;
			
				case 481:
					return 15976;
			
				case 482:
					return 15983;
			
				case 483:
					return 15990;
			
				case 484:
					return 15997;
			
				case 485:
					return 16004;
			
				case 486:
					return 16011;
			
				case 487:
					return 16018;
			
				case 488:
					return 16025;
			
				case 489:
					return 16032;
			
				case 490:
					return 16039;
			
				case 491:
					return 16046;
			
				case 492:
					return 16053;
			
				case 493:
					return 16060;
			
				case 494:
					return 16067;
			
				case 495:
					return 16074;
			
				case 496:
					return 16081;
			
				case 497:
					return 16088;
			
				case 498:
					return 16095;
			
				case 499:
					return 16102;
			
				case 500:
					return 16109;
			
				case 501:
					return 16116;
			
				case 502:
					return 16123;
			
				case 503:
					return 16130;
			
				case 504:
					return 16137;
			
				case 505:
					return 16144;
			
				case 506:
					return 16151;
			
				case 507:
					return 16158;
			
				case 508:
					return 16165;
			
				case 509:
					return 16172;
			
				case 510:
					return 16179;
			
				case 511:
					return 16186;
			
				case 512:
					return 16193;
			
				case 513:
					return 16200;
			
				case 514:
					return 16207;
			
				case 515:
					return 12264;
			
				case 516:
					return 12271;
			
				case 517:
					return 12466;
			
				case 518:
					return 12473;
			
				case 519:
					return 12480;
			
				case 520:
					return 12487;
			
				case 521:
					return 12494;
			
				case 522:
					return 12501;
			
				case 523:
					return 12508;
			
				case 524:
					return 12515;
			
				case 525:
					return 12522;
			
				case 526:
					return 12529;
			
				case 527:
					return 12536;
			
				case 528:
					return 12543;
			
				case 529:
					return 12550;
			
				case 530:
					return 12557;
			
				case 531:
					return 12564;
			
				case 532:
					return 12571;
			
				case 533:
					return 12578;
			
				case 534:
					return 12585;
			
				case 535:
					return 12592;
			
				case 536:
					return 12599;
			
				case 537:
					return 12606;
			
				case 538:
					return 12613;
			
				case 539:
					return 12620;
			
				case 540:
					return 12627;
			
				case 541:
					return 12634;
			
				case 542:
					return 12641;
			
				case 543:
					return 12648;
			
				case 544:
					return 12655;
			
				case 545:
					return 12662;
			
				case 546:
					return 12669;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 363:
					return 11440;
			
				case 364:
					return 11447;
			
				case 365:
					return 11454;
			
				case 366:
					return 11461;
			
				case 367:
					return 11468;
			
				case 368:
					return 11475;
			
				case 369:
					return 11482;
			
				case 370:
					return 11489;
			
				case 371:
					return 11496;
			
				case 372:
					return 11503;
			
				case 373:
					return 11510;
			
				case 374:
					return 11517;
			
				case 375:
					return 11524;
			
				case 376:
					return 11531;
			
				case 377:
					return 11538;
			
				case 378:
					return 11545;
			
				case 379:
					return 11552;
			
				case 380:
					return 11559;
			
				case 381:
					return 11566;
			
				case 382:
					return 11573;
			
				case 383:
					return 11580;
			
				case 384:
					return 11587;
			
				case 385:
					return 11594;
			
				case 386:
					return 11601;
			
				case 387:
					return 11608;
			
				case 388:
					return 11615;
			
				case 389:
					return 11622;
			
				case 390:
					return 11629;
			
				case 391:
					return 11636;
			
				case 392:
					return 11643;
			
				case 393:
					return 11650;
			
				case 394:
					return 11657;
			
				case 395:
					return 11664;
			
				case 396:
					return 11671;
			
				case 397:
					return 11678;
			
				case 398:
					return 11685;
			
				case 399:
					return 11692;
			
				case 400:
					return 11699;
			
				case 401:
					return 11706;
			
				case 402:
					return 11713;
			
				case 403:
					return 11720;
			
				case 404:
					return 11727;
			
				case 405:
					return 11734;
			
				case 406:
					return 11741;
			
				case 407:
					return 11748;
			
				case 408:
					return 11755;
			
				case 409:
					return 11762;
			
				case 410:
					return 11769;
			
				case 411:
					return 11776;
			
				case 412:
					return 11783;
			
				case 413:
					return 11790;
			
				case 414:
					return 11797;
			
				case 415:
					return 15515;
			
				case 416:
					return 15522;
			
				case 417:
					return 15529;
			
				case 418:
					return 15536;
			
				case 419:
					return 15543;
			
				case 420:
					return 15550;
			
				case 421:
					return 15557;
			
				case 422:
					return 15564;
			
				case 423:
					return 15571;
			
				case 424:
					return 15578;
			
				case 425:
					return 15585;
			
				case 426:
					return 15592;
			
				case 427:
					return 15599;
			
				case 428:
					return 15606;
			
				case 429:
					return 15613;
			
				case 430:
					return 15620;
			
				case 431:
					return 15627;
			
				case 432:
					return 15634;
			
				case 433:
					return 15641;
			
				case 434:
					return 15648;
			
				case 435:
					return 15655;
			
				case 436:
					return 15662;
			
				case 437:
					return 15669;
			
				case 438:
					return 15676;
			
				case 439:
					return 15683;
			
				case 440:
					return 15690;
			
				case 441:
					return 15697;
			
				case 442:
					return 15704;
			
				case 443:
					return 15711;
			
				case 444:
					return 15718;
			
				case 445:
					return 15725;
			
				case 446:
					return 15732;
			
				case 447:
					return 15739;
			
				case 448:
					return 15746;
			
				case 449:
					return 15753;
			
				case 450:
					return 15760;
			
				case 451:
					return 15767;
			
				case 452:
					return 15774;
			
				case 453:
					return 15781;
			
				case 454:
					return 15788;
			
				case 455:
					return 15795;
			
				case 456:
					return 15802;
			
				case 457:
					return 15809;
			
				case 458:
					return 15816;
			
				case 459:
					return 15823;
			
				case 460:
					return 15830;
			
				case 461:
					return 15837;
			
				case 462:
					return 15844;
			
				case 463:
					return 15851;
			
				case 464:
					return 15858;
			
				case 465:
					return 15865;
			
				case 466:
					return 15872;
			
				case 467:
					return 15879;
			
				case 468:
					return 15886;
			
				case 469:
					return 15893;
			
				case 470:
					return 15900;
			
				case 471:
					return 15907;
			
				case 472:
					return 15914;
			
				case 473:
					return 15921;
			
				case 474:
					return 15928;
			
				case 475:
					return 15935;
			
				case 476:
					return 15942;
			
				case 477:
					return 15949;
			
				case 478:
					return 15956;
			
				case 479:
					return 15963;
			
				case 480:
					return 15970;
			
				case 481:
					return 15977;
			
				case 482:
					return 15984;
			
				case 483:
					return 15991;
			
				case 484:
					return 15998;
			
				case 485:
					return 16005;
			
				case 486:
					return 16012;
			
				case 487:
					return 16019;
			
				case 488:
					return 16026;
			
				case 489:
					return 16033;
			
				case 490:
					return 16040;
			
				case 491:
					return 16047;
			
				case 492:
					return 16054;
			
				case 493:
					return 16061;
			
				case 494:
					return 16068;
			
				case 495:
					return 16075;
			
				case 496:
					return 16082;
			
				case 497:
					return 16089;
			
				case 498:
					return 16096;
			
				case 499:
					return 16103;
			
				case 500:
					return 16110;
			
				case 501:
					return 16117;
			
				case 502:
					return 16124;
			
				case 503:
					return 16131;
			
				case 504:
					return 16138;
			
				case 505:
					return 16145;
			
				case 506:
					return 16152;
			
				case 507:
					return 16159;
			
				case 508:
					return 16166;
			
				case 509:
					return 16173;
			
				case 510:
					return 16180;
			
				case 511:
					return 16187;
			
				case 512:
					return 16194;
			
				case 513:
					return 16201;
			
				case 514:
					return 16208;
			
				case 515:
					return 12265;
			
				case 516:
					return 12272;
			
				case 517:
					return 12467;
			
				case 518:
					return 12474;
			
				case 519:
					return 12481;
			
				case 520:
					return 12488;
			
				case 521:
					return 12495;
			
				case 522:
					return 12502;
			
				case 523:
					return 12509;
			
				case 524:
					return 12516;
			
				case 525:
					return 12523;
			
				case 526:
					return 12530;
			
				case 527:
					return 12537;
			
				case 528:
					return 12544;
			
				case 529:
					return 12551;
			
				case 530:
					return 12558;
			
				case 531:
					return 12565;
			
				case 532:
					return 12572;
			
				case 533:
					return 12579;
			
				case 534:
					return 12586;
			
				case 535:
					return 12593;
			
				case 536:
					return 12600;
			
				case 537:
					return 12607;
			
				case 538:
					return 12614;
			
				case 539:
					return 12621;
			
				case 540:
					return 12628;
			
				case 541:
					return 12635;
			
				case 542:
					return 12642;
			
				case 543:
					return 12649;
			
				case 544:
					return 12656;
			
				case 545:
					return 12663;
			
				case 546:
					return 12670;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 363:
					return 11442;
			
				case 364:
					return 11449;
			
				case 365:
					return 11456;
			
				case 366:
					return 11463;
			
				case 367:
					return 11470;
			
				case 368:
					return 11477;
			
				case 369:
					return 11484;
			
				case 370:
					return 11491;
			
				case 371:
					return 11498;
			
				case 372:
					return 11505;
			
				case 373:
					return 11512;
			
				case 374:
					return 11519;
			
				case 375:
					return 11526;
			
				case 376:
					return 11533;
			
				case 377:
					return 11540;
			
				case 378:
					return 11547;
			
				case 379:
					return 11554;
			
				case 380:
					return 11561;
			
				case 381:
					return 11568;
			
				case 382:
					return 11575;
			
				case 383:
					return 11582;
			
				case 384:
					return 11589;
			
				case 385:
					return 11596;
			
				case 386:
					return 11603;
			
				case 387:
					return 11610;
			
				case 388:
					return 11617;
			
				case 389:
					return 11624;
			
				case 390:
					return 11631;
			
				case 391:
					return 11638;
			
				case 392:
					return 11645;
			
				case 393:
					return 11652;
			
				case 394:
					return 11659;
			
				case 395:
					return 11666;
			
				case 396:
					return 11673;
			
				case 397:
					return 11680;
			
				case 398:
					return 11687;
			
				case 399:
					return 11694;
			
				case 400:
					return 11701;
			
				case 401:
					return 11708;
			
				case 402:
					return 11715;
			
				case 403:
					return 11722;
			
				case 404:
					return 11729;
			
				case 405:
					return 11736;
			
				case 406:
					return 11743;
			
				case 407:
					return 11750;
			
				case 408:
					return 11757;
			
				case 409:
					return 11764;
			
				case 410:
					return 11771;
			
				case 411:
					return 11778;
			
				case 412:
					return 11785;
			
				case 413:
					return 11792;
			
				case 414:
					return 11799;
			
				case 415:
					return 15517;
			
				case 416:
					return 15524;
			
				case 417:
					return 15531;
			
				case 418:
					return 15538;
			
				case 419:
					return 15545;
			
				case 420:
					return 15552;
			
				case 421:
					return 15559;
			
				case 422:
					return 15566;
			
				case 423:
					return 15573;
			
				case 424:
					return 15580;
			
				case 425:
					return 15587;
			
				case 426:
					return 15594;
			
				case 427:
					return 15601;
			
				case 428:
					return 15608;
			
				case 429:
					return 15615;
			
				case 430:
					return 15622;
			
				case 431:
					return 15629;
			
				case 432:
					return 15636;
			
				case 433:
					return 15643;
			
				case 434:
					return 15650;
			
				case 435:
					return 15657;
			
				case 436:
					return 15664;
			
				case 437:
					return 15671;
			
				case 438:
					return joaat("hobh_niteout_line04");
			
				case 439:
					return 15685;
			
				case 440:
					return 15692;
			
				case 441:
					return 15699;
			
				case 442:
					return 15706;
			
				case 443:
					return 15713;
			
				case 444:
					return 15720;
			
				case 445:
					return 15727;
			
				case 446:
					return 15734;
			
				case 447:
					return 15741;
			
				case 448:
					return 15748;
			
				case 449:
					return 15755;
			
				case 450:
					return 15762;
			
				case 451:
					return 15769;
			
				case 452:
					return 15776;
			
				case 453:
					return 15783;
			
				case 454:
					return 15790;
			
				case 455:
					return 15797;
			
				case 456:
					return 15804;
			
				case 457:
					return 15811;
			
				case 458:
					return 15818;
			
				case 459:
					return 15825;
			
				case 460:
					return 15832;
			
				case 461:
					return 15839;
			
				case 462:
					return 15846;
			
				case 463:
					return 15853;
			
				case 464:
					return 15860;
			
				case 465:
					return 15867;
			
				case 466:
					return 15874;
			
				case 467:
					return 15881;
			
				case 468:
					return 15888;
			
				case 469:
					return 15895;
			
				case 470:
					return 15902;
			
				case 471:
					return 15909;
			
				case 472:
					return 15916;
			
				case 473:
					return 15923;
			
				case 474:
					return 15930;
			
				case 475:
					return 15937;
			
				case 476:
					return 15944;
			
				case 477:
					return 15951;
			
				case 478:
					return 15958;
			
				case 479:
					return 15965;
			
				case 480:
					return 15972;
			
				case 481:
					return 15979;
			
				case 482:
					return 15986;
			
				case 483:
					return 15993;
			
				case 484:
					return 16000;
			
				case 485:
					return 16007;
			
				case 486:
					return 16014;
			
				case 487:
					return 16021;
			
				case 488:
					return 16028;
			
				case 489:
					return 16035;
			
				case 490:
					return 16042;
			
				case 491:
					return 16049;
			
				case 492:
					return 16056;
			
				case 493:
					return 16063;
			
				case 494:
					return 16070;
			
				case 495:
					return 16077;
			
				case 496:
					return 16084;
			
				case 497:
					return 16091;
			
				case 498:
					return 16098;
			
				case 499:
					return 16105;
			
				case 500:
					return 16112;
			
				case 501:
					return 16119;
			
				case 502:
					return 16126;
			
				case 503:
					return 16133;
			
				case 504:
					return 16140;
			
				case 505:
					return 16147;
			
				case 506:
					return 16154;
			
				case 507:
					return 16161;
			
				case 508:
					return 16168;
			
				case 509:
					return 16175;
			
				case 510:
					return 16182;
			
				case 511:
					return 16189;
			
				case 512:
					return 16196;
			
				case 513:
					return 16203;
			
				case 514:
					return 16210;
			
				case 515:
					return 12267;
			
				case 516:
					return 12274;
			
				case 517:
					return 12469;
			
				case 518:
					return 12476;
			
				case 519:
					return 12483;
			
				case 520:
					return 12490;
			
				case 521:
					return 12497;
			
				case 522:
					return 12504;
			
				case 523:
					return 12511;
			
				case 524:
					return 12518;
			
				case 525:
					return 12525;
			
				case 526:
					return 12532;
			
				case 527:
					return 12539;
			
				case 528:
					return 12546;
			
				case 529:
					return 12553;
			
				case 530:
					return 12560;
			
				case 531:
					return 12567;
			
				case 532:
					return 12574;
			
				case 533:
					return 12581;
			
				case 534:
					return 12588;
			
				case 535:
					return 12595;
			
				case 536:
					return 12602;
			
				case 537:
					return 12609;
			
				case 538:
					return 12616;
			
				case 539:
					return 12623;
			
				case 540:
					return 12630;
			
				case 541:
					return 12637;
			
				case 542:
					return 12644;
			
				case 543:
					return 12651;
			
				case 544:
					return 12658;
			
				case 545:
					return 12665;
			
				case 546:
					return 12672;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 363:
					return 11441;
			
				case 364:
					return 11448;
			
				case 365:
					return 11455;
			
				case 366:
					return 11462;
			
				case 367:
					return 11469;
			
				case 368:
					return 11476;
			
				case 369:
					return 11483;
			
				case 370:
					return 11490;
			
				case 371:
					return 11497;
			
				case 372:
					return 11504;
			
				case 373:
					return 11511;
			
				case 374:
					return 11518;
			
				case 375:
					return 11525;
			
				case 376:
					return 11532;
			
				case 377:
					return 11539;
			
				case 378:
					return 11546;
			
				case 379:
					return 11553;
			
				case 380:
					return 11560;
			
				case 381:
					return 11567;
			
				case 382:
					return 11574;
			
				case 383:
					return 11581;
			
				case 384:
					return 11588;
			
				case 385:
					return 11595;
			
				case 386:
					return 11602;
			
				case 387:
					return 11609;
			
				case 388:
					return 11616;
			
				case 389:
					return 11623;
			
				case 390:
					return 11630;
			
				case 391:
					return 11637;
			
				case 392:
					return 11644;
			
				case 393:
					return 11651;
			
				case 394:
					return 11658;
			
				case 395:
					return 11665;
			
				case 396:
					return 11672;
			
				case 397:
					return 11679;
			
				case 398:
					return 11686;
			
				case 399:
					return 11693;
			
				case 400:
					return 11700;
			
				case 401:
					return 11707;
			
				case 402:
					return 11714;
			
				case 403:
					return 11721;
			
				case 404:
					return 11728;
			
				case 405:
					return 11735;
			
				case 406:
					return 11742;
			
				case 407:
					return 11749;
			
				case 408:
					return 11756;
			
				case 409:
					return 11763;
			
				case 410:
					return 11770;
			
				case 411:
					return 11777;
			
				case 412:
					return 11784;
			
				case 413:
					return 11791;
			
				case 414:
					return 11798;
			
				case 415:
					return 15516;
			
				case 416:
					return 15523;
			
				case 417:
					return 15530;
			
				case 418:
					return 15537;
			
				case 419:
					return 15544;
			
				case 420:
					return 15551;
			
				case 421:
					return 15558;
			
				case 422:
					return 15565;
			
				case 423:
					return 15572;
			
				case 424:
					return 15579;
			
				case 425:
					return 15586;
			
				case 426:
					return 15593;
			
				case 427:
					return 15600;
			
				case 428:
					return 15607;
			
				case 429:
					return 15614;
			
				case 430:
					return 15621;
			
				case 431:
					return 15628;
			
				case 432:
					return 15635;
			
				case 433:
					return 15642;
			
				case 434:
					return 15649;
			
				case 435:
					return 15656;
			
				case 436:
					return 15663;
			
				case 437:
					return 15670;
			
				case 438:
					return 15677;
			
				case 439:
					return 15684;
			
				case 440:
					return 15691;
			
				case 441:
					return 15698;
			
				case 442:
					return 15705;
			
				case 443:
					return 15712;
			
				case 444:
					return 15719;
			
				case 445:
					return 15726;
			
				case 446:
					return 15733;
			
				case 447:
					return 15740;
			
				case 448:
					return 15747;
			
				case 449:
					return 15754;
			
				case 450:
					return 15761;
			
				case 451:
					return 15768;
			
				case 452:
					return 15775;
			
				case 453:
					return 15782;
			
				case 454:
					return 15789;
			
				case 455:
					return 15796;
			
				case 456:
					return 15803;
			
				case 457:
					return 15810;
			
				case 458:
					return 15817;
			
				case 459:
					return 15824;
			
				case 460:
					return 15831;
			
				case 461:
					return joaat("insult_micah_conv_part3_03");
			
				case 462:
					return 15845;
			
				case 463:
					return 15852;
			
				case 464:
					return 15859;
			
				case 465:
					return 15866;
			
				case 466:
					return 15873;
			
				case 467:
					return 15880;
			
				case 468:
					return 15887;
			
				case 469:
					return 15894;
			
				case 470:
					return 15901;
			
				case 471:
					return 15908;
			
				case 472:
					return 15915;
			
				case 473:
					return 15922;
			
				case 474:
					return 15929;
			
				case 475:
					return 15936;
			
				case 476:
					return 15943;
			
				case 477:
					return 15950;
			
				case 478:
					return 15957;
			
				case 479:
					return 15964;
			
				case 480:
					return 15971;
			
				case 481:
					return 15978;
			
				case 482:
					return 15985;
			
				case 483:
					return 15992;
			
				case 484:
					return 15999;
			
				case 485:
					return 16006;
			
				case 486:
					return 16013;
			
				case 487:
					return 16020;
			
				case 488:
					return 16027;
			
				case 489:
					return 16034;
			
				case 490:
					return 16041;
			
				case 491:
					return 16048;
			
				case 492:
					return 16055;
			
				case 493:
					return 16062;
			
				case 494:
					return 16069;
			
				case 495:
					return 16076;
			
				case 496:
					return 16083;
			
				case 497:
					return 16090;
			
				case 498:
					return 16097;
			
				case 499:
					return 16104;
			
				case 500:
					return 16111;
			
				case 501:
					return 16118;
			
				case 502:
					return 16125;
			
				case 503:
					return 16132;
			
				case 504:
					return 16139;
			
				case 505:
					return 16146;
			
				case 506:
					return 16153;
			
				case 507:
					return 16160;
			
				case 508:
					return 16167;
			
				case 509:
					return 16174;
			
				case 510:
					return 16181;
			
				case 511:
					return 16188;
			
				case 512:
					return 16195;
			
				case 513:
					return 16202;
			
				case 514:
					return 16209;
			
				case 515:
					return 12266;
			
				case 516:
					return 12273;
			
				case 517:
					return 12468;
			
				case 518:
					return 12475;
			
				case 519:
					return 12482;
			
				case 520:
					return 12489;
			
				case 521:
					return 12496;
			
				case 522:
					return 12503;
			
				case 523:
					return 12510;
			
				case 524:
					return 12517;
			
				case 525:
					return 12524;
			
				case 526:
					return 12531;
			
				case 527:
					return 12538;
			
				case 528:
					return 12545;
			
				case 529:
					return 12552;
			
				case 530:
					return 12559;
			
				case 531:
					return 12566;
			
				case 532:
					return 12573;
			
				case 533:
					return 12580;
			
				case 534:
					return 12587;
			
				case 535:
					return 12594;
			
				case 536:
					return 12601;
			
				case 537:
					return 12608;
			
				case 538:
					return 12615;
			
				case 539:
					return 12622;
			
				case 540:
					return 12629;
			
				case 541:
					return 12636;
			
				case 542:
					return 12643;
			
				case 543:
					return 12650;
			
				case 544:
					return 12657;
			
				case 545:
					return 12664;
			
				case 546:
					return 12671;
			
				default:
					break;
			}
			break;
	}

	return 1630;
}

void func_103(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x12B85 (76677)
{
	Hash statName;

	if (iParam0 != 17239)
	{
		statName = func_99(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x12BB3 (76723)
{
	if (iParam2 == -1)
		iParam2 = func_32();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_105(int iParam0) // Position - 0x12BD1 (76753)
{
	if (iParam0 < 10)
		return 54052 + iParam0;
	else if (iParam0 >= 13 && iParam0 < 23)
		return (54052 + iParam0) - 3;
	else if (iParam0 >= 26 && iParam0 < 36)
		return (54052 + iParam0) - 6;
	else if (iParam0 >= 39 && iParam0 < 49)
		return (54052 + iParam0) - 9;
	else if (iParam0 >= 52 && iParam0 < 62)
		return (54052 + iParam0) - 12;
	else if (iParam0 >= 65 && iParam0 < 85)
		return (54052 + iParam0) - 15;
	else if (iParam0 >= 88 && iParam0 < 291)
		return (54052 + iParam0) - 18;
	else if (iParam0 >= 294 && iParam0 < 304)
		return (54052 + iParam0) - 21;
	else if (iParam0 >= 307 && iParam0 < 347)
		return (54052 + iParam0) - 24;
	else if (iParam0 >= 350 && iParam0 < 360)
		return (54052 + iParam0) - 27;
	else if (iParam0 >= 363 && iParam0 < 547)
		return (54052 + iParam0) - 30;

	return 0;
}

int func_106(int iParam0, BOOL bParam1) // Position - 0x12D46 (77126)
{
	if (iParam0 <= 38)
		if (iParam0 < 10)
			if (bParam1)
				return joaat("twi_01") + iParam0;
			else
				return 31488 + iParam0;
		else if (iParam0 > 12 && iParam0 < 23)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 3;
			else
				return (31488 + iParam0) - 3;
		else if (iParam0 > 25 && iParam0 < 36)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 6;
			else
				return (31488 + iParam0) - 6;
	else if (iParam0 > 38 && iParam0 < 49)
		return (6015 + iParam0) - 39;
	else if (iParam0 > 51 && iParam0 < 62)
		return (7252 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9310 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30134 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30134 + (iParam0 - 281 - 3);
	else if (iParam0 < func_107(11, -1))
		return (15084 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15084 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15361;
	else if (iParam0 < 184)
		return (18036 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18953 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21942 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24535 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26319 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28039 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31488 + 30 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34036 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36528 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36528 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 41004 + (iParam0 - 363);
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50100 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51536 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53896 + iParam0) - 517;

	return 0;
}

int func_107(int iParam0, int iParam1) // Position - 0x1307F (77951)
{
	int num;

	switch (iParam0)
	{
		case 8:
			return 108;
	
		case 9:
			return 128;
	
		case 10:
			return 148;
	
		case 11:
			return 156;
	
		case 6:
			return 75;
	
		case 7:
			return 88;
	
		case 5:
			return -1;
	
		case 12:
			if (iParam1 == 1)
				return 532;
			else if (iParam1 == 2)
				return 537;
		
			return 179;
	
		case 13:
			return 186;
	
		case 14:
			return 192;
	
		case 15:
			return 202;
	
		case 16:
			return 212;
	
		case 17:
			return 222;
	
		case 18:
			return 236;
	
		case 19:
			return 246;
	
		case 20:
			return 256;
	
		case 21:
			return 268;
	
		case 22:
			return 278;
	
		case 23:
			return 294;
	
		case 24:
			return 307;
	
		case 25:
			return 317;
	
		case 26:
			return 337;
	
		case 27:
			return 350;
	
		case 28:
			return 363;
	
		case 29:
			return 413;
	
		case 30:
			return 515;
	
		case 31:
			return 517;
	
		case 32:
			return 547;
	}

	if (func_92(iParam0))
	{
		num = func_109(iParam0);
		return func_108(num);
	}

	return func_167(iParam0, -1, true) * (iParam0 + 1);
}

int func_108(int iParam0) // Position - 0x13264 (78436)
{
	switch (iParam0)
	{
		case 0:
			return 157;
	
		case 2:
			return 224;
	
		case 1:
			return 227;
	
		case 3:
			return 279;
	
		default:
		
	}

	return -1;
}

int func_109(int iParam0) // Position - 0x132A1 (78497)
{
	iParam0 = iParam0 - 1000;

	if (iParam0 >= 0 && iParam0 <= 4)
		return iParam0;

	return -1;
}

int func_110(int iParam0) // Position - 0x132C7 (78535)
{
	if (iParam0 < 10)
		return 7263 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 7263 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 7263 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 7263 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7263 + iParam0) - 12;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9330 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30154 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30154 + (iParam0 - 281 - 3);
	else if (iParam0 < func_107(11, -1))
		return (15154 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15154 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15362;
	else if (iParam0 < 184)
		return (18061 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18963 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21979 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24565 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26329 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28049 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31528 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34056 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36548 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36548 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (41056 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50200 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51538 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53926 + iParam0) - 517;

	return 0;
}

int func_111(int iParam0) // Position - 0x135C0 (79296)
{
	if (iParam0 < 10)
		return 5975 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5975 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5975 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5975 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7242 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9290 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30114 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30114 + (iParam0 - 281 - 3);
	else if (iParam0 < func_107(11, -1))
		return (15014 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15014 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15360;
	else if (iParam0 < 184)
		return (18011 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18943 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21905 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24505 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26309 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28029 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31478 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34016 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36508 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36508 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40952 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50000 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51534 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53866 + iParam0) - 517;

	return 0;
}

int func_112(int iParam0) // Position - 0x138B9 (80057)
{
	if (iParam0 < 10)
		return 5935 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5935 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5935 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5935 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7232 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9270 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30094 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30094 + (iParam0 - 281 - 3);
	else if (iParam0 < func_107(11, -1))
		return (14944 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (14944 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15359;
	else if (iParam0 < 184)
		return (17986 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18933 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21868 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24475 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26299 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28019 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31468 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (33996 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36488 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36488 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40900 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (49900 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51532 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53836 + iParam0) - 517;

	return 0;
}

int func_113(int iParam0) // Position - 0x13BB2 (80818)
{
	int num;

	num = 4424 - 4400;

	if (iParam0 < 10)
		return 4400 + (iParam0 * num);
	else if (iParam0 > 12 && iParam0 < 23)
		return 4640 + ((iParam0 - 13) * num);
	else if (iParam0 > 25 && iParam0 < 36)
		return 4880 + ((iParam0 - 26) * num);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5120 + ((iParam0 - 39) * num);
	else if (iParam0 > 51 && iParam0 < 62)
		return 6414 + ((iParam0 - 52) * num);
	else if (iParam0 > 64 && iParam0 < 85)
		return 7682 + ((iParam0 - 65) * num);
	else if (iParam0 >= 281 && iParam0 < 291)
		return 29534 + ((iParam0 - 281) * num);
	else if (iParam0 >= 294 && iParam0 < 304)
		return 29774 + ((iParam0 - 294) * num);
	else if (iParam0 < func_107(11, -1))
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 <= 157)
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 == 158)
		return 15282;
	else if (iParam0 < 184)
		return 16061 + ((iParam0 - 159) * num);
	else if (iParam0 < 194)
		return 18163 + ((iParam0 - 184) * num);
	else if (iParam0 < 231)
		return 19019 + ((iParam0 - 194) * num);
	else if (iParam0 < 261)
		return 22195 + ((iParam0 - 231) * num);
	else if (iParam0 < 271)
		return 25539 + ((iParam0 - 261) * num);
	else if (iParam0 < 281)
		return 27259 + ((iParam0 - 271) * num);
	else if (iParam0 > 306 && iParam0 < 317)
		return 31188 + ((iParam0 - 307) * num);
	else if (iParam0 >= 317 && iParam0 < 337)
		return 33436 + ((iParam0 - 317) * num);
	else if (iParam0 >= 337 && iParam0 < 347)
		return 35928 + ((iParam0 - 337) * num);
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36168 + ((iParam0 - 350) * num);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 39444 + ((iParam0 - 363) * num);
	else if (iParam0 >= 415 && iParam0 < 515)
		return 47100 + ((iParam0 - 415) * num);
	else if (iParam0 >= 515 && iParam0 < 517)
		return 51476 + ((iParam0 - 515) * num);
	else if (iParam0 >= 517 && iParam0 < 547)
		return 52996 + ((iParam0 - 517) * num);

	return 0;
}

BOOL func_114(int iParam0) // Position - 0x13EFA (81658)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return true;
	}

	return false;
}

void func_115(int iParam0, int iParam1, int iParam2) // Position - 0x13FC5 (81861)
{
	if (iParam2 == -1)
		iParam2 = func_32();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int func_116(int iParam0, int iParam1) // Position - 0x13FED (81901)
{
	int num;

	if (iParam0 == 3880 || iParam0 == 3881 || iParam0 == 3882)
	{
		if (iParam1 < 10)
			num = iParam0 + (iParam1 * 3);
		else if (iParam1 < 23)
			if (iParam0 == 3880)
				num = 3910 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3881)
				num = 3911 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3882)
				num = 3912 + ((iParam1 - 13) * 3);
		else if (iParam1 < 36)
			if (iParam0 == 3880)
				num = 3946 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3881)
				num = 3947 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3882)
				num = 3948 + ((iParam1 - 26) * 3);
		else if (iParam1 < 49)
			if (iParam0 == 3880)
				num = 5855 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3881)
				num = 5856 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3882)
				num = 5857 + ((iParam1 - 39) * 3);
		else if (iParam1 < 62)
			if (iParam0 == 3880)
				num = 7149 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3881)
				num = 7150 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3882)
				num = 7151 + ((iParam1 - 52) * 3);
		else if (iParam1 < 85)
			if (iParam0 == 3880)
				num = 9107 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3881)
				num = 9108 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3882)
				num = 9109 + ((iParam1 - 65) * 3);
		else if (iParam1 < func_107(11, -1))
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 <= 157)
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 == 158)
			if (iParam0 == 3880)
				num = 15351;
			else if (iParam0 == 3881)
				num = 15352;
			else if (iParam0 == 3882)
				num = 15353;
		else if (iParam1 < 184)
			if (iParam0 == 3880)
				num = 17786 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3881)
				num = 17787 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3882)
				num = 17788 + ((iParam1 - 159) * 3);
		else if (iParam1 < 194)
			if (iParam0 == 3880)
				num = 18853 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3881)
				num = 18854 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3882)
				num = 18855 + ((iParam1 - 184) * 3);
		else if (iParam1 < 231)
			if (iParam0 == 3880)
				num = 21572 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3881)
				num = 21573 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3882)
				num = 21574 + ((iParam1 - 194) * 3);
		else if (iParam1 < 261)
			if (iParam0 == 3880)
				num = 24265 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3881)
				num = 24266 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3882)
				num = 24267 + ((iParam1 - 231) * 3);
		else if (iParam1 < 271)
			if (iParam0 == 3880)
				num = 26229 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3881)
				num = 26230 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3882)
				num = 26231 + ((iParam1 - 261) * 3);
		else if (iParam1 < 281)
			if (iParam0 == 3880)
				num = 27949 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3881)
				num = 27950 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3882)
				num = 27951 + ((iParam1 - 271) * 3);
		else if (iParam1 < 291)
			if (iParam0 == 3880)
				num = 29474 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3881)
				num = 29475 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3882)
				num = 29476 + ((iParam1 - 281) * 3);
		else if (iParam1 < 304)
			if (iParam0 == 3880)
				num = 29504 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3881)
				num = 29505 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3882)
				num = 29506 + ((iParam1 - 294) * 3);
		else if (iParam1 > 306 && iParam1 < 317)
			if (iParam0 == 3880)
				num = 31158 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3881)
				num = 31159 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3882)
				num = 31160 + ((iParam1 - 307) * 3);
		else if (iParam1 >= 317 && iParam1 < 337)
			if (iParam0 == 3880)
				num = 33376 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3881)
				num = 33377 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3882)
				num = 33378 + ((iParam1 - 317) * 3);
		else if (iParam1 >= 337 && iParam1 < 347)
			if (iParam0 == 3880)
				num = 35868 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3881)
				num = 35869 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3882)
				num = 35870 + ((iParam1 - 337) * 3);
		else if (iParam1 >= 350 && iParam1 < 360)
			if (iParam0 == 3880)
				num = 35898 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3881)
				num = 35899 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3882)
				num = 35900 + ((iParam1 - 350) * 3);
		else if (iParam1 >= 363 && iParam1 <= 414)
			if (iParam0 == 3880)
				num = 39288 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3881)
				num = 39289 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3882)
				num = 39290 + ((iParam1 - 363) * 3);
		else if (iParam1 >= 415 && iParam1 < 515)
			if (iParam0 == 3880)
				num = 46800 + ((iParam1 - 415) * 3);
			else if (iParam0 == 3881)
				num = 46801 + ((iParam1 - 415) * 3);
			else if (iParam0 == 3882)
				num = 46802 + ((iParam1 - 415) * 3);
		else if (iParam1 >= 515 && iParam1 < 517)
			if (iParam0 == 3880)
				num = 51470 + ((iParam1 - 515) * 3);
			else if (iParam0 == 3881)
				num = 51471 + ((iParam1 - 515) * 3);
			else if (iParam0 == 3882)
				num = 51472 + ((iParam1 - 515) * 3);
		else if (iParam1 >= 517 && iParam1 < 547)
			if (iParam0 == 3880)
				num = 52906 + ((iParam1 - 517) * 3);
			else if (iParam0 == 3881)
				num = 52907 + ((iParam1 - 517) * 3);
			else if (iParam0 == 3882)
				num = 52908 + ((iParam1 - 517) * 3);
	}
	else if (iParam1 < 10)
	{
		num = iParam0 + (iParam1 * (1456 - 1411));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		num = (iParam1 - 10) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 1861;
		else if (iParam0 == 1412)
			num = num + 1862;
		else if (iParam0 == 1441)
			num = num + 1863;
		else if (iParam0 == 1442)
			num = num + 1864;
		else if (iParam0 == 1443)
			num = num + 1865;
		else if (iParam0 == 1445)
			num = num + 1866;
		else if (iParam0 == 1447)
			num = num + 1867;
		else if (iParam0 == 1448)
			num = num + 1868;
		else if (iParam0 == 1449)
			num = num + 1869;
		else if (iParam0 == 1450)
			num = num + 1870;
		else if (iParam0 == 1451)
			num = num + 1871;
		else if (iParam0 == 1452)
			num = num + 1872;
		else if (iParam0 == 1453)
			num = num + 1873;
		else if (iParam0 == 1454)
			num = num + 1874;
		else if (iParam0 == 1455)
			num = num + 1875;
	}
	else if (iParam1 < 23)
	{
		num = 1906 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 13) * (1456 - 1411));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		num = (iParam1 - 23) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2356;
		else if (iParam0 == 1412)
			num = num + 2357;
		else if (iParam0 == 1441)
			num = num + 2358;
		else if (iParam0 == 1442)
			num = num + 2359;
		else if (iParam0 == 1443)
			num = num + 2360;
		else if (iParam0 == 1445)
			num = num + 2361;
		else if (iParam0 == 1447)
			num = num + 2362;
		else if (iParam0 == 1448)
			num = num + 2363;
		else if (iParam0 == 1449)
			num = num + 2364;
		else if (iParam0 == 1450)
			num = num + 2365;
		else if (iParam0 == 1451)
			num = num + 2366;
		else if (iParam0 == 1452)
			num = num + 2367;
		else if (iParam0 == 1453)
			num = num + 2368;
		else if (iParam0 == 1454)
			num = num + 2369;
		else if (iParam0 == 1455)
			num = num + 2370;
	}
	else if (iParam1 < 36)
	{
		num = 2405 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 26) * (1456 - 1411));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		num = (iParam1 - 36) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2855;
		else if (iParam0 == 1412)
			num = num + 2856;
		else if (iParam0 == 1441)
			num = num + 2857;
		else if (iParam0 == 1442)
			num = num + 2858;
		else if (iParam0 == 1443)
			num = num + 2859;
		else if (iParam0 == 1445)
			num = num + 2860;
		else if (iParam0 == 1447)
			num = num + 2861;
		else if (iParam0 == 1448)
			num = num + 2862;
		else if (iParam0 == 1449)
			num = num + 2863;
		else if (iParam0 == 1450)
			num = num + 2864;
		else if (iParam0 == 1451)
			num = num + 2865;
		else if (iParam0 == 1452)
			num = num + 2866;
		else if (iParam0 == 1453)
			num = num + 2867;
		else if (iParam0 == 1454)
			num = num + 2868;
		else if (iParam0 == 1455)
			num = num + 2869;
	}
	else if (iParam1 < 49)
	{
		num = 5360 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 39) * (1456 - 1411));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		num = (iParam1 - 49) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 5810;
		else if (iParam0 == 1412)
			num = num + 5811;
		else if (iParam0 == 1441)
			num = num + 5812;
		else if (iParam0 == 1442)
			num = num + 5813;
		else if (iParam0 == 1443)
			num = num + 5814;
		else if (iParam0 == 1445)
			num = num + 5815;
		else if (iParam0 == 1447)
			num = num + 5816;
		else if (iParam0 == 1448)
			num = num + 5817;
		else if (iParam0 == 1449)
			num = num + 5818;
		else if (iParam0 == 1450)
			num = num + 5819;
		else if (iParam0 == 1451)
			num = num + 5820;
		else if (iParam0 == 1452)
			num = num + 5821;
		else if (iParam0 == 1453)
			num = num + 5822;
		else if (iParam0 == 1454)
			num = num + 5823;
		else if (iParam0 == 1455)
			num = num + 5824;
	}
	else if (iParam1 < 62)
	{
		num = 6654 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 52) * (1456 - 1411));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		num = (iParam1 - 62) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 7104;
		else if (iParam0 == 1412)
			num = num + 7105;
		else if (iParam0 == 1441)
			num = num + 7106;
		else if (iParam0 == 1442)
			num = num + 7107;
		else if (iParam0 == 1443)
			num = num + 7108;
		else if (iParam0 == 1445)
			num = num + 7109;
		else if (iParam0 == 1447)
			num = num + 7110;
		else if (iParam0 == 1448)
			num = num + 7111;
		else if (iParam0 == 1449)
			num = num + 7112;
		else if (iParam0 == 1450)
			num = num + 7113;
		else if (iParam0 == 1451)
			num = num + 7114;
		else if (iParam0 == 1452)
			num = num + 7115;
		else if (iParam0 == 1453)
			num = num + 7116;
		else if (iParam0 == 1454)
			num = num + 7117;
		else if (iParam0 == 1455)
			num = num + 7118;
	}
	else if (iParam1 < 85)
	{
		num = 8162 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 65) * (1456 - 1411));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		num = (iParam1 - 85) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 9062;
		else if (iParam0 == 1412)
			num = num + 9063;
		else if (iParam0 == 1441)
			num = num + 9064;
		else if (iParam0 == 1442)
			num = num + 9065;
		else if (iParam0 == 1443)
			num = num + 9066;
		else if (iParam0 == 1445)
			num = num + 9067;
		else if (iParam0 == 1447)
			num = num + 9068;
		else if (iParam0 == 1448)
			num = num + 9069;
		else if (iParam0 == 1449)
			num = num + 9070;
		else if (iParam0 == 1450)
			num = num + 9071;
		else if (iParam0 == 1451)
			num = num + 9072;
		else if (iParam0 == 1452)
			num = num + 9073;
		else if (iParam0 == 1453)
			num = num + 9074;
		else if (iParam0 == 1454)
			num = num + 9075;
		else if (iParam0 == 1455)
			num = num + 9076;
	}
	else if (iParam1 < func_107(11, -1))
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_107(7, -1)) * (1456 - 1411));
	}
	else if (iParam1 <= 157)
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_107(7, -1)) * (1456 - 1411));
	}
	else if (iParam1 == 158)
	{
		num = 15306 - 1411;
		num = num + iParam0;
	}
	else if (iParam1 < 184)
	{
		num = 16661 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 159) * (1456 - 1411));
	}
	else if (iParam1 < 194)
	{
		num = 18403 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 184) * (1456 - 1411));
	}
	else if (iParam1 < 231)
	{
		num = 19907 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 194) * (1456 - 1411));
	}
	else if (iParam1 < 261)
	{
		num = 22915 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 231) * (1456 - 1411));
	}
	else if (iParam1 < 271)
	{
		num = 25779 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 261) * (1456 - 1411));
	}
	else if (iParam1 < 281)
	{
		num = 27499 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 271) * (1456 - 1411));
	}
	else if (iParam1 < 291)
	{
		num = 28484 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 281) * (1456 - 1411));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		num = (iParam1 - 291) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 28934;
		else if (iParam0 == 1412)
			num = num + 28935;
		else if (iParam0 == 1441)
			num = num + 28936;
		else if (iParam0 == 1442)
			num = num + 28937;
		else if (iParam0 == 1443)
			num = num + 28938;
		else if (iParam0 == 1445)
			num = num + 28939;
		else if (iParam0 == 1447)
			num = num + 28940;
		else if (iParam0 == 1448)
			num = num + 28941;
		else if (iParam0 == 1449)
			num = num + 28942;
		else if (iParam0 == 1450)
			num = num + 28943;
		else if (iParam0 == 1451)
			num = num + 28944;
		else if (iParam0 == 1452)
			num = num + 28945;
		else if (iParam0 == 1453)
			num = num + 28946;
		else if (iParam0 == 1454)
			num = num + 28947;
		else if (iParam0 == 1455)
			num = num + 28948;
	}
	else if (iParam1 < 304)
	{
		num = 28979 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 294) * (1456 - 1411));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		num = (iParam1 - 304) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 29429;
		else if (iParam0 == 1412)
			num = num + 29430;
		else if (iParam0 == 1441)
			num = num + 29431;
		else if (iParam0 == 1442)
			num = num + 29432;
		else if (iParam0 == 1443)
			num = num + 29433;
		else if (iParam0 == 1445)
			num = num + 29434;
		else if (iParam0 == 1447)
			num = num + 29435;
		else if (iParam0 == 1448)
			num = num + 29436;
		else if (iParam0 == 1449)
			num = num + 29437;
		else if (iParam0 == 1450)
			num = num + 29438;
		else if (iParam0 == 1451)
			num = num + 29439;
		else if (iParam0 == 1452)
			num = num + 29440;
		else if (iParam0 == 1453)
			num = num + 29441;
		else if (iParam0 == 1454)
			num = num + 29442;
		else if (iParam0 == 1455)
			num = num + 29443;
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		num = 30708 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 307) * (1456 - 1411));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		num = 32476 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 317) * (1456 - 1411));
	}
	else if (iParam1 < 347)
	{
		num = 34878 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 337) * (1456 - 1411));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		num = (iParam1 - 347) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35328;
		else if (iParam0 == 1412)
			num = num + 35329;
		else if (iParam0 == 1441)
			num = num + 35330;
		else if (iParam0 == 1442)
			num = num + 35331;
		else if (iParam0 == 1443)
			num = num + 35332;
		else if (iParam0 == 1445)
			num = num + 35333;
		else if (iParam0 == 1447)
			num = num + 35334;
		else if (iParam0 == 1448)
			num = num + 35335;
		else if (iParam0 == 1449)
			num = num + 35336;
		else if (iParam0 == 1450)
			num = num + 35337;
		else if (iParam0 == 1451)
			num = num + 35338;
		else if (iParam0 == 1452)
			num = num + 35339;
		else if (iParam0 == 1453)
			num = num + 35340;
		else if (iParam0 == 1454)
			num = num + 35341;
		else if (iParam0 == 1455)
			num = num + 35342;
	}
	else if (iParam1 < 360)
	{
		num = 35373 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 350) * (1456 - 1411));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		num = (iParam1 - 360) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35823;
		else if (iParam0 == 1412)
			num = num + 35824;
		else if (iParam0 == 1441)
			num = num + 35825;
		else if (iParam0 == 1442)
			num = num + 35826;
		else if (iParam0 == 1443)
			num = num + 35827;
		else if (iParam0 == 1445)
			num = num + 35828;
		else if (iParam0 == 1447)
			num = num + 35829;
		else if (iParam0 == 1448)
			num = num + 35830;
		else if (iParam0 == 1449)
			num = num + 35831;
		else if (iParam0 == 1450)
			num = num + 35832;
		else if (iParam0 == 1451)
			num = num + 35833;
		else if (iParam0 == 1452)
			num = num + 35834;
		else if (iParam0 == 1453)
			num = num + 35835;
		else if (iParam0 == 1454)
			num = num + 35836;
		else if (iParam0 == 1455)
			num = num + 35837;
	}
	else if (iParam1 >= 363 && iParam1 <= 414)
	{
		num = 36948 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 363) * (1456 - 1411));
	}
	else if (iParam1 >= 415 && iParam1 < 515)
	{
		num = 42300 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 415) * (1456 - 1411));
	}
	else if (iParam1 >= 515 && iParam1 < 517)
	{
		num = 51380 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 515) * (1456 - 1411));
	}
	else if (iParam1 >= 517 && iParam1 < 547)
	{
		num = 51556 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 517) * (1456 - 1411));
	}

	return num;
}

void func_117(var uParam0) // Position - 0x158DD (88285)
{
	func_118(uParam0);
	uParam0->f_104 = 0;
	uParam0->f_105 = 0;
	uParam0->f_106 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_107), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_123), "", 64);
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
	uParam0->f_141 = 0;
	uParam0->f_142 = 0;
	return;
}

void func_118(var uParam0) // Position - 0x15920 (88352)
{
	func_119(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
	return;
}

void func_119(var uParam0) // Position - 0x159B0 (88496)
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

void func_120(int iParam0, int iParam1) // Position - 0x15A60 (88672)
{
	int bossId1;
	int bossId2;
	int bossType;
	int reason;

	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				reason = joaat("INVALID");
				break;
		
			case 1:
				reason = joaat("Destroyed");
				break;
		
			case 2:
				reason = joaat("SOLD");
				break;
		
			case 3:
				reason = joaat("OVERWRITE");
				break;
		
			case 4:
				reason = joaat("exploit");
				break;
		
			case 5:
				reason = joaat("UNOWNED");
				break;
		
			case 6:
				reason = joaat("Duplicate");
				break;
		
			case 7:
				reason = -1921848560;
				break;
		}
	
		if (func_130(true))
		{
			bossId1 = func_128(_GET_BOSS_OF_LOCAL_PLAYER());
			bossId2 = func_126(_GET_BOSS_OF_LOCAL_PLAYER());
			bossType = func_121(func_122(true));
		}
		else
		{
			bossType = -1;
		}
	
		STATS::PLAYSTATS_VEH_DEL(bossId1, bossId2, bossType, Global_1586542[iParam0 /*143*/].f_66, reason);
	}

	return;
}

int func_121(BOOL bParam0) // Position - 0x15B3B (88891)
{
	if (bParam0)
		return 1;

	return 0;
}

BOOL func_122(BOOL bParam0) // Position - 0x15B4D (88909)
{
	return func_123(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_123(Player plParam0, BOOL bParam1) // Position - 0x15B5F (88927)
{
	return func_124(plParam0, bParam1, 1);
}

int func_124(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x15B70 (88944)
{
	Player player;

	if (!func_33(plParam0))
		return 0;

	if (!bParam1)
		if (func_125(plParam0, iParam2))
			return 0;

	player = Global_1887694[plParam0 /*611*/].f_10;

	if (func_33(player) && Global_1887694[player /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_125(Player plParam0, int iParam1) // Position - 0x15BCC (89036)
{
	if (func_33(plParam0))
		if (func_33(Global_1887694[plParam0 /*611*/].f_10))
			if (Global_1887694[plParam0 /*611*/].f_10 == plParam0 && Global_1887694[plParam0 /*611*/].f_10.f_431 == iParam1)
				return true;

	return false;
}

int func_126(Player plParam0) // Position - 0x15C1B (89115)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887694[plParam0 /*611*/].f_10.f_8[1];
}

Player _INVALID_PLAYER_INDEX() // Position - 0x15C40 (89152)
{
	return -1;
}

int func_128(Player plParam0) // Position - 0x15C49 (89161)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887694[plParam0 /*611*/].f_10.f_8[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x15C6E (89198)
{
	return Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10;
}

BOOL func_130(BOOL bParam0) // Position - 0x15C83 (89219)
{
	return func_131(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_131(Player plParam0, BOOL bParam1) // Position - 0x15C95 (89237)
{
	if (!func_33(plParam0))
		return false;

	if (!bParam1)
		if (func_132(plParam0))
			return false;

	return func_33(Global_1887694[plParam0 /*611*/].f_10);
}

BOOL func_132(Player plParam0) // Position - 0x15CCD (89293)
{
	if (func_33(plParam0))
		if (func_33(Global_1887694[plParam0 /*611*/].f_10))
			return Global_1887694[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

void func_133(int iParam0, int iParam1, int iParam2) // Position - 0x15D02 (89346)
{
	if (iParam0 < 0)
		return;

	iParam1 = iParam1 + 1;
	func_134(iParam0, iParam1, iParam2);

	if (iParam0 >= 547)
		return;

	if (iParam2 == func_32() || iParam2 == -1)
		Global_1938530[iParam0] = iParam1;

	return;
}

void func_134(int iParam0, int iParam1, int iParam2) // Position - 0x15D4C (89420)
{
	if (iParam1 <= 255)
	{
		func_115(func_137(iParam0), iParam1, iParam2);
		func_115(func_136(iParam0), 0, iParam2);
		func_115(func_135(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_115(func_137(iParam0), 255, iParam2);
	}

	if (iParam1 <= 510)
	{
		func_115(func_136(iParam0), iParam1 - 255, iParam2);
		func_115(func_135(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_115(func_136(iParam0), 255, iParam2);
	}

	if (iParam1 <= 765)
		func_115(func_135(iParam0), iParam1 - 510, iParam2);

	return;
}

int func_135(int iParam0) // Position - 0x15DEB (89579)
{
	if (iParam0 < 515)
		return 50500 + iParam0;
	else if (iParam0 < 517)
		return (51544 + iParam0) - 515;
	else if (iParam0 < 547)
		return (54016 + iParam0) - 517;

	return 50500 + iParam0;
}

int func_136(int iParam0) // Position - 0x15E3E (89662)
{
	if (iParam0 < 261)
		return 24625 + iParam0;
	else if (iParam0 < 271)
		return (26349 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28069 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30200 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31548 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34096 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36594 + iParam0) - 337;
	else if (iParam0 <= 414)
		return (41160 + iParam0) - 363;
	else if (iParam0 < 515)
		return (50400 + iParam0) - 415;
	else if (iParam0 < 517)
		return (51542 + iParam0) - 515;
	else if (iParam0 < 547)
		return (53986 + iParam0) - 517;

	return 24625 + iParam0;
}

int func_137(int iParam0) // Position - 0x15F53 (89939)
{
	if (iParam0 < 158)
		if (iParam0 <= 38)
			return 4036 + iParam0;
		else if (iParam0 <= 48)
			return (5905 + iParam0) - 39;
		else if (iParam0 <= 51)
			return (6025 + iParam0) - 49;
		else if (iParam0 <= 64)
			return (7199 + iParam0) - 52;
		else if (iParam0 <= 87)
			return (9207 + iParam0) - 65;
		else
			return (14734 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15356;
	else if (iParam0 < 261)
		if (iParam0 < 184)
			return (17911 + iParam0) - 159;
		else if (iParam0 < 194)
			return (18903 + iParam0) - 184;
		else if (iParam0 < 231)
			return (21757 + iParam0) - 194;
		else
			return (24595 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26339 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28059 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30174 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31538 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34076 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36568 + iParam0) - 337;
	else if (iParam0 <= 414)
		return (41108 + iParam0) - 363;
	else if (iParam0 < 515)
		return (50300 + iParam0) - 415;
	else if (iParam0 < 517)
		return (51540 + iParam0) - 515;
	else if (iParam0 < 547)
		return (53956 + iParam0) - 517;

	return 4036 + iParam0;
}

BOOL func_138() // Position - 0x1613E (90430)
{
	return Global_2672942.f_63.f_57;
}

int _GET_ACTIVE_PV_SLOT() // Position - 0x1614E (90446)
{
	if (Global_2359296[func_73() /*5571*/].f_681.f_2 >= 547)
	{
		Global_2359296[func_73() /*5571*/].f_681.f_2 = -1;
		return -1;
	}

	return Global_2359296[func_73() /*5571*/].f_681.f_2;
}

BOOL func_140(Hash hParam0) // Position - 0x16191 (90513)
{
	switch (hParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob5"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
		case -1659004814:
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case 239897677:
		case 858355070:
		case 84351789:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_141(Hash hParam0, BOOL bParam1) // Position - 0x16307 (90887)
{
	switch (hParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("blazer5"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("trailersmall2"):
			return true;
	
		case joaat("nightshark"):
			if (func_143(*Global_4718592.f_194133) || func_142(*Global_4718592.f_194133))
				if (!bParam1)
					return true;
			break;
	
		case joaat("technical3"):
		case joaat("technical"):
			if (func_143(*Global_4718592.f_194133))
				return true;
			break;
	
		case joaat("kosatka"):
			return true;
	}

	return false;
}

BOOL func_142(int iParam0) // Position - 0x163CF (91087)
{
	return iParam0 == 50;
}

BOOL func_143(int iParam0) // Position - 0x163DC (91100)
{
	return iParam0 == 49;
}

int func_144(Hash hParam0, int iParam1) // Position - 0x163E9 (91113)
{
	int cloudTimeAsInt;
	int num;
	int i;

	if (Global_2707806)
		return 1;

	if (!Global_2707807 && iParam1 >= 0 && iParam1 <= 547)
		if (IS_BIT_SET(Global_1586542[iParam1 /*143*/].f_104, 2))
			return 1;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	num = 0;

	switch (hParam0)
	{
		case -1321131184:
			num = Global_262145.f_36169[0];
			break;
	
		case -1289225626:
			num = Global_262145.f_36169[1];
			break;
	
		case -362690998:
			num = Global_262145.f_36169[2];
			break;
	
		case -1948949064:
			num = Global_262145.f_36169[3];
			break;
	
		case -1466692365:
			num = Global_262145.f_36169[4];
			break;
	
		case joaat("cargobob5"):
			num = Global_262145.f_36169[5];
			break;
	
		case 2042703219:
			num = Global_262145.f_36169[6];
			break;
	
		case 1484920335:
			num = Global_262145.f_36169[7];
			break;
	
		case 1891140410:
			num = Global_262145.f_36169[8];
			break;
	
		case 1992041063:
			num = Global_262145.f_36169[9];
			break;
	
		case 858355070:
			num = Global_262145.f_36169[10];
			break;
	
		case joaat("URANUS"):
			num = Global_262145.f_36169[11];
			break;
	
		case 84351789:
			num = Global_262145.f_36169[12];
			break;
	
		case -660007725:
			num = Global_262145.f_36169[13];
			break;
	
		case -973016778:
			num = Global_262145.f_36169[14];
			break;
	
		case 127317925:
			num = Global_262145.f_36169[15];
			break;
	
		case joaat("taco"):
			num = Global_262145.f_36169[16];
			break;
	
		case joaat("predator"):
			num = Global_262145.f_36169[17];
			break;
	}

	if (cloudTimeAsInt > num)
		return 1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (hParam0 == Global_1835471[i])
			return 1;
	}

	return 0;
}

int func_145(Hash hParam0) // Position - 0x16616 (91670)
{
	if (func_140(hParam0))
		return 1;

	if (hParam0 == joaat("blazer5") || hParam0 == joaat("boxville5") || hParam0 == joaat("dune5") || hParam0 == joaat("phantom2") || hParam0 == joaat("ruiner2") || hParam0 == joaat("technical2") || hParam0 == joaat("voltic2") || hParam0 == joaat("wastelander") || hParam0 == joaat("trailersmall2") || hParam0 == joaat("technical3") || hParam0 == joaat("insurgent3") || hParam0 == joaat("khanjali") || hParam0 == joaat("chernobog") || hParam0 == joaat("riot2") || hParam0 == joaat("thruster") || hParam0 == joaat("stromberg") || hParam0 == joaat("deluxo") || hParam0 == joaat("speedo4") || hParam0 == joaat("speedo5") || hParam0 == joaat("mule4") || hParam0 == joaat("pounder2") || hParam0 == joaat("oppressor2"))
		return 1;

	switch (hParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
			return 0;
	}

	switch (hParam0)
	{
		case joaat("mule5"):
		case -129283887:
		case -842765535:
		case 728350375:
		case -671564942:
		case -902029319:
		case joaat("pbus2"):
		case joaat("taco"):
		case joaat("predator"):
			return 0;
	
		default:
		
	}

	if (!VEHICLE::IS_THIS_MODEL_A_CAR(hParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(hParam0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(hParam0))
		return 0;

	return 1;
}

void func_146(int iParam0) // Position - 0x16C50 (93264)
{
	if (func_149(&(Global_1586542[iParam0 /*143*/].f_66)))
		func_147(iParam0);

	return;
}

void func_147(int iParam0) // Position - 0x16C6F (93295)
{
	func_148(&(Global_1586542[iParam0 /*143*/].f_66));
	func_97(iParam0, &Global_1586542[iParam0 /*143*/], false, -1, false, false);
	return;
}

void func_148(Hash hParam0) // Position - 0x16C98 (93336)
{
	switch (*hParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
			*hParam0 = joaat("bison");
			break;
	
		case joaat("speedo2"):
			*hParam0 = joaat("speedo");
			break;
	
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			*hParam0 = joaat("burrito3");
			break;
	}

	return;
}

BOOL func_149(Hash hParam0) // Position - 0x16CF3 (93427)
{
	switch (*hParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("speedo2"):
		case joaat("burrito"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			return true;
	}

	return false;
}

BOOL func_150(Hash hParam0, int iParam1) // Position - 0x16D2F (93487)
{
	if (!func_162(iParam1) && !func_161(hParam0))
		if (func_160(hParam0, false))
			if (iParam1 == func_159(hParam0))
				return true;
			else
				return false;
		else if (func_158(iParam1))
			return false;

	if (func_157(hParam0))
		if (!func_163(iParam1))
			return false;
	else if (func_163(iParam1))
		return false;

	if (func_156(iParam1))
		if (!(VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(hParam0)))
			return false;

	if (func_162(iParam1))
		if (!func_161(hParam0))
			return false;
		else if (func_155(hParam0) + func_164(11, -1) != iParam1)
			return false;

	if (func_154(iParam1))
		if (!func_140(hParam0))
			return false;
	else if (func_140(hParam0))
		return false;

	if (!func_152(iParam1, true))
		if (func_151(hParam0))
			return false;

	if (iParam1 == 223 && hParam0 != joaat("oppressor2"))
		return false;

	if (iParam1 == 278 && hParam0 != joaat("toreador") && hParam0 != joaat("stromberg"))
		return false;

	if (hParam0 == joaat("cerberus") || hParam0 == joaat("cerberus2") || hParam0 == joaat("cerberus3"))
		if (iParam1 != 236 && iParam1 != 246 && iParam1 != 256)
			return false;
	else if (iParam1 == 236 || iParam1 == 246 || iParam1 == 256)
		return false;

	return true;
}

BOOL func_151(Hash hParam0) // Position - 0x16EE6 (93926)
{
	switch (hParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return true;
	}

	return false;
}

BOOL func_152(int iParam0, BOOL bParam1) // Position - 0x16F33 (94003)
{
	if (iParam0 >= func_164(18, -1) && iParam0 < func_107(20, -1))
		return true;

	if (bParam1)
		return func_153(iParam0);

	return false;
}

BOOL func_153(int iParam0) // Position - 0x16F6A (94058)
{
	if (iParam0 == 236 || iParam0 == 246 || iParam0 == 256)
		return 1;

	return 0;
}

BOOL func_154(int iParam0) // Position - 0x16F96 (94102)
{
	if (iParam0 >= func_164(12, -1) && iParam0 < func_107(12, -1))
		return true;

	if (iParam0 >= 517 && iParam0 < 532)
		return true;

	if (iParam0 >= 532 && iParam0 < 537)
		return true;

	return false;
}

int func_155(Hash hParam0) // Position - 0x16FEF (94191)
{
	Hash hash;

	hash = hParam0;

	switch (hash)
	{
		case joaat("technical2"):
			return 0;
	
		case joaat("boxville5"):
			return 1;
	
		case joaat("wastelander"):
			return 2;
	
		case joaat("phantom2"):
			return 3;
	
		case joaat("voltic2"):
			return 4;
	
		case joaat("dune4"):
			return 5;
	
		case joaat("dune5"):
			return 5;
	
		case joaat("ruiner2"):
			return 6;
	
		case joaat("blazer5"):
			return 7;
	}

	return -1;
}

BOOL func_156(int iParam0) // Position - 0x17078 (94328)
{
	if (iParam0 >= func_164(6, -1) && iParam0 < func_107(6, -1))
		return true;

	return false;
}

BOOL func_157(Hash hParam0) // Position - 0x1709F (94367)
{
	if (hParam0 == joaat("bmx"))
		return true;

	if (hParam0 == joaat("cruiser"))
		return true;

	if (hParam0 == joaat("scorcher"))
		return true;

	if (hParam0 == joaat("tribike") || hParam0 == joaat("tribike2") || hParam0 == joaat("tribike3"))
		return true;

	if (hParam0 == -897824023 || hParam0 == -1983622024)
		return true;

	if (hParam0 == joaat("fixter"))
		return true;

	return false;
}

BOOL func_158(int iParam0) // Position - 0x17128 (94504)
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return true;
	}

	if (iParam0 >= func_164(11, -1) && iParam0 < func_107(11, -1))
		return true;

	return false;
}

int func_159(Hash hParam0) // Position - 0x171AD (94637)
{
	if (func_161(hParam0))
	{
		return func_155(hParam0) + func_164(11, -1);
	}
	else
	{
		switch (hParam0)
		{
			case joaat("trailersmall2"):
				return 157;
		
			case joaat("hauler2"):
			case joaat("phantom3"):
				return 158;
		
			case joaat("avenger"):
			case joaat("avenger3"):
				return 190;
		
			case joaat("khanjali"):
				return 188;
		
			case joaat("chernobog"):
				return 187;
		
			case joaat("riot2"):
				return 186;
		
			case joaat("thruster"):
				return 189;
		
			case -1576586413:
				return 413;
		
			case 1384502824:
				return 414;
		}
	
		if (hParam0 == joaat("terbyte"))
			return 222;
		else if (hParam0 == joaat("speedo4"))
			return 224;
		else if (hParam0 == joaat("mule4"))
			return 225;
		else if (hParam0 == joaat("pounder2"))
			return 226;
	
		if (hParam0 == joaat("rcbandito"))
			return 257;
	
		if (hParam0 == joaat("minitank"))
			return 279;
	}

	return -1;
}

BOOL func_160(int iParam0, BOOL bParam1) // Position - 0x172CB (94923)
{
	if (func_161(iParam0))
		return true;

	switch (iParam0)
	{
		case joaat("trailersmall2"):
		case joaat("hauler2"):
		case joaat("phantom3"):
			if (!bParam1)
				return true;
			break;
	
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("khanjali"):
		case joaat("chernobog"):
		case joaat("riot2"):
		case joaat("thruster"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("minitank"):
		case -1576586413:
		case 1384502824:
			return true;
	}

	return false;
}

BOOL func_161(Hash hParam0) // Position - 0x17362 (95074)
{
	switch (hParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return true;
	}

	return false;
}

BOOL func_162(int iParam0) // Position - 0x173A9 (95145)
{
	if (iParam0 >= func_164(11, -1) && iParam0 < func_107(11, -1))
		return true;

	return false;
}

BOOL func_163(int iParam0) // Position - 0x173D2 (95186)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return true;
	}

	return false;
}

int func_164(int iParam0, int iParam1) // Position - 0x1749D (95389)
{
	int num;

	switch (iParam0)
	{
		case 8:
			return 88;
	
		case 9:
			return 108;
	
		case 10:
			return 128;
	
		case 11:
			return 148;
	
		case 6:
			return 65;
	
		case 7:
			return 75;
	
		case 5:
			return -1;
	
		case 12:
			if (iParam1 == 1)
				return 517;
			else if (iParam1 == 2)
				return 532;
		
			return 159;
	
		case 13:
			return 179;
	
		case 14:
			return 191;
	
		case 15:
			return 192;
	
		case 16:
			return 202;
	
		case 17:
			return 212;
	
		case 18:
			return 227;
	
		case 19:
			return 237;
	
		case 20:
			return 247;
	
		case 21:
			return 258;
	
		case 22:
			return 268;
	
		case 23:
			return 281;
	
		case 24:
			return 294;
	
		case 25:
			return 307;
	
		case 26:
			return 317;
	
		case 27:
			return 337;
	
		case 28:
			return 350;
	
		case 29:
			return 363;
	
		case 30:
			return 415;
	
		case 31:
			return 515;
	
		case 32:
			return 537;
	}

	if (func_92(iParam0))
	{
		num = func_109(iParam0);
		return func_165(num);
	}

	return func_167(iParam0, -1, true) * iParam0;
}

int func_165(int iParam0) // Position - 0x1767F (95871)
{
	switch (iParam0)
	{
		case 0:
			return 156;
	
		case 2:
			return 223;
	
		case 1:
			return 224;
	
		case 3:
			return 278;
	
		default:
		
	}

	return -1;
}

int func_166(int iParam0) // Position - 0x176BC (95932)
{
	switch (iParam0)
	{
		case 29:
			return 10;
	
		case 30:
			return 20;
	
		default:
		
	}

	return 0;
}

int func_167(int iParam0, int iParam1, BOOL bParam2) // Position - 0x176E6 (95974)
{
	if (iParam0 == -1)
		if (iParam1 >= 1)
			if (func_171(iParam1, false, false))
				return 20;
			else if (func_170(iParam1))
				return 0;
			else if (func_169(iParam1, -1))
				return 10;
			else if (iParam1 == 115)
				return 8;
			else if (iParam1 == 116)
				return func_168();
			else if (iParam1 == 117)
				return 7;
			else if (iParam1 == 118)
				return 1;
			else if (iParam1 == 119 || iParam1 == 120 || iParam1 == 121)
				return 10;
			else if (iParam1 == 122)
				return 9;
			else if (iParam1 == 123 || iParam1 == 124)
				return 10;
			else if (iParam1 == 125)
				return 10;
			else if (iParam1 == 126)
				return 10;
			else if (iParam1 == 127)
				return 10;
			else if (iParam1 == 128)
				return 20;
			else if (iParam1 == 129)
				return 50;
			else if (iParam1 == 131)
				return 100;
			else if (iParam1 == 132)
				return 2;
			else if (iParam1 == 133)
				return 10;
			else if (iParam1 <= 131 && iParam1 > 0)
				if (Global_1312333[iParam1 /*1951*/].f_33 == 2)
					if (bParam2)
						return 3;
					else
						return 2;
				else if (Global_1312333[iParam1 /*1951*/].f_33 == 6)
					if (bParam2)
						return 8;
					else
						return 6;
				else if (Global_1312333[iParam1 /*1951*/].f_33 == 10)
					if (bParam2)
						return 13;
					else
						return 10;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
	
		case 5:
			return 0;
	
		case 6:
			return 10;
	
		case 8:
		case 9:
		case 10:
			return 20;
	
		case 11:
			return 8;
	
		case 12:
			return func_168();
	
		case 13:
			return 7;
	
		case 14:
			return 1;
	
		case 15:
		case 16:
		case 17:
			return 10;
	
		case 18:
		case 19:
		case 20:
			return 10;
	
		case 21:
			return 10;
	
		case 22:
			return 10;
	
		case 25:
			return 10;
	
		case 26:
			return 20;
	
		case 29:
			return 50;
	
		case 30:
			return 100;
	
		case 31:
			return 2;
	
		case 32:
			return 10;
	}

	return 0;
}

int func_168() // Position - 0x17A06 (96774)
{
	return 40;
}

BOOL func_169(int iParam0, int iParam1) // Position - 0x17A15 (96789)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

BOOL func_170(int iParam0) // Position - 0x17AF2 (97010)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

BOOL func_171(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x17B21 (97057)
{
	if (bParam2)
		return func_172(PLAYER::PLAYER_ID(), false);

	if (bParam1)
	{
		if (func_172(PLAYER::PLAYER_ID(), false))
			return false;
	
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}

	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}

	return false;
}

BOOL func_172(Player plParam0, BOOL bParam1) // Position - 0x17BFC (97276)
{
	if (Global_1845099 != _INVALID_PLAYER_INDEX())
	{
		if (!func_174(Global_1845099))
			return false;
	
		if (bParam1)
			if (PLAYER::PLAYER_ID() != Global_1845099)
				if (IS_BIT_SET(Global_2657994[Global_1845099 /*467*/].f_202, 24) || func_173(Global_1845099))
					return true;
	}

	return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 24);
}

BOOL func_173(Player plParam0) // Position - 0x17C62 (97378)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 9);

	return false;
}

BOOL func_174(Player plParam0) // Position - 0x17C85 (97413)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_393, 2);

	return false;
}

BOOL func_175(int iParam0) // Position - 0x17CAE (97454)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return true;
	
		case 22:
			if (!func_179())
				return true;
			break;
	
		case 25:
			if (!func_176(true))
				return true;
			break;
	}

	return false;
}

BOOL func_176(BOOL bParam0) // Position - 0x17CFC (97532)
{
	if (bParam0)
		return IS_BIT_SET(func_178(9618, -1), 0);

	return func_177(PLAYER::PLAYER_ID());
}

BOOL func_177(Player plParam0) // Position - 0x17D1E (97566)
{
	if (plParam0 == PLAYER::PLAYER_ID())
		return IS_BIT_SET(func_178(9618, -1), 0);

	if (plParam0 != -1)
		return IS_BIT_SET(Global_1977873[plParam0 /*128*/].f_1, 0);

	return false;
}

int func_178(int iParam0, int iParam1) // Position - 0x17D52 (97618)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17239)
	{
		statHash = func_99(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_179() // Position - 0x17D81 (97665)
{
	return func_182(false) && func_180(false);
}

BOOL func_180(BOOL bParam0) // Position - 0x17D98 (97688)
{
	if (bParam0)
		return IS_BIT_SET(func_178(8726, -1), 4);

	return func_181(PLAYER::PLAYER_ID());
}

BOOL func_181(Player plParam0) // Position - 0x17DBA (97722)
{
	if (plParam0 == PLAYER::PLAYER_ID())
		return IS_BIT_SET(func_178(8726, -1), 4);

	if (plParam0 != -1)
		return IS_BIT_SET(Global_1971259[plParam0 /*68*/].f_40, 4);

	return false;
}

BOOL func_182(BOOL bParam0) // Position - 0x17DEE (97774)
{
	if (bParam0)
		return _STAT_GET_PACKED_BOOL(27227, -1);

	if (PLAYER::PLAYER_ID() != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_268.f_435.f_1, 2);

	return false;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x17E2A (97834)
{
	if (iParam1 == -1)
		iParam1 = func_32();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_184(int iParam0, int iParam1) // Position - 0x17E46 (97862)
{
	int num;
	int num2;

	num = iParam1;

	if (iParam1 == -1)
		num = func_32();

	if (iParam0 == 7 && !Global_262145.f_17354)
		return 0;

	if (iParam0 == 30)
		if (!func_189())
			return 131;
		else
			return 0;

	if (func_92(iParam0))
	{
		num2 = func_109(iParam0);
	
		if (num2 == 0 && func_178(5396, iParam1) != 0)
			return 1234;
	
		if (func_188(-1) && num2 == 2)
			return 1236;
	
		if (func_187(PLAYER::PLAYER_ID()) && num2 == 1)
			return 1237;
	
		if (func_186(-1) && num2 == 3)
			return 1238;
	}

	if (iParam0 == 29)
		if (func_185(iParam0, num) > 0)
			return 129;
		else
			return 0;

	if (iParam0 == 0)
	{
		return func_178(1279, num);
	}
	else if (iParam0 == 99)
	{
		return func_178(13558, num);
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 33)
			return 0;
	
		return func_185(iParam0, num);
	}

	return 0;
}

int func_185(int iParam0, int iParam1) // Position - 0x17F6E (98158)
{
	switch (iParam0)
	{
		case 0:
			return func_178(1484, iParam1);
	
		case 1:
			return func_178(1878, iParam1);
	
		case 2:
			return func_178(2269, iParam1);
	
		case 3:
			return func_178(2932, iParam1);
	
		case 4:
			return func_178(3061, iParam1);
	
		case 5:
			return func_178(3230, iParam1);
	
		case 6:
			return func_178(3233, iParam1);
	
		case 7:
			return func_178(3235, iParam1);
	
		case 8:
			return func_178(4023, iParam1);
	
		case 9:
			return func_178(4026, iParam1);
	
		case 10:
			return func_178(4029, iParam1);
	
		case 11:
			return func_178(4032, iParam1);
	
		case 12:
			return func_178(6113, iParam1);
	
		case 13:
			return func_178(6171, iParam1);
	
		case 14:
			return func_178(6549, iParam1);
	
		case 15:
			return func_178(6562, iParam1);
	
		case 16:
			return func_178(6565, iParam1);
	
		case 17:
			return func_178(6568, iParam1);
	
		case 18:
			return func_178(7286, iParam1);
	
		case 19:
			return func_178(7288, iParam1);
	
		case 20:
			return func_178(7290, iParam1);
	
		case 21:
			return func_178(8013, iParam1);
	
		case 22:
			return func_178(8537, iParam1);
	
		case 23:
			return func_178(8980, iParam1);
	
		case 24:
			return func_178(8983, iParam1);
	
		case 25:
			return func_178(9624, iParam1);
	
		case 26:
			return func_178(9914, iParam1);
	
		case 27:
			return func_178(10442, iParam1);
	
		case 28:
			return func_178(10445, iParam1);
	
		case 29:
			return func_178(10876, iParam1);
	
		case 31:
			return func_178(12300, iParam1);
	
		case 32:
			return func_178(12986, iParam1);
	
		default:
		
	}

	return 0;
}

BOOL func_186(int iParam0) // Position - 0x18249 (98889)
{
	return func_178(9517, iParam0) != 0;
}

BOOL func_187(Player plParam0) // Position - 0x1825C (98908)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845270[plParam0 /*892*/].f_268.f_360 != 0;

	return false;
}

BOOL func_188(int iParam0) // Position - 0x18282 (98946)
{
	if (!Global_262145.f_23781)
		return false;

	return func_178(7210, iParam0) != 0;
}

BOOL func_189() // Position - 0x182A4 (98980)
{
	return func_190(11);
}

BOOL func_190(int iParam0) // Position - 0x182B2 (98994)
{
	return IS_BIT_SET(Global_1944106, iParam0);
}

BOOL func_191(int iParam0) // Position - 0x182C1 (99009)
{
	switch (iParam0)
	{
		case 29:
		case 30:
			return true;
	}

	return false;
}

void func_192(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x182E4 (99044)
{
	Global_23987.f_5678[0] = bParam0;
	Global_23987.f_5678[1] = bParam1;
	Global_23987.f_5678[2] = bParam2;
	Global_23987.f_5678[3] = bParam3;
	Global_23987.f_5678[4] = bParam4;
	return;
}

BOOL func_193(int iParam0, var uParam1, var uParam2, char* sParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x18323 (99107)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num;
	int i;
	int j;
	int num2;
	int num3;
	int num4;
	var unk;
	int num5;
	BOOL flag4;
	int num6;
	Hash model;

	func_225(false, false);
	func_222(sParam3);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(false, false, false, false, false);
	flag = false;
	flag2 = false;
	flag3 = false;
	num = -1;
	num5 = 0;
	flag4 = false;
	*uParam5 = 0;
	*uParam1 = 0;

	for (j = 0; j < 33; j = j + 1)
	{
		num6 = func_184(j, -1);
	
		if (num6 <= 0 && func_209(j) && func_208(j) && !func_175(j))
		{
			if (func_209(j) && func_69(j) == iParam0)
			{
				if (uParam4->f_3 == *uParam1)
					uParam4->f_2 = 16;
			
				func_203(&unk, j);
				func_48(*uParam1, &unk, 0, false, 0, false, 0);
				uParam2->[*uParam1] = j;
				*uParam1 = *uParam1 + 1;
			}
		}
	
		if (num6 > 0 && func_209(j) && func_69(j) == iParam0 && func_208(j) && !func_175(j) && j != 11 && j != 12)
		{
			flag2 = false;
			flag3 = false;
			num = -1;
			flag4 = false;
			num5 = 0;
		
			if (!func_200(*uParam4, j))
			{
				num5 = 1;
			}
			else
			{
				num4 = func_167(-1, num6, bParam6);
			
				if (j == 13)
					num4 = 11;
				else if (j == 18)
					num4 = 10;
			
				if (j == 30 && !flag4 && !func_198())
				{
					if (!func_197(uParam4->f_1))
					{
						flag4 = true;
						num5 = 11;
					}
				}
			
				if (!flag4)
				{
					for (i = 0; i < num4; i = i + 1)
					{
						num2 = func_164(j, -1) + i;
						func_77(num2, &num3, true);
					
						if (num3 < 0)
						{
							if (func_150(*uParam4, num2))
							{
								num5 = 2;
								flag3 = true;
								flag4 = true;
								num = num2;
								break;
							}
						}
					}
				}
			
				if (!flag4)
				{
					if (j != 131 && !func_198())
					{
						if (func_197(uParam4->f_1))
						{
							flag4 = true;
							num5 = 12;
						}
					}
				}
			
				if (!flag4)
				{
					for (i = 0; i < num4; i = i + 1)
					{
						num2 = func_164(j, -1) + i;
						func_77(num2, &num3, true);
					
						if (num2 == uParam4->f_1 && num4 != 1)
						{
						}
						else if (func_163(num2) && !bParam6)
						{
						}
						else if (num3 >= 0)
						{
							num5 = 3;
							model = func_71(num3);
						
							if (STREAMING::IS_MODEL_A_VEHICLE(model) && !func_141(model, true) && !func_140(model) && func_194(model))
							{
								if (func_150(*uParam4, num2) && func_150(model, uParam4->f_1) && !IS_BIT_SET(Global_1586542[num3 /*143*/].f_104, 10))
								{
									num5 = 4;
									flag2 = true;
									break;
								}
							}
						}
					}
				}
			}
		
			if (uParam4->f_3 == *uParam1)
			{
				uParam4->f_2 = num5;
			
				if (!flag3)
					uParam4->f_4 = -1;
				else
					uParam4->f_4 = num;
			
				flag = flag2 || flag3;
			}
		
			func_203(&unk, j);
			func_48(*uParam1, &unk, 0, flag2 || flag3, 0, false, 0);
			uParam2->[*uParam1] = j;
			*uParam1 = *uParam1 + 1;
		}
	}

	return flag;
}

BOOL func_194(Hash hParam0) // Position - 0x1865C (99932)
{
	if (func_196() && func_195(hParam0, false))
		return false;

	return true;
}

int func_195(Hash hParam0, BOOL bParam1) // Position - 0x1867C (99964)
{
	switch (hParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
	
		case joaat("oppressor2"):
			if (bParam1)
				return 1;
			break;
	}

	return 0;
}

int func_196() // Position - 0x186E7 (100071)
{
	return Global_2684721.f_18;
}

BOOL func_197(int iParam0) // Position - 0x186F5 (100085)
{
	if (iParam0 >= func_164(30, -1) && iParam0 < func_107(30, -1))
		return true;

	return false;
}

BOOL func_198() // Position - 0x1871E (100126)
{
	if (func_190(3))
		if (func_190(7))
			return true;
		else
			return false;

	if (func_199())
		return true;

	return false;
}

BOOL func_199() // Position - 0x1874D (100173)
{
	if (!IS_BIT_SET(Global_1963591.f_3, 3) && !IS_BIT_SET(Global_1963591.f_3, 2) && MISC::GET_FRAME_COUNT() % Global_262145.f_31169 == 0)
		MISC::SET_BIT(&(Global_1963591.f_3), 2);

	if (!IS_BIT_SET(Global_1963591.f_3, 1) || IS_BIT_SET(Global_1963591.f_3, 2) && !NETWORK::IS_COMMERCE_STORE_OPEN() && !NETWORK::IS_COMMERCE_DATA_FETCH_IN_PROGRESS())
	{
		if (unk_0x483F6369B8CEE24B())
		{
			unk_0x9FA18B5CD8803086(&Global_1963591);
			MISC::SET_BIT(&(Global_1963591.f_3), 1);
		
			if (IS_BIT_SET(Global_1963591.f_3, 2))
				MISC::CLEAR_BIT(&(Global_1963591.f_3), 2);
		}
	}

	if (Global_1963591)
		if (!IS_BIT_SET(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203, 31))
			MISC::SET_BIT(&(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203), 31);
	else if (IS_BIT_SET(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203, 31))
		MISC::CLEAR_BIT(&(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203), 31);

	return Global_1963591;
}

BOOL func_200(Hash hParam0, int iParam1) // Position - 0x18846 (100422)
{
	int num;

	if (hParam0 == joaat("minitank"))
		return false;

	if (hParam0 == -1444856003)
		if (iParam1 == 31)
			return true;
		else
			return false;

	if (hParam0 == joaat("thruster") || hParam0 == joaat("khanjali") || hParam0 == joaat("riot2") || hParam0 == joaat("chernobog"))
		if (iParam1 == 13)
			return true;
		else
			return false;

	if (hParam0 == joaat("avenger") || hParam0 == func_202(true))
		if (iParam1 == 13 || iParam1 == 12)
			return true;
		else
			return false;

	if (iParam1 != 11)
		if (func_161(hParam0))
			return false;

	if (hParam0 == joaat("cerberus") || hParam0 == joaat("cerberus2") || hParam0 == joaat("cerberus3"))
		if (iParam1 == 18 || iParam1 == 19 || iParam1 == 20)
			return true;
		else
			return false;

	if (hParam0 == joaat("bruiser") || hParam0 == joaat("bruiser2") || hParam0 == joaat("bruiser3") || hParam0 == joaat("monster3") || hParam0 == joaat("monster4") || hParam0 == joaat("monster5"))
		if (iParam1 == 18 || iParam1 == 19 || iParam1 == 20)
			return true;
		else
			return false;

	if (hParam0 == joaat("speedo4") || hParam0 == joaat("mule4") || hParam0 == joaat("pounder2"))
	{
		if (iParam1 == 14 || iParam1 == 15 || iParam1 == 16 || iParam1 == 17)
		{
		}
		else
		{
			return false;
		}
	}

	if (func_140(hParam0))
		if (iParam1 == 12)
			return true;
		else
			return false;
	else if (iParam1 == 12)
		return false;

	if (hParam0 == func_201())
		if (iParam1 == 15)
			return true;
		else
			return false;

	if (iParam1 == 6)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(hParam0))
			return false;
		else if (VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(hParam0))
			return true;
		else
			return false;
	}
	else if (iParam1 == 5)
	{
		return false;
	}
	else if (iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 13 || iParam1 == 14 || iParam1 == 15 || iParam1 == 16 || iParam1 == 17 || iParam1 == 18 || iParam1 == 19 || iParam1 == 20 || iParam1 == 21 || iParam1 == 22 || iParam1 == 25 || iParam1 == 26 || iParam1 == 29 || iParam1 == 30 || iParam1 == 31 || iParam1 == 32)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(hParam0))
			return false;
	}
	else if (iParam1 == 11)
	{
		num = func_155(hParam0);
	
		if (num == -1)
			return false;
	}

	return true;
}

Hash func_201() // Position - 0x18BAD (101293)
{
	return joaat("terbyte");
}

Hash func_202(BOOL bParam0) // Position - 0x18BBA (101306)
{
	if (bParam0)
		return joaat("avenger3");

	return joaat("avenger");
}

void func_203(char* sParam0, int iParam1) // Position - 0x18BD4 (101332)
{
	int num;

	num = func_184(iParam1, -1);

	if (num <= 131)
		TEXT_LABEL_COPY(sParam0, { Global_1312333[num /*1951*/].f_16 }, 6);
	else
		TEXT_LABEL_ASSIGN_STRING(sParam0, "", 24);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		switch (iParam1)
		{
			case 8:
				TEXT_LABEL_ASSIGN_STRING(sParam0, "MP_PROP_OFFG1" /*Office Garage 1*/, 24);
				break;
		
			case 9:
				TEXT_LABEL_ASSIGN_STRING(sParam0, "MP_PROP_OFFG2" /*Office Garage 2*/, 24);
				break;
		
			case 10:
				TEXT_LABEL_ASSIGN_STRING(sParam0, "MP_PROP_OFFG3" /*Office Garage 3*/, 24);
				break;
		}
	}

	if (iParam1 == 13)
		TEXT_LABEL_ASSIGN_STRING(sParam0, func_206(func_207(PLAYER::PLAYER_ID())), 24);

	if (iParam1 == 14)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "MP_BHUB_CLUBG" /*Nightclub Service Entrance*/, 24);
	else if (iParam1 == 15)
		TEXT_LABEL_ASSIGN_STRING(sParam0, func_205(1), 24);
	else if (iParam1 == 16)
		TEXT_LABEL_ASSIGN_STRING(sParam0, func_205(2), 24);
	else if (iParam1 == 17)
		TEXT_LABEL_ASSIGN_STRING(sParam0, func_205(3), 24);
	else if (iParam1 == 18)
		TEXT_LABEL_ASSIGN_STRING(sParam0, func_204(1), 24);
	else if (iParam1 == 19)
		TEXT_LABEL_ASSIGN_STRING(sParam0, func_204(2), 24);
	else if (iParam1 == 20)
		TEXT_LABEL_ASSIGN_STRING(sParam0, func_204(3), 24);
	else if (iParam1 == 21)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "CASINO_GARNAME" /*Casino Penthouse*/, 24);
	else if (iParam1 == 22)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "ARCADE_GARNAME" /*Arcade*/, 24);
	else if (iParam1 == 25)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "AUT_SHP_GAR" /*Auto Shop*/, 24);
	else if (iParam1 == 26)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "FIXER_GARNAME" /*Agency*/, 24);
	else if (iParam1 == 29)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "WIN22_GARNAME" /*Eclipse Blvd Garage*/, 24);
	else if (iParam1 == 30)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "VPG_GARNAME", 24);
	else if (iParam1 == 31)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "BO_GARNAME" /*Bail Office*/, 24);
	else if (iParam1 == 32)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "HD_GARNAME" /*Garment Factory*/, 24);

	TEXT_LABEL_APPEND_STRING(sParam0, "S", 24);
	return;
}

char* func_204(int iParam0) // Position - 0x18D7B (101755)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0" /*Arena Workshop*/;
	
		case 2:
			return "ARENA_GAR_F1" /*Arena Workshop B1*/;
	
		case 3:
			return "ARENA_GAR_F2" /*Arena Workshop B2*/;
	}

	return "";
}

char* func_205(int iParam0) // Position - 0x18DBD (101821)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1" /*Nightclub B2*/;
	
		case 2:
			return "MP_BHUB_GAR2" /*Nightclub B3*/;
	
		case 3:
			return "MP_BHUB_GAR3" /*Nightclub B4*/;
	}

	return "";
}

char* func_206(int iParam0) // Position - 0x18DFF (101887)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1" /*Grand Senora Desert Facility*/;
	
		case 2:
			return "MP_DBASE_2" /*Route 68 Facility*/;
	
		case 3:
			return "MP_DBASE_3" /*Sandy Shores Facility*/;
	
		case 4:
			return "MP_DBASE_4" /*Mount Gordo Facility*/;
	
		case 5:
			return "MP_DBASE_6" /*Paleto Bay Facility*/;
	
		case 6:
			return "MP_DBASE_7" /*Lago Zancudo Facility*/;
	
		case 7:
			return "MP_DBASE_8" /*Zancudo River Facility*/;
	
		case 8:
			return "MP_DBASE_9" /*Ron Alternates Wind Farm Facility*/;
	
		case 9:
			return "MP_DBASE_10" /*Land Act Reservoir Facility*/;
	}

	return "";
}

int func_207(Player plParam0) // Position - 0x18EA1 (102049)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845270[plParam0 /*892*/].f_268.f_306;

	return 0;
}

BOOL func_208(int iParam0) // Position - 0x18EC5 (102085)
{
	if (iParam0 == 22)
		if (!func_179())
			return false;
	else if (iParam0 == 25)
		if (!func_176(true))
			return false;

	return true;
}

BOOL func_209(int iParam0) // Position - 0x18EF8 (102136)
{
	if (Global_1579597)
		return false;

	switch (iParam0)
	{
		case 14:
		case 18:
		case 19:
		case 20:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
			return true;
	}

	return false;
}

BOOL func_210(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x18F56 (102230)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num;
	BOOL flag4;
	int i;
	int j;
	int num2;
	int num3;
	int num4;
	int num5;
	var unk;
	int num6;
	Hash model;

	func_225(false, false);
	func_222(sParam2);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(false, false, false, false, false);

	if (!func_191(iParam0))
		return false;

	flag = false;
	flag2 = false;
	flag3 = false;
	num = -1;
	flag4 = false;
	j = 0;
	num6 = 0;
	*uParam1 = 0;
	num4 = func_166(iParam0);

	for (j = 0; j < func_212(iParam0); j = j + 1)
	{
		flag2 = false;
		flag3 = false;
		num = -1;
		flag4 = false;
		num5 = j * num4;
		num6 = 0;
	
		for (i = 0; i < num4; i = i + 1)
		{
			num2 = func_164(iParam0, -1) + num5 + i;
			func_77(num2, &num3, true);
		
			if (num3 < 0)
			{
				if (func_150(*uParam4, num2))
				{
					num6 = 2;
					flag3 = true;
					flag4 = true;
					num = num2;
					break;
				}
			}
		}
	
		if (!flag4)
		{
			if (iParam0 != 30 && !func_198())
			{
				if (func_197(uParam4->f_1))
				{
					flag4 = true;
					num6 = 13;
				}
			}
		}
	
		if (!flag4)
		{
			for (i = 0; i < num4; i = i + 1)
			{
				num2 = func_164(iParam0, -1) + num5 + i;
				func_77(num2, &num3, true);
			
				if (num2 == uParam4->f_1)
				{
				}
				else if (func_163(num2) && !bParam5)
				{
				}
				else if (num3 >= 0)
				{
					num6 = 3;
					model = func_71(num3);
				
					if (STREAMING::IS_MODEL_A_VEHICLE(model) && !func_141(model, true) && !func_140(model) && func_194(model))
					{
						if (func_150(*uParam4, num2) && func_150(model, uParam4->f_1) && !IS_BIT_SET(Global_1586542[num3 /*143*/].f_104, 10))
						{
							num6 = 4;
							flag2 = true;
							break;
						}
					}
				}
			}
		}
	
		if (uParam4->f_3 == *uParam1)
		{
			uParam4->f_2 = num6;
		
			if (!flag3)
				uParam4->f_4 = -1;
			else
				uParam4->f_4 = num;
		
			flag = flag2 || flag3;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&unk, func_211(iParam0, j), 24);
		func_48(*uParam1, &unk, 0, flag2 || flag3, 0, false, 0);
		uParam3->[*uParam1] = j;
		*uParam1 = *uParam1 + 1;
	}

	return flag;
}

char* func_211(int iParam0, int iParam1) // Position - 0x1917A (102778)
{
	if (iParam0 == 29)
	{
		switch (iParam1)
		{
			case 0:
				return "MSG_B1" /*Eclipse Blvd Garage B1*/;
		
			case 1:
				return "MSG_B2" /*Eclipse Blvd Garage B2*/;
		
			case 2:
				return "MSG_B3" /*Eclipse Blvd Garage B3*/;
		
			case 3:
				return "MSG_B4" /*Eclipse Blvd Garage B4*/;
		
			case 4:
				return "MSG_B5" /*Eclipse Blvd Garage B5*/;
		
			default:
				break;
		}
	}
	else if (iParam0 == 30)
	{
		switch (iParam1)
		{
			case 0:
				return "VPG_B1";
		
			case 1:
				return "VPG_B2";
		
			case 2:
				return "VPG_B3";
		
			case 3:
				return "VPG_B4";
		
			case 4:
				return "VPG_B5";
		
			default:
				break;
		}
	}

	return "";
}

int func_212(int iParam0) // Position - 0x1924A (102986)
{
	switch (iParam0)
	{
		case 29:
			return 5;
	
		case 30:
			return 5;
	
		default:
		
	}

	return 0;
}

BOOL func_213(var uParam0, var uParam1, char* sParam2, var uParam3, BOOL bParam4) // Position - 0x19272 (103026)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num;
	int i;
	int j;
	int num2;
	int num3;
	int num4;
	var unk;
	int num5;
	BOOL flag4;
	int num6;
	var unk7;
	int num7;
	BOOL flag5;
	Hash model;

	func_225(false, false);
	func_222(sParam2);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(false, false, false, false, false);
	flag = false;
	flag2 = false;
	flag3 = false;
	num = -1;
	num5 = 0;
	flag4 = false;
	unk7 = 3;
	num7 = -1;
	flag5 = 1;
	*uParam0 = 0;

	for (j = 0; j < 33; j = j + 1)
	{
		num6 = func_184(j, -1);
	
		if (num6 > 0 && func_208(j) && !func_175(j) && j != 11 && j != 12)
		{
			flag2 = false;
			flag3 = false;
			num = -1;
			flag4 = false;
			num5 = 0;
			flag5 = 1;
			num7 = -1;
			num4 = func_167(-1, num6, bParam4);
		
			if (j == 13)
				num4 = 11;
			else if (j == 18)
				num4 = 10;
		
			if (func_209(j))
			{
				num7 = func_69(j);
			
				if (unk7[num7 - 6000])
				{
					num4 = -1;
					flag5 = 0;
					flag4 = true;
				}
				else
				{
					num4 = func_217(num7);
				}
			
				if (!flag4 && !func_215(*uParam3, j))
				{
					num5 = 1;
					flag4 = true;
				}
			}
			else if (!func_200(*uParam3, j))
			{
				num5 = 1;
				flag4 = true;
			}
		
			if (j == 30 && !flag4 && !func_198())
			{
				if (!func_197(uParam3->f_1))
				{
					flag4 = true;
					num5 = 11;
				}
			}
		
			if (!flag4)
			{
				for (i = 0; i < num4; i = i + 1)
				{
					num2 = func_164(j, -1) + i;
					func_77(num2, &num3, true);
				
					if (num3 < 0)
					{
						if (func_150(*uParam3, num2))
						{
							num5 = 2;
							flag3 = true;
							flag4 = true;
							num = num2;
							break;
						}
					}
				}
			}
		
			if (!flag4)
			{
				if (j != 131 && !func_198())
				{
					if (func_197(uParam3->f_1))
					{
						flag4 = true;
						num5 = 12;
					}
				}
			}
		
			if (!flag4)
			{
				for (i = 0; i < num4; i = i + 1)
				{
					num2 = func_164(j, -1) + i;
					func_77(num2, &num3, true);
				
					if (num2 == uParam3->f_1 && num4 != 1)
					{
					}
					else if (func_163(num2) && !bParam4)
					{
					}
					else if (num3 >= 0)
					{
						num5 = 3;
						model = func_71(num3);
					
						if (STREAMING::IS_MODEL_A_VEHICLE(model) && !func_141(model, true) && !func_140(model) && func_194(model))
						{
							if (func_150(*uParam3, num2) && func_150(model, uParam3->f_1) && !IS_BIT_SET(Global_1586542[num3 /*143*/].f_104, 10))
							{
								num5 = 4;
								flag2 = true;
								break;
							}
						}
					}
				}
			}
		
			if (func_209(j) && flag5)
			{
				if (uParam3->f_3 == *uParam0)
				{
					uParam3->f_2 = num5;
				
					if (!flag3)
						uParam3->f_4 = -1;
					else
						uParam3->f_4 = num;
				
					flag = flag2 || flag3;
				}
			
				TEXT_LABEL_ASSIGN_STRING(&unk, func_214(num7), 24);
				func_48(*uParam0, &unk, 0, flag2 || flag3, 0, false, 0);
				uParam1->[*uParam0] = num7;
				*uParam0 = *uParam0 + 1;
				unk7[num7 - 6000] = 1;
				flag5 = false;
			}
		
			if (flag5)
			{
				if (uParam3->f_3 == *uParam0)
				{
					uParam3->f_2 = num5;
				
					if (!flag3)
						uParam3->f_4 = -1;
					else
						uParam3->f_4 = num;
				
					flag = flag2 || flag3;
				}
			
				func_203(&unk, j);
				func_48(*uParam0, &unk, 0, flag2 || flag3, 0, false, 0);
				uParam1->[*uParam0] = j;
				*uParam0 = *uParam0 + 1;
			}
		}
	}

	return flag;
}

char* func_214(int iParam0) // Position - 0x195F3 (103923)
{
	if (Global_1579597)
		return "";

	switch (iParam0)
	{
		case 6000:
			return "FGROUP_ARENA" /*Arena*/;
	
		case 6002:
			return "FGROUP_NCLUB" /*Nightclub*/;
	
		case 6001:
			return "FGROUP_OFF" /*Office Garages*/;
	}

	return "";
}

BOOL func_215(Hash hParam0, int iParam1) // Position - 0x1964B (104011)
{
	int num;
	int num2;
	int i;

	if (!func_209(iParam1))
		return false;

	num = func_69(iParam1);
	num2 = 0;

	for (i = func_216(num, num2); i != -1 && num2 < 4; i = func_216(num, num2))
	{
		if (func_200(hParam0, i))
			return true;
	
		num2 = num2 + 1;
	}

	return false;
}

int func_216(int iParam0, int iParam1) // Position - 0x196A9 (104105)
{
	if (Global_1579597)
		return -1;

	switch (iParam0)
	{
		case 6000:
			switch (iParam1)
			{
				case 0:
					return 18;
			
				case 1:
					return 19;
			
				case 2:
					return 20;
			
				default:
					return -1;
			}
			break;
	
		case 6001:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 9;
			
				case 2:
					return 10;
			
				default:
					return -1;
			}
			break;
	
		case 6002:
			switch (iParam1)
			{
				case 0:
					return 14;
			
				case 1:
					return 15;
			
				case 3:
					return 16;
			
				case 4:
					return 17;
			
				default:
					return -1;
			}
			break;
	}

	return -1;
}

int func_217(int iParam0) // Position - 0x19795 (104341)
{
	if (Global_1579597)
		return 0;

	switch (iParam0)
	{
		case 6000:
			return 30;
	
		case 6002:
			return 31;
	
		case 6001:
			return 60;
	
		default:
		
	}

	return 0;
}

BOOL func_218(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x197D1 (104401)
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num6;
	Hash hash;

	func_225(false, false);
	func_222(sParam3);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(false, false, false, false, false);
	*uParam2 = 0;
	*uParam1 = 0;
	num2 = 0;

	if (!func_191(*uParam5))
		iParam8 = -1;

	if (*uParam5 < 33)
	{
		num6 = func_184(*uParam5, -1);
	
		if (num6 > 0 && !func_175(*uParam5))
		{
			num5 = func_167(-1, num6, bParam7);
		
			if (func_184(*uParam5, -1) <= 131)
				if (Global_1312333[num6 /*1951*/].f_33 == 2)
					num5 = 2;
				else if (Global_1312333[num6 /*1951*/].f_33 == 6)
					num5 = 6;
		
			if (*uParam5 == 13)
				num5 = 11;
			else if (*uParam5 == 18)
				num5 = 10;
			else if (iParam8 >= 0 && func_191(*uParam5))
				num5 = func_166(*uParam5);
		
			for (i = 0; i < num5; i = i + 1)
			{
				flag = false;
				flag2 = false;
				flag3 = false;
				num2 = 0;
				uParam0->[i] = -1;
				num3 = func_164(*uParam5, -1) + i;
			
				if (iParam8 >= 0)
					num3 = num3 + (num5 * iParam8);
			
				func_77(num3, &num4, true);
			
				if (num4 < 0)
				{
					flag = true;
					flag3 = true;
					flag2 = false;
				}
				else if (num4 >= 0 && STREAMING::IS_MODEL_A_VEHICLE(func_71(num4)) && !func_163(num3) || bParam7)
				{
					func_146(num4);
					hash = func_71(num4);
				
					if (func_145(hash) && func_144(hash, num4))
					{
						if (!func_141(hash, true) && !func_140(hash) && func_194(hash))
						{
							if (IS_BIT_SET(Global_1586542[num4 /*143*/].f_104, 10))
							{
								num2 = 5;
								flag = true;
								flag3 = false;
								flag2 = false;
							}
							else if (IS_BIT_SET(Global_1586542[num4 /*143*/].f_104, 0) || _GET_ACTIVE_PV_SLOT() == num4 && func_138())
							{
								num2 = 14;
								flag = true;
								flag3 = false;
								flag2 = false;
							}
							else
							{
								flag = true;
								flag2 = true;
								flag3 = false;
							}
						}
					}
					else
					{
						func_96(num4, 0, -1);
						flag3 = true;
						flag = true;
						flag2 = false;
					}
				}
			
				if (uParam4->f_3 == *uParam2)
					uParam4->f_2 = num2;
			
				if (flag)
				{
					if (iParam6 == *uParam2 && flag2)
						num = 1;
				
					if (flag3)
					{
						func_48(*uParam2, "MP_MAN_VEH_S" /*Empty*/, 0, false, 0, false, 0);
						uParam0->[*uParam1] = -1;
						*uParam1 = *uParam1 + 1;
						*uParam2 = *uParam2 + 1;
					}
					else
					{
						func_85(*uParam2, *uParam5, num4, num3, i, flag2);
						uParam0->[*uParam1] = num4;
						*uParam1 = *uParam1 + 1;
						*uParam2 = *uParam2 + 1;
					}
				}
			}
		}
	}

	return num;
}

BOOL func_219(int iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, var uParam5, BOOL bParam6) // Position - 0x19A7C (105084)
{
	BOOL flag;
	int i;
	int j;
	int num;
	int num2;
	int num3;
	var unk;
	int num4;

	func_225(false, false);
	func_222(sParam2);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(false, false, false, false, false);
	j = 0;
	num4 = 0;
	*uParam5 = 0;
	*uParam1 = 0;

	for (j = 0; j < 33; j = j + 1)
	{
		if (func_209(j) && func_69(j) == iParam0)
		{
			flag = false;
			num3 = func_167(j, -1, true);
		
			if (j == 13)
				num3 = 11;
			else if (j == 18)
				num3 = 10;
		
			num = func_164(j, -1);
			i = 0;
		
			for (i = 0; i < num3; i = i + 1)
			{
				func_77(num, &num2, true);
			
				if (num2 >= 0 && !func_163(num) || bParam6)
				{
					if (STREAMING::IS_MODEL_A_VEHICLE(func_71(num2)) && !func_141(func_71(num2), true) && !func_140(func_71(num2)) && func_194(func_71(num2)))
					{
						if (!IS_BIT_SET(Global_1586542[num2 /*143*/].f_104, 10))
						{
							flag = true;
							break;
						}
					}
				}
			
				num = num + 1;
			}
		
			if (iParam4 == *uParam1)
			{
				if (flag)
					num4 = 1;
			
				if (func_184(j, -1) == 0)
					*uParam5 = 1;
			}
		
			func_203(&unk, j);
			func_48(*uParam1, &unk, 0, flag, 0, false, 0);
			uParam3->[*uParam1] = j;
			*uParam1 = *uParam1 + 1;
		}
	}

	return num4;
}

BOOL func_220(int iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x19BEF (105455)
{
	int num;
	BOOL flag;
	int i;
	int j;
	int num2;
	int num3;
	int num4;
	int num5;
	var unk;

	func_225(false, false);
	func_222(sParam2);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(false, false, false, false, false);

	if (!func_191(iParam0))
		return 0;

	j = 0;
	*uParam1 = 0;
	num4 = func_166(iParam0);

	for (j = 0; j < func_212(iParam0); j = j + 1)
	{
		flag = false;
		num5 = j * num4;
	
		for (i = 0; i < num4; i = i + 1)
		{
			num2 = func_164(iParam0, -1) + num5 + i;
			func_77(num2, &num3, true);
		
			if (num3 >= 0 && !func_163(num2) || bParam5)
			{
				if (STREAMING::IS_MODEL_A_VEHICLE(func_71(num3)) && !func_141(func_71(num3), true) && !func_140(func_71(num3)) && func_194(func_71(num3)))
				{
					if (!IS_BIT_SET(Global_1586542[num3 /*143*/].f_104, 10))
					{
						flag = true;
						break;
					}
				}
			}
		}
	
		if (iParam4 == *uParam1 && flag)
			num = 1;
	
		TEXT_LABEL_ASSIGN_STRING(&unk, func_211(iParam0, j), 24);
		func_48(*uParam1, &unk, 0, flag, 0, false, 0);
		uParam3->[*uParam1] = j;
		*uParam1 = *uParam1 + 1;
	}

	return num;
}

BOOL func_221(var uParam0, var uParam1, char* sParam2, int iParam3, BOOL bParam4) // Position - 0x19D37 (105783)
{
	BOOL flag;
	int i;
	int j;
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	var unk7;
	int num6;
	BOOL flag2;

	func_225(false, false);
	func_222(sParam2);
	func_224(1, 1, 0, 0, 0);
	func_223(1, 2, 1, 1, 1);
	func_192(0, 0, 0, 0, 0);
	flag = false;
	unk7 = 3;
	num6 = -1;
	flag2 = 1;
	*uParam0 = 0;

	for (j = 0; j < 33; j = j + 1)
	{
		num5 = func_184(j, -1);
	
		if (num5 > 0 && func_208(j) && !func_175(j) && j != 11 && j != 12)
		{
			flag = false;
			num6 = -1;
			flag2 = 1;
			num3 = func_167(-1, num5, bParam4);
		
			if (j == 13)
				num3 = 11;
			else if (j == 18)
				num3 = 10;
		
			if (func_209(j))
			{
				num6 = func_69(j);
			
				if (unk7[num6 - 6000])
				{
					num3 = -1;
					flag2 = 0;
				}
				else
				{
					num3 = func_217(num6);
				}
			}
		
			for (i = 0; i < num3; i = i + 1)
			{
				num = func_164(j, -1) + i;
				func_77(num, &num2, true);
			
				if (num2 >= 0 && !func_163(num) || bParam4)
				{
					if (STREAMING::IS_MODEL_A_VEHICLE(func_71(num2)) && !func_141(func_71(num2), true) && !func_140(func_71(num2)) && func_194(func_71(num2)))
					{
						if (!IS_BIT_SET(Global_1586542[num2 /*143*/].f_104, 10))
						{
							flag = true;
							break;
						}
					}
				}
			}
		
			if (iParam3 == *uParam0 && flag)
				num4 = 1;
		
			if (func_209(j) && flag2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, func_214(num6), 24);
				func_48(*uParam0, &unk, 0, flag, 0, false, 0);
				uParam1->[*uParam0] = num6;
				*uParam0 = *uParam0 + 1;
				unk7[num6 - 6000] = 1;
				flag2 = false;
			}
		
			if (flag2)
			{
				func_203(&unk, j);
				func_48(*uParam0, &unk, 0, flag, 0, false, 0);
				uParam1->[*uParam0] = j;
				*uParam0 = *uParam0 + 1;
			}
		}
	}

	return num4;
}

void func_222(char* sParam0) // Position - 0x19F43 (106307)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_1), sParam0, 16);
	Global_23987.f_74 = 0;
	Global_23987.f_75 = 0;
	Global_23987.f_76 = 0;
	Global_23987.f_77 = 0;
	Global_23987.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5[i] = 0;
	}

	return;
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x19F8E (106382)
{
	Global_23987.f_5686[0] = iParam0;
	Global_23987.f_5686[1] = iParam1;
	Global_23987.f_5686[2] = iParam2;
	Global_23987.f_5686[3] = iParam3;
	Global_23987.f_5686[4] = iParam4;
	return;
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x19FCD (106445)
{
	Global_23987.f_5659[0] = iParam0;
	Global_23987.f_5659[1] = iParam1;
	Global_23987.f_5659[2] = iParam2;
	Global_23987.f_5659[3] = iParam3;
	Global_23987.f_5659[4] = iParam4;
	Global_23987.f_5829 = 0;

	if (iParam0 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam1 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam2 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam3 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam4 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	return;
}

void func_225(BOOL bParam0, BOOL bParam1) // Position - 0x1A077 (106615)
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_23987.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 50; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2696988[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23987.f_4469[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23987.f_4726[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23987.f_4984[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23987.f_5692[i] = 0;
		Global_23987.f_5830[i] = false;
		Global_23987.f_5959[i] = false;
		Global_23987.f_6482[i] = 0f;
		Global_23987.f_6088[i] = false;
		Global_23987.f_6348[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_23987.f_5659[i] = 0;
		Global_23987.f_5671[i] = 0f;
		Global_23987.f_5665[i] = -1f;
		Global_23987.f_5678[i] = false;
		Global_23987.f_5686[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5553[i /*4*/], "", 16);
		Global_23987.f_5610[i] = -1;
		Global_23987.f_5625[i] = 365;
		Global_23987.f_5640[i] = 32;
	}

	for (i = 0; i < 66; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_6623[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_7680[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_23987.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;
	Global_23987 = false;
	Global_23987.f_5821 = 0;
	Global_23987.f_5822 = 0;
	Global_23987.f_5823 = 0;
	Global_23987.f_5825 = 0;
	Global_23987.f_5826 = 0;
	Global_23987.f_5827 = 0;
	Global_23987.f_5824 = 0;
	Global_23987.f_6477 = 0;
	Global_23987.f_6617 = 0;
	Global_23987.f_6342 = 0;
	Global_23987.f_6341 = 0;
	Global_23987.f_6343 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), "", 24);
	Global_23987.f_5319 = 0;
	Global_23987.f_5320 = 0;
	Global_23987.f_5321 = 0;
	Global_23987.f_5322 = 0;
	Global_23987.f_5323 = 0;
	Global_23987.f_5324 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5253[i] = 0;
	}

	Global_23987.f_5325 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
	Global_4542374.f_61 = 0;
	Global_4542374.f_62 = 0;
	Global_4542374.f_63 = 0;
	Global_4542374.f_64 = 0;
	Global_4542374.f_65 = 0;
	Global_4542374.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4542374.f_25[i] = 0;
	}

	Global_4542374.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_1), "", 16);
	Global_23987.f_5677 = 0f;
	Global_23987.f_74 = 0;
	Global_23987.f_75 = 0;
	Global_23987.f_76 = 0;
	Global_23987.f_77 = 0;
	Global_23987.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5[i] = 0;
	}

	Global_23987.f_6347 = 0;
	Global_23987.f_6346 = 0;
	Global_23987.f_6344 = 0;
	Global_23987.f_6345 = 0;
	Global_23987.f_5326 = 0;
	Global_23987.f_5327 = 0;
	Global_23987.f_5828 = 10;
	Global_23987.f_5829 = 0;
	Global_23987.f_6479 = 0f;
	Global_23987.f_6480 = 0f;
	Global_23987.f_6331 = 0;
	Global_23987.f_6332 = 0;
	Global_23987.f_6333 = 0f;
	Global_23987.f_6334 = 0;
	Global_23987.f_6336 = 0;
	Global_23987.f_6335 = 0;
	Global_23987.f_6337 = 0;
	Global_23987.f_6338 = 0;
	Global_23987.f_6339 = 0;
	Global_23987.f_6340 = 0;
	Global_23987.f_9112 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_23987.f_6611[i] = -1;
		Global_23987.f_6614[i] = -1;
	}

	Global_23987.f_5684 = 0f;
	Global_23987.f_5655 = 0;
	Global_23987.f_5685 = 0;

	for (i = 0; i < Global_23987.f_6618; i = i + 1)
	{
		Global_23987.f_6618[i] = 0;
	}

	Global_23987.f_9091 = 0;
	Global_23987.f_9086 = 0;
	Global_23987.f_9096 = 0;
	Global_23987.f_9101 = 0;
	Global_23987.f_9106 = 0;
	Global_23987.f_9108 = 0;
	Global_23987.f_9114 = 0;
	Global_23987.f_9117 = func_226(false);
	Global_23984 = 0.05f;
	Global_23985 = 0.05f;
	Global_23986 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		Global_23986 = 0.225f * (1.7777778f / aspectRatio);

	return;
}

float func_226(BOOL bParam0) // Position - 0x1A550 (107856)
{
	float aspectRatio;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		aspectRatio = 1.7777778f;

	return aspectRatio;
}

void func_227(int iParam0) // Position - 0x1A57B (107899)
{
	Global_23987.f_5828 = iParam0;
	return;
}

BOOL func_228(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1A58B (107915)
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_59(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_6238[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23987.f_6238[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_23987.f_6238[num /*4*/], 9);
		Global_23987.f_6231[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_23987.f_6238[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
		flag = false;

	Global_23987.f_6217[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23987.f_6224[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_6263[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_229(&Global_23987.f_6263[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_229(int* piParam0) // Position - 0x1A697 (108183)
{
	switch (piParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			{
				*piParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(piParam0->f_1));
				piParam0->f_9 = 1;
			
				if (piParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
					{
						piParam0->f_8 = MISC::GET_GAME_TIMER();
						piParam0->f_9 = 2;
					}
				}
			}
			else
			{
				piParam0->f_8 = MISC::GET_GAME_TIMER();
				piParam0->f_9 = 2;
			}
			break;
	
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			{
				piParam0->f_8 = MISC::GET_GAME_TIMER();
				piParam0->f_9 = 2;
			}
			break;
	
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
				piParam0->f_9 = 0;
			break;
	}

	return piParam0->f_9 == 2;
}

void func_230() // Position - 0x1A739 (108345)
{
	BOOL flag;

	iLocal_129 = 0;
	iLocal_130 = 0;
	bLocal_131 = false;
	bLocal_132 = false;

	if (!bLocal_128)
	{
		func_255();
		flag = false;
	
		if (func_254() > 0)
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN) || bLocal_132 && func_253() || bLocal_132)
			{
				iLocal_75 = iLocal_75 + 1;
			
				if (iLocal_75 > func_254() - 1)
					iLocal_75 = 0;
			
				func_82(iLocal_75, true, 1);
				Global_1942971 = true;
				iLocal_136 = 200;
				_STOPWATCH_DESTROY(&uLocal_134);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP) || bLocal_131 && func_253() || bLocal_131)
			{
				iLocal_75 = iLocal_75 - 1;
			
				if (iLocal_75 < 0)
					iLocal_75 = func_254() - 1;
			
				func_82(iLocal_75, true, 1);
				Global_1942971 = true;
				iLocal_136 = 200;
				_STOPWATCH_DESTROY(&uLocal_134);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		
			if (func_252() || iLocal_129)
			{
				if (func_64())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					flag = true;
					func_238();
				}
			}
		}
	
		if (!flag)
		{
			if (func_237() || iLocal_130)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_231();
			}
		}
	}

	return;
}

void func_231() // Position - 0x1A86C (108652)
{
	BOOL flag;

	flag = false;

	if (iLocal_62.f_8 == 1)
	{
		func_236(-1);
	
		if (iLocal_62.f_11)
			func_233(-35837372, 3, false);
	}
	else if (iLocal_62.f_8 == 2)
	{
		iLocal_75 = iLocal_75.f_43;
		func_236(1);
	}
	else if (iLocal_62.f_8 == 10)
	{
		iLocal_75 = iLocal_75.f_43;
		func_236(1);
	}
	else if (iLocal_62.f_8 == 3)
	{
		iLocal_75 = iLocal_75.f_44;
	
		if (func_232(iLocal_62.f_6))
			func_236(10);
		else if (func_191(iLocal_62.f_4))
			func_236(2);
		else
			func_236(1);
	}
	else if (iLocal_62.f_8 == 4)
	{
		iLocal_75 = 0;
		func_236(1);
	}
	else if (iLocal_62.f_8 == 5)
	{
		iLocal_75 = iLocal_75.f_44;
		func_236(4);
	}
	else if (iLocal_62.f_8 == 11)
	{
		iLocal_75 = iLocal_75.f_44;
		func_236(4);
	}
	else if (iLocal_62.f_8 == 6)
	{
		iLocal_75 = iLocal_75.f_45;
	
		if (func_191(iLocal_62.f_5))
			func_236(5);
		else if (func_232(iLocal_62.f_7))
			func_236(11);
		else
			func_236(4);
	}
	else if (iLocal_62.f_8 == 7)
	{
		func_236(4);
		flag = true;
	}
	else if (iLocal_62.f_8 == 12)
	{
		func_236(11);
		flag = true;
	}
	else if (iLocal_62.f_8 == 8)
	{
		func_236(5);
		flag = true;
	}
	else if (iLocal_62.f_8 == 9)
	{
		func_236(6);
		flag = true;
	}

	Global_1942971 = true;

	if (!flag)
		bLocal_133 = true;

	return;
}

BOOL func_232(int iParam0) // Position - 0x1A9DB (109019)
{
	if (Global_1579597)
		return false;

	switch (iParam0)
	{
		case 6000:
		case 6001:
		case 6002:
			return true;
	}

	return false;
}

void func_233(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1AA0F (109071)
{
	int num;

	if (func_235(iParam1, bParam2))
	{
		num = func_234();
		Global_2696325[num] = iParam1;
		Global_2696336[num] = iParam0;
	}

	return;
}

int func_234() // Position - 0x1AA3C (109116)
{
	int num;
	int i;

	num = 9;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (Global_2696325[i] == 0)
		{
			num = i;
			i = 10;
		}
	}

	return num;
}

BOOL func_235(int iParam0, BOOL bParam1) // Position - 0x1AA71 (109169)
{
	if (Global_1575074)
		return false;

	if (iParam0 == 22)
		return true;

	if (bParam1 || !Global_1575086 || iParam0 == 3 || iParam0 == 10 || iParam0 == 11 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30)
		return true;
	else
		return false;

	return true;
}

void func_236(int iParam0) // Position - 0x1AAF7 (109303)
{
	iLocal_62.f_8 = iParam0;
	return;
}

int func_237() // Position - 0x1AB05 (109317)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return 1;
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL))
		return 1;

	return 0;
}

void func_238() // Position - 0x1AB59 (109401)
{
	BOOL flag;

	flag = false;
	Global_1942971 = true;

	if (iLocal_62.f_8 == 1)
	{
		iLocal_75.f_43 = iLocal_75;
	
		if (func_191(iLocal_75.f_2[iLocal_75]))
		{
			iLocal_62.f_4 = iLocal_75.f_2[iLocal_75];
			func_236(2);
		}
		else if (func_232(iLocal_75.f_2[iLocal_75]))
		{
			iLocal_62.f_6 = iLocal_75.f_2[iLocal_75];
			func_236(10);
		}
		else
		{
			iLocal_62.f_4 = iLocal_75.f_2[iLocal_75];
			iLocal_75.f_44 = iLocal_75;
			func_236(3);
		}
	}
	else if (iLocal_62.f_8 == 2)
	{
		iLocal_62.f_2 = iLocal_75.f_2[iLocal_75];
		iLocal_75.f_44 = iLocal_75;
		func_236(3);
	}
	else if (iLocal_62.f_8 == 10)
	{
		iLocal_62.f_4 = iLocal_75.f_2[iLocal_75];
		iLocal_75.f_44 = iLocal_75;
		func_236(3);
	}
	else if (iLocal_62.f_8 == 3)
	{
		func_76(iLocal_75.f_2[iLocal_75], &iLocal_62);
		func_236(4);
	}
	else if (iLocal_62.f_8 == 4)
	{
		iLocal_75.f_44 = iLocal_75;
	
		if (func_191(iLocal_75.f_2[iLocal_75]))
		{
			iLocal_62.f_5 = iLocal_75.f_2[iLocal_75];
			func_236(5);
		}
		else if (func_232(iLocal_75.f_2[iLocal_75]))
		{
			iLocal_62.f_7 = iLocal_75.f_2[iLocal_75];
			func_236(11);
		}
		else
		{
			iLocal_62.f_5 = iLocal_75.f_2[iLocal_75];
			iLocal_75.f_45 = iLocal_75;
		
			if (iLocal_62.f_10 != -1 && iLocal_62.f_4 != iLocal_62.f_5)
			{
				flag = true;
				func_236(7);
			}
			else
			{
				func_236(6);
			}
		}
	}
	else if (iLocal_62.f_8 == 5)
	{
		iLocal_62.f_3 = iLocal_75.f_2[iLocal_75];
		iLocal_75.f_45 = iLocal_75;
	
		if (iLocal_62.f_10 != -1 && iLocal_62.f_4 != iLocal_62.f_5)
		{
			flag = true;
			func_236(8);
		}
		else
		{
			func_236(6);
		}
	}
	else if (iLocal_62.f_8 == 11)
	{
		iLocal_62.f_5 = iLocal_75.f_2[iLocal_75];
		iLocal_75.f_45 = iLocal_75;
	
		if (iLocal_62.f_10 != -1 && iLocal_62.f_4 != iLocal_62.f_5)
		{
			flag = true;
			func_236(12);
		}
		else
		{
			func_236(6);
		}
	}
	else if (iLocal_62.f_8 == 6)
	{
		if (iLocal_75.f_2[iLocal_75] != -1)
			func_76(iLocal_75.f_2[iLocal_75], &(iLocal_62.f_1));
		else if (func_191(iLocal_62.f_5))
			iLocal_62.f_1 = func_164(iLocal_62.f_5, -1) + (iLocal_62.f_3 * func_166(iLocal_62.f_5)) + iLocal_75;
		else
			iLocal_62.f_1 = func_164(iLocal_62.f_5, -1) + iLocal_75;
	
		flag = true;
		func_236(9);
	}
	else if (iLocal_62.f_8 == 7)
	{
		func_251(iLocal_62.f_10);
		func_236(1);
	}
	else if (iLocal_62.f_8 == 8)
	{
		func_251(iLocal_62.f_10);
		func_236(1);
	}
	else if (iLocal_62.f_8 == 12)
	{
		func_251(iLocal_62.f_10);
		func_236(1);
	}
	else if (iLocal_62.f_8 == 9)
	{
		if (iLocal_75.f_2[iLocal_75] != -1)
		{
			func_239();
		}
		else
		{
			iLocal_62.f_4 != iLocal_62.f_5;
			func_251(iLocal_62.f_1);
		}
	
		func_236(1);
	}

	if (!flag)
	{
		iLocal_75 = 0;
		bLocal_133 = true;
	}

	return;
}

void func_239() // Position - 0x1AE50 (110160)
{
	int num;
	int num2;
	int num3;
	int num4;

	num = iLocal_62;
	num2 = iLocal_62.f_1;
	func_77(num, &num4, true);
	func_77(num2, &num3, true);
	func_240(num4, num3, num, num2);
	return;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1AE80 (110208)
{
	BOOL flag;
	int num;
	int num2;
	var unk;
	var unk2;
	var unk3;
	var unk146;
	var unk147;

	flag = _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM();
	flag = true;
	Global_1950916 = 1;

	if (Global_262145.f_10656)
	{
	}
	else if (iParam0 == iParam1)
	{
	}
	else if (flag)
	{
		func_76(iParam0, &num);
	
		if (num < 0)
			num = iParam2;
	
		func_76(iParam1, &num2);
	
		if (num2 < 0)
			num2 = iParam3;
	
		if (num < 0)
			return;
	
		if (num2 < 0)
			return;
	
		func_133(num, iParam1, -1);
		func_133(num2, iParam0, -1);
	
		if (iParam0 >= 0)
			MISC::SET_BIT(&(Global_1586542[iParam0 /*143*/].f_104), 12);
	
		if (iParam1 >= 0)
			MISC::SET_BIT(&(Global_1586542[iParam1 /*143*/].f_104), 12);
	
		func_248();
	
		if (func_247(iParam0, &unk) && func_247(iParam1, &unk2))
		{
			MISC::SET_BIT(&(Global_1586542[iParam0 /*143*/].f_104), 25);
			MISC::SET_BIT(&(Global_1586542[iParam1 /*143*/].f_104), 25);
		
			if (Global_2359296[func_73() /*5571*/].f_593.f_62 == iParam0)
				Global_2359296[func_73() /*5571*/].f_593.f_62 = iParam1;
			else if (Global_2359296[func_73() /*5571*/].f_593.f_62 == iParam1)
				Global_2359296[func_73() /*5571*/].f_593.f_62 = iParam0;
		}
	
		Global_2359296[func_73() /*5571*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	
		if (iParam0 >= 0)
			func_97(iParam0, &Global_1586542[iParam0 /*143*/], true, -1, false, false);
	
		if (iParam1 >= 0)
			func_97(iParam1, &Global_1586542[iParam1 /*143*/], true, -1, false, false);
	}
	else
	{
		unk3.f_9 = 49;
		unk3.f_59 = 2;
		unk3.f_78 = -1;
		unk3.f_79 = -1;
		unk3.f_96 = -1;
		unk3.f_97 = 1;
		unk3.f_99 = 132;
		unk3.f_100 = -1;
		func_243(&Global_1586542[iParam1 /*143*/], &unk3);
		func_243(&Global_1586542[iParam0 /*143*/], &Global_1586542[iParam1 /*143*/]);
		func_243(&unk3, &Global_1586542[iParam0 /*143*/]);
		MISC::SET_BIT(&(Global_1586542[iParam0 /*143*/].f_104), 12);
		MISC::SET_BIT(&(Global_1586542[iParam1 /*143*/].f_104), 12);
		func_248();
		func_242(iParam0, iParam1);
	
		if (func_247(iParam0, &unk146) && func_247(iParam1, &unk147))
		{
			MISC::SET_BIT(&(Global_1586542[iParam0 /*143*/].f_104), 25);
			MISC::SET_BIT(&(Global_1586542[iParam1 /*143*/].f_104), 25);
		
			if (Global_2359296[func_73() /*5571*/].f_593.f_62 == iParam0)
				Global_2359296[func_73() /*5571*/].f_593.f_62 = iParam1;
			else if (Global_2359296[func_73() /*5571*/].f_593.f_62 == iParam1)
				Global_2359296[func_73() /*5571*/].f_593.f_62 = iParam0;
		}
	
		Global_2359296[func_73() /*5571*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_97(iParam0, &Global_1586542[iParam0 /*143*/], true, -1, false, false);
		func_97(iParam1, &Global_1586542[iParam1 /*143*/], true, -1, false, false);
	
		if (_GET_ACTIVE_PV_SLOT() == iParam0)
			func_241(iParam1);
		else if (_GET_ACTIVE_PV_SLOT() == iParam1)
			func_241(iParam0);
	}

	return;
}

void func_241(int iParam0) // Position - 0x1B177 (110967)
{
	Global_2359296[func_73() /*5571*/].f_681.f_2 = iParam0;
	return;
}

void func_242(int iParam0, int iParam1) // Position - 0x1B191 (110993)
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_2739945.f_2378[i /*44*/].f_40 == iParam0)
			Global_2739945.f_2378[i /*44*/].f_40 = iParam1;
		else if (Global_2739945.f_2378[i /*44*/].f_40 == iParam1)
			Global_2739945.f_2378[i /*44*/].f_40 = iParam0;
	}

	return;
}

void func_243(var uParam0, var uParam1) // Position - 0x1B1F1 (111089)
{
	func_244(*uParam0, uParam1);
	uParam1->f_104 = uParam0->f_104;
	uParam1->f_105 = uParam0->f_105;
	uParam1->f_106 = uParam0->f_106;
	uParam1->f_107 = { uParam0->f_107 };
	uParam1->f_123 = { uParam0->f_123 };
	uParam1->f_139 = uParam0->f_139;
	uParam1->f_140 = uParam0->f_140;
	uParam1->f_141 = uParam0->f_141;
	uParam1->f_142 = uParam0->f_142;
	return;
}

void func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104) // Position - 0x1B258 (111192)
{
	func_246(&uParam0, uParam104);
	uParam104->f_78 = uParam0.f_78;
	uParam104->f_80 = uParam0.f_80;
	uParam104->f_97 = uParam0.f_97;
	uParam104->f_99 = uParam0.f_99;
	uParam104->f_98 = uParam0.f_98;
	uParam104->f_95 = uParam0.f_95;
	uParam104->f_94 = uParam0.f_94;
	uParam104->f_96 = uParam0.f_96;
	func_245(uParam0.f_81, &(uParam104->f_81));
	return;
}

void func_245(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0x1B2B7 (111287)
{
	*uParam13 = uParam0;
	uParam13->f_1 = uParam0.f_1;
	uParam13->f_2 = uParam0.f_2;
	uParam13->f_3 = uParam0.f_3;
	uParam13->f_4 = uParam0.f_4;
	uParam13->f_5 = uParam0.f_5;
	uParam13->f_6 = uParam0.f_6;
	uParam13->f_7 = uParam0.f_7;
	uParam13->f_8 = uParam0.f_8;
	uParam13->f_9 = uParam0.f_9;
	uParam13->f_10 = uParam0.f_10;
	uParam13->f_11 = uParam0.f_11;
	uParam13->f_12 = uParam0.f_12;
	return;
}

void func_246(var uParam0, var uParam1) // Position - 0x1B324 (111396)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

BOOL func_247(int iParam0, var uParam1) // Position - 0x1B3F0 (111600)
{
	int num;

	*uParam1 = -1;
	num = 0;

	if (iParam0 >= 0 && iParam0 <= 9)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 13 && iParam0 <= 22)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 26 && iParam0 <= 35)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 39 && iParam0 <= 48)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 52 && iParam0 <= 61)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 65 && iParam0 <= 74 || iParam0 >= 75 && iParam0 <= 84)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 88 && iParam0 <= 107 || iParam0 >= 108 && iParam0 <= 127 || iParam0 >= 128 && iParam0 <= 147 || iParam0 >= 148 && iParam0 <= 155)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 20;

	if (iParam0 >= 179 && iParam0 <= 185)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (iParam0 >= 191 && iParam0 <= 221)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (iParam0 >= 227 && iParam0 <= 235)
		*uParam1 = iParam0 - num;

	num = num + 1;

	if (iParam0 >= 237 && iParam0 <= 245)
		*uParam1 = iParam0 - num;

	num = num + 1;

	if (iParam0 >= 247 && iParam0 <= 255)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;

	if (iParam0 >= 258 && iParam0 <= 267)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;

	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return false;
	}

	return *uParam1 != -1;
}

void func_248() // Position - 0x1B663 (112227)
{
	func_249(10);
	return;
}

void func_249(int iParam0) // Position - 0x1B671 (112241)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_1836908.f_5[num], offset);
	return;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x1B697 (112279)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

void func_251(int iParam0) // Position - 0x1B6AE (112302)
{
	int num;
	int num2;
	var unk;
	int num3;

	num = iLocal_62;
	num2 = iParam0;
	func_77(num, &num3, true);
	func_77(num2, &unk, true);
	func_240(num3, -1, num, num2);
	return;
}

int func_252() // Position - 0x1B6DB (112347)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return 1;
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
		return 1;

	return 0;
}

BOOL func_253() // Position - 0x1B72F (112431)
{
	if (bLocal_127)
		return false;

	if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_134, iLocal_136, true))
		return true;

	return false;
}

int func_254() // Position - 0x1B751 (112465)
{
	return iLocal_75.f_1;
}

void func_255() // Position - 0x1B75D (112477)
{
	iLocal_129 = 0;
	iLocal_130 = 0;
	bLocal_131 = false;
	bLocal_132 = false;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return;

	func_261(false, &uLocal_124);
	func_258(false, false, false, true);

	if (Global_4542450 > -1)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			if (Global_4542450 == iLocal_75)
			{
				iLocal_129 = 1;
			}
			else if (!bLocal_126)
			{
				iLocal_75 = Global_4542450;
				func_82(iLocal_75, true, 1);
				Global_1942971 = true;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
	else
	{
		if (bLocal_126)
			return;
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			if (Global_4542450 == -2)
			{
				bLocal_131 = true;
				return;
			}
		
			if (Global_4542450 == -3)
			{
				bLocal_132 = true;
				return;
			}
		}
	}

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL))
		iLocal_130 = 1;

	if (bLocal_126)
		return;

	if (func_257(false, true, 0) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
	{
		bLocal_131 = true;
		return;
	}

	if (func_256(false, true, 0) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
	{
		bLocal_132 = true;
		return;
	}

	return;
}

BOOL func_256(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x1B859 (112729)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (Global_4542450 == -3)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && bParam0 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;
	
		if (iParam2 == 0)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) && bParam1)
				return true;
	}

	return false;
}

BOOL func_257(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x1B8BE (112830)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (Global_4542450 == -2)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && bParam0 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;
	
		if (iParam2 == 0)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) && bParam1)
				return true;
	}

	return false;
}

void func_258(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B923 (112931)
{
	float x;
	float y;
	float x2;
	float y2;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	int num7;
	int num8;
	int num9;
	int num10;

	num3 = 0.034722f / 2f;
	num10 = -1;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		Global_4542450 = -1;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_23984;
	x2 = x + Global_23986;
	y2 = Global_23987.f_6333;
	y = Global_23987.f_6333 - ((float)Global_23987.f_6335 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_23987.f_6335 < 1)
		y = Global_23987.f_6333 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_260();

	if (Global_4542450 == -6)
		return;

	Global_4542450 = -1;
	num4 = Global_4542444;
	num5 = Global_4542445;

	if (Global_23987.f_6336 > Global_23987.f_6335)
	{
		if (Global_4542444 >= x && Global_4542444 <= x2 && Global_4542445 >= y2 && Global_4542445 < y2 + num3)
		{
			Global_4542450 = -2;
		
			if (bParam3)
				func_259(false);
		
			return;
		}
	
		if (Global_4542444 >= x && Global_4542444 <= x2 && Global_4542445 >= y2 + num3 && Global_4542445 < y2 + 0.034722f)
		{
			Global_4542450 = -3;
		
			if (bParam3)
				func_259(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = SYSTEM::FLOOR(num6 / 0.034722f);
	
		if (Global_23987.f_6336 == -1)
		{
			Global_4542450 = 0;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_23987.f_6335;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_43(num, num2 + ((float)num10 * 0.034722f), Global_23986, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4542450 = Global_23987.f_8737[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4542450 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4542450 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4542450 = -4;
		return;
	}

	Global_4542450 = -1;
	return;
}

void func_259(BOOL bParam0) // Position - 0x1BBCF (113615)
{
	float num;
	float num2;
	float num3;
	int num4;

	num3 = 0.034722f / 2f;

	if (bParam0)
		num4 = 48;
	else
		num4 = 210;

	num = Global_23984;
	num2 = Global_23987.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4542450 == -2)
		func_43(num, num2, Global_23986, num3, 255, 255, 255, num4);
	else if (Global_4542450 == -3)
		func_43(num, num2 + num3, Global_23986, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_260() // Position - 0x1BC58 (113752)
{
	Global_4542446 = Global_4542444;
	Global_4542447 = Global_4542445;
	Global_4542444 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4542445 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4542448 = Global_4542444 - Global_4542446;
	Global_4542449 = Global_4542445 - Global_4542447;
	return;
}

int func_261(BOOL bParam0, var uParam1) // Position - 0x1BCA0 (113824)
{
	float num;
	float gameplayCamRelativeHeading;

	if (bParam0)
	{
		func_262(true, -1, true);
	
		if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
			if (Global_4542444 < 1f)
				return 1;
	}
	else
	{
		func_262(false, -1, true);
	
		if (*uParam1)
			if (Global_4542444 > 1f - 0.05f || Global_4542444 < 0.05f || Global_4542445 > 1f - 0.03f || Global_4542445 < 0.03f)
				return 0;
			else
				*uParam1 = 0;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				return 0;
	
		if (Global_4542450 == -1 || Global_4542450 == -4)
		{
			if (Global_4542444 > 1f - (0.05f * 0.75f))
			{
				HUD::SET_MOUSE_CURSOR_STYLE(7);
				num = 0.05f - 1f - Global_4542444;
			
				if (num > 0.05f)
					num = 0.05f;
			
				gameplayCamRelativeHeading = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				gameplayCamRelativeHeading = gameplayCamRelativeHeading - (70f * num);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(gameplayCamRelativeHeading);
			}
			else if (Global_4542444 < 0.05f * 0.75f)
			{
				HUD::SET_MOUSE_CURSOR_STYLE(6);
				num = 0.05f - Global_4542444;
			
				if (num > 0.05f)
					num = 0.05f;
			
				gameplayCamRelativeHeading = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				gameplayCamRelativeHeading = gameplayCamRelativeHeading + (70f * num);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(gameplayCamRelativeHeading);
			}
			else if (Global_4542445 > 1f - (0.03f * 0.75f))
			{
			}
			else
			{
				Global_4542445 < 0.03f * 0.75f;
			}
		}
	}

	return 0;
}

int func_262(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x1BE31 (114225)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		return 0;

	if (bParam2)
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	if (Global_4542450 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
	
		if (bParam0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			return 1;
		}
		else
		{
			Global_4542450 = -1;
			return 0;
		}
	}

	if (Global_4542450 > -1 || Global_4542450 == -3 || Global_4542450 == -2 || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}

	if (Global_4542450 == -1 && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4542450 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}

	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_263() // Position - 0x1BF11 (114449)
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_BLOCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_NEXT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_PREV, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_RADIO_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);

	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_UP);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN);
		PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X, true);
		PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y, true);
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
	{
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_ACCEPT, true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_CANCEL, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_UP, true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_DOWN, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_X, true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_Y, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_X);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	}

	return;
}

void func_264() // Position - 0x1C03E (114750)
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	return;
}

void func_265() // Position - 0x1C071 (114801)
{
	if (iLocal_62.f_8 == 8 || iLocal_62.f_8 == 7 || iLocal_62.f_8 == 9 || iLocal_62.f_8 == 12)
	{
		bLocal_127 = true;
		bLocal_126 = true;
	}

	return;
}

BOOL func_266(int iParam0, int iParam1) // Position - 0x1C0AF (114863)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (iParam0 == 1)
		if (func_268())
			return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (iParam1 == 1)
		if (func_7(0))
			return false;

	if (func_58(8, -1))
		return false;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return false;

	if (func_267())
		return false;

	if (Global_61507)
		return false;

	if (Global_76658)
		return false;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return false;

	if (Global_1574974)
		return false;

	if (Global_1836510)
		return false;

	return true;
}

BOOL func_267() // Position - 0x1C14B (115019)
{
	return Global_1575086;
}

BOOL func_268() // Position - 0x1C157 (115031)
{
	return MISC::GET_GAME_TIMER() <= Global_23987.f_6481 + 100;
}

void func_269() // Position - 0x1C16C (115052)
{
	MISC::SET_BIT(&iLocal_123, 1);
	return;
}

void func_270() // Position - 0x1C17B (115067)
{
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			if (iLocal_18 == 1)
			{
				HUD::SET_MOUSE_CURSOR_STYLE(1);
				iLocal_18 = 0;
			}
		}
		else
		{
			iLocal_18 = 1;
		}
	}

	return;
}

BOOL func_271() // Position - 0x1C1AF (115119)
{
	if (iLocal_62.f_8 == -1)
		return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (IS_BIT_SET(Global_1882925[PLAYER::PLAYER_ID() /*149*/].f_17, 0))
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return false;

	if (func_267())
		return false;

	if (Global_1574974)
		return false;

	if (Global_1836510)
		return false;

	if (Global_1919888)
		return false;

	if (func_282(PLAYER::PLAYER_ID()))
		return false;

	if (func_280())
		return false;

	if (func_278())
		return false;

	if (func_277(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_268.f_34, 4))
		return false;

	if (func_276(PLAYER::PLAYER_ID()) == 276 && func_274(PLAYER::PLAYER_ID()) == 3 && func_272(PLAYER::PLAYER_ID()))
		return false;

	if (Global_1942970)
		return false;

	return true;
}

BOOL func_272(Player plParam0) // Position - 0x1C2A9 (115369)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1)
				return func_273(Global_2657994[plParam0 /*467*/].f_324.f_8) == 23;

	return false;
}

int func_273(int iParam0) // Position - 0x1C2F0 (115440)
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
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
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
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
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
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 174:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 175:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	}

	return -1;
}

int func_274(Player plParam0) // Position - 0x1C825 (116773)
{
	if (func_275(plParam0, false))
		return Global_1887694[plParam0 /*611*/].f_10.f_182;

	return -1;
}

BOOL func_275(Player plParam0, BOOL bParam1) // Position - 0x1C848 (116808)
{
	if (func_33(plParam0))
		if (Global_1887694[plParam0 /*611*/].f_10.f_33 != -1 || bParam1 && Global_1887694[plParam0 /*611*/].f_10.f_32 != -1)
			return true;

	return false;
}

int func_276(Player plParam0) // Position - 0x1C88C (116876)
{
	if (func_33(plParam0))
		if (func_275(plParam0, false))
			return Global_1887694[plParam0 /*611*/].f_10.f_33;

	return -1;
}

BOOL func_277(Player plParam0) // Position - 0x1C8B8 (116920)
{
	if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 14))
		return true;

	if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 11))
		return true;

	return false;
}

BOOL func_278() // Position - 0x1C8F1 (116977)
{
	return func_279(PLAYER::PLAYER_ID());
}

BOOL func_279(Player plParam0) // Position - 0x1C901 (116993)
{
	return Global_2657994[plParam0 /*467*/].f_448;
}

BOOL func_280() // Position - 0x1C915 (117013)
{
	return func_281(PLAYER::PLAYER_ID());
}

BOOL func_281(Player plParam0) // Position - 0x1C925 (117029)
{
	return Global_2657994[plParam0 /*467*/].f_448.f_1;
}

BOOL func_282(Player plParam0) // Position - 0x1C93B (117051)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_324, 3);

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1C96C (117100)
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
				if (player == Global_2672942.f_3)
					return Global_2672942.f_2;
				else if (Global_2657994[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1C9CC (117196)
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_285(Player plParam0) // Position - 0x1CA11 (117265)
{
	if (func_30(plParam0, 0))
		return true;

	if (func_286())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_286() // Position - 0x1CA50 (117328)
{
	return IS_BIT_SET(Global_2621446, 3);
}

void func_287() // Position - 0x1CA5E (117342)
{
	func_289(true, -1);
	func_288(false);

	if (IS_BIT_SET(iLocal_123, 3))
		HUD::MP_TEXT_CHAT_DISABLE(false);

	if (Global_1942970)
		Global_1942970 = false;

	if (Global_1942969)
		Global_1942969 = false;

	HUD::THEFEED_HIDE_THIS_FRAME();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_288(BOOL bParam0) // Position - 0x1CA9D (117405)
{
	HUD::BUSYSPINNER_OFF();

	if (bParam0)
		HUD::PRELOAD_BUSYSPINNER();

	return;
}

void func_289(BOOL bParam0, int iParam1) // Position - 0x1CAB2 (117426)
{
	int num;

	if (!func_59(&num, false, iParam1))
		return;

	if (Global_23987.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_23987.f_9116 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_23987.f_6231[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23987.f_6231[num] = false;
	}

	if (Global_23987.f_6217[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23987.f_6217[num] = false;
	}

	if (Global_23987.f_6224[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23987.f_6224[num] = false;
	}

	if (bParam0)
	{
		func_290(&Global_23987.f_6263[num /*10*/]);
		Global_23987.f_6324[num] = 0;
	}
	else
	{
		Global_23987.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_290(int* piParam0) // Position - 0x1CB77 (117623)
{
	if (piParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
	
		*piParam0 = 0;
		piParam0->f_9 = 0;
	}

	return;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x1CBA3 (117667)
{
	if (Global_1575058 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_297())
		return true;

	if (Global_2699022)
		return true;

	if (func_296())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_294())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1CC27 (117799)
{
	switch (func_66())
	{
		case 0:
			return func_293();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_293() // Position - 0x1CC5A (117850)
{
	switch (Global_2699130)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

BOOL func_294() // Position - 0x1CC7E (117886)
{
	return Global_2684721.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x1CC8D (117901)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_296() // Position - 0x1CCA4 (117924)
{
	return Global_2696433;
}

BOOL func_297() // Position - 0x1CCB0 (117936)
{
	return Global_2684721.f_695;
}

void func_298() // Position - 0x1CCBF (117951)
{
	SYSTEM::WAIT(0);
	return;
}

void func_299() // Position - 0x1CCCC (117964)
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::SET_BIT(&iLocal_123, 3);
	HUD::MP_TEXT_CHAT_DISABLE(true);
	return;
}


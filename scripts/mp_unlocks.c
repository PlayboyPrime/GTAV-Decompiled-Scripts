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
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
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
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = -1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
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
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	float fLocal_124 = 0f;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	BOOL bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0
{
	var lastItemMenuId;
	int selectedItemMenuId;
	int selectedItemUniqueId;

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
	fLocal_63 = 0f;
	fLocal_108 = 3f;
	fLocal_109 = 0f;
	fLocal_110 = 2f;
	fLocal_111 = 100f;
	iLocal_122 = -1;
	fLocal_124 = 0.5f;
	iLocal_140 = 50 + 1000;
	iLocal_141 = 58 + 1000;
	iLocal_150 = 39;
	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);

	if (IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM() || MISC::IS_PC_VERSION())
		iLocal_150 = 40;

	switch (iScriptParam_0)
	{
		case 3:
			while (iLocal_142 == 0)
			{
				SYSTEM::WAIT(0);
				func_77();
			
				if (func_75(202))
				{
					HUD::RELEASE_CONTROL_OF_FRONTEND();
					iLocal_142 = 1;
				}
			
				if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
				{
					if (iLocal_149 == 0)
					{
						if (func_74())
							func_71();
					}
					else
					{
						HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&lastItemMenuId, &selectedItemMenuId, &selectedItemUniqueId);
					
						if (selectedItemMenuId == 50)
						{
							iLocal_146 = selectedItemUniqueId;
							func_1(&uLocal_148);
						}
					}
				}
			}
			break;
	
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	}

	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
	HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
	HUD::RELEASE_CONTROL_OF_FRONTEND();

	while (true)
	{
		SYSTEM::WAIT(0);
	}

	return;
}

int func_1(var uParam0) // Position - 0x18B
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	func_70(0, iLocal_146, false, true);
	func_69(1);
	num = 0;
	num4 = func_62(func_65(PLAYER::PLAYER_ID(), true), false);

	switch (iLocal_146)
	{
		case 0:
			for (i = 0; i < 19; i = i + 1)
			{
				num2 = func_54(i);
				num3 = func_51(i);
			
				if (num2 > num3)
					num3 = num2;
			
				func_47(&num, num2, num3, func_50(num));
			}
			break;
	
		case 1:
			for (i = 0; i < 48; i = i + 1)
			{
				func_39(&num, func_40(i));
			}
			break;
	
		case 2:
			func_37(&num, 2, true);
			func_23(&num, "PM_UCON_T2" /*Stunt Jumps (from Rank 2)*/, func_25(21, false, false));
			func_37(&num, 3, false);
			func_23(&num, "PMCUR30", func_22(num4, 3));
			func_23(&num, "PMCUR31", func_22(num4, 3));
			func_23(&num, "WT_NGTSTK" /*Nightstick*/, func_8(1737195953, -1, 0));
			func_23(&num, "PMCUR32", func_22(num4, 3));
			func_37(&num, 4, false);
			func_23(&num, "PMCUR4", func_22(num4, 4));
			func_37(&num, 5, false);
			func_23(&num, "PM_UCON_T11" /*Movies (from Rank 5)*/, func_25(23, false, false));
			func_23(&num, "FM_RANK5_w_TICK" /*Micro SMG*/, func_8(324215364, -1, 0));
			func_23(&num, "PMCUR5", func_22(num4, 5));
			func_37(&num, 6, false);
			func_23(&num, "PM_UCON_T15" /*Arm Wrestling (from Rank 6)*/, func_25(15, false, false));
			func_23(&num, "PM_UCON_T14" /*Darts (from Rank 6)*/, func_25(14, false, false));
			func_23(&num, "PM_UCON_T13" /*Golf (from Rank 6)*/, func_25(11, false, false));
			func_23(&num, "PM_UCON_T38" /*San Andreas Flight School (from Rank 6)*/, func_25(122, false, false));
			func_23(&num, "PM_UCON_T16" /*Strip Club (from Rank 6)*/, func_25(27, false, false));
			func_23(&num, "PM_UCON_T12" /*Tennis (from Rank 6)*/, func_25(12, false, false));
			func_23(&num, "PMCUR6", func_22(num4, 6));
			func_37(&num, 7, false);
			func_23(&num, "PMCUR74", func_22(num4, 7));
			func_23(&num, "PMCUR71", func_22(num4, 7));
			func_23(&num, "PMCUR72", func_22(num4, 7));
			func_23(&num, "PMCUR70", func_22(num4, 7));
			func_23(&num, "PMCUR73", func_22(num4, 7));
			func_37(&num, 8, false);
			func_23(&num, "PMCUR83", func_22(num4, 8));
			func_23(&num, "WT_PIST_CBT" /*Combat Pistol*/, func_22(num4, 8));
			func_23(&num, "PMCUR80", func_22(num4, 8));
			func_37(&num, 9, false);
			func_23(&num, "PMCUR94", func_22(num4, 9));
			func_23(&num, "PMCUR95", func_22(num4, 9));
			func_23(&num, "PMCUR93", func_22(num4, 9));
			func_23(&num, "PMCUR90", func_22(num4, 9));
			func_23(&num, "PMCUR92", func_22(num4, 9));
			func_23(&num, "PMCUR91", func_22(num4, 9));
			func_37(&num, 10, false);
			func_23(&num, "PM_UCON_T18" /*Bounties (from Rank 10)*/, func_25(29, false, false));
			func_23(&num, "PMCUR101", func_22(num4, 10));
			func_23(&num, "PMCUR100", func_22(num4, 10));
			func_37(&num, 11, false);
			func_23(&num, "PM_UCON_T19" /*Parachuting (from Rank 11)*/, func_25(8, false, false));
			func_23(&num, "PMCUR117", func_22(num4, 11));
			func_23(&num, "PMCUR118", func_22(num4, 11));
			func_23(&num, "PMCUR116", func_22(num4, 11));
			func_23(&num, "PMCUR114", func_22(num4, 11));
			func_23(&num, "PMCUR112", func_22(num4, 11));
			func_23(&num, "PMCUR113", func_22(num4, 11));
			func_23(&num, "PMCUR115", func_22(num4, 11));
			func_37(&num, 12, false);
			func_23(&num, "PMCUR123", func_22(num4, 12));
			func_23(&num, "PMCUR122", func_22(num4, 12));
			func_23(&num, "PMCUR120", func_22(num4, 12));
			func_23(&num, "PMCUR124", func_22(num4, 12));
			func_23(&num, "PMCUR121", func_22(num4, 12));
			func_37(&num, 13, false);
			func_23(&num, "PMCUR136", func_22(num4, 13));
			func_23(&num, "PMCUR135", func_22(num4, 13));
			func_23(&num, "PMCUR134", func_22(num4, 13));
			func_23(&num, "PMCUR132", func_22(num4, 13));
			func_23(&num, "PMCUR133", func_22(num4, 13));
			func_23(&num, "PMCUR131", func_22(num4, 13));
			func_37(&num, 14, false);
			func_23(&num, "PMCUR141", func_22(num4, 14));
			func_23(&num, "PMCUR140", func_22(num4, 14));
			func_37(&num, 15, false);
			func_23(&num, "PMCUR152", func_22(num4, 15));
			func_23(&num, "PMCUR159", func_22(num4, 15));
			func_23(&num, "PMCUR1510", func_22(num4, 15));
			func_23(&num, "PMCUR1514", func_22(num4, 15));
			func_23(&num, "PMCUR1513", func_22(num4, 15));
			func_23(&num, "PMCUR1512", func_22(num4, 15));
			func_23(&num, "PMCUR1511", func_22(num4, 15));
			func_23(&num, "PMCUR1515", func_22(num4, 15));
			func_23(&num, "PMCUR1517", func_22(num4, 15));
			func_37(&num, 16, false);
			func_23(&num, "PMCUR160", func_22(num4, 16));
			func_23(&num, "PMCUR161", func_22(num4, 16));
			func_37(&num, 17, false);
			func_23(&num, "PMCUR170", func_22(num4, 17));
			func_23(&num, "PMCUR175", func_22(num4, 17));
			func_23(&num, "PMCUR176", func_22(num4, 17));
			func_23(&num, "PMCUR174", func_22(num4, 17));
			func_23(&num, "PMCUR171", func_22(num4, 17));
			func_23(&num, "PMCUR172", func_22(num4, 17));
			func_23(&num, "PMCUR173", func_22(num4, 17));
			func_37(&num, 18, false);
			func_23(&num, "PMCUR180", func_22(num4, 18));
			func_23(&num, "PMCUR183", func_22(num4, 18));
			func_23(&num, "PMCUR181", func_22(num4, 18));
			func_23(&num, "PMCUR182", func_22(num4, 18));
			func_37(&num, 19, false);
			func_23(&num, "PMCUR198", func_22(num4, 19));
			func_23(&num, "PMCUR191", func_22(num4, 19));
			func_23(&num, "PMCUR196", func_22(num4, 19));
			func_23(&num, "PMCUR195", func_22(num4, 19));
			func_23(&num, "PMCUR194", func_22(num4, 19));
			func_23(&num, "PMCUR193", func_22(num4, 19));
			func_23(&num, "PMCUR192", func_22(num4, 19));
			func_37(&num, 20, false);
			func_23(&num, "PMCUR203", func_22(num4, 20));
			func_23(&num, "PMCUR201", func_22(num4, 20));
			func_23(&num, "PMCUR200", func_22(num4, 20));
			func_23(&num, "PMCUR204", func_22(num4, 20));
			func_23(&num, "CMOD_GBX_1" /*Street Transmission*/, func_22(num4, 20));
			func_23(&num, "WAR_TRUCK_UP_2" /*Bulletproof Tires*/, func_22(num4, 20));
			func_37(&num, 21, false);
			func_23(&num, "PMCUR210", func_22(num4, 21));
			func_23(&num, "PMCUR211", func_22(num4, 21));
			func_23(&num, "PMCUR212", func_22(num4, 21));
			func_23(&num, "PMCUR216", func_22(num4, 21));
			func_23(&num, "PMCUR215", func_22(num4, 21));
			func_23(&num, "PMCUR213", func_22(num4, 21));
			func_23(&num, "PMCUR214", func_22(num4, 21));
			func_37(&num, 22, false);
			func_23(&num, "PMCUR220", func_22(num4, 22));
			func_23(&num, "PMCUR221", func_22(num4, 22));
			func_37(&num, 23, false);
			func_23(&num, "PMCUR236", func_22(num4, 23));
			func_23(&num, "PMCUR235", func_22(num4, 23));
			func_23(&num, "PMCUR233", func_22(num4, 23));
			func_23(&num, "PMCUR234", func_22(num4, 23));
			func_23(&num, "PMCUR232", func_22(num4, 23));
			func_23(&num, "PMCUR231", func_22(num4, 23));
			func_37(&num, 24, false);
			func_23(&num, "PMCUR240", func_22(num4, 24));
			func_23(&num, "PMCUR241", func_22(num4, 24));
			func_37(&num, 25, false);
			func_23(&num, "PMCUR250", func_22(num4, 25));
			func_23(&num, "PMCUR258", func_22(num4, 25));
			func_23(&num, "PMCUR259", func_22(num4, 25));
			func_23(&num, "PMCUR252", func_22(num4, 25));
			func_23(&num, "PMCUR251", func_22(num4, 25));
			func_23(&num, "PMCUR255", func_22(num4, 25));
			func_23(&num, "PMCUR254", func_22(num4, 25));
			func_23(&num, "PMCUR256", func_22(num4, 25));
			func_23(&num, "PMCUR257", func_22(num4, 25));
			func_23(&num, "PMCUR253", func_22(num4, 25));
			func_37(&num, 26, false);
			func_23(&num, "PMCUR261", func_22(num4, 26));
			func_37(&num, 27, false);
			func_23(&num, "PMCUR270", func_22(num4, 27));
			func_23(&num, "PMCUR271", func_22(num4, 27));
			func_37(&num, 28, false);
			func_23(&num, "PMCUR280", func_22(num4, 28));
			func_23(&num, "PMCUR281", func_22(num4, 28));
			func_37(&num, 29, false);
			func_23(&num, "PMCUR290", func_22(num4, 29));
			func_23(&num, "PMCUR294", func_22(num4, 29));
			func_37(&num, 30, false);
			func_23(&num, "PMCUR300", func_22(num4, 30));
			func_23(&num, "PMCUR304", func_22(num4, 30));
			func_23(&num, "PMCUR303", func_22(num4, 30));
			func_23(&num, "PMCUR302", func_22(num4, 30));
			func_37(&num, 31, false);
			func_23(&num, "PMCUR311", func_22(num4, 31));
			func_23(&num, "PMCUR310", func_22(num4, 31));
			func_37(&num, 32, false);
			func_23(&num, "PMCUR321", func_22(num4, 32));
			func_23(&num, "PMCUR320", func_22(num4, 32));
			func_37(&num, 33, false);
			func_23(&num, "PMCUR331", func_22(num4, 33));
			func_23(&num, "PMCUR332", func_22(num4, 33));
			func_37(&num, 34, false);
			func_23(&num, "PMCUR340", func_22(num4, 34));
			func_37(&num, 35, false);
			func_23(&num, "PMCUR350", func_22(num4, 35));
			func_23(&num, "PMCUR351", func_22(num4, 35));
			func_23(&num, "PMCUR352", func_22(num4, 35));
			func_37(&num, 36, false);
			func_23(&num, "PMCUR361", func_22(num4, 36));
			func_23(&num, "PMCUR360", func_22(num4, 36));
			func_37(&num, 37, false);
			func_23(&num, "PMCUR370", func_22(num4, 37));
			func_37(&num, 38, false);
			func_23(&num, "PMCUR381", func_22(num4, 38));
			func_23(&num, "PMCUR380", func_22(num4, 38));
			func_37(&num, 39, false);
			func_23(&num, "PMCUR390", func_22(num4, 39));
			func_37(&num, 40, false);
			func_23(&num, "PMCUR403", func_22(num4, 40));
			func_23(&num, "PMCUR402", func_22(num4, 40));
			func_23(&num, "PMCUR400", func_22(num4, 40));
			func_23(&num, "PMCUR401", func_22(num4, 40));
			func_23(&num, "PMCUR404", func_22(num4, 40));
			func_23(&num, "CMOD_GBX_2" /*Sports Transmission*/, func_22(num4, 40));
			func_37(&num, 41, false);
			func_23(&num, "PMCUR41", func_22(num4, 41));
			func_37(&num, 42, false);
			func_23(&num, "PMCUR420", func_22(num4, 42));
			func_37(&num, 43, false);
			func_23(&num, "PMCUR430", func_22(num4, 43));
			func_23(&num, "FM_RANK43_VM_TICK" /*Yellow Tire Smoke*/, func_22(num4, 43));
			func_37(&num, 44, false);
			func_23(&num, "PMCUR441", func_22(num4, 44));
			func_23(&num, "PMCUR440", func_22(num4, 44));
			func_37(&num, 45, false);
			func_23(&num, "PMCUR453", func_22(num4, 45));
			func_23(&num, "PMCUR451", func_22(num4, 45));
			func_37(&num, 46, false);
			func_23(&num, "PMCUR460", func_22(num4, 46));
			func_37(&num, 47, false);
			func_23(&num, "PMCUR470", func_22(num4, 47));
			func_37(&num, 49, false);
			func_23(&num, "PMCUR490", func_22(num4, 49));
			func_37(&num, 50, false);
			func_23(&num, "PMCUR501", func_22(num4, 50));
			func_23(&num, "PMCUR500", func_22(num4, 50));
			func_23(&num, "PMCUR504", func_22(num4, 50));
			func_23(&num, "PMCUR506", func_22(num4, 50));
			func_23(&num, "PMCUR502", func_22(num4, 50));
			func_23(&num, "PMCUR503", func_22(num4, 50));
			func_23(&num, "PMCUR505", func_22(num4, 50));
			func_37(&num, 51, false);
			func_23(&num, "PMCUR511", func_22(num4, 51));
			func_37(&num, 52, false);
			func_23(&num, "PMCUR522", func_22(num4, 52));
			func_37(&num, 55, false);
			func_23(&num, "CMOD_TYR_7" /*Orange Tire Smoke*/, func_22(num4, 55));
			func_37(&num, 56, false);
			func_23(&num, "PMCUR560", func_22(num4, 56));
			func_23(&num, "PMCUR561", func_22(num4, 56));
			func_37(&num, 60, false);
			func_23(&num, "PMCUR605", func_22(num4, 60));
			func_23(&num, "PMCUR604", func_22(num4, 60));
			func_23(&num, "PMCUR600", func_22(num4, 60));
			func_23(&num, "PMCUR603", func_22(num4, 60));
			func_37(&num, 61, false);
			func_23(&num, "PMCUR610", func_22(num4, 61));
			func_37(&num, 62, false);
			func_23(&num, "PMCUR620", func_22(num4, 62));
			func_37(&num, 63, false);
			func_23(&num, "PMCUR630", func_22(num4, 63));
			func_37(&num, 65, false);
			func_23(&num, "PMCUR650", func_22(num4, 65));
			func_37(&num, 70, false);
			func_23(&num, "PMCUR700", func_22(num4, 70));
			func_23(&num, "CMOD_GBX_3" /*Race Transmission*/, func_22(num4, 70));
			func_37(&num, 71, false);
			func_23(&num, "PMCUR711", func_22(num4, 71));
			func_23(&num, "PMCUR710", func_22(num4, 71));
			func_37(&num, 72, false);
			func_23(&num, "PMCUR721", func_22(num4, 72));
			func_37(&num, 73, false);
			func_23(&num, "PMCUR730", func_22(num4, 73));
			func_37(&num, 75, false);
			func_23(&num, "PMCUR751", func_22(num4, 75));
			func_37(&num, 80, false);
			func_23(&num, "PMCUR804", func_22(num4, 80));
			func_23(&num, "PMCUR803", func_22(num4, 80));
			func_23(&num, "PMCUR801", func_22(num4, 80));
			func_23(&num, "PMCUR800", func_22(num4, 80));
			func_23(&num, "PMCUR802", func_22(num4, 80));
			func_37(&num, 81, false);
			func_23(&num, "PMCUR811", func_22(num4, 81));
			func_37(&num, 82, false);
			func_23(&num, "PMCUR820", func_22(num4, 82));
			func_37(&num, 83, false);
			func_23(&num, "PMCUR830", func_22(num4, 83));
			func_37(&num, 90, false);
			func_23(&num, "PMCUR900", func_22(num4, 90));
			func_23(&num, "PMCUR901", func_22(num4, 90));
			func_37(&num, 91, false);
			func_23(&num, "PMCUR910", func_22(num4, 91));
			func_37(&num, 100, false);
			func_23(&num, "PMCUR1009", func_22(num4, 100));
			func_23(&num, "PMCUR1008", func_22(num4, 100));
			func_23(&num, "PMCUR1001", func_22(num4, 100));
			func_23(&num, "PMCUR1002", func_22(num4, 100));
			func_23(&num, "PMCUR1000", func_22(num4, 100));
			func_23(&num, "PMCUR1004", func_22(num4, 100));
			func_23(&num, "PMCUR1003", func_22(num4, 100));
			func_37(&num, 120, false);
			func_23(&num, "FM_RANK120_W_TICK" /*Minigun*/, func_22(num4, 120));
			break;
	}

	if (num > 16)
	{
		bLocal_147 = true;
		func_7(1, 2, 1, 1, 0, false);
		func_5(1, 0, num, 0, false);
		HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1871331138);
	}
	else
	{
		bLocal_147 = false;
		func_5(1, -1, -1, 0, false);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	}

	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
	func_4(1);
	func_2(1);
	*uParam0 = 1;
	return 1;
}

void func_2(int iParam0) // Position - 0x135A
{
	func_3(iParam0, true);
	return;
}

void func_3(int iParam0, BOOL bParam1) // Position - 0x1369
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	if (iParam0 == 2)
		if (bParam1)
			MISC::CLEAR_BIT(&Global_1574949, iParam0);
		else
			MISC::SET_BIT(&Global_1574949, iParam0);

	return;
}

void func_4(int iParam0) // Position - 0x13AE
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_5(int iParam0, int iParam1, int iParam2, const char* sParam3, BOOL bParam4) // Position - 0x13CB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_6("");
	}

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_6(char* sParam0) // Position - 0x1428
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x143A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_8(int iParam0, int iParam1, int iParam2) // Position - 0x147D
{
	int num;
	eControlAction action;

	iParam2 == 0;

	if (func_21())
		return false;

	num = func_12(iParam0, iParam1);
	action = func_10(iParam0);
	return IS_BIT_SET(num, func_9(action));
}

int func_9(eControlAction ecaParam0) // Position - 0x14B1
{
	return ecaParam0 % 32;
}

eControlAction func_10(int iParam0) // Position - 0x14BE
{
	return func_11(iParam0);
}

int func_11(int iParam0) // Position - 0x14CC
{
	switch (iParam0)
	{
		case -1569615261:
			return 0;
	
		case 453432689:
			return 1;
	
		case 1593441988:
			return 2;
	
		case 584646201:
			return 3;
	
		case -1716589765:
			return 4;
	
		case 736523883:
			return 5;
	
		case -270015777:
			return 6;
	
		case 324215364:
			return 7;
	
		case -1074790547:
			return 8;
	
		case -2084633992:
			return 9;
	
		case -1357824103:
			return 11;
	
		case -1660422300:
			return 12;
	
		case 2144741730:
			return 13;
	
		case -572349828:
			return 14;
	
		case 741814745:
			return 15;
	
		case -1813897027:
			return 16;
	
		case -37975472:
			return 17;
	
		case 856002082:
			return 18;
	
		case 392730790:
			return 19;
	
		case 100416529:
			return 20;
	
		case 205991906:
			return 21;
	
		case 487013001:
			return 22;
	
		case -1654528753:
			return 23;
	
		case -494615257:
			return 24;
	
		case 2017895192:
			return 25;
	
		case -1568386805:
			return 26;
	
		case -1312131151:
			return 27;
	
		case 1119849093:
			return 28;
	
		case -344484024:
			return 29;
	
		case -1887867191:
			return 30;
	
		case 911657153:
			return 31;
	
		case -837150131:
			return 32;
	
		case -72657034:
			return 33;
	
		case -1716189206:
			return 34;
	
		case 1737195953:
			return 35;
	
		case 1317494643:
			return 36;
	
		case -1786099057:
			return 37;
	
		case -2067956739:
			return 38;
	
		case 1141786504:
			return 39;
	
		case 1305664598:
			return 40;
	
		case 615608432:
			return 41;
	
		case 101631238:
			return 42;
	
		case 883325847:
			return 43;
	
		case -38085395:
			return 44;
	
		case -102323637:
			return 45;
	
		case -1063057011:
			return 46;
	
		case -1076751822:
			return 47;
	
		case -771403250:
			return 49;
	
		case 2132975508:
			return 48;
	
		case 1627465347:
			return 50;
	
		case -1834847097:
			return 51;
	
		case 137902532:
			return 52;
	
		case 1198879012:
			return 57;
	
		case -1466123874:
			return 53;
	
		case 2138347493:
			return 54;
	
		case -952879014:
			return 56;
	
		case 984333226:
			return 55;
	
		case -1420407917:
			return 60;
	
		case 1672152130:
			return 61;
	
		case -102973651:
			return 58;
	
		case 1834241177:
			return 59;
	
		case 171789620:
			return 64;
	
		case -656458692:
			return 62;
	
		case -598887786:
			return 63;
	
		case -581044007:
			return 65;
	
		case -619010992:
			return 68;
	
		case -275439685:
			return 66;
	
		case 1649403952:
			return 67;
	
		case -1951375401:
			return 69;
	
		case -1045183535:
			return 70;
	
		case -538741184:
			return 71;
	
		case 317205821:
			return 72;
	
		case -1121678507:
			return 73;
	
		case 125959754:
			return 74;
	
		case -853065399:
			return 75;
	
		case -1169823560:
			return 76;
	
		case -1810795771:
			return 77;
	
		case 419712736:
			return 78;
	
		case 961495388:
			return 8;
	
		case -86904375:
			return 9;
	
		case -608341376:
			return 13;
	
		case 177293209:
			return 21;
	
		case -1075685676:
			return 1;
	
		case 2024373456:
			return 5;
	
		case 1432025498:
			return 22;
	
		case -1768145561:
			return 46;
	
		case -2009644972:
			return 47;
	
		case 1785463520:
			return 56;
	
		case -879347409:
			return 70;
	
		case -2066285827:
			return 48;
	
		case -1746263880:
			return 79;
	
		case 940833800:
			return 80;
	
		case -1355376991:
			return 81;
	
		case 1198256469:
			return 82;
	
		case -1238556825:
			return 83;
	
		case -1853920116:
			return 84;
	
		case 727643628:
			return 85;
	
		case 94989220:
			return 86;
	
		case -1658906650:
			return 88;
	
		case 1470379660:
			return 87;
	
		case -947031628:
			return 10;
	
		case -618237638:
			return 89;
	
		case 406929569:
			return 90;
	
		case 1171102963:
			return 91;
	
		case -610080759:
			return 92;
	
		case -774507221:
			return 93;
	
		case 1853742572:
			return 94;
	
		case 465894841:
			return 95;
	
		case 1703483498:
			return 96;
	
		case -22923932:
			return 97;
	
		case 350597077:
			return 98;
	
		case 1924557585:
			return 99;
	
		case 62870901:
			return 100;
	
		case -624951259:
			return 101;
	}

	return 0;
}

int func_12(int iParam0, int iParam1) // Position - 0x1B0E
{
	int num;

	num = func_13(func_17(iParam0), iParam1);
	return num;
}

int func_13(int iParam0, int iParam1) // Position - 0x1B26
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_14(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_14(int iParam0, int iParam1) // Position - 0x1B55
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_15(iParam1));
}

int func_15(int iParam0) // Position - 0x1B6A
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_16();
	
		if (num2 > -1)
		{
			Global_2750950 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750950 = 1;
		}
	}

	return num;
}

int func_16() // Position - 0x1B9E
{
	return Global_1574926;
}

int func_17(int iParam0) // Position - 0x1BAA
{
	eControlAction action;
	int num;

	action = func_10(iParam0);
	num = func_20(action);

	if (func_19() == 0 || func_18() == 0 || func_19() == 999 && func_18() == 999 || func_19() == 1000 && func_18() == 1000)
	{
		switch (num)
		{
			case 0:
				return 680;
		
			case 1:
				return 681;
		
			case 2:
				return 2429;
		
			case 3:
				return 10280;
		
			case 4:
				return 12217;
		
			case 5:
				return 12305;
		}
	}

	return 14835;
}

int func_18() // Position - 0x1C74
{
	return Global_32949;
}

int func_19() // Position - 0x1C7F
{
	return Global_32948;
}

int func_20(eControlAction ecaParam0) // Position - 0x1C8A
{
	return ecaParam0 / 32;
}

BOOL func_21() // Position - 0x1C97
{
	return Global_1575062;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0x1CA3
{
	if (iParam0 >= iParam1)
		return true;

	return false;
}

void func_23(var uParam0, char* sParam1, BOOL bParam2) // Position - 0x1CB7
{
	func_24(1, *uParam0, iLocal_141, *uParam0, sParam1, bParam2, 1);
	*uParam0 = *uParam0 + 1;
	return;
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, BOOL bParam5, int iParam6) // Position - 0x1CD9
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_6(sParam4);
	
		if (bParam5 == true)
			if (iParam6 == 0)
				func_6("PM_UJOB_YES" /*Yes*/);
			else
				func_6("PM_UCON_ULK" /*Unlocked*/);
		else if (iParam6 == 0)
			func_6("PM_UJOB_NO" /*No*/);
		else
			func_6("PM_UCON_LCK" /*Locked*/);
	
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL func_25(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1D58
{
	int num;
	int num2;

	if (Global_262145.f_8337 == 1)
	{
		if (iParam0 == 67)
			return true;
	
		if (iParam0 == 74)
			return true;
	
		if (func_29(PLAYER::PLAYER_ID(), 85))
			if (iParam0 == 64 || iParam0 == 77 || iParam0 == 61 || iParam0 == 81 || iParam0 == 63 || iParam0 == 62)
				return true;
	
		if (iParam0 == 66 || iParam0 == 116 || iParam0 == 103 || iParam0 == 104 || iParam0 == 105 || iParam0 == 119 || iParam0 == 88 || iParam0 == 75 || iParam0 == 95 || iParam0 == 65 || iParam0 == 98)
			return true;
	}

	if (iParam0 < 0)
		return false;

	if (iParam0 == 31)
		if (Global_262145.f_4408 == 1)
			return true;

	if (func_28() || func_27())
		return true;

	num = iParam0;
	num2 = num / 32;
	num = num % 32;

	if (bParam1)
		if (iParam0 == 3)
			if (func_26())
				return true;
			else
				return false;

	if (bParam2)
		return false;

	return IS_BIT_SET(Global_1836944[num2], num);
}

BOOL func_26() // Position - 0x1EC3
{
	int num;

	if (Global_1574612)
		return true;

	if (IS_BIT_SET(Global_2738935.f_1846, 23))
		return true;

	if (func_28())
		return true;

	if (func_27())
		return true;

	num = func_13(1304, -1);

	if (IS_BIT_SET(num, 7))
	{
		MISC::SET_BIT(&(Global_2738935.f_1846), 23);
		return true;
	}

	return false;
}

BOOL func_27() // Position - 0x1F20
{
	return Global_1575071;
}

BOOL func_28() // Position - 0x1F2C
{
	return Global_1575073;
}

BOOL func_29(Player plParam0, int iParam1) // Position - 0x1F38
{
	if (!func_33())
		return false;

	if (func_32())
		return false;

	if (iParam1 == 86)
		return true;

	return func_30(&(Global_1845281[plParam0 /*883*/].f_819), func_31(iParam1));
}

BOOL func_30(var uParam0, int iParam1) // Position - 0x1F78
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_31(int iParam0) // Position - 0x1F9B
{
	switch (iParam0)
	{
		case 86:
			return 0;
	
		case 19:
			return 1;
	
		case 12:
			return 2;
	
		case 31:
			return 3;
	
		case 20:
			return 4;
	
		case 18:
			return 5;
	
		case 2:
			return 6;
	
		case 76:
			return 7;
	
		case 22:
			return 8;
	
		case 53:
			return 9;
	
		case 34:
			return 10;
	
		case 152:
			return 11;
	
		case 85:
			return 12;
	
		case 84:
			return 13;
	
		case 0:
			return 14;
	
		case 1:
			return 15;
	
		case 153:
			return 16;
	
		case 151:
			return 17;
	
		case 14:
			return 18;
	
		case 15:
			return 19;
	
		case 24:
			return 20;
	
		case 30:
			return 21;
	
		case 46:
			return 22;
	
		case 47:
			return 23;
	
		case 54:
			return 24;
	
		case 51:
			return 25;
	
		case 60:
			return 26;
	
		case 62:
			return 27;
	
		case 66:
			return 28;
	
		case 69:
			return 29;
	
		case 154:
			return 30;
	
		case 82:
			return 31;
	
		case 157:
			return 32;
	
		case 167:
			return 34;
	
		case 169:
			return 35;
	
		case 171:
			return 36;
	
		case 172:
			return 37;
	
		case 173:
			return 38;
	
		case 177:
			return 39;
	
		case 182:
			return 40;
	
		case 188:
			return 41;
	
		case 190:
			return 42;
	
		case 197:
			return 43;
	
		case 201:
			return 44;
	
		default:
		
	}

	return 1;
}

BOOL func_32() // Position - 0x2187
{
	return IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 3);
}

BOOL func_33() // Position - 0x219E
{
	if (!func_34())
		return false;

	return true;
}

BOOL func_34() // Position - 0x21B3
{
	if (Global_1574612)
		return true;

	if (func_28())
		return true;

	if (func_27())
		return true;

	return func_35(120, -1);
}

BOOL func_35(int iParam0, int iParam1) // Position - 0x21E3
{
	Hash statHash;
	BOOL outValue;

	statHash = func_36(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_36(int iParam0, int iParam1) // Position - 0x2207
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_15(iParam1));
}

void func_37(var uParam0, int iParam1, BOOL bParam2) // Position - 0x221C
{
	char* str;

	if (!bParam2)
	{
		func_38(1, *uParam0, iLocal_141, *uParam0, "", iParam1);
		*uParam0 = *uParam0 + 1;
	}

	str = "PAUSEUNLRANK";
	func_38(1, *uParam0, iLocal_141, *uParam0, str, iParam1);
	*uParam0 = *uParam0 + 1;
	return;
}

void func_38(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5) // Position - 0x2264
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		func_6("BLANKBUSY" /*µ*/);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_39(var uParam0, BOOL bParam1) // Position - 0x22BA
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "PM_UJOB_T", 16);
	TEXT_LABEL_APPEND_INT(&unk, *uParam0, 16);
	func_24(1, *uParam0, iLocal_141, *uParam0, &unk, bParam1, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_40(int iParam0) // Position - 0x22EB
{
	switch (iParam0)
	{
		case 0:
			return func_35(78, -1);
	
		case 1:
			return func_35(79, -1);
	
		case 2:
			return func_35(80, -1);
	
		case 3:
			return _STAT_GET_PACKED_BOOL(30, -1);
	
		case 4:
			return func_35(81, -1);
	
		case 5:
			return func_13(1259, -1) > 0;
	
		case 6:
			return func_13(1261, -1) > 0;
	
		case 7:
			return func_35(83, -1);
	
		case 8:
			return _STAT_GET_PACKED_BOOL(11, -1);
	
		case 9:
			return func_35(95, -1);
	
		case 10:
			return func_35(96, -1);
	
		case 11:
			return func_35(97, -1);
	
		case 12:
			return _STAT_GET_PACKED_BOOL(8, -1);
	
		case 13:
			return _STAT_GET_PACKED_BOOL(9, -1);
	
		case 14:
			return func_35(98, -1);
	
		case 15:
			return func_45();
	
		case 16:
			return func_43(27, -1) > 0;
	
		case 17:
			return _STAT_GET_PACKED_BOOL(3, -1);
	
		case 18:
			return _STAT_GET_PACKED_BOOL(2, -1);
	
		case 19:
			return _STAT_GET_PACKED_BOOL(4, -1);
	
		case 20:
			return func_35(100, -1);
	
		case 21:
			return _STAT_GET_PACKED_BOOL(31, -1);
	
		case 22:
			return func_35(102, -1);
	
		case 23:
			return func_35(103, -1);
	
		case 24:
			return func_35(104, -1);
	
		case 25:
			return func_35(105, -1);
	
		case 26:
			return func_35(107, -1);
	
		case 27:
			return func_35(84, -1);
	
		case 28:
			return func_13(1265, -1) > 0;
	
		case 29:
			return func_35(85, -1);
	
		case 30:
			return func_13(1263, -1) > 0;
	
		case 31:
			return func_13(1267, -1) > 0;
	
		case 32:
			return func_13(1260, -1) > 0;
	
		case 33:
			return func_13(1266, -1) > 0;
	
		case 34:
			return func_13(1249, -1) > 0;
	
		case 35:
			return func_35(86, -1);
	
		case 36:
			if (_MPPLY_STAT_GET_INT(-1678617733) > 0 || _MPPLY_STAT_GET_INT(-1609664002) > 0)
				return true;
			else
				return false;
			break;
	
		case 37:
			return _STAT_GET_PACKED_BOOL(27, -1);
	
		case 38:
			return _STAT_GET_PACKED_BOOL(26, -1);
	
		case 39:
			return func_13(1258, -1) > 0;
	
		case 40:
			return func_13(1168, -1) > 0;
	
		case 41:
			return _STAT_GET_PACKED_BOOL(5, -1);
	
		case 42:
			return _STAT_GET_PACKED_BOOL(1, -1);
	
		case 43:
			return func_13(1148, -1) > 0 || func_13(1149, -1) > 0;
	
		case 44:
			return _STAT_GET_PACKED_BOOL(10, -1);
	
		case 45:
			return func_35(90, -1);
	
		case 46:
			return _STAT_GET_PACKED_BOOL(25, -1);
	
		case 47:
			return func_41();
	}

	return false;
}

BOOL func_41() // Position - 0x2646
{
	int num;

	num = 0;

	if (func_13(2090, -1) > 0)
		num = 1;

	return num;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x2662
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_43(int iParam0, int iParam1) // Position - 0x2680
{
	Hash statHash;
	int outValue;

	statHash = func_44(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_44(int iParam0, int iParam1) // Position - 0x26A4
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_15(iParam1));
}

BOOL func_45() // Position - 0x26BA
{
	int num;

	num = 0;

	if (func_43(142, -1) > 0)
		num = 1;

	return num;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x26D5
{
	if (iParam1 == -1)
		iParam1 = func_16();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_47(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x26F1
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "PM_UGEN_T", 16);
	TEXT_LABEL_APPEND_INT(&unk, *uParam0, 16);

	if (!bParam3)
		func_49(1, *uParam0, iLocal_141, *uParam0, &unk, "PM_UGEN_NUM" /*~1~/~1~*/, iParam1, iParam2);
	else
		func_48(1, *uParam0, iLocal_141, *uParam0, &unk, "NUMBR" /*~1~*/, iParam1);

	*uParam0 = *uParam0 + 1;
	return;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6) // Position - 0x2745
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_6(sParam4);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_49(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7) // Position - 0x2799
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_6(sParam4);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL func_50(int iParam0) // Position - 0x27F3
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3 || iParam0 == 4 || iParam0 == 5 || iParam0 == 6)
		return true;

	return false;
}

int func_51(int iParam0) // Position - 0x2839
{
	int num;

	switch (iParam0)
	{
		case 0:
			return Global_794744.f_154887[2];
	
		case 7:
			return Global_794744.f_154887[1];
	
		case 8:
			return Global_794744.f_154887[8];
	
		case 9:
			return Global_794744.f_154887[3];
	
		case 10:
			return Global_794744.f_154887[0];
	
		case 11:
			if (func_53() || func_52() || MISC::IS_PC_VERSION() || IS_PLAYSTATION_PLATFORM() || IS_XBOX_PLATFORM())
			{
				num = num + 2;
				num = num + 2;
				num = num + 1;
				num = num + 7;
			
				if (Global_262145.f_22641)
					num = num + 1;
			
				if (Global_262145.f_32191)
					num = num + 1;
			
				return 47 + num;
			}
			else
			{
				return 44;
			}
			break;
	
		case 12:
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() || func_53() || func_52())
			{
				num = 0;
				num = num + 19;
				num = num + 8;
				return Global_262145.f_21565 + num;
			}
			else
			{
				return Global_262145.f_21565;
			}
			break;
	
		case 13:
			return 205;
	
		case 14:
			return 106;
	
		case 15:
			return 60;
	
		case 16:
			return 180;
	
		case 17:
			return 89 + iLocal_150;
	
		case 19:
			return 10;
	}

	return -1;
}

BOOL func_52() // Position - 0x29C5
{
	return 1;
}

BOOL func_53() // Position - 0x29CE
{
	return true;
}

int func_54(int iParam0) // Position - 0x29D7
{
	int num;

	switch (iParam0)
	{
		case 0:
			return Global_794744.f_154901[2];
	
		case 1:
			return func_61();
	
		case 2:
			return func_60();
	
		case 3:
			return func_59();
	
		case 4:
			return func_58();
	
		case 5:
			return func_57();
	
		case 6:
			return func_55();
	
		case 7:
			return Global_794744.f_154901[1];
	
		case 8:
			return Global_794744.f_154901[8];
	
		case 9:
			return Global_794744.f_154901[3];
	
		case 10:
			return Global_794744.f_154901[0];
	
		case 11:
			return func_13(1233, -1);
	
		case 12:
			return func_13(1234, -1);
	
		case 13:
			return func_13(1243, -1) - 1;
	
		case 14:
			return func_13(1238, -1);
	
		case 15:
			return func_13(1244, -1);
	
		case 16:
			return func_13(1239, -1);
	
		case 17:
			return func_13(756, -1);
	
		case 18:
			if (func_35(389, -1))
				num = num + 1;
		
			if (func_35(390, -1))
				num = num + 1;
		
			if (func_35(391, -1))
				num = num + 1;
		
			if (func_35(392, -1))
				num = num + 1;
		
			if (func_35(393, -1))
				num = num + 1;
		
			if (func_35(394, -1))
				num = num + 1;
		
			if (func_35(&func_1, -1))
				num = num + 1;
		
			if (func_35(396, -1))
				num = num + 1;
		
			if (func_35(397, -1))
				num = num + 1;
		
			if (func_35(398, -1))
				num = num + 1;
		
			return num;
	}

	return -1;
}

int func_55() // Position - 0x2BD0
{
	int num;

	num = func_56(24);
	num = num + func_56(25);
	return num;
}

int func_56(int iParam0) // Position - 0x2BED
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 1500; i = i + 1)
	{
		if (IS_BIT_SET(Global_794744.f_4[i /*89*/].f_76, 14))
			if (Global_794744.f_4[i /*89*/].f_65 < 13 && Global_794744.f_4[i /*89*/].f_70 <= 1000 && Global_794744.f_4[i /*89*/].f_68 == iParam0 && Global_794744.f_4[i /*89*/].f_65 == 2)
				num = num + 1;
	}

	return num;
}

int func_57() // Position - 0x2C74
{
	int num;

	num = func_56(6);
	num = num + func_56(7);
	return num;
}

int func_58() // Position - 0x2C8F
{
	int num;

	num = func_56(2);
	num = num + func_56(3);
	return num;
}

int func_59() // Position - 0x2CAA
{
	int num;

	num = func_56(4);
	num = num + func_56(5);
	return num;
}

int func_60() // Position - 0x2CC5
{
	int num;

	num = func_56(12);
	num = num + func_56(13);
	return num;
}

int func_61() // Position - 0x2CE2
{
	int num;

	num = func_56(0);
	num = num + func_56(1);
	num = num + func_56(10);
	num = num + func_56(11);
	num = num + func_56(2);
	return num;
}

int func_62(int iParam0, BOOL bParam1) // Position - 0x2D1D
{
	bParam1;
	return func_63(iParam0, 0);
}

int func_63(int iParam0, int iParam1) // Position - 0x2D31
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
	
		if (func_64(num) == iParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_64(num) < iParam0)
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
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

// Unhandled jump detected. Output should be considered invalid
int func_64(int iParam0) // Position - 0x2DEC
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
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
				return 663800;
		
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
		
			default:
				goto 0x534;
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

int func_65(Player plParam0, BOOL bParam1) // Position - 0x3327
{
	bParam1;
	return func_66(plParam0);
}

int func_66(Player plParam0) // Position - 0x333A
{
	if (Global_1574633.f_9 == 0)
		if (plParam0 > -1)
			if (plParam0 == PLAYER::PLAYER_ID())
				return func_13(640, -1);
			else if (func_67(plParam0))
				return Global_1845281[plParam0 /*883*/].f_206.f_1;
	else
		return func_13(640, -1);

	return 0;
}

BOOL func_67(Player plParam0) // Position - 0x3391
{
	if (!func_68(plParam0))
		return false;

	return IS_BIT_SET(Global_2672855.f_1, plParam0);
}

BOOL func_68(Player plParam0) // Position - 0x33B0
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_69(int iParam0) // Position - 0x33D2
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY"))
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_70(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x33EF
{
	if (iParam1 == -1)
		return;

	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_71() // Position - 0x3427
{
	var lastItemMenuId;
	var selectedItemMenuId;
	var selectedItemUniqueId;

	HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&lastItemMenuId, &selectedItemMenuId, &selectedItemUniqueId);
	func_69(0);
	iLocal_146 = 0;
	func_73(0, 0, iLocal_140, 0, true, "PM_UL_D0" /*General*/, false, 0, false);
	func_73(0, 1, iLocal_140, 1, true, "PM_UL_D1" /*Progress*/, false, 0, false);
	func_73(0, 2, iLocal_140, 2, true, "PM_UL_D2" /*Content*/, false, 0, false);
	func_2(0);
	func_72(2);
	func_72(3);
	func_72(4);
	func_72(5);
	func_4(0);
	func_1(&uLocal_148);
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
	iLocal_149 = 1;
	return;
}

void func_72(int iParam0) // Position - 0x34B3
{
	func_3(iParam0, false);
	return;
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, char* sParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x34C2
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (bParam4)
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	
		func_6(sParam5);
	
		if (bParam6)
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (bParam8)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(21);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam8);
		}
	
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL func_74() // Position - 0x353C
{
	int i;

	for (i = 0; i < 13; i = i + 1)
	{
		Global_794744.f_154901[i] = 0;
	}

	for (i = 0; i < 1500; i = i + 1)
	{
		if (IS_BIT_SET(Global_794744.f_4[i /*89*/].f_76, 14))
			if (Global_794744.f_4[i /*89*/].f_65 < 13 && Global_794744.f_4[i /*89*/].f_70 <= 1000)
				Global_794744.f_154901[Global_794744.f_4[i /*89*/].f_65] = Global_794744.f_154901[Global_794744.f_4[i /*89*/].f_65] + 1;
	}

	return true;
}

BOOL func_75(eControlAction ecaParam0) // Position - 0x35E3
{
	eControlAction action;
	int num;
	int offset;

	action = ecaParam0;
	num = func_20(action);
	offset = func_9(action);

	if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, ecaParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, ecaParam0) || func_76(ecaParam0, &(Global_1668667.f_1060), 1))
	{
		if (!IS_BIT_SET(Global_1668667.f_1049[num], offset))
		{
			MISC::SET_BIT(&Global_1668667.f_1049[num], offset);
			return true;
		}
	}
	else if (IS_BIT_SET(Global_1668667.f_1049[num], offset))
	{
		MISC::CLEAR_BIT(&Global_1668667.f_1049[num], offset);
	}

	return false;
}

BOOL func_76(eControlAction ecaParam0, var uParam1, int iParam2) // Position - 0x3677
{
	int num;
	int num2;
	int num3;

	num = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 127;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 127;
	num3 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X) - 127;

	switch (ecaParam0)
	{
		case INPUT_FRONTEND_LEFT:
			if (num < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case INPUT_FRONTEND_RIGHT:
			if (num > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case INPUT_FRONTEND_UP:
			if (num2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case INPUT_FRONTEND_DOWN:
			if (num2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case INPUT_FRONTEND_RRIGHT:
			if (num3 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case INPUT_FRONTEND_RLEFT:
			if (num3 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	}

	return false;
}

void func_77() // Position - 0x37DA
{
	int controlValue;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		controlValue = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y);
	
		if (controlValue > 180)
		{
			if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_143, iLocal_145, false))
			{
				if (bLocal_147)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				
					if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					iLocal_145 = 250;
					_STOPWATCH_DESTROY(&uLocal_143);
				}
			}
		}
		else if (controlValue < 80)
		{
			if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_143, iLocal_145, false))
			{
				if (bLocal_147)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				
					if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					iLocal_145 = 250;
					_STOPWATCH_DESTROY(&uLocal_143);
				}
			}
		}
		else if (iLocal_145 != -1)
		{
			iLocal_145 = -1;
		}
	}

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x3897
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x38A4
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

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x3902
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

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x3947
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x395D
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}


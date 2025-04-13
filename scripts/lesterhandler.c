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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	Ped pedLocal_44 = 0;
	Object obLocal_45 = 0;
	Object obLocal_46 = 0;
	int iLocal_47 = 0;
	Hash hLocal_48 = 0;
	var uLocal_49 = 16;
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
	var uLocal_63 = 0;
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
	var uLocal_123 = 0;
	var uLocal_124 = 0;
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
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	Ped pedScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	Vector3 vector;
	Vector3 vector2;
	float num;

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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_30();

	if (func_29(false))
		func_30();

	pedLocal_44 = pedScriptParam_0;
	STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL@HACKING");
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_MODEL(joaat("prop_laptop_lester2"));

	while (!STREAMING::HAS_ANIM_DICT_LOADED("MISSHEIST_JEWEL@HACKING") || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_lester2")))
	{
		SYSTEM::WAIT(0);
	}

	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
		HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);

	if (!HUD::IS_NAMED_RENDERTARGET_LINKED(joaat("prop_laptop_lester2")))
		HUD::LINK_NAMED_RENDERTARGET(joaat("prop_laptop_lester2"));

	iLocal_216 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");

	while (!IS_BIT_SET(iLocal_214, 1))
	{
		if (!IS_BIT_SET(iLocal_214, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_44))
			{
				if (!PED::IS_PED_INJURED(pedLocal_44))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_44, false, true);
					PED::ADD_RELATIONSHIP_GROUP("Lester Group", &hLocal_48);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_48, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), hLocal_48);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_44, hLocal_48);
					PED::SET_PED_DIES_WHEN_INJURED(pedLocal_44, false);
					PED::SET_PED_CAN_BE_TARGETTED(pedLocal_44, false);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(pedLocal_44, false);
					PED::SET_PED_CAN_EVASIVE_DIVE(pedLocal_44, false);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_44, false, 0);
					PED::SET_PED_CAN_RAGDOLL(pedLocal_44, false);
					PED::SET_PED_ID_RANGE(pedLocal_44, 250f);
					PED::SET_PED_TARGET_LOSS_RESPONSE(pedLocal_44, 1);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_44, false, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_44, true);
					PED::SET_PED_CONFIG_FLAG(pedLocal_44, 132, true);
					PED::SET_PED_CONFIG_FLAG(pedLocal_44, 32, false);
					PED::SET_PED_CONFIG_FLAG(pedLocal_44, 208, true);
					PED::SET_PED_CONFIG_FLAG(pedLocal_44, 118, false);
					PED::SET_PED_CONFIG_FLAG(pedLocal_44, 174, true);
					PED::SET_PED_CONFIG_FLAG(pedLocal_44, 169, true);
					ENTITY::SET_ENTITY_PROOFS(pedLocal_44, true, true, true, true, true, false, false, false);
					vector = { 707.32f, -966.83f, 30.413f };
					vector2 = { 0f, 0f, -171.5f };
					TASK::OPEN_SEQUENCE_TASK(&iLocal_47);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHEIST_JEWEL@HACKING", "HACK_INTRO", vector, vector2, 8f, -8f, -1, 262152, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHEIST_JEWEL@HACKING", "HACK_LOOP", vector, vector2, 8f, -8f, -1, 262153, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_47);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_44, iLocal_47);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_44, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_44, true);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_49, 3, pedLocal_44, "LESTER", 0, 1);
					obLocal_45 = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 706.98737f, -967.09454f, 30.4f, false, false, false);
					ENTITY::SET_ENTITY_COORDS(obLocal_45, 706.98737f, -967.09454f, 30.4f, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(obLocal_45, 90f, 0f, 160f, 2, true);
					ENTITY::SET_ENTITY_INVINCIBLE(obLocal_45, true, false);
					ENTITY::SET_ENTITY_PROOFS(obLocal_45, true, true, true, true, true, false, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_45, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
					ENTITY::CREATE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), false);
					obLocal_46 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), 707.3041f, -967.6456f, 30.376f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(obLocal_46, 183.14f);
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_46, true);
					ENTITY::SET_ENTITY_INVINCIBLE(obLocal_46, true, false);
					ENTITY::SET_ENTITY_PROOFS(obLocal_46, true, true, true, true, true, false, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_lester2"));
					MISC::SET_BIT(&iLocal_214, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_44, false))
			{
				num = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_44, true));
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					if (num < 4f)
						if (MISC::GET_GAME_TIMER() > iLocal_215)
							if (!func_21())
								if (_CONVERSATION_ADD_LINE(&uLocal_49, "JHFAUD", "JHF_LEAVE", 3, 0, 0, 0))
									iLocal_215 = MISC::GET_GAME_TIMER() + 25000;
			
				if (Global_79804 == 86)
				{
					if (!Global_114130 == true && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 718.0749f, -976.0472f, 22.914824f, 718.05927f, -979.45496f, 27.119097f, 5.75f, false, true, 0))
					{
						func_3(7, true);
						Global_114126 = 0;
						Global_114130 = true;
						BRAIN::REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
					}
				}
			
				func_1();
			
				if (num > 2500f)
					MISC::SET_BIT(&iLocal_214, 1);
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_30();
	return;
}

void func_1() // Position - 0x44E (1102)
{
	if (func_2())
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_46))
		{
			HUD::SET_TEXT_RENDER_ID(iLocal_216);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_217, 0.08f, 0.17f, 0.27f, 0.45f, 255, 255, 255, 255, 0);
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
		}
	}

	return;
}

BOOL func_2() // Position - 0x495 (1173)
{
	iLocal_217 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("JHPB_02_Laptop");

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_217))
		return true;

	return false;
}

void func_3(int iParam0, BOOL bParam1) // Position - 0x4B4 (1204)
{
	int offset;

	offset = iParam0;

	if (offset < 31)
	{
		if (bParam1)
			MISC::SET_BIT(&(Global_114135.f_24999), offset);
		else
			MISC::CLEAR_BIT(&(Global_114135.f_24999), offset);
	}
	else
	{
		offset = offset - 31;
	
		if (bParam1)
			MISC::SET_BIT(&(Global_114135.f_24999.f_1), offset);
		else
			MISC::CLEAR_BIT(&(Global_114135.f_24999.f_1), offset);
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x519 (1305)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
	return func_5(sParam2, iParam3, false);
}

BOOL func_5(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x567 (1383)
{
	Global_22426 = 0;

	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam1 > Global_22427)
			{
				if (Global_22432 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
					Global_22436 = 0;
					Global_22435 = false;
					Global_21065 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_18(8, -1))
			return 0;
	
		Global_22501 = { Global_22495 };
		func_17();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_23421 = Global_23422;
		Global_22044.f_370 = Global_23414;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22421 = Global_22422;
	
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21066.f_1 > 3)
					return 0;
			}
		
			if (Global_21032 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_14())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_79539)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_13())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8919, 9))
					return 0;
			}
		
			func_12();
			Global_22435 = bParam2;
		}
	
		Global_22427 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_11();
		func_6();
		return 1;
	}

	if (Global_22425 == 5)
		return 0;

	if (iParam1 < Global_22427 || iParam1 == Global_22427)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}

	return 0;
}

void func_6() // Position - 0x835 (2101)
{
	if (!func_7())
		return;

	if (Global_22431)
	{
		TEXT_LABEL_COPY(&(Global_1972230.f_1), { Global_22044 }, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}

	return;
}

BOOL func_7() // Position - 0x86C (2156)
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79539)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_8(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_8(Player plParam0) // Position - 0x8CF (2255)
{
	return func_9(plParam0, 20);
}

BOOL func_9(Player plParam0, int iParam1) // Position - 0x8DF (2271)
{
	return IS_BIT_SET(Global_1887549[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x8F7 (2295)
{
	return -1;
}

void func_11() // Position - 0x900 (2304)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21293[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22425 = 1;
	return;
}

void func_12() // Position - 0x931 (2353)
{
	Global_22478 = Global_22477;
	Global_22472 = Global_22473;
	Global_22519 = { Global_22507 };
	Global_22525 = { Global_22513 };
	Global_22480 = Global_22479;
	Global_22549 = { Global_22531 };
	Global_22555 = { Global_22537 };
	Global_22561 = { Global_22543 };
	Global_22567 = { Global_22573 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22436 = Global_22437;
	Global_22438 = Global_22439;
	Global_22440 = { Global_22456 };
	Global_22429 = Global_22430;
	Global_23441 = 0;
	Global_22474 = 0;
	Global_22475 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
	return;
}

BOOL func_13() // Position - 0x9C6 (2502)
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

BOOL func_14() // Position - 0x9ED (2541)
{
	int num;
	int weaponHash;

	if (Global_79539)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xA86 (2694)
{
	if (func_16(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
				Global_21066 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
				Global_21066 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
				Global_21066 = CHAR_TREVOR;
			else
				Global_21066 = CHAR_MICHAEL;
	}
	else
	{
		Global_21066 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21066 == _CHAR_NULL)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_79539)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_21066 > CHAR_MULTIPLAYER)
			Global_21066 = CHAR_MULTIPLAYER;
	}

	return;
}

BOOL func_16(int iParam0) // Position - 0xB28 (2856)
{
	return Global_44181 == iParam0;
}

void func_17() // Position - 0xB36 (2870)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21714[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21714[i /*10*/].f_1), "", 24);
		Global_21714[i /*10*/].f_7 = 0;
		Global_21714[i /*10*/].f_8 = 0;
	}

	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_18(int iParam0, int iParam1) // Position - 0xB8D (2957)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673655.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673655.f_1048, iParam0);
}

void func_19() // Position - 0xBC5 (3013)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9 || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}

	return;
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xC1C (3100)
{
	Global_21879 = { *uParam0 };
	Global_8235 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22495, sParam2, 24);
	Global_23414 = iParam5;

	if (iParam3 == 0)
	{
		Global_23412 = 1;
		Global_23410 = 0;
	}
	else
	{
		Global_23412 = 0;
		Global_23410 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23413 = 1;
		Global_23411 = 0;
	}
	else
	{
		Global_23413 = 0;
		Global_23411 = 1;
	}

	return;
}

BOOL func_21() // Position - 0xC72 (3186)
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xC94 (3220)
{
	func_23();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_23() // Position - 0xCAD (3245)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_24(character) && !func_16(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_24(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_24(eCharacter echParam0) // Position - 0xDAA (3498)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xDB6 (3510)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xDF3 (3571)
{
	if (func_24(character))
		return func_27(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_27(eCharacter echParam0) // Position - 0xE18 (3608)
{
	return Global_2201[echParam0 /*29*/];
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xE27 (3623)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

BOOL func_29(BOOL bParam0) // Position - 0xEC2 (3778)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

void func_30() // Position - 0xEEA (3818)
{
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_45);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_46);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_lester2"));
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("re_lured");
	STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWEL@HACKING");
	ENTITY::REMOVE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_lester2"), false);
	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_48);
	func_31();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_31() // Position - 0xF54 (3924)
{
	func_32();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_217);
	return;
}

void func_32() // Position - 0xF66 (3942)
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");

	return;
}


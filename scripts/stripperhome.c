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
	eViewMode evmLocal_43 = THIRD_PERSON_NEAR;
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
	BOOL bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	BOOL bLocal_67 = 0;
	var uLocal_68 = 0;
	BOOL bLocal_69 = 0;
	Hash hLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 1;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 16;
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
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 1097859072;
	var uLocal_268 = 1500;
	var uLocal_269 = 45;
	var uLocal_270 = 1103626240;
	var uLocal_271 = 5;
	var uLocal_272 = 1;
	var uLocal_273 = 0;
	char* sLocal_274 = 0;
	char* sLocal_275 = 0;
	var uLocal_276 = 1;
	var uLocal_277 = 0;
	Blip blLocal_278 = 0;
	Blip blLocal_279 = 0;
	var uLocal_280 = 1;
	var uLocal_281 = 0;
	var uLocal_282 = 4;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 21;
	var uLocal_295 = 6;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	float fLocal_324 = 0f;
	float fLocal_325 = 0f;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	BOOL bLocal_334 = 0;
	BOOL bLocal_335 = 0;
	BOOL bLocal_336 = 0;
	int iLocal_337 = 0;
	Vehicle veLocal_338 = 0;
	var uScriptParam_0 = 1;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	BOOL flag;
	BOOL flag2;
	int clockHours;

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
	uLocal_61 = { 500f, 500f, 500f };
	fLocal_327 = -1f;
	iLocal_330 = -1;
	bLocal_334 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(true);
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
		func_306();

	bLocal_335 = uScriptParam_0.f_5;

	if (bLocal_335)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		func_301(0, -1, false);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}

	uLocal_74[0] = uScriptParam_0[0];
	Global_113186.f_1 = uLocal_74[0];
	flag = false;
	flag2 = true;
	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (func_300() && uScriptParam_0.f_4)
	{
		flag2 = false;
	
		if (clockHours > 14 && clockHours < 22)
			flag = true;
	}

	while (!func_271(&uScriptParam_0, flag) && iLocal_72 != 6 && iLocal_72 != 5 && iLocal_72 != -1 || !func_270(iLocal_331, 1024))
	{
		func_262(false);
		SYSTEM::WAIT(0);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_261(0, false));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_261(1, false));

	if (!flag2)
		iLocal_72 = 2;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (iLocal_333 > 0)
		{
			func_259();
			iLocal_333 = iLocal_333 - SYSTEM::ROUND(MISC::GET_FRAME_TIME() * 1000f);
		}
	
		switch (iLocal_72)
		{
			case -1:
				func_258();
				break;
		
			case 0:
				func_217(true);
				break;
		
			case 1:
				func_110();
				break;
		
			case 2:
				func_217(false);
				break;
		
			case 3:
				func_92();
				break;
		
			case 4:
				func_39(bLocal_334);
				break;
		
			case 5:
				func_11();
				break;
		
			case 6:
				if (!func_10(&uLocal_259))
					func_7(&uLocal_259);
				else if (func_1(&uLocal_259, 7.5f))
					func_306();
				break;
		}
	}

	return;
}

BOOL func_1(int* piParam0, float fParam1) // Position - 0x24B (587)
{
	if (func_3(piParam0, fParam1))
	{
		func_2(piParam0);
		return true;
	}

	return false;
}

void func_2(int* piParam0) // Position - 0x269 (617)
{
	piParam0->f_1 = 0f;
	piParam0->f_2 = 0f;
	*piParam0 = 0;
	return;
}

BOOL func_3(int* piParam0, float fParam1) // Position - 0x27F (639)
{
	if (func_10(piParam0))
		if (func_4(piParam0) > fParam1)
			return true;

	return false;
}

float func_4(int* piParam0) // Position - 0x2A1 (673)
{
	if (func_10(piParam0))
		if (func_6(piParam0))
			return piParam0->f_2;
		else
			return func_5(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_5(BOOL bParam0) // Position - 0x2DD (733)
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_6(int* piParam0) // Position - 0x335 (821)
{
	return IS_BIT_SET(*piParam0, 2);
}

void func_7(int* piParam0) // Position - 0x342 (834)
{
	if (!func_10(piParam0))
		func_8(piParam0);

	return;
}

void func_8(int* piParam0) // Position - 0x35A (858)
{
	func_9(piParam0, 0f);
	return;
}

void func_9(int* piParam0, float fParam1) // Position - 0x369 (873)
{
	piParam0->f_1 = func_5(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_10(int* piParam0) // Position - 0x394 (916)
{
	return IS_BIT_SET(*piParam0, 1);
}

void func_11() // Position - 0x3A1 (929)
{
	if (!func_270(iLocal_331, 8192))
		if (func_38())
			func_27();
		else
			iLocal_72 = 6;

	if (func_270(iLocal_331, 16384))
		if (func_12())
			iLocal_72 = 6;

	return;
}

BOOL func_12() // Position - 0x3DF (991)
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false))
		return true;

	if (func_270(iLocal_331, 8192))
	{
		PED::SET_PED_RESET_FLAG(uLocal_272[0], 60, true);
	
		if (ENTITY::IS_ENTITY_AT_COORD(uLocal_272[0], 96.8033f, -1287.5966f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_26(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.5966f, 28.2688f, true) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, true, 0f, false);
		
			if (CAM::DOES_CAM_EXIST(uLocal_282[0]))
			{
				if (CAM::IS_CAM_RENDERING(uLocal_282[0]))
				{
					func_13(true, true, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(uLocal_282[0], true);
				}
			}
		
			PED::DELETE_PED(&uLocal_272[0]);
			return true;
		}
	}

	return false;
}

void func_13(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4DB (1243)
{
	if (bParam0)
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);

	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	func_15(false, true, bParam2, false, false, false, false);

	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}

	func_14(23, false);
	return;
}

void func_14(int iParam0, BOOL bParam1) // Position - 0x519 (1305)
{
	if (bParam1)
		MISC::SET_BIT(&Global_33354, iParam0);
	else
		MISC::CLEAR_BIT(&Global_33354, iParam0);

	return;
}

void func_15(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x53B (1339)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_25(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21083.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_24())
				Global_21083.f_1 = 3;
		
			Global_22442 = 5;
		}
	
		func_23(true, bParam3, bParam2, false);
		Global_64332 = 1;
		Global_76661 = 1;
		Global_79562 = 1;
	}
	else
	{
		func_25(0);
		HUD::THEFEED_RESUME();
		Global_64332 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_23(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_21(PLAYER::PLAYER_ID()) && !func_17(PLAYER::PLAYER_ID(), 0) && !func_16() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_21(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_79562 = 0;
	}

	return;
}

BOOL func_16() // Position - 0x68A (1674)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_36.f_18, 14);
}

BOOL func_17(Player plParam0, int iParam1) // Position - 0x6A4 (1700)
{
	BOOL flag;

	if (!func_20(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_18(-1, false) == 8;
	else
		flag = Global_1845270[plParam0 /*892*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_18(int iParam0, BOOL bParam1) // Position - 0x6FD (1789)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_19();

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

int func_19() // Position - 0x73E (1854)
{
	return Global_1574926;
}

BOOL func_20(Player plParam0) // Position - 0x74A (1866)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_21(Player plParam0) // Position - 0x76C (1900)
{
	if (func_17(plParam0, 0))
		return true;

	if (func_22())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_22() // Position - 0x7AB (1963)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_23(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7B9 (1977)
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_24() // Position - 0x7EC (2028)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

void func_25(int iParam0) // Position - 0x813 (2067)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 13);
	else
		MISC::CLEAR_BIT(&Global_8919, 13);

	return;
}

float func_26(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x836 (2102)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, fParam1, bParam4);
}

void func_27() // Position - 0x870 (2160)
{
	int taskSequenceId;

	func_30();

	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, false, 0f, false);

	func_28(&iLocal_331, 16384);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_272[0], false);
	PED::SET_PED_CONFIG_FLAG(uLocal_272[0], 104, true);
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.2522f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.7424f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_272[0], taskSequenceId);
	TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	func_28(&iLocal_331, 8192);
	return;
}

void func_28(var uParam0, int iParam1) // Position - 0x95D (2397)
{
	func_29(uParam0, iParam1);
	return;
}

void func_29(var uParam0, int iParam1) // Position - 0x96D (2413)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_30() // Position - 0x97E (2430)
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_272[0]) && func_37(true, false, true))
	{
		func_31(0, false, false);
		uLocal_282[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.5734f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, true, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}

	return;
}

void func_31(eSetPlayerControlFlags espcfParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9E4 (2532)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam0);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);

	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	func_32(0);
	func_15(true, true, bParam2, false, false, false, false);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_14(23, true);
	return;
}

void func_32(int iParam0) // Position - 0xA3D (2621)
{
	if (func_36())
		return;

	if (Global_21301)
		if (func_35())
			func_33(true, true);
		else
			func_33(false, false);

	if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22442 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_24())
		Global_21083.f_1 = 3;

	return;
}

void func_33(BOOL bParam0, BOOL bParam1) // Position - 0xAC7 (2759)
{
	if (bParam0)
	{
		if (func_34(0))
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

BOOL func_34(int iParam0) // Position - 0xB3B (2875)
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

BOOL func_35() // Position - 0xB92 (2962)
{
	return IS_BIT_SET(Global_1958240, 5);
}

BOOL func_36() // Position - 0xBA0 (2976)
{
	return IS_BIT_SET(Global_1958240, 19);
}

BOOL func_37(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBAF (2991)
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_38() // Position - 0xC94 (3220)
{
	if (uLocal_74[0] == 8 || uLocal_74[0] == 9 || func_26(uLocal_272[0], 96.12f, -1284.91f, 29.43f, true) > 10f)
		return false;

	return true;
}

void func_39(BOOL bParam0) // Position - 0xCE0 (3296)
{
	Vector3 vector;
	var unk3;
	Vehicle vehiclePedIsIn;

	func_67();

	if (bParam0)
		vector = { uLocal_306 };
	else
		func_66(&vector, &unk3, false);

	func_63(vector);

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_272[0], false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			{
				if (bLocal_336)
				{
					if (func_60(vehiclePedIsIn, 4f, 1, 1056964608, false, true, false))
					{
						func_59();
						TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_272[0], 0, 16777216);
						func_40();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vector, 4f, 4f, 2f, true, true, 2))
				{
					bLocal_336 = true;
				}
			}
		}
	}

	return;
}

void func_40() // Position - 0xD96 (3478)
{
	func_58();
	func_51(295, 0, 0);
	func_41(false);
	func_306();
	return;
}

void func_41(BOOL bParam0) // Position - 0xDB4 (3508)
{
	var unk;
	var unk26;

	if (!func_48())
		return;

	if (!bLocal_67)
		return;

	unk = 3;
	unk26 = 3;
	TEXT_LABEL_ASSIGN_STRING(&unk[0 /*8*/], "GameType", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk[1 /*8*/], "Location", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk[2 /*8*/], "Type", 32);

	if (bParam0)
		TEXT_LABEL_ASSIGN_STRING(&unk26[0 /*6*/], "MP", 24);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk26[0 /*6*/], "SP", 24);

	TEXT_LABEL_ASSIGN_STRING(&unk26[1 /*6*/], "City", 24);
	TEXT_LABEL_ASSIGN_STRING(&unk26[2 /*6*/], "????", 24);

	if (func_46(200, &unk26, &unk, 3, -1, false, false))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_45(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(108, func_44(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(102, func_43(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(8, func_42(), 0f);
	}

	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	bLocal_67 = false;
	return;
}

int func_42() // Position - 0xE71 (3697)
{
	return iLocal_65;
}

int func_43() // Position - 0xE7B (3707)
{
	return iLocal_66;
}

int func_44() // Position - 0xE85 (3717)
{
	return iLocal_64;
}

int func_45() // Position - 0xE8F (3727)
{
	return 0;
}

BOOL func_46(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE98 (3736)
{
	int num;
	int i;
	var gamerHandle;
	var clanDesc;

	!NETWORK::NETWORK_IS_SIGNED_ONLINE();

	if (!NETWORK::NETWORK_PLAYER_IS_CHEATER() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		num.f_2.f_1 = 4;
		num = iParam0;
	
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 35, &gamerHandle))
						num.f_1 = clanDesc;
			}
		}
		else
		{
			num.f_1 = iParam4;
		}
	
		num.f_2 = iParam3;
	
		for (i = 0; i < iParam3; i = i + 1)
		{
			num.f_2.f_1[i /*16*/] = { uParam2->[i /*8*/] };
			TEXT_LABEL_COPY(&(num.f_2.f_1[i /*16*/].f_8), { uParam1->[i /*6*/] }, 8);
		}
	
		if (bParam5)
			Global_2097157.f_5 = { num };
	
		if (!bParam6)
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693687.f_3)
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&num, &(Global_1929468.f_10));
			else
				STATS::LEADERBOARDS2_WRITE_DATA(&num);
	
		return true;
	}

	NETWORK::NETWORK_PLAYER_IS_CHEATER();
	!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
	NETWORK::NETWORK_HAS_AGE_RESTRICTIONS();
	!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV();
	return false;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0xFCC (4044)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_48() // Position - 0xFE3 (4067)
{
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && func_49())
		return true;

	return false;
}

BOOL func_49() // Position - 0x1009 (4105)
{
	if (func_50())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_50() // Position - 0x1029 (4137)
{
	return Global_2696947;
}

void func_51(int iParam0, int iParam1, int iParam2) // Position - 0x1035 (4149)
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_114162.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114162.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114162.f_10198[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114162.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114162.f_10198[iParam0 /*12*/].f_10 = iParam1;
		Global_114162.f_10198[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_52();

	return;
}

void func_52() // Position - 0x111B (4379)
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113898 = 0;
	Global_113899 = 0;
	Global_113900 = 0;
	Global_113901 = 0;
	Global_113902 = 0;
	Global_113903 = 0;
	Global_113904 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114162.f_10198.f_3853;
	Global_114162.f_10198.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114162.f_10198[num /*12*/].f_5 == 1)
		{
			switch (Global_114162.f_10198[num /*12*/].f_6)
			{
				case 1:
					Global_113898 = Global_113898 + 1;
					num2 = num2 + Global_114162.f_10198[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113899 = Global_113899 + 1;
					num3 = num3 + Global_114162.f_10198[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113900 = Global_113900 + 1;
					num4 = num4 + Global_114162.f_10198[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113901 = Global_113901 + 1;
					num5 = num5 + Global_114162.f_10198[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113902 = Global_113902 + 1;
					num6 = num6 + (Global_114162.f_10198[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113903 = Global_113903 + 1;
					num7 = num7 + Global_114162.f_10198[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113904 = Global_113904 + 1;
					num8 = num8 + Global_114162.f_10198[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113881 > 0)
		if (Global_113898 == Global_113881)
			num2 = 55f;

	if (Global_113882 > 0)
		if (Global_113899 == Global_113882)
			num3 = 10f;

	if (Global_113883 > 0)
		if (Global_113900 == Global_113883)
			num4 = 0f;

	if (Global_113884 > 0)
		if (Global_113901 == Global_113884)
			num5 = 10f;

	if (Global_113885 > 0)
	{
		if (Global_113902 == Global_113885 || (Global_113885 * 10) / Global_113902 < 41 || Global_113902 > Global_113888 || Global_113902 == Global_113888)
		{
			if (!IS_BIT_SET(Global_114162.f_10198.f_3856, 14))
			{
				if (Global_113902 == Global_113885)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113885, 0);
					MISC::SET_BIT(&(Global_114162.f_10198.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113886 > 0)
		if (Global_113903 == Global_113886)
			num7 = 15f;

	if (Global_113887 > 0)
		if (Global_113904 == Global_113887)
			num8 = 5f;

	Global_114162.f_10198.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113902 > Global_113888 || Global_113902 == Global_113888)
		value2 = Global_113888;
	else
		value2 = Global_113902;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113898, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113881, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113899, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113882, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113900, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113883, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113901, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113884, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113888, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113904 + Global_113903, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113887 + Global_113886, true);
	Global_113905 = (Global_113898 * 100) / Global_113881;
	Global_113907 = ((Global_113900 + Global_113899) * 100) / (Global_113883 + Global_113882);
	Global_113906 = ((Global_113901 + value2) * 100) / (Global_113884 + Global_113888);
	Global_113908 = ((Global_113903 + Global_113904) * 100) / (Global_113886 + Global_113887);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114162.f_10198.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113905, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113906, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113907, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_114162.f_10198.f_3853))
		func_56(13, SYSTEM::FLOOR(Global_114162.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79564)
		{
			if (func_55() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113896 = 0;
			
				if (!Global_64326)
					func_53();
			}
		}
	}

	return;
}

int func_53() // Position - 0x15D9 (5593)
{
	if (func_54(false))
		return 0;

	if (Global_101752.f_8)
		if (Global_101752.f_10 > 0)
			return 0;
	else if (Global_101752.f_10 > 1)
		return 0;

	Global_101752.f_10 = Global_101752.f_10 + 1;
	return 1;
}

BOOL func_54(BOOL bParam0) // Position - 0x1624 (5668)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

int func_55() // Position - 0x164C (5708)
{
	return Global_33105;
}

BOOL func_56(int iParam0, int iParam1) // Position - 0x1657 (5719)
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x16A8 (5800)
{
	if (iParam2 == -1)
		iParam2 = func_19();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_58() // Position - 0x16C6 (5830)
{
	iLocal_66 = iLocal_66 + 1;
	bLocal_67 = true;
	return;
}

void func_59() // Position - 0x16D7 (5847)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_272[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false))
	{
		AUDIO::STOP_PED_SPEAKING(uLocal_272[0], true);
	
		if (PED::IS_PED_IN_GROUP(uLocal_272[0]))
			PED::REMOVE_PED_FROM_GROUP(uLocal_272[0]);
	}

	return;
}

BOOL func_60(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x171F (5919)
{
	func_62(bParam5, bParam6);
	func_61(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_32 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_32 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_61(Vehicle veParam0) // Position - 0x1776 (6006)
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_62(BOOL bParam0, BOOL bParam1) // Position - 0x17A2 (6050)
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam0)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	return;
}

void func_63(var uParam0, var uParam1, var uParam2) // Position - 0x18F3 (6387)
{
	Vehicle vehiclePedIsIn;

	if (HUD::DOES_BLIP_EXIST(blLocal_279))
		HUD::REMOVE_BLIP(&blLocal_279);

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_272[0], false))
			if (PED::IS_PED_IN_VEHICLE(uLocal_272[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				if (!HUD::DOES_BLIP_EXIST(blLocal_278))
					blLocal_278 = func_64(uParam0, true);

	return;
}

Blip func_64(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1979 (6521)
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_65(BOOL bParam0, var uParam1, var uParam2) // Position - 0x19A5 (6565)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_66(var uParam0, var uParam1, BOOL bParam2) // Position - 0x19BC (6588)
{
	uLocal_315 = { uLocal_315 };

	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { uLocal_312 };
				*uParam1 = fLocal_324;
			}
		
			uLocal_315 = { *uParam0 };
			break;
	
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.9908f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { uLocal_312 };
				*uParam1 = fLocal_324;
			}
		
			uLocal_315 = { *uParam0 };
			break;
	
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.4315f, 3776.8496f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { uLocal_312 };
				*uParam1 = fLocal_324;
			}
		
			uLocal_315 = { *uParam0 };
			break;
	}

	return;
}

void func_67() // Position - 0x1AD1 (6865)
{
	if (PED::IS_PED_INJURED(uLocal_272[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_272[0]))
		{
		}
		else
		{
			ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false);
		}
	
		func_68(0);
	}

	return;
}

void func_68(int iParam0) // Position - 0x1B0A (6922)
{
	if (uLocal_74[0] > -1 && uLocal_74[0] < 10 && iParam0 != 2)
		func_90(uLocal_74[0], func_91(uLocal_74[0]) / 2);

	func_88();

	switch (iParam0)
	{
		case 0:
			func_86("SCLUB_HOME_D" /*~r~~a~ died.*/, uLocal_74[0]);
			func_90(uLocal_74[0], 0);
			func_74(uLocal_74[0], true);
			iLocal_72 = 6;
			break;
	
		case 1:
			HUD::CLEAR_PRINTS();
			func_69("SCLUB_HOME_A" /*~a~ was abandoned.*/, uLocal_74[0], false);
			iLocal_72 = 5;
			break;
	
		case 2:
			iLocal_72 = 5;
			break;
	
		case 4:
			func_86("SCLUB_HOME_D3" /*~r~~a~ was scared.*/, uLocal_74[0]);
			iLocal_72 = 6;
			break;
	
		case 3:
			if (func_26(uLocal_272[0], 92.5861f, -1282.8604f, 28.2548f, true) < 10f)
				iLocal_72 = 5;
			else
				iLocal_72 = 6;
			break;
	}

	return;
}

void func_69(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1BF3 (7155)
{
	var unk;

	TEXT_LABEL_COPY(&unk, { func_73(iParam1) }, 6);

	if (!func_72(sParam0, &unk))
		if (!bParam2)
			func_71(sParam0, &unk, -1);
		else
			func_70(sParam0, &unk);

	return;
}

void func_70(char* sParam0, const char* sParam1) // Position - 0x1C2C (7212)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

void func_71(char* sParam0, const char* sParam1, int iParam2) // Position - 0x1C48 (7240)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
	return;
}

BOOL func_72(char* sParam0, const char* sParam1) // Position - 0x1C65 (7269)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_73(int iParam0) // Position - 0x1C7E (7294)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "SCLUB_NM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 16);
	return unk;
}

void func_74(int iParam0, BOOL bParam1) // Position - 0x1C97 (7319)
{
	if (bParam1)
		func_28(&(Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	else
		func_75(&(Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_3), 2);

	return;
}

void func_75(var uParam0, int iParam1) // Position - 0x1CD9 (7385)
{
	func_76(uParam0, iParam1);
	return;
}

void func_76(var uParam0, int iParam1) // Position - 0x1CE9 (7401)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_77() // Position - 0x1CFE (7422)
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	switch (character)
	{
		case CHAR_MICHAEL:
			return 0;
	
		case CHAR_FRANKLIN:
			return 1;
	
		case CHAR_TREVOR:
			return 2;
	
		default:
			switch (func_78(-1))
			{
				case 0:
					return 3;
			
				case 1:
					return 4;
			
				case 2:
					return 5;
			
				case 3:
					return 6;
			
				case 4:
					return 7;
			
				default:
					break;
			}
			break;
	}

	return 3;
}

int func_78(int iParam0) // Position - 0x1D8C (7564)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_19();
	
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1DC0 (7616)
{
	func_80();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_80() // Position - 0x1DD9 (7641)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_82(character) && !func_81(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_82(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_81(int iParam0) // Position - 0x1ED6 (7894)
{
	return Global_44199 == iParam0;
}

BOOL func_82(eCharacter echParam0) // Position - 0x1EE4 (7908)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1EF0 (7920)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1F2D (7981)
{
	if (func_82(character))
		return func_85(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_85(eCharacter echParam0) // Position - 0x1F52 (8018)
{
	return Global_2201[echParam0 /*29*/];
}

void func_86(char* sParam0, int iParam1) // Position - 0x1F61 (8033)
{
	var unk;

	TEXT_LABEL_COPY(&unk, { func_73(iParam1) }, 6);
	func_87(sParam0, &unk, 7500, 1);
	return;
}

void func_87(char* sParam0, const char* sParam1, int iParam2, int iParam3) // Position - 0x1F80 (8064)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
	return;
}

void func_88() // Position - 0x1F9F (8095)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_279))
		HUD::REMOVE_BLIP(&blLocal_279);

	if (HUD::DOES_BLIP_EXIST(blLocal_278))
		HUD::REMOVE_BLIP(&blLocal_278);

	func_89();
	return;
}

void func_89() // Position - 0x1FCD (8141)
{
	int i;

	for (i = 0; i < 1; i = i + 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_280[i]))
			HUD::REMOVE_BLIP(&uLocal_280[i]);
	}

	return;
}

void func_90(int iParam0, int iParam1) // Position - 0x2000 (8192)
{
	Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/] = iParam1;
	return;
}

int func_91(int iParam0) // Position - 0x201C (8220)
{
	return Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/];
}

void func_92() // Position - 0x2036 (8246)
{
	func_67();
	func_88();

	switch (iLocal_78)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_272[0], false))
				{
					if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SCLUB_SECLUDED"))
						func_108("SCLUB_SECLUDED");
				
					if (func_107() && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						HUD::CLEAR_HELP(true);
						STREAMING::REQUEST_ANIM_DICT(func_102(uLocal_272[0], false, false));
						iLocal_78 = 1;
					}
				}
			}
			break;
	
		case 1:
			if (func_95())
				iLocal_78 = 2;
			break;
	
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
			{
				func_259();
			
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
					bLocal_334 = false;
			
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_43);
				func_93(bLocal_334);
				iLocal_72 = 4;
			}
			break;
	}

	return;
}

void func_93(BOOL bParam0) // Position - 0x210B (8459)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
				func_86("SCLUB_HOME_GO" /*Take ~a~ ~y~home.~s~*/, uLocal_74[0]);
			else
				_SHOW_SUBTITLE_CLEAR_EXISTING("SCLUB_CLUB_GO", 7500, 1);
			break;
	
		case 8:
		case 9:
			_SHOW_SUBTITLE_CLEAR_EXISTING("SCLUB_HOME_GO3" /*Take her ~y~home.*/, 7500, 1);
			break;
	}

	return;
}

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0x2189 (8585)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL func_95() // Position - 0x21A2 (8610)
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_102(uLocal_272[0], false, false)))
	{
		func_96(uLocal_272[0], false, true, -1, true);
		func_96(PLAYER::PLAYER_PED_ID(), false, false, -1, true);
		return true;
	}

	return false;
}

void func_96(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x21DC (8668)
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	char* animDict;
	int taskSequenceId;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return;

	evmLocal_43 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_101(false, true))
		if (evmLocal_43 != FIRST_PERSON)
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);

	flag = func_100(vehiclePedIsIn);
	animDict = func_102(pedParam0, false, false);

	if (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
	{
		STREAMING::REQUEST_ANIM_DICT(animDict);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_PLAY_ANIM(0, animDict, func_97(0, bParam2, bParam1, flag), 8f, -8f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_97(1, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_97(2, bParam2, bParam1, flag), 8f, -4f, iParam3, 1, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_97(3, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_97(4, bParam2, bParam1, flag), 4f, -2f, -1, 0, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
	
		if (bParam4)
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

char* func_97(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2321 (8993)
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_99(18);
					else
						str = func_99(23);
				else if (bParam1)
					str = func_99(8);
				else
					str = func_99(13);
			else if (bParam2)
				if (bParam1)
					str = func_98(18);
				else
					str = func_98(23);
			else if (bParam1)
				str = func_98(8);
			else
				str = func_98(13);
			break;
	
		case 1:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_99(19);
					else
						str = func_99(24);
				else if (bParam1)
					str = func_99(9);
				else
					str = func_99(14);
			else if (bParam2)
				if (bParam1)
					str = func_98(19);
				else
					str = func_98(24);
			else if (bParam1)
				str = func_98(9);
			else
				str = func_98(14);
			break;
	
		case 2:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_99(20);
					else
						str = func_99(25);
				else if (bParam1)
					str = func_99(10);
				else
					str = func_99(15);
			else if (bParam2)
				if (bParam1)
					str = func_98(20);
				else
					str = func_98(25);
			else if (bParam1)
				str = func_98(10);
			else
				str = func_98(15);
			break;
	
		case 3:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_99(21);
					else
						str = func_99(26);
				else if (bParam1)
					str = func_99(11);
				else
					str = func_99(16);
			else if (bParam2)
				if (bParam1)
					str = func_98(21);
				else
					str = func_98(26);
			else if (bParam1)
				str = func_98(11);
			else
				str = func_98(16);
			break;
	
		case 4:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_99(22);
					else
						str = func_99(27);
				else if (bParam1)
					str = func_99(12);
				else
					str = func_99(17);
			else if (bParam2)
				if (bParam1)
					str = func_98(22);
				else
					str = func_98(27);
			else if (bParam1)
				str = func_98(12);
			else
				str = func_98(17);
			break;
	
		case 5:
			if (bParam3)
				if (bParam1)
					str = func_99(3);
				else
					str = func_99(2);
			else if (bParam1)
				str = func_98(3);
			else
				str = func_98(2);
			break;
	
		case 6:
			break;
	}

	return str;
}

char* func_98(int iParam0) // Position - 0x2602 (9730)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "into_proposition_male";
			break;
	
		case 1:
			str = "into_proposition_prostitute";
			break;
	
		case 2:
			str = "proposition_loop_male";
			break;
	
		case 3:
			str = "proposition_loop_prostitute";
			break;
	
		case 4:
			str = "proposition_to_exit_male";
			break;
	
		case 5:
			str = "prop_to_sit_alt_prostitute";
			break;
	
		case 6:
			str = "prop_to_sit_male";
			break;
	
		case 7:
			str = "prop_to_sit_prostitute";
			break;
	
		case 8:
			str = "proposition_to_sex_p1_prostitute";
			break;
	
		case 9:
			str = "proposition_to_sex_p2_prostitute";
			break;
	
		case 10:
			str = "sex_loop_prostitute";
			break;
	
		case 11:
			str = "sex_to_proposition_p1_prostitute";
			break;
	
		case 12:
			str = "sex_to_proposition_p2_prostitute";
			break;
	
		case 13:
			str = "proposition_to_sex_p1_male";
			break;
	
		case 14:
			str = "proposition_to_sex_p2_male";
			break;
	
		case 15:
			str = "sex_loop_male";
			break;
	
		case 16:
			str = "sex_to_proposition_p1_male";
			break;
	
		case 17:
			str = "sex_to_proposition_p2_male";
			break;
	
		case 18:
			str = "proposition_to_BJ_p1_prostitute";
			break;
	
		case 19:
			str = "proposition_to_BJ_p2_prostitute";
			break;
	
		case 20:
			str = "BJ_loop_prostitute";
			break;
	
		case 21:
			str = "BJ_to_proposition_p1_prostitute";
			break;
	
		case 22:
			str = "BJ_to_proposition_p2_prostitute";
			break;
	
		case 23:
			str = "proposition_to_BJ_p1_male";
			break;
	
		case 24:
			str = "proposition_to_BJ_p2_male";
			break;
	
		case 25:
			str = "BJ_loop_male";
			break;
	
		case 26:
			str = "BJ_to_proposition_p1_male";
			break;
	
		case 27:
			str = "BJ_to_proposition_p2_male";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_99(int iParam0) // Position - 0x27BE (10174)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "low_car_sit_to_prop_player";
			break;
	
		case 1:
			str = "low_car_sit_to_prop_female";
			break;
	
		case 2:
			str = "low_car_prop_loop_player";
			break;
	
		case 3:
			str = "low_car_prop_loop_female";
			break;
	
		case 4:
			str = "low_car_prop_to_leave_player";
			break;
	
		case 5:
			str = "low_car_prop_to_sit_alt_female";
			break;
	
		case 6:
			str = "low_car_prop_to_sit_player";
			break;
	
		case 7:
			str = "low_car_prop_to_sit_female";
			break;
	
		case 8:
			str = "low_car_prop_to_sex_p1_female";
			break;
	
		case 9:
			str = "low_car_prop_to_sex_p2_female";
			break;
	
		case 10:
			str = "low_car_sex_loop_female";
			break;
	
		case 11:
			str = "low_car_sex_to_prop_p1_female";
			break;
	
		case 12:
			str = "low_car_sex_to_prop_p2_female";
			break;
	
		case 13:
			str = "low_car_prop_to_sex_p1_player";
			break;
	
		case 14:
			str = "low_car_prop_to_sex_p2_player";
			break;
	
		case 15:
			str = "low_car_sex_loop_player";
			break;
	
		case 16:
			str = "low_car_sex_to_prop_p1_player";
			break;
	
		case 17:
			str = "low_car_sex_to_prop_p2_player";
			break;
	
		case 18:
			str = "low_car_prop_to_bj_p1_female";
			break;
	
		case 19:
			str = "low_car_prop_to_bj_p2_female";
			break;
	
		case 20:
			str = "low_car_bj_loop_female";
			break;
	
		case 21:
			str = "low_car_bj_to_prop_p1_female";
			break;
	
		case 22:
			str = "low_car_bj_to_prop_p2_female";
			break;
	
		case 23:
			str = "low_car_prop_to_bj_p1_player";
			break;
	
		case 24:
			str = "low_car_prop_to_bj_p2_player";
			break;
	
		case 25:
			str = "low_car_bj_loop_player";
			break;
	
		case 26:
			str = "low_car_bj_to_prop_p1_player";
			break;
	
		case 27:
			str = "low_car_bj_to_prop_p2_player";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

BOOL func_100(Vehicle veParam0) // Position - 0x297B (10619)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
				return true;
		}
	}

	return false;
}

BOOL func_101(BOOL bParam0, BOOL bParam1) // Position - 0x2A84 (10884)
{
	BOOL flag;

	flag = false;

	if (bParam0)
		flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_FOOT) == FIRST_PERSON;

	if (bParam1)
		if (!flag)
			flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_VEHICLE) == FIRST_PERSON;

	return flag;
}

char* func_102(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2AB3 (10931)
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_100(vehiclePedIsIn))
				if (!func_101(false, true) || bParam2 && !bParam1)
					return func_106();
				else
					return func_105();
			else if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("vstr"))
				return "anim@mini@prostitutes@sex@veh_vstr@";
	}

	if (!func_101(false, true) || bParam2 && !bParam1)
		return func_104();

	return func_103();
}

char* func_103() // Position - 0x2B4D (11085)
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_104() // Position - 0x2B59 (11097)
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_105() // Position - 0x2B65 (11109)
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_106() // Position - 0x2B71 (11121)
{
	return "mini@prostitutes@sexlow_veh";
}

BOOL func_107() // Position - 0x2B7D (11133)
{
	Ped pedInVehicleSeat;
	Vehicle randomVehicleInSphere;
	Vehicle vehiclePedIsIn;
	Vector3 entityCoords;
	float radius;
	Vector3 vector;
	var unk5;
	Vector3 outPosition;
	float num;
	Interior interiorFromEntity;

	radius = 25f;
	func_66(&vector, &unk5, false);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(entityCoords, &outPosition, 1077936128, 0))
		{
			num = SYSTEM::VDIST(entityCoords, outPosition);
		
			if (num <= 10f)
				return false;
		}
	
		if (SYSTEM::VDIST(entityCoords, uLocal_306) < 20f || SYSTEM::VDIST(entityCoords, vector) < 20f)
			return false;
	
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(entityCoords - { 20f, 20f, 20f }, entityCoords + { 20f, 20f, 20f }))
			return false;
	
		PED::GET_CLOSEST_PED(entityCoords, radius, true, true, &pedInVehicleSeat, false, false, -1);
	
		if (!(pedInVehicleSeat == 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 17))
					return false;
		}
		else
		{
			randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(entityCoords, radius, 0, -1);
		
			if (!(randomVehicleInSphere == 0))
			{
				if (!(randomVehicleInSphere == vehiclePedIsIn))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
					{
						pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(randomVehicleInSphere, -1, false);
					
						if (!(pedInVehicleSeat == 0))
							return false;
					}
				}
			}
		}
	
		interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	
		if (!(interiorFromEntity == 0))
			return false;
	}

	return true;
}

void func_108(char* sParam0) // Position - 0x2CEF (11503)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2D05 (11525)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_110() // Position - 0x2D18 (11544)
{
	Vehicle lastDrivenVehicle;
	int clockHours;
	int num;
	int num2;
	int num3;

	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_215(3000))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			iLocal_73 = 12;
		}
	}

	if (!bLocal_69 && iLocal_73 >= 5)
	{
		lastDrivenVehicle = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(lastDrivenVehicle, false) && !ENTITY::IS_ENTITY_DEAD(lastDrivenVehicle, false))
			if (ENTITY::GET_ENTITY_MODEL(lastDrivenVehicle) == joaat("blimp2"))
				bLocal_69 = false;
			else if (VEHICLE::IS_BIG_VEHICLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && uLocal_74[0] == 5)
				bLocal_69 = func_212(&uLocal_68, -865f, 516.3f, 90f, true, 15f);
			else if (func_211(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
				bLocal_69 = func_212(&uLocal_68, uLocal_321, true, fLocal_325);
			else
				bLocal_69 = func_212(&uLocal_68, uLocal_306, true, fLocal_325);
	}

	if (iLocal_73 > 0 && iLocal_73 < 13)
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();

	switch (iLocal_73)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			func_88();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
			func_31(SPC_REMOVE_FIRES | 16 | 32, true, false);
		
			if (!func_270(iLocal_331, 131072))
				func_28(&iLocal_331, 131072);
		
			if (!func_270(iLocal_331, 256))
			{
				func_210();
				func_28(&iLocal_331, 256);
			}
		
			if (!func_270(iLocal_331, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_209());
				func_28(&iLocal_331, 32768);
			}
		
			if (!func_270(iLocal_331, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_208());
				func_28(&iLocal_331, 256);
			}
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_338 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_207(PLAYER::PLAYER_PED_ID(), veLocal_338);
				iLocal_73 = 1;
			}
			else
			{
				func_59();
				func_205(PLAYER::PLAYER_PED_ID(), uLocal_300);
				func_205(uLocal_272[0], uLocal_303);
				iLocal_73 = 2;
			}
		
			func_203();
			break;
	
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_338, false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_338, true), uLocal_306) < 2f)
				{
					func_59();
					func_205(PLAYER::PLAYER_PED_ID(), uLocal_300);
					func_205(uLocal_272[0], uLocal_303);
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_73 = 2;
				}
				else if (MISC::GET_GAME_TIMER() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
	
		case 2:
			if (!CAM::IS_CAM_RENDERING(uLocal_282[0]))
			{
				CAM::SET_CAM_ACTIVE(uLocal_282[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_338, false))
					if (ENTITY::GET_ENTITY_MODEL(veLocal_338) == joaat("blimp2"))
						ENTITY::SET_ENTITY_VISIBLE(veLocal_338, false, false);
			
				func_8(&uLocal_253);
				iLocal_73 = 3;
			}
			break;
	
		case 3:
			if (func_202(&uLocal_253) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_282[1], uLocal_282[0], 6000, 1, 1);
				func_201(&uLocal_287, true, false, 2000, 1, true, false, true);
				clockHours = CLOCK::GET_CLOCK_HOURS();
				iLocal_328 = clockHours + 8;
			
				if (iLocal_328 > 23)
					iLocal_328 = iLocal_328 - 24;
			
				uLocal_287.f_7 = clockHours;
				uLocal_287.f_8 = iLocal_328;
				func_2(&uLocal_253);
				iLocal_73 = 4;
			}
			break;
	
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_282[1]) && CAM::IS_CAM_RENDERING(uLocal_282[1]))
			{
				if (!func_270(iLocal_329, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(veLocal_338) && !ENTITY::IS_ENTITY_DEAD(veLocal_338, false))
						VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_338, true);
				
					func_198(PLAYER::PLAYER_PED_ID(), func_200());
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_197());
					func_174();
					func_28(&iLocal_329, 512);
				}
				else if (!func_270(iLocal_329, 2048))
				{
					ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false);
				
					if (!func_173() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_272[0]))
					{
						func_174();
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
					
						func_28(&iLocal_329, 2048);
						func_8(&uLocal_253);
						sLocal_275 = func_172();
						iLocal_73 = 5;
					}
				}
			}
			break;
	
		case 5:
			if (func_202(&uLocal_253) > 1f)
			{
				if (func_147(iLocal_328, 0, sLocal_275, "", &uLocal_287, func_202(&uLocal_253) * 0.2f, 0))
				{
					if (!func_173())
					{
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_338))
							if (ENTITY::GET_ENTITY_MODEL(veLocal_338) != joaat("blimp2"))
								MISC::CLEAR_AREA(uLocal_303, 20f, true, false, false, false);
						else
							MISC::CLEAR_AREA(uLocal_303, 20f, true, false, false, false);
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_272[0]))
							ENTITY::SET_ENTITY_VISIBLE(uLocal_272[0], false, false);
					
						TASK::SET_PED_PATH_AVOID_FIRE(PLAYER::PLAYER_PED_ID(), false);
						func_8(&uLocal_253);
						iLocal_73 = 6;
					}
				}
			}
			break;
	
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		
			if (func_202(&uLocal_253) > 1.5f)
			{
				if (bLocal_69)
					func_145(&uLocal_68);
			
				func_8(&uLocal_253);
				iLocal_73 = 7;
			}
			break;
	
		case 7:
			if (!CAM::IS_CAM_RENDERING(uLocal_282[2]))
			{
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_282[2], uLocal_282[1], 6000, 1, 1);
				func_8(&uLocal_253);
				iLocal_73 = 8;
			}
			break;
	
		case 8:
			if (!func_270(iLocal_331, 262144))
				if (func_202(&uLocal_253) >= 1.25f)
					func_144();
		
			if (func_202(&uLocal_253) > 6f)
			{
				CAM::SET_CAM_ACTIVE(uLocal_282[3], true);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_338, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(veLocal_338) == joaat("blimp2"))
						ENTITY::SET_ENTITY_VISIBLE(veLocal_338, true, false);
				
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_338, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_338);
				}
			
				func_8(&uLocal_253);
				iLocal_73 = 10;
			}
			break;
	
		case 10:
			if (func_202(&uLocal_253) > 2f)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
				iLocal_73 = 13;
			}
			break;
	
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_270(iLocal_331, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), uLocal_312, fLocal_324, false, true, true);
					func_144();
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_338, false))
					if (ENTITY::GET_ENTITY_MODEL(veLocal_338) == joaat("blimp2"))
						ENTITY::SET_ENTITY_VISIBLE(veLocal_338, true, false);
			
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_338, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_338, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_338);
				}
			
				func_8(&uLocal_253);
				iLocal_73 = 13;
			}
			break;
	
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && func_202(&uLocal_253) >= 1f)
			{
				func_13(true, true, false);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0, 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, true, 0);
			
				if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), _GET_CHARACTER_MODEL(CHAR_MICHAEL)))
					func_143();
			
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uLocal_306 - { 3f, 3f, 3f }, uLocal_306 + { 3f, 3f, 3f }, 15f, 1);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_338, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_338, true, true);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_338) != joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_COORDS(veLocal_338, uLocal_306, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(veLocal_338, fLocal_325);
					
						if (VEHICLE::IS_BIG_VEHICLE(veLocal_338) && uLocal_74[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(veLocal_338, -865f, 516.3f, 90f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(veLocal_338, 15f);
						}
						else if (func_211(veLocal_338))
						{
							ENTITY::SET_ENTITY_COORDS(veLocal_338, uLocal_321, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(veLocal_338, fLocal_326);
						}
					
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_338, 1084227584);
					}
				}
			
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_201(&uLocal_287, false, false, 2000, 1, false, false, true);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					func_141(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					func_201(&uLocal_287, false, false, 2000, 1, true, false, true);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_272[0]))
					PED::DELETE_PED(&uLocal_272[0]);
			
				if (!func_140(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
						func_69("SCLUB_PHON_HELP_ALT" /*~a~' number has been added to your phone.*/, uLocal_74[0], false);
					else
						func_69("SCLUB_PHON_HELP" /*~a~'s number has been added to your phone.*/, uLocal_74[0], false);
				
					func_121(uLocal_74[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
			
				func_119(uLocal_74[0]);
				num = func_118(uLocal_74[0]);
			
				if (num <= 2)
				{
					num2 = func_117(uLocal_74[0]);
					num3 = func_116(num);
					func_111(-384575792, num2, num3, 3, func_115(), func_114(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
			
				func_40();
			}
			break;
	}

	return;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, eCharacter echParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) // Position - 0x35D8 (13784)
{
	int num;

	if (func_54(false))
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam7 < 0)
		return 0;

	if (iParam8 == 76)
		return 0;

	if (iParam9 == 235)
		return 0;

	if (echParam5 < CHAR_MULTIPLAYER)
		if (IS_BIT_SET(iParam4, echParam5))
			return 0;

	if (iParam4 < 1 || iParam4 > 7)
		return 0;

	if (iParam1 == -1)
		return 0;

	if (iParam1 == 83 || iParam2 == 83)
		return 0;

	if (Global_114162.f_7692.f_764 < 8)
	{
		num = iParam0;
		num.f_3 = func_113(iParam3);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam6;
		num.f_5 = iParam7;
		num.f_1 = iParam11;
		num.f_2 = iParam4;
		num.f_6 = echParam5;
		num.f_7 = iParam8;
		num.f_8 = iParam9;
		num.f_9 = iParam10;
		num.f_10 = iParam1;
		num.f_11 = iParam2;
		num.f_13 = iParam12;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_114162.f_7692.f_651[Global_114162.f_7692.f_764 /*14*/] = { num };
		Global_114162.f_7692.f_764 = Global_114162.f_7692.f_764 + 1;
		func_112(CHAR_MICHAEL);
		func_112(CHAR_FRANKLIN);
		func_112(CHAR_TREVOR);
		return 1;
	}

	return 0;
}

void func_112(eCharacter echParam0) // Position - 0x3713 (14099)
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_82(echParam0))
		return;

	for (i = 0; i < Global_114162.f_7692.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_114162.f_7692[i /*15*/].f_2, echParam0))
			if (Global_114162.f_7692[i /*15*/].f_3 > num)
				num = Global_114162.f_7692[i /*15*/].f_3;
	}

	for (j = 0; j < Global_114162.f_7692.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_114162.f_7692.f_651[j /*14*/].f_2, echParam0))
			if (Global_114162.f_7692.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_114162.f_7692.f_919[echParam0] = num;
	return;
}

int func_113(int iParam0) // Position - 0x37D1 (14289)
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

eCharacter func_114(int iParam0) // Position - 0x383B (14395)
{
	switch (iParam0)
	{
		case 0:
			return 104;
	
		case 1:
			return 105;
	
		case 2:
			return 106;
	
		case 3:
			return 107;
	
		case 4:
			return 108;
	
		case 5:
			return 109;
	
		case 6:
			return 110;
	
		case 7:
			return 111;
	
		case 8:
			return 112;
	
		case 9:
			return 93;
	}

	return 145;
}

int func_115() // Position - 0x38D8 (14552)
{
	func_80();

	switch (Global_114162.f_2367.f_539.f_4321)
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

int func_116(int iParam0) // Position - 0x391E (14622)
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 8;
	
		case 2:
			return 9;
	}

	return -1;
}

int func_117(int iParam0) // Position - 0x3958 (14680)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 8:
			return 4;
	
		case 9:
			return 5;
	}

	return -1;
}

int func_118(int iParam0) // Position - 0x39B6 (14774)
{
	return Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_119(int iParam0) // Position - 0x39D2 (14802)
{
	if (func_118(iParam0) < 0)
		func_120(iParam0, 0);

	Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2 = Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2 + 1;
	return;
}

void func_120(int iParam0, int iParam1) // Position - 0x3A15 (14869)
{
	Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
	return;
}

void func_121(int iParam0, BOOL bParam1, int iParam2) // Position - 0x3A33 (14899)
{
	BOOL flag;
	int randomIntInRange;

	if (iParam2 < 0)
		iParam2 = func_77();

	func_139(iParam2) == 4;
	flag = Global_114162.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;

	if (flag)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!func_138(func_114(iParam0), 3))
				flag = false;
		else if (!func_138(func_114(iParam0), 4))
			flag = false;

	Global_114162.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;

	if (bParam1)
	{
		if (!flag)
		{
			func_137(iParam0, 0);
			func_131(func_114(iParam0), func_139(iParam2), true);
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
		
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_130() /*5571*/].f_681.f_1273), iParam0);
					func_127(-60084924, 15, false);
					break;
			}
		
			func_126(randomIntInRange);
			func_125(iParam0, randomIntInRange);
			Global_113155.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (flag)
	{
		func_122(func_114(iParam0), func_139(iParam2));
	}

	return;
}

void func_122(eCharacter echParam0, int iParam1) // Position - 0x3B5C (15196)
{
	int num;

	if (Global_120[echParam0 /*10*/].f_8 != 184)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			num = iParam1;
			func_124(echParam0, num, 0);
			func_123(echParam0, num, 0);
		}
	}

	return;
}

void func_123(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3B91 (15249)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114162.f_28055[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_124(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3BD6 (15318)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114162.f_28055[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

void func_125(int iParam0, int iParam1) // Position - 0x3C1B (15387)
{
	if (iParam1 > -1)
		Global_113155.f_4[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	else
		Global_113155.f_4[iParam0] = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000);

	return;
}

void func_126(int iParam0) // Position - 0x3C58 (15448)
{
	if (iParam0 != -1)
		Global_113155.f_3 = MISC::GET_GAME_TIMER() + iParam0;
	else
		Global_113155.f_3 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000);

	return;
}

void func_127(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3C8F (15503)
{
	int num;

	if (func_129(iParam1, bParam2))
	{
		num = func_128();
		Global_2696325[num] = iParam1;
		Global_2696336[num] = iParam0;
	}

	return;
}

int func_128() // Position - 0x3CBC (15548)
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

BOOL func_129(int iParam0, BOOL bParam1) // Position - 0x3CF1 (15601)
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

int func_130() // Position - 0x3D77 (15735)
{
	int num;

	num = 0;
	return num;
}

void func_131(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x3D84 (15748)
{
	int num;

	Global_9639 = echParam0;

	if (Global_120[echParam0 /*10*/].f_8 != 184)
	{
		func_136();
	
		if (echParam1 == 4)
		{
			func_124(echParam0, 0, 1);
			func_124(echParam0, 1, 1);
			func_124(echParam0, 2, 1);
			func_123(echParam0, 0, 1);
			func_123(echParam0, 1, 1);
			func_123(echParam0, 2, 1);
		}
		else
		{
			if (func_135(echParam0, echParam1) == 1 && func_134(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_124(echParam0, num, 1);
			func_123(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2739945.f_7009, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2739945.f_7009, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2739945.f_7009, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_79564)
			{
				if (echParam1 != 4)
				{
					if (Global_21083 != echParam1)
					{
						Global_9612[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9629[echParam1] = 1;
						Global_9634[echParam1] = echParam0;
					}
					else if (echParam0 == Global_21083)
					{
					}
					else
					{
						Global_9563[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9563[1 /*6*/].f_5 = echParam1;
						func_132();
					}
				}
				else
				{
					Global_9563[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9563[1 /*6*/].f_5 = echParam1;
					func_132();
				}
			}
			else
			{
				Global_9563[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9563[1 /*6*/].f_5 = echParam1;
				func_132();
			}
		}
	}

	return;
}

void func_132() // Position - 0x3F02 (16130)
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[Global_9639 /*29*/].f_7)), 64);

	if (Global_9658 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_9563[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_9563[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_8919, 0);
	return;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x3F7D (16253)
{
	return Global_2201[character /*29*/].f_3;
}

int func_134(eCharacter echParam0, int iParam1) // Position - 0x3F90 (16272)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_24[iParam1];
}

int func_135(eCharacter echParam0, int iParam1) // Position - 0x3FBA (16314)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_12[iParam1];
}

void func_136() // Position - 0x3FE4 (16356)
{
	if (func_81(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114162.f_28055[0 /*29*/])
				Global_21083 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114162.f_28055[1 /*29*/])
				Global_21083 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114162.f_28055[2 /*29*/])
				Global_21083 = CHAR_TREVOR;
			else
				Global_21083 = CHAR_MICHAEL;
	}
	else
	{
		Global_21083 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21083 == _CHAR_NULL)
			Global_21083 = CHAR_MULTIPLAYER;
	
		if (Global_79564)
			Global_21083 = CHAR_MULTIPLAYER;
	
		if (Global_21083 > CHAR_MULTIPLAYER)
			Global_21083 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_137(int iParam0, int iParam1) // Position - 0x4087 (16519)
{
	Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
	return;
}

BOOL func_138(eCharacter echParam0, int iParam1) // Position - 0x40A5 (16549)
{
	if (func_135(echParam0, iParam1) == 1)
		return true;

	return false;
}

int func_139(int iParam0) // Position - 0x40C1 (16577)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 1:
			return 1;
	
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
	}

	return 4;
}

BOOL func_140(int iParam0, int iParam1) // Position - 0x411D (16669)
{
	if (iParam1 < 0)
		iParam1 = func_77();

	return Global_114162.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_141(float fParam0) // Position - 0x4143 (16707)
{
	int i;
	int j;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_10(&(Global_114162.f_18107.f_175[i /*19*/].f_5)))
			func_142(&(Global_114162.f_18107.f_175[i /*19*/].f_5), fParam0 * 60f);
	}

	for (j = 0; j < 6; j = j + 1)
	{
		if (func_10(&Global_114162.f_18107.f_362[j /*3*/]))
			func_142(&Global_114162.f_18107.f_362[j /*3*/], fParam0 * 60f);
	}

	AUDIO::SKIP_RADIO_FORWARD();
	return;
}

void func_142(int* piParam0, float fParam1) // Position - 0x41D4 (16852)
{
	if (func_10(piParam0))
		func_9(piParam0, func_4(piParam0) + fParam1);

	return;
}

void func_143() // Position - 0x41F7 (16887)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (i < 1)
			Global_98150[i] = Global_98150[i + 1];
		else
			Global_98150[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_144() // Position - 0x4238 (16952)
{
	int randomIntInRange;
	int taskSequenceId;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_274))
	{
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_312, 1f, -1, 0.25f, 0, fLocal_324);
	
		if (randomIntInRange < 15000)
			TASK::TASK_PLAY_ANIM(0, sLocal_274, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, false, false, false);
		else if (randomIntInRange >= 15000 && randomIntInRange < 35000)
			TASK::TASK_PLAY_ANIM(0, sLocal_274, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, false, false, false);
		else
			TASK::TASK_PLAY_ANIM(0, sLocal_274, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, false, false, false);
	
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		func_28(&iLocal_331, 262144);
	}

	return;
}

void func_145(var uParam0) // Position - 0x430E (17166)
{
	Vehicle vehicle;

	vehicle = *uParam0;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		if (!func_146(vehicle))
		{
			ENTITY::SET_ENTITY_COLLISION(vehicle, true, false);
			ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
		}
	}

	return;
}

BOOL func_146(Vehicle veParam0) // Position - 0x4345 (17221)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;
	else
		return true;

	return false;
}

BOOL func_147(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6) // Position - 0x4388 (17288)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	var unk;
	var unk2;
	var unk3;
	float num6;
	float num7;
	float num8;
	float num9;

	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_171();
			num5 = func_171();
			func_170(&num5, iParam0);
			func_169(&num5, iParam1);
			func_168(&num5, 0);
		
			if (func_166(*uParam4, num5))
				func_161(&num5, 0, 0, 0, 1, 0, 0);
		
			func_158(*uParam4, num5, &num, &num2, &num3, &unk, &unk2, &unk3);
			uParam4->f_11 = num + (num2 * 60) + ((num3 + iParam6) * 3600);
			func_141(SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			func_157();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_156();
			uParam4->f_3 = uParam4->f_3 + 1;
			break;
	
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (MISC::GET_HASH_KEY(sParam2) != 0)
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, 1f);
				
					if (MISC::GET_HASH_KEY(sParam3) != 0)
					{
						MISC::UNLOAD_ALL_CLOUD_HATS();
						MISC::LOAD_CLOUD_HAT(sParam3, 0);
					}
				
					uParam4->f_3 = 2;
				}
			}
		
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				num5 = *uParam4;
				func_161(&num5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_155(num5), func_154(num5), func_153(num5));
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return true;
			}
		
			num8 = fParam5;
			num6 = 0.1f;
			num7 = 0.9f;
			num9 = func_152((num8 - num6) / (num7 - num6), 0f, 1f);
			num4 = SYSTEM::ROUND((float)uParam4->f_11 * num9);
			num5 = *uParam4;
			func_161(&num5, num4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_155(num5), func_154(num5), func_153(num5));
		
			if (func_151(num5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
				CLOCK::SET_CLOCK_DATE(func_151(num5), func_150(num5), func_148(num5));
		
			func_259();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}

	return false;
}

int func_148(int iParam0) // Position - 0x4586 (17798)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_149(BOOL bParam0, var uParam1, var uParam2) // Position - 0x45A8 (17832)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_150(int iParam0) // Position - 0x45BF (17855)
{
	return iParam0 & 15;
}

int func_151(int iParam0) // Position - 0x45CC (17868)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_152(float fParam0, float fParam1, float fParam2) // Position - 0x45DE (17886)
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_153(int iParam0) // Position - 0x4605 (17925)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_154(int iParam0) // Position - 0x4618 (17944)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_155(int iParam0) // Position - 0x462B (17963)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_156() // Position - 0x463E (17982)
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_114162.f_14145[i /*104*/].f_16);
	}

	return;
}

int func_157() // Position - 0x466A (18026)
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return 0;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return 0;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
		return 0;

	AUDIO::SET_VEH_RADIO_STATION(vehiclePedIsIn, "OFF");
	return 1;
}

void func_158(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x46B8 (18104)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_166(iParam0, iParam1))
	{
		num = func_150(iParam1);
		num2 = func_148(iParam0);
		num3 = func_148(iParam0) - func_148(iParam1);
		num4 = func_150(iParam0) - func_150(iParam1);
		num5 = func_151(iParam0) - func_151(iParam1);
		num6 = func_155(iParam0) - func_155(iParam1);
		num7 = func_154(iParam0) - func_154(iParam1);
		num8 = func_153(iParam0) - func_153(iParam1);
	}
	else
	{
		num = func_150(iParam0);
		num2 = func_148(iParam1);
		num3 = func_148(iParam1) - func_148(iParam0);
		num4 = func_150(iParam1) - func_150(iParam0);
		num5 = func_151(iParam1) - func_151(iParam0);
		num6 = func_155(iParam1) - func_155(iParam0);
		num7 = func_154(iParam1) - func_154(iParam0);
		num8 = func_153(iParam1) - func_153(iParam0);
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
	
		num5 = num5 + func_160(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_159(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_159(float fParam0, float fParam1, float fParam2) // Position - 0x48B9 (18617)
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

int func_160(int iParam0, int iParam1) // Position - 0x48FB (18683)
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

void func_161(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x499D (18845)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_148(*uParam0);
	i = func_150(*uParam0);
	num2 = func_151(*uParam0);
	j = func_155(*uParam0);
	k = func_154(*uParam0);
	l = func_153(*uParam0);

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

	for (m = func_160(i, num); num2 > m; m = func_160(i, num))
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
	func_162(uParam0, l, k, j, num2, i, num);
	return;
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4B1F (19231)
{
	func_168(uParam0, iParam1);
	func_169(uParam0, iParam2);
	func_170(uParam0, iParam3);
	func_165(uParam0, iParam5);
	func_164(uParam0, iParam4);
	func_163(uParam0, iParam6);
	return;
}

void func_163(var uParam0, int iParam1) // Position - 0x4B57 (19287)
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

void func_164(var uParam0, int iParam1) // Position - 0x4BDD (19421)
{
	int num;
	int num2;

	num = func_150(*uParam0);
	num2 = func_148(*uParam0);

	if (iParam1 < 1 || iParam1 > func_160(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_165(var uParam0, int iParam1) // Position - 0x4C2E (19502)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_166(int iParam0, int iParam1) // Position - 0x4C61 (19553)
{
	int num;
	int num2;

	if (!func_167(iParam1) || !func_167(iParam0))
		return 1;

	num = func_148(iParam0);
	num2 = func_148(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_150(iParam0);
	num2 = func_150(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_151(iParam0);
	num2 = func_151(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_155(iParam0);
	num2 = func_155(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_154(iParam0);
	num2 = func_154(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_153(iParam0);
	num2 = func_153(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_167(int iParam0) // Position - 0x4D6D (19821)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_153(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_154(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_155(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_148(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_150(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_151(iParam0);

	if (num6 < 1 || num6 > func_160(num5, num4))
		return false;

	return true;
}

void func_168(var uParam0, int iParam1) // Position - 0x4E49 (20041)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_169(var uParam0, int iParam1) // Position - 0x4E85 (20101)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_170(var uParam0, int iParam1) // Position - 0x4EC0 (20160)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

int func_171() // Position - 0x4EFA (20218)
{
	int unk;

	func_168(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_169(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_170(&unk, CLOCK::GET_CLOCK_HOURS());
	func_164(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_165(&unk, CLOCK::GET_CLOCK_MONTH());
	func_163(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

char* func_172() // Position - 0x4F40 (20288)
{
	char* str;

	switch (uLocal_74[0])
	{
		case 0:
			str = "CLEARING";
			break;
	
		case 1:
			str = "OVERCAST";
			break;
	
		case 4:
			str = "CLOUDS";
			break;
	
		case 5:
			str = "CLEAR";
			break;
	
		case 8:
			str = "EXTRASUNNY";
			break;
	
		case 9:
			str = "RAIN";
			break;
	
		default:
			str = "EXTRASUNNY";
			break;
	}

	return str;
}

BOOL func_173() // Position - 0x4FB7 (20407)
{
	if (Global_22442 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_174() // Position - 0x4FD9 (20441)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 1, 0, func_196(uLocal_74[0]), 0, 1);
			func_177("SC_SEX", false, false, false);
		}
		else
		{
			func_175(uLocal_272[0], "SEX_ORAL", 10);
		}
	}

	return;
}

void func_175(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x503B (20539)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_176(iParam2), 1);
	return;
}

char* func_176(int iParam0) // Position - 0x5052 (20562)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

BOOL func_177(char* sParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5247 (21063)
{
	var unk;
	char* str;

	if (func_194())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
	
		if (bParam1)
			func_193(&unk, bParam2);
		else
			unk = { func_192(unk) };
	
		if (bParam3)
			str = "SCAUD";
		else
			str = "SHAUD";
	
		if (_CONVERSATION_ADD_LINE(&uLocal_79, str, &unk, 7, 0, 0, 0))
			return true;
	}

	return false;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x52A2 (21154)
{
	func_191(uParam0, _CHAR_NULL, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22449 = false;
	Global_22451 = 0;
	Global_22456 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_2883585 = 0;
	return func_179(sParam2, iParam3, false);
}

BOOL func_179(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x52F0 (21232)
{
	Global_22443 = 0;

	if (Global_22442 == 0 || Global_22444 == 2)
	{
		if (Global_22442 != 0)
		{
			if (iParam1 > Global_22444)
			{
				if (Global_22449 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21083.f_1 = 3;
					Global_22442 = 0;
					Global_22443 = 1;
					Global_22495 = 0;
					Global_22438 = 0;
					Global_22439 = 0;
					Global_22453 = 0;
					Global_22452 = false;
					Global_21082 = 0;
				}
				else
				{
					func_190();
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
	
		if (func_189(8, -1))
			return 0;
	
		Global_22518 = { Global_22512 };
		func_188();
		Global_21731 = { Global_21896 };
		Global_22448 = Global_22449;
		Global_22455 = Global_22456;
		Global_2883586 = Global_2883585;
		Global_22457 = { Global_22473 };
		Global_22450 = Global_22451;
		Global_23432 = Global_23433;
		Global_23440 = { Global_23446 };
		Global_23434 = Global_23435;
		Global_23436 = Global_23437;
		Global_23438 = Global_23439;
		Global_22061.f_370 = Global_23431;
		Global_22061.f_368 = Global_23429;
		Global_22061.f_369 = Global_23430;
		Global_22438 = Global_22439;
	
		if (Global_22448)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
		
			if (bParam2)
			{
				func_136();
			
				if (Global_9758[Global_21083 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21083.f_1 > 3)
					return 0;
			}
		
			if (Global_21049 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_187())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_79564)
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
		
			if (func_24())
			{
				return 0;
			}
			else
			{
				switch (Global_21083.f_1)
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
		
			func_186();
			Global_22452 = bParam2;
		}
	
		Global_22444 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22061, sParam0, 24);
		Global_21308 = 0;
		func_185();
		func_180();
		return 1;
	}

	if (Global_22442 == 5)
		return 0;

	if (iParam1 < Global_22444 || iParam1 == Global_22444)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_190();
	}

	return 0;
}

void func_180() // Position - 0x55BE (21950)
{
	if (!func_181())
		return;

	if (Global_22448)
	{
		TEXT_LABEL_COPY(&(Global_1973514.f_1), { Global_22061 }, 4);
		Global_1973514 = Global_8234;
		Global_1973514.f_6 = Global_22452;
	}

	return;
}

BOOL func_181() // Position - 0x55F5 (22005)
{
	if (!Global_262145.f_28435)
		return false;

	if (!Global_79564)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_182(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_182(Player plParam0) // Position - 0x5658 (22104)
{
	return func_183(plParam0, 20);
}

BOOL func_183(Player plParam0, int iParam1) // Position - 0x5668 (22120)
{
	return IS_BIT_SET(Global_1887694[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x5680 (22144)
{
	return -1;
}

void func_185() // Position - 0x5689 (22153)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21310[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22442 = 1;
	return;
}

void func_186() // Position - 0x56BA (22202)
{
	Global_22495 = Global_22494;
	Global_22489 = Global_22490;
	Global_22536 = { Global_22524 };
	Global_22542 = { Global_22530 };
	Global_22497 = Global_22496;
	Global_22566 = { Global_22548 };
	Global_22572 = { Global_22554 };
	Global_22578 = { Global_22560 };
	Global_22584 = { Global_22590 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22453 = Global_22454;
	Global_22455 = Global_22456;
	Global_22457 = { Global_22473 };
	Global_22446 = Global_22447;
	Global_23458 = 0;
	Global_22491 = 0;
	Global_22492 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
	return;
}

BOOL func_187() // Position - 0x574F (22351)
{
	int num;
	int weaponHash;

	if (Global_79564)
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

void func_188() // Position - 0x57E8 (22504)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21731[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21731[i /*10*/].f_1), "", 24);
		Global_21731[i /*10*/].f_7 = 0;
		Global_21731[i /*10*/].f_8 = 0;
	}

	Global_21731.f_161 = -99;
	Global_21731.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_189(int iParam0, int iParam1) // Position - 0x583F (22591)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673707.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673707.f_1048, iParam0);
}

void func_190() // Position - 0x5877 (22647)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23453 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21083.f_1 == 9 || Global_21082 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22442 = 6;
		Global_21083.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22442 = 6;
		return;
	}

	return;
}

void func_191(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x58CE (22734)
{
	Global_21896 = { *uParam0 };
	Global_8235 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22512, sParam2, 24);
	Global_23431 = iParam5;

	if (iParam3 == 0)
	{
		Global_23429 = 1;
		Global_23427 = 0;
	}
	else
	{
		Global_23429 = 0;
		Global_23427 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23430 = 1;
		Global_23428 = 0;
	}
	else
	{
		Global_23430 = 0;
		Global_23428 = 1;
	}

	return;
}

struct<6> func_192(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x5924 (22820)
{
	int num;

	TEXT_LABEL_APPEND_STRING(&uParam0, "_", 24);
	num = uLocal_74[0];
	TEXT_LABEL_APPEND_INT(&uParam0, num, 24);
	return uParam0;
}

void func_193(char* sParam0, BOOL bParam1) // Position - 0x5945 (22853)
{
	TEXT_LABEL_APPEND_STRING(sParam0, "_", 24);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		TEXT_LABEL_APPEND_STRING(sParam0, "T", 24);
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		TEXT_LABEL_APPEND_STRING(sParam0, "M", 24);
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		TEXT_LABEL_APPEND_STRING(sParam0, "F", 24);

	if (bParam1)
		*sParam0 = { func_192(*sParam0) };

	return;
}

BOOL func_194() // Position - 0x599C (22940)
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || Global_22442 != 0)
		return false;

	return true;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x59C5 (22981)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79564)
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

char* func_196(int iParam0) // Position - 0x5A60 (23136)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
	
		case 1:
			return "Nikki";
	
		case 2:
			return "Chastity";
	
		case 3:
			return "Cheetah" /*Cheetah*/;
	
		case 4:
			return "Sapphire";
	
		case 5:
			return "Infernus" /*Infernus*/;
	
		case 6:
			return "Fufu";
	
		case 7:
			return "Peach";
	
		case 8:
			return "TaxiLiz";
	
		case 9:
			return "REHH2Hiker";
	}

	return "Invalid name";
}

float func_197() // Position - 0x5B13 (23315)
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
	
		case 0:
			return 52.89f;
	
		case 4:
			return 14.5f;
	
		case 5:
			return 43.85f;
	
		case 8:
			return 193.5f;
	
		case 9:
			return 233.2f;
	}

	return 0f;
}

Vector3 func_198(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x5B8C (23436)
{
	var groundZ;

	vParam1.f_2 = vParam1.f_2 + 0.15f;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &groundZ, false, false))
		vParam1.f_2 = groundZ;

	if (func_199(pedParam0))
		ENTITY::SET_ENTITY_COORDS(pedParam0, vParam1, true, false, false, true);

	return vParam1;
}

BOOL func_199(Ped pedParam0) // Position - 0x5BD2 (23506)
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}

Vector3 func_200() // Position - 0x5BF0 (23536)
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
	
		case 0:
			return -162.4315f, -1635.1072f, 32.6529f;
	
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
	
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
	
		case 8:
			return -28.5266f, -1565.7926f, 28.918f;
	
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
	}

	return 0f, 0f, 0f;
}

void func_201(var uParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x5CA7 (23719)
{
	Vehicle playersLastVehicle;

	if (iParam4 == 1)
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), SPC_DEACTIVATE_GADGETS);

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);

	if (bParam7)
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);

	if (!bParam1 && bParam6)
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
	else
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);

	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
		
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
			ENTITY::SET_ENTITY_VISIBLE(playersLastVehicle, true, false);
	
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
	
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}

	func_15(bParam1, true, false, false, false, false, false);
	func_156();

	if (!bParam1 && bParam5)
		if (uParam0->f_5)
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		else
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);

	if (!bParam1)
		if (CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_IN(250);

	if (!bParam1)
		if (Global_114162.f_32754.f_4801 != -15)
			Global_114162.f_32754.f_4801 = func_171();

	return;
}

float func_202(int* piParam0) // Position - 0x5E1B (24091)
{
	if (func_10(piParam0))
		if (func_6(piParam0))
			return piParam0->f_2;
		else
			return func_5(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return 0f;
}

void func_203() // Position - 0x5E54 (24148)
{
	int i;
	var unk;
	var unk14;
	var unk27;

	unk = 4;
	unk14 = 4;
	unk27 = 4;
	func_204(&unk, &unk14, &unk27);

	for (i = 0; i < 4; i = i + 1)
	{
		if (!CAM::DOES_CAM_EXIST(uLocal_282[i]))
		{
			uLocal_282[i] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), unk[i /*3*/], unk14[i /*3*/], unk27[i], false, 2);
			CAM::SHAKE_CAM(uLocal_282[i], "HAND_SHAKE", 0.3f);
		}
	}

	uLocal_287.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(uLocal_287.f_4, unk[0 /*3*/], unk14[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(uLocal_287.f_4, unk[1 /*3*/], unk14[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(uLocal_287.f_4, unk27[0]);
	return;
}

void func_204(var uParam0, var uParam1, var uParam2) // Position - 0x5F26 (24358)
{
	switch (uLocal_74[0])
	{
		case 1:
			uParam0->[0 /*3*/] = { 140.9085f, -1885.5271f, 25.6959f };
			uParam1->[0 /*3*/] = { -9.0308f, 0f, 126.3829f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { 141.712f, -1884.935f, 30.7241f };
			uParam1->[1 /*3*/] = { 4.7025f, 0f, 129.5531f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { 139.18987f, -1885.8654f, 24.96737f };
			uParam1->[2 /*3*/] = { -3.535496f, 0.081819f, 135.13081f };
			uParam2->[2] = 50f;
			uParam0->[3 /*3*/] = { 133.9669f, -1893.2922f, 23.9573f };
			uParam1->[3 /*3*/] = { -1.8669f, -0.0329f, -5.5828f };
			uParam2->[3] = 50f;
			break;
	
		case 0:
			uParam0->[0 /*3*/] = { -186.5408f, -1629.3278f, 35.8275f };
			uParam1->[0 /*3*/] = { -1.5588f, 0f, -118.8025f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -186.1923f, -1629.5049f, 48.7132f };
			uParam1->[1 /*3*/] = { -1.2745f, 0f, -116.9616f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -184.9595f, -1632.1932f, 36.32303f };
			uParam1->[2 /*3*/] = { -3.262451f, 0.073971f, -100.67564f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { -164.7078f, -1632.2499f, 34.0944f };
			uParam1->[3 /*3*/] = { -3.7303f, 0.0222f, 108.1824f };
			uParam2->[3] = 40f;
			break;
	
		case 4:
			uParam0->[0 /*3*/] = { -208.6886f, 112.8581f, 73.0855f };
			uParam1->[0 /*3*/] = { -0.1055f, 0f, -156.0082f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -208.9068f, 113.3747f, 85.2889f };
			uParam1->[1 /*3*/] = { 3.8438f, 0f, -157.0767f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -206.23572f, 106.94099f, 72.07555f };
			uParam1->[2 /*3*/] = { -11.58381f, 0.084975f, -158.97023f };
			uParam2->[2] = 45f;
			uParam0->[3 /*3*/] = { -197.6886f, 94.7063f, 69.814f };
			uParam1->[3 /*3*/] = { 0.5155f, -0.0266f, 48.8652f };
			uParam2->[3] = 45f;
			break;
	
		case 5:
			uParam0->[0 /*3*/] = { -871.6285f, 520.8466f, 93.1945f };
			uParam1->[0 /*3*/] = { -0.1377f, -1.3933f, -105.9309f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -871.5255f, 521.1066f, 104.6356f };
			uParam1->[1 /*3*/] = { 3.1118f, -1.3933f, -105.9309f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -866.6436f, 514.61206f, 92.90275f };
			uParam1->[2 /*3*/] = { -5.957637f, -1.324997f, -101.906235f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { -849.5522f, 514.2322f, 91.0095f };
			uParam1->[3 /*3*/] = { -1.626f, -1.3198f, 92.3739f };
			uParam2->[3] = 40f;
			break;
	
		case 8:
			uParam0->[0 /*3*/] = { -27.698f, -1584.6459f, 31.1034f };
			uParam1->[0 /*3*/] = { 0.0044f, 0f, -1.9117f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -27.698f, -1584.6459f, 40.4849f };
			uParam1->[1 /*3*/] = { 7.981f, 0f, -1.9117f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -28.639044f, -1579.7404f, 30.824232f };
			uParam1->[2 /*3*/] = { -7.527712f, 0.030218f, -14.330508f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { -28.6719f, -1568.0903f, 29.7492f };
			uParam1->[3 /*3*/] = { -1.5414f, 0f, -168.6005f };
			uParam2->[3] = 40f;
			break;
	
		case 9:
			uParam0->[0 /*3*/] = { 3323.6306f, 5148.861f, 20.9592f };
			uParam1->[0 /*3*/] = { 1.1547f, 1.0064f, 21.8733f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { 3323.844f, 5148.672f, 28.2303f };
			uParam1->[1 /*3*/] = { 11.4168f, 1.0064f, 22.8025f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { 3328.9038f, 5157.8184f, 20.579899f };
			uParam1->[2 /*3*/] = { -3.634001f, 1.039937f, 30.448088f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { 3315.3682f, 5171.7715f, 18.9066f };
			uParam1->[3 /*3*/] = { -2.8773f, 1.0064f, -103.0585f };
			uParam2->[3] = 40f;
			break;
	}

	return;
}

void func_205(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x645A (25690)
{
	float num;
	float num2;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(pedParam0, true);
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_337);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_337);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
		
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
			{
				num = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), uLocal_300);
				num2 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), uLocal_303);
			
				if (num2 < num)
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_272[0], 0);
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_206(), 0, 552, -1);
				else
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_300, 1f, -1, 0.25f, 64, 1193033728);
			}
		
			if (pedParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_206(), 0, 546, -1);
				else
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, -1, 0.25f, 1, 1193033728);
			
				if (func_26(pedParam0, vParam1, true) > 5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, false, false, false);
				}
			}
		
			TASK::CLOSE_SEQUENCE_TASK(iLocal_337);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_337);
		}
	}

	return;
}

char* func_206() // Position - 0x6628 (26152)
{
	char* str;

	if (uLocal_74[0] == 1)
		str = "BC_NIKKI_H_F";

	return str;
}

void func_207(Ped pedParam0, Vehicle veParam1) // Position - 0x6641 (26177)
{
	if (!PED::IS_PED_INJURED(pedParam0) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
		TASK::TASK_VEHICLE_PARK(pedParam0, veParam1, uLocal_306, fLocal_325, 3, 1092616192, false);

	return;
}

char* func_208() // Position - 0x6677 (26231)
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_209() // Position - 0x6683 (26243)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		return "facials@p_m_zero@variations@happy";
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		return "facials@p_m_one@variations@happy";
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		return "facials@p_m_two@variations@happy";

	return "facials@p_m_zero@variations@happy";
}

void func_210() // Position - 0x66C2 (26306)
{
	sLocal_274 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_274);
	return;
}

BOOL func_211(Vehicle veParam0) // Position - 0x66D8 (26328)
{
	if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("blimp")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("cargobob")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("cargobob2")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("cargobob3")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("cargobob5")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("buzzard")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("buzzard2")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("maverick")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("polmav")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("annihilator")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("frogger")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("frogger2")))
		return true;

	return false;
}

BOOL func_212(var uParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4, float fParam5) // Position - 0x67DA (26586)
{
	if (func_214(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
	
		if (!func_213(fParam1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, fParam1, true, false, false, true);
		
			if (bParam4)
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
		
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
		}
	
		return 1;
	}

	return 0;
}

BOOL func_213(float fParam0, var uParam1, var uParam2) // Position - 0x682D (26669)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_214(var uParam0) // Position - 0x6857 (26711)
{
	Vehicle playersLastVehicle;

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!func_146(playersLastVehicle))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(playersLastVehicle, PLAYER::PLAYER_PED_ID(), uLocal_61, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(playersLastVehicle);
				ENTITY::SET_ENTITY_COLLISION(playersLastVehicle, false, false);
				ENTITY::SET_ENTITY_VISIBLE(playersLastVehicle, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(playersLastVehicle, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
				*uParam0 = playersLastVehicle;
				return true;
			}
		}
	}

	return false;
}

BOOL func_215(int iParam0) // Position - 0x68C9 (26825)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_31 > iParam0)
			Global_30 = MISC::GET_GAME_TIMER();
	
		Global_31 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_30 > iParam0)
		{
			if (func_216())
			{
				Global_30 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_216() // Position - 0x6913 (26899)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_217(BOOL bParam0) // Position - 0x6945 (26949)
{
	var unk;
	float num;

	func_67();

	if (ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false))
		return;

	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_306 + ({ 0f, 1f, 1f } * { 10f, 10f, 10f }), uLocal_306 + ({ 0f, -1f, -1f } * { 10f, 10f, 10f }), false, true);
	num = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_272[0], true));

	if (iLocal_76 != 9)
	{
		if (num >= 200f / 2f && func_194() && !func_270(iLocal_331, 2) || func_257(uLocal_272[0], false))
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_279))
				HUD::REMOVE_BLIP(&blLocal_279);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_278))
				HUD::REMOVE_BLIP(&blLocal_278);
		
			func_254(0);
			func_86("SCLUB_HOME_R" /*Return to ~b~~a~.~s~*/, uLocal_74[0]);
			iLocal_76 = 9;
		}
	}

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_76 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_279))
				HUD::REMOVE_BLIP(&blLocal_279);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_278))
				HUD::REMOVE_BLIP(&blLocal_278);
		
			iLocal_76 = 8;
		}
	}

	if (func_243(uLocal_272[0], &uLocal_265, &uLocal_262))
		func_68(4);

	if (iLocal_76 <= 1)
		func_262(true);

	switch (iLocal_76)
	{
		case 0:
			iLocal_77 = 0;
		
			if (func_194())
			{
				if (!func_270(iLocal_331, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_272[0], true);
					func_86("SCLUB_HOME_MEET" /*Meet ~b~~a~~s~ behind the club.*/, uLocal_74[0]);
					func_254(0);
					func_28(&iLocal_331, 1);
				}
			
				iLocal_76 = 1;
			}
			break;
	
		case 1:
			iLocal_77 = 1;
			unk = { func_73(uLocal_74[0]) };
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_338 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				iLocal_332 = ENTITY::GET_ENTITY_HEALTH(veLocal_338);
			}
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_272[0], true), 3f, 3f, 3f, false, true, 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_338, false) && func_242(veLocal_338, uLocal_272[0], true) <= 10f)
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_272[0], false);
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_338) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veLocal_338) < 1 || !bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(veLocal_338)))
				{
					if (!func_72("SCLUB_SMALL_CAR" /*Get a larger vehicle to take ~a~ home.*/, &unk))
					{
						func_69("SCLUB_SMALL_CAR" /*Get a larger vehicle to take ~a~ home.*/, uLocal_74[0], false);
						func_175(uLocal_272[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					HUD::CLEAR_HELP(true);
					TASK::CLEAR_PED_TASKS(uLocal_272[0]);
					func_240();
				
					if (!func_270(iLocal_331, 2))
						func_28(&iLocal_331, 2);
				
					func_239();
					func_88();
					func_231(39, true);
					func_231(40, true);
					func_231(41, true);
					func_231(42, true);
					func_231(43, true);
					func_231(44, true);
					iLocal_76 = 2;
				}
			}
			else if (func_72("SCLUB_SMALL_CAR" /*Get a larger vehicle to take ~a~ home.*/, &unk))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
	
		case 2:
			iLocal_77 = 2;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_272[0], false))
					iLocal_76 = 3;
			}
			else
			{
				func_175(uLocal_272[0], "NEED_A_VEHICLE", 10);
				iLocal_76 = 3;
			}
			break;
	
		case 3:
			iLocal_77 = 3;
			func_228();
		
			if (!func_173())
			{
				if (func_194())
				{
					PATHFIND::SET_ROADS_IN_AREA(uLocal_306 - { 3f, 3f, 3f }, uLocal_306 + { 3f, 3f, 3f }, false, true);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_306 - { 3f, 3f, 3f }, uLocal_306 + { 3f, 3f, 3f }, false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(uLocal_306, 10f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(uLocal_306, 10f, 0);
					iLocal_299 = PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_306 - { 35f, 35f, 35f }, uLocal_306 + { 35f, 35f, 35f }, false, true, true, true, 1);
					func_8(&uLocal_244);
				
					if (bParam0)
					{
						func_93(true);
						func_227();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
	
		case 4:
			iLocal_77 = 4;
			func_224(num, uLocal_309);
			func_218();
		
			if (func_4(&uLocal_256) > 45f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_318) > 100f * 100f && func_26(PLAYER::PLAYER_PED_ID(), uLocal_309, true) > 100f)
			{
				if (uLocal_74[0] == 8)
					func_177("SC_WALK", false, false, false);
				else
					func_175(uLocal_272[0], "GENERIC_FUCK_YOU", 10);
			
				func_68(3);
			}
			else if (func_257(uLocal_272[0], true))
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_279))
					HUD::REMOVE_BLIP(&blLocal_279);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_278))
					HUD::REMOVE_BLIP(&blLocal_278);
			
				func_254(0);
				func_86("SCLUB_HOME_R" /*Return to ~b~~a~.~s~*/, uLocal_74[0]);
				iLocal_76 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_306, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_303, 5f, 5f, 2f, true, true, 1))
			{
				if (func_37(true, false, true))
					iLocal_72 = 1;
			}
			else if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				func_227();
			}
			break;
	
		case 5:
			iLocal_77 = 5;
			func_224(num, uLocal_306);
			func_218();
			func_240();
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_306, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_76 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					func_227();
				else
					func_63(uLocal_306);
			
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SCLUB_HOME_WALK" /*Walk her to the door.*/))
					HUD::CLEAR_HELP(true);
			}
			break;
	
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (func_60(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3f, 2, 0.5f, false, true, false))
					{
						func_59();
						func_205(uLocal_272[0], uLocal_303);
					
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
							func_177("SC_GO_DOOR", false, false, false);
						else
							func_177("SC_FOLLOWD", false, false, true);
					
						iLocal_76 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_272[0]);
				func_227();
				HUD::CLEAR_HELP(true);
			}
			break;
	
		case 7:
			iLocal_77 = 7;
		
			if (!func_173() && !HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_270(iLocal_331, 2048))
			{
				unk = { func_73(uLocal_74[0]) };
				func_87("SCLUB_FOLLOW_H" /*Follow ~b~~a~~s~ to her home.*/, &unk, 7500, 1);
				func_88();
				func_254(0);
				func_28(&iLocal_331, 2048);
			}
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_309, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_303, 5f, 5f, 2f, false, true, 1) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				if (func_37(true, false, true))
					iLocal_72 = 1;
			break;
	
		case 8:
			if (!func_270(iLocal_329, 4096) && !func_173() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_272[0]))
			{
				if (iLocal_77 > 1 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_272[0], true)) < 3f * 3f)
				{
					func_175(uLocal_272[0], "GENERIC_FRIGHTENED_MED", 10);
					func_28(&iLocal_329, 4096);
				}
			}
		
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				iLocal_76 = iLocal_77;
			break;
	
		case 9:
			if (num > 200f)
			{
				func_68(1);
			}
			else if (num <= 200f / 2f && !func_257(uLocal_272[0], true))
			{
				HUD::CLEAR_PRINTS();
				iLocal_76 = iLocal_77;
			
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					func_227();
			}
			break;
	}

	return;
}

void func_218() // Position - 0x70D9 (28889)
{
	char* animDict;
	BOOL flag;
	BOOL isEntityPlayingAnim;
	BOOL isPedShooting;
	BOOL flag2;
	BOOL isPedInAnyVehicle;
	BOOL flag3;

	if (!func_270(iLocal_331, 16))
		if (func_219())
			func_28(&iLocal_331, 16);
		else
			return;

	animDict = func_102(uLocal_272[0], false, false);

	if (!func_270(iLocal_331, 8))
	{
		if (!func_270(iLocal_331, 4))
		{
			if (!func_270(iLocal_329, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
					func_177("SC_BJ", false, false, false);
			
				func_28(&iLocal_329, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(animDict);
				func_28(&iLocal_331, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(animDict))
		{
			func_96(uLocal_272[0], true, true, -1, true);
			PED::SET_PED_KEEP_TASK(uLocal_272[0], true);
			func_7(&uLocal_253);
			func_28(&iLocal_331, 8);
		}
	}
	else if (func_270(iLocal_331, 4))
	{
		flag = false;
		isEntityPlayingAnim = ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_272[0], animDict, func_97(4, true, true, func_100(veLocal_338)), 3);
		isPedShooting = PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
		flag2 = TASK::GET_SCRIPT_TASK_STATUS(uLocal_272[0], SCRIPT_TASK_PERFORM_SEQUENCE) == 7;
		isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		flag3 = false;
	
		if (isPedInAnyVehicle)
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				flag3 = ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 5f;
	
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_4(&uLocal_253) > 35f || SYSTEM::VDIST(uLocal_306, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f || isPedShooting || flag3)
		{
			if (!flag2 && !isEntityPlayingAnim)
				TASK::TASK_PLAY_ANIM(uLocal_272[0], animDict, func_97(4, true, true, func_100(veLocal_338)), 8f, -8f, -1, 0, 0, false, false, false);
		
			if (isPedShooting)
				iLocal_333 = 2000;
		
			flag = true;
		}
		else if (flag2)
		{
			flag = true;
		}
	
		if (isEntityPlayingAnim)
			func_259();
	
		if (flag && flag2 && !isEntityPlayingAnim)
		{
			if (!isPedShooting && isPedInAnyVehicle)
			{
				if (flag3)
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - SYSTEM::CEIL((float)PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()) * 0.1f), 0, 0);
					func_175(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_175(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
			
				func_28(&iLocal_329, 128);
			}
		
			STREAMING::REMOVE_ANIM_DICT(animDict);
			func_75(&iLocal_331, 4);
		}
	
		if (!func_270(iLocal_329, 64))
		{
			if (func_4(&uLocal_253) > 10f)
			{
				func_175(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				func_175(uLocal_272[0], "SEX_ORAL", 10);
				func_28(&iLocal_329, 64);
			}
		}
	
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		func_259();
	}

	return;
}

BOOL func_219() // Position - 0x73C6 (29638)
{
	Vector3 vector;
	var unk3;

	if (!func_194())
		return false;

	func_66(&vector, &unk3, false);

	if (SYSTEM::VDIST(uLocal_306, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 75f * 2f && SYSTEM::VDIST(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 75f / 2f && func_118(uLocal_74[0]) > 1 && func_220())
		return true;

	return false;
}

BOOL func_220() // Position - 0x743C (29756)
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
	
		if (func_223(entityModel, false) && func_221(vehiclePedIsIn))
			return true;
	}

	return false;
}

int func_221(Vehicle veParam0) // Position - 0x748C (29836)
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (func_222(ENTITY::GET_ENTITY_MODEL(veParam0)))
			return 0;
	
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			for (i = 0; i < 49; i = i + 1)
			{
				modType = i;
			
				if (modType != 17 && modType != 18 && modType != 19 && modType != 20 && modType != 21 && modType != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 16);
						hashKey = MISC::GET_HASH_KEY(&unk);
					
						if (hashKey != 0)
							if (hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/))
								return 0;
					}
				}
			}
		}
	
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("peyote2"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4))
					return 0;
				break;
		
			case joaat("peyote3"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("coquette4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case -1958428933:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("zorrusso"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1)
					return 0;
				break;
		
			case joaat("manana2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("rt3000"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 3)
					return 0;
				break;
		
			case 1748565021:
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 0)
					return 0;
				break;
		}
	
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case joaat("LAYOUT_STD_DRAFTER"):
			case joaat("LAYOUT_STD_DYNASTY"):
			case joaat("LAYOUT_STD_PARAGON"):
			case joaat("LAYOUT_STD_ZION3"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_RANGER_NOVAK"):
			case joaat("LAYOUT_RANGER_EVERON"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_RANGER_SEMINOLE2"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_STD_CYPHER"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_STANDARD_SULTAN3"):
			case joaat("LAYOUT_STD_WARRENER2"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_STANDARD_BUFFALO4"):
			case joaat("LAYOUT_STD_ASTRON"):
			case joaat("LAYOUT_STD_CINQUEMILA"):
			case joaat("LAYOUT_STD_DEITY"):
			case joaat("LAYOUT_STD_GRANGER2"):
			case joaat("LAYOUT_STD_I-WAGEN"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_STD_S95"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_STD_RHINEHART"):
			case joaat("LAYOUT_STANDARD_SENTINEL4"):
			case joaat("LAYOUT_LOW_TORERO2"):
			case joaat("LAYOUT_STD_GREENWOOD"):
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
			case 252076350:
			case 1974176673:
			case 1969797967:
			case -695803320:
			case 117747890:
			case -708773194:
			case 1395235285:
			case -669515817:
			case -1354494188:
			case 234171168:
			case 1433728330:
			case 823386486:
			case 1507183032:
			case -1674546010:
				return 1;
		}
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("slamvan"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("weevil") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("brioso2"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("brioso3"))
			return 1;
	}

	return 0;
}

BOOL func_222(Hash hParam0) // Position - 0x7986 (31110)
{
	switch (hParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return true;
	
		case -1233767450:
		case joaat("pranger"):
		case joaat("Police5"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
		case -1321131184:
		case -1948949064:
		case 2042703219:
		case 1891140410:
			return true;
	}

	return false;
}

int func_223(Hash hParam0, BOOL bParam1) // Position - 0x7A2E (31278)
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0))
		return 0;

	if (func_222(hParam0))
		return 0;

	if (!bParam1)
		if (hParam0 == joaat("police") || hParam0 == joaat("police2") || hParam0 == joaat("police3") || hParam0 == joaat("police4") || hParam0 == joaat("fbi") || hParam0 == joaat("fbi2") || hParam0 == joaat("caddy") || hParam0 == joaat("caddy2"))
			return 0;

	if (hParam0 == joaat("issi2") || hParam0 == joaat("hotknife") || hParam0 == joaat("jb700") || hParam0 == joaat("jester") || hParam0 == joaat("jester2") || hParam0 == joaat("stromberg") || hParam0 == joaat("barrage") || hParam0 == joaat("kamacho") || hParam0 == joaat("gb200") || hParam0 == joaat("fagaloa") || hParam0 == joaat("tezeract") || hParam0 == joaat("swinger") || hParam0 == joaat("imperator") || hParam0 == joaat("locust") || hParam0 == joaat("schlagen") || hParam0 == joaat("outlaw") || hParam0 == joaat("comet7") || hParam0 == joaat("youga4") || hParam0 == joaat("sm722") || hParam0 == -1933242328)
		return 0;

	return 1;
}

void func_224(float fParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x7C11 (31761)
{
	Vehicle vehiclePedIsIn;
	float entitySpeed;
	float vehicleEstimatedMaxSpeed;

	if (!func_270(iLocal_329, 262144))
	{
		if (func_226(uLocal_272[0]))
		{
			if (uLocal_74[0] == 8)
				func_177("SC_STEALC", false, false, false);
			else
				func_175(uLocal_272[0], "GENERIC_SHOCKED_MED", 10);
		
			func_8(&uLocal_247);
			func_28(&iLocal_329, 262144);
		}
	}
	else if (func_4(&uLocal_247) > 10f)
	{
		func_75(&iLocal_329, 262144);
		func_8(&uLocal_247);
	}

	if (fParam0 > 5f || !func_194() || func_270(iLocal_331, 4))
		return;

	if (!func_270(iLocal_329, 1) && !func_270(iLocal_329, 128))
	{
		if (SYSTEM::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				if (func_177("SC_NEAR", false, false, false))
					func_28(&iLocal_329, 1);
			else
				func_28(&iLocal_329, 1);
		
			MISC::CLEAR_AREA_OF_VEHICLES(uLocal_306, 5f, false, false, false, false, false, false, 0);
		}
	}

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		if (!func_270(iLocal_329, 16))
		{
			func_175(uLocal_272[0], "NEED_A_VEHICLE", 10);
			func_28(&iLocal_329, 16);
			func_8(&uLocal_244);
		}
	
		if (!func_270(iLocal_329, 4))
			func_75(&iLocal_329, 4);
	
		if (!func_270(iLocal_329, 8))
			func_75(&iLocal_329, 8);
	}
	else
	{
		entitySpeed = ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn);
		vehicleEstimatedMaxSpeed = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(vehiclePedIsIn);
	
		if (entitySpeed < vehicleEstimatedMaxSpeed * 0.9f || entitySpeed > vehicleEstimatedMaxSpeed * 0.1f)
			func_8(&uLocal_250);
	
		if (!func_270(iLocal_329, 4))
		{
			if (func_4(&uLocal_244) > 15f && func_4(&uLocal_250) > 5f)
			{
				func_175(uLocal_272[0], "DRIVEN_FAST", 10);
				func_28(&iLocal_329, 4);
				func_8(&uLocal_244);
			}
		}
		else if (func_4(&uLocal_244) < 5f)
		{
			func_75(&iLocal_329, 4);
			func_8(&uLocal_244);
		}
	
		if (!func_270(iLocal_329, 8))
		{
			if (func_4(&uLocal_244) > 15f && func_4(&uLocal_250) > 5f)
			{
				func_175(uLocal_272[0], "DRIVEN_SLOW", 10);
				func_28(&iLocal_329, 4);
				func_8(&uLocal_244);
			}
		}
		else if (func_4(&uLocal_244) < 5f)
		{
			func_75(&iLocal_329, 8);
			func_8(&uLocal_244);
		}
	
		if (!func_270(iLocal_329, 131072))
		{
			if (func_225(uLocal_272[0], &iLocal_332))
			{
				if (func_4(&uLocal_247) > 5f)
				{
					func_175(uLocal_272[0], "CRASH_GENERIC_DRIVEN", 10);
					func_28(&iLocal_329, 131072);
					func_8(&uLocal_244);
				}
			}
		}
		else if (func_4(&uLocal_247) > 5f)
		{
			func_75(&iLocal_329, 131072);
			func_8(&uLocal_247);
		}
	
		if (!func_270(iLocal_329, 65536))
		{
			if (func_4(&uLocal_244) > 30f || func_4(&uLocal_244) > 10f && !func_270(iLocal_329, 32))
			{
				func_175(uLocal_272[0], "BOOTY_FLIRT", 10);
				func_28(&iLocal_329, 32);
				func_28(&iLocal_329, 524288);
				func_8(&uLocal_244);
			}
			else if (func_270(iLocal_329, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_272[0]) && func_4(&uLocal_244) > 4f)
				{
					func_175(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					func_75(&iLocal_329, 524288);
				}
			}
		}
	}

	return;
}

BOOL func_225(Ped pedParam0, var uParam1) // Position - 0x7FC7 (32711)
{
	Vehicle vehiclePedIsIn;
	int entityHealth;
	int num;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, vehiclePedIsIn))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(vehiclePedIsIn))
			{
				entityHealth = ENTITY::GET_ENTITY_HEALTH(vehiclePedIsIn);
				num = *uParam1 - entityHealth;
				*uParam1 = entityHealth;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(vehiclePedIsIn);
			
				if (num > 10)
					return true;
			}
		}
	}

	return false;
}

BOOL func_226(Entity eParam0) // Position - 0x8020 (32800)
{
	if (!ENTITY::IS_ENTITY_DEAD(eParam0, false))
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_CAR_STOLEN, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(eParam0, PLAYER::PLAYER_PED_ID()))
			return true;

	return false;
}

void func_227() // Position - 0x805E (32862)
{
	func_89();
	func_8(&uLocal_244);

	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_278))
			HUD::REMOVE_BLIP(&blLocal_278);
	
		if (!HUD::DOES_BLIP_EXIST(blLocal_279))
			blLocal_279 = func_64(uLocal_309, false);
	
		func_8(&uLocal_256);
		uLocal_318 = { ENTITY::GET_ENTITY_COORDS(uLocal_272[0], true) };
		iLocal_76 = 4;
	}
	else
	{
		func_8(&uLocal_247);
		func_63(uLocal_306);
		iLocal_76 = 5;
	}

	return;
}

void func_228() // Position - 0x80D3 (32979)
{
	if (!func_270(iLocal_329, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_229(uLocal_74[0]))
			{
				if (!func_173())
				{
					func_175(uLocal_272[0], "NICE_CAR", 10);
					func_28(&iLocal_329, 1024);
				}
			}
		}
	}

	return;
}

BOOL func_229(int iParam0) // Position - 0x8132 (33074)
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
	
		if (func_230(iParam0, entityModel))
			return true;
	}

	return false;
}

BOOL func_230(int iParam0, Hash hParam1) // Position - 0x8167 (33127)
{
	switch (hParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
				return true;
			break;
	
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
				return true;
			break;
	
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
				return true;
			break;
	
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
				return true;
			break;
	
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
				return true;
			break;
	
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
				return true;
			break;
	
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
				return true;
			break;
	
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
				return true;
			break;
	}

	return false;
}

void func_231(int iParam0, BOOL bParam1) // Position - 0x83D6 (33750)
{
	if (bParam1)
		if (!func_238(iParam0, 2, true))
			func_237(iParam0, 2, true);
	else if (func_238(iParam0, 2, true))
		func_232(iParam0, 2, true);

	return;
}

void func_232(int iParam0, int iParam1, BOOL bParam2) // Position - 0x840D (33805)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_101765.f_1421[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_55() == 0)
		{
			address = func_235(func_236(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_233(func_236(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_114162.f_668[iParam0], iParam1);
	}

	return;
}

void func_233(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x847D (33917)
{
	Hash statName;

	if (iParam0 != 17239)
	{
		statName = func_234(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_234(int iParam0, int iParam1) // Position - 0x84AB (33963)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_78(iParam1));
}

int func_235(int iParam0, int iParam1) // Position - 0x84C0 (33984)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17239)
	{
		statHash = func_234(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_236(int iParam0) // Position - 0x84EF (34031)
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 13519;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		case 61:
			return 12447;
	
		default:
			break;
	}

	return 17239;
}

void func_237(int iParam0, int iParam1, BOOL bParam2) // Position - 0x88A6 (34982)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_101765.f_1421[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_55() == 0)
		{
			address = func_235(func_236(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_233(func_236(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_114162.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_238(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8916 (35094)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101765.f_1421[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_55() == 0)
			return IS_BIT_SET(func_235(func_236(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114162.f_668[iParam0], iParam1);

	return false;
}

void func_239() // Position - 0x8976 (35190)
{
	if (uLocal_74[0] == 8)
		func_177("SC_GREET", false, false, false);
	else
		func_175(uLocal_272[0], "GENERIC_HI_FLIRTY", 10);

	return;
}

void func_240() // Position - 0x89A7 (35239)
{
	if (!PED::IS_PED_IN_GROUP(uLocal_272[0]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_272[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(uLocal_272[0], func_241());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_272[0], 0);
	}

	return;
}

int func_241() // Position - 0x89F9 (35321)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

float func_242(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x8A09 (35337)
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

BOOL func_243(Ped pedParam0, var uParam1, int* piParam2) // Position - 0x8A67 (35431)
{
	var unk;
	Vehicle vehiclePedIsIn;

	if (!func_10(piParam2))
		func_7(piParam2);

	if (func_4(piParam2) > 3f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_246(pedParam0, vehiclePedIsIn, uParam1, &unk, false, true, false, true, true))
		{
			func_244(&unk);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
				{
					if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(hLocal_70))
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &hLocal_70);
				
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_70, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), hLocal_70);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, hLocal_70);
					TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
		
			func_8(piParam2);
			return true;
		}
	}

	return false;
}

void func_244(var uParam0) // Position - 0x8B21 (35617)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_245(true);
			break;
	
		case 2:
			break;
	}

	return;
}

void func_245(BOOL bParam0) // Position - 0x8B54 (35668)
{
	Global_113155 = 0;
	Global_113155.f_1 = -1;
	Global_113155.f_2 = -1;

	if (bParam0)
		func_126(-1);

	return;
}

BOOL func_246(Ped pedParam0, Vehicle veParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x8B79 (35705)
{
	Ped entity2;
	BOOL flag;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::IS_ENTITY_DEAD(entity2, false) && !ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		if (!func_270(*uParam2, 1))
		{
			if (func_253(pedParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
	
		if (!func_270(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
	
		if (!func_270(*uParam2, 4))
		{
			if (func_251(entity2, pedParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
	
		if (!func_270(*uParam2, 8))
		{
			if (func_250(entity2, pedParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
	
		flag = !func_270(*uParam2, 128);
	
		if (bParam4)
		{
			if (func_247(pedParam0, veParam1, true, bParam6, flag, true))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_270(*uParam2, 16))
		{
			if (func_247(pedParam0, veParam1, false, bParam6, flag, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (bParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true))
		{
			*uParam3 = 16;
			return true;
		}
	}

	return false;
}

BOOL func_247(Ped pedParam0, Vehicle veParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8CA3 (36003)
{
	Vehicle playersLastVehicle;
	Vehicle playersLastVehicle2;

	if (bParam3)
	{
		if (!bLocal_57)
		{
			iLocal_58 = ENTITY::GET_ENTITY_HEALTH(pedParam0);
			bLocal_57 = true;
		}
	
		iLocal_59 = ENTITY::GET_ENTITY_HEALTH(pedParam0);
		iLocal_60 = iLocal_58 - iLocal_59;
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true))
				if ((float)iLocal_60 > 100f)
					return true;
	
		if (bLocal_57)
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
				if ((float)iLocal_60 > 100f)
					return true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}

	if (!bParam3)
	{
		playersLastVehicle2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle2, false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle2, true))
				return true;
	}

	if (bParam4)
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			if (PED::IS_PED_BEING_JACKED(pedParam0))
				if (PED::GET_PEDS_JACKER(pedParam0) == PLAYER::PLAYER_PED_ID())
					return true;

	if (bParam5)
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_COORD(pedParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
					return true;

	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		if (PED::WAS_PED_KILLED_BY_STEALTH(pedParam0))
			return true;

	if (func_249(PLAYER::PLAYER_PED_ID(), pedParam0))
		return true;

	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(pedParam0) && func_248(pedParam0, true) < 1.5f)
			return true;
		else if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(pedParam0, false)))
				return true;
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			return true;
	
		if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veParam1, PLAYER::PLAYER_PED_ID(), true))
				return true;
	}

	return false;
}

float func_248(Ped pedParam0, BOOL bParam1) // Position - 0x8E6B (36459)
{
	return func_242(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), pedParam0, bParam1);
}

BOOL func_249(Ped pedParam0, Ped pedParam1) // Position - 0x8E83 (36483)
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);

	if (weaponHash == joaat("WEAPON_PETROLCAN"))
		if (PED::IS_PED_SHOOTING(pedParam0))
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), ENTITY::GET_ENTITY_COORDS(pedParam1, true)) < 2.5f)
				if (PED::IS_PED_FACING_PED(pedParam0, pedParam1, 180f))
					return true;

	return false;
}

BOOL func_250(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x8ED8 (36568)
{
	if (WEAPON::IS_PED_ARMED(pedParam0, 4))
		if (PED::IS_PED_SHOOTING(pedParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(pedParam0))
			if (ENTITY::IS_ENTITY_AT_COORD(pedParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true), (float)uParam2->f_4, (float)uParam2->f_4, (float)uParam2->f_4, false, true, 0))
				return true;

	return false;
}

BOOL func_251(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0x8F26 (36646)
{
	float entityCoords;
	Vehicle vehiclePedIsIn;

	vehiclePedIsIn = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };

	if (MISC::IS_BULLET_IN_AREA(entityCoords, 4f, true))
		return true;

	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(entityCoords, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
		return true;

	if (WEAPON::IS_PED_ARMED(pedParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(pedParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(pedParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true), (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, false, true, 0))
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), pedParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, pedParam0, 17))
					return true;
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), false))
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), false);
		
			if (PED::IS_PED_PLANTING_BOMB(pedParam0) || func_252(vehiclePedIsIn))
				if (ENTITY::IS_ENTITY_AT_COORD(pedParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true), (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, false, true, 0))
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), pedParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, pedParam0, 17))
						return true;
		}
	}

	if (bParam3)
		if (MISC::IS_PROJECTILE_IN_AREA(entityCoords - (float)uParam2->f_6, entityCoords.f_1 - (float)uParam2->f_6, entityCoords.f_2 - (float)uParam2->f_6, entityCoords + (float)uParam2->f_6, entityCoords.f_1 + (float)uParam2->f_6, entityCoords.f_2 + (float)uParam2->f_6, false))
			return true;

	return false;
}

BOOL func_252(Vehicle veParam0) // Position - 0x909F (37023)
{
	int weaponHash;
	Entity entity;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false) != 0)
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
					if (weaponHash == joaat("WEAPON_STICKYBOMB"))
						if (func_242(PLAYER::PLAYER_PED_ID(), veParam0, true) < 40f)
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
								if (ENTITY::IS_ENTITY_A_VEHICLE(entity) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entity) == veParam0 || ENTITY::IS_ENTITY_A_PED(entity) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false))
									if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ATTACK) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK))
										return true;

	return false;
}

BOOL func_253(Ped pedParam0, var uParam1) // Position - 0x916D (37229)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
				if (PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 90f))
					if (func_248(pedParam0, true) < uParam1->f_2)
						if (uParam1->f_1 == 0)
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						else if (MISC::GET_GAME_TIMER() - uParam1->f_1 > uParam1->f_3)
							return true;

	return false;
}

void func_254(int iParam0) // Position - 0x91F2 (37362)
{
	var gxtEntry;

	if (HUD::DOES_BLIP_EXIST(uLocal_280[iParam0]))
		HUD::REMOVE_BLIP(&uLocal_280[iParam0]);

	uLocal_280[iParam0] = func_255(uLocal_272[iParam0], false, 145);
	gxtEntry = { func_73(uLocal_74[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_280[iParam0], &gxtEntry);
	return;
}

Blip func_255(Entity eParam0, BOOL bParam1, int iParam2) // Position - 0x9243 (37443)
{
	Blip blip;

	blip = func_256(eParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2201[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2201[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_256(Entity eParam0, BOOL bParam1, BOOL bParam2) // Position - 0x928D (37517)
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(eParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(eParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(eParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(eParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

BOOL func_257(Ped pedParam0, BOOL bParam1) // Position - 0x9331 (37681)
{
	Vector3 entityCoords;
	Vector3 entityCoords2;
	Vehicle vehiclePedIsIn;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (PED::GET_PED_GROUP_INDEX(pedParam0) == func_241())
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_IN_VEHICLE(pedParam0, vehiclePedIsIn, false) && SYSTEM::VDIST(entityCoords, entityCoords2) > 10f)
					return true;
	}

	if (bParam1 && func_270(iLocal_331, 2))
	{
		num = MISC::ABSF(entityCoords.f_2 - entityCoords2.f_2);
	
		if (num > 8f)
			return true;
	}

	return false;
}

void func_258() // Position - 0x93D8 (37848)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			func_198(uLocal_272[0], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}

	return;
}

void func_259() // Position - 0x9428 (37928)
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_260();
	return;
}

void func_260() // Position - 0x9438 (37944)
{
	Global_23848.f_134 = 1;
	return;
}

Hash func_261(int iParam0, BOOL bParam1) // Position - 0x9446 (37958)
{
	if (iParam0 == 0)
		if (bParam1)
			return joaat("CSB_Stripper_01");
		else
			return joaat("S_F_Y_Stripper_01");
	else if (iParam0 == 1)
		if (bParam1)
			return joaat("CSB_Stripper_02");
		else
			return joaat("S_F_Y_Stripper_02");

	return 0;
}

void func_262(BOOL bParam0) // Position - 0x948E (38030)
{
	var unk;

	if (!func_167(iLocal_71))
	{
		iLocal_71 = func_171();
		func_161(&iLocal_71, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_270(iLocal_331, 512))
		{
			if (func_269(iLocal_71) && ENTITY::IS_ENTITY_OCCLUDED(uLocal_272[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk, "SC_CANCEL_", 64);
					TEXT_LABEL_APPEND_INT(&unk, uLocal_74[0], 64);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 1, 0, func_196(uLocal_74[0]), 0, 1);
					func_268(&uLocal_79, func_114(uLocal_74[0]), "SHAUD", &unk, 7, 0, 0, true);
				}
				else
				{
					func_266();
				}
			
				func_265(uLocal_272[0]);
				func_28(&iLocal_331, 512);
			}
		}
		else if (func_264())
		{
			func_75(&iLocal_331, 512);
		}
		else if (!func_173() && func_263() && !func_264())
		{
			func_245(true);
			func_68(2);
		}
	}

	return;
}

BOOL func_263() // Position - 0x9593 (38291)
{
	if (Global_22442 == 0)
		return true;

	return false;
}

BOOL func_264() // Position - 0x95AA (38314)
{
	if (Global_22491 == 1 || Global_23458 == 1)
		return true;

	return false;
}

void func_265(Ped pedParam0) // Position - 0x95CD (38349)
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(pedParam0, true);
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_337);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_337);
			TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_303, 1.5f, -1, 0.25f, 0, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_337);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_337);
		}
	}

	return;
}

void func_266() // Position - 0x9636 (38454)
{
	int num;

	if (func_267())
		return;

	num = func_117(uLocal_74[0]);
	func_111(-384575792, num, 6, 3, func_115(), func_114(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
	return;
}

BOOL func_267() // Position - 0x9677 (38519)
{
	if (func_55() == 0)
		return true;

	return false;
}

int func_268(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x968C (38540)
{
	func_191(uParam0, echParam1, sParam2, iParam5, iParam6, 0);
	Global_22490 = 1;
	Global_22449 = true;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_22447 = 0;
	Global_22494 = 0;
	Global_22496 = 0;
	Global_2883585 = 0;
	return func_179(sParam3, iParam4, bParam7);
}

BOOL func_269(int iParam0) // Position - 0x96DA (38618)
{
	return func_166(func_171(), iParam0);
}

BOOL func_270(int iParam0, int iParam1) // Position - 0x96EC (38636)
{
	return iParam0 && iParam1 != false;
}

BOOL func_271(var uParam0, BOOL bParam1) // Position - 0x96FB (38651)
{
	Vector3 vector;
	float heading;
	int num;
	var unk3;
	var unk19;
	var unk35;

	func_299();
	func_66(&vector, &heading, bParam1);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fLocal_327 == -1f)
			fLocal_327 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector);
	
		if (iLocal_330 == -1)
			iLocal_330 = uParam0->f_3;
	
		if (!func_270(iLocal_331, 32))
		{
			func_295(&uLocal_276, func_297(uParam0->[0], false));
			func_294(&uLocal_276);
			func_28(&iLocal_331, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_293();
			return false;
		}
		else if (!func_292(&uLocal_276) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper") || !func_291())
		{
			return false;
		}
	
		if (bLocal_335)
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				return false;
	
		if (!func_270(iLocal_331, 1024))
		{
			uLocal_74[0] = uParam0->[0];
			uLocal_272[0] = PED::CREATE_PED(PED_TYPE_MISSION, func_297(uParam0->[0], false), vector, heading, true, true);
			func_285(uLocal_272[0], uLocal_74[0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_272[num], true);
			PED::SET_PED_KEEP_TASK(uLocal_272[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(uLocal_272[0], true);
			func_281(uLocal_272[0]);
			TASK::TASK_PLAY_ANIM(uLocal_272[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_272[num], PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_272[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_272[0], func_196(uParam0->[0]));
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 1, uLocal_272[0], func_196(uParam0->[0]), 0, 1);
			func_28(&iLocal_331, 1024);
		}
	
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector) > 100f)
		{
			if (func_194())
			{
				if (!func_270(iLocal_331, 1))
				{
					func_280(bParam1);
					func_254(0);
					func_28(&iLocal_331, 1);
				}
			}
		
			if (!func_270(iLocal_331, 64) && !func_270(iLocal_331, 512))
			{
				if (func_279(func_114(uParam0->[0])))
				{
					TEXT_LABEL_ASSIGN_STRING(&unk3, "BC_PLYRC_", 64);
				
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
					{
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						TEXT_LABEL_APPEND_STRING(&unk3, "T", 64);
					}
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					{
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						TEXT_LABEL_APPEND_STRING(&unk3, "M", 64);
					}
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
					{
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						TEXT_LABEL_APPEND_STRING(&unk3, "F", 64);
					}
				
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 3, 0, func_196(uParam0->[0]), 0, 1);
					unk19 = { func_278() };
					func_273(&uLocal_79, func_114(uParam0->[0]), "BCAUD", &unk3, &unk3, &unk19, &unk19, 12, 1, 0, 0, false);
					func_28(&iLocal_331, 64);
				}
			
				if (func_167(iLocal_71))
				{
					if (func_269(iLocal_71))
					{
						if (uParam0->[0] == 8 || uParam0->[0] == 9)
						{
							TEXT_LABEL_ASSIGN_STRING(&unk35, "SC_CANCEL_", 64);
							TEXT_LABEL_APPEND_INT(&unk35, uParam0->[0], 64);
							_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 1, 0, func_196(uParam0->[0]), 0, 1);
							func_268(&uLocal_79, func_114(uParam0->[0]), "SHAUD", &unk35, 12, 0, 0, true);
						}
						else
						{
							func_266();
						}
					
						func_28(&iLocal_331, 512);
					}
				}
			}
			else if (func_264())
			{
				func_75(&iLocal_331, 64);
				func_75(&iLocal_331, 512);
			}
			else if (!func_173() && func_263() && !func_264())
			{
				func_272(uParam0->[0]);
				func_245(true);
				func_68(2);
			}
		
			if (!func_270(iLocal_331, 128))
			{
				if (!func_34(0))
				{
					func_69("SCLUB_HOME_C_H" /*To cancel the booty call, call ~a~ back.*/, uLocal_74[0], false);
					func_28(&iLocal_331, 128);
				}
			}
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector) > fLocal_327 + (200f * 3f))
				func_68(1);
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector) < fLocal_327)
				fLocal_327 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector);
		
			return false;
		}
	}
	else
	{
		return false;
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);

	return true;
}

void func_272(int iParam0) // Position - 0x9B7E (39806)
{
	if (Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
		Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;

	Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 = Global_114162.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 + 1;
	return;
}

int func_273(var uParam0, eCharacter echParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11) // Position - 0x9BDD (39901)
{
	var unk;
	var unk12;

	func_191(uParam0, echParam1, sParam2, iParam9, iParam10, 0);
	func_277();

	if (iParam8 == 1)
		Global_22454 = 1;
	else
		Global_22454 = 0;

	unk = 10;
	unk12 = 10;
	func_275(2, &unk, &unk12, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_274(&unk, &unk12, iParam7, bParam11);
}

int func_274(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x9C3C (39996)
{
	int i;

	Global_22443 = 0;

	if (Global_22442 == 0 || Global_22444 == 2)
	{
		if (Global_22442 != 0)
		{
			if (iParam2 > Global_22444)
			{
				if (bParam3 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21083.f_1 = 3;
					Global_22442 = 0;
					Global_22443 = 1;
					Global_22495 = 0;
					Global_22438 = 0;
					Global_22439 = 0;
				}
				else
				{
					func_190();
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
	
		if (func_189(8, -1))
			return 0;
	
		Global_22518 = { Global_22512 };
		func_188();
		Global_21731 = { Global_21896 };
		Global_22448 = Global_22449;
		Global_22455 = Global_22456;
		Global_2883586 = Global_2883585;
		Global_22457 = { Global_22473 };
		Global_22450 = Global_22451;
		Global_23432 = Global_23433;
		Global_23440 = { Global_23446 };
		Global_23438 = Global_23439;
		Global_23434 = Global_23435;
		Global_23436 = Global_23437;
		Global_22061.f_368 = Global_23429;
		Global_22061.f_369 = Global_23430;
		Global_22061.f_370 = Global_23431;
		Global_22438 = Global_22439;
		Global_22440 = Global_22441;
	
		if (Global_22700 == 0)
		{
			Global_22596[0 /*6*/] = { Global_22622[0 /*6*/] };
			Global_22596[1 /*6*/] = { Global_22622[1 /*6*/] };
			Global_22648[0 /*6*/] = { Global_22674[0 /*6*/] };
			Global_22648[1 /*6*/] = { Global_22674[1 /*6*/] };
			Global_22609[0 /*6*/] = { Global_22635[0 /*6*/] };
			Global_22609[1 /*6*/] = { Global_22635[1 /*6*/] };
			Global_22661[0 /*6*/] = { Global_22687[0 /*6*/] };
			Global_22661[1 /*6*/] = { Global_22687[1 /*6*/] };
		}
	
		if (Global_22448)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
		
			if (bParam3)
			{
				func_136();
			
				if (Global_9758[Global_21083 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21083.f_1 > 3)
					return 0;
			}
		
			if (Global_21049 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_187())
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_79564)
				{
					if (Global_22700 == 0)
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
			}
		
			if (func_24())
			{
				return 0;
			}
			else
			{
				switch (Global_21083.f_1)
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
			}
		
			func_186();
			Global_22452 = bParam3;
		}
	
		Global_22444 = iParam2;
	
		if (Global_22438 > 0)
		{
			for (i = 0; i < Global_22438; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_22061.f_6[i /*6*/], uParam0->[i], 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_22061.f_187[i /*6*/], uParam1->[i], 24);
			}
		}
	
		Global_21308 = 0;
		func_185();
		return 1;
	}

	if (Global_22442 == 5)
		return 0;

	if (iParam2 < Global_22444 || iParam2 == Global_22444)
		return 0;

	if (iParam2 == 2)
	{
	}
	else
	{
		func_190();
	}

	return 0;
}

void func_275(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) // Position - 0x9FA7 (40871)
{
	func_276(iParam0);
	uParam1->[0] = uParam3;
	uParam2->[0] = uParam4;
	uParam1->[1] = uParam5;
	uParam2->[1] = uParam6;
	uParam1->[2] = iParam7;
	uParam2->[2] = iParam8;
	uParam1->[3] = iParam9;
	uParam2->[3] = iParam10;
	uParam1->[4] = iParam11;
	uParam2->[4] = iParam12;
	uParam1->[5] = iParam13;
	uParam2->[5] = iParam14;
	uParam1->[6] = iParam15;
	uParam2->[6] = iParam16;
	return;
}

void func_276(int iParam0) // Position - 0xA017 (40983)
{
	Global_22439 = iParam0;
	Global_22449 = 1;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 0;
	Global_23439 = 0;
	Global_2883585 = 0;
	return;
}

void func_277() // Position - 0xA03D (41021)
{
	Global_22490 = 0;
	Global_22449 = 1;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_22456 = 0;
	Global_23439 = 0;
	Global_22447 = 0;
	Global_22494 = 0;
	Global_22496 = 0;
	Global_2883585 = 0;
	return;
}

struct<16> func_278() // Position - 0xA076 (41078)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "BC_DECR_", 64);
	TEXT_LABEL_APPEND_INT(&unk, uLocal_74[0], 64);
	return unk;
}

BOOL func_279(eCharacter echParam0) // Position - 0xA094 (41108)
{
	if (Global_23556 || Global_23555 || Global_23557)
	{
		if (echParam0 == _CHAR_TAXI_IS)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_120[echParam0 /*10*/].f_8 != 184)
		if (Global_21083.f_1 == 10)
			if (Global_8234 == echParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

void func_280(BOOL bParam0) // Position - 0xA0F8 (41208)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
				func_86("SCLUB_HOME_MEE4" /*Meet ~b~~a~~s~ at her home.*/, uLocal_74[0]);
			else
				func_86("SCLUB_HOME_MEET" /*Meet ~b~~a~~s~ behind the club.*/, uLocal_74[0]);
			break;
	
		case 8:
			func_86("SCLUB_HOME_LIZ" /*Meet ~b~~a~~s~ at the college.*/, uLocal_74[0]);
			break;
	
		case 9:
			func_86("SCLUB_HOME_HITCH" /*Meet ~b~~a~~s~ at the marina.*/, uLocal_74[0]);
			break;
	}

	return;
}

void func_281(Ped pedParam0) // Position - 0xA18B (41355)
{
	if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("S_F_Y_Stripper_02"))
	{
		func_284(pedParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_283(pedParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_282(pedParam0, 0, 0);
	}

	return;
}

void func_282(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA1C3 (41411)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_FEET, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_FEET, iParam1, iParam2, 0);

	return;
}

void func_283(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA1E8 (41448)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_UPPR, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, iParam1, iParam2, 0);

	return;
}

void func_284(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA20D (41485)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_ACCS, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_ACCS, iParam1, iParam2, 0);

	return;
}

void func_285(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0xA234 (41524)
{
	BOOL flag;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(pedParam0);
		flag = false;
	
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_F_StripperLite"))
			flag = true;
	
		switch (iParam1)
		{
			case 0:
				if (flag)
				{
					func_290(pedParam0, 1, 0);
					func_289(pedParam0, 1, 0);
					func_283(pedParam0, 1, 0);
					func_288(pedParam0, 1, 0);
					func_287(pedParam0, true, -1, -1);
				}
				else
				{
					func_290(pedParam0, 1, 1);
					func_289(pedParam0, 2, 0);
					func_283(pedParam0, 0, 0);
					func_288(pedParam0, 0, 0);
					func_284(pedParam0, 1, 0);
					func_286(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, -1, -1);
				}
				break;
		
			case 1:
				if (flag)
				{
					func_290(pedParam0, 0, 0);
					func_289(pedParam0, 0, 0);
					func_283(pedParam0, 0, 0);
					func_288(pedParam0, 0, 0);
					func_284(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(pedParam0, 0, 0);
					func_289(pedParam0, 0, 0);
					func_283(pedParam0, 0, 0);
					func_288(pedParam0, 0, 0);
					func_282(pedParam0, 4, 0);
					func_284(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, 0, 4);
				}
				break;
		
			case 2:
				if (flag)
				{
					func_290(pedParam0, 1, 0);
					func_289(pedParam0, 1, 1);
					func_283(pedParam0, 1, 0);
					func_288(pedParam0, 1, 0);
					func_287(pedParam0, true, -1, -1);
				}
				else
				{
					func_290(pedParam0, 0, 1);
					func_289(pedParam0, 1, 1);
					func_283(pedParam0, 1, 0);
					func_288(pedParam0, 1, 1);
					func_284(pedParam0, 1, 0);
					func_286(pedParam0, 1, 0);
					func_287(pedParam0, bParam2, -1, -1);
				}
				break;
		
			case 3:
				if (flag)
				{
					func_290(pedParam0, 0, 0);
					func_289(pedParam0, 0, 1);
					func_283(pedParam0, 0, 1);
					func_288(pedParam0, 0, 1);
					func_284(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(pedParam0, 0, 0);
					func_289(pedParam0, 2, 0);
					func_283(pedParam0, 0, 2);
					func_288(pedParam0, 1, 1);
					func_282(pedParam0, 0, 0);
					func_284(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, 2, 0);
				}
				break;
		
			case 4:
				if (flag)
				{
					func_290(pedParam0, 1, 0);
					func_289(pedParam0, 1, 0);
					func_283(pedParam0, 1, 0);
					func_288(pedParam0, 1, 0);
					func_287(pedParam0, true, -1, -1);
				}
				else
				{
					func_290(pedParam0, 1, 0);
					func_289(pedParam0, 2, 1);
					func_283(pedParam0, 1, 2);
					func_288(pedParam0, 0, 2);
					func_284(pedParam0, 1, 0);
					func_286(pedParam0, 1, 2);
					func_287(pedParam0, bParam2, -1, -1);
				}
				break;
		
			case 5:
				if (flag)
				{
					func_290(pedParam0, 0, 0);
					func_289(pedParam0, 0, 0);
					func_283(pedParam0, 0, 0);
					func_288(pedParam0, 0, 0);
					func_284(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(pedParam0, 1, 1);
					func_289(pedParam0, 1, 0);
					func_283(pedParam0, 0, 1);
					func_288(pedParam0, 0, 2);
					func_282(pedParam0, 2, 0);
					func_284(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, 1, 2);
				}
				break;
		
			case 6:
				if (flag)
				{
					func_290(pedParam0, 1, 0);
					func_289(pedParam0, 1, 0);
					func_283(pedParam0, 1, 0);
					func_288(pedParam0, 1, 0);
					func_287(pedParam0, true, -1, -1);
				}
				else
				{
					func_290(pedParam0, 0, 0);
					func_289(pedParam0, 1, 0);
					func_283(pedParam0, 0, 1);
					func_288(pedParam0, 0, 1);
					func_284(pedParam0, 1, 0);
					func_286(pedParam0, 0, 1);
					func_287(pedParam0, bParam2, 0, 1);
				}
				break;
		
			case 7:
				if (flag)
				{
					func_290(pedParam0, 0, 0);
					func_289(pedParam0, 0, 1);
					func_283(pedParam0, 0, 0);
					func_288(pedParam0, 0, 0);
					func_284(pedParam0, 0, 0);
					func_287(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(pedParam0, 1, 0);
					func_289(pedParam0, 0, 2);
					func_283(pedParam0, 1, 1);
					func_288(pedParam0, 0, 1);
					func_282(pedParam0, 0, 0);
					func_284(pedParam0, 1, 0);
					func_287(pedParam0, bParam2, 0, 0);
				}
				break;
		
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 1, 0);
				break;
		
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HAIR, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_ACCS, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_DECL, 0, 0, 0);
				break;
		}
	}

	return;
}

void func_286(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA68F (42639)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_JBIB, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_JBIB, iParam1, iParam2, 0);

	return;
}

void func_287(Ped pedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xA6B6 (42678)
{
	Hash entityModel;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (entityModel == func_261(0, false) || entityModel == func_261(0, true))
	{
		if (bParam1)
		{
			func_283(pedParam0, 2, 0);
			func_284(pedParam0, 1, 0);
		}
	}
	else if (entityModel == func_261(1, false) || entityModel == func_261(1, true))
	{
		if (bParam1)
		{
			func_283(pedParam0, 0, iParam2);
			func_282(pedParam0, iParam3, 0);
			func_284(pedParam0, 1, 0);
		}
	}
	else if (entityModel == joaat("MP_F_StripperLite"))
	{
		if (bParam1)
			func_284(pedParam0, 1, 0);
	}

	return;
}

void func_288(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA75A (42842)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_LOWR, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, iParam1, iParam2, 0);

	return;
}

void func_289(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA77F (42879)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_HAIR, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HAIR, iParam1, iParam2, 0);

	return;
}

void func_290(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA7A4 (42916)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_HEAD, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, iParam1, iParam2, 0);

	return;
}

BOOL func_291() // Position - 0xA7C9 (42953)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
		return true;
	else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_206()))
		return true;

	return false;
}

BOOL func_292(var uParam0) // Position - 0xA7F6 (42998)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->[i]))
			{
				!STREAMING::HAS_MODEL_LOADED(uParam0->[i]);
				return false;
			}
		}
	}

	return true;
}

void func_293() // Position - 0xA83D (43069)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
		TASK::REQUEST_WAYPOINT_RECORDING(func_206());

	return;
}

void func_294(var uParam0) // Position - 0xA859 (43097)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			STREAMING::REQUEST_MODEL(uParam0->[i]);
	}

	return;
}

int func_295(var uParam0, int iParam1) // Position - 0xA889 (43145)
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			if (uParam0->[i] == iParam1)
				return 0;
	}

	num = func_296(uParam0);

	if (num < 0 || num >= *uParam0)
		return 0;

	uParam0->[num] = iParam1;
	return 1;
}

int func_296(var uParam0) // Position - 0xA8E6 (43238)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == 0)
			return i;
	}

	return -1;
}

Hash func_297(var uParam0, BOOL bParam1) // Position - 0xA912 (43282)
{
	eCharacter num;

	if (bParam1)
		return joaat("MP_F_StripperLite");

	num = func_114(uParam0);

	if (num != _CHAR_NULL)
		return func_298(num);

	return func_261(0, false);
}

Hash func_298(eCharacter echParam0) // Position - 0xA945 (43333)
{
	if (!func_82(echParam0))
		return func_85(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}

void func_299() // Position - 0xA96B (43371)
{
	switch (uLocal_74[0])
	{
		case 1:
			uLocal_300 = { 128.1002f, -1895.0007f, 22.4811f };
			uLocal_303 = { 128.1059f, -1896.8188f, 22.6792f };
			uLocal_306 = { 133.9411f, -1881.8903f, 22.5257f };
			uLocal_309 = { 130.1663f, -1893.0575f, 22.3748f };
			uLocal_312 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_324 = 330.5705f;
			fLocal_325 = 244f;
			uLocal_321 = { 146.293f, -1888.0493f, 22.2193f };
			fLocal_326 = fLocal_325;
			break;
	
		case 0:
			uLocal_300 = { -161.9628f, -1636.501f, 33.0339f };
			uLocal_303 = { -159.9415f, -1637.307f, 33.0339f };
			uLocal_306 = { -178.6316f, -1629.5216f, 32.1789f };
			uLocal_309 = { -166.1453f, -1633.1024f, 32.6574f };
			uLocal_312 = { -166.6636f, -1633.2289f, 32.6567f };
			fLocal_324 = 108.072f;
			fLocal_325 = 180.9811f;
			uLocal_321 = { uLocal_306 };
			fLocal_326 = fLocal_325;
			break;
	
		case 4:
			uLocal_300 = { -198.3824f, 87.8785f, 68.7436f };
			uLocal_303 = { -197.2292f, 86.3497f, 68.7561f };
			uLocal_306 = { -200.9078f, 113.537f, 68.5518f };
			uLocal_309 = { -200.1384f, 96.9809f, 68.5203f };
			uLocal_312 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_324 = 48.99f;
			fLocal_325 = 64.3f;
			uLocal_321 = { uLocal_306 };
			fLocal_326 = fLocal_325;
			break;
	
		case 5:
			uLocal_300 = { -849.0348f, 510.6906f, 89.8218f };
			uLocal_303 = { -849.0408f, 508.5767f, 89.8218f };
			uLocal_306 = { -846.1005f, 520.2202f, 89.6217f };
			uLocal_309 = { -851.8972f, 512.73f, 89.6217f };
			uLocal_312 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_324 = 92.365f;
			fLocal_325 = 293f;
			uLocal_321 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_326 = fLocal_325;
			break;
	
		case 8:
			uLocal_300 = { -28.2427f, -1555.8925f, 29.6918f };
			uLocal_303 = { -24.8589f, -1556.8461f, 29.6819f };
			uLocal_306 = { -41.8174f, -1575.6086f, 28.2831f };
			uLocal_309 = { -25.3404f, -1556.3406f, 29.6919f };
			uLocal_312 = { -27.7382f, -1570.5724f, 29.3f };
			fLocal_324 = 181.352f;
			fLocal_325 = 47.9206f;
			uLocal_321 = { uLocal_306 };
			fLocal_326 = fLocal_325;
			break;
	
		case 9:
			uLocal_300 = { 3313.487f, 5175.8306f, 18.619f };
			uLocal_303 = { 3310.8157f, 5176.3306f, 18.619f };
			uLocal_306 = { 3334.3206f, 5161.122f, 17.2996f };
			uLocal_309 = { 3317.7876f, 5171.707f, 17.4471f };
			uLocal_312 = { 3318.0757f, 5171.805f, 17.4385f };
			fLocal_324 = 236.4579f;
			uLocal_321 = { 3322.9268f, 5148.6074f, 17.3141f };
			fLocal_326 = 310.8648f;
			break;
	}

	return;
}

int func_300() // Position - 0xACE3 (44259)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_335)
				return 1;
			else
				return 0;
			break;
	
		default:
			return 0;
	}

	return 0;
}

int func_301(int iParam0, int iParam1, BOOL bParam2) // Position - 0xAD41 (44353)
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_305();
			else
				return 0;
	
		if (!func_304(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_305();
					else
						return 0;
			
				if (func_303())
					if (!bParam2)
						func_305();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bParam2)
						func_305();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_305();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574667 = i;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_305();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_305();
		else
			return 0;

	return 1;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0xAE57 (44631)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_303() // Position - 0xAE6E (44654)
{
	return Global_2684721.f_695;
}

BOOL func_304(BOOL bParam0) // Position - 0xAE7D (44669)
{
	bParam0;
	return Global_1575058;
}

void func_305() // Position - 0xAE8E (44686)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_306() // Position - 0xAE9A (44698)
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_88();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_299, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_306 - { 3f, 3f, 3f }, uLocal_306 + { 3f, 3f, 3f }, true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uLocal_306 - { 3f, 3f, 3f }, uLocal_306 + { 3f, 3f, 3f }, 15f, 1);

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_272[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_272[0], false))
		{
			if (!func_270(iLocal_331, 8192))
				TASK::TASK_WANDER_STANDARD(uLocal_272[0], 1193033728, 0);
		
			PED::SET_PED_KEEP_TASK(uLocal_272[0], true);
		
			if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(hLocal_70))
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &hLocal_70);
		
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_70, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), hLocal_70);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_272[0], hLocal_70);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_272[0]);
	}

	if (iLocal_330 != -1)
		func_308(&iLocal_330);

	if (bLocal_69)
		func_145(&uLocal_68);

	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	func_125(uLocal_74[0], -1);
	Global_113155 = 0;
	func_307(false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_307(BOOL bParam0) // Position - 0xAFD2 (45010)
{
	int i;

	for (i = 0; i < 62; i = i + 1)
	{
		func_231(i, bParam0);
	}

	return;
}

void func_308(var uParam0) // Position - 0xAFF5 (45045)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44161))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44160 = 0;
	Global_44162 = 0;
	Global_44199 = 15;
	Global_64323 = 0;
	Global_64324 = 0;
	return;
}


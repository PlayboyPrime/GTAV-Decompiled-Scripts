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
	int iLocal_42 = 10;
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
	BOOL bLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	Hash hLocal_88 = 0;
	Ped pedLocal_89 = 0;
	Ped pedLocal_90 = 0;
	Vehicle veLocal_91 = 0;
	Vehicle veLocal_92 = 0;
	int iLocal_93 = 0;
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
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	int iLocal_116 = 0;
	BOOL bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	Hash hLocal_120 = 0;
	Hash hLocal_121 = 0;
	float fLocal_122 = 0f;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	Blip blLocal_129 = 0;
	Blip blLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 16;
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
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
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
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	char* sLocal_297 = 0;
	char* sLocal_298 = 0;
	char* sLocal_299 = 0;
	char* sLocal_300 = 0;
	char* sLocal_301 = 0;
	char* sLocal_302 = 0;
	char* sLocal_303 = 0;
	char* sLocal_304 = 0;
	char* sLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	char* sLocal_316 = 0;
	char* sLocal_317 = 0;
	char* sLocal_318 = 0;
	char* sLocal_319 = 0;
	char* sLocal_320 = 0;
	char* sLocal_321 = 0;
	char* sLocal_322 = 0;
	int iLocal_323 = 0;
	BOOL bLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = -1;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 1000;
	var uLocal_338 = 1000;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	bLocal_117 = true;
	sLocal_300 = "REBTH_HANGAR";
	sLocal_301 = "REBTH_RUNSOF";
	sLocal_302 = "REBTH_TAUNT";
	sLocal_316 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_317 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_319 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_320 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_321 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_322 = "RANDOM@BICYCLE_THIEF@THANKS";
	uLocal_94 = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_227();

	if (BUILTIN::VDIST2(uLocal_94, 421.92f, -1930.95f, 23.18f) < 16f)
		iLocal_315 = 1;
	else if (BUILTIN::VDIST2(uLocal_94, 769.3f, -151.66f, 73.79f) < 16f)
		iLocal_315 = 2;
	else if (BUILTIN::VDIST2(uLocal_94, -1923.93f, 254.48f, 85.7f) < 16f)
		iLocal_315 = 3;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
			SCRIPT::TERMINATE_THIS_THREAD();
		else if (func_226(PLAYER::PLAYER_PED_ID(), uLocal_94, true) < 100f)
			SCRIPT::TERMINATE_THIS_THREAD();

	if (iLocal_315 != 3)
		if (func_186(uLocal_94, 26, iLocal_315, false, false))
			func_183(26);
		else
			SCRIPT::TERMINATE_THIS_THREAD();
	else if (func_186(uLocal_94, 8, 0, false, false))
		func_183(8);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	iLocal_314 = func_181();
	iLocal_323 = PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_94 - { 20f, 20f, 20f }, uLocal_94 + { 20f, 20f, 20f }, false, true, true, true, 1);

	while (true)
	{
		BUILTIN::WAIT(0);
		func_180();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 28);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 13);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 35);
		}
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_87 > 1)
		{
			if (func_160())
			{
				func_159();
				func_227();
			}
			else
			{
				switch (iLocal_87)
				{
					case 0:
						func_156();
						break;
				
					case 1:
						if (func_155())
						{
							func_159();
							func_227();
						}
						else
						{
							func_143();
						}
						break;
				
					case 2:
						func_112();
						func_108();
						func_107();
						func_106();
						func_104();
						func_103();
						func_95();
						break;
				
					case 3:
						func_93();
						func_75();
						func_66();
						break;
				
					case 4:
						func_1();
						break;
				}
			}
		}
		else
		{
			func_227();
		}
	}

	return;
}

void func_1() // Position - 0x2D5 (725)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
	{
		if (func_64(PLAYER::PLAYER_PED_ID(), pedLocal_90, true) > 50f)
		{
			func_63(8);
			func_26();
		}
		else if (MISC::GET_GAME_TIMER() - iLocal_127 > 10000)
		{
			func_63(8);
			func_26();
		}
		else if (iLocal_327 == 0 && !func_25() && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_299, 4, 0, 0, 0))
		{
			iLocal_327 = 1;
		}
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x359 (857)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_3(sParam2, iParam3, false);
}

BOOL func_3(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x3A7 (935)
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
					func_23();
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
	
		if (func_22(8, -1))
			return 0;
	
		Global_22501 = { Global_22495 };
		func_21();
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
			
				if (func_12())
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
		
			if (func_11())
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
		
			func_10();
			Global_22435 = bParam2;
		}
	
		Global_22427 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_9();
		func_4();
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
		func_23();
	}

	return 0;
}

void func_4() // Position - 0x675 (1653)
{
	if (!func_5())
		return;

	if (Global_22431)
	{
		TEXT_LABEL_COPY(&(Global_1972230.f_1), { Global_22044 }, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}

	return;
}

BOOL func_5() // Position - 0x6AC (1708)
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79539)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_6(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_6(Player plParam0) // Position - 0x70F (1807)
{
	return func_7(plParam0, 20);
}

BOOL func_7(Player plParam0, int iParam1) // Position - 0x71F (1823)
{
	return IS_BIT_SET(Global_1887549[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x737 (1847)
{
	return -1;
}

void func_9() // Position - 0x740 (1856)
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

void func_10() // Position - 0x771 (1905)
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

BOOL func_11() // Position - 0x806 (2054)
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

BOOL func_12() // Position - 0x82D (2093)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x8C6 (2246)
{
	if (func_20(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x968 (2408)
{
	func_15();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_15() // Position - 0x981 (2433)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_16(character) && !func_20(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_16(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_16(eCharacter echParam0) // Position - 0xA7E (2686)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xA8A (2698)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xAC7 (2759)
{
	if (func_16(character))
		return func_19(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_19(eCharacter echParam0) // Position - 0xAEC (2796)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_20(int iParam0) // Position - 0xAFB (2811)
{
	return Global_44181 == iParam0;
}

void func_21() // Position - 0xB09 (2825)
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

BOOL func_22(int iParam0, int iParam1) // Position - 0xB60 (2912)
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

void func_23() // Position - 0xB98 (2968)
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

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xBEF (3055)
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

BOOL func_25() // Position - 0xC45 (3141)
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_26() // Position - 0xC67 (3175)
{
	eCharacter character;

	if (iLocal_315 == 3)
		func_58(_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()), 4, 5);
	else
		func_58(_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()), 1, 3);

	if (iLocal_315 != 3)
		func_39(26, iLocal_315);
	else
		func_39(8, 0);

	if (iLocal_315 == 1)
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		switch (character)
		{
			case CHAR_MICHAEL:
				while (!func_30(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					BUILTIN::WAIT(0);
				}
				break;
		
			case CHAR_FRANKLIN:
				while (!func_30(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					BUILTIN::WAIT(0);
				}
				break;
		
			case CHAR_TREVOR:
				while (!func_30(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					BUILTIN::WAIT(0);
				}
				break;
		}
	}

	func_27();
	func_227();
	return;
}

void func_27() // Position - 0xD55 (3413)
{
	func_28();
	return;
}

int func_28() // Position - 0xD62 (3426)
{
	if (func_29(false))
		return 0;

	if (Global_101727.f_8)
		if (Global_101727.f_10 > 0)
			return 0;
	else if (Global_101727.f_10 > 1)
		return 0;

	Global_101727.f_10 = Global_101727.f_10 + 1;
	return 1;
}

BOOL func_29(BOOL bParam0) // Position - 0xDAD (3501)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

BOOL func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xDD5 (3541)
{
	int num;
	var unk10;
	int num2;
	int num3;

	if (func_29(false))
		return false;

	if (iParam4 < 0)
		return false;

	if (iParam5 < 0)
		return false;

	if (iParam6 == 76)
		return false;

	if (iParam7 == 235)
		return false;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return false;

	if (iParam2 < 1 || iParam2 > 7)
		return false;

	if (Global_114135.f_7692.f_866 < 10)
	{
		num = iParam0;
		num.f_3 = func_38(iParam1);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_114135.f_7692.f_765[Global_114135.f_7692.f_866 /*10*/] = { num };
		Global_114135.f_7692.f_866 = Global_114135.f_7692.f_866 + 1;
		return true;
	}
	else
	{
		unk10 = { func_37(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		num2 = 0;
		func_36(&num2);
		num3 = func_35(unk10, Global_114135.f_7692.f_765[num2 /*10*/]);
	
		if (num3 == 2)
		{
			func_33(Global_114135.f_7692.f_765[num2 /*10*/]);
			Global_114135.f_7692.f_765[num2 /*10*/] = { unk10 };
			func_32(&unk10);
			return true;
		}
		else if (num3 == 1)
		{
			if (func_31(unk10))
			{
				func_33(Global_114135.f_7692.f_765[num2 /*10*/]);
				Global_114135.f_7692.f_765[num2 /*10*/] = { unk10 };
				func_32(&unk10);
				return true;
			}
			else
			{
				if (!func_31(Global_114135.f_7692.f_765[num2 /*10*/]))
				{
					Global_114135.f_7692.f_765[num2 /*10*/] = { unk10 };
					func_32(&unk10);
					return true;
				}
			
				func_32(&unk10);
				return true;
			}
		}
		else
		{
			func_33(unk10);
			func_32(&unk10);
			return true;
		}
	}

	return false;
}

BOOL func_31(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0xFF4 (4084)
{
	if (uParam0.f_8 == 0)
		return false;

	return true;
}

void func_32(var uParam0) // Position - 0x100C (4108)
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x101E (4126)
{
	if (func_31(uParam0))
		func_34(uParam0.f_8, 0);

	return;
}

void func_34(int iParam0, int iParam1) // Position - 0x103B (4155)
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_114135.f_8617[iParam0] = 1;
	Global_114135.f_8617.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

int func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Position - 0x1078 (4216)
{
	var unk;
	var unk2;

	unk = uParam0.f_3;
	unk2 = uParam10.f_3;

	if (unk > unk2)
		return 2;

	if (unk < unk2)
		return 0;

	return 1;
}

void func_36(var uParam0) // Position - 0x10A9 (4265)
{
	int i;

	*uParam0 = 0;

	for (i = 0; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (func_35(Global_114135.f_7692.f_765[i /*10*/], Global_114135.f_7692.f_765[*uParam0 /*10*/]) == 0)
			*uParam0 = i;
	}

	return;
}

struct<10> func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1100 (4352)
{
	int num;

	num = iParam0;
	num.f_3 = func_38(iParam1);
	num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
	num.f_5 = iParam5;
	num.f_1 = iParam9;
	num.f_2 = iParam2;
	num.f_6 = iParam3;
	num.f_7 = iParam6;
	num.f_8 = iParam7;
	num.f_9 = iParam8;
	MISC::CLEAR_BIT(&(num.f_1), 0);
	return num;
}

int func_38(int iParam0) // Position - 0x1159 (4441)
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

void func_39(int iParam0, int iParam1) // Position - 0x11C3 (4547)
{
	if (iParam0 == -1)
		iParam0 = func_56();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_55(iParam0))
	{
		func_54(iParam0, iParam1);
	
		if (!func_53(51))
		{
			func_49("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_52(), 0, 138, 0);
			func_48(51);
		}
	
		if (func_47(iParam0))
			Global_114135.f_24999.f_2 = 3;
	
		if (func_46(iParam0, iParam1) != 322)
			func_40(func_46(iParam0, iParam1), uLocal_84, uLocal_84.f_1);
	
		Global_114123 = iParam1;
	
		if (Global_114121 == 0)
			if (Global_114124 == 1 || Global_114124 == 5 || Global_114124 == 11 || Global_114124 == 25)
				func_63(2);
			else if (Global_114124 == 26 || Global_114124 == 8 || Global_114124 == 17)
				func_63(7);
			else
				func_63(1);
	}

	return;
}

void func_40(int iParam0, var uParam1, var uParam2) // Position - 0x12C6 (4806)
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

	if (Global_114135.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114135.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114135.f_10198[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114135.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114135.f_10198[iParam0 /*12*/].f_10 = uParam1;
		Global_114135.f_10198[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_41();

	return;
}

void func_41() // Position - 0x13AC (5036)
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
	Global_113871 = 0;
	Global_113872 = 0;
	Global_113873 = 0;
	Global_113874 = 0;
	Global_113875 = 0;
	Global_113876 = 0;
	Global_113877 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114135.f_10198.f_3853;
	Global_114135.f_10198.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114135.f_10198[num /*12*/].f_5 == 1)
		{
			switch (Global_114135.f_10198[num /*12*/].f_6)
			{
				case 1:
					Global_113871 = Global_113871 + 1;
					num2 = num2 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113872 = Global_113872 + 1;
					num3 = num3 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113873 = Global_113873 + 1;
					num4 = num4 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113874 = Global_113874 + 1;
					num5 = num5 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113875 = Global_113875 + 1;
					num6 = num6 + (Global_114135.f_10198[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113876 = Global_113876 + 1;
					num7 = num7 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113877 = Global_113877 + 1;
					num8 = num8 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113854 > 0)
		if (Global_113871 == Global_113854)
			num2 = 55f;

	if (Global_113855 > 0)
		if (Global_113872 == Global_113855)
			num3 = 10f;

	if (Global_113856 > 0)
		if (Global_113873 == Global_113856)
			num4 = 0f;

	if (Global_113857 > 0)
		if (Global_113874 == Global_113857)
			num5 = 10f;

	if (Global_113858 > 0)
	{
		if (Global_113875 == Global_113858 || (Global_113858 * 10) / Global_113875 < 41 || Global_113875 > Global_113861 || Global_113875 == Global_113861)
		{
			if (!IS_BIT_SET(Global_114135.f_10198.f_3856, 14))
			{
				if (Global_113875 == Global_113858)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113858, 0);
					MISC::SET_BIT(&(Global_114135.f_10198.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113859 > 0)
		if (Global_113876 == Global_113859)
			num7 = 15f;

	if (Global_113860 > 0)
		if (Global_113877 == Global_113860)
			num8 = 5f;

	Global_114135.f_10198.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113875 > Global_113861 || Global_113875 == Global_113861)
		value2 = Global_113861;
	else
		value2 = Global_113875;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113871, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113854, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113872, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113855, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113873, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113856, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113874, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113857, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113861, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113877 + Global_113876, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113860 + Global_113859, true);
	Global_113878 = (Global_113871 * 100) / Global_113854;
	Global_113880 = ((Global_113873 + Global_113872) * 100) / (Global_113856 + Global_113855);
	Global_113879 = ((Global_113874 + value2) * 100) / (Global_113857 + Global_113861);
	Global_113881 = ((Global_113876 + Global_113877) * 100) / (Global_113859 + Global_113860);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114135.f_10198.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113878, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113879, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113880, true);

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114135.f_10198.f_3853))
		func_43(13, BUILTIN::FLOOR(Global_114135.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79539)
		{
			if (func_42() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113869 = 0;
			
				if (!Global_64308)
					func_28();
			}
		}
	}

	return;
}

int func_42() // Position - 0x186A (6250)
{
	return Global_33087;
}

BOOL func_43(int iParam0, int iParam1) // Position - 0x1875 (6261)
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x18C6 (6342)
{
	if (iParam2 == -1)
		iParam2 = func_45();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_45() // Position - 0x18E4 (6372)
{
	return Global_1574926;
}

int func_46(int iParam0, int iParam1) // Position - 0x18F0 (6384)
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_47(int iParam0) // Position - 0x1C64 (7268)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_48(int iParam0) // Position - 0x1C93 (7315)
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

void func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1CD5 (7381)
{
	func_50(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_50(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1CF6 (7414)
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
		func_51();
	}

	return;
}

void func_51() // Position - 0x1EC9 (7881)
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

int func_52() // Position - 0x1FE0 (8160)
{
	func_15();

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

BOOL func_53(int iParam0) // Position - 0x2026 (8230)
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

void func_54(int iParam0, int iParam1) // Position - 0x2066 (8294)
{
	MISC::SET_BIT(&Global_114135.f_24999.f_8[iParam0], iParam1);
	return;
}

int func_55(int iParam0) // Position - 0x2081 (8321)
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_56() // Position - 0x2132 (8498)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_57(unk);
	return num;
}

int func_57(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x214F (8527)
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
	
		case joaat("re_accident"):
			return 0;
	
		case joaat("re_arrests"):
			return 15;
	
		case joaat("re_atmrobbery"):
			return 1;
	
		case joaat("re_bikethief"):
			return 26;
	
		case joaat("re_border"):
			return 29;
	
		case joaat("re_burials"):
			return 24;
	
		case joaat("re_bus_tours"):
			return 2;
	
		case joaat("re_cartheft"):
			return 17;
	
		case joaat("re_chasethieves"):
			return 11;
	
		case joaat("re_crashrescue"):
			return 16;
	
		case joaat("re_cultshootout"):
			return 18;
	
		case joaat("re_dealgonewrong"):
			return 12;
	
		case joaat("re_domestic"):
			return 3;
	
		case joaat("re_drunkdriver"):
			return 27;
	
		case joaat("re_gang_intimidation"):
			return 20;
	
		case joaat("re_gangfight"):
			return 19;
	
		case joaat("re_getaway_driver"):
			return 4;
	
		case joaat("re_hitch_lift"):
			return 13;
	
		case joaat("re_homeland_security"):
			return 28;
	
		case joaat("re_lured"):
			return 7;
	
		case joaat("re_muggings"):
			return 25;
	
		case joaat("re_paparazzi"):
			return 10;
	
		case joaat("re_prisonerlift"):
			return 22;
	
		case joaat("re_prisonvanbreak"):
			return 21;
	
		case joaat("re_securityvan"):
			return 9;
	
		case joaat("re_shoprobbery"):
			return 5;
	
		case joaat("re_snatched"):
			return 6;
	
		case joaat("re_stag_do"):
			return 14;
	
		case joaat("re_yetarian"):
			return 30;
	
		case joaat("re_duel"):
			return 31;
	
		case joaat("re_seaplane"):
			return 32;
	
		case joaat("re_monkey"):
			return 33;
	}

	return -1;
}

void func_58(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x2329 (9001)
{
	int num;
	int num2;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] = Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
			break;
	
		case CHAR_MULTIPLAYER:
			num2 = 15468;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 15468)
			{
				num = func_62(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_59(num2, num, -1, true);
			}
			break;
	}

	return;
}

void func_59(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2417 (9239)
{
	Hash statName;

	if (iParam0 != 15468)
	{
		statName = func_60(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_60(int iParam0, int iParam1) // Position - 0x2445 (9285)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_61(iParam1));
}

int func_61(int iParam0) // Position - 0x245A (9306)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_45();
	
		if (num2 > -1)
		{
			Global_2751934 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2751934 = 1;
		}
	}

	return num;
}

int func_62(int iParam0, int iParam1) // Position - 0x248E (9358)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_60(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_63(int iParam0) // Position - 0x24BD (9405)
{
	Global_114121 = iParam0;
	return;
}

float func_64(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x24CB (9419)
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x2529 (9513)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_66() // Position - 0x254A (9546)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90) && func_74(veLocal_91))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_91, false))
		{
			func_73(&uLocal_340);
			func_72(&blLocal_130);
		
			if (iLocal_128 == 0 && !HUD::DOES_BLIP_EXIST(blLocal_129))
				blLocal_129 = func_71(veLocal_91, false, false);
		}
		else
		{
			func_72(&blLocal_129);
		
			if (!HUD::DOES_BLIP_EXIST(blLocal_130))
			{
				blLocal_130 = func_68(pedLocal_90, false, 145);
			
				if (iLocal_341 == 0)
				{
					func_67(&uLocal_340);
					iLocal_341 = 1;
				}
			}
		}
	}

	return;
}

void func_67(var uParam0) // Position - 0x25CF (9679)
{
	*uParam0 = -99;
	return;
}

Blip func_68(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x25DD (9693)
{
	Blip blip;

	blip = func_69(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2201[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2201[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_69(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2627 (9767)
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_70(BOOL bParam0, var uParam1, var uParam2) // Position - 0x26CB (9931)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Blip func_71(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26E2 (9954)
{
	return func_69(veParam0, !bParam1, bParam2);
}

void func_72(Blip* pblParam0) // Position - 0x26F5 (9973)
{
	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::SET_BLIP_ROUTE(*pblParam0, false);
		HUD::REMOVE_BLIP(pblParam0);
	}

	return;
}

void func_73(var uParam0) // Position - 0x2715 (10005)
{
	*uParam0 = MISC::GET_GAME_TIMER() - 5000;
	return;
}

BOOL func_74(Vehicle veParam0) // Position - 0x2728 (10024)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

void func_75() // Position - 0x2752 (10066)
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90) && func_74(veLocal_91))
	{
		func_92(blLocal_130, &uLocal_340);
	
		if (fLocal_122 > 0f)
		{
			num = func_64(PLAYER::PLAYER_PED_ID(), pedLocal_90, true);
		
			if (num > fLocal_122 + fLocal_115)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_91, false))
				{
					func_63(7);
					func_26();
				}
				else
				{
					func_227();
				}
			}
		}
		else
		{
			fLocal_122 = func_64(PLAYER::PLAYER_PED_ID(), pedLocal_90, true);
		
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_91, 0);
				AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
			}
		}
	
		if (iLocal_306 == 0)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_90, 40f, 40f, 40f, false, true, 0))
			{
				func_91();
			
				if (iLocal_309 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_90, 25f, 25f, 25f, false, true, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_91, false) && PED::IS_PED_FACING_PED(pedLocal_90, PLAYER::PLAYER_PED_ID(), 30f) && func_82(pedLocal_90, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7) && !PED::IS_PED_RAGDOLL(pedLocal_90) && !TASK::IS_PED_GETTING_UP(pedLocal_90) && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(pedLocal_90, sLocal_321, "RETURNING_FRONT_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_309 = 1;
						}
					}
					else
					{
						iLocal_309 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_91, pedLocal_90, 35f, 35f, 35f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_91, false) && !func_81() && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_79(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_90, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_120, joaat("PLAYER"));
			PED::SET_PED_CAN_BE_TARGETTED(pedLocal_90, true);
			TASK::TASK_COMBAT_PED(pedLocal_90, PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_KEEP_TASK(pedLocal_90, true);
			BUILTIN::WAIT(0);
			func_63(7);
			func_26();
		}
	
		if (PED::IS_PED_IN_VEHICLE(pedLocal_90, veLocal_91, false))
		{
			!func_25() && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0);
			iLocal_127 = MISC::GET_GAME_TIMER();
			iLocal_87 = 4;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_91, pedLocal_90, 20f, 20f, 20f, false, true, 0))
		{
			if (func_78())
			{
				if (!func_76(pedLocal_90, SCRIPT_TASK_PERFORM_SEQUENCE))
				{
					iLocal_128 = 1;
					func_79(0);
					func_73(&uLocal_340);
					func_72(&blLocal_130);
					func_72(&blLocal_129);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_91, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				
					if (iLocal_306 == 0)
						TASK::TASK_ENTER_VEHICLE(0, veLocal_91, 20000, -1, 2f, 8, 0, 0);
					else
						TASK::TASK_ENTER_VEHICLE(0, veLocal_91, 20000, -1, 2f, 262152, 0, 0);
				
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_91, fLocal_112, 786485);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_90, iLocal_93);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
					PED::SET_PED_KEEP_TASK(pedLocal_90, true);
				}
			}
			else
			{
				switch (iLocal_306)
				{
					case 0:
						if (iLocal_309 == 1 && !func_76(pedLocal_90, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_RAGDOLL(pedLocal_90) && !TASK::IS_PED_GETTING_UP(pedLocal_90) && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(pedLocal_90, PLAYER::PLAYER_PED_ID(), 30f) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_90, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY) == 7)
								TASK::TASK_PLAY_ANIM(pedLocal_90, sLocal_321, "RETURNING_FRONT_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
						
							iLocal_307 = MISC::GET_GAME_TIMER();
							iLocal_306 = iLocal_306 + 1;
						}
						else
						{
							func_91();
						}
						break;
				
					case 1:
						if (MISC::GET_GAME_TIMER() - iLocal_307 > 10000 && !func_76(pedLocal_90, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_RAGDOLL(pedLocal_90) && !TASK::IS_PED_GETTING_UP(pedLocal_90) && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_303, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(pedLocal_90, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_79(0);
								TASK::TASK_PLAY_ANIM(pedLocal_90, sLocal_322, "THANKS_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							}
						
							iLocal_307 = MISC::GET_GAME_TIMER();
							iLocal_306 = iLocal_306 + 1;
						}
						else
						{
							func_79(1);
						}
						break;
				
					case 2:
						if (MISC::GET_GAME_TIMER() - iLocal_307 > 10000 && !func_76(pedLocal_90, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_RAGDOLL(pedLocal_90) && !TASK::IS_PED_GETTING_UP(pedLocal_90) && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_304, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(pedLocal_90, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_79(0);
								TASK::TASK_PLAY_ANIM(pedLocal_90, sLocal_320, "BIKE_BACK_NOW_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							}
						
							iLocal_306 = iLocal_306 + 1;
						}
						else
						{
							func_79(1);
						}
						break;
				
					default:
						func_79(1);
						break;
				}
			}
		}
	}

	return;
}

BOOL func_76(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2C3C (11324)
{
	if (func_77(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_77(Ped pedParam0) // Position - 0x2C6F (11375)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_78() // Position - 0x2C8F (11407)
{
	if (iLocal_128 == 1)
		return true;

	if (MISC::GET_GAME_TIMER() - iLocal_126 < 4000)
		return false;

	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_91, true))
		return false;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && PED::IS_PED_BEING_JACKED(pedLocal_89))
		return false;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_91, -1, false))
		return false;

	return true;
}

void func_79(int iParam0) // Position - 0x2CED (11501)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
	{
		if (iParam0 == 1)
		{
			if (!PED::IS_PED_IN_GROUP(pedLocal_90) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(pedLocal_90, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
				PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_90, true);
				PED::SET_GROUP_FORMATION_SPACING(func_80(), 2f, -1082130432, -1082130432);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
		else if (PED::IS_PED_IN_GROUP(pedLocal_90))
		{
			PED::REMOVE_PED_FROM_GROUP(pedLocal_90);
		}
	}

	return;
}

int func_80() // Position - 0x2D62 (11618)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_81() // Position - 0x2D72 (11634)
{
	if (iLocal_315 == 3)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1875.8583f, 262.3736f, 82.96029f, -1927.3792f, 234.79507f, 90.71558f, 50.25f, false, true, 0))
			return true;

	return false;
}

BOOL func_82(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2DB7 (11703)
{
	BOOL flag;
	var pedBoneCoords;
	int num;

	num = func_90(pedParam0, pedParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam1))
	{
		if (num != -1)
			func_89(&iLocal_42[num /*4*/]);
	
		return false;
	}

	if (!func_86(pedParam0, pedParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_85();
	
		if (num == -1)
			return false;
	
		iLocal_42[num /*4*/].f_1 = pedParam0;
		iLocal_42[num /*4*/].f_2 = pedParam1;
	}

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f) };
	flag = func_83(&iLocal_42[num /*4*/], pedBoneCoords, pedParam1, &(iLocal_42[num /*4*/].f_3), pedParam0, iParam5);
	return flag || MISC::GET_GAME_TIMER() - iLocal_42[num /*4*/].f_3 < iParam4;
}

BOOL func_83(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Ped pedParam4, var uParam5, Ped pedParam6, int iParam7) // Position - 0x2E78 (11896)
{
	var hit;
	var endCoords;
	var surfaceNormal;
	Ped entityHit;
	int shapeTestResult;

	entityHit = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		endCoords = { func_84(pedParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, endCoords + ((endCoords - vParam1) * { 0.1f, 0.1f, 0.1f }), 511, pedParam6, 7);
		return 0;
	}

	shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (shapeTestResult == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (shapeTestResult == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityHit) == pedParam4)
		{
			if (bLocal_83)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityHit) == PED::GET_VEHICLE_PED_IS_IN(pedParam4, false))
			{
				if (bLocal_83)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_84(Ped pedParam0, int iParam1) // Position - 0x2FA4 (12196)
{
	int randomIntInRange;

	if (iParam1 == 7)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = randomIntInRange;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(pedParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(pedParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(pedParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(pedParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(pedParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
}

int func_85() // Position - 0x3069 (12393)
{
	int i;

	for (i = 0; i < iLocal_42; i = i + 1)
	{
		if (iLocal_42[i /*4*/] == 0 && iLocal_42[i /*4*/].f_1 == 0 && iLocal_42[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_86(Ped pedParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x30B3 (12467)
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_88(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (fParam2 < 0.1f || fParam2 > 360f)
		return true;

	if (iParam3 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_88(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_87(entityForwardVector, unk);

	if (num <= BUILTIN::COS(fParam2 / 2f))
		return false;

	return true;
}

float func_87(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x3144 (12612)
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_88(float fParam0, var uParam1, var uParam2) // Position - 0x3165 (12645)
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_89(var uParam0) // Position - 0x31A4 (12708)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_90(Ped pedParam0, Ped pedParam1) // Position - 0x31BF (12735)
{
	int i;

	for (i = 0; i < iLocal_42; i = i + 1)
	{
		if (iLocal_42[i /*4*/].f_1 == pedParam0 && iLocal_42[i /*4*/].f_2 == pedParam1)
			return i;
	}

	return -1;
}

void func_91() // Position - 0x31FE (12798)
{
	if (iLocal_128 == 0 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
	{
		if (func_76(pedLocal_90, SCRIPT_TASK_PERFORM_SEQUENCE))
			TASK::CLEAR_PED_TASKS(pedLocal_90);
	
		if (!func_76(pedLocal_90, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_FACING_PED(pedLocal_90, PLAYER::PLAYER_PED_ID(), 20f) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_90, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY) == 7 && !PED::IS_PED_RAGDOLL(pedLocal_90) && !TASK::IS_PED_GETTING_UP(pedLocal_90))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), 0);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}

	return;
}

void func_92(Blip blParam0, var uParam1) // Position - 0x3292 (12946)
{
	int value;
	int num;

	if (*uParam1 == -99)
		*uParam1 = MISC::GET_GAME_TIMER();

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		value = MISC::GET_GAME_TIMER() - *uParam1;
	
		if (value < 5000)
		{
			num = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / 1000f);
		
			if ((num * 1000) - value < 500)
				if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
					HUD::SET_BLIP_ALPHA(blParam0, 255);
			else if (HUD::GET_BLIP_ALPHA(blParam0) != 0)
				HUD::SET_BLIP_ALPHA(blParam0, 0);
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
		
			if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
				HUD::SET_BLIP_ALPHA(blParam0, 255);
		}
	}

	return;
}

void func_93() // Position - 0x3331 (13105)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89))
	{
		if (iLocal_118 == 0)
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_89, 2, false);
			TASK::CLEAR_PED_TASKS(pedLocal_89);
		
			if (func_74(veLocal_91))
			{
				if (iLocal_315 == 2)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_91))
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_91);
				
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
				}
			
				if (PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, true))
					PED::KNOCK_PED_OFF_VEHICLE(pedLocal_89);
			}
		
			PED::SET_PED_KEEP_TASK(pedLocal_89, true);
			TASK::TASK_SMART_FLEE_PED(pedLocal_89, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			iLocal_118 = 1;
		}
		else
		{
			if (iLocal_119 == 0 && func_64(pedLocal_89, PLAYER::PLAYER_PED_ID(), true) < 30f && !PED::IS_PED_RAGDOLL(pedLocal_89) && func_76(pedLocal_89, SCRIPT_TASK_SMART_FLEE_PED) && !func_25() && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_301, 4, 0, 0, 0))
				iLocal_119 = 1;
		
			if (func_64(pedLocal_89, PLAYER::PLAYER_PED_ID(), true) > 50f)
				func_94(&pedLocal_89, true, 0, 1);
		}
	}

	return;
}

void func_94(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3427 (13351)
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

void func_95() // Position - 0x3477 (13431)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90) && func_74(veLocal_91))
	{
		if (func_102())
		{
			func_100(&uLocal_328, 0, false);
			func_99(&pedLocal_89);
			func_98(&veLocal_91);
			ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), 25f, 25f, 25f, false, true, 0) && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_305, 4, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_90, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			func_97();
		}
		else
		{
			func_96(blLocal_129, veLocal_91, fLocal_115, 1061158912, false);
		}
	}

	return;
}

void func_96(Blip blParam0, Vehicle veParam1, float fParam2, int iParam3, BOOL bParam4) // Position - 0x3511 (13585)
{
	int num;
	float distanceBetweenCoords;
	float num2;

	num2 = fParam2 * iParam3;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1), false))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = BUILTIN::ROUND(255f * ((distanceBetweenCoords - num2) / (fParam2 - num2)));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(veParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = BUILTIN::ROUND((255f * (distanceBetweenCoords - num2)) / (fParam2 - num2));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
		}
	}

	return;
}

void func_97() // Position - 0x366A (13930)
{
	func_227();
	return;
}

void func_98(Vehicle* pveParam0) // Position - 0x3676 (13942)
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
	
		if (func_74(*pveParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
						return;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(pveParam0);
			}
		}
		else
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
					return;
				}
			}
		
			VEHICLE::DELETE_VEHICLE(pveParam0);
		}
	}

	return;
}

void func_99(Ped* ppedParam0) // Position - 0x3712 (14098)
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
	
		PED::DELETE_PED(ppedParam0);
	}

	return;
}

void func_100(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x3753 (14163)
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2739811.f_4728, 26))
			return;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (MISC::IS_STRING_NULL(str))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0->f_3))
			HUD::CLEAR_HELP(true);

	if (!MISC::IS_STRING_NULL(str))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
			HUD::CLEAR_HELP(true);

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x382D (14381)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_102() // Position - 0x3840 (14400)
{
	if (func_64(veLocal_91, PLAYER::PLAYER_PED_ID(), true) > fLocal_115 + 100f)
		return true;

	if (func_64(veLocal_91, PLAYER::PLAYER_PED_ID(), true) > fLocal_115)
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_90, sLocal_319, "IDLE_A", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_90, sLocal_319, "IDLE_A") > 0.99f || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_90, sLocal_319, "IDLE_B", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_90, sLocal_319, "IDLE_B") > 0.99f || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_90, sLocal_319, "IDLE_C", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_90, sLocal_319, "IDLE_C") > 0.99f)
			return true;

	return false;
}

void func_103() // Position - 0x38FA (14586)
{
	if (iLocal_125 > -1 && MISC::GET_GAME_TIMER() - iLocal_125 > 5000 && !func_25() && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90) && func_74(veLocal_91) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_89, 13f, 13f, 13f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_90, pedLocal_89, 13f, 13f, 13f, false, true, 0) && PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false) && ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0) && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_300, 4, 0, 0, 0))
		iLocal_125 = -1;

	return;
}

void func_104() // Position - 0x39CD (14797)
{
	if (func_105())
	{
		iLocal_126 = MISC::GET_GAME_TIMER();
		func_72(&blLocal_129);
		func_100(&uLocal_328, 0, false);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			veLocal_92 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_92, true, true);
		}
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_90);
	
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && !func_25() && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0);
		iLocal_87 = 3;
	}
	else
	{
		if (bLocal_324 == false && HUD::DOES_BLIP_EXIST(blLocal_129) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89))
		{
			if (func_64(PLAYER::PLAYER_PED_ID(), pedLocal_89, true) < 30f || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_89, true), 10f, true))
			{
				bLocal_324 = true;
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_129, bLocal_324);
			}
		}
	
		if (iLocal_315 == 2 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && func_74(veLocal_91) && PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false))
		{
			if (iLocal_310 == 0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(veLocal_91, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_310 = 1;
				uLocal_311 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "RE_BikeThief2"), VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "RE_BikeThief2")) };
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_91) || func_226(veLocal_91, uLocal_311, true) < 5f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_91))
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_91);
			
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(pedLocal_89, veLocal_91, PLAYER::PLAYER_PED_ID(), 8, fLocal_112, 786468, 10f, 1f, false);
			}
		}
	}

	return;
}

BOOL func_105() // Position - 0x3B67 (15207)
{
	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89))
	{
		return true;
	}
	else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_91))
	{
		if (iLocal_342 == 0)
			if (PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false))
				iLocal_342 = 1;
		else if (!PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false))
			return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_89, PLAYER::PLAYER_PED_ID(), true))
			return true;
	}

	return false;
}

void func_106() // Position - 0x3BC7 (15303)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && func_74(veLocal_91) && PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false))
	{
		if (bLocal_117)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_89, 40f, 40f, 40f, false, true, 0))
			{
				fLocal_112 = fLocal_114;
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(pedLocal_89, fLocal_112);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_89, PLAYER::PLAYER_PED_ID(), 20000, SLF_WIDEST_YAW_LIMIT, 2);
				bLocal_117 = false;
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_89, 40f, 40f, 40f, false, true, 0))
		{
			fLocal_112 = fLocal_113;
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(pedLocal_89, fLocal_112);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_89, PLAYER::PLAYER_PED_ID(), 20000, SLF_WIDEST_YAW_LIMIT, 2);
			bLocal_117 = true;
		}
	}

	return;
}

void func_107() // Position - 0x3C76 (15478)
{
	if (iLocal_123 < 5 && !func_25() && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90) && func_74(veLocal_91) && PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_89, 13f, 13f, 13f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_90, pedLocal_89, 13f, 13f, 13f, false, true, 0) && MISC::GET_GAME_TIMER() - iLocal_124 > 15000 && _CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_302, 4, 0, 0, 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_89, SCRIPT_TASK_VEHICLE_MISSION) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedLocal_89))
			TASK::TASK_DRIVE_BY(pedLocal_89, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 15f, 50, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
	
		iLocal_124 = MISC::GET_GAME_TIMER();
		iLocal_123 = iLocal_123 + 1;
	}

	return;
}

void func_108() // Position - 0x3D67 (15719)
{
	if (iLocal_308 == 0 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && func_74(veLocal_91) && PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false))
	{
		if (iLocal_325 == 0)
		{
			if (_CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_297, 4, func_111(), 0, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_90);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_89, -1, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_103, 2f, 20000, 1193033728, 1056964608);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, veLocal_91, 1000);
				TASK::TASK_PLAY_ANIM(0, sLocal_317, sLocal_318, 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, "IDLE_C", 8f, -8f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_90, iLocal_93);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
				iLocal_124 = MISC::GET_GAME_TIMER();
				iLocal_125 = MISC::GET_GAME_TIMER();
			
				if (iLocal_315 == 3)
					sLocal_298 = "REBTH_HELP2X";
				else
					sLocal_298 = "REBTH_HELP2";
			
				iLocal_325 = 1;
			}
		}
		else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			if (func_64(PLAYER::PLAYER_PED_ID(), pedLocal_90, true) < 30f)
			{
				if (!func_25())
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_132, "REBTHAU", sLocal_298, 4, 0, 0, 0))
						iLocal_308 = 1;
				}
				else if (iLocal_326 == 0)
				{
					func_109();
					iLocal_326 = 1;
				}
			}
		}
	}

	return;
}

void func_109() // Position - 0x3F6A (16234)
{
	Global_21291 = 0;
	func_110();
	return;
}

void func_110() // Position - 0x3F7A (16250)
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23436 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}

	return;
}

int func_111() // Position - 0x3F9E (16286)
{
	int num;
	Vector3 vector;

	vector = { 100f, 100f, 20f };

	if (!PED::IS_PED_INJURED(pedLocal_90))
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
			num = 0;
		else
			num = 1;

	return num;
}

void func_112() // Position - 0x3FE2 (16354)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) && func_74(veLocal_91) && PED::IS_PED_IN_VEHICLE(pedLocal_89, veLocal_91, false))
		func_113(&uLocal_328, veLocal_91, 0, 0, true, true, true);

	return;
}

void func_113(var uParam0, Vehicle veParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x401C (16412)
{
	func_114(uParam0, veParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_114(var uParam0, Vehicle veParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x4039 (16441)
{
	func_115(uParam0, veParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_115(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x4057 (16471)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_100(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_116(uParam0, veParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_116(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x408F (16527)
{
	const char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			string2 = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
		func_142();

	if (func_141(veParam1) && ENTITY::IS_ENTITY_VISIBLE(veParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_136(uParam0, bParam7, bParam9, false))
				func_132(uParam0, veParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_121(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
							{
								_DISPLAY_HELP_TEXT(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
									func_119(true);
							}
						}
					}
				}
			}
			else if (func_121(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(veParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
								func_119(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam5))
					HUD::CLEAR_HELP(true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_100(uParam0, string2, true);
		
			if (!func_136(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_118(uParam0))
					func_117(uParam0);
		}
	}
	else
	{
		func_100(uParam0, string2, false);
	}

	return;
}

void func_117(var uParam0) // Position - 0x43FC (17404)
{
	if (func_141(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
	return;
}

BOOL func_118(var uParam0) // Position - 0x4465 (17509)
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_119(BOOL bParam0) // Position - 0x4490 (17552)
{
	switch (Global_44181)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_114135.f_10053.f_100 = Global_114135.f_10053.f_100 + 1;
		
			return Global_114135.f_10053.f_100;
	
		case 4:
			if (bParam0)
				Global_114135.f_10053.f_101 = Global_114135.f_10053.f_101 + 1;
		
			return Global_114135.f_10053.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_114135.f_10053.f_102 = Global_114135.f_10053.f_102 + 1;
		
			return Global_114135.f_10053.f_102;
	
		default:
			break;
	}

	return 3;
}

void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x453A (17722)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_121(const char* sParam0) // Position - 0x4551 (17745)
{
	if (!func_122(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_44181)
	{
		case 0:
		case 3:
			if (func_119(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_119(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_119(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_122(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x45EA (17898)
{
	Vehicle vehiclePedIsIn;
	int seatIndex;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_131(0))
		return false;

	if (func_130())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_76640)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return false;

	if (Global_61489)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_129() || func_128(*Global_4718592.f_187633) || func_127())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("apc") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("akula") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("riot2") && seatIndex == 0 && func_125(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1956704)
		return false;

	if (func_123(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_123(Player plParam0) // Position - 0x4843 (18499)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657991[plParam0 /*467*/].f_324.f_8 != -1;
		else if (Global_1575084 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657991[plParam0 /*467*/].f_324.f_8 != -1;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x48A9 (18601)
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
				if (player == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_125(Vehicle veParam0, int iParam1) // Position - 0x4909 (18697)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x496B (18795)
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

BOOL func_127() // Position - 0x49F0 (18928)
{
	return Global_2684718.f_19;
}

BOOL func_128(int iParam0) // Position - 0x49FE (18942)
{
	return iParam0 == 51;
}

BOOL func_129() // Position - 0x4A0B (18955)
{
	return Global_2684718.f_18;
}

BOOL func_130() // Position - 0x4A19 (18969)
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

BOOL func_131(int iParam0) // Position - 0x4A2E (18990)
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

void func_132(var uParam0, Vehicle veParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x4A85 (19077)
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1582036 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		func_100(uParam0, 0, false);

	if (func_135(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_133())
						vParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					vParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	easeInTime = uParam0->f_9;
	easeOutTime = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (easeInTime < 1500)
			easeInTime = 1500;
	
		if (easeOutTime < 1500)
			easeOutTime = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(veParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_133() // Position - 0x4B95 (19349)
{
	return func_134(PLAYER::PLAYER_ID());
}

BOOL func_134(Player plParam0) // Position - 0x4BA5 (19365)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_135(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x4BC4 (19396)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_136(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4C0B (19467)
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_140(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_118(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_140(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					if (!func_140(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_139(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_139(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_140(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_138(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_137(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_137(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_138(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_118(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_122(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_142();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_137(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4F77 (20343)
{
	if (!func_122(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
				return true;
		}
	}

	return false;
}

BOOL func_138(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4FC9 (20425)
{
	if (!func_122(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_139(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5012 (20498)
{
	if (!func_122(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_119)
				return true;
		}
	}

	return false;
}

BOOL func_140(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5071 (20593)
{
	if (!func_122(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_119)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_141(Vehicle veParam0) // Position - 0x50C7 (20679)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(veParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
			return true;

	return false;
}

void func_142() // Position - 0x5122 (20770)
{
	MISC::SET_BIT(&Global_8920, 4);
	return;
}

void func_143() // Position - 0x5132 (20786)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_89))
	{
		if (PED::IS_PED_INJURED(pedLocal_89))
		{
			func_159();
			func_227();
		}
		else if (func_154())
		{
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			{
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_132, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				sLocal_299 = "REBTH_RESPM";
			}
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			{
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_132, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				sLocal_299 = "REBTH_RESPF";
			}
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			{
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_132, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				sLocal_299 = "REBTH_RESPT";
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_91, false) && !PED::IS_PED_INJURED(pedLocal_89))
			{
				if (iLocal_315 == 2)
				{
					TASK::TASK_ENTER_VEHICLE(pedLocal_89, veLocal_91, 20000, -1, 1073741824, 1, 0, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
					TASK::TASK_ENTER_VEHICLE(0, veLocal_91, 20000, -1, 1073741824, 1, 0, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_91, PLAYER::PLAYER_PED_ID(), 8, fLocal_112, 786468, 10f, 1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_89, iLocal_93);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
					PED::SET_PED_KEEP_TASK(pedLocal_89, true);
				}
			}
		
			func_72(&uLocal_131);
			blLocal_129 = func_68(pedLocal_89, true, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(blLocal_129, bLocal_324);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
		
			if (iLocal_315 == 1)
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(472.19504f, -1974.9023f, 18.577868f, 572.74677f, -1921.2164f, 28.686325f, 75f, false, false, true);
		
			iLocal_87 = 2;
			func_144(true);
		}
	}

	return;
}

int func_144(BOOL bParam0) // Position - 0x529F (21151)
{
	if (func_147())
	{
		Global_114125 = true;
		Global_114122 = MISC::GET_GAME_TIMER();
	
		if (func_47(Global_114124))
			func_145(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_47(Global_114124))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_145(int iParam0) // Position - 0x52F2 (21234)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114135.f_24999.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_146(iParam0), -1);
					Global_114135.f_24999.f_2 = Global_114135.f_24999.f_2 + 1;
					MISC::SET_BIT(&Global_114131, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114131, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_146(iParam0), -1);
					Global_114135.f_24999.f_3 = Global_114135.f_24999.f_3 + 1;
					MISC::SET_BIT(&Global_114131, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114131, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_146(iParam0), -1);
					Global_114135.f_24999.f_4 = Global_114135.f_24999.f_4 + 1;
					MISC::SET_BIT(&Global_114131, 2);
				}
			}
			break;
	}

	return;
}

char* func_146(int iParam0) // Position - 0x53CD (21453)
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*If you retrieve a stolen item, you can choose to keep it or return it for a reward.*/;
			break;
	}

	return str;
}

BOOL func_147() // Position - 0x5410 (21520)
{
	switch (func_148(&Global_33147, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_148(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x5446 (21574)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99141.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_152(0))
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23831.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44181 = iParam2;
		Global_44143 = *uParam0;
		Global_44144 = iParam4;
		Global_44142 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44142 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44142; i = i + 1)
			{
				if (Global_44148[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44143 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44142 == 8)
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		Global_44148[Global_44142 /*4*/] = Global_44145;
		Global_44148[Global_44142 /*4*/].f_1 = iParam1;
		Global_44148[Global_44142 /*4*/].f_2 = iParam2;
		Global_44148[Global_44142 /*4*/].f_3 = 0;
		Global_44142 = Global_44142 + 1;
	
		if (iParam4 != 0)
			func_149(uParam0, iParam4);
	}

	return 2;
}

void func_149(var uParam0, int iParam1) // Position - 0x557D (21885)
{
	int i;

	if (Global_44142 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44142; i = i + 1)
	{
		if (Global_44148[i /*4*/] == *uParam0)
			Global_44148[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x55CC (21964)
{
	return func_151(iParam0, Global_44181);
}

BOOL func_151(int iParam0, int iParam1) // Position - 0x55DD (21981)
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

BOOL func_152(int iParam0) // Position - 0x57BE (22462)
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x57E0 (22496)
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

BOOL func_154() // Position - 0x587B (22651)
{
	switch (iLocal_315)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 365.9538f, -1971.7162f, 18.34454f, 526.409f, -1861.9406f, 34.529064f, 100f, false, true, 0))
				return true;
			break;
	
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 886.14014f, -229.93735f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, false, true, 0))
				return true;
			break;
	
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1969.382f, 382.13315f, 68.15017f, -1878.1522f, 158.40523f, 104.85044f, 100f, false, true, 0))
				return true;
			break;
	}

	return false;
}

BOOL func_155() // Position - 0x5946 (22854)
{
	Vector3 vector;
	Vector3 vector2;

	vector = { 16f, 16f, 6f };
	vector2 = { -16f, -16f, -6f };

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_89, PLAYER::PLAYER_PED_ID(), true))
			return true;
	else
		return true;

	if (func_74(veLocal_91))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_91, PLAYER::PLAYER_PED_ID(), true))
			return true;
	else
		return true;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_90, 31086, 0f, 0f, 0f), 3f, true))
			return true;
	
		vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_90, 31086, 0f, 0f, 0f) };
		vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_90, 31086, 0f, 0f, 0f) };
	
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
			return true;
	
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_90, 31086, 0f, 0f, 0f), 6f))
			return true;
	
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(pedLocal_90, 31086, 0f, 0f, 0f), 6f))
			return true;
	
		if (PED::IS_PED_FLEEING(pedLocal_90))
			return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), true))
			return true;
	}

	return false;
}

void func_156() // Position - 0x5A9A (23194)
{
	if (iLocal_116 == 0)
	{
		switch (iLocal_315)
		{
			case 1:
				uLocal_100 = { 433.57f, -1916.68f, 24.04f };
				fLocal_110 = 248.5f;
				uLocal_103 = { 439.054f, -1920.1454f, 23.5581f };
				uLocal_106 = { 434.31f, -1908.87f, 25.92f };
				fLocal_111 = -163.17f;
				uLocal_97 = { 435.18f, -1915.18f, 24.68f };
				fLocal_109 = 226.13f;
				fLocal_113 = 10f;
				fLocal_114 = 20f;
				hLocal_88 = joaat("scorcher");
				fLocal_115 = 250f;
				sLocal_303 = "REBTH_THX2";
				sLocal_304 = "REBTH_THX3";
				sLocal_305 = "REBTH_GONE";
				break;
		
			case 2:
				uLocal_100 = { 774.06f, -155.63f, 73.44f };
				fLocal_110 = 144.3932f;
				uLocal_103 = { 769.8723f, -156.9548f, 73.5144f };
				uLocal_106 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_111 = 151.6004f;
				uLocal_97 = { 771.41f, -154.29f, 74.09f };
				fLocal_109 = 150.54f;
				fLocal_113 = 10f;
				fLocal_114 = 20f;
				hLocal_88 = joaat("scorcher");
				fLocal_115 = 250f;
				sLocal_303 = "REBTH_THX2";
				sLocal_304 = "REBTH_THX3";
				sLocal_305 = "REBTH_GONE";
				break;
		
			case 3:
				uLocal_100 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_110 = 285.0046f;
				uLocal_103 = { -1934.7849f, 253.2105f, 83.8164f };
				uLocal_106 = { -1931.04f, 252.19f, 84.99f };
				fLocal_111 = 42.33f;
				uLocal_97 = { -1932.27f, 254.5f, 84.4f };
				fLocal_109 = 96.81f;
				fLocal_113 = 10f;
				fLocal_114 = 35f;
				hLocal_88 = joaat("bati");
				fLocal_115 = 400f;
				sLocal_303 = "REBTH_THX2X";
				sLocal_304 = "REBTH_THX3X";
				sLocal_305 = "REBTH_GONEX";
				break;
		}
	
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_100 - { 20f, 20f, 20f }, uLocal_100 + { 20f, 20f, 20f }, false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(uLocal_100 - { 20f, 20f, 20f }, uLocal_100 + { 20f, 20f, 20f }, 0);
		MISC::CLEAR_AREA(uLocal_100, 20f, true, false, false, false);
		iLocal_116 = 1;
	}

	STREAMING::REQUEST_MODEL(joaat("G_M_Y_StrPunk_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_BeachVesp_01"));
	STREAMING::REQUEST_MODEL(hLocal_88);

	if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_StrPunk_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_BeachVesp_01")) && STREAMING::HAS_MODEL_LOADED(hLocal_88) && func_158() && func_157())
	{
		veLocal_91 = VEHICLE::CREATE_VEHICLE(hLocal_88, uLocal_97, fLocal_109, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_88);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_88, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_91, true, true, false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_91, false);
		VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(veLocal_91, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_91, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(veLocal_91, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_112 = fLocal_114;
	
		if (iLocal_315 == 3)
		{
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_91, 49, 0);
			VEHICLE::SET_VEHICLE_MOD_KIT(veLocal_91, 0);
			VEHICLE::SET_VEHICLE_MOD(veLocal_91, 16, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_91, 11, 3, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_91, 12, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_91, 13, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_91, 23, 10, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_91, 24, 10, false);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_91, 22, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_91, 17, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_91, 21, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_91, 20, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_91, 19, true);
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_91, 89, 89);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veLocal_91, 0, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veLocal_91, 1);
		}
	
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupVictim", &hLocal_120);
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupThief", &hLocal_121);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_121, hLocal_120);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_121, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_120, joaat("PLAYER"));
		pedLocal_89 = PED::CREATE_PED(PED_TYPE_DEALER, joaat("G_M_Y_StrPunk_01"), uLocal_106, fLocal_111, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_StrPunk_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_89, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_89, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_89, hLocal_121);
		PED::SET_PED_COMBAT_MOVEMENT(pedLocal_89, CM_WillRetreat);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_89, BF_AlwaysFlee, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_89, BF_Aggressive, false);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_89, 1, true);
		PED::SET_PED_HELMET(pedLocal_89, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_89, 42, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_89, 281, true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(pedLocal_89, KNOCKOFFVEHICLE_EASY);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_89, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		TASK::TASK_PLAY_ANIM(pedLocal_89, sLocal_316, "base", 8f, -8f, -1, 1, 0, false, false, false);
		pedLocal_90 = PED::CREATE_PED(PED_TYPE_DEALER, joaat("A_M_Y_BeachVesp_01"), uLocal_100, fLocal_110, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_BeachVesp_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_90, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_90, true);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_90, 8, true);
	
		if (iLocal_315 == 3)
			PED::SET_PED_HELMET(pedLocal_90, true);
		else
			PED::SET_PED_HELMET(pedLocal_90, false);
	
		PED::SET_PED_CONFIG_FLAG(pedLocal_90, 26, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_90, 42, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_90, 167, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_90, 281, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_90, hLocal_120);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_90, false);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_90, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_90, "WORLD_HUMAN_STAND_MOBILE", 0, true);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_132, 1, pedLocal_89, "BThief", 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_132, 2, pedLocal_90, "BThiefVictim", 0, 1);
	
		if (iLocal_314 == 0)
		{
			if (iLocal_315 == 3)
				sLocal_297 = "REBTH_HELPX";
			else
				sLocal_297 = "REBTH_HELP";
		
			sLocal_301 = "REBTH_RUNSOF";
			sLocal_302 = "REBTH_TAUNT";
			sLocal_318 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_314 == 1)
		{
			if (iLocal_315 == 3)
				sLocal_297 = "REBTH_HLPBX";
			else
				sLocal_297 = "REBTH_HLPB";
		
			sLocal_301 = "REBTH_RUNB";
			sLocal_302 = "REBTH_TNTB";
			sLocal_318 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_297 = "REBTH_HLPC";
			sLocal_301 = "REBTH_RUNC";
			sLocal_302 = "REBTH_TNTC";
			sLocal_318 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
	
		PED::SET_CREATE_RANDOM_COPS(false);
		iLocal_87 = 1;
	}

	return;
}

BOOL func_157() // Position - 0x6043 (24643)
{
	if (iLocal_315 == 2)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "RE_BikeThief2");
	
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "RE_BikeThief2"))
			return false;
	}

	return true;
}

BOOL func_158() // Position - 0x606D (24685)
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_316);
	STREAMING::REQUEST_ANIM_DICT(sLocal_317);
	STREAMING::REQUEST_ANIM_DICT(sLocal_319);
	STREAMING::REQUEST_ANIM_DICT(sLocal_320);
	STREAMING::REQUEST_ANIM_DICT(sLocal_322);
	STREAMING::REQUEST_ANIM_DICT(sLocal_321);

	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_316) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_317) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_319) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_320) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_322) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_321))
		return true;

	return false;
}

void func_159() // Position - 0x60EA (24810)
{
	if (!PED::IS_PED_INJURED(pedLocal_90))
	{
		if (func_76(pedLocal_90, SCRIPT_TASK_START_SCENARIO_IN_PLACE))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_90);
		else
			TASK::CLEAR_PED_TASKS(pedLocal_90);
	
		PED::SET_PED_KEEP_TASK(pedLocal_90, true);
		TASK::TASK_SMART_FLEE_PED(pedLocal_90, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
	}

	if (!PED::IS_PED_INJURED(pedLocal_89))
	{
		PED::SET_PED_KEEP_TASK(pedLocal_89, true);
		TASK::TASK_SMART_FLEE_PED(pedLocal_89, PLAYER::PLAYER_PED_ID(), 100f, -1, false, true);
	}

	return;
}

BOOL func_160() // Position - 0x6155 (24917)
{
	if (iLocal_87 == 0 && func_179())
		return true;

	if (iLocal_87 == 1 && func_167())
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_90))
	{
		if (PED::IS_PED_INJURED(pedLocal_90))
		{
			return true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_90, PLAYER::PLAYER_PED_ID(), true))
		{
			func_165();
			_CONVERSATION_ADD_LINE_NO_SUBTITLE(&uLocal_132, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return true;
		}
		else if (func_161(pedLocal_90, 170f))
		{
			func_165();
			_CONVERSATION_ADD_LINE_NO_SUBTITLE(&uLocal_132, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return true;
		}
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_309 == 1)
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_91) && !VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_91, false))
		return true;

	return false;
}

BOOL func_161(Ped pedParam0, float fParam1) // Position - 0x6223 (25123)
{
	float xSize;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (func_163(pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				xSize = 40f;
			else
				xSize = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, xSize, xSize, xSize, false, true, 0))
				if (func_162(pedParam0, fParam1))
					return true;
		}
	}

	return false;
}

BOOL func_162(Ped pedParam0, float fParam1) // Position - 0x6299 (25241)
{
	return func_82(pedParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

BOOL func_163(Ped pedParam0) // Position - 0x62B1 (25265)
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return true;

	return false;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x62D9 (25305)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_21291, 0);
	Global_22428 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_22415, sParam2, 24);
	return;
}

void func_165() // Position - 0x6314 (25364)
{
	Global_21291 = 0;
	func_166();
	return;
}

void func_166() // Position - 0x6324 (25380)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
	}

	return;
}

BOOL func_167() // Position - 0x6345 (25413)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_175())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_174())
			return false;

	if (func_168(100f, true) != -1)
		return true;

	return false;
}

int func_168(float fParam0, BOOL bParam1) // Position - 0x63A7 (25511)
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_16(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_52();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114135.f_18578[num /*6*/], 2) && !IS_BIT_SET(Global_114135.f_18578[num /*6*/], 3))
				{
					func_169(num, &unk);
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
				
					if (distanceBetweenCoords < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num4 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = distanceBetweenCoords;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_169(int iParam0, var uParam1) // Position - 0x6458 (25688)
{
	switch (iParam0)
	{
		case 0:
			func_170(uParam1, "Abigail1", func_172(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 1:
			func_170(uParam1, "Abigail2", func_172(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 2:
			func_170(uParam1, "Barry1", func_172(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 3:
			func_170(uParam1, "Barry2", func_172(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
	
		case 4:
			func_170(uParam1, "Barry3", func_172(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 5:
			func_170(uParam1, "Barry3A", func_172(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 6:
			func_170(uParam1, "Barry3C", func_172(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 7:
			func_170(uParam1, "Barry4", func_172(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_171(iParam0), 0, 0);
			break;
	
		case 8:
			func_170(uParam1, "Dreyfuss1", func_172(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 9:
			func_170(uParam1, "Epsilon1", func_172(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 10:
			func_170(uParam1, "Epsilon2", func_172(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 11:
			func_170(uParam1, "Epsilon3", func_172(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 12:
			func_170(uParam1, "Epsilon4", func_172(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 13:
			func_170(uParam1, "Epsilon5", func_172(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 14:
			func_170(uParam1, "Epsilon6", func_172(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 15:
			func_170(uParam1, "Epsilon7", func_172(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 16:
			func_170(uParam1, "Epsilon8", func_172(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 17:
			func_170(uParam1, "Extreme1", func_172(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 18:
			func_170(uParam1, "Extreme2", func_172(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 19:
			func_170(uParam1, "Extreme3", func_172(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 20:
			func_170(uParam1, "Extreme4", func_172(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 21:
			func_170(uParam1, "Fanatic1", func_172(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_171(iParam0), 1, 0);
			break;
	
		case 22:
			func_170(uParam1, "Fanatic2", func_172(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_171(iParam0), 1, 0);
			break;
	
		case 23:
			func_170(uParam1, "Fanatic3", func_172(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_171(iParam0), 0, 1);
			break;
	
		case 24:
			func_170(uParam1, "Hao1", func_172(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_171(iParam0), 0, 1);
			break;
	
		case 25:
			func_170(uParam1, "Hunting1", func_172(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 26:
			func_170(uParam1, "Hunting2", func_172(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 27:
			func_170(uParam1, "Josh1", func_172(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 28:
			func_170(uParam1, "Josh2", func_172(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
	
		case 29:
			func_170(uParam1, "Josh3", func_172(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
	
		case 30:
			func_170(uParam1, "Josh4", func_172(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 31:
			func_170(uParam1, "Maude1", func_172(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 32:
			func_170(uParam1, "Minute1", func_172(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 33:
			func_170(uParam1, "Minute2", func_172(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 34:
			func_170(uParam1, "Minute3", func_172(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 35:
			func_170(uParam1, "MrsPhilips1", func_172(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 36:
			func_170(uParam1, "MrsPhilips2", func_172(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 37:
			func_170(uParam1, "Nigel1", func_172(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 38:
			func_170(uParam1, "Nigel1A", func_172(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
	
		case 39:
			func_170(uParam1, "Nigel1B", func_172(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
	
		case 40:
			func_170(uParam1, "Nigel1C", func_172(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
	
		case 41:
			func_170(uParam1, "Nigel1D", func_172(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
	
		case 42:
			func_170(uParam1, "Nigel2", func_172(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
	
		case 43:
			func_170(uParam1, "Nigel3", func_172(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
	
		case 44:
			func_170(uParam1, "Omega1", func_172(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 45:
			func_170(uParam1, "Omega2", func_172(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 46:
			func_170(uParam1, "Paparazzo1", func_172(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 47:
			func_170(uParam1, "Paparazzo2", func_172(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 48:
			func_170(uParam1, "Paparazzo3", func_172(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 49:
			func_170(uParam1, "Paparazzo3A", func_172(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 50:
			func_170(uParam1, "Paparazzo3B", func_172(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 51:
			func_170(uParam1, "Paparazzo4", func_172(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 52:
			func_170(uParam1, "Rampage1", func_172(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 54:
			func_170(uParam1, "Rampage3", func_172(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 55:
			func_170(uParam1, "Rampage4", func_172(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 56:
			func_170(uParam1, "Rampage5", func_172(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
	
		case 53:
			func_170(uParam1, "Rampage2", func_172(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
	
		case 57:
			func_170(uParam1, "TheLastOne", func_172(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 58:
			func_170(uParam1, "Tonya1", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 59:
			func_170(uParam1, "Tonya2", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 60:
			func_170(uParam1, "Tonya3", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 61:
			func_170(uParam1, "Tonya4", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		case 62:
			func_170(uParam1, "Tonya5", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_170(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x760D (30221)
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

int func_171(int iParam0) // Position - 0x769E (30366)
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

struct<2> func_172(int iParam0) // Position - 0x79E4 (31204)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_173(iParam0) };

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

struct<2> func_173(int iParam0) // Position - 0x7A1B (31259)
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

BOOL func_174() // Position - 0x7E67 (32359)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_175() // Position - 0x7E84 (32388)
{
	if (func_178() && !func_174())
		return true;

	if (func_177() && func_176())
		return true;

	return false;
}

BOOL func_176() // Position - 0x7EB6 (32438)
{
	return Global_113853 > 0;
}

BOOL func_177() // Position - 0x7EC4 (32452)
{
	if (Global_98585 != -1)
		return true;

	return false;
}

BOOL func_178() // Position - 0x7ED9 (32473)
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 20);

	return false;
}

BOOL func_179() // Position - 0x7EFC (32508)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_84) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_174())
			return false;
	}

	if (func_175())
		return true;

	if (func_168(100f, true) != -1)
		return true;

	return false;
}

void func_180() // Position - 0x7F82 (32642)
{
	return;
}

int func_181() // Position - 0x7F8A (32650)
{
	int num;

	if (func_182(26, 1))
		num = num + 1;

	if (func_182(26, 2))
		num = num + 1;

	if (func_182(8, 0))
		num = num + 1;

	return num;
}

BOOL func_182(int iParam0, int iParam1) // Position - 0x7FC4 (32708)
{
	if (IS_BIT_SET(Global_114135.f_24999.f_8[iParam0], iParam1))
		return true;

	return false;
}

void func_183(int iParam0) // Position - 0x7FE4 (32740)
{
	if (iParam0 == -1)
		iParam0 = func_56();

	if (iParam0 == -1)
		return;

	func_185(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114121 = 0;
	func_184();
	return;
}

void func_184() // Position - 0x801C (32796)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_185(int iParam0) // Position - 0x8059 (32857)
{
	Global_114124 = iParam0;
	return;
}

BOOL func_186(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8067 (32871)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152724)
		return false;

	if (iParam3 == -1)
		iParam3 = func_56();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_84 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_174())
				return false;
		}
	
		if (!Global_114135.f_9089)
			return false;
	
		if (func_29(false))
			return false;
	
		if (func_175())
			return false;
	
		if (func_224())
			return false;
	
		if (Global_114124 != -1)
			return false;
	
		if (func_16(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_168(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_84.f_2 > 50f)
				return false;
	
		if (!func_223(iParam3))
			return false;
	
		if (func_16(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_222(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_222(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_16(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_221(iParam3, iParam4, 145))
				return false;
	
		if (!func_220(Global_114135.f_24999.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114126 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_219())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_210(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_182(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_182(0, 0))
			return false;
	
		if (Global_33234)
			return false;
	
		if (func_223(30) && !func_182(30, 0))
			if (iParam3 != 30)
				if (BUILTIN::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_16(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114135.f_2367.f_539.f_2300[i /*3*/] };
				num = Global_114135.f_2367.f_539.f_2296[i];
			
				if (func_209(num))
					if (func_187(i))
						if (!func_135(vector, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_187(eCharacter echParam0) // Position - 0x8401 (33793)
{
	int num;

	num = Global_114135.f_2367.f_539.f_2296[echParam0];
	return func_188(num);
}

BOOL func_188(int iParam0) // Position - 0x8422 (33826)
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1) // Position - 0x8431 (33841)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_209(iParam0))
		return 0;

	func_190(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x8484 (33924)
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x84A2 (33954)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_201(iParam0, iParam1))
	{
		num = func_200(iParam1);
		num2 = func_198(iParam0);
		num3 = func_198(iParam0) - func_198(iParam1);
		num4 = func_200(iParam0) - func_200(iParam1);
		num5 = func_197(iParam0) - func_197(iParam1);
		num6 = func_196(iParam0) - func_196(iParam1);
		num7 = func_195(iParam0) - func_195(iParam1);
		num8 = func_194(iParam0) - func_194(iParam1);
	}
	else
	{
		num = func_200(iParam0);
		num2 = func_198(iParam1);
		num3 = func_198(iParam1) - func_198(iParam0);
		num4 = func_200(iParam1) - func_200(iParam0);
		num5 = func_197(iParam1) - func_197(iParam0);
		num6 = func_196(iParam1) - func_196(iParam0);
		num7 = func_195(iParam1) - func_195(iParam0);
		num8 = func_194(iParam1) - func_194(iParam0);
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
	
		num5 = num5 + func_193(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_192(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2) // Position - 0x86A3 (34467)
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_193(int iParam0, int iParam1) // Position - 0x86E5 (34533)
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

int func_194(int iParam0) // Position - 0x8787 (34695)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_195(int iParam0) // Position - 0x879A (34714)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_196(int iParam0) // Position - 0x87AD (34733)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_197(int iParam0) // Position - 0x87C0 (34752)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_198(int iParam0) // Position - 0x87D2 (34770)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_199(BOOL bParam0, var uParam1, var uParam2) // Position - 0x87F4 (34804)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_200(int iParam0) // Position - 0x880B (34827)
{
	return iParam0 & 15;
}

BOOL func_201(int iParam0, int iParam1) // Position - 0x8818 (34840)
{
	int num;
	int num2;

	if (!func_209(iParam1) || !func_209(iParam0))
		return 1;

	num = func_198(iParam0);
	num2 = func_198(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_200(iParam0);
	num2 = func_200(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_197(iParam0);
	num2 = func_197(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_196(iParam0);
	num2 = func_196(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_195(iParam0);
	num2 = func_195(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_194(iParam0);
	num2 = func_194(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_202() // Position - 0x8924 (35108)
{
	var unk;

	func_208(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_207(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_206(&unk, CLOCK::GET_CLOCK_HOURS());
	func_205(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_204(&unk, CLOCK::GET_CLOCK_MONTH());
	func_203(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_203(var uParam0, int iParam1) // Position - 0x896A (35178)
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_204(var uParam0, int iParam1) // Position - 0x89F0 (35312)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_205(var uParam0, int iParam1) // Position - 0x8A23 (35363)
{
	int num;
	int num2;

	num = func_200(*uParam0);
	num2 = func_198(*uParam0);

	if (iParam1 < 1 || iParam1 > func_193(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_206(var uParam0, int iParam1) // Position - 0x8A74 (35444)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_207(var uParam0, int iParam1) // Position - 0x8AAE (35502)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_208(var uParam0, int iParam1) // Position - 0x8AE9 (35561)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_209(int iParam0) // Position - 0x8B25 (35621)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_194(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_195(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_196(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_198(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_200(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_197(iParam0);

	if (num6 < 1 || num6 > func_193(num5, num4))
		return false;

	return true;
}

BOOL func_210(int iParam0) // Position - 0x8C01 (35841)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_16(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_218() || Global_113182 || Global_33090 || func_217() || func_22(8, -1) || func_216() || func_215() || func_214() || func_213() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_218() || Global_33090 || func_217() || func_22(8, -1) || func_214() || func_216() || func_215() || func_213() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_218() || Global_113182 || Global_33090 || func_217() || func_22(8, -1) || func_214() || func_216() || func_215() || func_213() || Global_114135.f_7692.f_919[character] == 5 || Global_44728 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_218() || Global_113182 || Global_33090 || func_217() || func_22(8, -1) || func_216() || func_215() || func_213() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_218() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_22(8, -1) || func_213() || func_212() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_22(8, -1) || func_216() || func_215() || func_212() || func_211())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_218() || Global_33090 || func_217() || func_22(8, -1) || func_215() || func_214() || func_213() || Global_114135.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_218() || func_215() || Global_113182 || Global_33090 || func_217() || Global_45392 || func_22(8, -1) || func_214() || func_212() || func_213() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_218() || Global_113182 || Global_33090 || func_217() || func_22(8, -1) || func_214() || func_212() || func_216() || func_215() || func_213())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_211() // Position - 0x931E (37662)
{
	return Global_101727.f_1;
}

BOOL func_212() // Position - 0x932C (37676)
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 13);

	return false;
}

BOOL func_213() // Position - 0x934F (37711)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_214() // Position - 0x9369 (37737)
{
	if (Global_79800)
		return true;
	else if (Global_64302 && !Global_64308)
		return true;

	return false;
}

BOOL func_215() // Position - 0x9393 (37779)
{
	return Global_101740.f_400 > 0;
}

BOOL func_216() // Position - 0x93A4 (37796)
{
	return Global_101740.f_399 > 0;
}

BOOL func_217() // Position - 0x93B5 (37813)
{
	return Global_1575084;
}

BOOL func_218() // Position - 0x93C1 (37825)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

BOOL func_219() // Position - 0x93DD (37853)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_220(int iParam0) // Position - 0x9405 (37893)
{
	return func_201(func_202(), iParam0);
}

BOOL func_221(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x9417 (37911)
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (iParam0)
	{
		case 18:
			if (character == CHAR_TREVOR)
				num = 1;
			break;
	
		case 19:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 20:
			if (character != CHAR_FRANKLIN)
				num = 1;
			break;
	
		case 28:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 13:
			if (character == CHAR_MICHAEL)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 30:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_222(eCharacter echParam0) // Position - 0x94FB (38139)
{
	if (!func_16(echParam0))
		return 7;

	return Global_114135.f_7692.f_919[echParam0];
}

BOOL func_223(int iParam0) // Position - 0x951F (38175)
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114135.f_24999, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114135.f_24999.f_1, num);
	}

	return flag;
}

BOOL func_224() // Position - 0x9577 (38263)
{
	Vehicle vehiclePedIsIn;

	if (Global_33239)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x95BB (38331)
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

float func_226(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x9673 (38515)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

void func_227() // Position - 0x96AD (38573)
{
	func_100(&uLocal_328, 0, false);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_91, false))
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_91, 0);
	
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}

	if (iLocal_315 != 3)
		func_230(26);
	else
		func_230(8);

	if (iLocal_315 == 1)
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(472.19504f, -1974.9023f, 18.577868f, 572.74677f, -1921.2164f, 28.686325f, 75f, 1);

	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_323, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_100 - { 20f, 20f, 20f }, uLocal_100 + { 20f, 20f, 20f }, true, true);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_91, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_91, true);
	
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_91))
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_91);
	}

	if (iLocal_315 == 2)
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");

	func_72(&uLocal_131);
	func_72(&blLocal_129);
	func_73(&uLocal_340);
	func_72(&blLocal_130);
	func_79(0);
	func_229(&uLocal_132, 0);
	func_229(&uLocal_132, 1);
	func_229(&uLocal_132, 2);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_91) && PED::IS_PED_IN_VEHICLE(pedLocal_90, veLocal_91, false))
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_90, veLocal_91, fLocal_112, 786485);
		PED::SET_PED_KEEP_TASK(pedLocal_90, true);
	}

	func_94(&pedLocal_89, true, 0, 1);
	func_94(&pedLocal_90, true, 0, 1);
	func_228(&veLocal_91);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_92))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(veLocal_92);
		func_228(&veLocal_92);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_StrPunk_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_BeachVesp_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scorcher"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bati"));
	STREAMING::REMOVE_ANIM_DICT(sLocal_316);
	STREAMING::REMOVE_ANIM_DICT(sLocal_317);
	STREAMING::REMOVE_ANIM_DICT(sLocal_319);
	STREAMING::REMOVE_ANIM_DICT(sLocal_320);
	STREAMING::REMOVE_ANIM_DICT(sLocal_321);
	STREAMING::REMOVE_ANIM_DICT(sLocal_322);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_228(Vehicle* pveParam0) // Position - 0x9879 (39033)
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void func_229(var uParam0, int iParam1) // Position - 0x98B1 (39089)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_230(int iParam0) // Position - 0x98CE (39118)
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_56();

	if (iParam0 == -1)
		return;

	if (func_241())
	{
		func_234(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114126 = MISC::GET_GAME_TIMER();
		func_233(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_232(Global_114124, true), 64);
	
		if (func_55(Global_114124) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114123, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114121, MISC::GET_GAME_TIMER() - Global_114122, 0);
	}
	else if (IS_BIT_SET(Global_114131, 0) && Global_114135.f_24999.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114131, 0);
	}

	func_231(&Global_33147);
	Global_114125 = false;
	func_185(-1);
	return;
}

void func_231(var uParam0) // Position - 0x9980 (39296)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44143))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44142 = 0;
	Global_44144 = 0;
	Global_44181 = 15;
	Global_64305 = 0;
	Global_64306 = 0;
	return;
}

char* func_232(int iParam0, BOOL bParam1) // Position - 0x99BD (39357)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_233(int iParam0) // Position - 0x9C06 (39942)
{
	Global_44732 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_234(int iParam0) // Position - 0x9C18 (39960)
{
	func_235(iParam0, 0, func_240(iParam0));
	return;
}

void func_235(int iParam0, int iParam1, int iParam2) // Position - 0x9C2D (39981)
{
	int unk;
	var unk2;

	unk = func_202();
	func_238(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_237(iParam0, &unk);
	unk2 = { func_236(&unk) };
	return;
}

struct<16> func_236(var uParam0) // Position - 0x9C5C (40028)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_196(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_195(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_194(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_197(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_200(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_198(*uParam0), 64);
	return unk;
}

void func_237(int iParam0, var uParam1) // Position - 0x9D2C (40236)
{
	Global_114135.f_24999.f_43[iParam0] = *uParam1;
	return;
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x9D44 (40260)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_198(*uParam0);
	i = func_200(*uParam0);
	num2 = func_197(*uParam0);
	j = func_196(*uParam0);
	k = func_195(*uParam0);
	l = func_194(*uParam0);

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

	for (m = func_193(i, num); num2 > m; m = func_193(i, num))
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
	func_239(uParam0, l, k, j, num2, i, num);
	return;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x9EC6 (40646)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
	return;
}

int func_240(int iParam0) // Position - 0x9EFE (40702)
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

BOOL func_241() // Position - 0xA0A1 (41121)
{
	if (Global_114124 == func_56() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114125)
		return true;

	return false;
}

